function [IOSubset] = generate_tT_subsets(IOBigSet, NameInputs, NameOutputs,...
                                            experiment, tau_R, numSamplesPerExp, dimsSystem,...
                                            na, nb, mlMethod)
%GENERATE_TT_SUBSETS Summary of this function goes here
%   Detailed explanation goes here
numOutputs = dimsSystem(1);
m = dimsSystem(2);
d = dimsSystem(3);
numInputs = d+m;
% for y = 1:numOutputs
%     IOSubset(y).InputData = [];
%     IOSubset(y).OutputData = [];
%     IOSubset(y).PredictorNames = {};
% end
% Prepare IO Data for model building
[PredictorMLStruct,garbage] = Prepare_IO_Data(IOBigSet,NameInputs,NameOutputs,...
                                             experiment,tau_R,numSamplesPerExp,...
                                             na,nb,mlMethod);
for y = 1:numOutputs
%    IOSubset(y).InputData = vertcat(IOSubset(y).InputData,PredictorMLStruct(y).InputTimeSeries); 
%    IOSubset(y).OutputData = vertcat(IOSubset(y).OutputData,PredictorMLStruct(y).OutputTimeSeries);
%    IOSubset(y).PredictorNames = PredictorMLStruct(y).PredictorNames;
    IOSubset(y).InputData = PredictorMLStruct(y).InputTimeSeries;
    IOSubset(y).OutputData = PredictorMLStruct(y).OutputTimeSeries;
    IOSubset(y).PredictorNames = PredictorMLStruct(y).PredictorNames;
end

end

