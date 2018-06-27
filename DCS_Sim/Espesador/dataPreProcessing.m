close all;
clear all;
clc;
%%
nameDataset = 'ThreeMonths';
typeOfData = 'Real';
dateTest = '2706';
matFileName = [nameDataset '_' typeOfData '_' dateTest '_Trials_BF.mat'];
figurePath = ['figures\' typeOfData '\'];
imprint = false;
plotFigures = true;
granularity = 'b';
%%
load(matFileName);
numCV = size(SimResults.CV,2);
numMV = size(SimResults.MV,2);
numDV = size(SimResults.DV,2);

%%
for cv = 1:numCV
    SimResults.CV(cv).FilteredTimeSeries = filter(lpFilt,SimResults.CV(cv).TimeSeries);
end
for mv = 1:numMV
    SimResults.MV(mv).FilteredTimeSeries = filter(lpFilt,SimResults.MV(mv).TimeSeries);
end
for dv = 1:numDV
    SimResults.DV(dv).FilteredTimeSeries = filter(lpFilt,SimResults.DV(dv).TimeSeries);
end