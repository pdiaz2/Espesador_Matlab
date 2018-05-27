function [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims )
%MPC_HORIZON_ERROR Computes error vector along horizon
%   This function:
%   - Generates nPopulation*(n*(N_y-1)) matrix (2-D) of spTrackingErrors
%   - Generates nPopulation*(n*1) vector (2-D) of terminal error
%   - Generates nPopulation*(n*N_y) vector (2-D) of on-off epsilon cost of limit violation
%   Inputs:
%   - yHat: nPopulation*n*N_y prediction matrix
%   - wMatrix: n*N_y setpoint matrix
%   - yLims: n*N_y*2 matrix with low and high limits for CV in horizon
% [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims )
[nPopulation,n,N_y] = size(yHat);
yHighLimit = yLims(:,:,2);
yLowLimit = yLims(:,:,1);
% Replicate for nPopulation
wMatrix = reshape(wMatrix,1,n,N_y);
wMatrix = repmat(wMatrix(:,:,:),nPopulation,1,1);
yHighLimit = reshape(yHighLimit,1,n,N_y);
yHighLimit = repmat(yHighLimit(:,:,:),nPopulation,1,1);
yLowLimit = reshape(yLowLimit,1,n,N_y);
yLowLimit = repmat(yLowLimit(:,:,:),nPopulation,1,1);
% Setpoint tracking error
spTrackingError = yHat(:,:,1:N_y-1)-wMatrix(:,:,1:(N_y-1));
spTrackingError = reshape(spTrackingError,nPopulation,n*(N_y-1));
% spTrackingError = spTrackingError(:);
% Terminal error
terminalError = yHat(:,:,N_y)-wMatrix(:,:,N_y);
terminalError = reshape(terminalError,nPopulation,n);
% terminalError = terminalError(:);
% Limit violation (epsilon) cost
epsilonValues = (yHat(:,1:n,1:N_y)-yHighLimit(:,1:n,1:N_y)).*...
                (yHat(:,1:n,1:N_y)-yHighLimit(:,1:n,1:N_y) > 0)+...
                (yLowLimit(:,1:n,1:N_y)-yHat(:,1:n,1:N_y)).*...
                (yLowLimit(:,1:n,1:N_y)-yHat(:,1:n,1:N_y) > 0);
epsilonValues = reshape(epsilonValues,nPopulation,n*N_y);
end

