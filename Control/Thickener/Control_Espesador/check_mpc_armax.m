clear all;
clc;
close all;
% %% Control Parameters
% useMPC_RF = false;
% usePID = false;
% useMPC_ARMAX = true;
% %%%%%%%%%%%%%%%%%
% dvRealData = false;
% imprint = false;
% saveControlResults = false;
% % Code for names:
%     % - BS: BigSearch. Big pop (100+) and big gens (100+)
%     % - SS: SmallSearch. Small pop (100-) and small gens (50-)
%     % - <MV>S: MV cost is S. Small (0.001- w.r.t other MV cost)
% dateOutputStr = '2108';
% dateMatFileStr = '1408';
% figurePath = 'figures\trials_rf_1408\';
% resultsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsControl\';
% %%%%%%%%%%%%%%%
% N_y = 18;
% N_u = 3;%4
% kappaControl_RF = 5;
% kappaControl_ARMAX = 5;
% optimizationMethod = 'PSO';
% Dt = 1;
% simTime = 100*3600; % 10*3600
% simControlFrom = 1;
% simControlTo = 1;
% groupBy = 60; % This should be automatic
% tau_R = 5*groupBy;
% tau_C_RF = kappaControl_RF*tau_R;
% tau_C_ARMAX = kappaControl_ARMAX*tau_R;
% % stepInDVArray = [false;
% %                 false;
% %                 false;
% %                 true;
% %                 true];
% % dvStepSizeArray = [
% %                 0 0 0;
% %                 0 0 0;
% %                 0 0 0;
% %                 0 -0.1 0;
% %                 30 0 0
% %                 ];
% stepInDVArray = [false;
%                 false;
%                 false;
%                 false;
%                 false;
%                 false;
%                 false;
%                 false;
%                 false;
%                 false];
% dvStepSizeArray = [
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 0 0
%                 ];
% controlClosedLoop = 1;
% startPlotTime = 1; %Wait for noise filter to stabilize
% 
% 
% %% MPC RF Cost Values
% 
% qCostValuesIterations_RF = ...%repmat([1 1 100],simControlTo,1);
%                         [
%                         1 10 100; % OL
%                         10 10 100;
%                         10 10 100;
%                         10 10 100;
%                         5 10 100;
%                         5 10 100;
%                         5 10 100;
%                         20 100 20;
%                         20 100 20;
%                         20 100 20];
% 
% rCostValuesIterations_RF = ...%repmat([0.001 0.01],simControlTo,1);
%                         [
%                         1e14 1e14; % OL
%                         0.005 0.05;
%                         0.001 0.01;
%                         0.001 0.05;
%                         0.0005 0.005;
%                         0.001 0.01;
%                         0.005 0.01;
%                         0.001 0.01;
%                         0.01 0.1;
%                         0.005 0.05;
%                         ];
% % rCostValuesIterations = [1e10 1e10;
% %                         0.001 0.01];
% betaCostValuesIterations_RF = repmat([1 1 1],simControlTo,1);
% lambdaCostValuesIterations_RF = repmat([1 1 1],simControlTo,1);
% 
% numCV = size(qCostValuesIterations_RF,2);
% numMV = size(rCostValuesIterations_RF,2);
% %% PI Tuning
% KpArray = repmat([90 3],simControlTo,1);
% 
% KiArray = repmat([3.6 1e-4],simControlTo,1);
% 
% KdArray = repmat([0 0],simControlTo,1);
% 
% %% MPC ARIMAX Cost Values
% qCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);
% %                         [
% %                         1 1 100 1;
% %                         1 1 100 1;
% %                         1 1 100 1];
% % qCostValuesIterations = [0.001 0.0001 0.0001 0.0001;
% %                         1 1 100 1]; 
% 
% rCostValuesIterations_ARMAX = repmat([0.001 0.01],simControlTo,1);
% %                         [
% %                         0.001 0.01;
% %                         0.001 0.01;
% %                         ];
% % rCostValuesIterations = [1e10 1e10;
% %                         0.001 0.01];
% betaCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);
% lambdaCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);
% 
% % CV
% boolLimsCV = repmat(logical([0,0,0]),simControlTo,1);
% boolECR = repmat(logical([0,0,0]),simControlTo,1);
% boolLimsMV = repmat([0,0,0],simControlTo,1);
% boolRateLimsMV = repmat([0,0,0],simControlTo,1);
% cvECR = repmat([0.5,0.5,0.5],simControlTo,1);
% %% Reference Values Struct
% wValuesStruct.delta = [
%                         0 0 0;
%                         0 0 4;
%                         0 -0.4 0;
%                         0 0 0;
%                         0 0 0;
%                         0 0 0;
%                         0 0 0;
%                         0 0 0;
%                         0 0 0;
%                         0 0 0;
%                        ];
% % wValuesStruct.changeBool = logical([
% %                                     0 0 0;
% %                                     0 0 1;
% %                                     0 1 0;
% %                                     0 0 0;
% %                                     0 0 0
% %                                     ]);
% wValuesStruct.changeBool = logical([
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0;
%                                     0 0 0
%                                     ]);
% wValuesStruct.shape = {
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step';
%                         'step','step','step'
%                         };
% wValuesStruct.timeToChange = [
%                                 -1 -1 -1;
%                                 -1 -1 floor(simTime/1e3);
%                                 -1 floor(simTime/1e2) -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 -1 -1 -1;
%                                 ];
% wValuesStruct.addNoiseBool = [
%                                 false; %always false for w
%                                 false;
%                                 false;
%                                 false;
%                                 false;
%                                 false;
%                                 false;
%                                 false;
%                                 false;
%                                 false
%                                 ];
% %% Sensor Values Struct
% yValuesStruct.delta = [0 0 0];
% yValuesStruct.changeBool = logical([0 0 0]);
% yValuesStruct.shape = {'step','step','step'};
% yValuesStruct.timeToChange = [-1 -1 floor(simTime/22)];
% yValuesStruct.addNoiseBool = false;
% %%
% RFParamatersFile = ['RFParameters_' dateMatFileStr '.mat'];
% fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
% designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
% parametersFileArray = {RFParamatersFile,fixedParametersFileName,designParametersFileName};
% %% Generate Fixed parameters
% % Fixed parameters
% mpc_generate_fixed_parameters(dateMatFileStr);
% %% Load Parameters
% for strFile = 1:2
%    load(parametersFileArray{strFile}); 
% end
% %% Filter Design
% bFilter = fir1(10,0.8,kaiser(11,6));
% % freqz(bFilter,1);
% bFilter = 1;
% 
% %% Reference for MPC
% wValuesStruct.IC = repmat(Y0,simControlTo,1);
% for simIter = simControlFrom:simControlTo
%     wValuesIterStruct.delta = wValuesStruct.delta(simIter,:);
%     wValuesIterStruct.changeBool = wValuesStruct.changeBool(simIter,:);
%     wValuesIterStruct.shape = wValuesStruct.shape(simIter,:);
%     wValuesIterStruct.timeToChange = wValuesStruct.timeToChange(simIter,:);
%     wValuesIterStruct.addNoiseBool = wValuesStruct.addNoiseBool(simIter,:);
%     wValuesIterStruct.IC = wValuesStruct.IC(simIter,:);
%     yRefArray(simIter).yRef = mpc_generate_input(wValuesIterStruct);
% end
% %% Sensor Input for MPC - RF
% yValuesStruct.IC = Y0;
% ySensor = mpc_generate_input(yValuesStruct);
% %% Control Simulation
% for simIter = simControlFrom:simControlTo
%     %% DV Design
%     if (stepInDVArray(simIter))
%         stepTimeDV(1) = floor(simTime/10);
%         stepTimeDV(2) = floor(simTime/10);
%         stepTimeDV(3) = simTime;
%     else
%         stepTimeDV(1) = simTime;
%         stepTimeDV(2) = simTime;
%         stepTimeDV(3) = simTime;
%     end
%     dvStepSize = dvStepSizeArray(simIter,:);
%     %% Sim
%     
%     load('ThickenerOperation_Septiembre_BF.mat');
%     yRef = yRefArray(simIter).yRef;
%     Q_f.time = linspace(0,simTime,simTime/Dt)';
%     Cp_f.time = linspace(0,simTime,simTime/Dt)';
%     p1_f.time = linspace(0,simTime,simTime/Dt)';
%     if dvRealData
%         Q_f.signals.values = BigData.PreProcessed(7,1:simTime)';
%         Cp_f.signals.values = wt_f(1:simTime)'/100;
%         p1_f.signals.values = 0.356*ones(1,simTime)';
%     else
%        Q_f.signals.values = D0(1)*ones(1,simTime)';
%        Cp_f.signals.values = D0(2)*ones(1,simTime)';
%        p1_f.signals.values = 0.356*ones(1,simTime)';
%     end
% 
%     %% MPC - Random Forest
%     if useMPC_RF
%     % Design parameters
%         mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod,...
%                                     qCostValuesIterations_RF(simIter,:),...
%                                     rCostValuesIterations_RF(simIter,:),...
%                                     betaCostValuesIterations_RF(simIter,:),...
%                                     lambdaCostValuesIterations_RF(simIter,:));
%         %Load Parameters
%         load(parametersFileArray{3}); 
% 
%         run parametrosEmpty.m
%         rng(120938103);
%         load('Agosto_SimResults_1304_State.mat');
%         tic;
%         sim('mpc_rf_thickener.slx');
%         toc;
%         % Store Results
%         % For the time being, multiply Cp_u by 100
% %         y.signals.values(:,2) = y.signals.values(:,2)*100;
% 
%         yMPC_RF(:,:,simIter) = y.signals.values(:,:);
%         uMPC_RF(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
%         dMPC_RF(:,:,simIter) = inputs.signals.values(:,1:numDV);
%         optMPC_RF(:,:,simIter) = downsample(solverResults.signals.values(:,:),tau_C_RF);
%         auxYHat = permute(yHat.signals.values(:,:,:),[3 2 1]);
%         for cv = 1:numCV
%             yHatMPC_RF(:,:,cv,simIter) = downsample(auxYHat(:,:,cv),tau_C_RF);
%         end
%         auxControlMoves = permute(controlMoves.signals.values(:,:,:),[3 2 1]);
%         for mv = 1:numMV
%             controlMovesMPC_RF(:,:,mv,simIter) = downsample(auxControlMoves(:,:,mv),tau_C_RF);
%         end
%     end
%     %% PI Control
%     if usePID
%         Kp = KpArray(simIter,:);
%         Ki = KiArray(simIter,:);
%         Kd = KdArray(simIter,:);
%         run parametrosEmpty.m
%         rng(120938103);
%         load('Agosto_SimResults_1304_State.mat');
%         tic;
%         sim('pid_thickener.slx');
%         toc;
%          % Store Results
%         % For the time being, multiply Cp_u by 100
% %         y.signals.values(:,2) = y.signals.values(:,2)*100;
% 
%         yPID(:,:,simIter) = y.signals.values(:,:);
%         uPID(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
%         dPID(:,:,simIter) = inputs.signals.values(:,1:numDV);
%     end
%     %% MPC - ARMAX
%     if useMPC_ARMAX
%         tuningStruct.CV.BoolLims = boolLimsCV(simIter,:);
%         tuningStruct.CV.BoolECR = boolECR(simIter,:);
%         tuningStruct.CV.ECR = cvECR(simIter,:);
%         tuningStruct.MV.BoolLims = boolLimsMV(simIter,:);
%         tuningStruct.MV.BoolRateLims = boolRateLimsMV(simIter,:);
%         mpc_design_armax_object(dateMatFileStr,N_y,N_u,kappaControl_RF,...
%                                 qCostValuesIterations_ARMAX(simIter,:),...
%                                 rCostValuesIterations_ARMAX(simIter,:),...
%                                 betaCostValuesIterations_ARMAX(simIter,:),...
%                                 tuningStruct);
%         load(['mpc_armax_object' dateMatFileStr '.mat']);
% %         run parametrosEmpty.m
% %         rng(120938103);
% %         load('Agosto_SimResults_1304_State.mat');
% %         tic;
% %         sim('mpc_armax_thickener.slx');
% %         toc;
% 
%         % Store Results
%         % For the time being, multiply Cp_u by 100
% %         y.signals.values(:,2) = y.signals.values(:,2)*100;
% 
% %         yARMAX(:,:,simIter) = y.signals.values(:,:);
% %         uARMAX(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
% %         dARMAX(:,:,simIter) = inputs.signals.values(:,1:numDV);
% %         optMPC_ARMAX(:,:,simIter) = downsample(solverResults.signals.values(:,:),kappaControl_ARMAX);
% %         yHatMPC_ARMAX(:,:,simIter) = downsample(xHat.signals.values(:,:),kappaControl_ARMAX);
% %         auxControlMoves = permute(controlMoves.signals.values(:,:,:),[3 2 1]);
% %         for mv = 1:numMV
% %             controlMovesMPC_ARMAX(:,:,mv,simIter) = downsample(auxControlMoves(:,:,mv),kappaControl_ARMAX);
% %         end
%        
%     end
%     %% References
%     % Store references
% %     wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
% %     wRefSimulink(:,:,simIter) = wRef.signals.values(:,:);
%     
% end
%%
armaxModelFile = ['ARMAX_MDL_Sim_Noise_k5_na3_nb3_nc3_1408.mat']; % change to be function of datMatFileSt
load(armaxModelFile);
%% MPC Object creation
armaxModelForMPC = setmpcsignals(armaxModel,'MV',[3 4],'MD',[1 2]);
mpcObj = mpc(armaxModelForMPC);
armaxInMPC = mpcObj.Model.Plant;
armaxSS = ss(armaxModel);
armaxMinSS = minreal(ss(armaxModel));
measuredSys = ss(armaxModel,'measured');

if isequal(measuredSys,armaxSS)
   fprintf('Measured and SS are equal\r\n'); 
end
if isequal(armaxInMPC.A,armaxSS.A) && isequal(armaxInMPC.B,armaxSS.B) && isequal(armaxInMPC.C,armaxSS.C)
   fprintf('armaxInMPC and SS are equal\r\n'); 
end
if isequal(armaxMinSS,armaxSS)
   fprintf('Minimal and SS are equal\r\n'); 
end
% The code above shows that MPC uses ss - which is minimal - to convert
% from armax to state-space. SS DOES NOT HAVE ANY PERTURBATION, because
% measured = ss, so the noise part of the model getsneglected

noiseSys = ss(armaxModel,'noise');
noiseCaca = ss(armaxSS,'noise');
if isequal(noiseCaca,armaxSS)
   fprintf('Since SS has no noise properties, SS(armaxSS,noise) and SS are equal\r\n'); 
end
augmentedSys = ss(armaxModel,'augmented');

armaxIdSS = idss(armaxModel);
tfArmaxIdSS = tf(armaxModel);
idpolyArmaxIdSS = idpoly(armaxIdSS);
armaxIdSSSplit = idss(armaxModel,'split'); % this line generates a model which can´t be opened
if isequal(armaxIdSS.NoiseVariance,armaxModel.NoiseVariance)
   fprintf('IdSS and SS have same NoiseVariance\r\n'); 
end

if isequal(armaxIdSS.A,augmentedSys.A)
   fprintf('IdSS and augmentedSys have same A\r\n'); 
end
% mpcObj2 = mpc(armaxIdSS);
if isequal(armaxIdSSSplit.A,armaxIdSS.A) && ...
    isequal(armaxIdSSSplit.B,armaxIdSS.B) &&...
    isequal(armaxIdSSSplit.C,armaxIdSS.C) && ...
    isequal(armaxIdSSSplit.K,armaxIdSS.K)
    fprintf('IdSS and splitIdSS are the same\r\n'); 
end   
% getEstimator(mpcObj2);
% lala = (armaxIdSS.A-armaxIdSS.K*armaxIdSS.C);
% 
% 
% %%
% A_MPC = mpcObj.Model.Plant.A;
% B_MPC = mpcObj.Model.Plant.B;
% Bu_MPC = B_MPC(:,[3 4]);
% Bv_MPC = B_MPC(:,[1 2]);
% C_MPC = mpcObj.Model.Plant.C;
% [L,M,A,Cm,Bu,Bv,Dvm] = getEstimator(mpcObj);
% % ssMPC = ss(A,[Bu Bv],Cm,0,300);
% % [kest,L,P,M,Z] = kalman(ssMPC,[Bu Bv]'*[Bu Bv],eye(3,3),0);
% Poles = eig(A - L*Cm);
% [L,M,model,index] = getEstimator(mpcObj,'sys');
% max(abs(Poles)) % Just barely stable