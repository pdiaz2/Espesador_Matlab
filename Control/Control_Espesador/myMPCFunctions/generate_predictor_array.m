function predictorArray  = generate_predictor_array(x,jAhead,uLims,...
                                                yPastValues,uPastValues,dPastValues,...
                                                na,nb,nc,N_u,kappaControl,...
                                                NUM_PSEUDO_COSTS)
% GENERATE_PREDICTOR_VECTOR Help after
% all xPastValues already up to date
[nPopulation,~] = size(x);
[~,maxDelayCV,n] = size(yPastValues);
[~,maxDelayMV,m] = size(uPastValues);
[~,maxDelayDV,d] = size(dPastValues);
% predictorArray = zeros(nPopulation,maxDelayCV+maxDelayMV*m+(maxDelayDV+1)*d,n);
% predictorVector = zeros(nPopulation,maxDelayCV+maxDelayMV*m+(maxDelayDV+1)*d);
% Uncomment below when RF fixed; comment above
predictorArray = zeros(nPopulation,maxDelayCV+maxDelayMV*m+(maxDelayDV)*d,n);
predictorVector = zeros(nPopulation,maxDelayCV+maxDelayMV*m+(maxDelayDV)*d);
for cv = 1:n
    % Chooses best-model specific delay in Y for cv (reps for nPopulation)
    delayY = na(cv);
%     predictorVector(:,1:delayY) = repmat([yPastValues(cv,[1:delayY])],nPopulation,1);
    predictorVector(:,1:delayY) = yPastValues(:,[1:delayY],cv);
    % Chooses best-model specific delay in DV for cv
    for dv = 1:d
        % For the time being, RF are being fed
        % dv(k),dv(k-1),...,dv(k-delayDV). Therefore, the actual number of
        % DV predictor values in predictorVector is delayDV+1
        delayDV = nc(cv,dv);
        cumDelayDV = sum(nc(cv,1:(dv-1)));
%         indicesDV = (1+delayY)+cumDelayDV+(dv-1):...
%                     (1+delayY)+(dv-1)+(sum(nc(cv,1:(dv))));
        % After fixing RF, comment above line and uncomment below
        indicesDV = (1+delayY)+cumDelayDV:(1+delayY)+(sum(nc(cv,1:(dv)))-1);
%         predictorVector(:,indicesDV) = dPastValues(:,[1:delayDV+1],dv);
        predictorVector(:,indicesDV) = dPastValues(:,[1:delayDV],dv);
    end
    % Chooses best-model specific delay in MV for output i
    for mv = 1:m
        delayU = nb(cv,mv);
        cumDelayMV = sum(nb(cv,1:(mv-1)));
%         indicesMV = (1+indicesDV(end))+cumDelayMV+(mv-1):...
%                     (1+indicesDV(end))+(mv-1)+(sum(nb(cv,1:(mv))));
        % After changing models to not incluide u(k), activate below and
        % deactivate above
        indicesMV = (1+indicesDV(end))+cumDelayMV:(1+indicesDV(end))+(sum(nb(cv,1:(mv)))-1);
%         MVVector = zeros(nPopulation,delayU+1); % Change after new RF Model
        MVVector = zeros(nPopulation,delayU);
        % Calculate MV to be added to record
        computedMV = compute_MV_value(x,uLims,uPastValues,mv,m,...
                                        jAhead,N_u,kappaControl,...
                                        NUM_PSEUDO_COSTS);  
        MVVector(:,1) = computedMV;
        if delayU >= 2 % 1 Before Change to 2 after new RF Model
            MVVector(:,2:end) = uPastValues(:,[1:(delayU-1)],mv); %Works even if delayU = 0. After new RF Model, delayU >=1
        end
%         predictorVector = [predictorVector MVVector];
        predictorVector(:,indicesMV) = MVVector;
    end
    predictorArray(:,1:length(predictorVector(1,:)),cv) = predictorVector;
end
end