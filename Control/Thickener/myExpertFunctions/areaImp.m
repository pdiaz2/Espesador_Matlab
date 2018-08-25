function [ areaImpUF,areaImpF] = areaImp( prem)
%AREAIMP Summary of this function goes here
%   Detailed explanation goes here

areaImpUF = zeros(3,5);
areaImpF = zeros(3,5);
underflowMax = 110;
underflowMin = 0;
floccMax = 1.3;
floccMin = 1;

deltaUFCenter = (underflowMax-underflowMin)/11;
deltaFCenter = (floccMax-floccMin)/11;
% deltauCenter = underflowMin:deltaUCenter:underflowMax;
% fCenter = floccMin:deltaFCenter:floccMax;
% deltaUFCenter = 10;

for torqueLing = 1:3
    for yieldLing = 1:5
        h = min(1,prem(torqueLing,yieldLing));
        areaImpUF(torqueLing,yieldLing) = 2*deltaUFCenter*(h-h^2/2);
        areaImpF(torqueLing,yieldLing) = 2*deltaFCenter*(h-h^2/2);
    end
end

end

