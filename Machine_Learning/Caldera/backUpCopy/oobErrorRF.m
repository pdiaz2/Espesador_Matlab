function [oobErr] = oobErrorRF( paramsToOptimize,U,Y,mlParameters)
%OOBERRORRF Summary of this function goes here
%   Detailed explanation goes here
randomForest = TreeBagger(mlParameters{1},U,Y,'Method','regression',...
        'InBagFraction',mlParameters{2},'OOBPrediction',mlParameters{3},'MinLeafSize',paramsToOptimize.minLS,...
        'OOBPredictorImportance',mlParameters{5},'PredictorSelection',mlParameters{6});
% oobQErr = oobQuantileError(randomForest);
oobErr = oobError(randomForest);
oobErr = oobErr(end);
end

