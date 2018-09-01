function [ dErrorSmooth,errorHistorySmooth ] = myNoiseRejection( errorHistory,smoothFunctionSelect,kNeighbours )
%NOISESMOOTHER Summary of this function goes here
%   Detailed explanation goes here
numCV = size(errorHistory,1);
errorHistorySmooth = zeros(numCV,length(errorHistory));
switch smoothFunctionSelect
    case 1 %LowPassFilter
        for i = 1:length(errorHistory(1,:))
            % If sample is in the middle (more than kNeighbours from start
            % and less than kNeighbours till end)
            if i > kNeighbours && length(errorHistory(1,:))-i >= kNeighbours
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-kNeighbours:i+kNeighbours),2)/(2*kNeighbours+1);
            % Else do it incrementally on the edges
            elseif i <= kNeighbours
                spread = i-1;
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-spread:i+spread),2)/(2*spread+1);
            else
                spread = length(errorHistory(1,:))-i;
                errorHistorySmooth(:,i) = sum(errorHistory(:,i-spread:i+spread),2)/(2*spread+1);
            end
        end
end
% Compute soft delta
% dErrorSmooth = errorHistorySmooth(:,size(errorHistory,2)-kNeighbours) - ...
%                 errorHistorySmooth(:,size(errorHistory,2)-2*kNeighbours);
%% Der Error
% Change in smoothed error (most recent is leftmost sample)
dErrorSmooth = errorHistorySmooth(:,1)-errorHistorySmooth(:,2);
end

