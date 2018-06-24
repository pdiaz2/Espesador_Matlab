clear all
clc
%%
load('Septiembre_SimResults_1304_rawData')

%%
% outputMatFileName = [month '_SimResults_1304_rawData'];
outputMatFileName = ['ThreeMonths_Real_2406_rawData'];
% matFileName = ['ThickenerOperation_' month '_rawData.mat'];
saveToMatFile = true;
startThickener = 0;
months = {'Agosto','Septiembre','Octubre'};
SimResults.CV(1).TimeSeries = [];
SimResults.CV(2).TimeSeries = [];
SimResults.CV(3).TimeSeries = [];
SimResults.MV(1).TimeSeries = [];
SimResults.MV(2).TimeSeries = [];
SimResults.DV(1).TimeSeries = [];
SimResults.DV(2).TimeSeries = [];
for monthIndex = 1:length(months)
    month = months{monthIndex};
    matFileName = ['ThickenerOperation_' month '_rawData.mat'];
    load(matFileName);

    numVars = length(BigData.varsIndex);
    [numSamples garbage] = size(BigData.RawData');
    Dt = 1;
    simTime = BigData.manual.timeLimit;
    SimResults.CV(1).TimeSeries = [SimResults.CV(1).TimeSeries; BigData.PreProcessed(1,1:simTime)'];
    SimResults.CV(2).TimeSeries = [SimResults.CV(2).TimeSeries; BigData.PreProcessed(2,1:simTime)'];
    SimResults.CV(3).TimeSeries = [SimResults.CV(3).TimeSeries; BigData.PreProcessed(3,1:simTime)'];


    % MV

    SimResults.MV(1).TimeSeries = [SimResults.MV(1).TimeSeries; BigData.PreProcessed(4,1:simTime)'];
    SimResults.MV(2).TimeSeries = [SimResults.MV(2).TimeSeries; FlocculantNew(1,1:simTime)'];

    % DV

    SimResults.DV(1).TimeSeries = [SimResults.DV(1).TimeSeries; BigData.PreProcessed(7,1:simTime)'];
    SimResults.DV(2).TimeSeries = [SimResults.DV(2).TimeSeries; wt_f(1:simTime)'/100];
end
%%
run prepDataML.m
options.stepTestType = 'real_fkn_data';
if saveToMatFile
    save(outputMatFileName,'SimResults','options','startYield');
end
