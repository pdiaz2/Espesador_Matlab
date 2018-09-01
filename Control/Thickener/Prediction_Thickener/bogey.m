nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
figurePath = ['figures\' typeOfData '\'];

% Save and print bools
imprint = false;
useTimePlot = true;
saveResultsToMatFile = false;
saveModelToMatFile = false;
%%%%%%
% RF Specifics
numTreesInput = 100;
tau_RInput = 5;
naInput = 6;
nbInput = 6;
cvToGenerate = 2;

% ARMAX Specifics
NAInput = 3;
NBInput = 3;
NCInput = 3;
selectedCV = [1 2 3];
selectedMV = [1 2];
selectedDV = [1 2];
%%%%%%%%%%%%%%%%
trainVSValInput = 0.85;
tau_R = tau_RInput;
N_y = 20;
pastDataSamples = 1200; % 100 for storedd pictures which exhibit good things
K_ahead = 20;
K_forecast = 48;
varStringRF = ['B' num2str(numTreesInput) ...
              '_k' num2str(tau_RInput) '_'...
              'na' num2str(naInput) '_nb' num2str(nbInput)];
varStringARMAX = ['k' num2str(tau_RInput) '_'...
                'na' num2str(NAInput) '_nb' num2str(NBInput)...
                '_nc' num2str(NCInput)];
ioDTStr = '';

    noiseStr = 'Noise_';
Dt = 1;
%% Reaction Curves
makeMatrix = eye(4);%;[1 0 1 1];
% load('ThickenerOperation_Septiembre_rawData.mat');
load('x0Control_Sim_1408.mat')
stepTests = true; 
D0 = [326.3733 0.3143 0.356];
U0 = [114.8275 26.0152]; 
Y0 = [21.0190  73.7604   2.1261];
addICInSimulation = ones(1,5);
amplitude = 20;
[numMakes ~] = size(makeMatrix);
stepInitTime = 300;
groupBy = 60; % This should be automatic
tau_R = 5*groupBy;
simTime = 10*K_forecast*tau_R+stepInitTime;
for iterationsSim = 1:size(makeMatrix)
    make = makeMatrix(iterationsSim,:);
    if stepTests
        Q_fVals = myStepTest(simTime,Dt,15,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        Cp_fVals = myStepTest(simTime,Dt,0.05,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        p1_fVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        Q_uVals = myStepTest(simTime,Dt,-20,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        gptVals = myStepTest(simTime,Dt,-3,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        %%
        Q_fVals = Q_fVals.signals.values;
        Cp_fVals = Cp_fVals.signals.values;
        p1_fVals = p1_fVals.signals.values;
        Q_uVals = Q_uVals.signals.values;
        gptVals = gptVals.signals.values;
        %%
%         Q_fAmplitude = 1.4*D0(1)*0.2;
%         Cp_fAmplitude = 1.4*D0(2)*0.2;
%         p1_fAmplitude = 1.4*D0(3)*0.2;
%         Q_uAmplitude = 1.4*U0(1)*0.2;
%         gptAmplitude = 1.4*U0(2)*0.2;
        %%
        Q_f.time = linspace(0,simTime-Dt,simTime/Dt)';
        Q_f.signals.dimensions = [1];
        Q_f.signals.values = Q_fVals;

        Cp_f.time = linspace(0,simTime-Dt,simTime/Dt)';
        Cp_f.signals.dimensions = [1];
        Cp_f.signals.values = Cp_fVals;

        p1_f.time = linspace(0,simTime-Dt,simTime/Dt)';
        p1_f.signals.dimensions = [1];
        p1_f.signals.values = p1_fVals;

        Q_u.time = linspace(0,simTime-Dt,simTime/Dt)';
        Q_u.signals.dimensions = [1];
        Q_u.signals.values = Q_uVals;

        gpt.time = linspace(0,simTime-Dt,simTime/Dt)';
        gpt.signals.dimensions = [1];
        gpt.signals.values = gptVals;
    else
        Q_u.signals.values = BigData.PreProcessed(4,1:simTime)';
        Q_u.time = linspace(0,simTime,simTime/Dt)';
        gpt.signals.values = FlocculantNew(1,1:simTime)';
        gpt.time = linspace(0,simTime,simTime/Dt)';
        Q_f.signals.values = BigData.PreProcessed(7,1:simTime)';
        Q_f.time = linspace(0,simTime,simTime/Dt)';
        Cp_f.signals.values = wt_f(1:simTime)'/100;
        Cp_f.time = linspace(0,simTime,simTime/Dt)';
        p1_f.signals.values = D0(3)*ones(1,simTime)';
        p1_f.time = linspace(0,simTime,simTime/Dt)';
    end
    %%
    run parametrosEmpty.m

    load('Agosto_Sim_1408_Noise_State.mat');
    tic;
%     sim('rf_thickener_open_loop.slx');
    toc;
    Q_fDS = downsample(Q_f.signals.values,tau_R);
    Cp_fDS = downsample(Cp_f.signals.values,tau_R);
    Q_uDS = downsample(Q_u.signals.values,tau_R);
    gptDS = downsample(gpt.signals.values,tau_R);
    externalInput = [Q_fDS Cp_fDS Q_uDS gptDS];
    for cv = 1:3
        rfFileName = ['TBag_RF_Y' num2str(cv) '_' typeOfData...
                        ioDTStr noiseStr...
                        varStringRF '_' dateTest '.mat'];
        load(rfFileName);
        mlParamsStruct.cvToGenerate = cv;
        inputTimeSeries = [x0_RF.y0Memory(cv,:) x0_RF.d0Memory(:)' x0_RF.u0Memory(:)'];
        yReactionCurve_RF(cv,:) = ml_forecast_step(ML_Model.Model,inputTimeSeries,K_forecast,...
                                mOrder.na,mOrder.nb,externalInput);
    end
    futureData = [externalInput(1:K_forecast,:) zeros(K_forecast,3)];
    tForecast = [0:tau_R:(K_forecast-1)*tau_R]';
    augmentedSys = ss(armaxModel,'augmented');
    yReactionCurve_ARMAX = lsim(augmentedSys,futureData,tForecast,x0Forecast);
end