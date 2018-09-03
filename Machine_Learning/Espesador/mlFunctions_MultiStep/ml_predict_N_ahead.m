function [ MSE_Ny,yHat,auxYHat ] = ml_predict_N_ahead( Model, inputTimeSeries, validationOutputs,...
                                        N_y,tau_R,na_y,mlParamsStruct,pOptions)
%PREDICT_N_AHEAD Summary of this function goes here
% Obtains predictions for N_y ahead steps using InputTimeSeries:
%     - For RF, it is programmed to get one output at a time. Each function
%     call asks for one output and it's predictors. So for n variables,
%     this function is called n times with different inputs.
%    - For ARMAX and N4SID, since models are automatically MIMO it
%    generates predictions for all outputs. It is called once.
% Inputs are different for different ml_methods (mistake)
    mlMethod = mlParamsStruct.mlMethod;
    maxDeadTime = max(max(mlParamsStruct.delayMV_CV));
    auxYHat = 0;
    if strcmp(mlMethod,'RF')
        % Inputs:
        %   - ML_Model: RF tau_R ahead prediction model for specific output 
        %   using p predictors
        %   - InputTimeSeries: variableLength*p matrix. Each row has predictor for
        %   time k concerning ONE output.
        %   - ValidationOutputs: Actual model outputs for each sample. First value
        %   is tau_R ahead of first predictor in time series. It is for ONE
        %   output
        % First prediction (1 step ahead) using data as-is (for each time sample)
        % This is always done and default
        yHat(:,1) = predict(Model,inputTimeSeries);
%         yHat = yHat(1+N_y-jAhead:end-jAhead); % We are losing
        
        % We need to "leave room" to predict the next N_y-1 steps; this means that
        % we have to cut the predictor/validation time series in (N_y-1) from
        % the end and backwards.

        auxYHat = yHat(1:end-(N_y-1));
        
        MSE_Ny = immse(yHat,validationOutputs(1:end));

    elseif strcmp(mlMethod,'SS')
        data = iddata(validationOutputs,inputTimeSeries,tau_R,'TimeUnit','minutes');
        for j = 1:N_y
            % Approximate forecasting with prediction function in Matlab
            yP = predict(Model,data,j,pOptions);
            [subSamples,n] = size(yP.OutputData);
            yHat(:,:,j) = yP.OutputData;
            for y = 1:n
                MSE_Ny(j,y) = immse(yHat(:,y,j),validationOutputs(:,y));
            end
        end
    elseif strcmp(mlMethod,'ARMAX')
