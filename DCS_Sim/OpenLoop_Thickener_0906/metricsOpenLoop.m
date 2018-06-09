clear all;
clc;
tic;
load('stepTestUF_SS_85_25.mat');
moveMeanWindow = 1e5;
bedLevelSoft = movmean(bedLevelSteps(:,:),moveMeanWindow,2);
CV = cat(3,torqueSteps,yieldStressSteps,Cp_uSteps,Cp_eSteps,bedLevelSoft);
[garbage1 garbage numCV] = size(CV);
opPointValue = [];
for i = 1:numCV
   opPointValue = [opPointValue CV(1,1,i)]; 
end
opPointValue = [opPointValue Q_uControl(1,1) gptControl(1,1)];
opPoint = opPointValue'*ones(1,options.simTime+1);
[numberOfSteps garbage] = size(torqueSteps);

% figure
% plot(bedLevelSteps(1,:))
% hold on
% plot(bedLevelSoft)
for i = 1:numCV
    linearCV(:,:,i) = CV(:,:,i)-ones(numberOfSteps,1)*opPoint(i,:);
end
for j = 1:numberOfSteps
    linearQ_u(j,:) = Q_uControl(j,:)-opPoint(numCV+1,1:end-1);
    linearGpt(j,:) = gptControl(j,:)-opPoint(numCV+2,1:end-1);
end
%% K_DC
K_DC = zeros(numCV,numberOfSteps);
for i = 1:numberOfSteps
    if length(options.stepSizes) == 4
        % If steps were UF
        for j = 1:numCV
            K_DC(j,i) = (CV(i,end,j)-opPoint(j,1))/(Q_uControl(i,end)-opPoint(numCV+1,1));
        end
    else
        for j = 1:numCV
            K_DC(j,i) = (CV(i,end,j)-opPoint(j,1))/(gptControl(i,end)-opPoint(numCV+2,1));
        end
    end
end
%% Delay
% Try with one with known and visible delay
delay = zeros(numCV,numberOfSteps);
startEstimateDelay = options.stepInitTime;
delayWindowSize = 5e5;
for i = 1:numCV
    if length(options.stepSizes) == 4
        delay(i,:)= finddelay(linearQ_u(:,startEstimateDelay:startEstimateDelay+delayWindowSize)',...
            linearCV(:,startEstimateDelay:startEstimateDelay+delayWindowSize,i)')/3600;
    else
        delay(i,:)= finddelay(linearGpt(:,startEstimateDelay:startEstimateDelay+delayWindowSize)',...
            linearCV(:,startEstimateDelay:startEstimateDelay+delayWindowSize,i)')/3600;
    end
end
%% Peak time
peakTime = zeros(numCV,numberOfSteps);
maxValue = zeros(numCV,numberOfSteps);
for i = 1:numCV
    for j = 1:numberOfSteps
        [maxFound I] = max(abs(linearCV(j,:,i)),[],2);
        peakTime(i,j) = I/3600;
        maxValue(i,j) = maxFound;
    end
end
%% Final Value
finalValue = zeros(numCV,numberOfSteps);
for i = 1:numCV
   finalValue(i,:) = CV(:,end,i)'; 
end
%% Settling time
settlingTime = zeros(numCV,numberOfSteps);
threshold = 0.01;
for i = 1:numCV
%     scaleFactor = eye(numberOfSteps);
%     for m = 1:numberOfSteps
%         scaleFactor(m,m) = 1./abs((CV(m,end,i)-CV(m,1,i)));
%     end
%     signalCentered = scaleFactor*abs((CV(:,:,i)-finalValue(i,:)'*ones(1,options.simTime+1)));
        signalCentered = abs((CV(:,:,i)-finalValue(i,:)'*ones(1,options.simTime+1)));
        finalThreshold = abs(finalValue(i,:)'*threshold*ones(1,options.simTime+1));
        compute = signalCentered-finalThreshold;
        for k = 1:numberOfSteps 
            for n = 0:options.simTime
                if (compute(k,options.simTime+1-n) >= 0)
                   settlingTime(i,k) = (options.simTime+1-n)/3600;
                   break;
                end
            end
        end
%     for k = 1:numberOfSteps 
%         for n = 0:options.simTime
%             if signalCentered >= threshold
%                settlingTime(i,k) = (options.simTime+1-n)/3600;
%                break;
%             end
%         end
%     end
end
%% Rise Time
riseTime = zeros(numCV,numberOfSteps);
threshold = 0.9;
for i = 1:numCV
    scaleFactor = eye(numberOfSteps);
    for m = 1:numberOfSteps
        scaleFactor(m,m) = 1./abs((CV(m,end,i)-CV(m,1,i)));
    end
    signalCentered = scaleFactor*abs((CV(:,:,i)-finalValue(i,:)'*ones(1,options.simTime+1)));
%     finalThreshold = abs(finalValue(i,:)'*(1-threshold)*ones(1,options.simTime+1));
    %finalThreshold = abs((1-threshold)*ones(numberOfSteps,options.simTime+1));
    %compute = signalCentered-finalThreshold;
    for k = 1:numberOfSteps 
        for n = 1:options.simTime+1
            if (signalCentered(k,n) <= (1-threshold))
               riseTime(i,k) = (n)/3600;
               break;
            end
        end
    end
end
toc;
%% Save
results = cat(3,finalValue,maxValue,K_DC,delay,peakTime,riseTime,settlingTime);
openLoopMeasurements(opPointIndex,stepTestIndex).measurements = results;
openLoopMeasurements(opPointIndex,stepTestIndex).opPoint = opPointValue;
disp('Se terminaron los cálculos de')
disp(opPointIndex);
disp(stepTestIndex);