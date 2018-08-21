function [ yHat ] = mpc_horizon_predict(x, N_y, uLims,...
                                        yPastValues, uPastValues, dPastValues,...
                                        nTrees, nPredictors, na, nb, nc,...
                                        kappaControl)
%MPC_CONSTRAINT_GENERATOR Generates horizon cost of MPC problem
% This function assigns the non-linear constraints (i.e the model
% prediction of Random Forests)
% Inputs:
%   - x: nPopulation*(N_u*m) decission variable matrix (2D)
%   - N_y: Prediction horizon
%   - uLims: m*N_u*2 matrix with limits for MV in N_u horizon (3D)
%   - yPastValues: n*max(na)*tau_R matrix containing past CV values
%   - uPastValues: m*max(max(nb))*tau_R matrix containing past MV values
%   - dPastValues: d*max(nc)*tau_R matrix containing past DV values
%   - nTrees: n*1 vector with number of trees per output
%   - nPredictors: n*1 vector with number of predictors per CV
%   - na: n*1 vector containing order of delays for each CV
%   - nb: n*m matrix containing order of MV delay for each CV
%   - nc: n*d matrix containing order of DV delay for each CV
%   - kappaControl: tau_C = kappaControl*tau_R
% This function:
%   - Predicts yHat using specified RandomForests for N_y horizon
% [ yHat ] = mpc_horizon_predict(x, N_y, yPastValues, uPastValues, dPastValues,...
%                                       nTrees, nPredictors, na, nb, nc)

% There is a big mistake in all this functions: if maxDelay for CV,MV,DV is
% 1, then the shifting aux(2:end) = aux(1:end-1) shouldn't work in another
% language besides Matlab. Apparently, aux(2:end) = aux(2:1) = empty array,
% which was lucky
% coder.extrinsic(CALL_ALL_MEX_FILES) (MAYBE)
NUM_PSEUDO_COSTS = 0; % Pseudo-costs are F.O. costs that will be handled as constraints;
%% Size Handling
[nPopulation,N_u] = size(x(:,NUM_PSEUDO_COSTS+1:end));
[~,maxDelayCV,n] = size(yPastValues);
[~,maxDelayMV,m] = size(uPastValues);
[~,maxDelayDV,d] = size(dPastValues);

N_u = N_u/m;
%% Prediction
% Local copies of past values for generation
auxYPastValues = yPastValues;
auxUPastValues = uPastValues;
auxDPastValues = dPastValues;
yHat = zeros(nPopulation,n,N_y);
computedMV = zeros(nPopulation,m);

for j = 1:N_y
    
    % Generate predictor array for all CV and j ahead prediction
    predictorArray = generate_predictor_array(x,j,uLims,auxYPastValues,auxUPastValues,auxDPastValues,...
                                                na,nb,nc,N_u,kappaControl,NUM_PSEUDO_COSTS);
    % Generate Random Forest prediction
    yHat(:,:,j) = mpc_predict_rf(predictorArray,nTrees,nPredictors,na,nb,nc);
    
    % Refresh auxPast vectors (shift operation)
    auxYPastValues(:,2:end,:) = auxYPastValues(:,1:end-1,:);
    auxYPastValues(:,1,:) = reshape(yHat(:,:,j),nPopulation,1,n);
    
    auxDPastValues(:,2:end,:) = auxDPastValues(:,1:end-1,:);
    auxDPastValues(:,1,:) = auxDPastValues(:,1,:); % If better disturbance model, this can be substituted for prediction
    
    for mv = 1:m
        computedMV(:,mv) = compute_MV_value(x,uLims,auxUPastValues,mv,m,j,N_u,kappaControl,NUM_PSEUDO_COSTS);
    end
    auxUPastValues(:,2:end,:) = auxUPastValues(:,1:end-1,:);
    auxUPastValues(:,1,:) = reshape(computedMV,nPopulation,1,m);
end

end

