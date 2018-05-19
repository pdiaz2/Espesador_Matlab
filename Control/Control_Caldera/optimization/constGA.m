function [ c ceq ] = constGA( X)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
coder.extrinsic('predictRF_Y1_mex')
% coder.extrinsic('predictRF_Y2_mex')
% coder.extrinsic('predictRF_Y3_mex')
% Size X
% 1:N_y*numCV => Y_{cv}(k+j)
% Ny*numCV+1:Ny*numCV+Nu*numMV => U_{mv}(k+j)
% Ny+Nu+1
c = 0;
N = 3;
N_u = 2;
numCV = 1;
numMV = 3;
numDV = 1;
na = [1];
nb = [1 2 0];
nc = [2];
pSizes = [1+1+1+2+1+1+1+2]; % Ojo acá

for j = 1:N
    for cv = 1:numCV
        X_RF = zeros(pSizes(cv));
        for k = 1:na(cv)
            X_RF(
        end
        ceq(:,j) = X(:,j) - predictRF_Y1_mex(X(:,1),)
    end
end
end

