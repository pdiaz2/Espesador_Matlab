load('RF_Model_2404_saw.mat');
experimentName = 'RF_2404_saw'; 
[~,numOutputs] = size(ML_Model);
% In the feature this may vary for each Y
for y = 1:numOutputs
    numTrees(y) = ML_Model(y).Model.NumTrained;
    p(y) = numel(ML_Model(y).Model.PredictorNames);
end
%% Save Compact Models

% for y = 1:numOutputs
%     RF_Compact = compact(ML_Model(y).Model);
%     for i = 1:RF_Compact.NumTrained
%         stringFile = [experimentName '/cRT_' num2str(y) '_' num2str(i)];
%         saveCompactModel(RF_Compact.Trained{i},stringFile);
%     end
% end
%% Compute prediction
% No handling of same sizes of X and predictor for the time being.
X = [31,30,40,39,35,45,42,41,37,37,36];
for y = 1:numOutputs
    numTreesPerOutput = numTrees(y);
    experimentNamePerOutput = [experimentName '/cRT_' num2str(y)];
    prediction(y,1) = predictRegEnsemble(X,numTreesPerOutput,experimentNamePerOutput);
end
% Checks types of signals
types = coder.getArgTypes('predictRegEnsemble_Test','predictRegEnsemble');
%% Create C Mex file
p1 = p(1);
x = coder.typeof(0,[Inf, p],[1,0]); % Specifys Infinite observations, p fixed predictors.
number = coder.typeof(0);
strs = coder.typeof('c',[1,Inf],[0,1]);
% [1,0] is to show that first dimension can vary, second can't (make
% variable in the future).
% funcName = ['predictRegEnsemble_' num2str(1) '.m'];
% 
codegen predictRegEnsemble.m -config:mex -args {x,number,strs};