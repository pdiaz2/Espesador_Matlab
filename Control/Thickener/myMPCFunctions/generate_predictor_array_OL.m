function predictorArray  = generate_predictor_array_OL(yPastValues,uPastValues,dPastValues,...
                                                na,nb,nc)
% GENERATE_PREDICTOR_VECTOR Help after
% all xPastValues already up to date
[n,maxDelayCV,] = size(yPastValues);
[m,maxDelayMV] = size(uPastValues);
[d,maxDelayDV] = size(dPastValues);

% Uncomment below when RF fixed; comment above
predictorArray = zeros(n,maxDelayCV+maxDelayMV*m+(maxDelayDV)*d);
predictorVector = zeros(1,maxDelayCV+maxDelayMV*m+(maxDelayDV)*d);
for cv = 1:n
    % Chooses best-model specific delay in Y for cv (reps for nPopulation)
    delayY = na(cv);
%     predictorVector(:,1:delayY) = repmat([yPastValues(cv,[1:delayY])],nPopulation,1);
    predictorVector(1,1:delayY) = yPastValues(cv,[1:delayY]);
    % Chooses best-model specific delay in DV for cv
    for dv = 1:d
        delayDV = nc(cv,dv);
        cumDelayDV = sum(nc(cv,1:(dv-1)));
        % After fixing RF, comment above line and uncomment below
        indicesDV = (1+delayY)+cumDelayDV:(1+delayY)+(sum(nc(cv,1:(dv)))-1);
        predictorVector(1,indicesDV) = dPastValues(dv,[1:delayDV]);
    end
    % Chooses best-model specific delay in MV for output i
    for mv = 1:m
        delayU = nb(cv,mv);
        cumDelayMV = sum(nb(cv,1:(mv-1)));
        % Blah
        indicesMV = (1+indicesDV(end))+cumDelayMV:(1+indicesDV(end))+(sum(nb(cv,1:(mv)))-1);
        MVVector = zeros(1,delayU);
        % Calculate MV to be added to record
        MVVector(:,1:end) = uPastValues(mv,[1:(delayU)]);
        predictorVector(1,indicesMV) = MVVector;
    end
    predictorArray(cv,1:length(predictorVector(1,:))) = predictorVector;
end
end