function [ y ] = myTriangularPulse( leftEdge,center,rightEdge,x)
%MYTRIANGULARPULSE Summary of this function goes here
%   Detailed explanation goes here
if ((leftEdge <= x) && (x <= center))    
    y = (x - leftEdge)/(center - leftEdge);
elseif ((center < x) && (x <= rightEdge))
    y = (rightEdge - x)/(rightEdge - center);
else
    y = 0;
end

