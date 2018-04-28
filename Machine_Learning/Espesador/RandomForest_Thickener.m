%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Test Plant Specifics
load('Agosto_SimResults_1304.mat');
saveToMatFile = true;
matFileName = 'ResultsRF_2704';
optimizeMLHyperparameters = false;
mlMethod = 'RF';
numInputs = length(SimResults.MV)+length(SimResults.DV);
numOutputs = length(SimResults.CV);
numSamples = length(SimResults.CV(1).GroupedTimeSeries);
trainUpTo = floor(0.9*numSamples);
%% Training & Testing Set
effectiveReactionTime = 10;
% effectiveReactionTime = Different from actual sampling time, because it
% corresponds to the time that the process actually shows some relevant
% change. In other words, its a multiple of the sampling time (required for
% simulation or implementation) that produces relevant observations.
for cv = 1:numOutputs
   NameOutputs{cv} = SimResults.CV(cv).Name;
   TrainingBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(1:trainUpTo)';
   TestBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(trainUpTo+1:end)';
end
for mv = 1:length(SimResults.MV)
    NameInputs{mv} = SimResults.MV(mv).Name;
    TrainingBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(1:trainUpTo)';
    TestBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(trainUpTo+1:end)';
end
for dv = 1:length(SimResults.DV)
    NameInputs{dv+mv} = SimResults.DV(dv).Name;
    TrainingBigSet.Inputs.TimeSeries(:,dv+mv) = SimResults.DV(dv).GroupedTimeSeries(1:trainUpTo)';
    TestBigSet.Inputs.TimeSeries(:,dv+mv)= SimResults.DV(dv).GroupedTimeSeries(trainUpTo+1:end);
end
testBatch = 8; %Backward Compatibility
%%
UBackshiftMatrix = [0 0 0 0 0;
                    1 1 1 1 1;
                    2 2 2 2 2;
                    2 1 1 0 1;
                    2 0 1 1 2;
                    1 0 2 2 0;
                    2 0 0 2 1;
                    ];
UBackshiftMatrix = repmat([1:10]',1,numInputs);
[backshiftCasesU garbage] = size(UBackshiftMatrix);
YBackshiftMatrix = [1 1 1 1 1 1 1 1;
                    2 2 2 2 2 2 2 2;
                    2 1 2 1 2 1 2 1;
                    1 2 1 3 1 2 3 1;
                    3 3 3 1 2 1 2 1;
                    ];
[backshiftCasesY garbage] = size(YBackshiftMatrix);
mlParameters = {100,1,'on',10,'on','curvature'};
maxMinLS = 40;
minLS = optimizableVariable('minLS',[1,maxMinLS],'Type','integer');
hyperparametersRF = minLS;

seed = rng('default'); % For reproducibility (should look into this after)
bayOptIterations = 30;
experiment = 1; % Bogey
selectionParameters = -1; % Bogey
%%
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
        [IOData,garbage] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
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
        choice = testBatch;

        for y = 1:numOutputs
            TrainingSubset(y).InputData = [];
            TrainingSubset(y).OutputData = [];
        end
        % Prepare IO Data for model building
        [IOData,delayMaxInTime] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                  TestBigSet,NameInputs,NameOutputs,mlMethod);

        % Prediction
        for y = 1:numOutputs
            PredictedOutputs = predict(ML_Model(y).Model,IOData(y).InputTimeSeries);
            ValidationOutputs = TestBigSet.Outputs.TimeSeries(1+delayMaxInTime:end,y);
%                 ML_Results(experiment,delayUCases,delayYCases).Results(y).OOBPredictorImportance = ML_Model(y).Model.OOBPermutedPredictorDeltaError;
%                 ML_Results(experiment,delayUCases,delayYCases).Results(y).NumPredictorSplit = ML_Model(y).Model.NumPredictorSplit;
%                 ML_Results(experiment,delayUCases,delayYCases).Results(y).MinLeafSize = ML_Model(y).Model.MinLeafSize;
            ML_Results.Output(y).MSE(experiment,delayUCases,delayYCases) = immse(PredictedOutputs,ValidationOutputs);
            ML_Results.Output(y).Correlation(experiment,delayUCases,delayYCases) = corr(PredictedOutputs,ValidationOutputs);
            OOB = oobError(ML_Model(y).Model);
            ML_Results.Output(y).OOBError(experiment,delayUCases,delayYCases) = OOB(end);

        end
        clearvars IOData delayMaxInTime ML_Model BayOptResults
    end
end

%% Save
if (saveToMatFile)
    save(matFileName,'ML_Results','effectiveReactionTime','UBackshiftMatrix','YBackshiftMatrix',...
            'NameInputs','NameOutputs','optimizationTimes','trainingTimes',...
        'bayOptIterations','optimizeMLHyperparameters','testBatch');
end
