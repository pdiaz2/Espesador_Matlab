function Results = ml_validate_model(testData,ML_Model,numOutputs,N_y,...
                                    delayMaxInTime,tau_R,na,ml_Method,generateOneBool)
switch ml_Method
    case 'RF'
        for y = 1:numOutputs
            % Validation is tau_R ahead value of actual data
            validationOutputs = testData(y).OutputData(:);
            [MSE_Ny,yHat_1] = ml_predict_N_ahead( ML_Model(y).Model, testData(y).InputData, validationOutputs,...
                                            N_y,tau_R,na(y),ml_Method,-1);
            Results(y).MSE = MSE_Ny;
            Results(y).Correlation = corr(yHat_1,validationOutputs);
            if generateOneBool
                % Do nothing
            else
                OOB = oobError(ML_Model(y).Model);
                Results(y).OOBError = OOB(end);
            end
    % ML_Results.Output(y).OOBPredictorImportance(experiment,delayUCases,delayYCases,:) = ML_Model(y).Model.OOBPermutedPredictorDeltaError;
    % ML_Results(experiment,delayUCases,delayYCases).Results(y).NumPredictorSplit = ML_Model(y).Model.NumPredictorSplit;
    % ML_Results(experiment,delayUCases,delayYCases).Results(y).MinLeafSize = ML_Model(y).Model.MinLeafSize;

        end
    case 'SS'
        
    case 'ARMAX'
        
        
end

end