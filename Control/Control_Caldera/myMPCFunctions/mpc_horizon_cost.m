function [ spTrackCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError,
                                                                        ...)
%MPC_HORIZON_COST Summary of this function goes here
%   Detailed explanation goes here
%% Cost Calculation

% Setpoint tracking cost
spTrackCost = spTrackingError.^2*qMatrix(:);
% Terminal cost
terminalCost = beta*norm(yHat(:,N_y)-wMatrix(:,N_y))^2;

limBreakCost = epsilonValues.^2'*lambdaMatrix(:);

end

