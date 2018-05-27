function predictorArray  = generate_predictor_array(x,jAhead,yPastValues,uPastValues,dPastValues,...
                                                na,nb,nc,N_u,NUM_PSEUDO_COSTS)
% GENERATE_PREDICTOR_VECTOR Help after
% all xPastValues already up to date
[nPopulation,~] = size(x);
[n,maxDelayCV] = size(yPastValues);
[m,maxDelayMV] = size(uPastValues);
[d,maxDelayDV] = size(dPastValues);
predictorArray = zeros(n,maxDelayCV+maxDelayMV*m+maxDelayDV*d);
predictorVector = predictorArray(1,:);
for cv = 1:n
    % Chooses best-model specific delay in Y for cv
    delayY = na(cv);
    predictorVector = [yPastValues(cv,[1:delayY])];
%     predictorVector(1:delayY) = yPastValues(cv,[1:delayY]);
    % Chooses best-model specific delay in DV for cv
    for k = 1:d
        delayDV = nc(cv,k);
        predictorVector = [predictorVector dPastValues(k,[1:delayDV])];
%         predictorVector(1+delayY:1+delayY+delayDV*(k-1)) = dPastValues(k,[1:delayDV])
    end
    % Chooses best-model specific delay in MV for output i
    for k = 1:m
        delayU = nb(cv,k);
        MVVector = zeros(1,delayU+1); % Change after new RF Model
        computedMV = compute_MV_value(x,uPastValues,k,m,jAhead,N_u,NUM_PSEUDO_COSTS);  
        MVVector(1) = computedMV;
        if delayU >= 1 % Change to 2 after new RF Model
            MVVector(2:end) = uPastValues(k,[1:delayU]); %Works even if delayU = 0. After new RF Model, delayU >=1
        end
        predictorVector = [predictorVector MVVector];
    end
    predictorArray(cv,1:length(predictorVector)) = predictorVector;
end
end