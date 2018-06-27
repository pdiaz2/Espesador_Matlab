groupBy = 60; % Samples in seconds to group by
%%
% load(matFileName);
SimResults.groupBy = groupBy;
numSamples = length(SimResults.CV(1).TimeSeries);
% CV Preparation
for cv = 1:length(SimResults.CV) % This -5 for real data only
   B = reshape(SimResults.CV(cv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResults.CV(cv).GroupedTimeSeries = B;
end

% MV Preparation
for mv = 1:length(SimResults.MV)
   B = reshape(SimResults.MV(mv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResults.MV(mv).GroupedTimeSeries = B;
end

% DV Preparation
for dv = 1:length(SimResults.DV)
   B = reshape(SimResults.DV(dv).TimeSeries,[groupBy,numSamples/groupBy]);
   B = mean(B);
   SimResults.DV(dv).GroupedTimeSeries = B;
end
%% Save
% save(matFileName,'SimResults','options','startYield');
