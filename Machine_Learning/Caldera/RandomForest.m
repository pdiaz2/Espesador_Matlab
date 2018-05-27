%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0405.mat');
saveToMatFile = false;
matFileName = 'ResultsRF_2705';
generateOne = false;
optimizeMLHyperparameters = false;
mlMethod = 'RF';

freqsTotal = length(freqs);
wavesTotal = length(waveform);
[makeTotal ~] = size(makeMatrix);
% DataSet
fSelected = 2;
testBatch = 8;
numInputs = 4;
numOutputs = 3;
NameInputs = {'DmndVap','Combs','Aire','Agua'};
NameOutputs = {'PressVap','Oxy','WaterLvl'};
dimsSystem = [3 3 1];
if generateOne
    % Input wave
    waveVector = 3;
    experiment = 2;
    delayUCases = 1;
    delayYCases = 1;
else
   waveVector = 1:4;
end

%% Specify Delay
UBackshiftMatrix = [1 1 1 1;
                    2 2 2 2;
                    2 1 1 1;
                    2 1 2 1;
                    1 1 2 2;
                    2 1 1 2;
                    3 3 3 3;
                    4 4 4 4;
                    5 5 5 5;
                    ];

[backshiftCasesU garbage] = size(UBackshiftMatrix);
YBackshiftMatrix = [1 1 1;
                    2 2 2;
                    2 1 2;
                    1 2 1;
                    1 1 2;
                    3 3 3;
                    4 4 4;
                    ];
[backshiftCasesY garbage] = size(YBackshiftMatrix);
%% Raw Data Handling
tau_R = 5;
makeSelected = 1:8;
% Each Subset on it's own (leaves 8 out, because it is test) -> XVal
% afterwards
for m = 1:length(makeSelected)-1
    dataTraining(m).subSetsIndex = [m];
end
% Special Combinations
dataTraining(m+1).subSetsIndex = [1 3 5 7];
dataTraining(m+2).subSetsIndex = [2 4 6];
dataTraining(m+3).subSetsIndex = [1 2 3 4 5 6 7];
[garbage , numSubSets] = size(dataTraining);
%% Machine Learning Parameters
mlParameters = {100,1,'on',10,'on','curvature','TBagger'};
maxMinLS = 20;
minLS = optimizableVariable('minLS',[1,maxMinLS],'Type','integer');
hyperparametersRF = minLS;
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
    TrainingBigSet = struct;
    TestBigSet = struct;
    [TrainingBigSet,TestBigSet,NameInputs,NameOutputs] = generate_tT_sets( TrainingBigSet, TestBigSet,...
                                                        results,dataTraining,NameInputs,NameOutputs,...
                                                        numSubSets, selectionParameters,testBatch,...
                                                        dimsSystem);
    seed = rng('default'); % For reproducibility (should look into this after)
    bayOptIterations = 30;
    %% Specific RF generation
    if generateOne
        %% Training
        nb = UBackshiftMatrix(delayUCases,:);
        na = YBackshiftMatrix(delayYCases,:);
        printInConsole = sprintf("Experimento %d para delay en U %d y delay en y %d",experiment,...
                        delayUCases,delayYCases);
        disp(printInConsole)
        pause(1)

        [TrainingSubset] = generate_tT_subsets( TrainingBigSet, NameInputs, NameOutputs,...
                                                experiment, tau_R, dimsSystem,...
                                                na, nb, mlMethod );
        if (optimizeMLHyperparameters)
        % Optimize HyperParameter LeafSize
            disp('Optimizing')
            pause(2)
            tic;
            for y = 1:numOutputs
                BayOptResults = bayesopt(@(params)oobErrorRF(params,TrainingSubset(y).InputData,TrainingSubset(y).OutputData,...
                    mlParameters),hyperparametersRF,'AcquisitionFunctionName','expected-improvement-plus','Verbose',0,...
                    'PlotFcn',[],'MaxObjectiveEvaluations',bayOptIterations);
                bestHyp(y) = BayOptResults.XAtMinObjective{1,1};
%                 close all;
            end
            optimizationTimes(experiment,delayUCases,delayYCases) = toc;
            clear BayOptResults
        else
            for y = 1:numOutputs
                bestHyp(y) = mlParameters{4};
            end
            optimizationTimes(experiment,delayUCases,delayYCases) = NaN;
        end
        pause(2)
        disp('Generating Machine Learning Model')

        tic;
        ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod);
        trainingTimes(experiment,delayUCases,delayYCases) = toc;
        %% Test Model
        
        % Prepare IO Data for model building
        % 1 is because only one subset is TestBatch
        [IOData,delayMaxInTime] = Prepare_IO_Data(1,tau_R,na,nb,...
                                                TestBigSet,NameInputs,NameOutputs,mlMethod);

        %% Prediction and Comparison
        for y = 1:numOutputs
            % Predict tau_R ahead prediction
            PredictedOutputs = predict(ML_Model(y).Model,IOData(y).InputTimeSeries);
            % Validation is tau_R ahead value of actual data
            ValidationOutputs = TestBigSet.Outputs.TimeSeries(1+delayMaxInTime:end,y);
            ML_Results.Output(y).MSE(experiment,delayUCases,delayYCases) = immse(PredictedOutputs,ValidationOutputs);
            ML_Results.Output(y).Correlation(experiment,delayUCases,delayYCases) = corr(PredictedOutputs,ValidationOutputs);
