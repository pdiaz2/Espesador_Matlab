clear all;
close all;
clc;
%% Test Plant Specifics
load('Agosto_SimResults_1304_rawData.mat');
saveToMatFile = false;
matFileName = 'ResultsARMAX_0506';
optimizeMLHyperparameters = false;
mlMethod = 'ARMAX';
seed = rng(1231231); % For reproducibility (should look into this after)
N_y = 20;
generateOne = false;
if generateOne
    % Input wave
    cvToGenerate = 4;
%     experiment = 1;
%     delayUCases = 1;
%     delayYCases = 4;
    na = -1;
    nb = -1;
    nc = -1
    nk = -1;
    offsetChoice = -1;
    focusChoice = -1;
else
   waveVector = 1:4;
   cvToGenerate = -1; %Not used in this case
end


%% Plant specifics
m = length(SimResults.MV);
d = length(SimResults.DV);
numInputs = d+m;
n = length(SimResults.CV);
numOutputs = n;
nSamples = length(SimResults.CV(1).GroupedTimeSeries);
% Dt = SimResults.groupBy;
Dt = 1;
%% Structure definitions
% Plant and control params definition
controlParamsStruct.dimsSystem = [n m d];
controlParamsStruct.nSamples = nSamples;
controlParamsStruct.Dt = Dt;
controlParamsStruct.tau_R = 10;
controlParamsStruct.N_y = N_y;

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
mlParamsStruct.NA = [0 2 4];
mlParamsStruct.NB = [1:3];
mlParamsStruct.NC = [0:1];
mlParamsStruct.NK = [0 2 4];

mlParamsStruct.optimizeParams.bayOptIterations = 30;
mlParamsStruct.optimizeParams.optimizeBool = optimizeMLHyperparameters;
mlParamsStruct.trainingSamples = floor(0.9*nSamples);
mlParamsStruct.validationSamples = controlParamsStruct.nSamples -...
                                mlParamsStruct.trainingSamples;
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
                                                                    mlParamsStruct.trainingSamples);

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
else
    ML_Results = struct;
    for offsetChoice = 1:2
            for focusChoice = 1:2
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
                                                                [1 offsetChoice...
                                                                focusChoice...
                                                                na nb nc nk]);
                            end
                        end
                    end
                end
            end
    end

    
