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
for u = 1:numInputs
    d = nb(u);
    predictorNamesUBogey = {};
    for shifts = 1:d
       PredictorDataU = horzcat(PredictorDataU,U(1+delayMaxInTime-shifts*tau_R...
                            :numSamples-shifts*tau_R,u));
       predictorNamesUBogey{u,shifts} = [NameInputs{u} '_' num2str(shifts)]; 
    end
    predictorNamesU = [predictorNamesU predictorNamesUBogey{u,:}];
end
for y = 1:numOutputs
    d = na(y);
    for shifts = 1:d % Y does not regress on itself with no backward shift
       PredictorDataY = horzcat(PredictorDataY,Y(1+delayMaxInTime-shifts*tau_R...
                                :numSamples-shifts*tau_R,y));
       predictorNamesY{y,shifts} = [NameOutputs{y} '_' num2str(shifts)];
    end
    predictorNames{y} = [predictorNamesY{y,:} predictorNamesU];
end
end

