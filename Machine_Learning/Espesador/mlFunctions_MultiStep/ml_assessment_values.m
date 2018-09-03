function [ assessmentValues ] = ml_assessment_values( testData )
%ML_DYNAMICRANGE Summary of this function goes here
%   Detailed explanation goes here

n = size(testData,2);
assessmentValues = -1*ones(n,3); % Mean, Var, dynRange and "totalParams" (RF is non-parametric, so I am inventing this criterion)
for cv = 1:n
    assessmentValues(cv,1) = mean(testData(cv).OutputData(:));
    assessmentValues(cv,2) = var(testData(cv).OutputData(:),1); % w = 1 makes 1/N
    assessmentValues(cv,3) = range(testData(cv).OutputData(:));
    assessmentValues(cv,4) = size(testData(cv).InputData,2)/size(testData(cv).InputData,1);
%     assessmentValues(cv,3) = norm(testData(cv).OutputData(:)-assessmentValues(cv,1))^2;
end
end

