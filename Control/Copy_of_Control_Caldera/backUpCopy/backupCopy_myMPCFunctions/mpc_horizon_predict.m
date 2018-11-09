function [ yHat ] = mpc_horizon_predict(x, N_y, yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc)
%MPC_CONSTRAINT_GENERATOR Generates horizon cost of MPC problem
% This function assigns the non-linear constraints (i.e the model
% prediction of Random Forests)
% Inputs:
%   - x: nPopulation*(N_u*m) decission variable matrix
%   - yPastValues: n*max(na)*tau_R matrix containing past CV values
%   - uPastValues: m*max(max(nb))*tau_R matrix containing past MV values
%   - dPastValues: d*max(nc)*tau_R matrix containing past DV values
%   - nTrees: n*1 vector with number of trees per output
%   - nPredictors: n*1 vector with number of predictors per CV
%   - na: n*1 vector containing order of delays for each CV
%   - nb: n*m matrix containing order of MV delay for each CV
%   - nc: n*d matrix containing order of DV delay for each CV
% This function:
%   - Predicts yHat using specified RandomForests for N_y horizon
% [ yHat ] = mpc_horizon_predict(x, N_y, yPastValues, uPastValues, dPastValues,...
%                                       nTrees, nPredictors, na, nb, nc)

% coder.extrinsic(CALL_ALL_MEX_FILES) (MAYBE)
NUM_PSEUDO_COSTS = 0; % Pseudo-costs are F.O. costs that will be handled as constraints;
%% Size Handling
[n,maxDelayCV] = size(yPastValues);
[m,maxDelayMV] = size(uPastValues);
[d,maxDelayDV] = size(dPastValues);
[nPopulation,N_u] = size(x(:,NUM_PSEUDO_COSTS+1:end));
N_u = N_u/m;
%% Prediction
% Local copies of past values for generation
auxYPastValues = yPastValues;
auxUPastValues = uPastValues;
auxDPastValues = dPastValues;
yHat = zeros(n,N_y);
computedMV = zeros(m,1);

for j = 1:N_y
    
    % Generate predictor array for all CV and j ahead prediction
    predictorArray = generate_predictor_array(x,j,auxYPastValues,auxUPastValues,auxDPastValues,...
                                                na,nb,nc,N_u,NUM_PSEUDO_COSTS);
    % Generate Random Forest prediction
    yHat(:,j) = mpc_predict_rf(predictorArray,nTrees,nPredictors,na,nb,nc);
    
    % Refresh auxPast vectors (shift operation)
    auxYPastValues(:,2:end) = auxYPastValues(:,1:end-1);
    auxYPastValues(:,1) = yHat(:,j);
    
    auxDPastValues(:,2:end) = auxDPastValues(:,1:end-1);
    auxDPastValues(:,1) = auxDPastValues(:,1); % If better disturbance model, this can be substituted for prediction
    
    for k = 1:m
        computedMV(k) = compute_MV_value(x,auxUPastValues,k,m,j,N_u,NUM_PSEUDO_COSTS);
    end
    auxUPastValues(:,2:end) = auxUPastValues(:,1:end-1);
    auxUPastValues(:,1) = computedMV;
end

end

