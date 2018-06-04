function [ OLExpArray ] = generate_ol_array_index( makeSelected )
%GENERATE_OL_ARRAY_INDEX Summary of this function goes here
%   Detailed explanation goes here
% Each Subset on it's own (leaves 8 out, because it is test) -> XVal
% afterwards
for m = 1:length(makeSelected)
    OLExpArray(m).OLExps = [m];
end
% Special Combinations
OLExpArray(m+1).OLExps = [1 3 5 7];
OLExpArray(m+2).OLExps = [2 4 6];
OLExpArray(m+3).OLExps = [1 2 3 4 5 6 7];

end

