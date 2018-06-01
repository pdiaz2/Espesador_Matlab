function [ PredictorData,predictorNames ] = shift_time_series( nVars,delayCoeffs,tData,delayMaxInTime,...
                                                               NameVars,tau_R,numSamples)
%SHIFT_TIME_SERIES Summary of this function goes here
%   Detailed explanation goes here
PredictorData = [];
predictorNames = {};
% The predictors for y(t+tau_R) include UP TO (t-delayMaxInTime)
% past values [delayMaxInTime is in terms of tau_R).
% All sequences U and Y have to be "started" from at least
% delayMaxInTime samples for previous data to exist when called.
for v = 1:nVars
    d = delayCoeffs(v);
    predictorNamesBogey = {};
    for shifts = 1:d
        % Selects shifted versions of tData time series for the predictor.
        % Since 1 <= shifts <= d, all tData adjusted time series start from
        % ONE tau_R before 1+delayMaxInTime (which is the first output used
        % for validation). Therefore, the model is of y(t) =
        % f({y(t-k*tau_R)},{u(t-k*tau_R)} with k >= 1.
        PredictorData = horzcat(PredictorData,tData(1+delayMaxInTime-shifts*tau_R...
                            :numSamples-shifts*tau_R,v));
        predictorNames{v,shifts} = [NameVars{v} '_' num2str(shifts)]; 
    end
end

end

