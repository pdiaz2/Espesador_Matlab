function [ MVVector ] = compute_MV_value(x,uPastValues,mv,m,jAhead,N_u,NUM_PSEUDO_COSTS )
%COMPUTE_MV_VALUE Computes value of U w.r.t delta_U and past value
%   Detailed explanation goes here
[nPopulation,~] = size(x);
uPastAdded = uPastValues(:,1,mv);
% Always is at least the last value on record
MVVector(:,1) = uPastAdded;
if jAhead <= N_u
    % Add delta_MV in (t+j) instant if required by N_u
    MVVector(:,1) = x(:,NUM_PSEUDO_COSTS+mv+m*(jAhead-1))+uPastAdded;
else
end

end

