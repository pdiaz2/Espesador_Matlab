%% Filtering
BigData.negFilter = zeros(numVars,numSamples);
BigData.gradFilter = zeros(numVars,numSamples);
BigData.nanFilter = zeros(numVars,numSamples);
BigData.impossibleFilter = zeros(numVars,numSamples);
BigData.fillOutliers = zeros(numVars,numSamples);
BigData.epsilonHigh = [5 5 1 5 0.2 1 10]'; % Different epsilons for different variables
BigData.epsilonLow = [5 5 1 5 0.2 1 10]'; % Different epsilons for different variables
BigData.threshold = [1 0.1 1 0.5 0.2 0.2 5]'; % Different thresholds for different variables
BigData.HighLimit = [100 100 12 150 3 20 400]';
BigData.LowLimit = zeros(1,numVars)';
BigData.mean = zeros(1,numVars)';
BigData.median = zeros(1,numVars)';
BigData.std = zeros(1,numVars)';
BigData.mad = zeros(1,numVars)';
BigData.thresholdMAD = zeros(1,numVars)';
BigData.numNaNs = zeros(1,numVars)';
BigData.numOutliers = zeros(1,numVars)';

% We choose median as the statistic on which to compute detect outliers
%% My method
for var = 1:numVars
    for k = 1:numSamples
        % Negative filtering
        if BigData.RawData(var,k) < 0
            BigData.negFilter(var,k) = 1;
        end
        % NaN Filtering Out
        if isnan(BigData.RawData(var,k))
            BigData.negFilter(var,k) = 1;
        end
        % Grad filtering
        if k == 1
            grad = 0;
        else
            grad = abs(BigData.RawData(var,k)-BigData.RawData(var,k-1));
        end
        if grad > BigData.threshold(var)
            BigData.negFilter(var,k) = 1;
        end
        % Impossible Values
        diffHigh = BigData.RawData(var,k)-(BigData.HighLimit(var)-BigData.epsilonHigh(var));
        diffLow = BigData.RawData(var,k)-(BigData.LowLimit(var)+BigData.epsilonLow(var));
        if (diffHigh >= 0)|| (diffLow <= 0)
            BigData.impossibleFilter(var,k) = 1;
        end
    end
    
end
%% Other methods - Statistics

for var = 1:numVars
    BigData.mean(var) = mean(BigData.RawData(var,:));
    BigData.std(var) = std(BigData.RawData(var,:));
    BigData.median(var) = median(BigData.RawData(var,:));
    BigData.mad(var) = mad(BigData.RawData(var,:));
    BigData.thresholdMAD(var) = -1/(sqrt(2)*erfcinv(3/2))*BigData.mad(var);
    BigData.numNaNs(var) = sum(double(ismissing(BigData.RawData(var,:))));
    BigData.numOutliers(var) = sum(double(isoutlier(BigData.RawData(var,:),'movmedian',60)));
end
[BigData.median BigData.mad BigData.thresholdMAD]
% Looking at graphs and statistics
% This shows there are some variables with too much outlier or noise.
% Cp_u, Underflow and specially Feedflow Rate 
% We will decrease the threshold factor according to each variable
BigData.thresholdFactorLocal = [3 1 1 1 2 2 1];
BigData.thresholdFactorGlobal = [3 2.1 3 2.5 1.5 2 0.2];
BigData.PreProcessed = zeros(numVars,numSamples);
for var = 1:numVars
    % Replace NaNs with previous Value
    BigData.PreProcessed(var,:) = fillmissing(BigData.RawData(var,:),'previous');
    % Replace Outliers (interpolate)
    BigData.PreProcessed(var,:) = filloutliers(BigData.PreProcessed(var,:),'linear','movmedian',60,...
    'ThresholdFactor',BigData.thresholdFactorLocal(var));
    BigData.PreProcessed(var,:) = filloutliers(BigData.PreProcessed(var,:),'linear','median',...
        'ThresholdFactor',BigData.thresholdFactorGlobal(var));
    % Smooth Data
    BigData.PreProcessed(var,:) = smoothdata(BigData.PreProcessed(var,:),'gaussian',60);
end
        % Fill Outliers

%     BigData.fillOutliers(var,:) = fillOutliers(BigData.RawData(var,:),'linear','movmean',60);
%% Final Filtering
numVars = length(BigData.varsIndex);
[numSamples garbage] = size(BigData.RawData');
BigData.goodValues = zeros(numVars,numSamples);
for var = 1:numVars
    for k = 1:numSamples
        filter = BigData.nanFilter(var,k)+BigData.negFilter(var,k)+BigData.gradFilter(var,k)+BigData.impossibleFilter(var,k);
        if filter == 0
            BigData.goodValues(var,k) = 1;
        else
        
        end
    end
end
BigData.PreProcessedData = zeros(numVars,numSamples);
for var = 1:numVars
    for k = 1:numSamples
        if BigData.goodValues(var,k) == 1
            BigData.PreProcessedData(var,k) = BigData.RawData(var,k);
        else
            BigData.PreProcessedData(var,k) = NaN; 
        end
    end
end
for i = 1:numVars
    figure
    plot(BigData.RawData(i,:))
    hold on
    plot(BigData.PreProcessedData(i,:))
    plot(BigData.PreProcessed(i,:))
    legend({[BigData.varsNames{i} ' Raw'],[BigData.varsNames{i} ' Personal'],...
        [BigData.varsNames{i} ' Matlab']})
    hold off
end
matfileName = ['BigData_' month '.mat'];
save(matfileName,'BigData');