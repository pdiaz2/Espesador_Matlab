%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_1304.mat');
saveToMatFile = true;
matFileName = 'ResultsRF_2404';
optimizeMLHyperparameters = false;
mlMethod = 'RF';
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[makeTotal ~] = size(makeMatrix);
% DataSet
fSelected = 1;
waveformSelected = 3;
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
makeSelected = 1:8;
testBatch = 8;
numInputs = 4;
numOutputs = 3;
NameInputs = {'DmndVap','Combs','Aire','Agua'};
NameOutputs = {'PressVap','Oxy','WaterLvl'};
%% Training & Testing
% effectiveReactionTime = Different from actual sampling time, because it
% corresponds to the time that the process actually shows some relevant
% change. In other words, its a multiple of the sampling time (required for
% simulation or implementation) that produces relevant observations.
effectiveReactionTime = 5;
selectionParameters.p1 = fSelected;
selectionParameters.p2 = waveformSelected;
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
for ns = 1:numSubSets
    tSets = dataTraining(ns).subSetsIndex;
    VLADIMIR = [];
    for cv = 1:numOutputs
        OutputVLADIMIR = [];
        for tS = 1:length(tSets)
            choice = tSets(tS);
            OutputVLADIMIR = vertcat(OutputVLADIMIR(:),...
                   results(selectionParameters.p1,selectionParameters.p2,choice).outputs(:,cv));
        end
        NameOutputs{cv} = NameOutputs{cv};
        TrainingBigSet(ns).Outputs.TimeSeries(:,cv)  = OutputVLADIMIR(:);
        TestBigSet.Outputs.TimeSeries(:,cv) = results(selectionParameters.p1,selectionParameters.p2,testBatch).outputs(:,cv);
    end
         
end
for ns = 1:numSubSets
    tSets = dataTraining(ns).subSetsIndex;
    VLADIMIR = [];
    for cv = 1:numInputs
        OutputVLADIMIR = [];
        for tS = 1:length(tSets)
            choice = tSets(tS);
            OutputVLADIMIR = vertcat(OutputVLADIMIR(:),...
                   results(selectionParameters.p1,selectionParameters.p2,choice).inputs.signals.values(:,cv));
        end
        NameInputs{cv} = NameInputs{cv};
        TrainingBigSet(ns).Inputs.TimeSeries(:,cv)  = OutputVLADIMIR(:);
        TestBigSet.Inputs.TimeSeries(:,cv) = results(selectionParameters.p1,selectionParameters.p2,testBatch).inputs.signals.values(:,cv);
    end
         
end

UBackshiftMatrix = [0 0 0 0;
                    1 1 1 1;
                    2 2 2 2;
                    2 1 1 0;
                    2 0 1 1;
                    1 0 2 2;
                    2 0 0 2;
                    ];

[backshiftCasesU garbage] = size(UBackshiftMatrix);
YBackshiftMatrix = [1 1 1;
                    2 2 2;
                    2 1 2;
                    1 2 1;
                    1 1 2;
                    ];
[backshiftCasesY garbage] = size(YBackshiftMatrix);
mlParameters = {100,1,'on',10,'on','curvature'};
maxMinLS = 20;
minLS = optimizableVariable('minLS',[1,maxMinLS],'Type','integer');
hyperparametersRF = minLS;

seed = rng('default'); % For reproducibility (should look into this after)
bayOptIterations = 30;
for experiment = 1:numSubSets%1:numSubSets
    for delayUCases = 1:backshiftCasesU%1:backshiftCasesU
        UPastValues = UBackshiftMatrix(delayUCases,:);
        for delayYCases = 1:backshiftCasesY%1:backshiftCasesY
            YPastValues = YBackshiftMatrix(delayYCases,:);
            printInConsole = sprintf("Experimento %d para delay en U %d y delay en y %d",experiment,...
                delayUCases,delayYCases);
            disp(printInConsole)
            pause(1)
            for y = 1:numOutputs
                TrainingSubset(y).InputData = [];
                TrainingSubset(y).OutputData = [];
                TrainingSubset(y).PredictorNames = {};
            end
            % Prepare IO Data for model building
            [IOData,garbage] = Prepare_IO_Data(experiment,numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                      TrainingBigSet,NameInputs,NameOutputs,mlMethod);
            for y = 1:numOutputs
               TrainingSubset(y).InputData = vertcat(TrainingSubset(y).InputData,IOData(y).InputTimeSeries); 
               TrainingSubset(y).OutputData = vertcat(TrainingSubset(y).OutputData,IOData(y).OutputTimeSeries);
               TrainingSubset(y).PredictorNames = IOData(y).PredictorNames;
            end
            
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
            % Test Model

            for y = 1:numOutputs
                TrainingSubset(y).InputData = [];
                TrainingSubset(y).OutputData = [];
            end
            % Prepare IO Data for model building
            % 1 is because only one subset is TestBatch
            [IOData,delayMaxInTime] = Prepare_IO_Data(1,numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                      TestBigSet,NameInputs,NameOutputs,mlMethod);

            % Prediction
            for y = 1:numOutputs
               PredictedOutputs = predict(ML_Model(y).Model,IOData(y).InputTimeSeries);
               ValidationOutputs = TestBigSet.Outputs.TimeSeries(1+delayMaxInTime:end,y);
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
