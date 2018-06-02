clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0106.mat');
saveToMatFile = true;
matFileName = 'ResultsN4SID_NoNoise_0106';
generateOne = false;
optimizeMLHyperparameters = false;
comparePlots = false;
useNoisy = false;
if useNoisy
    PlantData = results;
else
    PlantData = resultsSmooth; 
end
%%
seed = rng(1513);
mlMethod = 'SS';
MVToApply = makeMatrix;
[numSamplesPerExp,~] = size(PlantData(1,1,1).inputs.time);
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[nOpenLoopExps ~] = size(MVToApply);
dimsSystem = [3 3 1];
% DataSet
fSelected = 2;
waveformSelected = 1;
N_y = 20;

%%
for waveformSelected = 1:4
    if waveformSelected == 1
        appendMatFileName = '_sine.mat';
    elseif waveformSelected == 2
        appendMatFileName = '_square.mat';    
    elseif waveformSelected == 3
        appendMatFileName = '_saw.mat';
    elseif waveformSelected == 4
        appendMatFileName = '_step.mat';
    end
    matFileName = [matFileName appendMatFileName]; 
    makeSelected = 1:8;
    numInputs = 4;
    numOutputs = 3;
    NameInputs = {'DmndVap','Combs','Aire','Agua'};
    NameOutputs = {'PressVap','Oxy','WaterLvl'};
    testBatch = 8;
    %% Training & Testing
    tau_R = 5;
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    makeSelected = 1:8;
    OLExpStruct = generate_ol_array_index(makeSelected);
    [garbage , numExpGroups] = size(OLExpStruct);

    TrainingBigSet = struct;
    TestBigSet = struct;
    [TrainingBigSet,TestBigSet,NameInputs,NameOutputs] = generate_tT_sets( TrainingBigSet, TestBigSet,...
                                                        PlantData,OLExpStruct,NameInputs,NameOutputs,...
                                                        numExpGroups, selectionParameters,testBatch,...
                                                        dimsSystem);
    %%
    mlParameters = {'best','I_DC?','O_DC?','auto',false,'off','prediction'};
    offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
    focusOptions = {'prediction','simulation'};
    tVector = PlantData(1,1,1).inputs.time;
    
    bayOptIterations = 30;
    bestHyp = -1; % Bogey
    for experiment = 1:numExpGroups%1:numSubSets
        for offsetChoice = 1:2
            for focusChoice = 1:2
                mlParameters{2} = offsetOptions{1,offsetChoice};
                mlParameters{3} = offsetOptions{2,offsetChoice};
                mlParameters{7} = focusOptions{focusChoice};
                
                %
                [TrainingSubset,garbage] = Prepare_IO_Data(TrainingBigSet,...
                                                                NameInputs, NameOutputs,...
                                                                experiment, tau_R, numSamplesPerExp,...
                                                                Dt, -1,...
                                                                mlMethod);
                tic;
                ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod);
                trainingTimes(experiment,offsetChoice,focusChoice) = toc;
                % Test

                choice = testBatch;
                
                [TestSubset,garbage] = Prepare_IO_Data(TestBigSet,...
                                            NameInputs, NameOutputs,...
                                            1, tau_R, numSamplesPerExp,...
                                            Dt, -1,...
                                            mlMethod);
                
                YOffset = zeros(numOutputs,numOutputs);
                UOffset = zeros(numInputs,numInputs);
                if strcmp(mlParameters{2},'R_I_DC')
                    UDC = mean(TrainingSubset.InputData)';
                    for a = 1:numInputs
                        for aa = 1:numInputs
                            if (a == aa)
                               UOffset(a,aa) = UDC(a); 
                            end
                        end
                    end  
                end
                if strcmp(mlParameters{3},'R_O_DC')
                    YDC = mean(TrainingSubset.OutputData)';
                    for a = 1:numOutputs
                        for aa = 1:numOutputs
                            if (a == aa)
                               YOffset(a,aa) = YDC(a); 
                            end
                        end
                    end
                end
                PredictedOutputs = lsim(ML_Model.Model,TestSubset.InputData-ones(length(tVector),numInputs)*...
                    UOffset,tVector,ML_Model.Model.x0);
                PredictedOutputs = PredictedOutputs+ones(length(tVector),numOutputs)*YOffset;
                ValidationOutputs = TestSubset.OutputData;
                if comparePlots
                   for y = 1:numOutputs
                      figure
                      plot(PredictedOutputs(:,y));
                      hold on
                      plot(ValidationOutputs(:,y))
                      hold off
                      legend(['Pred' num2str(y)],['Val' num2str(y)])
                   end
                end
                for y = 1:length(TestSubset.OutputData(1,:))
                    % Backward Compatibility
                    if experiment == testBatch
                        ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice) = NaN;
                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Horizon(experiment,offsetChoice,focusChoice,:) = [-1 -1 -1];
                    else
                        ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice) = immse(PredictedOutputs(:,y),ValidationOutputs(:,y));
                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice) = corr(PredictedOutputs(:,y),ValidationOutputs(:,y));
                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice) = ML_Model.Model.Report.Fit.FPE;
                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice) = ML_Model.Model.Report.Fit.AIC;
                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice) = ML_Model.Model.Report.Fit.MSE;
                        ML_Results.Horizon(experiment,offsetChoice,focusChoice,:) = ML_Model.Model.Report.N4Horizon;
                    end

                end
                close all;
            end
        end
    %     [~,ML_Results(experiment).Fit,~] = compare(TestSubset,ML_Model.Model,1);
    %     compare(TestSubset,ML_Model.Model,1);
    end
    save(matFileName,'ML_Results','testBatch','NameInputs','NameOutputs','trainingTimes','tau_R');
end