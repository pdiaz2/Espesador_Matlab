function [ arxRFSet] = build_arx_rf_predSet( YPastSequence, UPastSequence, Y,...
                                                delayMaxInTime,na,...
                                                predictorNames)
%BUILD_ARX_RF_PREDSET Builds "ARX" prediction set from past Y and U Values
%   Detailed explanation goes here
[~,n] = size(Y);
for y = 1:n
    % Generate correct indices for picking out Y
    [startIndexY,endIndexY] = pick_correct_Y(y,na);
    arxRFSet(y).InputTimeSeries = [YPastSequence(:,1+startIndexY:endIndexY) UPastSequence];
    arxRFSet(y).OutputTimeSeries = Y(1+delayMaxInTime:end,y);
    arxRFSet(y).PredictorNames = predictorNames{y};
    arxRFSet(y).startIndexY = startIndexY;
    arxRFSet(y).endIndexY = endIndexY;
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
