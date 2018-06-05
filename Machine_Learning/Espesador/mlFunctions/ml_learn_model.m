function [ Output ] = ml_learn_model(numOutputs,trainingSubset,mlParameters,bestHyp,mlMethod)
%GENERATE_ML_MODEL Generate Machine Learnt Model from IO Data
%   Detailed explanation goes here
    if (strcmp(mlMethod,'RF'))
        for y = 1:numOutputs
            if strcmp(mlParameters{7},'TBagger')
                Mdl = TreeBagger(mlParameters{1},trainingSubset(y).InputData,trainingSubset(y).OutputData,'Method','regression',...
                    'InBagFraction',mlParameters{2},'OOBPrediction',mlParameters{3},'MinLeafSize',bestHyp(y),...
                    'OOBPredictorImportance',mlParameters{5},'PredictorSelection',mlParameters{6},...
                    'PredictorNames',trainingSubset(y).PredictorNames);
            elseif strcmp(mlParameters{7},'Ensemble')
                treeTemplate = templateTree('MergeLeaves','off','MinLeafSize',bestHyp(y),'PredictorSelection',mlParameters{6});
                Mdl = fitrensemble(trainingSubset(y).InputData,trainingSubset(y).OutputData,...
                        'Method','Bag','NumLearningCycles',mlParameters{1},...
                        'Learners',treeTemplate,'Resample','on','Replace','on',...
                        'FResample',mlParameters{2},'PredictorNames',trainingSubset(y).PredictorNames);
            end
            Output(y).Model = Mdl;
            % Don't touch NumPredictorsToSample        
        end
    elseif (strcmp(mlMethod,'SS'))
        % For refinement
        opt = n4sidOptions();
        UOffset = [];
        YOffset = [];
        if strcmp(mlParameters{2},'R_DC')
            UOffset = mean(trainingSubset.InputData)';
        end
        if strcmp(mlParameters{3},'R_DC')
            YOffset = mean(trainingSubset.OutputData)';
        end
        opt.InputOffset = UOffset;
        opt.OutputOffset = YOffset;
        opt.N4Weight = mlParameters{4};
        opt.EnforceStability = mlParameters{5};
        opt.Display = mlParameters{6};
        opt.Focus = mlParameters{7};
        Output.Model = n4sid(trainingSubset,mlParameters{1},opt);
    elseif strcmp(mlMethod,'ARMAX')
        opt = armaxOptions();
        UOffset = [];
        YOffset = [];
        if strcmp(mlParameters{2},'R_DC')
            UOffset = mean(trainingSubset.InputData)';
        end
        if strcmp(mlParameters{3},'R_DC')
            YOffset = mean(trainingSubset.OutputData)';
        end
        opt.InputOffset = UOffset;
        opt.OutputOffset = YOffset;
        opt.EnforceStability = mlParameters{4};
        opt.Display = mlParameters{5};
        opt.Focus = mlParameters{6};
    %     opt.InitialCondition = 'backcast';
        [garbage numInputs] = size(trainingSubset.InputData);
        NA = diag(bestHyp(1)*ones(1,numOutputs));
        NB = repmat(bestHyp(2),numOutputs,numInputs);
        NC = repmat(bestHyp(3),numOutputs,1);
        NK = repmat(bestHyp(4),numOutputs,numInputs);
        intNoiseArray = repmat(mlParameters{7},numOutputs,1);
        Output.Model = armax(trainingSubset,[NA NB NC NK],'IntegrateNoise',intNoiseArray,opt);
    end
end

