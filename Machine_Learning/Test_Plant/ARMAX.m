clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_1304.mat'); % Ts equal for all cases
saveToMatFile = true;
comparePlots = false;
matFileName = 'ResultsARMAX_1404';
optimizeMLHyperparameters = false;
mlMethod = 'ARMAX';
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[makeTotal ~] = size(makeMatrix);
% DataSet
fSelected = 1;
waveformSelected = 4;
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
%% Training
effectiveReactionTime = 5;
selectionParameters.p1 = fSelected;
selectionParameters.p2 = waveformSelected;
% Each Subset on it's own (leaves testBatch out, because it is test) -> XVal
% afterwards
for m = 1:length(makeSelected)
    dataTraining(m).subSetsIndex = [m];
end
[garbage , numSubSets] = size(dataTraining);
NA = [0:3]*effectiveReactionTime; %Order
NB = [1:2]*effectiveReactionTime; % Order of B+1 polinomial 
NC = [0:2]*effectiveReactionTime;
NK = [0:3]; % IO Delay
tVector = results(1,1,1).inputs.time;
mlParameters = {'estimate','I_DC?','O_DC?',false,'off','Focus?',true};
offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
focusOptions = {'prediction','simulation'};
seed = rng('default'); % For reproducibility (should look into this after)
bayOptIterations = 30;
bestHyp = -1; % Bogey
%%
for experiment = 1:numSubSets%1:numSubSets
    for offsetChoice = 1:2
        for focusChoice = 1:2
            for na = 1:length(NA)
                for nb = 1:length(NB)
                    for nc = 1:length(NC)
                        for nk = 1:length(NK)
                            mlParameters{2} = offsetOptions{1,offsetChoice};
                            mlParameters{3} = offsetOptions{2,offsetChoice};
                            mlParameters{6} = focusOptions{focusChoice};
                            armaxOrder = [NA(na) NB(nb) NC(nc) NK(nk)];
                            choice = experiment;
                            % Bogey: backward compatibility
                            UPastValues = -1;
                            YPastValues = Dt; %Should change in next versions
                            [TrainingSubset,garbage] = Prepare_IO_Data(choice,numInputs,numOutputs,effectiveReactionTime,...
                                                                  selectionParameters,UPastValues,YPastValues,...
                                                                  results,NameInputs,NameOutputs,mlMethod);
                            ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,armaxOrder,mlMethod);
                            % Test

                            choice = testBatch;
                            [TestSubset,garbage] = Prepare_IO_Data(choice,numInputs,numOutputs,effectiveReactionTime,...
                                                                  selectionParameters,UPastValues,YPastValues,...
                                                                  results,NameInputs,NameOutputs,mlMethod);
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
%                             PredictedOutputs = lsim(ML_Model.Model,TestSubset.InputData-ones(length(tVector),numInputs)*...
%                                 UOffset,tVector,ML_Model.Model.x0);
                            PredictedOutputs = lsim(ML_Model.Model,TestSubset.InputData-ones(length(tVector),numInputs)*...
                                UOffset,tVector);
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
                                    ML_Results(experiment,offsetChoice,focusChoice).Results(y).MSE = 1e14;
                                    ML_Results(experiment,offsetChoice,focusChoice).Results(y).Correlation = -100;
                                    ML_Results(experiment,offsetChoice,focusChoice).ARMAXFit = -1e14;
%                                     ML_Results(experiment,offsetChoice,focusChoice).N4Horizon = 500;
                                else
                                    ML_Results(experiment,offsetChoice,focusChoice,na,nb,nc,nk).Results(y).MSE = immse(PredictedOutputs(:,y),ValidationOutputs(:,y));
                                    ML_Results(experiment,offsetChoice,focusChoice,na,nb,nc,nk).Results(y).Correlation = corr(PredictedOutputs(:,y),ValidationOutputs(:,y));
                                    ML_Results(experiment,offsetChoice,focusChoice,na,nb,nc,nk).ARMAXFit = ML_Model.Model.Report.Fit;
%                                     ML_Results(experiment,offsetChoice,focusChoice).N4Horizon = ML_Model.Model.Report.N4Horizon;
                                end
                            end
                        end
                    end
                end
            end
        end
    end
end
