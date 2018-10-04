function [ Output ] = ml_learn_model(numOutputs,trainingSubset,bestHyp,mlParamsStruct)
%GENERATE_ML_MODEL Generate Machine Learnt Model from IO Data
%   Detailed explanation goes here
    mlMethod = mlParamsStruct.mlMethod;
    generateOneBool = mlParamsStruct.generateOneBool;
    mlParamsArray = mlParamsStruct.trainingParamsArray;
    delayMV_CV = mlParamsStruct.delayMV_CV;
    if (strcmp(mlMethod,'RF'))
        if generateOneBool
            cvToGenerate = mlParamsStruct.cvToGenerate;
            if strcmp(mlParamsArray{7},'TBagger')
                Mdl = TreeBagger(mlParamsArray{1},...
                                trainingSubset(cvToGenerate).InputData,...
                                trainingSubset(cvToGenerate).OutputData,...
                                'Method','regression',...
                                'InBagFraction',mlParamsArray{2},...
                                'OOBPrediction',mlParamsArray{3},...
                                'MinLeafSize',bestHyp(cvToGenerate),...
                                'OOBPredictorImportance',mlParamsArray{5},...
                                'PredictorSelection',mlParamsArray{6},...
                                'PredictorNames',...
                                trainingSubset(cvToGenerate).PredictorNames);
            elseif strcmp(mlParamsArray{7},'Ensemble')
                treeTemplate = templateTree('MergeLeaves','off',...
                                            'MinLeafSize',bestHyp(cvToGenerate),...
                                            'PredictorSelection',mlParamsArray{6});
                Mdl = fitrensemble(trainingSubset(cvToGenerate).InputData,...
                                    trainingSubset(cvToGenerate).OutputData,...
                                    'Method','Bag',...
                                    'NumLearningCycles',mlParamsArray{1},...
                                    'Learners',treeTemplate,'Resample','on',...
                                    'Replace','on','FResample',mlParamsArray{2},...
                                    'PredictorNames',trainingSubset(cvToGenerate).PredictorNames);
            end
            Output(1).Model = Mdl;
        else
            for y = 1:numOutputs
                if strcmp(mlParamsArray{7},'TBagger')
                    Mdl = TreeBagger(mlParamsArray{1},trainingSubset(y).InputData,trainingSubset(y).OutputData,'Method','regression',...
                        'InBagFraction',mlParamsArray{2},'OOBPrediction',mlParamsArray{3},'MinLeafSize',bestHyp(y),...
                        'OOBPredictorImportance',mlParamsArray{5},'PredictorSelection',mlParamsArray{6},...
                        'PredictorNames',trainingSubset(y).PredictorNames);
                elseif strcmp(mlParamsArray{7},'Ensemble')
                    treeTemplate = templateTree('MergeLeaves','off','MinLeafSize',bestHyp(y),'PredictorSelection',mlParamsArray{6});
                    Mdl = fitrensemble(trainingSubset(y).InputData,trainingSubset(y).OutputData,...
                            'Method','Bag','NumLearningCycles',mlParamsArray{1},...
                            'Learners',treeTemplate,'Resample','on','Replace','on',...
                            'FResample',mlParamsArray{2},'PredictorNames',trainingSubset(y).PredictorNames);
                end
                Output(y).Model = Mdl;
                % Don't touch NumPredictorsToSample        
            end
        end
    elseif (strcmp(mlMethod,'SS'))
        % For refinement
        opt = n4sidOptions();
        UOffset = [];
        YOffset = [];
        if strcmp(mlParamsArray{2},'R_DC')
            UOffset = mean(trainingSubset.InputData)';
        end
        if strcmp(mlParamsArray{3},'R_DC')
            YOffset = mean(trainingSubset.OutputData)';
        end
        opt.InputOffset = UOffset;
        opt.OutputOffset = YOffset;
        opt.N4Weight = mlParamsArray{4};
        opt.EnforceStability = mlParamsArray{5};
        opt.Focus = mlParamsArray{6};
        opt.Display = mlParamsArray{7};
        Output.Model = n4sid(trainingSubset,mlParamsArray{1},opt);
    elseif strcmp(mlMethod,'ARMAX')
        opt = armaxOptions();
        UOffset = [];
        YOffset = [];
        if strcmp(mlParamsArray{2},'R_DC')
            UOffset = mean(trainingSubset.InputData)';
        end
        if strcmp(mlParamsArray{3},'R_DC')
            YOffset = mean(trainingSubset.OutputData)';
        end
        opt.InputOffset = UOffset;
        opt.OutputOffset = YOffset;
        opt.EnforceStability = mlParamsArray{4};
        opt.Display = mlParamsArray{5};
        opt.Focus = mlParamsArray{6};
    %     opt.InitialCondition = 'backcast';
        [garbage numInputs] = size(trainingSubset.InputData);
        NA = diag(bestHyp(1)*ones(1,numOutputs));
        NB = repmat(bestHyp(2),numOutputs,numInputs);
        NC = repmat(bestHyp(3),numOutputs,1);
        NK = repmat(bestHyp(4),numOutputs,numInputs)+delayMV_CV(:,1:end);
        intNoiseArray = repmat(mlParamsArray{7},numOutputs,1);
        Output.Model = armax(trainingSubset,[NA NB NC NK],'IntegrateNoise',intNoiseArray,opt);
    elseif strcmp(mlMethod,'Proc')
        opt = procestOptions();
        UOffset = [];
        YOffset = [];
        if strcmp(mlParamsArray{2},'R_DC')
            UOffset = mean(trainingSubset.InputData)';
        end
        if strcmp(mlParamsArray{3},'R_DC')
            YOffset = mean(trainingSubset.OutputData)';
        end
        opt.InputOffset = UOffset;
        opt.OutputOffset = YOffset;
        opt.DisturbanceModel = 'arma1';
        pEst = {'P1D','P1D','P1D','P1D';
                'P1D','P1D','P1D','P1D';
                'P1D','P1D','P1D','P1D'};
        lala = procest(trainingSubset,pEst,opt);
        Output.Model = c2d(idtf(lala),trainingSubset.Ts);
    end
end

