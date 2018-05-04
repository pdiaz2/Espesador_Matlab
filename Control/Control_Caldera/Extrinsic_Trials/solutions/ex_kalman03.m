function y = ex_kalman03(z) %#codegen
%
%   ---------------------------------------------------------------------
%
%   Copyright 2010 The MathWorks, Inc.
%
%   ---------------------------------------------------------------------
%

% Initialize state transition matrix
dt=1;
A=[ 1 0 dt 0 0 0;...
    0 1 0 dt 0 0;...
    0 0 1 0 dt 0;...
    0 0 0 1 0 dt;...
    0 0 0 0 1 0 ;...
    0 0 0 0 0 1 ];

% Measurement matrix
H = [ 1 0 0 0 0 0; 0 1 0 0 0 0 ];
Q = eye(6);
R = 1000 * eye(2);

% Initial conditions
persistent x_est p_est
if isempty(x_est)
    x_est = zeros(6, 1);
    p_est = zeros(6, 6);
end

% Pre-allocate output signal:
 y=zeros(size(z));
 
for i=1:size(z,2)
    % Predicted state and covariance
    x_prd = A * x_est;
    p_prd = A * p_est * A' + Q;
    
    % Estimation
    S = H * p_prd' * H' + R;
    B = H * p_prd';
    klm_gain = (S \ B)';
    
    % Estimated state and covariance
    x_est = x_prd + klm_gain * (z(1:2,i) - H * x_prd);
    p_est = p_prd - klm_gain * H * p_prd;
    
    % Compute the estimated measurements
    y(:,i) = H * x_est;
end
end


