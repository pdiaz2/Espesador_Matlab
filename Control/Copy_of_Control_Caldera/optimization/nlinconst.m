function [c ceq] = nlinconst(x)
% Must be univariate
coder.extrinsic('predictRF_Y1_mex');
cot = myDummyFunction(x); % Works
PF = [31,30,40,39,35,45,42,41,37,37];
cot = predictRF_Y1_mex(PF,100,10); % Works
for i = 1:2
      c(:,i) = x(:,i).^2/4 + x(:,i).^2/9 - cot;
    %     c(:,1) = x(:,1).^2/4 + x(:,2).^2/9 + x(:,3).^2/25 - cot;
    %     c(:,2) = cosh(x(:,1) + x(:,2)) - x(:,3);
end
ceq = x(:,1).*x(:,2).*x(:,3) - 2;
end