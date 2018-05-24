function [ MVVector ] = compute_MV_value(x,uPastValues,k,m,jAhead,N_u,NUM_PSEUDO_COSTS )
%COMPUTE_MV_VALUE Computes value of U w.r.t delta_U and past value
%   Detailed explanation goes here
if jAhead <= N_u
    % Always add MV to be determined in t+j instant
    MVVector(1) = x(NUM_PSEUDO_COSTS+k+m*(jAhead-1))+uPastValues(k,1); % x(:,!!!!
else
    % Over N_u horizon, impose deltaMV = 0
    MVVector(1) = uPastValues(k,1);
end

end

