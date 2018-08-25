function [ dErrorSmooth,errorHistorySmooth ] = myNoiseRejection( errorHistory,smoothFunctionSelect,kNeighbours )
%NOISESMOOTHER Summary of this function goes here
%   Detailed explanation goes here
numCV = size(errorHistory,1);
errorHistorySmooth = zeros(numCV,length(errorHistory));
switch smoothFunctionSelect
    case 1 %LowPassFilter
        for i = 1:length(errorHistory(1,:))
            if i > kNeighbours && length(errorHistory(1,:))-i >= kNeighbours
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-kNeighbours:i+kNeighbours))/(2*kNeighbours+1);
            elseif i <= kNeighbours
                spread = i-1;
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-spread:i+spread))/(2*spread+1);
            else
                spread = length(errorHistory(1,:))-i;
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-spread:i+spread))/(2*spread+1);
            end
        end
end
% Compute soft delta
dErrorSmooth = errorHistorySmooth(:,length(errorHistory)-kNeighbours) - ...
    errorHistorySmooth(:,length(errorHistory)-2*kNeighbours);
end

