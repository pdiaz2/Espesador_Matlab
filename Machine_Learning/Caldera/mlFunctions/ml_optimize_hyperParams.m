function bestHyp = ml_optimize_hyperParams(trainingSubset,...
                                        numOutputs,mlParameters,...
                                        hyperparametersRF,optimizeBool)
    if (optimizeBool)
    % Optimize HyperParameter LeafSize
        disp('Optimizing')
        pause(1);
        for y = 1:numOutputs
            BayOptResults = bayesopt(@(params)oobErrorRF(params,trainingSubset(y).InputData,trainingSubset(y).OutputData,...
                mlParameters),hyperparametersRF,'AcquisitionFunctionName','expected-improvement-plus','Verbose',0,...
                'PlotFcn',[],'MaxObjectiveEvaluations',bayOptIterations);
            bestHyp(y) = BayOptResults.XAtMinObjective{1,1};
    %                 close all;
        end
        clear BayOptResults
    else
        for y = 1:numOutputs
            bestHyp(y) = mlParameters{4};
        end
    end
end