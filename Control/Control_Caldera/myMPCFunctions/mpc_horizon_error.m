function [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims )
%MPC_HORIZON_ERROR Computes error vector along horizon
%   Detailed explanation goes here
yHighLimit = yLims(:,:,2);
yLowLimit = yLims(:,:,1);
% Setpoint tracking error
spTrackingError = (yHat(1:end-n)-wMatrix(1:end-n));
% Terminal error
terminalError = yHat(:,N_y)-wMatrix(:,N_y);
% Limit violation (epsilon) cost
epsilonValues = (yHat(:)-yHighLimit(:)).*(yHighLimit(:)-yHat(:) < 0)+...
                (yLowLimit(:)-yHat(:)).*(yLowLimit(:)-yHat(:) > 0);
end

