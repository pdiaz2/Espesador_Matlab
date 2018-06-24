function [predictorData, predictorNames] = ml_shift_time_series(expData, NameVars, nVars,...
                                                predictorData, predictorNames,...
                                                tau_R, numSamplesPerExp,...
                                                delayMaxInTime, delayCoeffs)
% ML_SHIFT_TIME_SERIES
    for v = 1:nVars
        d = delayCoeffs(v);
        for shifts = 1:d
            % Selects shifted versions of tData time series for the predictor.
            % Since 1 <= shifts <= d, all tData adjusted time series start from
            % ONE tau_R before 1+delayMaxInTime (which is the first output used
            % for validation). Therefore, the model is of y(t) =
            % f({y(t-k*tau_R)},{u(t-k*tau_R)} with k >= 1.
            predictorData = horzcat(predictorData,expData(1+delayMaxInTime-shifts*tau_R...
                                :numSamplesPerExp-shifts*tau_R,v));
            % Code below is executed multiple times (each function
            % callback) with the same output (redundant but harmless)
            predictorNames{v,shifts} = [NameVars{v} '_' num2str(shifts)]; 
        end
    end
end