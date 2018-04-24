function [ IOData,delayMaxInTime] = Prepare_IO_Data( choice,numInputs,numOutputs,effectiveReactionTime,selectionParameters,...
                                           UPastValues,YPastValues,...
                                           BigData,...
                                           InputNames,OutputNames,...
                                           mlMethod)
%PREP_IO_Data Prepares Training & Testing Sets for MachineLearning
%   Detailed explanation goes here
if (strcmp(mlMethod,'RF'))
    U = [];
    Y = [];
    for u = 1:numInputs
        U = [U BigData(selectionParameters.p1,selectionParameters.p2,choice).inputs.signals.values(:,u)];
    end
    for y = 1:numOutputs
        Y = [Y BigData(selectionParameters.p1,selectionParameters.p2,choice).outputs(:,y)];
    end
    % I/O Time Series Delay Specification
    delayMaxInTimeU = max(UPastValues)*effectiveReactionTime;
    delayMaxInTimeY = max(YPastValues)*effectiveReactionTime;
    delayMaxInTime = max(delayMaxInTimeY,delayMaxInTimeU);
    % Arrange BigData in useful way
    [InputDataU,InputDataY,predictorNames] = Arrange_IO_TimeSeries(U,Y,UPastValues,...
                                             YPastValues,effectiveReactionTime,delayMaxInTime,...
                                             InputNames,OutputNames);

    for y = 1:numOutputs
        startIndexY = 0;
        endIndexY = 0;
        for k = 0:(y-1)
            if (k == 0)
                %
            else
                startIndexY = startIndexY+YPastValues(k);
            end
            endIndexY = endIndexY+YPastValues(k+1);
        end
        IOData(y).InputTimeSeries = [InputDataY(:,1+startIndexY:endIndexY) InputDataU];
        IOData(y).OutputTimeSeries = Y(1+delayMaxInTime:end,y);
        IOData(y).PredictorNames = predictorNames{y};
        IOData(y).startIndexY = startIndexY;
        IOData(y).endIndexY = endIndexY;
    end
elseif (strcmp(mlMethod,'SS')||strcmp(mlMethod,'ARMAX'))
    U = BigData(selectionParameters.p1,selectionParameters.p2,choice).inputs.signals.values(:,:);
    Y = BigData(selectionParameters.p1,selectionParameters.p2,choice).outputs(:,:);
    Ts = YPastValues;
    IOData = iddata(Y,U,Ts,'InputName',InputNames','OutputName',OutputNames');
    delayMaxInTime = -1; %bogey value
end
end

