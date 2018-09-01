function [ integralEnvelope] = myIntegralEnvelope( errorHistorySmooth,selectEnvelope)
%MYINTEGRALENVELOPE Summary of this function goes here
%   Detailed explanation goes here
switch selectEnvelope
    case 'GaussianEnvelope'
        integralEnvelope = linspace(3,0,length(errorHistorySmooth));
        integralEnvelope = normpdf(integralEnvelope,0,1);
        integralEnvelope = integralEnvelope/sum(integralEnvelope);
        integralEnvelope = fliplr(integralEnvelope);
end
end

