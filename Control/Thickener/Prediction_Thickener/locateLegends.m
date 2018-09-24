function [ location ] = locateLegends( inputStr )
%LOCATELEGENDS Summary of this function goes here
%   Detailed explanation goes here
switch inputStr
    case 'nw'
        location = 'northwest';
    case 'ne'
        location = 'northeast';
    case 'sw'
        location = 'southwest';
    case 'se'
        location = 'southeast';
end

end

