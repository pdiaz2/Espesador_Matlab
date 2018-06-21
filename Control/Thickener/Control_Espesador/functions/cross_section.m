function [A] = cross_section(z,opt)
% Cross-Section as a function of the hight
global H B R R1 R2 varphi Delta

    if (opt == 1)
        z1 = Delta;
        z2 = tan(varphi)*(R-R1);
        A = (pi*R1^2)*(z<=-H)+... overflow pipe
            (pi*R^2)*(z>-H).*(z<=-H+z1)+... regular section on top of the feed
            (pi*R^2-pi*R2^2)*(z>-H+z1).*(z<0)+... feed mechanism
            (pi*R^2)*(z>=0).*(z<B-z2)+... regular section on the bottom of the feed
            (pi*(R1+(B-z)*(R-R1)/z2).^2).*(z>=B-z2).*(z<B)+...
            (pi*R1^2)*(z>=B); %underflow pipe
       
    else
       A = ones(size(z))*pi*R^2;
    end

end

