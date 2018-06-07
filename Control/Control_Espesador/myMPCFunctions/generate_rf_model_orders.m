function [ na,nb,nc, maxDelay ] = generate_rf_model_orders( matFileName,numCV)
%GENERATE_RF_MODEL_ORDERS Summary of this function goes here
%   Detailed explanation goes here
load(matFileName);
na = [];
for cv = 1:numCV
    % Choose model and output specific delay combinations (chosen off-line)
    delayUMatrix(cv,:) = UBackshiftMatrix(delayU(cv),:);
    delayYMatrix(cv,:) = YBackshiftMatrix(delayY(cv),:);
    na = [na;delayYMatrix(cv,cv)];
end
nb = delayUMatrix(:,(1+numDV):end);
nc = delayUMatrix(:,1:numDV);
% maxYDelay = max(na);
% maxUDelay = max(max(nb));
% maxDDelay = max(max(nc));
maxDelay(1) = max(na);
maxDelay(2) = max(max(nb));
maxDelay(3) = max(max(nc));
end

