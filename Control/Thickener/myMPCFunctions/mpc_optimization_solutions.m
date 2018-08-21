function [ yHat,optimalMVSequence] = mpc_optimization_solutions( codedMVSequence,...
                                                       yPastValues,uPastValues,dPastValues,...
                                                       n,m,N_y,N_u,...
                                                       nTrees,nPredictors,...
                                                       na,nb,nc,kappaControl,...
                                                       uLims)
%MPC_OPTIMIZATION_SOLUTIONS Summary of this function goes here
% Inputs:
%   - codedMVSequence: 1*(m*N_u) vector with coded solution of optimization
%   problem
%   - yPastValues: n*max(na)*tau_R matrix containing past CV values
%   - uPastValues: m*max(max(nb))*tau_R matrix containing past MV values
%   - dPastValues: d*max(nc)*tau_R matrix containing past DV values
%   Detailed explanation goes here
    % Initial reshaping
    decodedMVSequence = reshape(codedMVSequence,N_u,m);
    decodedMVSequence = decodedMVSequence';
    optimalMVSequence = zeros(m,N_y);
    %% Size managing
    NUM_PSEUDO_COSTS = 0;
    [nPopulation,~] = size(codedMVSequence);
    % Replication of yPastValues according to nPopulation
    yPastValues = permute(repmat(yPastValues,1,1,nPopulation),[3 2 1]);
    uPastValues = permute(repmat(uPastValues,1,1,nPopulation),[3 2 1]);
    dPastValues = permute(repmat(dPastValues,1,1,nPopulation),[3 2 1]);
    %% Predict
    [yHat] = mpc_horizon_predict(codedMVSequence,N_y,uLims,...
                                  yPastValues,uPastValues,dPastValues,...
                                  nTrees,nPredictors,...
                                  na,nb,nc,kappaControl);
    yHat = reshape(yHat,n,N_y);
    %% Optimal MV Sequence
    lastMVValues = zeros(m,1);
    for mv = 1:m
        lastMVValues(mv) = uPastValues(1,1,mv);
    end
                        
    for j = 1:N_y
        timeToControl = rem(j-1,kappaControl);
        jControlAhead = (j-1)/kappaControl;
        if (timeToControl == 0) && (jControlAhead <= (N_u-1))
            optimalMVSequence(:,j) = lastMVValues+decodedMVSequence(:,jControlAhead+1);
        else
            optimalMVSequence(:,j) = optimalMVSequence(:,j-1);
        end
        lastMVValues = optimalMVSequence(:,j);
    end

    
end

