clear all;
close all;
clc;
%% Test Plant Specifics

nameDataset = 'Agosto_';
typeOfData = 'Sim_';
dateTest = '1408';
saveToMatFile = false;
% matFileName = 'ResultsARMAX_NoNoise_2206';
optimizeMLHyperparameters = false;
mlMethod = 'ARMAX';
seed = rng(1231231); % For reproducibility (should look into this after)
% Crucial parameters for system identification
N_y = 20;
tau_R = 5;
useDelayMV_CV = true;
noiseyData = true;
generateOne = true;
%% Bool Handling
if generateOne
    % Input wave
    cvToGenerate = 2;
    na = 4;%3
    nb = 1;
    nc = 1;
    nk = 1;
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



%% Plant specifics
m = length(SimResults.MV);
d = length(SimResults.DV);
d = 2;
% d = 3;
numInputs = d+m;
% n = length(SimResults.CV);
% n = length(SimResults.CV)-1;
n = 3;
numOutputs = n;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = tau_R;%5; % 10
controlParamsStruct.N_y = N_y;
if useDelayMV_CV
    switch typeOfData
        case 'Sim_'
            % Values obtained by inspection of open loop tests on simulator
%             controlParamsStruct.delayMV_CV = floor([6.5*60 6.5*60 0 4.4*60;
%                                                     6.5*60 6.5/60 0 6.5*60;
%                                                     3*60 3*60 0 0.5*60]/controlParamsStruct.tau_R);
            controlParamsStruct.delayMV_CV = floor([10 10 0 10;
                                                    10 10 0 10;
                                                    10 10 0 10]/controlParamsStruct.tau_R);  
        case 'Real_'
            controlParamsStruct.delayMV_CV = floor(SimResults.delayMV_CV/controlParamsStruct.tau_R);
    end
    
    ioDTStr = 'ioDT_';
else
    controlParamsStruct.delayMV_CV = zeros(3,numInputs);
    ioDTStr = '';
end
%% DownSampling for tau_R
SimResults = ml_downsampling(SimResults,controlParamsStruct,'d');
controlParamsStruct.nSamples = length(SimResults.CV(1).GroupedTimeSeries);
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
mlParamsStruct.NA = [6,12,36,60]%[4 6 10];
mlParamsStruct.NB = [5,10,15,30,60]%[1:3];
mlParamsStruct.NC = 2%[0 2 4];
mlParamsStruct.NK = [0 1];%1%[1 2 4]; % [0 2 4];

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(0.85*nSamples);
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
SimResults.CV(7).GroupedTimeSeries = fillmissing(SimResults.CV(7).GroupedTimeSeries,'nearest');
[trainingBigSet,testBigSet,controlParamsStruct] = ml_generate_tT_sets(trainingBigSet,...
                                                                    testBigSet,...
                                                                    SimResults,...
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
    matFileModel = ['ARMAX_MDL_' typeOfData ioDTStr dateTest ...
                    '_k' num2str(controlParamsStruct.tau_R)...
                    '.mat'];
    save(matFileModel,'armaxModel','mOrder','controlParamsStruct','mlParamsStruct');
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
outputmatFileName = ['ResultsARMAX_' typeOfData ioDTStr dateTest...
                    '_k' num2str(controlParamsStruct.tau_R)...
                    '.mat'];
if (saveToMatFile)
    save(outputmatFileName,'ML_Results','controlParamsStruct','mlParamsStruct','trainingTime');
end