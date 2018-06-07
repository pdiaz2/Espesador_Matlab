function Results = ml_validate_model(testData,ML_Model,numOutputs,N_y,...
                                    tau_R,na,mlParamsStruct)
mlMethod = mlParamsStruct.mlMethod;
generateOneBool = mlParamsStruct.generateOneBool;
cvToGenerate = mlParamsStruct.cvToGenerate;
tBagOrEnsemble = mlParamsStruct.trainingParamsArray{7};
switch mlMethod
    case 'RF'
        if generateOneBool
            cv = cvToGenerate;
            % Validation is tau_R ahead value of actual data
            validationOutputs = testData(cv).OutputData(:);
            [MSE_Ny,yHat_1] = ml_predict_N_ahead(ML_Model(1).Model, ...
                                                testData(cv).InputData, ...
                                                validationOutputs,...
                                                N_y,tau_R,na(cv),...
                                                mlMethod,-1);
            Results(1).MSE = MSE_Ny;
            Results(1).Correlation = corr(yHat_1,validationOutputs);
            switch tBagOrEnsemble
                case 'TBagger'
                    OOB = oobError(ML_Model(1).Model);
                    Results(1).OOBError = OOB(end);
                case 'Ensemble'

            end
        else
            
            for cv = 1:numOutputs
                % Validation is tau_R ahead value of actual data
                validationOutputs = testData(cv).OutputData(:);
                [MSE_Ny,yHat_1] = ml_predict_N_ahead(ML_Model(cv).Model, ...
                                                    testData(cv).InputData, ...
                                                    validationOutputs,...
                                                    N_y,tau_R,na(cv),...
                                                    mlMethod,-1);
                Results(cv).MSE = MSE_Ny;
                Results(cv).Correlation = corr(yHat_1,validationOutputs);
                switch tBagOrEnsemble
                    case 'TBagger'
                        OOB = oobError(ML_Model(cv).Model);
                        Results(cv).OOBError = OOB(end);
                    case 'Ensemble'

                end
            end
        end
            
    % ML_Results.Output(y).OOBPredictorImportance(experiment,delayUCases,delayYCases,:) = ML_Model(y).Model.OOBPermutedPredictorDeltaError;
    % ML_Results(experiment,delayUCases,delayYCases).Results(y).NumPredictorSplit = ML_Model(y).Model.NumPredictorSplit;
    % ML_Results(experiment,delayUCases,delayYCases).Results(y).MinLeafSize = ML_Model(y).Model.MinLeafSize;
            
    case 'SS'
        
    case 'ARMAX'
        
end
        
        
end
