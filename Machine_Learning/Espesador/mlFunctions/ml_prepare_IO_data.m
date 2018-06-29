function [ predictorMLStruct,delayMaxInTime] = ml_prepare_IO_data( IOBigSet,...
                                                nameInputs, nameOutputs,...
                                                OLExperiment, tau_R, numSamplesPerExp,...
                                                na, nb,...
                                                mlParamsStruct)
% PREP_IO_Data Prepares Training & Testing Sets for MachineLearning
%   Detailed explanation goes here
    mlMethod = mlParamsStruct.mlMethod;
    delayMV_CV = mlParamsStruct.delayMV_CV;
    [~,numInputs] = size(IOBigSet(1).Inputs.TimeSeries);
    [~,n] = size(IOBigSet(1).Outputs.TimeSeries);
    numOLExps = IOBigSet(OLExperiment).NumberOfOLExps;
    if (strcmp(mlMethod,'RF'))
        U = [];
        Y = [];
%         Concatenate sideways U (dv and mv undifferentiated, dv first)
        for u = 1:numInputs
            U = [U IOBigSet(OLExperiment).Inputs.TimeSeries(:,u)];
        end
%         Concatenate sideways Y
        for y = 1:n
            Y = [Y IOBigSet(OLExperiment).Outputs.TimeSeries(:,y)];
        end
%         I/O Time Series Delay Specification
        delayMaxInTimeU = max(nb);
        delayMaxInTimeY = max(na);
        delayMaxInTime = max(delayMaxInTimeY,delayMaxInTimeU);
%         Arrange BigData in useful way
        [InputDataU,InputDataY,predictorNames] = ml_arrange_IO_timeSeries(U, Y,...
                                                        nameInputs, nameOutputs,...
                                                        tau_R, delayMaxInTime,na,nb,...
                                                        numOLExps, numSamplesPerExp,...
                                                        delayMV_CV);
%         Build "ARX" prediction set for each cv
        predictorMLStruct = ml_build_arx_rf_predSet( InputDataU, InputDataY, Y,...
                                            predictorNames,...
                                            delayMaxInTime, na,...
                                            numOLExps, numSamplesPerExp,...
                                            delayMV_CV);
                                        
    elseif (strcmp(mlMethod,'SS')||strcmp(mlMethod,'ARMAX'))
%         Specify simulation Time sampling
%         DtSim = na;
% % %         % Downsample time series by tau_R/DtSim samples
% % % %         U = downsample(IOBigSet(OLExperiment).Inputs.TimeSeries(:,:),tau_R/DtSim);
% % % %         Y = downsample(IOBigSet(OLExperiment).Outputs.TimeSeries(:,:),tau_R/DtSim);
%         U = downsample(IOBigSet(OLExperiment).Inputs.TimeSeries(:,:),tau_R);
%         Y = downsample(IOBigSet(OLExperiment).Outputs.TimeSeries(:,:),tau_R);
        U = IOBigSet(OLExperiment).Inputs.TimeSeries(:,:);
        Y = IOBigSet(OLExperiment).Outputs.TimeSeries(:,:);
%         [] = ml_arrange_dead_time(timeSeries,deadTimeMV_CV)
        Ts = tau_R;
        predictorMLStruct = iddata(Y,U,Ts,'InputName',nameInputs','OutputName',nameOutputs');
        delayMaxInTime = -1; %bogey value
    end                                       

end


% 
% function [ predictorMLStruct,delayMaxInTime] = ml_prepare_IO_data( IOBigSet,...
%                                                 nameInputs, nameOutputs,...
%                                                 OLExperiment, tau_R, numSamplesPerExp,...
%                                                 na, nb,...
%                                                 mlMethod)
% %PREP_IO_Data Prepares Training & Testing Sets for MachineLearning
% %   Detailed explanation goes here
%     [~,numInputs] = size(IOBigSet(1).Inputs.TimeSeries);
%     [~,n] = size(IOBigSet(1).Outputs.TimeSeries);
%     numOLExps = IOBigSet(OLExperiment).NumberOfOLExps;
%     if (strcmp(mlMethod,'RF'))
%         U = [];
%         Y = [];
%         % Concatenate sideways U (dv and mv undifferentiated, dv first)
%         for u = 1:numInputs
%             U = [U IOBigSet(OLExperiment).Inputs.TimeSeries(:,u)];
%         end
%         % Concatenate sideways Y
%         for y = 1:n
%             Y = [Y IOBigSet(OLExperiment).Outputs.TimeSeries(:,y)];
%         end
%         % I/O Time Series Delay Specification
%         delayMaxInTimeU = max(nb)*tau_R;
%         delayMaxInTimeY = max(na)*tau_R;
%         delayMaxInTime = max(delayMaxInTimeY,delayMaxInTimeU);
%         % Arrange BigData in useful way
%         [InputDataU,InputDataY,predictorNames] = ml_arrange_IO_timeSeries(U, Y,...
%                                                         nameInputs, nameOutputs,...
%                                                         tau_R, delayMaxInTime,na,nb,...
%                                                         numOLExps, numSamplesPerExp);
%         % Build "ARX" prediction set for each cv
%         predictorMLStruct = ml_build_arx_rf_predSet( InputDataU, InputDataY, Y,...
%                                             predictorNames,...
%                                             delayMaxInTime, na,...
%                                             numOLExps, numSamplesPerExp);
%                                         
%     elseif (strcmp(mlMethod,'SS')||strcmp(mlMethod,'ARMAX'))
%         % Specify simulation Time sampling
% %         DtSim = na;
% %         % Downsample time series by tau_R/DtSim samples
% %         U = downsample(IOBigSet(OLExperiment).Inputs.TimeSeries(:,:),tau_R/DtSim);
% %         Y = downsample(IOBigSet(OLExperiment).Outputs.TimeSeries(:,:),tau_R/DtSim);
%         U = downsample(IOBigSet(OLExperiment).Inputs.TimeSeries(:,:),tau_R);
%         Y = downsample(IOBigSet(OLExperiment).Outputs.TimeSeries(:,:),tau_R);
%         Ts = tau_R;
%         predictorMLStruct = iddata(Y,U,Ts,'InputName',nameInputs','OutputName',nameOutputs');
%         delayMaxInTime = -1; %bogey value
%     end                                       
% 
% end
% 
