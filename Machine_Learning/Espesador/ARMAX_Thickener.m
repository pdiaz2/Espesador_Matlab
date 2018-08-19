clear all;
close all;
clc;
%% Test Plant Specifics

nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
%%%%%%%%%%%%%%%%%%%%%
predictiveModelsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\PredictiveModels\';
resultsMLPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsML\';
%%%%%%%%%%%%%
saveToMatFile = false;
saveModelToMatFile = true;
%%%%%%%%%%%%%%%%
cvToGenerate = 2;
selectedCV = [1 2 3];
selectedMV = [1 2];
selectedDV = [1 2];
%%%%%%%%%%%%%%%%%%%%%
optimizeMLHyperparameters = false;
mlMethod = 'ARMAX';

% Crucial parameters for system identification
N_y = 20;
tau_R = 5;%5
trainVSVal = 0.85;
useDelayMV_CV = false;
noiseyData = true;
generateOne = true;

seed = rng(1231231); % For reproducibility (should look into this after)
%% Bool Handling
if generateOne
    na = 4;
    nb = 4;
    nc = 3;
    nk = 2;
    offsetChoice = 1;
    focusChoice = 1;
else
   waveVector = 1:4;
   cvToGenerate = -1; %Not used in this case
end

if noiseyData
    noiseStr = 'Noise_';
else
    noiseStr = '';
end
matFileName = [nameDataset typeOfData noiseStr dateTest '_BF.mat'];
load(matFileName);
% load('testScriptML.mat');


%% Plant specifics
MachineLearningData = ml_pick_variables(selectedCV,selectedMV,selectedDV,SimResults);
n = length(MachineLearningData.CV);
m = length(MachineLearningData.MV);
d = length(MachineLearningData.DV);
numInputs = d+m;
numOutputs = n;
Dt = 1;

%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = tau_R;
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
    switch typeOfData
        case 'Sim_'
            % Values obtained by inspection of open loop tests on simulator
%             controlParamsStruct.delayMV_CV = floor([6.5*60 6.5*60 0 4.4*60;
%                                                     6.5*60 6.5/60 0 6.5*60;
%                                                     3*60 3*60 0 0.5*60]/controlParamsStruct.tau_R);
%             controlParamsStruct.delayMV_CV = floor([10 10 0 10;
%                                                     10 10 0 10;
%                                                     10 10 0 10]/controlParamsStruct.tau_R);
            controlParamsStruct.delayMV_CV = zeros(n,numInputs);
        case 'Real_'
            controlParamsStruct.delayMV_CV = floor(MachineLearningData.delayMV_CV/controlParamsStruct.tau_R);
    end
    
    ioDTStr = 'ioDT_';
else
    controlParamsStruct.delayMV_CV = zeros(n,numInputs);
    ioDTStr = '';
end
%% DownSampling for tau_R
MachineLearningData = ml_downsampling(MachineLearningData,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(MachineLearningData.CV(1).GroupedTimeSeries);
nSamples = controlParamsStruct.nSamples;

%% Machine Learning - Structural Parameters
mlParamsStruct.trainingParamsArray = {'estimate','I_DC?','O_DC?',false,'off','Focus?',true};
mlParamsStruct.offsetOptions = {'NA','R_DC';'NA','R_DC'};
mlParamsStruct.focusOptions = {'prediction','simulation'};
mlParamsStruct.optimizeParams.maxMinLS = 40;
mlParamsStruct.optimizeParams.minLS = optimizableVariable('minLS',...
                                        [1,mlParamsStruct.optimizeParams.maxMinLS],...
                                        'Type','integer');
mlParamsStruct.optimizeParams.hyperparametersRF = mlParamsStruct.optimizeParams.minLS;
% Specific for ARMAX
mlParamsStruct.NA = [6,12,36,60];
mlParamsStruct.NB = [5,10,15,30,60];
mlParamsStruct.NC = [0 2 5 8];
mlParamsStruct.NK = [0 1];

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(trainVSVal*nSamples);
% Modification by force because of bad data in the end
if strcmp(typeOfData,'Real_')
    mlParamsStruct.limitTestDataIndex = 24177;
else
    mlParamsStruct.limitTestDataIndex = controlParamsStruct.nSamples;
end
mlParamsStruct.validationSamples = mlParamsStruct.limitTestDataIndex -...
                                mlParamsStruct.trainingSamples;
mlParamsStruct.delayMV_CV = controlParamsStruct.delayMV_CV;
mlParamsStruct.mlMethod = mlMethod;
mlParamsStruct.generateOneBool = generateOne;
mlParamsStruct.cvToGenerate = cvToGenerate;
%% Training & Testing Set
testBigSet = struct;
trainingBigSet = struct;
% SimResults.CV(7).GroupedTimeSeries = fillmissing(SimResults.CV(7).GroupedTimeSeries,'nearest');
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    MachineLearningData,...
                                                                    controlParamsStruct,...
                                                                    mlParamsStruct);
