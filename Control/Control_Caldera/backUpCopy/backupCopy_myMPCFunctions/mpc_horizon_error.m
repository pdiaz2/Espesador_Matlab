function [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims )
%MPC_HORIZON_ERROR Computes error vector along horizon
%   This function:
%   - Generates n*(N_y-1) vector of spTrackingErrors
%   - Generates n*1 vector of terminal error
%   - Generates n*(N_y) vector of on-off epsilon cost of limit violation
%   Inputs:
%   - yHat: n*N_y prediction matrix
%   - wMatrix: n*N_y setpoint matrix
%   - yLims: n*N_y*2 matrix with low and high limits for CV in horizon
% [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims )
[n,N_y] = size(wMatrix);
yHighLimit = yLims(:,:,2);
yLowLimit = yLims(:,:,1);
% Setpoint tracking error
spTrackingError = yHat(1:end-n)-wMatrix(1:end-n);
% Terminal error
terminalError = yHat(:,N_y)-wMatrix(:,N_y);
% Limit violation (epsilon) cost
epsilonValues = (yHat(:)-yHighLimit(:)).*(yHighLimit(:)-yHat(:) < 0)+...
                (yLowLimit(:)-yHat(:)).*(yLowLimit(:)-yHat(:) > 0);
end

