function [ F ] = CLF_condition1(Dt, Dz, Qf, kf)
global Cdata v_max n_rz A phi_c

Smax = max(A);
Smin = min(A);
lambda = Dt/Dz;
mu = lambda/Dz;

a =  max(kf*v_max*(1-Cdata).^n_rz);
b = max(-1*kf*v_max*n_rz*(1-Cdata).^(n_rz-1));
c = max(kf*d_comp(Cdata(Cdata>=phi_c))./Cdata(Cdata>=phi_c));

f1 = lambda*Qf;
f2 = Smax*(lambda*(a + b) + 2*mu*c);
f3 = Smax*(lambda*a + 2*mu/phi_c*c);

F = max([f1 f2 f3])/Smin;

end