testBatch = 8; %Backward Compatibility
if generateOne
    mlParamsStruct.trainingParamsArray{2} = mlParamsStruct.offsetOptions{1,offsetChoice};
    mlParamsStruct.trainingParamsArray{3} = mlParamsStruct.offsetOptions{2,offsetChoice};
    mlParamsStruct.trainingParamsArray{6} = mlParamsStruct.focusOptions{focusChoice};
    mOrder.nb = mlParamsStruct.NB(nb);
    mOrder.na = mlParamsStruct.NA(na);
    mOrder.nc = mlParamsStruct.NC(nc);
    mOrder.nk = mlParamsStruct.NK(nk);
    printInConsole = sprintf("OffsetChoice %d, focusChoice %d and orders %d,%d,%d,%d"...
                                    ,offsetChoice,focusChoice,...
                                    na,nb,nc,nk);
    disp(printInConsole)
    pause(1)
    %% Generate RF Model
    [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                        testBigSet,...
                                                        controlParamsStruct,...
                                                        mlParamsStruct,...
                                                        mOrder);
    armaxModel = ML_Model.Model;
    matFileModel = [predictiveModelsPath...
                    'ARMAX_MDL_' typeOfData noiseStr ioDTStr...
                    'k' num2str(controlParamsStruct.tau_R) '_'...
                    'na' num2str(na) '_nb' num2str(nb)...
                    '_nc' num2str(nc)...
                    '_' dateTest];
    if saveModelToMatFile
        save(matFileModel,'armaxModel','mOrder','resultsIter','controlParamsStruct','mlParamsStruct');
    end
else
    ML_Results = struct;
    for offsetChoice = 1:1%2
            for focusChoice = 1:1%2
                for na = 1:length(mlParamsStruct.NA)
                    for nb = 1:length(mlParamsStruct.NB)
                        for nc = 1:length(mlParamsStruct.NC)
                            for nk = 1:length(mlParamsStruct.NK)
                                mlParamsStruct.trainingParamsArray{2} = mlParamsStruct.offsetOptions{1,offsetChoice};
                                mlParamsStruct.trainingParamsArray{3} = mlParamsStruct.offsetOptions{2,offsetChoice};
                                mlParamsStruct.trainingParamsArray{6} = mlParamsStruct.focusOptions{focusChoice};
                                mOrder.nb = mlParamsStruct.NB(nb);
                                mOrder.na = mlParamsStruct.NA(na);
                                mOrder.nc = mlParamsStruct.NC(nc);
                                mOrder.nk = mlParamsStruct.NK(nk);
                                printInConsole = sprintf("OffsetChoice %d, focusChoice %d and orders %d,%d,%d,%d"...
                                                                ,offsetChoice,focusChoice,...
                                                                na,nb,nc,nk);
                                disp(printInConsole)
                                pause(1)
                                %% Generate RF Model
                                [resultsIter,ML_Model,trainingTime] = ml_model_generation(trainingBigSet,...
                                                                                    testBigSet,...
                                                                                    controlParamsStruct,...
                                                                                    mlParamsStruct,...
                                                                                    mOrder);
                                %% Save results
                                [ML_Results] = ml_save_results(ML_Results,...
                                                                resultsIter,...
                                                                controlParamsStruct,...
                                                                mlParamsStruct,...
                                                                [offsetChoice...
                                                                focusChoice...
                                                                na nb nc nk]);
                            end
                        end
                    end
                end
            end
    end

    
end
%% Save
outputmatFileName = [resultsMLPath...
                    'ResultsARMAX_' typeOfData noiseStr ioDTStr...
                    'k' num2str(controlParamsStruct.tau_R) '_'...
                    'na' num2str(na) '_nb' num2str(nb)...
                    '_nc' num2str(nc)...
                    '_' dateTest];
if (saveToMatFile)
    save(outputmatFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTime');
end