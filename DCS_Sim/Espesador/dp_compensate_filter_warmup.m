function [ SimResultsStruct] = dp_compensate_filter_warmup( SimResultsStruct )
%DP_COMPENSATE_FILTER_WARMUP Summary of this function goes here
%   Detailed explanation goes here
for cv = 1:length(SimResultsStruct.CV) % This -5 for real data only
    SimResultsStruct.CV(cv).GroupedTimeSeries = ...
                            dp_compensate_filter_warmup_vector(...
                            SimResultsStruct.CV(cv).GroupedTimeSeries,...
                            SimResultsStruct.filterWarmUp);
end
% MV Preparation
for mv = 1:length(SimResultsStruct.MV)
   SimResultsStruct.MV(mv).GroupedTimeSeries = ...
                            dp_compensate_filter_warmup_vector(...
                            SimResultsStruct.MV(mv).GroupedTimeSeries,...
                            SimResultsStruct.filterWarmUp);
end

% DV Preparation
for dv = 1:length(SimResultsStruct.DV)
   SimResultsStruct.DV(dv).GroupedTimeSeries = ...
                            dp_compensate_filter_warmup_vector(...
                            SimResultsStruct.DV(dv).GroupedTimeSeries,...
                            SimResultsStruct.filterWarmUp);
end

end


function [ compensateTimeSeries] = dp_compensate_filter_warmup_vector( timeSeries,...
                                                                      filterWarmUp)
%DP_COMPENSATE_FILTER_WARMUP Summary of this function goes here
%   Detailed explanation goes here
compensateTimeSeries = timeSeries(1+filterWarmUp:end);

end
