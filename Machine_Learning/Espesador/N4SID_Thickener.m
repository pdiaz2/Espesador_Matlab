clear all;
close all;
clc;
%% Test Plant Specifics
% load('Agosto_SimResults_1304_rawData.mat');
load('PRBS_1606_NoNoise_rawData.mat');
saveToMatFile = true;
matFileName = 'ResultsN4SID_PRBS_2206';
optimizeMLHyperparameters = false;
mlMethod = 'SS';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
generateOne = false;
if generateOne
    % Input wave
    cvToGenerate = 1;
    stabilityChoice = 1;
    offsetChoice = 2;
    focusChoice = 2;
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
% Dt = SimResults.groupBy;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.nSamples = nSamples;
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = 5;
controlParamsStruct.N_y = N_y;
%% Machine Learning - Structural Parameters
mlParamsStruct.trainingParamsArray = {'best','I_DC?','O_DC?','auto',false,'prediction','off'};
mlParamsStruct.offsetOptions = {'NA','R_DC';'NA','R_DC'};
mlParamsStruct.focusOptions = {'prediction','simulation'};
mlParamsStruct.stabilityOptions = {true,false};
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
mlParamsStruct.generateOneBool = generateOne;
mlParamsStruct.cvToGenerate = cvToGenerate;
%% Training & Testing Set
testBigSet = struct;
trainingBigSet = struct;
SimResults.CV(7).GroupedTimeSeries = fillmissing(SimResults.CV(7).GroupedTimeSeries,'nearest');
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    SimResults,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct.trainingSamples);

testBatch = 8; %Backward Compatibility
if generateOne
    mlParamsStruct.trainingParamsArray{2} = mlParamsStruct.offsetOptions{1,offsetChoice};
    mlParamsStruct.trainingParamsArray{3} = mlParamsStruct.offsetOptions{2,offsetChoice};
    mlParamsStruct.trainingParamsArray{5} = mlParamsStruct.stabilityOptions{stabilityChoice};
    mlParamsStruct.trainingParamsArray{6} = mlParamsStruct.focusOptions{focusChoice};
    mOrder.na = -1;
    mOrder.nb = -1;
    printInConsole = sprintf("Stability Choice %, OffsetChoice %d, focusChoice %d",...
                                    stabilityChoice,offsetChoice,focusChoice);
    disp(printInConsole)
    pause(1)
    
    %% Generate RF Model
    [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                        testBigSet,...
                                                        controlParamsStruct,...
                                                        mlParamsStruct,...
                                                        mOrder);
else
    ML_Results = struct;
    for stabilityChoice = 1:2
        for offsetChoice = 1:2
            for focusChoice = 1:2
                mlParamsStruct.trainingParamsArray{2} = mlParamsStruct.offsetOptions{1,offsetChoice};
                mlParamsStruct.trainingParamsArray{3} = mlParamsStruct.offsetOptions{2,offsetChoice};
                mlParamsStruct.trainingParamsArray{5} = mlParamsStruct.stabilityOptions{stabilityChoice};
                mlParamsStruct.trainingParamsArray{6} = mlParamsStruct.focusOptions{focusChoice};
                mOrder.na = -1;
                mOrder.nb = -1;
                printInConsole = sprintf("Stability Choice %d, OffsetChoice %d, focusChoice %d",...
                                            stabilityChoice,offsetChoice,focusChoice);
                disp(printInConsole)
                pause(1)
                
                %% Generate RF Model
                [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                                    testBigSet,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct,...
                                                                    mOrder);
                                                                
                %% Save results
                [ML_Results] = ml_save_results(ML_Results,...
                                                resultsIter,...
                                                controlParamsStruct,...
                                                mlParamsStruct,...
                                                [stabilityChoice ...
                                                offsetChoice...
                                                focusChoice...
                                                ]);
            end
        end
    end
end
%% Save
if (saveToMatFile)
    save(matFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTime');
end