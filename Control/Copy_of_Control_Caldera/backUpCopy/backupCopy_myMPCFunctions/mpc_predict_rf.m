function [ yHatArray] = mpc_predict_rf(predictorArray,nTrees,nPredictors,na,nb,nc)
%MPC_PREDICT_RF Generate one-step ahead Random Forest prediction
% Generates Random Forest based prediction using MEX files of RF models
% Inputs:
%   - predictorArray: n*max(nPredictors) array of predictor values
%   - nTrees: n*1 vector with number of trees per output
%   - nPredictors: n*1 vector with number of predictors per CV
%   - na: n*1 vector containing order of delays for each CV
%   - nb: n*m containing order of MV delay for each CV
%   - nc: n*d containing order of DV delay for each CV
[n,~] = size(na);
[n,m] = size(nb);
[n,d] = size(nc);
for cv = 1:n
    % Predict
    p = na(cv)+sum(nb(cv,:))+m+nc(cv,:)+d;
    % p = na(cv)+sum(nb(cv,:)+nb(cv,:);
    if nTrees(cv) ~= 100
       error('Number of trees is %d in hardcoded function. Different from: %d',100,nTrees(cv)); 
    end
    if nPredictors(cv) ~= p
       error('Number of predictors is %d in hardcoded function. Different from: %d',p,nPredictors(cv)); 
    end
    X = predictorArray(cv,1:p);
    switch cv
        case 1
            yHat(cv) = predictRF_Y1_mex(X,100,10);
        case 2
            yHat(cv) = predictRF_Y2_mex(X,100,10);
        case 3
            yHat(cv) = predictRF_Y3_mex(X,100,10);
    end
end
yHatArray = yHat(:);
end
