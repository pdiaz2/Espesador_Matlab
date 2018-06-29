function [ SimResultsPPStruct] = data_preprocessing(SimResultsRawStruct,lpFilt)
%DATA_PREPROCESSING Summary of this function goes here
%   Detailed explanation goes here
numCV = size(SimResultsRawStruct.CV,2);
numMV = size(SimResultsRawStruct.MV,2);
numDV = size(SimResultsRawStruct.DV,2);
%% LP-Filt
for cv = 1:numCV
    SimResultsPPStruct.CV(cv).TimeSeries = dp_lowpass_filter(...
                                        SimResultsRawStruct.CV(cv).TimeSeries,...
                                        lpFilt);
end
for mv = 1:numMV
    SimResultsPPStruct.MV(mv).TimeSeries = dp_lowpass_filter(...
                                        SimResultsRawStruct.MV(mv).TimeSeries,...
                                        lpFilt);
end
for dv = 1:numDV
    SimResultsPPStruct.DV(dv).TimeSeries = dp_lowpass_filter(...
                                        SimResultsRawStruct.DV(dv).TimeSeries,...
                                        lpFilt);
end
SimResultsPPStruct.compensatePhase = finddelay(SimResultsRawStruct.CV(2).TimeSeries(floor(277*3600):floor(279*3600)),...
                                              SimResultsPPStruct.CV(2).TimeSeries(floor(277*3600):floor(279*3600)));
%% Reducing Time-Sampling (Lp Filt and Downsampling)
SimResultsPPStruct.groupBy = SimResultsRawStruct.groupBy;
SimResultsPPStruct = dp_group_time_series(SimResultsPPStruct);
%% Delay Estimation
estDelayWindowMV = 262*3600/60:264*3600/60;
estDelayWindowCV = 262*3600/60:274*3600/60;
SimResultsPPStruct.delayMV_CV = -1*ones(3,5);
% Fliped because im stupid
for cv = 1:3
    for mv = 1:2
        SimResultsPPStruct.delayMV_CV(cv,3+mv) =  finddelay(SimResultsPPStruct.MV(mv).GroupedTimeSeries(estDelayWindowMV),...
                                    SimResultsPPStruct.CV(cv).GroupedTimeSeries(estDelayWindowCV));
    end    
end
for cv = 1:3
    % Assuming residence time for feed disturbances
    for dv = 1:3
        SimResultsPPStruct.delayMV_CV(cv,dv) = SimResultsPPStruct.delayMV_CV(3,5);
    end
end

% for cv = 4:7
%     SimResultsPPStruct.delayMV_CV(cv,:) = SimResultsPPStruct.delayMV_CV(3,:);
% end
end