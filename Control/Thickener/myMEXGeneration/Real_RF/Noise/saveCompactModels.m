clear;
clc;
%% Save Compact Models
nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
predictiveModelsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\PredictiveModels\';
% RF Specifics
numTreesInput = 100;
tau_RInput = 5;
naInput = 6;
nbInput = 6;
cvToGenerate = 2;
%%%%%%%%%%%%%%%%%%%%%%%
useDelayMV_CV = false;
noiseyData = true;
if noiseyData
    noiseStr = 'Noise_';
else
    noiseStr = '';
end

if useDelayMV_CV
    ioDTStr = 'ioDT_';
else
    ioDTStr = '';
end
%%%%%%%%%%%%%%%%
numOutputs = 3;
varStringRF = ['B' num2str(numTreesInput) ...
              '_k' num2str(tau_RInput) '_'...
              'na' num2str(naInput) '_nb' num2str(nbInput)];
% In the feature this may vary for each Y
for cv = 1:numOutputs
    strFile = ['RF_Y' num2str(cv) '_' typeOfData...
                ioDTStr noiseStr...
                varStringRF '_' dateTest '.mat'];
    load(strFile);
    numTrees(cv) = RF.NumTrained;
    p(cv) = numel(RF.PredictorNames);
    PredictorNames{cv,:} = RF.PredictorNames;
    RF_Compact = compact(RF);
    for i = 1:RF_Compact.NumTrained
        stringFile = ['RF\cRT_' num2str(cv) '_' num2str(i)];
        saveCompactModel(RF_Compact.Trained{i},stringFile);
    end
end
