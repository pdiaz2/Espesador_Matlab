function [ arxRFSet] = build_arx_rf_predSet( UPastSequence, YPastSequence, Y,...
                                            predictorNames,...
                                            delayMaxInTime, na,...
                                            numOLExps, numSamplesPerExp)
%BUILD_ARX_RF_PREDSET Builds "ARX" prediction set from past Y and U Values
%   Detailed explanation goes here
    [~,n] = size(Y);
    OutputTimeSeries = [];
    for t = 1:numOLExps
        YExp = ml_select_experiment(Y,t,numSamplesPerExp);
        OutputTimeSeries = [OutputTimeSeries;YExp(1+delayMaxInTime:end,:)];
    end
    for cv = 1:n
        % Generate correct indices for picking out Y
        [startIndexY,endIndexY] = pick_correct_Y(cv,na);
        % Select regressors for cv(t) (constructed from t-k*tau_R, k>=1 at
        % least)
        arxRFSet(cv).InputTimeSeries = [YPastSequence(:,1+startIndexY:endIndexY) UPastSequence];
        % Select cv(t) for validation (tau_R ahead prediction)
        arxRFSet(cv).OutputTimeSeries = OutputTimeSeries(:,cv);
        arxRFSet(cv).PredictorNames = predictorNames{cv};
        arxRFSet(cv).startIndexY = startIndexY;
        arxRFSet(cv).endIndexY = endIndexY;
    end

end

function [startIndexY, endIndexY] = pick_correct_Y(y,na)
    startIndexY = 0;
    endIndexY = 0;
    for cv = 0:(y-1)
        if (cv == 0)
            %
        else
            startIndexY = startIndexY+na(cv);
        end
        endIndexY = endIndexY+na(cv+1);
    end
end
