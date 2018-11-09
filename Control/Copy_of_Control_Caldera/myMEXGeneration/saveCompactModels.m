%% Save Compact Models
numOutputs = 3;
% In the feature this may vary for each Y
for y = 1:numOutputs
    strFile = ['RF_Y' num2str(y) '_0811.mat'];
    load(strFile);
    numTrees(y) = RF.NumTrained;
    p(y) = numel(RF.PredictorNames);
    PredictorNames{y,:} = RF.PredictorNames;
    RF_Compact = compact(RF);
    for i = 1:RF_Compact.NumTrained
        stringFile = ['RF\cRT_' num2str(y) '_' num2str(i)];
        saveCompactModel(RF_Compact.Trained{i},stringFile);
    end
end
