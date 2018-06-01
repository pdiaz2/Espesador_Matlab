function [ PredictorDataU,PredictorDataY,predictorNames ] = Arrange_IO_TimeSeries( U,Y,...
                                                                                  na,nb,tau_R,delayMaxInTime,...
                                                                                  NameInputs,NameOutputs)
%PREP_IO_DATA Arranges IO TimeSeries for Machine Learning Training&Testing
%   Detailed explanation goes here
[numSamples, numInputs] = size(U); % Modify for function
[garbage, numOutputs] = size(Y); % garbage should = numSamples
PredictorDataU = [];
PredictorDataY = [];
predictorNamesU = {};
% Arrange and shift time series of U accordingly
[PredictorDataU,predictorNamesU] = shift_time_series(numInputs, nb, U,...
                                                    delayMaxInTime, NameInputs,...
                                                    tau_R,numSamples);
% Arrange and shift time series of Y accordingly
[PredictorDataY,predictorNamesY] = shift_time_series(numOutputs, na, Y,...
                                                    delayMaxInTime, NameOutputs,...
                                                    tau_R,numSamples);
% Generate predictor names
predictorNames = generate_predictorNames(predictorNamesU,predictorNamesY,...
                                         na,nb);

end

