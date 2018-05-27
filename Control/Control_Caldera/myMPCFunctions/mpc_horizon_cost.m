function [ spTrackCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError, epsilonValues, ...
                                                                        qMatrix,beta,lambdaMatrix)
%MPC_HORIZON_COST Computes cost of prediction related terms of F.O.
%   - Computes sum(||spTrackingError||_Q^2) tracking cost
%   - Calculates sum(||epsilonValues||_{Lambda}^2) limit violation cost
%   - Calculates beta*||terminaError||^2 terminal cost
%   Inputs:
%   - qMatrix: n*(N_y-1) positive-definite cost matrix for setpoint tracking
%   - beta: terminal constraint weight penalty factor
%   - lambdaMatrix: n*N_y posistive-definite cost matrix for slack variables
% [ spTrackCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError, epsilonValues, ...
%                                                                 qMatrix,beta,lambdaMatrix)
%% Cost Calculation
% qMatrix = repmat(qMatrix,
% Setpoint tracking cost
spTrackCost = spTrackingError.^2*qMatrix(:);
% Terminal cost
terminalCost = beta*sum(terminalError.^2,2);
% Limit violation cost
limBreakCost = epsilonValues.^2*lambdaMatrix(:);

end

