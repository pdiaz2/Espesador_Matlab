clear;
clc;
close all;
opPointCell = {'65','25';
                '75','22';
                '75','25';
                '75','26';
                '75','29';
                '85','25';
                '95','25';
                };
[opPoints garbage] = size(opPointCell);
for opPointIndex = 1:opPoints
    for stepTestIndex = 1:2
        if stepTestIndex == 1
            % UF tests
            typeOfTest = 'UF';
        else
            typeOfTest = 'FF';
        end
        auxString = ['stepTest' typeOfTest '_SS_' strjoin(opPointCell(opPointIndex,1)) '_' strjoin(opPointCell(opPointIndex,2)) '.mat'];
        load(auxString);
        run metricsOpenLoop.m;
        clearvars -except opPointCell opPoints opPointIndex stepTestIndex openLoopMeasurements; 
    end
end
save('resultsCompleteOpenLoop.mat','openLoopMeasurements');
%%
clear all;
opPointCell = {'65','25';
                '75','22';
                '75','25';
                '75','26';
                '75','29';
                '85','25';
                '95','25';
                };
[opPoints garbage] = size(opPointCell);
load('resultsCompleteOpenLoop.mat');
[numCV garbage1 totalMetrics] = size(openLoopMeasurements(1,1).measurements);
for opPoint = 1:opPoints
    openLoopMeasurements(opPoint,1).measurements = openLoopMeasurements(opPoint,1).measurements(:,[1 3 4],:);
end
save('resultsCompleteOpenLoop.mat','openLoopMeasurements');