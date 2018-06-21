function [ y ] = v_hs( x ,v_max, n_rz)
%Constituitive reltation

y = v_max*(1-x).^n_rz;
end

