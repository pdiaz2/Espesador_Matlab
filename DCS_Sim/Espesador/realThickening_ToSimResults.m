clear all
clc
%%
load('Septiembre_SimResults_1304_rawData')

%%
month = 'Septiembre';
% outputMatFileName = [month '_SimResults_1304_rawData'];
outputMatFileName = ['Septiembre_Real_2206_rawData'];
matFileName = ['ThickenerOperation_' month '_rawData.mat'];
saveToMatFile = true;
startThickener = 0;
load(matFileName);
numVars = length(BigData.varsIndex);
[numSamples garbage] = size(BigData.RawData');
Dt = 1;
simTime = BigData.manual.timeLimit;
SimResults.CV(1).TimeSeries = BigData.PreProcessed(1,1:simTime)';
SimResults.CV(2).TimeSeries = BigData.PreProcessed(2,1:simTime)';
SimResults.CV(3).TimeSeries = BigData.PreProcessed(3,1:simTime)';


% MV

SimResults.MV(1).TimeSeries = BigData.PreProcessed(4,1:simTime)';
SimResults.MV(2).TimeSeries = FlocculantNew(1,1:simTime)';

% DV

SimResults.DV(1).TimeSeries = BigData.PreProcessed(7,1:simTime)';
%%
run prepDataML.m
options.stepTestType = 'real_fkn_data';
if saveToMatFile
    save(outputMatFileName,'SimResults','options','startYield');
end
