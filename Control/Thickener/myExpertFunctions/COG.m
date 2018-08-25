function [ underflowCrisp,floccflowCrisp] = COG( areaImpUF,areaImpF )
%COG Summary of this function goes here
%   Detailed explanation goes here
numUF = 0;
denUF = 0;
numF = 0;
denF = 0;

underflowMax = 110;
underflowMin = 0;
floccMax = 1.3;
floccMin = 1;

deltaUFCenter = (underflowMax-underflowMin)/11;
deltaFCenter = (floccMax-floccMin)/11;
ufCenter = underflowMin:deltaUFCenter:underflowMax;
fCenter = floccMax:-deltaFCenter:floccMin;

% Linguistic-values: turn "neglarge,...,poslarge" to 1...5 respectively
rules = [3 4 5 6 7;4 5 6 7 8; 5 7 9 10 11];

for torqueLing = 1:3
    for yieldLing = 1:5
        numUF = numUF+areaImpUF(torqueLing,yieldLing)*ufCenter(rules(torqueLing,yieldLing));
        denUF = denUF+areaImpUF(torqueLing,yieldLing);
        numF = numF+areaImpF(torqueLing,yieldLing)*fCenter(rules(torqueLing,yieldLing));
        denF = denF+areaImpF(torqueLing,yieldLing);
    end
end
underflowCrisp = numUF/denUF;
floccflowCrisp = numF/denF;
end

