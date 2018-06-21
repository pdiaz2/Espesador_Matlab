function [ y ] = d_comp(x)
%Constituitive reltation

global v_max n_rz rho_s rho_f alpha beta phi_c phi_max g

y = (x>phi_c).*(x<=phi_max).*(v_max*alpha*beta/((rho_s-rho_f)*g)*...
    exp(beta*x).*(1-x).^n_rz);
end