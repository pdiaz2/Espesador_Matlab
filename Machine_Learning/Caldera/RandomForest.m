%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0206.mat');
saveToMatFile = true;
matFileName = 'ResultsRF_Noise_0206';
optimizeMLHyperparameters = false;

useNoisy = true;
if useNoisy
    PlantData = results;
else
    PlantData = resultsSmooth; 
end

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



%%
seed = rng(1513);
mlMethod = 'RF';
MVToApply = makeMatrix;
[numSamplesPerExp,~] = size(PlantData(1,1,1).inputs.time);
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[nOpenLoopExps ~] = size(MVToApply);
N_y = 20;
%% DataSet
fSelected = 2;

numInputs = 4;
numOutputs = 3;
nameInputs = {'DmndVap','Combs','Aire','Agua'};
nameOutputs = {'PressVap','Oxy','WaterLvl'};
dimsSystem = [3 3 1];


%% Specify Delay
% UBackshiftMatrix = [1 1 1 1;
%                     1 1 2 2;
%                     2 1 2 2;
%                     3 3 3 3;
%                     4 4 4 4;
%                     ];
UBackshiftMatrix = [1 1 1 1;
                    2 2 2 2];
[backshiftCasesU, ~] = size(UBackshiftMatrix);
% Experience has shown that models are very AR
% YBackshiftMatrix = [1 1 1;
%                     2 2 2;
%                     3 3 3;
%                     4 4 4
%                     ];
YBackshiftMatrix = [2 2 2;
                    4 4 4];
[backshiftCasesY, ~] = size(YBackshiftMatrix);
%% Raw Data Handling
tau_R = 5;
makeSelected = 1:7;
testBatch = 8;
OLExpStruct = generate_ol_array_index(makeSelected);
[garbage , numExpGroups] = size(OLExpStruct);
%% Machine Learning Parameters
mlParameters = {100,1,'on',10,'on','curvature','TBagger'};
maxMinLS = 20;

% Optimization Hyperparameters
minLS = optimizableVariable('minLS',[1,maxMinLS],'Type','integer');
hyperparametersRF = minLS;
bayOptIterations = 30;
for waveformSelected = waveVector
    if waveformSelected == 1
        appendMatFileName = '_sine.mat';
    elseif waveformSelected == 2
        appendMatFileName = '_square.mat';    
    elseif waveformSelected == 3
        appendMatFileName = '_saw.mat';
    elseif waveformSelected == 4
        appendMatFileName = '_step.mat';
    end
    matFileName = [matFileName appendMatFileName];
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    %% Generate Test & Training BigSets
    trainingBigSet = struct;
    testBigSet = struct;
    [trainingBigSet,testBigSet,nameInputs,nameOutputs] = generate_tT_sets( trainingBigSet, testBigSet,...
                                                        PlantData,OLExpStruct,nameInputs,nameOutputs,...
                                                        numExpGroups, selectionParameters,testBatch,...
                                                        dimsSystem);
     % For reproducibility (should look into this after)

    %% Specific RF generation
    if generateOne
        %% Training
        nb = UBackshiftMatrix(delayUCases,:);
        na = YBackshiftMatrix(delayYCases,:);
        printInConsole = sprintf("Experimento %d para delay en U %d y delay en y %d",experiment,...
                        delayUCases,delayYCases);
        disp(printInConsole)
        pause(1)

        [trainingSubset] = ml_prepare_IO_data( trainingBigSet, nameInputs, nameOutputs,...
                                                experiment, tau_R, numSamplesPerExp,...
                                                na, nb, mlMethod );
        bestHyp = ml_optimize_hyperParams(trainingSubset,...
                                numOutputs,mlParameters,...
                                hyperparametersRF,...
                                optimizeMLHyperparameters);
        disp('Generating Machine Learning Model')

        tic;
        ML_Model = ml_generate_model(numOutputs,trainingSubset,mlParameters,bestHyp,mlMethod);
        trainingTimes(experiment,delayUCases,delayYCases) = toc;
        %% Test Model
        
        % Prepare IO Data for model building
        % 1 is because only one subset is TestBatch
        [testData,delayMaxInTime] = ml_prepare_IO_data(testBigSet,...
                                                nameInputs, nameOutputs,...
                                                1, tau_R, numSamplesPerExp,...
                                                na, nb,...
                                                mlMethod);
        %% Prediction and Comparison
        Results = ml_validate_model(testData,ML_Model,numOutputs,N_y,...
                                    delayMaxInTime,tau_R,na,mlMethod,generateOne);

        for y = 1:numOutputs
            ML_Results.Output(y).Performance(experiment,delayUCases,delayYCases).MSE = ...
                                            Results(y).MSE;
            ML_Results.Output(y).Performance(experiment,delayUCases,delayYCases).Correlation = ...
                                            Results(y).Correlation;
        end
    else
        for experiment = 1:numExpGroups%1:numSubSets
            for delayUCases = 1:backshiftCasesU%1:backshiftCasesU
                nb = UBackshiftMatrix(delayUCases,:);
                for delayYCases = 1:backshiftCasesY%1:backshiftCasesY
                    na = YBackshiftMatrix(delayYCases,:);
                    printInConsole = sprintf("Experimento %d para delay en U %d y delay en y %d",experiment,...
                                    delayUCases,delayYCases);
                    disp(printInConsole)
                    pause(1)

                    [trainingSubset] = ml_prepare_IO_data( trainingBigSet, nameInputs, nameOutputs,...
                                                            experiment, tau_R, numSamplesPerExp,...
                                                            na, nb, mlMethod );
                    bestHyp = ml_optimize_hyperParams(trainingSubset,...
                                                    numOutputs,mlParameters,...
                                                    hyperparametersRF,...
                                                    optimizeMLHyperparameters);
                    disp('Generating Machine Learning Model')

                    tic;
                    ML_Model = ml_generate_model(numOutputs,trainingSubset,mlParameters,bestHyp,mlMethod);
                    trainingTimes(experiment,delayUCases,delayYCases) = toc;
                    %% Test Model

                    % Prepare IO Data for model building
                    % 1 is because only one subset is TestBatch
                    [testData,delayMaxInTime] = ml_prepare_IO_data(testBigSet,...
                                                nameInputs, nameOutputs,...
                                                1, tau_R, numSamplesPerExp,...
                                                na, nb,...
                                                mlMethod);
                    %% Prediction and Comparison
                    Results = ml_validate_model(testData,ML_Model,numOutputs,N_y,...
                            delayMaxInTime,tau_R,na,mlMethod,generateOne);
                    for y = 1:numOutputs
                        ML_Results.Output(y).Performance(experiment,delayUCases,delayYCases).MSE = ...
                                                        Results(y).MSE;
                        ML_Results.Output(y).Performance(experiment,delayUCases,delayYCases).Correlation = ...
                                                        Results(y).Correlation;
                        ML_Results.Output(y).Performance(experiment,delayUCases,delayYCases).OOBError = ...
                                                        Results(y).OOBError;
                    end
                    clearvars IOData delayMaxInTime ML_Model
                end
            end
        end
        %% Save
        if (saveToMatFile)
            save(matFileName,'ML_Results','tau_R','UBackshiftMatrix','YBackshiftMatrix',...
                'OLExpStruct','nameInputs','nameOutputs','trainingTimes',...
                'bayOptIterations','optimizeMLHyperparameters','testBatch');
        end
        clearvars ML_Results
    end
end    