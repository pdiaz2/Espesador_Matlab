function [ filteredTimeSeries ] = dp_lowpass_filter( timeSeries, lpFilt )
%DP_LOWPASS_FILTER Summary of this function goes here
%   Detailed explanation goes here
filteredTimeSeries = filter(lpFilt,timeSeries);
% Energy compensation
originalEnergy = norm(timeSeries);
filteredEnergy = norm(filteredTimeSeries);
filteredTimeSeries = filteredTimeSeries*originalEnergy/filteredEnergy;

end

