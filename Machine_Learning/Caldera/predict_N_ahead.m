function [ MSE_N_y ] = predict_N_ahead( RandomForest, InputTimeSeries, ValidationOutputs,...
                                            N_y,tau_R,na_y)
%PREDICT_N_AHEAD Summary of this function goes here
% Obtains predictions for N_y ahead steps using InputTimeSeries
% Inputs:
%   - RandomForest: RF tau_R ahead prediction model for specific output 
%   using p predictors
%   - InputTimeSeries: variableLength*p matrix. Each row has predictor for
%   time k
%   - ValidationOutputs: Actual model outputs for each sample. First value
%   is tau_R ahead of first predictor in time series.

% First prediction (1 step ahead) using data as-is (for each time sample)
% This is always done and default
yHat(:,1) = predict(RandomForest,InputTimeSeries);

% We need to "leave room" to predict the next N_y-1 steps; this means that
% we have to cut the predictor/validation time series in (N_y-1)*tau_R from
% the end and backwards.
MSE = -1*ones(1,N_y);
auxYHat = yHat(1:end-(N_y-1)*tau_R);
auxInputTimeSeries = InputTimeSeries(1:end-(N_y-1)*tau_R,:);
[predictionWindow,~] = size(auxInputTimeSeries);
MSE(1) = immse(auxYHat,ValidationOutputs(1:end-(N_y-1)*tau_R));
for j = 2:N_y
    % Rearrange AR part of predictor inputs
    % Shift right
    if na_y >= 2
        auxInputTimeSeries(1:end,2:na_y) = auxInputTimeSeries(1:end,1:(na_y-1));
    end
    % Add yHat predicted before
    auxInputTimeSeries(:,1) = auxYHat(:,j-1);
    
    % Rearrange X part of predictor inputs
    auxInputTimeSeries(:,(1+na_y):end) = InputTimeSeries(1+(j-1)*tau_R:...
                                        predictionWindow+(j-1)*tau_R,...
                                        (1+na_y):end);
    auxYHat(:,j) = predict(RandomForest,auxInputTimeSeries);
    MSE(j) = immse(auxYHat(:,j),ValidationOutputs(1+(j-1)*tau_R:...
                                            predictionWindow+(j-1)*tau_R));
end

end

