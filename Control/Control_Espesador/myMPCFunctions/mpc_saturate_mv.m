function [ satU ] = mpc_saturate_mv( u,uLims )
%MPC_SATURATE_MV Saturate MV to lims (fully vectorized)
%   Detailed explanation goes here
satU = min(max(u,uLims(:,1)),uLims(:,2));
end

