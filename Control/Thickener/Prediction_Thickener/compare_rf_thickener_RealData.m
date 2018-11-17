clear all;
clc;
close all;
%%
% load('Agosto_Sim_1408_rawData.mat');
% load('ThreeMonths_Real_1408_BF.mat');
% load('Abril_A_Julio_Real18_%%%_1708'
nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
figurePath = ['figures\' typeOfData '\'];

% Save and print bools
imprint = false;
useTimePlot = true;
%%%%%%
% RF Specifics
numTreesInput = 100;
tau_RInput = 5;
naInput = 6;
nbInput = 6;
cvToGenerate = 2;

% ARMAX Specifics
NAInput = 5;
NBInput = 4;
NCInput = 3;
selectedCV = [1 2 3];
selectedMV = [1 2];
selectedDV = [1 2];
%%%%%%%%%%%%%%%%
trainVSValInput = 0.85;
tau_R = tau_RInput;
N_y = 20;
pastDataSamples = 920; % 100 for stored pictures which exhibit good things; 170; 470 best; 348 best best
K_ahead = 18;
K_forecast = 48; % >= 1
varStringRF = ['B' num2str(numTreesInput) ...
              '_k' num2str(tau_RInput) '_'...
              'na' num2str(naInput) '_nb' num2str(nbInput)];
varStringARMAX = ['k' num2str(tau_RInput) '_'...
                'na' num2str(NAInput) '_nb' num2str(NBInput)...
                '_nc' num2str(NCInput)];
%% Plot Options
LineWidth = 0.7;
%%
optimizeMLHyperparameters = false;
mlMethod = 'RF';

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
useDelayMV_CV = false;
noiseyData = true;
generateOne = true;
showGood = true;
%%%%%%%%%%%%%%%%%%%%
if generateOne
    % Input wave
    cvToGenerate = 2;
    experiment = 1;
    delayUCases = 1;
    delayYCases = 2;
else
   waveVector = 1:4;
   cvToGenerate = -1; %Not used in this case
end

if noiseyData
    noiseStr = 'Noise_';
else
    noiseStr = '';
end
seed = rng(1231231); % For reproducibility (should look into this after)
%%
matFileName = [nameDataset typeOfData noiseStr dateTest '_BF.mat'];
load(matFileName);
% load('testScriptML.mat');
%% Plant specifics
MachineLearningData = ml_pick_variables(selectedCV,selectedMV,selectedDV,SimResults);
n = length(MachineLearningData.CV);
m = length(MachineLearningData.MV);
d = length(MachineLearningData.DV);
numInputs = d+m;
numOutputs = n;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = tau_R; % 10
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
%     controlParamsStruct.delayMV_CV = floor(SimResults.delayMV_CV/controlParamsStruct.tau_R);
%     controlParamsStruct.delayMV_CV = floor([10 10 0 10;
%                                             10 10 0 10;
%                                             10 10 0 10]/controlParamsStruct.tau_R);
    ioDTStr = 'ioDT_';
else
    controlParamsStruct.delayMV_CV = zeros(3,5);
    ioDTStr = '';
end

%% DownSamplig for tau_R
MachineLearningData = ml_downsampling(MachineLearningData,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(MachineLearningData.CV(1).GroupedTimeSeries);
nSamples = controlParamsStruct.nSamples;
%% Machine Learning - Structural Parameters
% Delete plzzz
mlParamsStruct.trainingParamsArray = {100,1,'on',10,'on','curvature','TBagger'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;

mlParamsStruct.DelayMatrix.U = repmat([1]',1,numInputs);
[mlParamsStruct.sizeUMatrix garbage] = size(mlParamsStruct.DelayMatrix.U);
mlParamsStruct.delayMV_CV = controlParamsStruct.delayMV_CV;

mlParamsStruct.DelayMatrix.Y = repmat([4:5]',1,numOutputs);
[mlParamsStruct.sizeYMatrix garbage] = size(mlParamsStruct.DelayMatrix.Y);

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(trainVSValInput*nSamples);
if strcmp(typeOfData,'Real_') && showGood
    mlParamsStruct.limitTestDataIndex = 24177;
    showGoodStr = 'G';    
else
    mlParamsStruct.limitTestDataIndex = controlParamsStruct.nSamples;
    if strcmp(typeOfData,'Real_')
       showGoodStr = 'B'; 
    else
        showGoodStr = 'G';
    end
end
mlParamsStruct.validationSamples = mlParamsStruct.limitTestDataIndex -...
                                mlParamsStruct.trainingSamples;
mlParamsStruct.mlMethod = mlMethod;
mlParamsStruct.generateOneBool = generateOne;

%% Training & Testing Set
testBigSet = struct;
trainingBigSet = struct;
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    MachineLearningData,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct);
testBatch = 8; %Backward Compatibility

delayMaxInTime = -1;

% %% RF Models
for cv = 1:n
    rfFileName = ['TBag_RF_Y' num2str(cv) '_' typeOfData...
                    ioDTStr noiseStr...
                    varStringRF '_' dateTest '.mat'];
    load(rfFileName);
    mlParamsStruct.cvToGenerate = cv;
    %% Predict with RF
    [testSubsetRF,~] = ml_prepare_IO_data(testBigSet,...
                                    controlParamsStruct.nameInputs,...
                                    controlParamsStruct.nameOutputs,...
                                    1, controlParamsStruct.tau_R,...
                                    mlParamsStruct.validationSamples,...
                                    mOrder.na, mOrder.nb,....
                                    mlParamsStruct);
    
    results = ml_validate_model(testSubsetRF,ML_Model,...
                                controlParamsStruct.dimsSystem(1),...
                                K_ahead,...
                                controlParamsStruct.tau_R,...
                                mOrder.na,...
                                mlParamsStruct);
    
    % For forecasting, I need to give pastDataSamples before forecasting,
    % so I need to adjust RF for that
    yForecast = ml_forecast(ML_Model.Model,testSubsetRF(cv).InputData(1+pastDataSamples:end,:),...
                            K_forecast,mOrder.na(cv));
    RFPredictionStruct(cv).yHat = results.yHat;
    RFPredictionStruct(cv).yForecast = yForecast;
    RFPredictionStruct(cv).MSE = results.MSE;
    RFPredictionStruct(cv).Correlation = results.Correlation;
    RFPredictionStruct(cv).OOBError = results.OOBError;
    
    RFPredictionStruct(cv).na = mOrder.na;
    RFPredictionStruct(cv).nb = mOrder.nb;
    delayMaxInTime = max(delayMaxInTime,max(max(mOrder.na),max(mOrder.nb(cv))));
end
%% Maximum Delay for Adjustment
% Because:
% 1) My RF starts predicting from deadTimeMax+delayMaxinTime ahead 
% 2) The way ml_validate_model works leaves out the first K_ahead-1 samples
% I have to start comparing from deadTimeMax + delayMaxInTime+1;
% delayMaxInTime = max(max(max(mlParamsStruct.DelayMatrix.U)),max(max(mlParamsStruct.DelayMatrix.Y)));
deadTimeMax = max(max(mlParamsStruct.delayMV_CV));
% RF is ahead of ARMAX by armaxToRFWindowLB
%%%%%%%%%%%%%%%%%%%%%%%%%
armaxToRFWindowLB = deadTimeMax + delayMaxInTime+K_ahead-1;
armaxToRFWindowUB = 0;
%% ARMAX Models
armaxFileName = ['ARMAX_MDL_' typeOfData ioDTStr...
                ioDTStr noiseStr...
                varStringARMAX '_' dateTest '.mat'];
load(armaxFileName);
modelOrder = order(armaxModel);
mlMethod = 'ARMAX';
[trainingData,~] = ml_prepare_IO_data(trainingBigSet,...
                    controlParamsStruct.nameInputs,...
                    controlParamsStruct.nameOutputs,...
                    1, controlParamsStruct.tau_R,...
                    mlParamsStruct.validationSamples,...
                    mOrder.na, mOrder.nb,....
                    mlParamsStruct);
[testData,~] = ml_prepare_IO_data(testBigSet,...
                    controlParamsStruct.nameInputs,...
                    controlParamsStruct.nameOutputs,...
                    1, controlParamsStruct.tau_R,...
                    mlParamsStruct.validationSamples,...
                    mOrder.na, mOrder.nb,....
                    mlParamsStruct);
ic.Input = trainingData.InputData(end-(modelOrder+500):end,:);
ic.Output = trainingData.OutputData(end-(modelOrder+500):end,:);
pOptions = predictOptions('InitialCondition',ic);

validationOutputs = testData.OutputData(1+armaxToRFWindowLB:end,:);
inputTimeSeries = testData.InputData(1+armaxToRFWindowLB:end,:);
predictInputData = iddata(validationOutputs,inputTimeSeries,controlParamsStruct.tau_R*60,...
                          'TimeUnit','seconds');

[armaxPredict,x0Predicted,sys_pred] = predict(armaxModel,predictInputData,K_ahead,pOptions);
icForecast = idpar(x0Predicted);
armaxPredict = armaxPredict.OutputData;
realStates = x0Predicted ~=0;
x0Predicted = x0Predicted(realStates);

if isequal(validationOutputs(1+pastDataSamples:pastDataSamples+K_forecast,1),...
        testSubsetRF(1).OutputData(1+pastDataSamples:pastDataSamples+K_forecast))
    fprintf('Comparing same portion of data =)\r\n')
else
    fprintf('Using different portions of data =(\r\n')
end
%% IC for September Control RF
for cv = 1:numOutputs
   x0_RF.y0Memory(cv,:) = fliplr(validationOutputs(end-RFPredictionStruct(cv).na+1:end,cv)');
end

for mv = 1:2
   x0_RF.u0Memory(mv,:) = fliplr(inputTimeSeries(end-RFPredictionStruct(cv).nb+1:end,mv+2)');
end

for dv = 1:2
   x0_RF.d0Memory(dv,:) =  fliplr(inputTimeSeries(end-RFPredictionStruct(cv).nb+1:end,dv)');
end

%% Forecast & Predict Compare
%{}

fOptions = forecastOptions('InitialCondition','e');

% forecastInputData becomes initial data (out of forecasting period)
forecastInputData = iddata(validationOutputs(1:pastDataSamples,:),...
                            inputTimeSeries(1:pastDataSamples,:),...
                            controlParamsStruct.tau_R,'TimeUnit','minutes');
% Forecast start from 
[armaxForecast,x0Forecast,sysForecast,yf_sd,xForecast,x_sd] = forecast(armaxModel,forecastInputData,K_forecast,...
                                            inputTimeSeries(1+pastDataSamples...
                                            :pastDataSamples+K_forecast,:),fOptions);
armaxForecast = armaxForecast.OutputData;
%% Use No Noise Data
% For graphical reasons, it is best to remove noise of actual outputs so we
% can see clearly

if strcmp(typeOfData,'Sim_')
    noiseStrWEON = '';
    matFileName = [nameDataset typeOfData noiseStrWEON dateTest '_BF.mat'];
    load(matFileName);
    MachineLearningData = ml_pick_variables(selectedCV,selectedMV,selectedDV,SimResults);
    MachineLearningData = ml_downsampling(MachineLearningData,controlParamsStruct,'d');
    garbageSet = struct;
    validationBigSet = struct;
    [garbageSet,validationBigSet,controlParamsStruct] = ml_generate_tT_sets(garbageSet,...
                                                                    validationBigSet,...
                                                                    MachineLearningData,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct);
    [testValData,~] = ml_prepare_IO_data(validationBigSet,...
                    controlParamsStruct.nameInputs,...
                    controlParamsStruct.nameOutputs,...
                    1, controlParamsStruct.tau_R,...
                    mlParamsStruct.validationSamples,...
                    mOrder.na, mOrder.nb,....
                    mlParamsStruct);
    validationOutputs = testValData.OutputData(1+armaxToRFWindowLB:end,:); 
end

%% Reaction Curves
% if strcmp(typeOfData,'Sim_')
%     makeStepMatrix = eye(4);%;[1 0 1 1];
%     % load('ThickenerOperation_Septiembre_rawData.mat');
%     stepTests = true;
%     D0 = [326.3733 0.3143 0.356];
%     U0 = [114.8275 26.0152]; 
%     Y0 = [21.0190  73.7604   2.1261];
%     forecastBatches = 2;
%     addICInSimulation = ones(1,5);
%     [numMakes ~] = size(makeStepMatrix);
%     stepInitTime = 300;
%     groupBy = 60; % This should be automatic
%     tau_R_RC = 5*groupBy;
%     simTime = 5*K_forecast*tau_R_RC+stepInitTime;
%     for simIter = 1:size(makeStepMatrix)
%         make = makeStepMatrix(simIter,:);
%         if stepTests
%             Q_fVals = myStepTest(simTime,Dt,15,3*K_forecast*tau_R_RC+stepInitTime,stepInitTime,1,0,simTime/4);
%             Cp_fVals = myStepTest(simTime,Dt,0.05,3*K_forecast*tau_R_RC+stepInitTime,stepInitTime,1,0,simTime/4);
%             p1_fVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R_RC+stepInitTime,stepInitTime,1,0,simTime/4);
%             Q_uVals = myStepTest(simTime,Dt,-20,3*K_forecast*tau_R_RC+stepInitTime,stepInitTime,1,0,simTime/4);
%             gptVals = myStepTest(simTime,Dt,-3,3*K_forecast*tau_R_RC+stepInitTime,stepInitTime,1,0,simTime/4);
%             %%
%             Q_fVals = Q_fVals.signals.values;
%             Cp_fVals = Cp_fVals.signals.values;
%             p1_fVals = p1_fVals.signals.values;
%             Q_uVals = Q_uVals.signals.values;
%             gptVals = gptVals.signals.values;
% 
%             %%
%             Q_f.time = linspace(0,simTime-Dt,simTime/Dt)';
%             Q_f.signals.dimensions = [1];
%             Q_f.signals.values = Q_fVals;
% 
%             Cp_f.time = linspace(0,simTime-Dt,simTime/Dt)';
%             Cp_f.signals.dimensions = [1];
%             Cp_f.signals.values = Cp_fVals;
% 
%             p1_f.time = linspace(0,simTime-Dt,simTime/Dt)';
%             p1_f.signals.dimensions = [1];
%             p1_f.signals.values = p1_fVals;
% 
%             Q_u.time = linspace(0,simTime-Dt,simTime/Dt)';
%             Q_u.signals.dimensions = [1];
%             Q_u.signals.values = Q_uVals;
% 
%             gpt.time = linspace(0,simTime-Dt,simTime/Dt)';
%             gpt.signals.dimensions = [1];
%             gpt.signals.values = gptVals;
%         else
%             Q_u.signals.values = BigData.PreProcessed(4,1:simTime)';
%             Q_u.time = linspace(0,simTime,simTime/Dt)';
%             gpt.signals.values = FlocculantNew(1,1:simTime)';
%             gpt.time = linspace(0,simTime,simTime/Dt)';
%             Q_f.signals.values = BigData.PreProcessed(7,1:simTime)';
%             Q_f.time = linspace(0,simTime,simTime/Dt)';
%             Cp_f.signals.values = wt_f(1:simTime)'/100;
%             Cp_f.time = linspace(0,simTime,simTime/Dt)';
%             p1_f.signals.values = D0(3)*ones(1,simTime)';
%             p1_f.time = linspace(0,simTime,simTime/Dt)';
%         end
%         %%
%         run parametrosEmpty.m
% 
%         load('Agosto_Sim_1408_Noise_State.mat');
%         tic;
%         sim('rf_thickener_open_loop.slx');
%         toc;
%         yThickener = downsample(ySimThickener.signals.values(:,1:numOutputs),tau_R_RC);
%         ReactionCurveStruct(simIter).yThickener = yThickener(1:forecastBatches*K_forecast,:);
%         Q_fDS = downsample(inputs.signals.values(:,1),tau_R_RC);
%         Cp_fDS = downsample(inputs.signals.values(:,2),tau_R_RC);
%         Q_uDS = downsample(inputs.signals.values(:,3),tau_R_RC);
%         gptDS = downsample(inputs.signals.values(:,4),tau_R_RC);
%         externalInput = [Q_fDS Cp_fDS Q_uDS gptDS];
%         for cv = 1:3
%             rfFileName = ['TBag_RF_Y' num2str(cv) '_' typeOfData...
%                             ioDTStr noiseStr...
%                             varStringRF '_' dateTest '.mat'];
%             load(rfFileName);
%             mlParamsStruct.cvToGenerate = cv;
%             inputTimeSeries = [x0_RF.y0Memory(cv,:) x0_RF.d0Memory(:)' x0_RF.u0Memory(:)'];
%             yRC_RF(cv,:) = ml_forecast_step(ML_Model.Model,inputTimeSeries,...
%                                             forecastBatches*K_forecast,...
%                                             mOrder.na,mOrder.nb,externalInput);
%         end
%         ReactionCurveStruct(simIter).y_RF = yRC_RF';
%         futureData = [externalInput(1:forecastBatches*K_forecast,3:4) zeros(forecastBatches*K_forecast,3)];
%         tForecast = [0:tau_R_RC:(forecastBatches*K_forecast-1)*tau_R_RC]';
%         augmentedSys = ss(armaxModel,'augmented');
%         yRC_ARMAX = lsim(augmentedSys,futureData,tForecast,x0Predicted);
%         ReactionCurveStruct(simIter).y_ARMAX = yRC_ARMAX';
%     end
% end
%% Options for plotting

CVNames = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque_','Cp_u_','intLevel_','Cp_e_','tauRd_','SFlx_','P1_U_','Q_e_'};
kAheadStr = [num2str(K_ahead)  showGoodStr '_'];
if useTimePlot
    timePrediction = linspace(0,(size(RFPredictionStruct(1).yHat,1)-1)*tau_R/60,size(RFPredictionStruct(1).yHat,1));
    timeForecast = linspace(1,K_forecast*tau_R/60,K_forecast);
    xLabelStr = 'Time [hr]';
else
    timePrediction = linspace(0,size(RFPredictionStruct(1).yHat,1)-1,size(RFPredictionStruct(1).yHat,1));
    timeForecast = linspace(1,K_forecast,K_forecast);
    xLabelStr = (['Samples [' num2str(controlParamsStruct.tau_R) ' min/sample]']);
end
%% Plot prediction comparisons
% Forecast comparison
for cv = 1:n
    figure
    plot(timeForecast,validationOutputs(1+pastDataSamples:pastDataSamples+K_forecast,cv),'LineWidth',2)
    hold on
    title(CVNames{cv})
    plot(timeForecast,armaxForecast(:,cv),'--k','LineWidth',1.5)
    plot(timeForecast,RFPredictionStruct(cv).yForecast(:),'-.r','LineWidth',1.5)
    legend('Validation','ARMAX Forecast','RF Forecast');
    xlabel(xLabelStr);
    hold off
    grid on
    printName = [figurePath 'forecast_' CVSaveName{cv} typeOfData ioDTStr noiseStr...
                kAheadStr varStringRF '_' dateTest];
    if imprint
        % Latex
        print(printName,'-depsc');
        print(printName,'-djpeg');
    end
end
%}

% Prediction comparison
for cv = 1:n
    figure
    title(CVNames{cv})
    hold on % (-1)
    plot(timePrediction(1:end),validationOutputs(1:end-armaxToRFWindowUB,cv),'LineWidth',2)
    plot(timePrediction(1:end),armaxPredict(1:end-armaxToRFWindowUB,cv),'--k','LineWidth',LineWidth);
    plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,K_ahead),'-.r','LineWidth',LineWidth)
    ylabel(CVUnits{cv})
    xlabel(xLabelStr)
    legend({'Validation','ARIMAX','RF'});
    hold off
    grid on
    printName = [figurePath CVSaveName{cv} typeOfData ioDTStr noiseStr...
                kAheadStr varStringRF '_' dateTest];
    if imprint
        % Latex
        print(printName,'-depsc');
        print(printName,'-djpeg');
    end
end

% Reaction Curves
% if strcmp(typeOfData,'Sim_')
%     for simIter = 1:size(makeStepMatrix)
%         for cv = 1:n
%             figure
%             title(CVNames{cv})
%             hold on
%             plot(tForecast/3600,ReactionCurveStruct(simIter).yThickener(:,cv)','LineWidth',1.5)
%             plot(tForecast/3600,ReactionCurveStruct(simIter).y_ARMAX(cv,:),'--k','LineWidth',1.5);
%             plot(tForecast/3600,ReactionCurveStruct(simIter).y_RF(:,cv)','-.r','LineWidth',1.5)
% 
%             ylabel(CVUnits{cv})
%             xlabel(xLabelStr)
%             legend({'Validation','ARIMAX','RF'});
%             hold off
%             grid on
%             printName = [figurePath 'RC_' CVSaveName{cv} num2str(simIter) '_'...
%                         typeOfData ioDTStr noiseStr...
%                         kAheadStr varStringRF '_' dateTest];
%             if imprint
%                 % Latex
%                 print(printName,'-depsc');
%                 print(printName,'-djpeg');
%             end
%         end
%     end
% end
%% IC for September control ARIMAX
% x0_ARMAX = x0Predicted;
% if strcmp(typeOfData,'Sim_')
%     save(['x0Control_' typeOfData dateTest '_NO.mat'],'x0_RF','x0_ARMAX');
% end
%% Save for plot
pMatName = ['predictionResults_' kAheadStr num2str(pastDataSamples) '_' varStringRF '.mat'];
% save(pMatName,'RFPredictionStruct','armaxForecast','armaxPredict','ReactionCurveStruct',...
%               'validationOutputs','tForecast','timeForecast','timePrediction',...
%               'K_ahead','pastDataSamples','K_forecast','n','armaxToRFWindowUB',...
%                'makeStepMatrix');
save(pMatName,'RFPredictionStruct','armaxForecast','armaxPredict',...
              'validationOutputs','timeForecast','timePrediction',...
              'K_ahead','pastDataSamples','K_forecast','n','armaxToRFWindowUB'...
               );           