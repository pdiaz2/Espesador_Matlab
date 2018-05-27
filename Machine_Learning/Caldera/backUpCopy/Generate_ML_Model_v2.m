function [ Output ] = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod)
%GENERATE_ML_MODEL Generate Machine Learnt Model from IO Data
%   Detailed explanation goes here
if (strcmp(mlMethod,'RF'))
    % By default, if template is used in fitrensemble, maxNumSplits is set
    % correctly, 
    treeTemplate = templateTree('MergeLeaves','off','MinLeafSize',mlParameters{4},'PredictorSelection',mlParameters{6});
    for y = 1:numOutputs

        % % Currently under development. Fast check to see if predictor
        % importance is going to be biased.
    %     countLevels = @(x)numel(categories(categorical(x)));
    %     InputTable = array2table(TrainingSubset(y).InputData(:,1:end),'VariableNames',...
    %         TrainingSubset(y).PredictorNames);
    %     numLevels = varfun(countLevels,InputTable,'OutputFormat','uniform');
%         Output(y).Model = TreeBagger(mlParameters{1},TrainingSubset(y).InputData,TrainingSubset(y).OutputData,'Method','regression',...
%             'InBagFraction',mlParameters{2},'OOBPrediction',mlParameters{3},'MinLeafSize',bestHyp(y),...
%             'OOBPredictorImportance',mlParameters{5},'PredictorSelection',mlParameters{6},...
%             'PredictorNames',TrainingSubset(y).PredictorNames);
        Output(y).Model = fitrensemble(TrainingSubset(y).InputData,TrainingSubset(y).OutputData,...
                        'Method','Bag','NumLearningCycles',mlParameters{1},...
                        'Learners',treeTemplate,'Resample','on','Replace','on',...
                        'FResample',mlParameters{2},'PredictorNames',TrainingSubset(y).PredictorNames);
        % Don't touch NumPredictorsToSample        
    end
elseif (strcmp(mlMethod,'SS'))
    % For refinement
    opt = n4sidOptions();
    UOffset = [];
    YOffset = [];
    if strcmp(mlParameters{2},'R_I_DC')
        UOffset = mean(TrainingSubset.InputData)';
    end
    if strcmp(mlParameters{3},'R_O_DC')
        YOffset = mean(TrainingSubset.OutputData)';
    end
    opt.InputOffset = UOffset;
    opt.OutputOffset = YOffset;
    opt.N4Weight = mlParameters{4};
    opt.EnforceStability = mlParameters{5};
    opt.Display = mlParameters{6};
    opt.Focus = mlParameters{7};
    Output.Model = n4sid(TrainingSubset,mlParameters{1},opt);
elseif strcmp(mlMethod,'ARMAX')
    opt = armaxOptions();
    UOffset = [];
    YOffset = [];
    if strcmp(mlParameters{2},'R_I_DC')
        UOffset = mean(TrainingSubset.InputData)';
    end
    if strcmp(mlParameters{3},'R_O_DC')
        YOffset = mean(TrainingSubset.OutputData)';
    end
    opt.InputOffset = UOffset;
    opt.OutputOffset = YOffset;
    opt.EnforceStability = mlParameters{4};
    opt.Display = mlParameters{5};
    opt.Focus = mlParameters{6};
%     opt.InitialCondition = 'backcast';
    [garbage numInputs] = size(TrainingSubset.InputData);
    NA = diag(bestHyp(1)*ones(1,numOutputs));
    NB = repmat(bestHyp(2),numOutputs,numInputs);
    NC = repmat(bestHyp(3),numOutputs,1);
    NK = repmat(bestHyp(4),numOutputs,numInputs);
    intNoiseArray = repmat(mlParameters{7},numOutputs,1);
    Output.Model = armax(TrainingSubset,[NA NB NC NK],'IntegrateNoise',intNoiseArray,opt);
end
end

