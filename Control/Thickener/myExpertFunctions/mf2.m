function [ mf2Outputs ] = mf2( yieldStress )
%MF1 Summary of this function goes here
%   Detailed explanation goes here
offsetYield = 20;
deltaYieldCenter = 20;
yieldStressStart = 30-offsetYield+deltaYieldCenter;
% yieldStressMinFine = 45-offsetYield;
% yieldStressTarget = 70-offsetYield;
% yieldStressMaxFine = 80-offsetYield;
yieldStressMax = 110-offsetYield+deltaYieldCenter;


mf2Outputs = zeros(1,5);


yieldCenter = yieldStressStart:deltaYieldCenter:yieldStressMax;
% uCenter = -20:deltaUCenter:20;
% % Linguistic-values: turn "neglarge,...,poslarge" to 1...5 respectively
% rules = [5 5 5 4 3;5 5 4 3 2; 5 4 3 2 1; 4 3 2 1 1; 3 2 1 1 1];
% Calculate membership function value for all membership function values
for centers = 1:5
    mf2Outputs(centers) = myTriangularPulse(yieldCenter(centers)-deltaYieldCenter,...
        yieldCenter(centers),yieldCenter(centers)+deltaYieldCenter,yieldStress);
end
% Extend beyond the edge triangles of the borders of the universe
if yieldStress < (yieldCenter(1))
    mf2Outputs(1) = 1;
elseif yieldStress > (yieldCenter(5))
    mf2Outputs(5) = 1;
end

end

