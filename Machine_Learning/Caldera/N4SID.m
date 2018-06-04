clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0206.mat');
saveToMatFile = true;
matFileName = 'ResultsN4SID_NoNoise_0206';
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
    nameInputs = {'DmndVap','Combs','Aire','Agua'};
    nameOutputs = {'PressVap','Oxy','WaterLvl'};
    testBatch = 8;
    %% Training & Testing
    tau_R = 5;
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    makeSelected = 1:8;
    OLExpStruct = generate_ol_array_index(makeSelected);
    [garbage , numExpGroups] = size(OLExpStruct);

    trainingBigSet = struct;
    testBigSet = struct;
    [trainingBigSet,testBigSet,nameInputs,nameOutputs] = generate_tT_sets( trainingBigSet, testBigSet,...
                                                        PlantData,OLExpStruct,nameInputs,nameOutputs,...
                                                        numExpGroups, selectionParameters,testBatch,...
                                                        dimsSystem);
    %%
    mlParameters = {'best','I_DC?','O_DC?','auto',false,'off','prediction'};
    offsetOptions = {'NA','R_DC';'NA','R_DC'};
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
                
                [trainingSubset,~] = ml_prepare_IO_data(trainingBigSet,...
                                                        nameInputs, nameOutputs,...
                                                        experiment, tau_R, numSamplesPerExp,...
                                                        Dt, -1,...
                                                        mlMethod);
                tic;
                ML_Model = Generate_ML_Model(numOutputs,trainingSubset,mlParameters,bestHyp,mlMethod);
                trainingTimes(experiment,offsetChoice,focusChoice) = toc;
                % Test

                choice = testBatch;
                
                [testSubset,garbage] = ml_prepare_IO_data(testBigSet,...
                                            nameInputs, nameOutputs,...
                                            1, tau_R, numSamplesPerExp,...
                                            Dt, -1,...
                                            mlMethod);
                
                UDC = mean(trainingSubset.InputData)';
                YDC = mean(trainingSubset.OutputData)';

                [UOffset] = ml_remove_offset(mlParameters{2},UDC,numInputs);
                [YOffset] = ml_remove_offset(mlParameters{3},YDC,numOutputs);
                
                pOptions = ml_generate_pOptions(ML_Model.Model,...
                                                testSubset.InputData,...
                                                testSubset.OutputData,...
                                                UOffset,YOffset);
                                                            
                [MSE_Ny,yHat_Ny] = predict_N_ahead(ML_Model.Model,...
                            testSubset.InputData,...
                            testSubset.OutputData,...
                            N_y,tau_R,-1,...
                            mlMethod,pOptions);
                if comparePlots % Won't work
                   for y = 1:numOutputs
                      figure
                      plot(PredictedOutputs(:,y));
                      hold on
                      plot(ValidationOutputs(:,y))
                      hold off
                      legend(['Pred' num2str(y)],['Val' num2str(y)])
                   end
                end
                for y = 1:length(testSubset.OutputData(1,:))
                    % Backward Compatibility
                    if experiment == testBatch
                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice).MSE =...
                                                                                            1e14*ones(N_y,1);
                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice).Correlation =...
                                                                                            NaN*ones(N_y,1);
                        ML_Results.Output(y).MSE_1(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = NaN;
                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice) = 1e14;
                        ML_Results.Horizon(experiment,offsetChoice,focusChoice,:) = [-1 -1 -1];
                    else
                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice).MSE =...
                                                                                                MSE_Ny(:,y);
                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice).Correlation =...
                                                            corr(yHat_Ny(:,y,1),testSubset.OutputData(:,y));
                        ML_Results.Output(y).MSE_1(experiment,offsetChoice,focusChoice) = MSE_Ny(1,y);
                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice) =...
                                                        corr(yHat_Ny(:,y,1),testSubset.OutputData(:,y));
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
    save(matFileName,'ML_Results','testBatch','nameInputs','nameOutputs','trainingTimes','tau_R');
end