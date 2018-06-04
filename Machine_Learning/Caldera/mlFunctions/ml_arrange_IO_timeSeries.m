function [ predictorDataU,predictorDataY,predictorNames ] = ml_arrange_IO_timeSeries( uArray,yArray,...
                                                          nameInputs,nameOutputs,...
                                                          tau_R,delayMaxInTime,na,nb,...
                                                          numOLExps,numSamplesPerExp)
%PREP_IO_DATA Arranges IO TimeSeries for Machine Learning Training&Testing
%   Detailed explanation goes here
[~, numInputs] = size(uArray); % Modify for function
[garbage, numOutputs] = size(yArray); % garbage should = numSamples
predictorDataU = [];
predictorDataY = [];
predictorNamesU = {};

% Arrange and shift time series of Y accordingly
[predictorDataY,predictorNamesY] = shift_time_series(yArray, nameOutputs, numOutputs,...
                                                    tau_R, delayMaxInTime, na,...
                                                    numSamplesPerExp, numOLExps);
% Arrange and shift time series of U accordingly
[predictorDataU,predictorNamesU] = shift_time_series(uArray, nameInputs, numInputs,...
                                                    tau_R, delayMaxInTime, nb,...
                                                    numSamplesPerExp, numOLExps);

% Generate predictor names
predictorNames = generate_predictorNames(predictorNamesU,predictorNamesY,...
                                         na,nb);

end

