%RANDOMFOREST Creates and evaluates RF performance
clear all;
close all;
clc;
%% Boolean control
nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
predictiveModelsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\PredictiveModels\';
resultsMLPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsML\';
figurePath = ['figures\'];
% Save and print bools
imprint = false;
saveResultsToMatFile = false;
saveModelToMatFile = false;
plotForestStats = true;
%%%%%%
cvToGenerate = 2;
selectedCV = [1 2 3];
selectedMV = [1 2];
selectedDV = [1 2];
%%%%%%%%%%%%%%%%
mlMethod = 'RF';
optimizeMLHyperparameters = false;
% Crucial parameters for system identification
N_y = 48;
tau_R = 5;
% Data validation and machine learning parameters
trainVSVal = 0.85;
generateOne = true;
useDelayMV_CV = false;
noiseyData = true;

seed = rng(1231231); % For reproducibility (should look into this after)
%% Bool Handling
if generateOne
    % Input wave
    experiment = 1;
    % 1 is 0 order
    delayYCases = 6;
    % 1 is 0 order
    delayUCases = 6;
    nTrees = 100;
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
% load('testScriptML.mat');




%% Plant specifics
MachineLearningData = ml_pick_variables(selectedCV,selectedMV,selectedDV,SimResults);
n = length(MachineLearningData.CV);
m = length(MachineLearningData.MV);
d = length(MachineLearningData.DV);
numInputs = d+m;
numOutputs = n;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = tau_R; % 10
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
    switch typeOfData
        case 'Sim_'
            % Values obtained by inspection of open loop tests on simulator
%             controlParamsStruct.delayMV_CV = floor([6.5*60 6.5*60 0 4.4*60;
%                                                     6.5*60 6.5/60 0 6.5*60;
%                                                     3*60 3*60 0 0.5*60]/controlParamsStruct.tau_R);
%             controlParamsStruct.delayMV_CV = floor([10 10 0 10;
%                                                     10 10 0 10;
%                                                     10 10 0 10]/controlParamsStruct.tau_R);
            controlParamsStruct.delayMV_CV = zeros(n,numInputs);
        case 'Real_'
            controlParamsStruct.delayMV_CV = floor(MachineLearningData.delayMV_CV/controlParamsStruct.tau_R);
    end
    
    ioDTStr = 'ioDT_';
else
    controlParamsStruct.delayMV_CV = zeros(n,numInputs);
    ioDTStr = '';
end
%% DownSamplig for tau_R

MachineLearningData = ml_downsampling(MachineLearningData,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(MachineLearningData.CV(1).GroupedTimeSeries);
nSamples = controlParamsStruct.nSamples;
%% Machine Learning - Structural Parameters
mlParamsStruct.selectedVars.CV = selectedCV;
mlParamsStruct.selectedVars.MV = selectedMV;
mlParamsStruct.selectedVars.DV = selectedDV;

mlParamsStruct.trainingParamsArray = {nTrees,1,'on',10,'on','curvature','TBagger'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;

mlParamsStruct.DelayMatrix.U = repmat([0,5,15,30,60,72,90]',1,numInputs);
[mlParamsStruct.sizeUMatrix garbage] = size(mlParamsStruct.DelayMatrix.U);
mlParamsStruct.delayMV_CV = controlParamsStruct.delayMV_CV;

mlParamsStruct.DelayMatrix.Y = repmat([0,6,12,36,60,72,90]',1,numOutputs)
[mlParamsStruct.sizeYMatrix garbage] = size(mlParamsStruct.DelayMatrix.Y);

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(trainVSVal*nSamples);
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
                                                                    MachineLearningData,...
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
    numTrees = mlParamsStruct.trainingParamsArray{1};
    if strcmp(mlParamsStruct.trainingParamsArray{7},'TBagger')
        
        % RF Structure statistics
        limitTo = floor(RF.Trees{1}.NumNodes*0.8);
        
        numPredictors = length(RF.OOBPermutedPredictorDeltaError);
        for t = 1:numTrees
           Tree = RF.Trees{t};
           forestStats.numNodes(t) = Tree.NumNodes;
           forestStats.branches(t) = sum(Tree.IsBranchNode);
           forestStats.sizes(:,t) = Tree.NodeSize(1:limitTo);
           forestStats.cutPredictors(:,t) = Tree.CutPredictor(1:30); 
           forestStats.nodeProbability = Tree.NodeProbability(1:limitTo);
        end
        forestStats.OOBError = oobError(RF,'Mode','cumulative');
        forestStats.OOBPermutedDelta = RF.OOBPermutedPredictorDeltaError;
        forestStats.OOBSamples = sum(RF.OOBIndices,1);
        forestStats.PredictorSplit = RF.NumPredictorSplit;
        % Mean values
        forestStats.Means.numNodes = mean(forestStats.numNodes);
        forestStats.Means.branches = mean(forestStats.branches);
        forestStats.Means.sizes = mean(forestStats.sizes,2);
        forestStats.Means.nodeProbability = mean(forestStats.nodeProbability,2);
        forestStats.Means.OOBError = mean(forestStats.OOBError);
        forestStats.Means.OOBPermutedDelta = mean(RF.OOBPermutedPredictorDeltaError);
        forestStats.Means.OOBSamples = mean(forestStats.OOBSamples);
        forestStats.Means.PredictorSplit = mean(forestStats.PredictorSplit);
        % Var values
        forestStats.Std.numNodes = std(forestStats.numNodes);
        forestStats.Std.branches = std(forestStats.branches);
        forestStats.Std.sizes = std(forestStats.sizes,0,2);
        forestStats.Std.nodeProbability = std(forestStats.nodeProbability,0,2);
        forestStats.Std.OOBError = std(forestStats.OOBError);
        forestStats.Std.OOBPermutedDelta = std(RF.OOBPermutedPredictorDeltaError);
        forestStats.Std.OOBSamples = std(forestStats.OOBSamples);
        forestStats.Std.PredictorSplit = std(forestStats.PredictorSplit);
        if plotForestStats
            % Plot OOBError
            figure
            plot(10*log10(forestStats.OOBError),'b*')
            hold on
            plot(mean(10*log10(forestStats.OOBError))*ones(1,numTrees),'r')
            plot(mean(10*log10(forestStats.OOBError))*ones(1,numTrees)+...
                std(10*log10(forestStats.OOBError)),'k--')
            plot(mean(10*log10(forestStats.OOBError))*ones(1,numTrees)-...
                std(10*log10(forestStats.OOBError)),'k--')
            legend('Cum OOB Error','Mean OOB Error', 'Std OOB Error');
            xlabel('Forest Size [n]');
            ylabel('MSE')
            
            grid on
            hold off
            printName = [figurePath 'OOBErr' num2str(cvToGenerate) '_' typeOfData ioDTStr noiseStr...
                        'B' num2str(numTrees) ...
                        '_k' num2str(controlParamsStruct.tau_R) '_'...
                        'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                        '_' dateTest];
            if imprint
                % Latex
                print(printName,'-depsc');
%                 print(printName,'-djpeg');
            end
            
            % Plot PDE
            positiveIndexes = forestStats.OOBPermutedDelta > 0;
            permutedDeltaPos = forestStats.OOBPermutedDelta(positiveIndexes);
            permutedDeltaNeg = forestStats.OOBPermutedDelta(~positiveIndexes);
            figure
            y1 = plot(10*log10(permutedDeltaPos),'b*');
            hold on
            y2 = plot(mean(10*log10(permutedDeltaPos))*ones(1,length(permutedDeltaPos)),'r');
            y3 = plot(mean(10*log10(permutedDeltaPos))*ones(1,length(permutedDeltaPos))+...
                std(10*log10(permutedDeltaPos))*ones(1,length(permutedDeltaPos)),'k--');
            plot(mean(10*log10(permutedDeltaPos))*ones(1,length(permutedDeltaPos))-...
                std(10*log10(permutedDeltaPos))*ones(1,length(permutedDeltaPos)),'k--');
            
            grid on
            xlabel('Predictor Number [n]');
            ylabel('PDE');
            ylim([-10 1])
            xlim([0 mOrder.na(cvToGenerate)*5]);
            names = {['y_' num2str(cvToGenerate)],num2str(mOrder.na(cvToGenerate)),'d_1',...
                        num2str(mOrder.na(cvToGenerate)*2),'d_2',num2str(mOrder.na(cvToGenerate)*3),...
                        'u_1',num2str(mOrder.na(cvToGenerate)*4),'u_2',num2str(mOrder.na(cvToGenerate)*5)};
            set(gca,'xtick',[mOrder.na(cvToGenerate)/2:mOrder.na(cvToGenerate)/2:mOrder.na(cvToGenerate)*5],'xticklabel',names);
            axes = gca;
            for divLine = mOrder.na(cvToGenerate):mOrder.na(cvToGenerate):mOrder.na(cvToGenerate)*5
                line([divLine divLine],get(axes,'YLim'),'Color',[1 0 1],'LineStyle',':');
            end
            hold off
            legend([y1 y2 y3],{'PDE','Mean PDE', 'Std PDE'},'Location','southeast');
            printName = [figurePath 'PDE_' num2str(cvToGenerate) '_' typeOfData ioDTStr noiseStr...
                        'B' num2str(numTrees) ...
                        '_k' num2str(controlParamsStruct.tau_R) '_'...
                        'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                        '_' dateTest];
            if imprint
                % Latex
                print(printName,'-depsc');
%                 print(printName,'-djpeg');
            end
            forestStats.positiveIndexPermutedDelta = positiveIndexes;
            % Plot PS
            positiveIndexes = forestStats.PredictorSplit > 0;
            predictorSplitPos = forestStats.PredictorSplit(positiveIndexes);
            predictorSplitNeg = forestStats.PredictorSplit(~positiveIndexes);
            figure
            y1 = plot(10*log10(predictorSplitPos),'b*');
            hold on
            y2 = plot(mean(10*log10(predictorSplitPos))*ones(1,length(predictorSplitPos)),'r');
            y3 = plot(mean(10*log10(predictorSplitPos))*ones(1,length(predictorSplitPos))+...
                std(10*log10(predictorSplitPos)),'k--');
            plot(mean(10*log10(predictorSplitPos))*ones(1,length(predictorSplitPos))-...
                std(10*log10(predictorSplitPos)),'k--');
            xlabel('Predictor Number [n]');
            ylabel('PS');
            xlim([0 mOrder.na(cvToGenerate)*5]);
            names = {['y_' num2str(cvToGenerate)],num2str(mOrder.na(cvToGenerate)),'d_1',...
                        num2str(mOrder.na(cvToGenerate)*2),'d_2',num2str(mOrder.na(cvToGenerate)*3),...
                        'u_1',num2str(mOrder.na(cvToGenerate)*4),'u_2',num2str(mOrder.na(cvToGenerate)*5)};
            set(gca,'xtick',[mOrder.na(cvToGenerate)/2:mOrder.na(cvToGenerate)/2:mOrder.na(cvToGenerate)*5],'xticklabel',names);
            axes = gca;
            for divLine = mOrder.na(cvToGenerate):mOrder.na(cvToGenerate):mOrder.na(cvToGenerate)*5
                line([divLine divLine],get(axes,'YLim'),'Color',[1 0 1],'LineStyle',':');
            end
            legend([y1 y2 y3],{'PS','Mean PS', 'Std PS'},'Location','northeast');
            printName = [figurePath 'PDE_' num2str(cvToGenerate) '_' typeOfData ioDTStr noiseStr...
                        'B' num2str(numTrees) ...
                        '_k' num2str(controlParamsStruct.tau_R) '_'...
                        'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                        '_' dateTest];
            grid on
            hold off
            printName = [figurePath 'PS' num2str(cvToGenerate) '_' typeOfData ioDTStr noiseStr...
                        'B' num2str(numTrees) ...
                        '_k' num2str(controlParamsStruct.tau_R) '_'...
                        'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                        '_' dateTest];
            if imprint
                % Latex
                print(printName,'-depsc');
%                 print(printName,'-djpeg');
            end
            
            forestStats.positiveIndexPredSplit = positiveIndexes;
        end
        outputmatFileName = [predictiveModelsPath ...
                            'TBag_RF_Y' num2str(cvToGenerate) '_' typeOfData...
                            ioDTStr noiseStr...
                            'B' num2str(numTrees) ...
                            '_k' num2str(controlParamsStruct.tau_R) '_'...
                            'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                            '_' dateTest];
        if saveModelToMatFile
            save(outputmatFileName,'ML_Model','resultsIter','mOrder','mlParamsStruct','controlParamsStruct','forestStats');
        end
    else
        outputmatFileName = [predictiveModelsPath ...
                            'RF_Y' num2str(cvToGenerate) '_' typeOfData...
                            ioDTStr noiseStr...
                            'B' num2str(numTrees) ...
                            '_k' num2str(controlParamsStruct.tau_R) '_'...
                            'na' num2str(delayYCases) '_nb' num2str(delayUCases)...
                            '_' dateTest];
        if saveModelToMatFile
            save(outputmatFileName,'RF','mlParamsStruct','mOrder','controlParamsStruct');
        end
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
outputmatFileName = [resultsMLPath...
                    'ResultsRF' '_' typeOfData ioDTStr noiseStr...
                    'B' num2str(numTrees) ...
                    '_k' num2str(controlParamsStruct.tau_R) '_'...
                    'na' num2str(mOrder.na) '_nb' num2str(mOrder.nb)...
                    '_' dateTest];
if (saveResultsToMatFile)
    save(outputmatFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTimes');
end
