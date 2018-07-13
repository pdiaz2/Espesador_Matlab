%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Boolean control
% load('Agosto_Real_2206_BF.mat');
% load('ThreeMonths_Real_2706_BF.mat');
% load('PRBS_1606_NoNoise_rawData.mat');
nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '2906';


saveToMatFile = true;
% matFileName = 'blah';
optimizeMLHyperparameters = false;
mlMethod = 'RF';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
generateOne = false;
useDelayMV_CV = false;
noiseyData = true;
%% Bool Handling
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
matFileName = [nameDataset typeOfData noiseStr dateTest '_BF.mat'];
load(matFileName);





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

mlParamsStruct.trainingParamsArray = {100,1,'on',10,'on','curvature','TBagger'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;

mlParamsStruct.DelayMatrix.U = repmat([0:1]',1,numInputs);
[mlParamsStruct.sizeUMatrix garbage] = size(mlParamsStruct.DelayMatrix.U);
mlParamsStruct.delayMV_CV = controlParamsStruct.delayMV_CV;

mlParamsStruct.DelayMatrix.Y = repmat([5,15,25,35,45,60]',1,numOutputs);
[mlParamsStruct.sizeYMatrix garbage] = size(mlParamsStruct.DelayMatrix.Y);

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(0.85*nSamples);
if strcmp(typeOfData,'Real_')
    mlParamsStruct.limitTestDataIndex = 24177;
else
    mlParamsStruct.limitTestDataIndex = controlParamsStruct.nSamples;
end
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

%%
if generateOne
    mOrder.nb = mlParamsStruct.DelayMatrix.U(delayUCases,:);
    mOrder.na = mlParamsStruct.DelayMatrix.Y(delayYCases,:);
    printInConsole = sprintf("ML Model for U %d and delay in y %d",...
                                        delayUCases,delayYCases);
    disp(printInConsole)
    pause(1)
    %% Generate RF Model
    [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                        testBigSet,...
                                                        controlParamsStruct,...
                                                        mlParamsStruct,...
                                                        mOrder);
    %%
    RF = ML_Model(1).Model;
    
    RF.PredictorNames
    if strcmp(mlParamsStruct.trainingParamsArray{7},'TBagger')
        RF.OOBPermutedPredictorDeltaError
        outputmatFileName = ['RF_Y' num2str(cvToGenerate) '_' typeOfData ioDTStr dateTest '.mat' ];
%         save(outputmatFileName,'ML_Model','mOrder','mlParamsStruct','controlParamsStruct');
    else
        outputmatFileName = ['RF_Y' num2str(cvToGenerate) '_SimResults_2906.mat' ];
        save(outputmatFileName,'RF','mlParamsStruct','controlParamsStruct');
    end
else
    ML_Results = struct;
    for delayUCases = 1:mlParamsStruct.sizeUMatrix
        mOrder.nb = mlParamsStruct.DelayMatrix.U(delayUCases,:);
        for delayYCases = 1:mlParamsStruct.sizeYMatrix
            mOrder.na = mlParamsStruct.DelayMatrix.Y(delayYCases,:);
            printInConsole = sprintf("ML Model for delay in U %d and delay in Y %d",...
                                        delayUCases,delayYCases);
            disp(printInConsole)
            pause(1)
            %% Generate RF Model
            [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                                testBigSet,...
                                                                controlParamsStruct,...
                                                                mlParamsStruct,...
                                                                mOrder);
            trainingTimes(1,delayUCases,delayYCases) = trainingTime;
            %% Save results
            [ML_Results] = ml_save_results(ML_Results,...
                                            resultsIter,...
                                            controlParamsStruct,...
                                            mlParamsStruct,...
                                            [1 delayUCases delayYCases]);
            clearvars ML_Model
        end
    end
end

%% Save
outputmatFileName = ['ResultsRF' '_' typeOfData ioDTStr dateTest '.mat' ];
if (saveToMatFile)
    save(outputmatFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTimes');
end
