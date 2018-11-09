function [ c ceq] = nlinconst_2( x )
%NLINCONST_2 Summary of this function goes here
%   Detailed explanation goes here
c(:,1) = x(:,1).^2/4 + x(:,2).^2/9 - 6;
windowSize = 3;
b = 1/windowSize*ones(1,windowSize);
a = [1 -0.5 0.1];
constraint = filter(b,a,x(:,2));
ceq(:,1) = x(:,1)-constraint-x(:,2);

end

