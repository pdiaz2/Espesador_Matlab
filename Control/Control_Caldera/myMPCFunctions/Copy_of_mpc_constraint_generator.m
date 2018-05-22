function [ c ceq ] = mpc_constraint_generator(x, qMatrix, lambdaMatrix, wMatrix, yLims,...
                                              yPastValues, uPastValues, dPastValues,...
                                              nTrees, nPredictors, na, nb, nc)
%MPC_CONSTRAINT_GENERATOR Generates constraints of MPC problem
% This function assigns the non-linear constraints (i.e the model
% prediction of Random Forests) and handles the slack variables
% indirectly.
% Inputs:
%   - x: decission variable vector
%   - qMatrix: n*(N_y-1) positive-definite cost matrix for setpoint tracking
%   - lambdaMatrix: n*N_y posistive-definite cost matrix for slack variables
%   - wMatrix: n*N_y setpoint matrix
%   - yLims: n*N_y*2 matrix with low and high limits for CV in horizon
%   - yPastValues: n*max(na)*tau_R matrix containing past CV values
%   - uPastValues: m*max(max(nb))*tau_R matrix containing past MV values
%   - dPastValues: d*max(nc)*tau_R matrix containing past DV values
%   - nTrees: n*1 vector with number of trees per output
%   - nPredictors: n*1 vector with number of predictors per CV
%   - na: n*1 vector containing order of delays for each CV
%   - nb: n*m containing order of MV delay for each CV
%   - nc: n*d containing order of DV delay for each CV
% This function:
%   - Predicts yHat using specified RandomForests for N_y horizon
%   - Computes sum(||yHat-wMatrix||^2) and assigns it to x(1)
%   - Calculates on-off Epsilon penalty for CV constraint violation
%   - Calculates sum(|Epsilon|^2) cost and assigns to x(3)
%   - Calculates ||y_f-y_sp||^2 terminal cost% 
%   [ c ceq ] = mpc_constraint_generator(x,qMatrix,lambdaMatrix,wMatrix,...
%                                        y,yPastValues,uPastValues,...
%                                        nTrees,nPredictors,...
%                                        na,nb,nc)

% coder.extrinsic(CALL_ALL_MEX_FILES) (MAYBE)
NUM_PSEUDO_COSTS = 3; % Pseudo-costs are F.O. costs that will be handled as constraints;
%% Size Handling
[n,N_y] = size(wMatrix);
[n,maxDelayCV] = size(yPastValues);
[m,maxDelayMV] = size(uPastValues);
[d,maxDelayDV] = size(dPastValues);
N_u = length(x(NUM_PSEUDO_COSTS:end))/m;
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
%% Cost Calculation
yHighLimit = yLims(:,:,2);
yLowLimit = yLims(:,:,1);
c = [];
% Setpoint tracking cost
ceq(:,1) = x(:,1)-(yHat(1:end-n)-wMatrix(1:end-n)).^2*qMatrix(:);
% Terminal cost
ceq(:,2) = x(:,2)-norm(yHat(:,N_y)-wMatrix(:,N_y))^2;
% Limit violation (epsilon) cost
epsilonCost = (yHat(:)-yHighLimit(:)).*(yHighLimit(:)-yHat(:) < 0)+...
                (yLowLimit(:)-yHat(:)).*(yLowLimit(:)-yHat(:) > 0);
ceq(:,3) = x(:,3)-epsilonCost.^2'*lambdaMatrix(:);
end

