clear all;
close all;
clc;
%% Test Plant Specifics
load('testData_0206.mat'); % Ts equal for all cases
saveToMatFile = false;
comparePlots = false;
useNoisy = false;
%%
matFileName = 'ResultsARMAX_NoNoise_0206';
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
    nameInputs = {'DmndVap','Combs','Aire','Agua'};
    nameOutputs = {'PressVap','Oxy','WaterLvl'};
    testBatch = 8;
    %% Training
    tau_R = 5;
    selectionParameters.p1 = fSelected;
    selectionParameters.p2 = waveformSelected;
    % Each Subset on it's own (leaves testBatch out, because it is test) -> XVal
    % afterwards
    OLExpStruct = generate_ol_array_index(makeSelected);
    [garbage , numExpGroups] = size(OLExpStruct);
    trainingBigSet = struct;
    testBigSet = struct;
    [trainingBigSet,testBigSet,nameInputs,nameOutputs] = generate_tT_sets( trainingBigSet, testBigSet,...
                                                        PlantData,OLExpStruct,nameInputs,nameOutputs,...
                                                        numExpGroups, selectionParameters,testBatch,...
                                                        dimsSystem);
    %%
    NA = [1 3 5]; %Order
    NB = [1:4]; % Order of B+1 polinomial 
    NC = [0:2];
    NK = [0:4]; % IO Delay
    tVector = PlantData(1,1,1).inputs.time;
    mlParameters = {'estimate','I_DC?','O_DC?',false,'off','Focus?',true};
    offsetOptions = {'NA','R_DC';'NA','R_DC'};
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
                                [trainingSubset,~] = ml_prepare_IO_data(trainingBigSet,...
                                                                nameInputs, nameOutputs,...
                                                                experiment, tau_R, numSamplesPerExp,...
                                                                Dt, -1,...
                                                                mlMethod);
                                tic;
                                ML_Model = Generate_ML_Model(numOutputs,trainingSubset,mlParameters,armaxOrder,mlMethod);
                                trainingTimes(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = toc;
                                % Test

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
                                if comparePlots% won't work
                                   for y = 1:numOutputs
                                      figure
                                      plot(predictedOutputs(:,y));
                                      hold on
                                      plot(validationOutputs(:,y))
                                      hold off
                                      legend(['Pred' num2str(y)],['Val' num2str(y)])
                                   end
                                end
                                for y = 1:length(testSubset.OutputData(1,:))
                                    % Backward Compatibility
                                    if experiment == testBatch
                                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice,na,nb,nc,nk).MSE =...
                                                                                                    1e14*ones(N_y,1);
                                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice,na,nb,nc,nk).Correlation =...
                                                                                                    NaN*ones(N_y,1);
                                        ML_Results.Output(y).MSE_1(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = NaN;
                                        ML_Results.Fit.FPE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                        ML_Results.Fit.AIC(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                        ML_Results.Fit.MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = 1e14;
                                    else
%                                         ML_Results.Output(y).MSE(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = immse(predictedOutputs(:,y),validationOutputs(:,y));
%                                         ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = corr(predictedOutputs(:,y),validationOutputs(:,y));
                                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice,na,nb,nc,nk).MSE = MSE_Ny(:,y);
                                        ML_Results.Output(y).MSE_1(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = MSE_Ny(1,y);
                                        ML_Results.Output(y).Performance(experiment,offsetChoice,focusChoice,na,nb,nc,nk).Correlation = corr(yHat_Ny(:,y,1),testSubset.OutputData(:,y));
                                        ML_Results.Output(y).Correlation(experiment,offsetChoice,focusChoice,na,nb,nc,nk) = corr(yHat_Ny(:,y,1),testSubset.OutputData(:,y));
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
    save(matFileName,'ML_Results','testBatch','nameInputs','nameOutputs','trainingTimes','tau_R','-v7.3','-nocompression');
end
    