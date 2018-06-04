function [ offsetFreeVar ] = ml_remove_offset( removeString,dcValue,nVars )
%ML_REMOVE_OFFSET Summary of this function goes here
%   Detailed explanation goes here
offsetFreeVar = zeros(nVars,1);
if strcmp(removeString,'R_DC')
    for a = 1:nVars
       offsetFreeVar(a) = dcValue(a); 
    end  
end

end

