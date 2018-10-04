function [results,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,testBigSet,...
                                            controlParamsStruct,mlParamsStruct,mOrderStruct)
%ML_MODEL_GENERATION ML generation main function
% This functions arranges input/output data according to specified options
% builds the specified ML model and ultimately calculates performance
% metrics for the built model. This function is intended for thickener
% only.
% Inputs:
%   - trainingBigSet: struct with fields CV,MV,DV of the time series
%   (already aggregated to the desired model resolution) for training
%   - testBigSet: struct with fields CV,MV,DV of the time series
%   (already aggregated to the desired model resolution) for testing
%   - controlParamsStruct: struct containing parameters of system and
%   control characteristics
%   - mlParamsStruct: struct containing parameters for the machine learning
%   algorithms
%   - mOrderStruct: struct containing parameters of the order (delays in U
%   and Y) for the model being build

%% Arrannge and prepare IO Data for training
[trainingSubset,~] = ml_prepare_IO_data(trainingBigSet,...
                                    controlParamsStruct.nameInputs,...
                                    controlParamsStruct.nameOutputs,...
                                    1, controlParamsStruct.tau_R,...
                                    mlParamsStruct.trainingSamples,...
                                    mOrderStruct.na, mOrderStruct.nb,....
                                    mlParamsStruct);
%% Hyperparameter Optimization
% If specified in optimizeBool
switch mlParamsStruct.mlMethod
    case 'RF'
        bestHyp = ml_optimize_hyperParams(trainingSubset,...
                                        controlParamsStruct.dimsSystem(1),...
                                        mlParamsStruct.trainingParamsArray,...
                                        mlParamsStruct.optimizeParams.hyperparametersRF,...
                                        mlParamsStruct.optimizeParams.optimizeBool);
    case 'SS'
        % Under construction
        bestHyp(1) = -1;
    case 'ARMAX'
        bestHyp(1) = mOrderStruct.na;
        bestHyp(2) = mOrderStruct.nb;
        bestHyp(3) = mOrderStruct.nc;
        bestHyp(4) = mOrderStruct.nk;
    case 'Proc'
        bestHyp(1) = -1;
end
%% Generate Machine Learning Model
disp('Generating Machine Learning Model')

tic;
ML_Model = ml_learn_model(controlParamsStruct.dimsSystem(1),...
                            trainingSubset,...
                            bestHyp,...
                            mlParamsStruct);
trainingTime = toc;

%% Test & Validation Data

[testSubset,~] = ml_prepare_IO_data(testBigSet,...
                                controlParamsStruct.nameInputs,...
                                controlParamsStruct.nameOutputs,...
                                1, controlParamsStruct.tau_R,...
                                mlParamsStruct.validationSamples,...
                                mOrderStruct.na, mOrderStruct.nb,....
                                mlParamsStruct);
%% Prediction and Comparison
fprintf("Evaluating performance criteria...\r\n")
results = ml_validate_model(testSubset,ML_Model,...
                            controlParamsStruct.dimsSystem(1),...
                            controlParamsStruct.N_y,...
                            controlParamsStruct.tau_R,...
                            mOrderStruct.na,...
                            mlParamsStruct);

end

% % % % % % function [results,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,testBigSet,...
% % % % % %                                             controlParamsStruct,mlParamsStruct,mOrderStruct)
% % % % % % %ML_MODEL_GENERATION ML generation main function
% % % % % % % This functions arranges input/output data according to specified options
% % % % % % % builds the specified ML model and ultimately calculates performance
% % % % % % % metrics for the built model. This function is intended for thickener
% % % % % % % only.
% % % % % % % Inputs:
% % % % % % %   - trainingBigSet: struct with fields CV,MV,DV of the time series
% % % % % % %   (already aggregated to the desired model resolution) for training
% % % % % % %   - testBigSet: struct with fields CV,MV,DV of the time series
% % % % % % %   (already aggregated to the desired model resolution) for testing
% % % % % % %   - controlParamsStruct: struct containing parameters of system and
% % % % % % %   control characteristics
% % % % % % %   - mlParamsStruct: struct containing parameters for the machine learning
% % % % % % %   algorithms
% % % % % % %   - mOrderStruct: struct containing parameters of the order (delays in U
% % % % % % %   and Y) for the model being build
% % % % % % 
% % % % % % %% Arrannge and prepare IO Data for training
% % % % % % [trainingSubset,~] = ml_prepare_IO_data(trainingBigSet,...
% % % % % %                                     controlParamsStruct.nameInputs,...
% % % % % %                                     controlParamsStruct.nameOutputs,...
% % % % % %                                     1, controlParamsStruct.tau_R,...
% % % % % %                                     mlParamsStruct.trainingSamples,...
% % % % % %                                     mOrderStruct.na, mOrderStruct.nb,....
% % % % % %                                     mlParamsStruct.mlMethod);
% % % % % % %% Hyperparameter Optimization
% % % % % % % If specified in optimizeBool
% % % % % % switch mlParamsStruct.mlMethod
% % % % % %     case 'RF'
% % % % % %         bestHyp = ml_optimize_hyperParams(trainingSubset,...
% % % % % %                                         controlParamsStruct.dimsSystem(1),...
% % % % % %                                         mlParamsStruct.trainingParamsArray,...
% % % % % %                                         mlParamsStruct.optimizeParams.hyperparametersRF,...
% % % % % %                                         mlParamsStruct.optimizeParams.optimizeBool);
% % % % % %     case 'SS'
% % % % % %         % Under construction
% % % % % %         bestHyp(1) = -1;
% % % % % %     case 'ARMAX'
% % % % % %         bestHyp(1) = mOrderStruct.na;
% % % % % %         bestHyp(2) = mOrderStruct.nb;
% % % % % %         bestHyp(3) = mOrderStruct.nc;
% % % % % %         bestHyp(4) = mOrderStruct.nk;
% % % % % % end
% % % % % % %% Generate Machine Learning Model
% % % % % % disp('Generating Machine Learning Model')
% % % % % % 
% % % % % % tic;
% % % % % % ML_Model = ml_learn_model(controlParamsStruct.dimsSystem(1),...
% % % % % %                             trainingSubset,...
% % % % % %                             bestHyp,...
% % % % % %                             mlParamsStruct);
% % % % % % trainingTime = toc;
% % % % % % 
% % % % % % %% Test & Validation Data
% % % % % % 
% % % % % % [testSubset,~] = ml_prepare_IO_data(testBigSet,...
% % % % % %                                 controlParamsStruct.nameInputs,...
% % % % % %                                 controlParamsStruct.nameOutputs,...
% % % % % %                                 1, controlParamsStruct.tau_R,...
% % % % % %                                 mlParamsStruct.validationSamples,...
% % % % % %                                 mOrderStruct.na, mOrderStruct.nb,....
% % % % % %                                 mlParamsStruct.mlMethod);
% % % % % % %% Prediction and Comparison
% % % % % % fprintf("Evaluating performance criteria...\r\n")
% % % % % % results = ml_validate_model(testSubset,ML_Model,...
% % % % % %                             controlParamsStruct.dimsSystem(1),...
% % % % % %                             controlParamsStruct.N_y,...
% % % % % %                             controlParamsStruct.tau_R,...
% % % % % %                             mOrderStruct.na,...
% % % % % %                             mlParamsStruct);
% % % % % % 
% % % % % % end