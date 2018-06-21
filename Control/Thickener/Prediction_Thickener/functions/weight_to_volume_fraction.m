function [ phi ] = weight_to_volume_fraction( wt, rho_s, rho_f)

phi = (wt*rho_f)/(wt*rho_f+(1-wt)*rho_s);


end

