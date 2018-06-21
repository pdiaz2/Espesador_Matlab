function [y] =bounds(x,opt)
    global B H
y = (x<=B).*(x>=-H).*cross_section(x,opt);
end

