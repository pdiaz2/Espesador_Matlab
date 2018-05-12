function [ prediction ] = predictRegEnsemblev2( X )
%#codegen
%PREDICTREGENSEMBLEV2 Summary of this function goes here
%   Detailed explanation goes here
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Works
% Mdl_2 = loadCompactModel('RF\cRT_1_1');
% prediction = predict(Mdl_2,X);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% % bogey = loadCompactModel('RF\cRT_1_1');
% rt = struct('PredValue',zeros(1,0));
% RF = repmat(rt, [1,numTrees]);
prediction = 0;
johnny = 0;
CRTStrArray = {'RF\cRT_1_1','RF\cRT_1_2','RF\cRT_1_3'};
for t = 1:3
   RTree = loadCompactModel(CRTStrArray{t});
   johnny = predict(RTree,X);
   prediction = prediction + 1/2*johnny(1);
end

end

