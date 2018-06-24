%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Boolean control
load('Agosto_Real_2206_BF.mat');
% load('ThreeMonths_Real_2406_rawData.mat');
% load('PRBS_1606_NoNoise_rawData.mat');
saveToMatFile = false;
matFileName = 'ResultsRF_PRBS_1606';
optimizeMLHyperparameters = false;
mlMethod = 'RF';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
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
numInputs = d+m;
n = length(SimResults.CV);
numOutputs = n;
nSamples = length(SimResults.CV(1).GroupedTimeSeries);
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.nSamples = nSamples;
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = 5; % 10
controlParamsStruct.N_y = N_y;

%% Machine Learning - Structural Parameters

mlParamsStruct.trainingParamsArray = {100,1,'on',10,'on','curvature','TBagger'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;

mlParamsStruct.DelayMatrix.U = repmat([1:2]',1,numInputs);
[mlParamsStruct.sizeUMatrix garbage] = size(mlParamsStruct.DelayMatrix.U);

mlParamsStruct.DelayMatrix.Y = repmat([4:5]',1,numOutputs);
[mlParamsStruct.sizeYMatrix garbage] = size(mlParamsStruct.DelayMatrix.Y);

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(0.9*nSamples);
mlParamsStruct.validationSamples = controlParamsStruct.nSamples -...
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
%         matFileName = ['RF_Y' num2str(cvToGenerate) '_RealData_2406.mat' ];
%         save(matFileName,'ML_Model','mOrder');
    else
        matFileName = ['RF_Y' num2str(cvToGenerate) '_PRBS_NoNoise_2206.mat' ];
        save(matFileName,'RF');
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
if (saveToMatFile)
    save(matFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTime');
end
