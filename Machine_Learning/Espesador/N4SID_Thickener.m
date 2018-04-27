clear all;
close all;
clc;
%% Test Plant Specifics
load('Agosto_SimResults_1304.mat');
saveToMatFile = true;
matFileName = 'ResultsN4SID_1404';
optimizeMLHyperparameters = false;
comparePlots = false;
mlMethod = 'SS';
numInputs = length(SimResults.MV)+length(SimResults.DV);
numOutputs = length(SimResults.CV);
numSamples = length(SimResults.CV(1).GroupedTimeSeries);
trainUpTo = floor(0.9*numSamples);
testBatch = 8; %Backward Compatibility
Dt = SimResults.groupBy;
%% Training & Testing Set
effectiveReactionTime = 10;
% effectiveReactionTime = Different from actual sampling time, because it
% corresponds to the time that the process actually shows some relevant
% change. In other words, its a multiple of the sampling time (required for
% simulation or implementation) that produces relevant observations.
for cv = 1:numOutputs
   NameOutputs{cv} = SimResults.CV(cv).Name;
   TrainingBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(1:trainUpTo)';
   TestBigSet.Outputs.TimeSeries(:,cv) = SimResults.CV(cv).GroupedTimeSeries(trainUpTo+1:end)';
end
for mv = 1:length(SimResults.MV)
    NameInputs{mv} = SimResults.MV(mv).Name;
    TrainingBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(1:trainUpTo)';
    TestBigSet.Inputs.TimeSeries(:,mv) = SimResults.MV(mv).GroupedTimeSeries(trainUpTo+1:end)';
end
for dv = 1:length(SimResults.DV)
    NameInputs{dv+mv} = SimResults.DV(dv).Name;
    TrainingBigSet.Inputs.TimeSeries(:,dv+mv) = SimResults.DV(dv).GroupedTimeSeries(1:trainUpTo)';
    TestBigSet.Inputs.TimeSeries(:,dv+mv)= SimResults.DV(dv).GroupedTimeSeries(trainUpTo+1:end);
end
TrainingBigSet.Outputs.TimeSeries(:,:) = fillmissing(TrainingBigSet.Outputs.TimeSeries(:,:),'nearest');
seed = rng('default'); % For reproducibility (should look into this after)
bayOptIterations = 30;
experiment = 1; % Bogey
selectionParameters = -1; % Bogey
%%
mlParameters = {'best','I_DC?','O_DC?','auto',false,'off','prediction'};
offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
focusOptions = {'prediction','simulation'};
tVector = linspace(0,numSamples-trainUpTo-1,numSamples-trainUpTo)*Dt;

seed = rng('default'); % For reproducibility (should look into this after)
bayOptIterations = 30;
bestHyp = -1; % Bogey
for experiment = 1:1%1:numSubSets
    for offsetChoice = 1:2
        for focusChoice = 1:2
            mlParameters{2} = offsetOptions{1,offsetChoice};
            mlParameters{3} = offsetOptions{2,offsetChoice};
            mlParameters{7} = focusOptions{focusChoice};
            choice = experiment;
            % Bogey: backward compatibility
            UPastValues = -1;
            YPastValues = Dt; %Should change in next versions
            [TrainingSubset,garbage] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                  TrainingBigSet,NameInputs,NameOutputs,mlMethod);

            ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,bestHyp,mlMethod);
            % Test

            choice = testBatch;
            [TestSubset,garbage] = Prepare_IO_Data(numInputs,numOutputs,effectiveReactionTime,UPastValues,YPastValues,...
                                                  TestBigSet,NameInputs,NameOutputs,mlMethod);
            YOffset = zeros(numOutputs,numOutputs);
            UOffset = zeros(numInputs,numInputs);
            % Remove Input offset if Required (centers the model in the
            % origin of where it was identified)
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
            % Remove output offset if Required (centers the model in the
            % origin of where it was identified)
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
                    ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice) = -100;
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
save(matFileName,'ML_Results','testBatch')