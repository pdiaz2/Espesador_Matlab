clear all;
clc;
close all;
%%
% load('Agosto_Real_2206_rawData.mat');
% load('ThreeMonths_Real_2706_BF.mat');
nameDataset = 'ThreeMonths_';
typeOfData = 'Real_';
dateTest = '2906';
matFileName = [nameDataset typeOfData dateTest '_BF.mat'];
figurePath = ['figures\' typeOfData '\'];
%%
load(matFileName);
%%
saveToMatFile = false;
optimizeMLHyperparameters = false;
mlMethod = 'RF';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
useDelayMV_CV = true;
generateOne = true;
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


%% Plant specifics
m = length(SimResults.MV);
d = length(SimResults.DV);
% d = 3;
numInputs = d+m;
% n = length(SimResults.CV);
% n = length(SimResults.CV)-1;
n = 3;
numOutputs = n;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = 5; % 10
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
    controlParamsStruct.delayMV_CV = floor(SimResults.delayMV_CV/controlParamsStruct.tau_R);
    ioDT_RF = 'ioDT_';
    ioDT_ARMAX = 'IODT_';
else
    controlParamsStruct.delayMV_CV = zeros(3,5);
    ioDT_RF = '';
    ioDT_ARMAX = '';
end

%% DownSamplig for tau_R
SimResults = ml_downsampling(SimResults,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(SimResults.CV(1).GroupedTimeSeries);
nSamples = controlParamsStruct.nSamples;
%% Machine Learning - Structural Parameters

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
mlParamsStruct.trainingSamples = floor(0.85*nSamples);
% mlParamsStruct.limitTestDataIndex = 24177;
mlParamsStruct.limitTestDataIndex = controlParamsStruct.nSamples;
mlParamsStruct.validationSamples = mlParamsStruct.limitTestDataIndex -...
                                mlParamsStruct.trainingSamples;
mlParamsStruct.mlMethod = mlMethod;
mlParamsStruct.generateOneBool = generateOne;
mlParamsStruct.cvToGenerate = cvToGenerate;
%% Training & Testing Set
testBigSet = struct;
trainingBigSet = struct;
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    SimResults,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct);
testBatch = 8; %Backward Compatibility

                                                                
% %% RF Models
for cv = 1:n
    rfFileName = ['RF_Y' num2str(cv) '_' typeOfData ioDT_RF dateTest '.mat'];
    load(rfFileName);
    %% Predict with RF
    [testSubset,~] = ml_prepare_IO_data(testBigSet,...
                                    controlParamsStruct.nameInputs,...
                                    controlParamsStruct.nameOutputs,...
                                    1, controlParamsStruct.tau_R,...
                                    mlParamsStruct.validationSamples,...
                                    mOrder.na, mOrder.nb,....
                                    mlParamsStruct);

    results = ml_validate_model(testSubset,ML_Model,...
                                controlParamsStruct.dimsSystem(1),...
                                controlParamsStruct.N_y,...
                                controlParamsStruct.tau_R,...
                                mOrder.na,...
                                mlParamsStruct);
    RFPredictionStruct(cv).yHat = results.yHat;
    RFPredictionStruct(cv).MSE = results.MSE;
    RFPredictionStruct(cv).Correlation = results.Correlation;
    RFPredictionStruct(cv).OOBError = results.OOBError;
end
%% ARMAX Models
armaxFileName = ['ARMAX_MDL_' typeOfData dateTest '.mat'];
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
                    mlMethod);

ic.Input = trainingData.InputData(end-modelOrder:end,:);
ic.Output = trainingData.OutputData(end-modelOrder:end,:);
pOptions = predictOptions('InitialCondition',ic);

validationOutputs = testData.OutputData;
% validationOutputs = downsample(validationOutputs,controlParamsStruct.tau_R);
inputTimeSeries = testData.InputData;
% inputTimeSeries = downsample(inputTimeSeries,controlParamsStruct.tau_R);
predictInputData = iddata(validationOutputs,inputTimeSeries,controlParamsStruct.tau_R);
K_ahead = 40;
[armaxPredict,x0,sys_pred] = predict(armaxModel,predictInputData,K_ahead,pOptions);
icForecast = idpar(x0);
armaxPredict = armaxPredict.OutputData;
fOptions = forecastOptions('InitialCondition','e');
pastDataSamples = 1000;
K_forecast = 100;
forecastInputData = iddata(validationOutputs(1:pastDataSamples,:),...
                            inputTimeSeries(1:pastDataSamples,:),controlParamsStruct.tau_R);
armaxForecast = forecast(armaxModel,forecastInputData,K_forecast,...
                        inputTimeSeries(pastDataSamples+1:pastDataSamples+K_forecast,:),fOptions);
armaxForecast = armaxForecast.OutputData;
figure
plot(validationOutputs(pastDataSamples+1:pastDataSamples+K_forecast,1))
hold on
plot(armaxPredict(pastDataSamples+1:pastDataSamples+K_forecast,1))
plot(armaxForecast(:,1))
legend('V','P','F');
hold off