%         MSE_Ny = -1*ones(N_y,1);
%         yHat = sim(ML_Model,
        data = iddata(validationOutputs,inputTimeSeries,tau_R*60,'TimeUnit','seconds');
        for j = 1:N_y
            % Predict j-step ahead
            yP = predict(Model,data,j,pOptions);
            [subSamples,n] = size(yP.OutputData);
            yHat(:,:,j) = yP.OutputData;
            for y = 1:n
                MSE_Ny(j,y) = immse(yHat(maxDeadTime+1:end,y,j),...
                                    validationOutputs(maxDeadTime+1:end,y));
            end
        end
    end
end


% % % % function [ MSE_Ny,yHat,auxYHat ] = ml_predict_N_ahead( ML_Model, inputTimeSeries, validationOutputs,...
% % % %                                         N_y,tau_R,na_y,mlMethod,pOptions)
% % % % %PREDICT_N_AHEAD Summary of this function goes here
% % % % % Obtains predictions for N_y ahead steps using InputTimeSeries:
% % % % %     - For RF, it is programmed to get one output at a time. Each function
% % % % %     call asks for one output and it's predictors. So for n variables,
% % % % %     this function is called n times with different inputs.
% % % % %    - For ARMAX and N4SID, since models are automatically MIMO it
% % % % %    generates predictions for all outputs. It is called once.
% % % % % Inputs are different for different ml_methods (mistake)
% % % %     auxYHat = 0;
% % % %     if strcmp(mlMethod,'RF')
% % % %         % Inputs:
% % % %         %   - ML_Model: RF tau_R ahead prediction model for specific output 
% % % %         %   using p predictors
% % % %         %   - InputTimeSeries: variableLength*p matrix. Each row has predictor for
% % % %         %   time k concerning ONE output.
% % % %         %   - ValidationOutputs: Actual model outputs for each sample. First value
% % % %         %   is tau_R ahead of first predictor in time series. It is for ONE
% % % %         %   output
% % % %         MSE_Ny = -1*ones(N_y,1);
% % % %         % First prediction (1 step ahead) using data as-is (for each time sample)
% % % %         % This is always done and default
% % % %         yHat(:,1) = predict(ML_Model,inputTimeSeries);
% % % % 
% % % %         % We need to "leave room" to predict the next N_y-1 steps; this means that
% % % %         % we have to cut the predictor/validation time series in (N_y-1)*tau_R from
% % % %         % the end and backwards.
% % % % 
% % % %         auxYHat = yHat(1:end-(N_y-1)*tau_R);
% % % %         auxInputTimeSeries = inputTimeSeries(1:end-(N_y-1)*tau_R,:);
% % % %         [predictionWindow,~] = size(auxInputTimeSeries);
% % % %         MSE_Ny(1) = immse(auxYHat,validationOutputs(1:end-(N_y-1)*tau_R));
% % % % 
% % % %         % Since our testBatch is experiment 8, the data set doesn't suffer from
% % % %         % contamination. Therefore, we can "shift" time series with no caution.
% % % %         for j = 2:N_y
% % % %             % Rearrange AR part of predictor inputs
% % % %             % Shift right
% % % %             if na_y >= 2
% % % %                 auxInputTimeSeries(1:end,2:na_y) = auxInputTimeSeries(1:end,1:(na_y-1));
% % % %             end
% % % %             % Add yHat predicted before
% % % %             auxInputTimeSeries(:,1) = auxYHat(:,j-1);
% % % % 
% % % %             % Rearrange X part of predictor inputs
% % % %             auxInputTimeSeries(:,(1+na_y):end) = inputTimeSeries(1+(j-1)*tau_R:...
% % % %                                                 predictionWindow+(j-1)*tau_R,...
% % % %                                                 (1+na_y):end);
% % % %             auxYHat(:,j) = predict(ML_Model,auxInputTimeSeries);
% % % %             MSE_Ny(j) = immse(auxYHat(:,j),validationOutputs(1+(j-1)*tau_R:...
% % % %                                                     predictionWindow+(j-1)*tau_R));
% % % %         end
% % % %     elseif strcmp(mlMethod,'SS')
% % % %         data = iddata(validationOutputs,inputTimeSeries,tau_R);
% % % %         for j = 1:N_y
% % % %             % Approximate forecasting with prediction function in Matlab
% % % %             yP = predict(ML_Model,data,j,pOptions);
% % % %             [subSamples,n] = size(yP.OutputData);
% % % %             yHat(:,:,j) = yP.OutputData;
% % % %             for y = 1:n
% % % %                 MSE_Ny(j,y) = immse(yHat(:,y,j),validationOutputs(:,y));
% % % %             end
% % % %         end
% % % %     elseif strcmp(mlMethod,'ARMAX')
% % % % %         MSE_Ny = -1*ones(N_y,1);
% % % % %         yHat = sim(ML_Model,
% % % %         data = iddata(validationOutputs,inputTimeSeries,tau_R);
% % % %         for j = 1:N_y
% % % %             % Approximate forecasting with prediction function in Matlab
% % % %             yP = predict(ML_Model,data,j,pOptions);
% % % %             [subSamples,n] = size(yP.OutputData);
% % % %             yHat(:,:,j) = yP.OutputData;
% % % %             for y = 1:n
% % % %                 MSE_Ny(j,y) = immse(yHat(:,y,j),validationOutputs(:,y));
% % % %             end
% % % %         end
% % % %     end
% % % % end

