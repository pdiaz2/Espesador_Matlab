%% Check version of RF
numOutputs = 3;
numTrees = [100 100 100];
% No handling of same sizes of X and predictor for the time being.
X = [31,30,40,39,35,45,42,41,37,37];
X = repmat(X,2,1);
[nObs,p] = size(X);
tic;
for y = 1:numOutputs
    numTreesPerOutput = numTrees(y);
    prediction = predictRF_Y3(X,numTreesPerOutput,p);
end
toc;
%% Create C Mex file

X = [31,30,40,39,35,45,42,41,37,37];
p = numel(X);
numTrees = 100;

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
num_predictors = coder.typeof(0);
codegen predictRF_Y3.m -config:mex -args {x,num_trees,num_predictors}
%% Prediction - Speed Comparison
X = [31,30,40,39,35,45,42,41,37,37];
X = repmat(X,100,1);
[nObs,p] = size(X);
numTrees = 100;
tic;
prediction = predictRF_Y3_mex(X,numTrees,p);
toc;
pause(1)
tic;
for obs = 1:nObs
    x = X(obs,:);
    prediction(obs) = predictRF_Y2_old(x,numTrees,p);
end
toc;
tic;
for obs = 1:nObs
    x = X(obs,:);
    prediction(obs) = predictRF_Y2_old_mex(x,numTrees,p);
end
toc;