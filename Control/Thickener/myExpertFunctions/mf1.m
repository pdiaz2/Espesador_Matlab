function [ mf1Outputs ] = mf1( torque )
%MF1 Summary of this function goes here
%   Detailed explanation goes here
% deltaTorqueCenter = 0.15/2;
% torqueMin = 0.10;
% torqueMax = 0.4;
% mf1Outputs = zeros(1,5);
% 
% torqueCenter = torqueMin:deltaTorqueCenter:torqueMax;
% % deCenter = -pi/4:deltaDECenter:pi/4;
% % uCenter = -20:deltaUCenter:20;
% % % Linguistic-values: turn "neglarge,...,poslarge" to 1...5 respectively
% % rules = [5 5 5 4 3;5 5 4 3 2; 5 4 3 2 1; 4 3 2 1 1; 3 2 1 1 1];
% % % Calculate membership function value for all membership function values
% for centers = 1:5
%     mf1Outputs(centers) = myTriangularPulse(torqueCenter(centers)-deltaTorqueCenter,...
%         torqueCenter(centers),torqueCenter(centers)+deltaTorqueCenter,torque);
% end
% % Extend beyond the edge triangles of the borders of the universe
% if torque < (torqueCenter(1))
%     mf1Outputs(1) = 1;
% elseif torque > (torqueCenter(3))
%     mf1Outputs(5) = 1;
% end

deltaTorqueCenter = 0.15/2;
torqueMin = 0.10+deltaTorqueCenter;
torqueMax = 0.4-deltaTorqueCenter;
mf1Outputs = zeros(1,3);

torqueCenter = torqueMin:deltaTorqueCenter:torqueMax;
for centers = 1:3
    mf1Outputs(centers) = myTriangularPulse(torqueCenter(centers)-deltaTorqueCenter,...
        torqueCenter(centers),torqueCenter(centers)+deltaTorqueCenter,torque);
end
% Extend beyond the edge triangles of the borders of the universe
if torque < (torqueCenter(1))
    mf1Outputs(1) = 1;
elseif torque > (torqueCenter(3))
    mf1Outputs(3) = 1;
end

end

