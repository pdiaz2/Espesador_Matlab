clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0106.mat'); % Ts equal for all cases
saveToMatFile = false;
comparePlots = false;
useNoisy = false;
%%
matFileName = 'ResultsARMAX_NoNoise_0106';
optimizeMLHyperparameters = false;
mlMethod = 'ARMAX';


if useNoisy
    PlantData = results;
else
    PlantData = resultsSmooth; 
end

MVToApply = makeMatrix;
[numSamplesPerExp,~] = size(PlantData(1,1,1).inputs.time);

freqsTotal = length(freqs);
wavesTotal = length(waveform);
[nOpenLoopExps ~] = size(MVToApply);
dimsSystem = [3 3 1];
%% DataSet
fSelected = 2;
waveformSelected = 1;
N_y = 20;

%%
seed = rng(1513);
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
    %% Training
    tau_R = 5;
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    % Each Subset on it's own (leaves testBatch out, because it is test) -> XVal
    % afterwards
    OLExpStruct = generate_ol_array_index(makeSelected);
    [garbage , numExpGroups] = size(OLExpStruct);
    TrainingBigSet = struct;
    TestBigSet = struct;
    [TrainingBigSet,TestBigSet,NameInputs,NameOutputs] = generate_tT_sets( TrainingBigSet, TestBigSet,...
                                                        PlantData,OLExpStruct,NameInputs,NameOutputs,...
                                                        numExpGroups, selectionParameters,testBatch,...
                                                        dimsSystem);
    %%
    NA = [0:1]*tau_R; %Order
    NB = [1:2]*tau_R; % Order of B+1 polinomial 
    NC = [0:2]*tau_R;
    NK = [0:3]; % IO Delay
    tVector = PlantData(1,1,1).inputs.time;
    mlParameters = {'estimate','I_DC?','O_DC?',false,'off','Focus?',true};
    offsetOptions = {'NA','R_I_DC';'NA','R_O_DC'};
    focusOptions = {'prediction','simulation'};
    seed = rng('default'); % For reproducibility (should look into this after)
    bayOptIterations = 30;
    bestHyp = -1; % Bogey
    %%
    for experiment = 1:numExpGroups%1:numExpGroups
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
                                % Bogey: backward compatibility
                                printInConsole = sprintf("Experimento %d para offsetChoice %d, focusChoice %d y ordenes %d,%d,%d,%d"...
                                    ,experiment,offsetChoice,focusChoice,na,nb,nc,nk);
                                disp(printInConsole)
                                pause(1)
                                [TrainingSubset,garbage] = Prepare_IO_Data(TrainingBigSet,...
                                                                NameInputs, NameOutputs,...
                                                                experiment, tau_R, numSamplesPerExp,...
                                                                Dt, -1,...
                                                                mlMethod);
                                tic;
                                ML_Model = Generate_ML_Model(numOutputs,TrainingSubset,mlParameters,armaxOrder,mlMethod);
                                trainingTimes(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = toc;
                                % Test

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
                                        ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk)= 1e14;
                                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = NaN;
                                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                    else
                                        ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = immse(PredictedOutputs(:,y),ValidationOutputs(:,y));
                                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = corr(PredictedOutputs(:,y),ValidationOutputs(:,y));
                                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.FPE;
                                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.AIC;
                                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = ML_Model.Model.Report.Fit.MSE;
                                    end
                                end
                            end
                        end
                    end
                end
            end
        end
    end
    save(matFileName,'ML_Results','testBatch','NameInputs','NameOutputs','trainingTimes','tau_R','-v7.3','-nocompression');
end
    