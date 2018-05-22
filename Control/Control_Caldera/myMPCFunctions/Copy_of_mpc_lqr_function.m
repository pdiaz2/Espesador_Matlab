function [ z ] = mpc_lqr_function(x, beta, rMatrix)
%MPC_LQR_FUNCTION MPC objective finite LQR function
% Recieves calculated setpoint,slack and constraint costs to reduce size of
% variable space
% x: vectorized decission variables according to the following
%   - x(1) : Setpoint tracking cost (||y-w||^2_Q)
%   - x(2) : Terminal cost (||V_f||^2)
%   - x(3) : Slack variable cost (constraint violation) (||epsi||^2_Lambda)
%   - x(4:end) : Delta_MV values (delta_u) grouped by m MV N_u Times
% beta: terminal constraint weight penalty factor
% rMatrix: m*N_u positive-definite matrix penalty factor for delta_u
% z = mpc_lqr_function(x)
NUM_PSEUDO_COSTS = 4;
z = 1/2*x(:,1)+beta*x(:,2)+1/2*x(:,3)+x(:,NUM_PSEUDO_COSTS:end).^2*rMatrix(:);


end

