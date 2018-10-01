function [ SimResults ] = ml_pick_variables( selectedCV,selectedMV,selectedDV,...
                                              BigData)
%ML_PICK_VARIABLES Summary of this function goes here
%   Detailed explanation goes here
SimResults.DV = [];
for cv = 1:length(selectedCV)
    SimResults.CV(cv).Name = BigData.CV(cv).Name;
    SimResults.CV(cv).GroupedTimeSeries = BigData.CV(cv).GroupedTimeSeries; 
end

for mv = 1:length(selectedMV)
    SimResults.MV(mv).Name = BigData.MV(mv).Name;
    SimResults.MV(mv).GroupedTimeSeries = BigData.MV(mv).GroupedTimeSeries; 
end

for dv = 1:length(selectedDV)
    SimResults.DV(dv).Name = BigData.DV(dv).Name;
    SimResults.DV(dv).GroupedTimeSeries = BigData.DV(dv).GroupedTimeSeries; 
end

SimResults.groupBy = BigData.groupBy;
end

