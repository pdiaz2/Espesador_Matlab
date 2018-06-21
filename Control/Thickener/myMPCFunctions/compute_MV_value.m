function [ MVVector ] = compute_MV_value(x,uLims,uPastValues,mv,m,...
                                        jAhead,N_u,kappaControl,...
                                        NUM_PSEUDO_COSTS)
%COMPUTE_MV_VALUE Computes value of U w.r.t delta_U and past value
%   Detailed explanation goes here

% Last value on record is already within uLims by design of algorithm
uPastAdded = uPastValues(:,1,mv);
% Always is at least the last value on record
MVVector(:,1) = uPastAdded;
% Check if jAhead is multiple of tau_C
timeToControl = rem(jAhead-1,kappaControl);
if timeToControl == 0
%  Calculate jControlAhead index in horizon: 0-index based 
    jControlAhead = (jAhead-1)/kappaControl;
    if jControlAhead <= N_u-1
        % Add delta_MV in (t+j) instant if required by N_u
        uLowLimit = uLims(mv,jControlAhead+1,1);
        uHighLimit = uLims(mv,jControlAhead+1,2);
        uNowPossible = x(:,NUM_PSEUDO_COSTS+mv+m*(jControlAhead))+uPastAdded;
        MVVector(:,1) = mpc_saturate_mv(uNowPossible,[uLowLimit uHighLimit]);
    else
    end
end
end