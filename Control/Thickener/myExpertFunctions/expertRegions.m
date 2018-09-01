function [ cvMembership ] = expertRegions( errorCV,cvThresholds)
%EXPERTREGIONS Summary of this function goes here
%   Detailed explanation goes here

cvMembership = zeros(1,length(cvThresholds));
for i = 1:length(cvThresholds)
    if i == 1
        membership = 1*(errorCV >= cvThresholds(1))+1*(isnan(errorCV));
%     elseif i == length(cvThresholds)
%         membership = 1*(errorCV > cvThresholds(i));
%         membership = 1*(errorCV < CVThresholds(i-1) && errorCV >= CVThresholds(i));
    else
        membership = 1*(errorCV < cvThresholds(i-1) && errorCV >= cvThresholds(i));
%         membership = 1*(errorCV < CVThresholds(i));
    end
    cvMembership(1,i) = membership;
end
% Check if completely out of bounds
if sum(cvMembership) == 0
   if errorCV > cvThresholds(1)
       cvMembership(1) = 1;
   elseif errorCV < cvThresholds(end)
       cvMembership(end) = 1;
   end
end
end

