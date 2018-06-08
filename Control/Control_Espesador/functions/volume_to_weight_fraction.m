function [ wt ] = volume_to_weight_fraction( phi, rho_s, rho_f)

wt = (phi*rho_s)./(phi*rho_s+(1-phi)*rho_f);


end

