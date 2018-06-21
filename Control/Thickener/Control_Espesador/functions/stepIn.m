function [ x ] = stepIn( x1,x2,t,Dt,T)
time = (0:Dt:T)';
x = zeros(length(time),1);
x(time<t) = x1;
x(time>=t) = x2;
x = [time x];
end

