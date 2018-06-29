function [trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,testBigSet,...
                                                                            SimResults,controlParamsStruct,...
                                                                            mlParamsStruct)
% ML_GENERATE_TT_SETS Generate training & testing data sets for thickener
% Inputs
%   - trainingBigSet: empty struct that will contain training data
%   - testBigSet: empty struct that will contain training data
%   - SimResults: struct containing all time series data for thickener
%   - controlParamsStruct: struct containing parameters of system
%   - trainUpTo: sample index that divides training/testing

n = controlParamsStruct.dimsSystem(1);
m = controlParamsStruct.dimsSystem(2);
d = controlParamsStruct.dimsSystem(3);

trainUpTo = mlParamsStruct.trainingSamples;
testUpTo = mlParamsStruct.limitTestDataIndex;
for cv = 1:n
   controlParamsStruct.nameOutputs{cv} = SimResults.CV(cv).Name;
   trainingBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(1:trainUpTo)';
   testBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(trainUpTo+1:testUpTo)';%:end if data is good
end
for dv = 1:d
    controlParamsStruct.nameInputs{dv} = SimResults.DV(dv).Name;
    trainingBigSet.Inputs.TimeSeries(:,dv) = SimResults.DV(dv).GroupedTimeSeries(1:trainUpTo)';
    testBigSet.Inputs.TimeSeries(:,dv)= SimResults.DV(dv).GroupedTimeSeries(trainUpTo+1:testUpTo);
end
for mv = 1:m
    controlParamsStruct.nameInputs{mv+d} = SimResults.MV(mv).Name;
    trainingBigSet.Inputs.TimeSeries(:,mv+d) = SimResults.MV(mv).GroupedTimeSeries(1:trainUpTo)';
    testBigSet.Inputs.TimeSeries(:,mv+d) = SimResults.MV(mv).GroupedTimeSeries(trainUpTo+1:testUpTo)';
end
% Backward compatibility
trainingBigSet.NumberOfOLExps = 1;
testBigSet.NumberOfOLExps = 1;

% n = controlParamsStruct.dimsSystem(1);
% m = controlParamsStruct.dimsSystem(2);
% d = controlParamsStruct.dimsSystem(3);
% for cv = 1:n
%    controlParamsStruct.nameOutputs{cv} = SimResults.CV(cv).Name;
%    trainingBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(1:trainUpTo)';
%    testBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(trainUpTo+1:end)';
% end
% for dv = 1:d
%     controlParamsStruct.nameInputs{dv} = SimResults.DV(dv).Name;
%     trainingBigSet.Inputs.TimeSeries(:,dv) = SimResults.DV(dv).GroupedTimeSeries(1:trainUpTo)';
%     testBigSet.Inputs.TimeSeries(:,dv)= SimResults.DV(dv).GroupedTimeSeries(trainUpTo+1:end);
% end
% for mv = 1:m
%     controlParamsStruct.nameInputs{mv+d} = SimResults.MV(mv).Name;
%     trainingBigSet.Inputs.TimeSeries(:,mv+d) = SimResults.MV(mv).GroupedTimeSeries(1:trainUpTo)';
%     testBigSet.Inputs.TimeSeries(:,mv+d) = SimResults.MV(mv).GroupedTimeSeries(trainUpTo+1:end)';
% end
% % Backward compatibility
% trainingBigSet.NumberOfOLExps = 1;
% testBigSet.NumberOfOLExps = 1;
end