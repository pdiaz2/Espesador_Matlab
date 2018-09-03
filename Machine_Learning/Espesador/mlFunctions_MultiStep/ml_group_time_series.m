function [ groupedTimeSeries ] = ml_group_time_series( timeSeries,groupBy )
%DP_GROUP_TIME_SERIES Summary of this function goes here
%   Detailed explanation goes here
numSamples = length(timeSeries);
B = reshape(timeSeries,[groupBy,numSamples/groupBy]);
groupedTimeSeries = mean(B);
end
