function [wMatrix] = mpc_generate_w_matrix(w,qMatrix)
%MPC_GENERATE_W_MATRIX Extrapolate w for N_y horizon for CVs
%   Inputs:
%   - w: n*1 setpoint values
%   - qMatrix: n*(N_y-1) matrix tracking costs (2D)
[n,N_y] = size(qMatrix);
N_y = N_y+1;

wMatrix = w(:)*ones(1,N_y);
end