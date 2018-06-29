function [SimResultsStruct] = dp_group_time_series(SimResultsStruct)

numSamples = length(SimResultsStruct.CV(1).TimeSeries);
% CV Preparation
for cv = 1:length(SimResultsStruct.CV) % This -5 for real data only
    SimResultsStruct.CV(cv).GroupedTimeSeries = ...
                            dp_group_time_series_vector(...
                            SimResultsStruct.CV(cv).TimeSeries,...
                            SimResultsStruct.groupBy,...
                            numSamples);
end
% MV Preparation
for mv = 1:length(SimResultsStruct.MV)
   SimResultsStruct.MV(mv).GroupedTimeSeries = ...
                            dp_group_time_series_vector(...
                            SimResultsStruct.MV(mv).TimeSeries,...
                            SimResultsStruct.groupBy,...
                            numSamples);
end

% DV Preparation
for dv = 1:length(SimResultsStruct.DV)
   SimResultsStruct.DV(dv).GroupedTimeSeries = ...
                            dp_group_time_series_vector(...
                            SimResultsStruct.DV(dv).TimeSeries,...
                            SimResultsStruct.groupBy,...
                            numSamples);
end

end
                                                           


function [ groupedTimeSeries ] = dp_group_time_series_vector( timeSeries,groupBy,numSamples )
%DP_GROUP_TIME_SERIES Summary of this function goes here
%   Detailed explanation goes here
B = reshape(timeSeries,[groupBy,numSamples/groupBy]);
groupedTimeSeries = mean(B);
end

