function [ MVVector ] = compute_MV_value(x,uLims,uPastValues,mv,m,jAhead,N_u,NUM_PSEUDO_COSTS )
%COMPUTE_MV_VALUE Computes value of U w.r.t delta_U and past value
%   Detailed explanation goes here

% Last value on record is already within uLims by design of algorithm
uPastAdded = uPastValues(:,1,mv);
% Always is at least the last value on record
MVVector(:,1) = uPastAdded;
if jAhead <= N_u
    % Add delta_MV in (t+j) instant if required by N_u
    uLowLimit = uLims(mv,jAhead,1);
    uHighLimit = uLims(mv,jAhead,2);
    uNowPossible = x(:,NUM_PSEUDO_COSTS+mv+m*(jAhead-1))+uPastAdded;
    MVVector(:,1) = mpc_saturate_mv(uNowPossible,[uLowLimit uHighLimit]);
else
end
end