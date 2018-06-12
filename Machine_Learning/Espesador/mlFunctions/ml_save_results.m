function [ML_Results] = ml_save_results(ML_Results,...
                                        resultsIter,...
                                        controlParamsStruct,...
                                        mlParamsStruct,...
                                        casesArray)
%ML_SAVE_RESULTS Saves results of performance criteria associated with
%model
% Inputs:
%   - ML_Results: struct that is updated in with every new model generated.
%   Stores results for (delayUCases,delayYCases)
%   - resultsIter: results for this iteration of ML model
%   - controlParamsStruct: struct containing parameters of system and
%   control characteristics
%   - mlParamsStruct: struct containing parameters for the machine learning
%   algorithms
%   - casesArray: variable length array (depending of type of model
%   created) with the indexes used to store results
switch mlParamsStruct.mlMethod
    case 'RF'
        for cv = 1:controlParamsStruct.dimsSystem(1)
            ML_Results.Output(cv).Performance(casesArray(1),casesArray(2),casesArray(3)).MSE = ...
                                                                        resultsIter(cv).MSE;
            ML_Results.Output(cv).Performance(casesArray(1),casesArray(2),casesArray(3)).Correlation = ...
                                                                        resultsIter(cv).Correlation;
            switch mlParamsStruct.trainingParamsArray{7}
                case 'TBagger'
                    ML_Results.Output(cv).Performance(casesArray(1),casesArray(2),casesArray(3)).OOBError = ...
                                                                        resultsIter(cv).OOBError;
                case 'Ensemble'

            end
        end
    case 'SS'
        for cv = 1:controlParamsStruct.dimsSystem(1)
            ML_Results.Output(cv).Performance(casesArray(1),casesArray(2),casesArray(3)).MSE = ...
                                                                                resultsIter.MSE(:,cv);
            ML_Results.Output(cv).MSE_1(casesArray(1),casesArray(2),casesArray(3)) =...
                                                                                resultsIter.MSE(1,cv);
            ML_Results.Output(cv).Performance(casesArray(1),casesArray(2),casesArray(3)).Correlation... 
                                                                        = resultsIter.Correlation(cv);
            ML_Results.Output(cv).Correlation(casesArray(1),casesArray(2),casesArray(3))...
                                                                = resultsIter.Correlation(cv);
            ML_Results.Fit.FPE(casesArray(1),casesArray(2),casesArray(3))...
                                                                    = resultsIter.Fit.FPE;
            ML_Results.Fit.AIC(casesArray(1),casesArray(2),casesArray(3))...
                                                                    = resultsIter.Fit.AIC;
            ML_Results.Fit.MSE(casesArray(1),casesArray(2),casesArray(3))...
                                                                    = resultsIter.Fit.MSE;
        end
    case 'ARMAX'
        for cv = 1:controlParamsStruct.dimsSystem(1)
            ML_Results.Output(cv).Performance(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6)).MSE...
                                                                            = resultsIter.MSE(:,cv);
            ML_Results.Output(cv).MSE_1(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6))...
                                                                    = resultsIter.MSE(1,cv);
            ML_Results.Output(cv).Performance(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6)).Correlation... 
                                                                        = resultsIter.Correlation(cv);
            ML_Results.Output(cv).Correlation(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6))...
                                                                = resultsIter.Correlation(cv);
            ML_Results.Fit.FPE(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6))...
                                                                    = resultsIter.Fit.FPE;
            ML_Results.Fit.AIC(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6))...
                                                                    = resultsIter.Fit.AIC;
            ML_Results.Fit.MSE(1,casesArray(1),casesArray(2),casesArray(3),...
                                            casesArray(4),casesArray(5),casesArray(6))...
                                                                    = resultsIter.Fit.MSE;
        end
end
end