function [ InputDataU,InputDataY,predictorNames ] = Arrange_IO_TimeSeries( U,Y,UPastValues,YPastValues,effectiveReactionTime,delayMaxInTime,...
                                     InputNames,OutputNames)
%PREP_IO_DATA Arranges IO TimeSeries for Machine Learning Training&Testing
%   Detailed explanation goes here
[numSamples, numInputs] = size(U); % Modify for function
[garbage, numOutputs] = size(Y); % garbage should = numSamples
InputDataU = [];
InputDataY = [];
predictorNamesU = {};
for u = 1:numInputs
    d = UPastValues(u);
    predictorNamesUBogey = {};
    for shifts = 0:d
       InputDataU = horzcat(InputDataU,U(1+delayMaxInTime-shifts*effectiveReactionTime...
           :numSamples-shifts*effectiveReactionTime,u));
       predictorNamesUBogey{u,1+shifts} = [InputNames{u} '_' num2str(shifts)]; 
    end
    predictorNamesU = [predictorNamesU predictorNamesUBogey{u,:}];
end
for y = 1:numOutputs
    d = YPastValues(y);
    for shifts = 1:d % Y does not regress on itself with no backward shift
       InputDataY = horzcat(InputDataY,Y(1+delayMaxInTime-shifts*effectiveReactionTime...
           :numSamples-shifts*effectiveReactionTime,y));
       predictorNamesY{y,1+(shifts-1)} = [OutputNames{y} '_' num2str(shifts)];
    end
    predictorNames{y} = [predictorNamesY{y,:} predictorNamesU];
end
end

