clear all;
clc;
close all;
%%
% load('Agosto_Real_2206_rawData.mat');
% load('ThreeMonths_Real_2706_BF.mat');
nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
figurePath = ['figures\' typeOfData '\'];
tau_R = 5;
N_y = 20;
K_ahead = 1;
K_forecast = 5;
%%
saveToMatFile = false;
imprint = false;
optimizeMLHyperparameters = false;
mlMethod = 'RF';
seed = rng(1231231); % For reproducibility (should look into this after)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
useDelayMV_CV = true;
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
%%
matFileName = [nameDataset typeOfData noiseStr dateTest '_BF.mat'];
% load(matFileName);
load('testScriptML.mat');
%% Plant specifics
m = length(SimResults.MV);
d = length(SimResults.DV);
d = 2;
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
controlParamsStruct.tau_R = tau_R; % 10
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
%     controlParamsStruct.delayMV_CV = floor(SimResults.delayMV_CV/controlParamsStruct.tau_R);
    controlParamsStruct.delayMV_CV = floor([10 10 0 10;
                                            10 10 0 10;
                                            10 10 0 10]/controlParamsStruct.tau_R);
    ioDTStr = 'ioDT_';
else
    controlParamsStruct.delayMV_CV = zeros(3,5);
    ioDTStr = '';
end

%% DownSamplig for tau_R
SimResults = ml_downsampling(SimResults,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(SimResults.CV(1).GroupedTimeSeries);
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
mlParamsStruct.trainingSamples = floor(0.85*nSamples);
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
                                                                    SimResults,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct);
testBatch = 8; %Backward Compatibility

                                                                
% %% RF Models
for cv = 1:n
    rfFileName = ['testBench' num2str(cv) '_' typeOfData ioDTStr...
                    dateTest '_k' num2str(tau_R) '.mat'];
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
                                controlParamsStruct.N_y,...
                                controlParamsStruct.tau_R,...
                                mOrder.na,...
                                mlParamsStruct);
    
    [~,~,yHatForecast] = ml_predict_N_ahead(ML_Model.Model,testSubsetRF(cv).InputData(1:K_forecast+N_y,:),...
                                            testSubsetRF(cv).OutputData(1:K_forecast+N_y,:),K_forecast,...
                                            controlParamsStruct.tau_R,mOrder.na(cv),...
                                            mlParamsStruct,-1);
    yForecast = ml_forecast(ML_Model.Model,testSubsetRF(cv).InputData,...
                            K_forecast,mOrder.na(cv));
    RFPredictionStruct(cv).yHat = results.yHat;
    RFPredictionStruct(cv).yHatForecast = yHatForecast;
    RFPredictionStruct(cv).yForecast = yForecast;
    RFPredictionStruct(cv).MSE = results.MSE;
    RFPredictionStruct(cv).Correlation = results.Correlation;
    RFPredictionStruct(cv).OOBError = results.OOBError;
end
delayMaxInTime = max(max(max(mlParamsStruct.DelayMatrix.U)),max(max(mlParamsStruct.DelayMatrix.Y)));
%% ARMAX Models
armaxFileName = ['testBenchARMAX_MDL_' typeOfData ioDTStr...
                    dateTest '_k' num2str(tau_R) '.mat'];
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

validationOutputs = testData.OutputData;
inputTimeSeries = testData.InputData;
predictInputData = iddata(validationOutputs,inputTimeSeries,controlParamsStruct.tau_R);

[armaxPredict,x0,sys_pred] = predict(armaxModel,predictInputData,K_ahead,pOptions);
icForecast = idpar(x0);
armaxPredict = armaxPredict.OutputData;

deadTimeMax = max(max(mlParamsStruct.delayMV_CV));
armaxToRFWindowLB = deadTimeMax+(K_ahead-1)+delayMaxInTime;
armaxToRFWindowUB = controlParamsStruct.N_y-1-(K_ahead-1);
%% Forecast & Predict Compare
%{}

fOptions = forecastOptions('InitialCondition','e');
pastDataSamples = 1000;

forecastInputData = iddata(validationOutputs(1:pastDataSamples+armaxToRFWindowLB,:),...
                            inputTimeSeries(1:pastDataSamples+armaxToRFWindowLB,:),controlParamsStruct.tau_R);
armaxForecast = forecast(armaxModel,forecastInputData,K_forecast,...
                        inputTimeSeries(pastDataSamples+1+armaxToRFWindowLB...
                        :pastDataSamples+armaxToRFWindowLB+K_forecast,:),fOptions);
armaxForecast = armaxForecast.OutputData;

%}
%% Plot prediction comparisons

CVNames = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque_','Cp_u_','intLevel_','Cp_e_','tauRd_','SFlx_','P1_U_','Q_e_'};
kAheadStr = [num2str(K_ahead) showGoodStr '_'];
time = linspace(0,size(RFPredictionStruct(1).yHat,1)*tau_R/60,size(RFPredictionStruct(1).yHat,1)+1);

for cv = 1:n
    figure
    plot(validationOutputs(pastDataSamples+1:pastDataSamples+K_forecast,cv))
    hold on
    plot(armaxPredict(pastDataSamples+1:pastDataSamples+K_forecast,cv))
    plot(armaxForecast(:,cv))
    plot(RFPredictionStruct(cv).yHatForecast(1,:));
    legend('Validation','ARMAX Predict','ARMAX Forecast','RF Forecast');
    xlabel(['Samples [' num2str(controlParamsStruct.tau_R) ' min/sample]'])
    hold off
    grid on
    printName = [figurePath 'forecast_' CVSaveName{cv} typeOfData ioDTStr noiseStr kAheadStr dateTest];
    if imprint
        % Latex
        print(printName,'-depsc');
    end
end

for cv = 1:n
    figure
    title(CVNames{cv})
    hold on
    plot(time(1:end-1),validationOutputs(1+armaxToRFWindowLB:end-armaxToRFWindowUB,cv))
    plot(time(1:end-1),armaxPredict(1+armaxToRFWindowLB:end-armaxToRFWindowUB,cv));
    plot(time(1:end-1),RFPredictionStruct(cv).yHat(:,K_ahead))
%     plot(testSubsetRF(cv).OutputData(1:end-armaxToRFWindowUB));
    ylabel(CVUnits{cv})
    xlabel('Hours [hr]')
    legend({'Validation','ARIMAX','RF'});
    hold off
    grid on
    printName = [figurePath CVSaveName{cv} typeOfData ioDTStr noiseStr kAheadStr dateTest];
    if imprint
        % Latex
        print(printName,'-depsc');
    end
end