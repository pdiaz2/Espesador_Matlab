function Results = ml_validate_model(testData,ML_Model,numOutputs,N_y,...
                                    tau_R,na,mlParamsStruct)
mlMethod = mlParamsStruct.mlMethod;
generateOneBool = mlParamsStruct.generateOneBool;
cvToGenerate = mlParamsStruct.cvToGenerate;
tBagOrEnsemble = mlParamsStruct.trainingParamsArray{7};
deadTimeMV_CV = mlParamsStruct.delayMV_CV;
%%
assessmentValues = ml_assessment_values(testData);
%%
switch mlMethod
    case 'RF'
        if generateOneBool
            cv = cvToGenerate;
            % Validation is tau_R ahead value of actual data
            validationOutputs = testData(cv).OutputData(:);
            [MSE_Ny,yHat_1,yHat] = ml_predict_N_ahead(ML_Model(1).Model, ...
                                                testData(cv).InputData, ...
                                                validationOutputs,...
                                                N_y,tau_R,na(cv),...
                                                mlParamsStruct,-1);
            Results(1).MSE = MSE_Ny;
            Results(1).NMSE = MSE_Ny/assessmentValues(cv,2);
            Results(1).RNMSE = sqrt(Results(1).NMSE);
            Results(1).BFR = (1-Results(1).RNMSE)*100;
            Results(1).FPE = (1+assessmentValues(cv,4))/(1-assessmentValues(cv,4))*MSE_Ny;
            Results(1).Correlation = corr(yHat_1,validationOutputs);
            Results(1).yHat = yHat;
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
                [MSE_Ny,yHat_1,yHat] = ml_predict_N_ahead(ML_Model(cv).Model, ...
                                                    testData(cv).InputData, ...
                                                    validationOutputs,...
                                                    N_y,tau_R,na(cv),...
                                                    mlParamsStruct,-1);
                Results(cv).MSE = MSE_Ny;
                Results(cv).NMSE = MSE_Ny/assessmentValues(cv,2);
                Results(cv).RNMSE = sqrt(Results(cv).NMSE);
                Results(cv).BFR = (1-Results(cv).RNMSE)*100;
                Results(cv).FPE = (1+assessmentValues(cv,3))/(1-assessmentValues(cv,3))*MSE_Ny;
                Results(cv).Correlation = corr(yHat_1,validationOutputs);
                Results(cv).yHat = yHat;
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
        UDC = mean(testData.InputData)';
        YDC = mean(testData.OutputData)';

        [UOffset] = ml_remove_offset(mlParamsStruct.trainingParamsArray{2},UDC,numel(UDC));
        [YOffset] = ml_remove_offset(mlParamsStruct.trainingParamsArray{3},YDC,numel(YDC));
        pOptions = ml_generate_pOptions(ML_Model.Model,...
                                        testData.InputData,...
                                        testData.OutputData,...
                                        UOffset,YOffset);

        [MSE_Ny,yHat_Ny] = ml_predict_N_ahead(ML_Model.Model,...
                                    testData.InputData,...
                                    testData.OutputData,...
                                    N_y,tau_R,-1,...
                                    mlParamsStruct,pOptions);
        for cv = 1:numOutputs
            Correlation(cv) = corr(yHat_Ny(:,cv,1),testData.OutputData(:,cv));
        end
        Results.MSE = MSE_Ny;
        Results.yHat = yHat_Ny;
        Results.Correlation = Correlation;
        Results.Fit.FPE = ML_Model.Model.Report.Fit.FPE;
        Results.Fit.AIC = ML_Model.Model.Report.Fit.AIC;
        Results.Fit.MSE = ML_Model.Model.Report.Fit.MSE;
    case 'ARMAX'
        UDC = mean(testData.InputData)';
        YDC = mean(testData.OutputData)';
        maxDeadTime = max(max(deadTimeMV_CV));
        [UOffset] = ml_remove_offset(mlParamsStruct.trainingParamsArray{2},UDC,numel(UDC));
        [YOffset] = ml_remove_offset(mlParamsStruct.trainingParamsArray{3},YDC,numel(YDC));
        pOptions = ml_generate_pOptions(ML_Model.Model,...
                                        testData.InputData,...
                                        testData.OutputData,...
                                        UOffset,YOffset);

        [MSE_Ny,yHat_Ny] = ml_predict_N_ahead(ML_Model.Model,...
                                    testData.InputData,...
                                    testData.OutputData,...
                                    N_y,tau_R,-1,...
                                    mlParamsStruct,pOptions);
        for cv = 1:numOutputs
            Correlation(cv) = corr(yHat_Ny(maxDeadTime+1:end,cv,1),testData.OutputData(maxDeadTime+1:end,cv));
        end
        Results.MSE = MSE_Ny;
        Results.yHat = yHat_Ny;
        Results.NMSE = MSE_Ny./assessmentValues(:,2)';
        Results.RNMSE = sqrt(Results.NMSE);
        Results.BFR = (1-Results.RNMSE)*100;
        Results.Correlation = Correlation;
        Results.Fit.FPE = ML_Model.Model.Report.Fit.FPE;
        Results.Fit.AIC = ML_Model.Model.Report.Fit.AIC;
        Results.Fit.MSE = ML_Model.Model.Report.Fit.MSE;
end
        
        
end
