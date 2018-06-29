function [ SimResultsStruct ] = dp_compensate_phase( SimResultsStruct )
%DP_COMPENSATE_PHASE Summary of this function goes here
%   Detailed explanation goes here
for cv = 1:length(SimResultsStruct.CV) % This -5 for real data only
    SimResultsStruct.CV(cv).GroupedTimeSeries = ...
                            dp_compensate_phase_vector(...
                            SimResultsStruct.CV(cv).GroupedTimeSeries,...
                            SimResultsStruct.compensatePhase,'cv');
end
% MV Preparation
for mv = 1:length(SimResultsStruct.MV)
   SimResultsStruct.MV(mv).GroupedTimeSeries = ...
                            dp_compensate_phase_vector(...
                            SimResultsStruct.MV(mv).GroupedTimeSeries,...
                            SimResultsStruct.compensatePhase,'mv');
end

% DV Preparation
for dv = 1:length(SimResultsStruct.DV)
   SimResultsStruct.DV(dv).GroupedTimeSeries = ...
                            dp_compensate_phase_vector(...
                            SimResultsStruct.DV(dv).GroupedTimeSeries,...
                            SimResultsStruct.compensatePhase,'dv');
end

end

function [ shiftedTimeSeries ] = dp_compensate_phase_vector(timeSeries,....
                                                            compensatePhase,...
                                                            typeOfVar)
%DP_COMPENSATE_PHASE_VECTOR Summary of this function goes here
%   Detailed explanation goes here
switch typeOfVar
    case 'cv'
        shiftedTimeSeries = timeSeries(1+compensatePhase:end);
    otherwise
        shiftedTimeSeries = timeSeries(1:end-compensatePhase);
end

end
