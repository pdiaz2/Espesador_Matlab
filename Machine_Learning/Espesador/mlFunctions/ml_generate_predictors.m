function [ predictorDataFull,predictorNames ] = ml_generate_predictors(tData, NameVars, nVars,...
                                                tau_R, delayMaxInTime, delayCoeffs,...
                                                numSamplesPerExp, numOLExps)
%SHIFT_TIME_SERIES Summary of this function goes here
%   Detailed explanation goes here
    predictorDataFull = [];
    predictorNames = {};
    % The predictors for y(t+tau_R) include UP TO (t-delayMaxInTime)
    % past values [delayMaxInTime is in terms of tau_R).
    % All sequences U and Y have to be "started" from at least
    % delayMaxInTime samples for previous data to exist when called.
    for t = 1:numOLExps
        % Pick OLExp to undergo shifting of time series
        predictorDataExp = [];
        expData = ml_select_experiment(tData,t,numSamplesPerExp);
        % Shift and generate delay versions of time series for predictors
        [predictorDataExp, predictorNames] = ml_shift_time_series(expData, NameVars, nVars,...
                                                predictorDataExp, predictorNames,...
                                                tau_R, numSamplesPerExp,...
                                                delayMaxInTime, delayCoeffs);
        predictorDataFull = [predictorDataFull;predictorDataExp];
    end
end

