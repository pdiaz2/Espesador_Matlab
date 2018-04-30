function [ y ] = pythonBogey( u )
%PYTHONBOGEY Summary of this function goes here
%   Detailed explanation goes here
import py.textwrap.wrap
S = wrap('This is a string');
N = py.list({'Jones','Johnson','James'});
names = py.mymod.search(N);
[garbage, check] = size(N);
[check1,check2] = size(names);
y = (check+check1+check2)*u;
% y = 100*u;



end

