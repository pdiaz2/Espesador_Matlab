function [ prediction ] = predictRegEnsemble( X,numTrees,experimentName)
%#codegen
%PREDICTREGENSEMBLE Summary of this function goes here
%   Detailed explanation goes here
coder.extrinsic('num2str');
% According to Matlab docs, predict should be available for codegen, but
% doesn't work.
coder.extrinsic('predict');
rt = struct('RTree',zeros(1,0));
RF = repmat(rt, [1,numTrees]);
% for y = 1:numOutputs
for t = 1:numTrees
    strFile = [experimentName '_' num2str(t)];
    RF(t).RTree = loadCompactModel(strFile);
end
% end
prediction = 0;
johnny = 0;
for t = 1:numTrees
    johnny = predict(RF(t).RTree,X);
    prediction = prediction+1/numTrees*johnny;
%     prediction = prediction+5;
end
end

