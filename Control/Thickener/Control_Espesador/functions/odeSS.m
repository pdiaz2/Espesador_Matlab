function [ dcdz ] = odeSS(z, c, Qu, cu, k, v_max, n_rz, alpha, beta, rho_s, rho_f, g)

S = cross_section(z,1);
a = alpha*beta*v_hs(c,v_max,n_rz).*exp(beta*c)/((rho_s-rho_f)*g);
f = v_hs(c,v_max,n_rz).*c;

dcdz = (Qu*(c-cu)./S+k*f)./(k*a);

end

