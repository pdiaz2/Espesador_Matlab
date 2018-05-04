function [ prediction ] = predictRegEnsemble_Test()
%PREDICTREGENSEMBLE_TEST Summary of this function goes here
%   Detailed explanation goes here
X = [31,30,40,39,35,45,42,41,37,37,36];
numTrees = [100];
experimentName = 'RF_2404_saw/cRT_1';

prediction = predictRegEnsemble(X,numTrees,experimentName);
end

