function [ PredictorMLStruct,delayMaxInTime] = Prepare_IO_Data( IOBigSet,...
                                                nameInputs, nameOutputs,...
                                                OLExperiment, tau_R, numSamplesPerExp,...
                                                na, nb,...
                                                mlMethod)
%PREP_IO_Data Prepares Training & Testing Sets for MachineLearning
%   Detailed explanation goes here
    [~,numInputs] = size(IOBigSet(1).Inputs.TimeSeries);
    [~,n] = size(IOBigSet(1).Outputs.TimeSeries);
    numOLExps = IOBigSet(OLExperiment).NumberOfOLExps;
    if (strcmp(mlMethod,'RF'))
        U = [];
        Y = [];
        % Concatenate sideways U (dv and mv undifferentiated, dv first)
        for u = 1:numInputs
            U = [U IOBigSet(OLExperiment).Inputs.TimeSeries(:,u)];
        end
        % Concatenate sideways Y
        for y = 1:n
            Y = [Y IOBigSet(OLExperiment).Outputs.TimeSeries(:,y)];
        end
        % I/O Time Series Delay Specification
        delayMaxInTimeU = max(nb)*tau_R;
        delayMaxInTimeY = max(na)*tau_R;
        delayMaxInTime = max(delayMaxInTimeY,delayMaxInTimeU);
        % Arrange BigData in useful way
        [InputDataU,InputDataY,predictorNames] = Arrange_IO_TimeSeries(U, Y,...
                                                        nameInputs, nameOutputs,...
                                                        tau_R, delayMaxInTime,na,nb,...
                                                        numOLExps, numSamplesPerExp);
        % Build "ARX" prediction set for each cv
        PredictorMLStruct = build_arx_rf_predSet( InputDataU, InputDataY, Y,...
                                            predictorNames,...
                                            delayMaxInTime, na,...
                                            numOLExps, numSamplesPerExp);
                                        
    elseif (strcmp(mlMethod,'SS')||strcmp(mlMethod,'ARMAX'))
        U = IOBigSet(OLExperiment).Inputs.TimeSeries(:,:);
        Y = IOBigSet(OLExperiment).Outputs.TimeSeries(:,:);
        Ts = na;
        PredictorMLStruct = iddata(Y,U,Ts,'InputName',nameInputs','OutputName',nameOutputs');
        delayMaxInTime = -1; %bogey value
    end                                       

end

