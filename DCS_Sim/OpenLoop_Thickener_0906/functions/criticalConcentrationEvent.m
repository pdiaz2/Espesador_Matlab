function [value, isterminal, direction] = criticalConcentrationEvent(x,u)
global phi_c
value = u-phi_c;    % Detect height = 0
isterminal = 1;   % Stop the integration
direction = 0;   % Negative direction only


end

