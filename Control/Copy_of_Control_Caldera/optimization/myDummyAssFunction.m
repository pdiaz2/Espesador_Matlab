function [ y] = myDummyAssFunction( )
%MYDUMMYASSFUNCTION Summary of this function goes here
%   Detailed explanation goes here
options = optimoptions('ga','UseVectorized',true,'Display','off','MaxStallGenerations',500,'PopulationSize',100,'MaxGenerations',100);
[x,fval,exitflag,output] = ga(@qrFunction,2,[],[],[],[],[],[],@nlinconst_2,options);
y = double(x(1));
end

