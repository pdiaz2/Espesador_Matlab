function [SimResultsStruct] = ml_downsampling(SimResultsStruct,controlParamsStruct,typeOfDS)

n = controlParamsStruct.dimsSystem(1);
m = controlParamsStruct.dimsSystem(2);
d = controlParamsStruct.dimsSystem(3);
switch typeOfDS
    case 'd'
        for cv = 1:n
           SimResultsStruct.CV(cv).GroupedTimeSeries = downsample(...
                                                        SimResultsStruct.CV(cv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
        for dv = 1:d
            SimResultsStruct.DV(dv).GroupedTimeSeries = downsample(...
                                                        SimResultsStruct.DV(dv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
        for mv = 1:m
            SimResultsStruct.MV(mv).GroupedTimeSeries = downsample(...
                                                        SimResultsStruct.MV(mv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
    case 'm'
        % Don't use!!!!!
        for cv = 1:n
           SimResultsStruct.CV(cv).GroupedTimeSeries = ml_group_time_series(...
                                                        SimResultsStruct.CV(cv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
        for dv = 1:d
            SimResultsStruct.DV(dv).GroupedTimeSeries = ml_group_time_series(...
                                                        SimResultsStruct.DV(dv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
        for mv = 1:m
            SimResultsStruct.MV(mv).GroupedTimeSeries = ml_group_time_series(...
                                                        SimResultsStruct.MV(mv).GroupedTimeSeries,...
                                                        controlParamsStruct.tau_R);
        end
end