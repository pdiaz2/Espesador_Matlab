clear;
clc;
close all
%% Parameters
Dt = 0.5; % 5 seconds sampling time
simTime = 10;
% stepsOrSpecial = 'steps';
matFileName = ['testData_1304.mat'];
showGraphs = false;
% global RF
load('RF_Model_2404_saw.mat');
% RF = ML_Model(1).Model;
RF_Full = ML_Model(1).Model;
RF.NumTrees = RF_Full.NumTrees;
for t = 1:RF.NumTrees
   RF.Tree(t).Children = RF_Full.Trees{t}.Children;
   RF.Tree(t).CutPoints = RF_Full.Trees{t}.CutPoint;
end
RF.a = 100;
% RF.a = 100;
% RF.b = 50;
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];

sim('importTreeBagger_3004.slx');

