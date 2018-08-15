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

% % D0 = [325.1 0.3143 0.356];
% % U0 = [111 26]; 
% % Y0 = [21.02  0.737   2.126 0];
Cf_avg = 0.3143; % [0,1]
Cf_sigma = Cf_avg*0.01/3;
Cf_sigma = 0;
Cf_seed = 30;

Qf_avg = 325.1/3600; % m3/s
% Qf_sigma = Qf_avg*0.01/3;
Qf_sigma = 0;
Qf_seed = 15;

p1_avg = 0.356; % percentage
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
simTime = 2e5;
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
auxString = [typeOfTest '_SS_' QuStr '_' gptStr '_findDelay'];
options.stepTestType = auxString;
% For DV uncomment below
stepSizes = 0.033*[Qf_avg Cf_avg p1_avg];
options.stepSizes = stepSizes;
options.stepDuration = 10*simTime/10;
options.stepInitTime = 0.25*simTime/100;
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
        options.stepInitTime,DVToGenerate(2,i),Cf_avg,options.timeGap);
    p1_f = myStepTest(simTime,Dt,options.stepSizes(i),options.stepDuration,...
        options.stepInitTime,0,p1_avg,options.timeGap);
    run parametrosEmpty.m
%     SS = ['SS_UF' QuStr '_FF_' gptStr '.mat'];
    load('Agosto_SimResults_1304_State.mat');

    tic;
    sim('espesadorOL_1202.slx');
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
% SimResults.CV(1).TimeSeries = torque.signals.values(1:end-1)';
% SimResults.CV(2).TimeSeries = Cp_u.signals.values(1:end-1)';
% SimResults.CV(3).TimeSeries = bedLevel.signals.values(1:end-1)';
% SimResults.CV(4).TimeSeries = Cp_e.signals.values(1:end-1)';
% SimResults.CV(5).TimeSeries = filloutliers(residenceTime.signals.values(1:end-2)','clip','median');
% SimResults.CV(6).TimeSeries = solidFlux.signals.values(1:end-2)';
% SimResults.CV(7).TimeSeries = p1_u.signals.values(1:end-1)';
% SimResults.CV(8).TimeSeries = Q_e.signals.values(1:end-2)'*3600;
% SimResults.CV(1).Name = 'Torque';
% SimResults.CV(2).Name = 'CpUf';
% SimResults.CV(3).Name = 'BdLvl';
% SimResults.CV(4).Name = 'CpEf';
% SimResults.CV(5).Name = 'TauRd';
% SimResults.CV(6).Name = 'SFlux';
% SimResults.CV(7).Name = 'P1Uf';
% SimResults.CV(8).Name = 'EfFlow';
% startYield(1,:) = 0;
% % MV
% 
% SimResults.MV(1).TimeSeries = Q_u.signals.values';
% SimResults.MV(2).TimeSeries = gpt.signals.values';
% SimResults.MV(1).Name = 'UFlow';
% SimResults.MV(2).Name = 'Gpt';
% % DV
% 
% SimResults.DV(1).TimeSeries = Q_f.signals.values'*3600;
% SimResults.DV(2).TimeSeries = Cp_f.signals.values';
% SimResults.DV(3).TimeSeries = p1_f.signals.values;
% SimResults.DV(1).Name = 'FeedFlow';
% SimResults.DV(2).Name = 'CpFeed';
% SimResults.DV(3).Name = 'P1Feed';

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
matFile = ['stepTest' options.stepTestType];
save(matFile,'torqueSteps','yieldStressSteps','Cp_uSteps','Cp_eSteps','bedLevelSteps','solidFluxSteps','residenceTimeSteps',...
    'Q_eSteps','p1_uSteps','options','startYield','Q_uControl','gptControl','Cp_fControl','Q_fControl','p1_fControl');
% save('steadyState_UF85_FF25.mat','phi0','w0','u10','u20','u30');


