function [ predictorDataU,predictorDataY,predictorNames ] = ml_arrange_IO_timeSeries( uArray,yArray,...
                                                          nameInputs,nameOutputs,...
                                                          tau_R,delayMaxInTime,na,nb,...
                                                          numOLExps,numSamplesPerExp,...
                                                          delayMV_CV)
%PREP_IO_DATA Arranges IO TimeSeries for Machine Learning Training&Testing
%   Detailed explanation goes here
[~, numInputs] = size(uArray); % Modify for function
[garbage, numOutputs] = size(yArray); % garbage should = numSamples
predictorDataU = [];
predictorDataY = [];
predictorNamesU = {};
deadTimeMax = max(max(delayMV_CV));
% Arrange and shift time series of Y accordingly
% For CV, no deadTime arrangement should be done (for the time being, maybe
% autocorrelation, but not for now)
[predictorDataY,predictorNamesY] = ml_generate_predictors(yArray, nameOutputs, numOutputs,...
                                                    tau_R, delayMaxInTime, na,...
                                                    numSamplesPerExp, numOLExps,...
                                                    zeros(numOutputs,1),deadTimeMax);
% Arrange and shift time series of U accordingly
for cv = 1:numOutputs
    ioDeadTime = delayMV_CV(cv,:);
    [predictorDataU_CV,predictorNamesU] = ml_generate_predictors(uArray, nameInputs, numInputs,...
                                                        tau_R, delayMaxInTime, nb,...
                                                        numSamplesPerExp, numOLExps,...
                                                        ioDeadTime,deadTimeMax);
    predictorDataU = [predictorDataU predictorDataU_CV];
    
end

% Generate predictor names
predictorNames = ml_generate_predictorNames(predictorNamesU,predictorNamesY,...
                                         na,nb);

end



% % % % function [ predictorDataU,predictorDataY,predictorNames ] = ml_arrange_IO_timeSeries( uArray,yArray,...
% % % %                                                           nameInputs,nameOutputs,...
% % % %                                                           tau_R,delayMaxInTime,na,nb,...
% % % %                                                           numOLExps,numSamplesPerExp)
% % % % %PREP_IO_DATA Arranges IO TimeSeries for Machine Learning Training&Testing
% % % % %   Detailed explanation goes here
% % % % [~, numInputs] = size(uArray); % Modify for function
% % % % [garbage, numOutputs] = size(yArray); % garbage should = numSamples
% % % % predictorDataU = [];
% % % % predictorDataY = [];
% % % % predictorNamesU = {};
% % % % 
% % % % % Arrange and shift time series of Y accordingly
% % % % [predictorDataY,predictorNamesY] = ml_generate_predictors(yArray, nameOutputs, numOutputs,...
% % % %                                                     tau_R, delayMaxInTime, na,...
% % % %                                                     numSamplesPerExp, numOLExps);
% % % % % Arrange and shift time series of U accordingly
% % % % [predictorDataU,predictorNamesU] = ml_generate_predictors(uArray, nameInputs, numInputs,...
% % % %                                                     tau_R, delayMaxInTime, nb,...
% % % %                                                     numSamplesPerExp, numOLExps);
% % % % 
% % % % % Generate predictor names
% % % % predictorNames = ml_generate_predictorNames(predictorNamesU,predictorNamesY,...
% % % %                                          na,nb);
% % % % 
% % % % end

