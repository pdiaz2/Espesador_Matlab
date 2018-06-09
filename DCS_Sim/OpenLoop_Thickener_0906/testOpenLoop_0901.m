%% Preliminaries

% The option in Model Properties on simulink <PreLoadFcn> means that thos
% scripts are executed when the simulink model file is opened for the first
% time.
% The option InitFcn means that those scripts are executed everytime the
% model is run

% Refresh Parameters (thickener starts full of water currently)
run parametrosEmpty.m

startThickener = 0;


% Noise generation
% Currently with random numbers block, - maybe use band limited for solver
% issues.
% Could try to estimate a correlation function from Excel data of the noise
% that comes with each DV (fft of time series of Data-avg)
% Excel visual fit of normal
Cf_avg = 30/100; % [0,1]
Cf_sigma = Cf_avg*0.01/3;
Cf_sigma = 0;
Cf_seed = 30;

Qf_avg = 259.77/3600; % m3/s
% Qf_sigma = Qf_avg*0.01/3;
Qf_sigma = 0;
Qf_seed = 15;

p1_avg = 0.45; % percentage
% p1_sigma = p1_avg*0.01/3;
p1_sigma = 0;
p1_seed = 1035;

p2_f = 0.6;
p3_f = 0.8;
% Very important
% Sample Time for integrators is fixed to Dt (1 in parametros_1807)
% To make the simulation run faster noiseSampleTime has to be an integer
% multiple of Dt. 
%%% False: it runs equally fast with regular sample Time (multi
%%% rate is difficult to understand because of the gaps of values. Maybe a
%%% ZOH should be added manually.
noiseSampleTime = Dt;

%% Structure of Test
% Will aid in analysis
simTime = 1e4;
options.simTime = simTime;
options.initialConditions = [Qu_0 gpt_0]';
options.startThickener = startThickener;
options.noiseSampleTime = noiseSampleTime;
options.noiseSeeds = [Cf_seed Qf_seed p1_seed]';
options.noiseParameters = [Cf_avg Cf_sigma;Qf_avg Qf_sigma;p1_avg p1_sigma]; 
%% Simulation
% Steps
% StepSizes
QuStr = num2str(Qu_0);
gptStr = num2str(gpt_0);
if stepsMVToGenerate(1,1) == 1
    typeOfTest = 'UF';
elseif stepsMVToGenerate(1,2) == 1
    typeOfTest = 'FF';
end
auxString = [typeOfTest '_SS_' QuStr '_' gptStr];
options.stepTestType = auxString;
options.stepSizes = stepSizes;
% options.stepSizes = 0.033*[Qf_avg Cf_avg p1_avg];
options.stepDuration = 9.98*simTime/10;
options.stepInitTime = 1*simTime/100;
options.timeGap = 4*simTime/10;

DVToGenerate = 1*eye(3);
% DVToGenerate(1,i)
for i = 1:length(options.stepSizes)
    %[stepTime stepValue]
    Q_u = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,stepsMVToGenerate(1),Qu_0,options.timeGap);
    gpt = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,stepsMVToGenerate(2),gpt_0,options.timeGap);
    Q_f = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,0,Qf_avg,options.timeGap); % Change 0 for DVToGenerate(#DV,i) for DVStep
    Cp_f = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,0,Cf_avg,options.timeGap);
    p1_f = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,0,p1_avg,options.timeGap);
    run parametrosEmpty.m
    SS = ['SS_UF' QuStr '_FF_' gptStr '.mat'];
    load(SS,'phi0','w0','u10','u20','u30');
    tic;
    sim('espesadorOL_0901.slx');
    options.ticToc(1,i) = toc;
    % Outputs
    torqueSteps(i,:) = torque.signals.values';
    yieldStressSteps(i,:) = yieldStress.signals.values';
    Cp_uSteps(i,:) = Cp_u.signals.values';
    Cp_eSteps(i,:) = Cp_e.signals.values';
    Q_eSteps(i,:) = Q_e.signals.values';
    bedLevelSteps(i,:) = bedLevel.signals.values';
    p1_uSteps(i,:) = p1_u.signals.values';
    residenceTimeSteps(i,:) = residenceTime.signals.values';
    solidFluxSteps(i,:) = solidFlux.signals.values';
%     startYield(i,:) = max(find(isnan(yieldStress.signals.values)));
    startYield(i,:) = 0;
    % MV
    Q_uControl(i,:) = Q_u.signals.values';
    gptControl(i,:) = gpt.signals.values';
    % DV
    Q_fControl(i,:) = Q_f.signals.values';
    Cp_fControl(i,:) = Cp_f.signals.values';
    p1_fControl(i,:) = p1_f.signals.values';
end
%%
% Sanity check
% torque.signals.values(end)
% yieldStress.signals.values(end)
% Cp_u.signals.values(end)
% Cp_e.signals.values(end)
% overflow.signals.values(end)
% sedimentLevel.signals.values(end)
% p1_u.signals.values(end)
% Plots

%% Analysis
% startYield = max(find(isnan(yieldStress.signals.values)),2);
% difference = startYield
% matFile = ['stepTest' options.stepTestType];
% save(matFile,'torqueSteps','yieldStressSteps','Cp_uSteps','Cp_eSteps','bedLevelSteps','solidFluxSteps','residenceTimeSteps',...
%     'Q_eSteps','p1_uSteps','options','startYield','Q_uControl','gptControl','Cp_fControl','Q_fControl','p1_fControl');
% save('steadyState_UF85_FF25.mat','phi0','w0','u10','u20','u30');


