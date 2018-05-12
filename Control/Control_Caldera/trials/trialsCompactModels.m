%% Save Compact Models
numOutputs = 3;
% In the feature this may vary for each Y
for y = 1:numOutputs
    strFile = ['RF_Y' num2str(y) '.mat'];
    load(strFile);
    numTrees(y) = RF.NumTrained;
    p(y) = numel(RF.PredictorNames);
    PredictorNames{y,:} = RF.PredictorNames;
    RF_Compact = compact(RF);
    for i = 1:RF_Compact.NumTrained
        stringFile = ['RF\cRT_' num2str(y) '_' num2str(i)];
        saveCompactModel(RF_Compact.Trained{i},stringFile);
    end
end
%% Compute prediction
numOutputs = 3;
numTrees = [100 100 100];
% No handling of same sizes of X and predictor for the time being.
X = [31,30,40,39,35,45,42,41,37,37];
for y = 1:numOutputs
    numTreesPerOutput = numTrees(y);
    experimentNamePerOutput = ['RF/cRT_' num2str(y)];
%     prediction(y,1) = predictRegEnsemble(X,numTreesPerOutput,experimentNamePerOutput);
    prediction(y,1) = predictRegEnsemblev2(X,3);
end
% Checks types of signals
% types = coder.getArgTypes('predictRegEnsemble_Test','predictRegEnsemble');
%% Create C Mex file
p = 10;
% x = coder.typeof(0,[Inf, p],[1,0]); % Specifies Infinite observations, p fixed predictors.
% number = coder.typeof(0);
% strs = coder.typeof('c',[1,Inf],[0,1]);
% % [1,0] is to show that first dimension can vary, second can't (make
% % variable in the future).
% % funcName = ['predictRegEnsemble_' num2str(1) '.m'];
% % 
% codegen predictRegEnsemble.m -config:mex -args {x,number,strs};
x = coder.typeof(0,[Inf, p], [1,0]);
num_trees = coder.typeof(0);
codegen predictRegEnsemblev2.m -config:mex -args {x,num_trees}
%% Try C-Mex function
numOutputs = 3;
numTrees = [100 100 100];
% No handling of same sizes of X and predictor for the time being.
X = [31,30,40,39,35,45,42,41,37,37];
for y = 1:numOutputs
    numTreesPerOutput = numTrees(y);
    experimentNamePerOutput = ['RF/cRT_' num2str(y)];
%     prediction(y,1) = predictRegEnsemble_mex(X,numTreesPerOutput,experimentNamePerOutput);
    prediction(y,1) = predictRegEnsemblev2_mex(X,3);
end