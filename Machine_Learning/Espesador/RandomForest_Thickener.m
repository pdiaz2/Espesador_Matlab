%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Boolean control
load('Agosto_SimResults_1304_rawData.mat');
saveToMatFile = true;
matFileName = 'ResultsRF_2704';
optimizeMLHyperparameters = false;
mlMethod = 'RF';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
generateOne = false;
if generateOne
    % Input wave
    waveVector = 3;
    experiment = 8;
    delayUCases = 2;
    delayYCases = 2;
else
   waveVector = 1:4;
end


%% Plant specifics
m = length(SimResults.MV);
d = length(SimResults.DV);
numInputs = d+m;
n = length(SimResults.CV);
numOutputs = n;
nSamples = length(SimResults.CV(1).GroupedTimeSeries);
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.nSamples = nSamples;
controlParamsStruct.tau_R = 10;
controlParamsStruct.N_y = N_y;

%% Machine Learning - Structural Parameters

mlParamsStruct.DelayMatrix.U = repmat([1:5]',1,numInputs);
[mlParamsStruct.sizeUMatrix garbage] = size(mlParamsStruct.DelayMatrix.U);

mlParamsStruct.DelayMatrix.Y = repmat([1:5]',1,numOutputs);
[mlParamsStruct.sizeYMatrix garbage] = size(mlParamsStruct.DelayMatrix.Y);

mlParamsStruct.trainingParamsArray = {100,1,'on',10,'on','curvature','TBagger'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;


mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(0.9*nSamples);
mlParamsStruct.validationSamples = controlParamsStruct.nSamples -...
                                mlParamsStruct.trainingSamples;
mlParamsStruct.mlMethod = mlMethod;

%% Training & Testing Set
testBigSet = struct;
trainingBigSet = struct;
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    SimResults,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct.trainingSamples);

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
    [ResultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                        testBigSet,...
                                                        controlParamsStruct,...
                                                        mlParamsStruct,...
                                                        mOrder);
else
    ML_Results = struct;
    for delayUCases = 1:mlParamsStruct.sizeUMatrix
        mOrder.nb = mlParamsStruct.DelayMatrix.U(delayUCases,:);
        for delayYCases = 1:mlParamsStruct.sizeYMatrix
            mOrder.na = mlParamsStruct.DelayMatrix.Y(delayYCases,:);
            printInConsole = sprintf("ML Model for U %d and delay in y %d",...
                                        delayUCases,delayYCases);
            disp(printInConsole)
            pause(1)
            %% Generate RF Model
            [ResultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                                testBigSet,...
                                                                controlParamsStruct,...
                                                                mlParamsStruct,...
                                                                mOrder);
            trainingTimes(1,delayUCases,delayYCases) = trainingTime;
            %% Save results
            [ML_Results,trainingTimes] = ml_save_results(ML_Results,...
                                                        ResultsIter,...
                                                        controlParamsStruct,...
                                                        mlParamsStruct,...
                                                        [1 delayUCases delayYCases]);
            clearvars ML_Model
        end
    end
end

%% Save
if (saveToMatFile)
    save(matFileName,'ML_Results','effectiveReactionTime','UBackshiftMatrix','YBackshiftMatrix',...
            'NameInputs','NameOutputs','optimizationTimes','trainingTimes',...
        'bayOptIterations','optimizeMLHyperparameters','testBatch');
end