end
% %% Training
% %% Training & Testing Set
% effectiveReactionTime = 10;
% % effectiveReactionTime = Different from actual sampling time, because it
% % corresponds to the time that the process actually shows some relevant
% % change. In other words, its a multiple of the sampling time (required for
% % simulation or implementation) that produces relevant observations.
% for cv = 1:numOutputs
%    NameOutputs{cv} = SimResults.CV(cv).Name;
%    TrainingBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(1:trainUpTo)';
%    TestBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(trainUpTo+1:end)';
% end
% for mv = 1:length(SimResults.MV)
%     NameInputs{mv} = SimResults.MV(mv).Name;
%     TrainingBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(1:trainUpTo)';
%     TestBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(trainUpTo+1:end)';
% end
% for dv = 1:length(SimResults.DV)
%     NameInputs{dv+mv} = SimResults.DV(dv).Name;
%     TrainingBigSet.Inputs.TimeSeries(:,dv+mv) = SimResults.DV(dv).GroupedTimeSeries(1:trainUpTo)';
%     TestBigSet.Inputs.TimeSeries(:,dv+mv)= SimResults.DV(dv).GroupedTimeSeries(trainUpTo+1:end);
% end
% TrainingBigSet.Outputs.TimeSeries(:,:) = fillmissing(TrainingBigSet.Outputs.TimeSeries(:,:),'nearest');
% NA = [0 2 4]*effectiveReactionTime; %Order
% NB = [1:2]*effectiveReactionTime; % Order of B+1 polinomial 
% ; % IO Delay
% mlParameters = {'estimate','I_DC?','O_DC?',false,'off','Focus?',true};
% offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
% focusOptions = {'prediction','simulation'};
% 
% tVector = linspace(0,numSamples-trainUpTo-1,numSamples-trainUpTo)*Dt;
% seed = rng('default'); % For reproducibility (should look into this after)
% bayOptIterations = 30;
% bestHyp = -1; % Bogey
% experiment = 1; % Bogey
% selectionParameters = -1; % Bogey
% %%
% for experiment = 1:1%1:numSubSets
%     for offsetChoice = 1:2
%         for focusChoice = 1:2
%             for na = 1:length(NA)
%                 for nb = 1:length(NB)
%                     for nc = 1:length(NC)
%                         for nk = 1:length(NK)
%                             mlParameters{2} = offsetOptions{1,offsetChoice};
%                             mlParameters{3} = offsetOptions{2,offsetChoice};
%                             mlParameters{6} = focusOptions{focusChoice};
%                             armaxOrder = [NA(na) NB(nb) NC(nc) NK(nk)];
%                             choice = experiment;
%                             % Bogey: backward compatibility
%                             printInConsole = sprintf("Experimento %d para offsetChoice %d, focusChoice %d y ordenes %d,%d,%d,%d"...
%                                 ,experiment,offsetChoice,focusChoice,na,nb,nc,nk);
%                             disp(printInConsole)
%                             pause(1)
%                             UPastValues = -1;
%                             YPastValues = Dt; %Should change in next versions
%                             [TrainingSubset,garbage] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,...
%                                                                   UPastValues,YPastValues,...
%                                                                   TrainingBigSet,NameInputs,NameOutputs,mlMethod);
%                                                               
%                             tic;
%                             ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,armaxOrder,mlMethod);
%                             trainingTimes(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = toc;
%                             % Test
% 
%                             choice = testBatch;
%                             [TestSubset,garbage] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,...
%                                                                   UPastValues,YPastValues,...
%                                                                   TestBigSet,NameInputs,NameOutputs,mlMethod);
%                             YOffset = zeros(numOutputs,numOutputs);
%                             UOffset = zeros(numInputs,numInputs);
%                             if strcmp(mlParameters{2},'R_I_DC')
%                                 UDC = mean(TrainingSubset.InputData)';
%                                 for a = 1:numInputs
%                                     for aa = 1:numInputs
%                                         if (a == aa)
%                                            UOffset(a,aa) = UDC(a); 
%                                         end
%                                     end
%                                 end  
%                             end
%                             if strcmp(mlParameters{3},'R_O_DC')
%                                 YDC = mean(TrainingSubset.OutputData)';
%                                 for a = 1:numOutputs
%                                     for aa = 1:numOutputs
%                                         if (a == aa)
%                                            YOffset(a,aa) = YDC(a); 
%                                         end
%                                     end
%                                 end
%                             end
%                             PredictedOutputs = lsim(ML_Model.Model,TestSubset.InputData-ones(length(tVector),numInputs)*...
%                                 UOffset,tVector);
%                             PredictedOutputs = PredictedOutputs+ones(length(tVector),numOutputs)*YOffset;
%                             ValidationOutputs = TestSubset.OutputData;
%                             if comparePlots
%                                for y = 1:numOutputs
%                                   figure
%                                   plot(PredictedOutputs(:,y));
%                                   hold on
%                                   plot(ValidationOutputs(:,y))
%                                   hold off
%                                   legend(['Pred' num2str(y)],['Val' num2str(y)])
%                                end
%                                pause;
%                             end
%                             for y = 1:length(TestSubset.OutputData(1,:))
%                                 % Backward Compatibility
%                                 if experiment == testBatch
%                                     ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk)= 1e14;
%                                     ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = -100;
%                                     ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
%                                     ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
%                                     ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
% 
%                                 else
%                                     ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = immse(PredictedOutputs(:,y),ValidationOutputs(:,y));
%                                     ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = corr(PredictedOutputs(:,y),ValidationOutputs(:,y));
%                                     ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.FPE;
%                                     ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.AIC;
%                                     ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.MSE;
%                                 end
%                             end
%                         end
%                     end
%                 end
%             end
%         end
%     end
% end
% save(matFileName,'ML_Results','testBatch','NameInputs','NameOutputs','trainingTimes','effectiveReactionTime','-v7.3','-nocompression');