function [ PredictorMLStruct,delayMaxInTime] = Prepare_IO_Data( choice,tau_R,...
                                           na,nb,...
                                           IOBigSubset,...
                                           NameInputs,NameOutputs,...
                                           mlMethod)
%PREP_IO_Data Prepares Training & Testing Sets for MachineLearning
%   Detailed explanation goes here
[~,numInputs] = size(IOBigSubset(1).Inputs.TimeSeries);
[~,n] = size(IOBigSubset(1).Outputs.TimeSeries);
if (strcmp(mlMethod,'RF'))
    U = [];
    Y = [];
    % Concatenate sideways U (dv and mv undifferentiated, dv first)
    for u = 1:numInputs
        U = [U IOBigSubset(choice).Inputs.TimeSeries(:,u)];
    end
    % Concatenate sideways Y
    for y = 1:n
        Y = [Y IOBigSubset(choice).Outputs.TimeSeries(:,y)];
    end
    % I/O Time Series Delay Specification
    delayMaxInTimeU = max(nb)*tau_R;
    delayMaxInTimeY = max(na)*tau_R;
    delayMaxInTime = max(delayMaxInTimeY,delayMaxInTimeU);
    % Arrange BigData in useful way
    [InputDataU,InputDataY,predictorNames] = Arrange_IO_TimeSeries(U,Y,na,...
                                             nb,tau_R,delayMaxInTime,...
                                             NameInputs,NameOutputs);
    % Build "ARX" prediction set for each cv
    PredictorMLStruct = build_arx_rf_predSet(InputDataY,InputDataU,Y,...
                                  delayMaxInTime,na,predictorNames);
elseif (strcmp(mlMethod,'SS')||strcmp(mlMethod,'ARMAX'))
    U = IOBigSubset(choice).Inputs.TimeSeries(:,:);
    Y = IOBigSubset(choice).Outputs.TimeSeries(:,:);
    Ts = na;
    PredictorMLStruct = iddata(Y,U,Ts,'InputName',NameInputs','OutputName',NameOutputs');
    delayMaxInTime = -1; %bogey value
end                                       
                                       
end

