function [ TrainSetStruct, TestSetStruct, NameInputs, NameOutputs ] = generate_tT_sets( TrainSetStruct, TestSetStruct,...
                                                        RawDataStruct,dataTraining,...
                                                        NameInputs,NameOutputs,...
                                                        numSubSets, selectionParametersStruct,testBatch,...
                                                        dimsSystem)
%GENERATE_T_SET Arranges input data in useful form for ML
n = dimsSystem(1);
m = dimsSystem(2);
d = dimsSystem(3);
%   Detailed explanation goes here
for ns = 1:numSubSets
    tSets = dataTraining(ns).subSetsIndex;
    % Accumulate cv for all subsets combinations
    for cv = 1:n
        varAllSubsets = [];
        for tS = 1:length(tSets)
            choice = tSets(tS);
            varAllSubsets = vertcat(varAllSubsets(:),...
                   RawDataStruct(selectionParametersStruct.p1,selectionParametersStruct.p2,...
                   choice).outputs(:,cv));
        end
        NameOutputs{cv} = NameOutputs{cv};% Remove after possibly
        TrainSetStruct(ns).Outputs.TimeSeries(:,cv)  = varAllSubsets(:);
        TestSetStruct(1).Outputs.TimeSeries(:,cv) = RawDataStruct(selectionParametersStruct.p1,selectionParametersStruct.p2,testBatch)...
                                            .outputs(:,cv);
    end
    % Accumulate dv for all subsets
    for dv = 1:d
        varAllSubsets = [];
        for tS = 1:length(tSets)
            choice = tSets(tS);
            varAllSubsets = vertcat(varAllSubsets(:),...
                   RawDataStruct(selectionParametersStruct.p1,selectionParametersStruct.p2,choice).inputs.signals.values(:,dv));
        end
        NameInputs{dv} = NameInputs{dv};% Remove after possibly
        TrainSetStruct(ns).Inputs.TimeSeries(:,dv)  = varAllSubsets(:);
        TestSetStruct(1).Inputs.TimeSeries(:,dv) = RawDataStruct(selectionParametersStruct.p1,...
                                             selectionParametersStruct.p2,testBatch).inputs.signals.values(:,dv);
    end
    for mv = 1:m
        varAllSubsets = [];
        for tS = 1:length(tSets)
            choice = tSets(tS);
            varAllSubsets = vertcat(varAllSubsets(:),...
                   RawDataStruct(selectionParametersStruct.p1,selectionParametersStruct.p2,choice).inputs.signals.values(:,mv+d));
        end
        NameInputs{mv+d} = NameInputs{mv+d}; % Remove after possibly
        TrainSetStruct(ns).Inputs.TimeSeries(:,mv+d)  = varAllSubsets(:);
        TestSetStruct(1).Inputs.TimeSeries(:,mv+d) = RawDataStruct(selectionParametersStruct.p1,...
                                             selectionParametersStruct.p2,testBatch).inputs.signals.values(:,mv);
    end
end

end

