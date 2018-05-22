function [ z ] = mpc_lqr_function_v2(x, beta, rMatrix, qMatrix, lambdaMatrix, wMatrix, yLims,...
                                      yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc)
%MPC_LQR_FUNCTION MPC objective finite LQR function
% Calculates value of objective function for delta_u
% Inputs:
%   - x: Delta_MV values (delta_u) grouped by m MV N_u Times
%   - beta: terminal constraint weight penalty factor
%   - rMatrix: m*N_u positive-definite matrix penalty factor for delta_u
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
% z = mpc_lqr_function(x)
NUM_PSEUDO_COSTS = 0;
%% Calculate Costs
%   - x(1) : Setpoint tracking cost (||y-w||^2_Q)
%   - x(2) : Terminal cost (||V_f||^2)
%   - x(3) : Slack variable cost (constraint violation) (||epsi||^2_Lambda)
[spTrackingCost, terminalCost, limBreakCost] = mpc_horizon_predict(x,qMatrix,lambdaMatrix,wMatrix,yLims,...
                                                              yPastValues,uPastValues,dPastValues,...
                                                              nTrees,nPredictors,...
                                                              na,nb,nc);
%% Compute Objective Funcion Value 
z = 1/2*spTrackingCost+beta*terminalCost+1/2*limBreakCost+x(:,NUM_PSEUDO_COSTS+1:end).^2*rMatrix(:);


end

