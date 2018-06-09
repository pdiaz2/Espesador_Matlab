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
% [numCV garbage1 FFSteps] = size(openLoopMeasurements(1,2).measurements);
for opPoint = 1:opPoints
    for stepType = 1:2
        for metric = 1:totalMetrics
            resultTables(stepType).means(:,metric,opPoint) = mean(openLoopMeasurements(opPoint,stepType).measurements(:,:,metric),2);
            resultTables(stepType).std(:,metric,opPoint) = std(openLoopMeasurements(opPoint,stepType).measurements(:,:,metric),0,2);
        end
    end
end
%%

