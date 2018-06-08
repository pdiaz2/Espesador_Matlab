function [ D ] = numerical_compression_flux(U,Ddata,Cdata)
% Numerical compression flux calculation.

D = interp1(Cdata,Ddata,U);
 

end