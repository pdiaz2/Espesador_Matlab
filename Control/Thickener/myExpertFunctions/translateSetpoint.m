function [ C_pSetpoint,bedLevelSetpoint ] = translateSetpoint( yieldStressSP,translationMatrix )
%TRANSLATESETPOINT Summary of this function goes here
%   Detailed explanation goes here
% C_pSetpoint = 1-(yieldStressSP/220.97)^{1/8.68}*2.9*1e-4*1e3;
% C_pSetpoint = 0.71;
% bedLevelSetpoint =
numSetpoints = length(translationMatrix(:,1));
distSP = translationMatrix(2,1)-translationMatrix(1,1);
distances = (yieldStressSP*ones(numSetpoints,1)-translationMatrix(:,1)).^2;
signedDistances = (yieldStressSP*ones(numSetpoints,1)-translationMatrix(:,1));
[~,closestSP] = min(distances);
C_pSetpoint = 0;
bedLevelSetpoint = 0;
if signedDistances(closestSP) > 0
    % SP bigger than LUT value
    alpha = 1/distSP*(distSP-abs(signedDistances(closestSP)));
    beta = 1-alpha;
    C_pSetpoint = alpha*translationMatrix(closestSP,2)+beta*translationMatrix(closestSP+1,2);
    bedLevelSetpoint = alpha*translationMatrix(closestSP,3)+beta*translationMatrix(closestSP+1,3);
elseif signedDistances(closestSP) <= 0
    alpha = 1/distSP*(distSP-abs(signedDistances(closestSP-1)));
    beta = 1-alpha;
    C_pSetpoint = beta*translationMatrix(closestSP,2)+alpha*translationMatrix(closestSP-1,2);
    bedLevelSetpoint = beta*translationMatrix(closestSP,3)+alpha*translationMatrix(closestSP-1,3);
    
end
end

