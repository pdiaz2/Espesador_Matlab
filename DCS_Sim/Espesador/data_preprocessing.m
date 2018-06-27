function [ SimResultsPreProc] = data_preprocessing(lpFilt,SimResultsRawStruct,...
                                                groupBy)
%DATA_PREPROCESSING Summary of this function goes here
%   Detailed explanation goes here
numCV = size(SimResultsRawStruct.CV,2);
numMV = size(SimResultsRawStruct.MV,2);
numDV = size(SimResultsRawStruct.DV,2);
%% LP-Filt
for cv = 1:numCV
    SimResultsPreProc.CV(cv).FilteredTimeSeries = filter(lpFilt,SimResultsRawStruct.CV(cv).TimeSeries);
    originalEnergy = norm(SimResultsRawStruct.CV(cv).TimeSeries);
    filteredEnergy = norm(SimResultsPreProc.CV(cv).FilteredTimeSeries);
    SimResultsPreProc.CV(cv).FilteredTimeSeries = SimResultsPreProc.CV(cv).FilteredTimeSeries*...
                                                    originalEnergy/filteredEnergy;
end
for mv = 1:numMV
    SimResultsPreProc.MV(mv).FilteredTimeSeries = filter(lpFilt,SimResultsRawStruct.MV(mv).TimeSeries);
    originalEnergy = norm(SimResultsRawStruct.MV(mv).TimeSeries);
    filteredEnergy = norm(SimResultsPreProc.MV(mv).FilteredTimeSeries);
    SimResultsPreProc.MV(mv).FilteredTimeSeries = SimResultsPreProc.MV(mv).FilteredTimeSeries*...
                                                    originalEnergy/filteredEnergy;
end
for dv = 1:numDV
    SimResultsPreProc.DV(dv).FilteredTimeSeries = filter(lpFilt,SimResultsRawStruct.DV(dv).TimeSeries);
    originalEnergy = norm(SimResultsRawStruct.DV(dv).TimeSeries);
    filteredEnergy = norm(SimResultsPreProc.DV(dv).FilteredTimeSeries);
    SimResultsPreProc.DV(dv).FilteredTimeSeries = SimResultsPreProc.DV(dv).FilteredTimeSeries*...
                                                    originalEnergy/filteredEnergy;
end
%% Reducing Time-Sampling (Lp Filt and Downsampling)
SimResultsPreProc.groupBy = groupBy;
numSamples = length(SimResultsRawStruct.CV(1).TimeSeries);
% CV Preparation
for cv = 1:length(SimResultsRawStruct.CV) % This -5 for real data only
   B = reshape(SimResultsRawStruct.CV(cv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResultsPreProc.CV(cv).GroupedTimeSeries = B;
   B = reshape(SimResultsPreProc.CV(cv).FilteredTimeSeries,[groupBy,numSamples/groupBy]);
   SimResultsPreProc.CV(cv).LearningData = B;
end

% MV Preparation
for mv = 1:length(SimResultsRawStruct.MV)
   B = reshape(SimResultsRawStruct.MV(mv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResultsPreProc.MV(mv).GroupedTimeSeries = B;
   B = reshape(SimResultsPreProc.MV(mv).FilteredTimeSeries,[groupBy,numSamples/groupBy]);
   SimResultsPreProc.MV(mv).LearningData = B;
end

% DV Preparation
for dv = 1:length(SimResultsRawStruct.DV)
   B = reshape(SimResultsRawStruct.DV(dv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResultsPreProc.DV(dv).GroupedTimeSeries = B;
   B = reshape(SimResultsPreProc.DV(dv).FilteredTimeSeries,[groupBy,numSamples/groupBy]);
   SimResultsPreProc.DV(dv).LearningData = B;
end
%% Delay Estimation
estDelayWindow = 15*3600/60:30*3600/60;
SimResultsPreProc.delayMV_CV = -1*ones(3,2);
for cv = 1:3
    for mv = 1:2
       SimResultsPreProc.delayMV_CV(cv,mv) =  finddelay(SimResultsPreProc.MV(mv).LearningData(estDelayWindow),...
                                    SimResultsPreProc.CV(cv).LearningData(estDelayWindow));
    end
end
end

