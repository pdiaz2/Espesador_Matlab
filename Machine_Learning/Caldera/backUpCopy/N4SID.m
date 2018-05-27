clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_1304.mat'); % Ts equal for all cases
saveToMatFile = true;
comparePlots = false;
matFileName = 'ResultsN4SID_0405';
optimizeMLHyperparameters = false;
mlMethod = 'SS';
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[makeTotal ~] = size(makeMatrix);
% DataSet
fSelected = 1;
waveformSelected = 1;
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
    testBatch = 2;
    %% Training & Testing
    effectiveReactionTime = 5;
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    % Each Subset on it's own (leaves testBatch out, because it is test) -> XVal
    % afterwards
    for m = 1:length(makeSelected)
        dataTraining(m).subSetsIndex = [m];
    end
    [garbage , numSubSets] = size(dataTraining);

    for ns = 1:numSubSets
        tSets = dataTraining(ns).subSetsIndex;
        VLADIMIR = [];
        for cv = 1:numOutputs
            OutputVLADIMIR = [];
            for tS = 1:length(tSets)
                choice = tSets(tS);
                OutputVLADIMIR = vertcat(OutputVLADIMIR(:),...
                       results(selectionParameters.p1,selectionParameters.p2,choice).outputs(:,cv));
            end
            NameOutputs{cv} = NameOutputs{cv};
            TrainingBigSet(ns).Outputs.TimeSeries(:,cv)  = OutputVLADIMIR(:);
            TestBigSet.Outputs.TimeSeries(:,cv) = results(selectionParameters.p1,selectionParameters.p2,testBatch).outputs(:,cv);
        end

    end
    for ns = 1:numSubSets
        tSets = dataTraining(ns).subSetsIndex;
        VLADIMIR = [];
        for cv = 1:numInputs
            OutputVLADIMIR = [];
            for tS = 1:length(tSets)
                choice = tSets(tS);
                OutputVLADIMIR = vertcat(OutputVLADIMIR(:),...
                       results(selectionParameters.p1,selectionParameters.p2,choice).inputs.signals.values(:,cv));
            end
            NameInputs{cv} = NameInputs{cv};
            TrainingBigSet(ns).Inputs.TimeSeries(:,cv)  = OutputVLADIMIR(:);
            TestBigSet.Inputs.TimeSeries(:,cv) = results(selectionParameters.p1,selectionParameters.p2,testBatch).inputs.signals.values(:,cv);
        end

    end
    %%
    mlParameters = {'best','I_DC?','O_DC?','auto',false,'off','prediction'};
    offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
    focusOptions = {'prediction','simulation'};
    tVector = results(1,1,1).inputs.time;

    seed = rng('default'); % For reproducibility (should look into this after)
    bayOptIterations = 30;
    bestHyp = -1; % Bogey
    for experiment = 1:numSubSets%1:numSubSets
        for offsetChoice = 1:2
            for focusChoice = 1:2
                mlParameters{2} = offsetOptions{1,offsetChoice};
                mlParameters{3} = offsetOptions{2,offsetChoice};
                mlParameters{7} = focusOptions{focusChoice};
                % Bogey: backward compatibility
                UPastValues = -1;
                YPastValues = Dt; %Should change in next versions
                [TrainingSubset,garbage] = Prepare_IO_Data(experiment,numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                      TrainingBigSet,NameInputs,NameOutputs,mlMethod);

                ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod);
                % Test

                choice = testBatch;
                tic;
                [TestSubset,garbage] = Prepare_IO_Data(1,numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                      TestBigSet,NameInputs,NameOutputs,mlMethod);
                trainingTimes(experiment,offsetChoice,focusChoice) = toc;
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
    save(matFileName,'ML_Results','testBatch','NameInputs','NameOutputs','trainingTimes','effectiveReactionTime');
end