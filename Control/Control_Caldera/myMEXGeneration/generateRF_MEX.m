%% Check version of RF
numOutputs = 3;
numTrees = [100 100 100];
numPredictors = [8 12 12];
for y = 1:numOutputs
    PredictorVector(y).X = 30+rand(1,numPredictors(y));
end
cv = 3;
setenv('MW_MINGW64_LOC','C:\TDM-GCC-64')
%%

% No handling of same sizes of X and predictor for the time being.

X = repmat(PredictorVector(cv).X,2,1);
[nObs,p] = size(X);

numTreesPerOutput = numTrees(cv);
switch cv
    case 1
        prediction = predictRF_Y1(X,numTreesPerOutput,p);
    case 2
        prediction = predictRF_Y2(X,numTreesPerOutput,p);
    case 3
        prediction = predictRF_Y3(X,numTreesPerOutput,p);
end

%% Create C Mex file


% % [1,0] is to show that first dimension can vary, second can't (make
% % variable in the future).
x = coder.typeof(0,[Inf, p], [1,0]);% Specifies Infinite observations, p fixed predictors.
num_trees = coder.typeof(0);
num_predictors = coder.typeof(0);
switch cv
    case 1
        codegen predictRF_Y1.m -config:mex -args {x,num_trees,num_predictors}
    case 2
        codegen predictRF_Y2.m -config:mex -args {x,num_trees,num_predictors}
    case 3
        codegen predictRF_Y3.m -config:mex -args {x,num_trees,num_predictors}
end

%% Prediction - Speed Comparison

% X = repmat(X,50,1);
[nObs,p] = size(X);
tic;
prediction = predictRF_Y1_mex(X,numTreesPerOutput,p);
toc;
pause(1)
% Below is unfixed
tic;
for obs = 1:nObs
    x = 30+rand(1,10);
    prediction(obs) = predictRF_Y2_old(x,100,p);
end
toc;
tic;
for obs = 1:nObs
    x = 30+rand(1,10);
    prediction(obs) = predictRF_Y2_old_mex(x,numTrees,p);
end
toc;