%            OOB = oobError(ML_Model(y).Model);
%            ML_Results.Output(y).OOBError(experiment,delayUCases,delayYCases) = OOB(end);
%                ML_Results.Output(y).OOBPredictorImportance(experiment,delayUCases,delayYCases,:) = ML_Model(y).Model.OOBPermutedPredictorDeltaError;
%                ML_Results(experiment,delayUCases,delayYCases).Results(y).NumPredictorSplit = ML_Model(y).Model.NumPredictorSplit;
%                ML_Results(experiment,delayUCases,delayYCases).Results(y).MinLeafSize = ML_Model(y).Model.MinLeafSize;

        end
        
    else
        for experiment = 1:numSubSets%1:numSubSets
            for delayUCases = 1:backshiftCasesU%1:backshiftCasesU
                nb = UBackshiftMatrix(delayUCases,:);
                for delayYCases = 1:backshiftCasesY%1:backshiftCasesY
                    na = YBackshiftMatrix(delayYCases,:);
                    printInConsole = sprintf("Experimento %d para delay en U %d y delay en y %d",experiment,...
                                    delayUCases,delayYCases);
                    disp(printInConsole)
                    pause(1)

                    [TrainingSubset] = generate_tT_subsets( TrainingBigSet, NameInputs, NameOutputs,...
                                                            experiment, tau_R, dimsSystem,...
                                                            na, nb, mlMethod );

                    if (optimizeMLHyperparameters)
                    % Optimize HyperParameter LeafSize
                        disp('Optimizing')
                        pause(2)
                        tic;
                        for y = 1:numOutputs
                            BayOptResults = bayesopt(@(params)oobErrorRF(params,TrainingSubset(y).InputData,TrainingSubset(y).OutputData,...
                                mlParameters),hyperparametersRF,'AcquisitionFunctionName','expected-improvement-plus','Verbose',0,...
                                'PlotFcn',[],'MaxObjectiveEvaluations',bayOptIterations);
                            bestHyp(y) = BayOptResults.XAtMinObjective{1,1};
            %                 close all;
                        end
                        optimizationTimes(experiment,delayUCases,delayYCases) = toc;
                        clear BayOptResults
                    else
                        for y = 1:numOutputs
                            bestHyp(y) = mlParameters{4};
                        end
                        optimizationTimes(experiment,delayUCases,delayYCases) = NaN;
                    end
                    pause(2)
                    disp('Generating Machine Learning Model')

                    tic;
                    ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod);
                    trainingTimes(experiment,delayUCases,delayYCases) = toc;
                    %% Test Model

                    % Prepare IO Data for model building
                    % 1 is because only one subset is TestBatch
                    [IOData,delayMaxInTime] = Prepare_IO_Data(1,tau_R,na,nb,...
                                                            TestBigSet,NameInputs,NameOutputs,mlMethod);
                    % Prediction
                    for y = 1:numOutputs
                       PredictedOutputs = predict(ML_Model(y).Model,IOData(y).InputTimeSeries);
                       ValidationOutputs = TestBigSet(1).Outputs.TimeSeries(1+delayMaxInTime:end,y);
                       ML_Results.Output(y).MSE(experiment,delayUCases,delayYCases) = immse(PredictedOutputs,ValidationOutputs);
                       ML_Results.Output(y).Correlation(experiment,delayUCases,delayYCases) = corr(PredictedOutputs,ValidationOutputs);
                       OOB = oobError(ML_Model(y).Model);
                       ML_Results.Output(y).OOBError(experiment,delayUCases,delayYCases) = OOB(end);
        %                ML_Results.Output(y).OOBPredictorImportance(experiment,delayUCases,delayYCases,:) = ML_Model(y).Model.OOBPermutedPredictorDeltaError;
        %                ML_Results(experiment,delayUCases,delayYCases).Results(y).NumPredictorSplit = ML_Model(y).Model.NumPredictorSplit;
        %                ML_Results(experiment,delayUCases,delayYCases).Results(y).MinLeafSize = ML_Model(y).Model.MinLeafSize;

                    end

                    clearvars IOData delayMaxInTime ML_Model BayOptResults
                end
            end
        end
        %% Save
        if (saveToMatFile)
            save(matFileName,'ML_Results','effectiveReactionTime','UBackshiftMatrix','YBackshiftMatrix',...
                'dataTraining','NameInputs','NameOutputs','optimizationTimes','trainingTimes',...
                'bayOptIterations','optimizeMLHyperparameters','testBatch');
        end
        clearvars ML_Results
    end
end    