clear all;
clc;
close all;
%% Control Parameters
useMPC_RF = true;
useMPC_ARMAX = true;
useExpert = true; showMVComponents = false;
usePID = true;
%%%%%%%%%%%%%%%%%
dvRealData = true;
imprint = false;
saveControlResults = false;

% Code for names:
    % - BS: BigSearch. Big pop (100+) and big gens (100+)
    % - SS: SmallSearch. Small pop (100-) and small gens (50-)
    % - <MV>S: MV cost is S. Small (0.001- w.r.t other MV cost)
    % - <tL_CV>: tight limits in CV
    % - <tL_CV_MV>: tight limits in CV and MV
dateOutputStr = '2509';
dateMatFileStr = '1408';
figureFolder = 'figures\';
testName = 'MVP'; % fastARMAX has the best results
% 'figures\tuningMPC_RF\';
figurePath = [figureFolder testName '\'];
resultsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsControl\';
%%%%%%%%%%
simTime = 10*3600; % 10*3600
% 1: OL
% 2: Inertia
% 3: Bed Level
% 4: C_u
% 5: C_f
% 6: Q_f
% 7: UD
simControlFrom = 2;
simControlTo = 2;
%%%%%%%%%%%%%%%
% Time sampling specifications
Dt = 1;
groupBy = 60; 
tau_R = 5*groupBy;
N_y = 18; % 18
N_u = 3;%3 Try 6
kappaControl_RF = 1; %1
kappaControl_ARMAX = 1; % 5
optimizationMethod = 'PSO';
tau_C_RF = kappaControl_RF*tau_R;
tau_C_ARMAX = kappaControl_ARMAX*tau_R;

%% DV interaction specifics
% -  First two components are MD (Q_f, Cp_f)
% - Third Component is "feed particle diameter" added AFTER controller
stepInDVArray = [false;% 1
                false; % 2
                false; % 3
                false; % 4
                true; % 5
                true; % 6
                true; % 7
                false;
                false;
                true];
dvStepSizeArray = [
                0 0 0;% 1
                0 0 0;% 2
                0 0 0;% 3
                0 0 0;% 4
                0 0.08 0;% 5
                -38 0 0;% 6
                0 0 -0.04;% 7
                0 0 0;
                0 0 0;
                0 -0.1 0;
                0 0 0;
                ];

controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize

%% Reference Values Struct
wValuesStruct.delta = [
                        0 0 0;
                        0 0 0;
                        0 0 2;
                        0 -1 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 -0.4 0;
                       ];
% wValuesStruct.changeBool = logical([
%                                     0 0 0;
%                                     0 0 1;
%                                     0 1 0;
%                                     0 0 0;
%                                     0 0 0
%                                     ]);
wValuesStruct.changeBool = logical([
                                    0 0 0;
                                    0 0 0;
                                    0 0 1;
                                    0 1 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 1 0
                                    ]);
wValuesStruct.shape = {
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','mountain','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step'
                        };
wValuesStruct.timeToChange = [
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 floor(simTime/1e1);
                                -1 floor(simTime/1e1) -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 floor(simTime/1e3) -1;
                                ];
wValuesStruct.addNoiseBool = [
                                false; %always false for w
                                false;
                                false;
                                false;
                                false;
                                false;
                                false;
                                false;
                                false;
                                false
                                ];

%% MPC RF Cost Values

qCostValuesIterations_RF = ...%repmat([1 1 100],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1e0 1e2 1e2; % 2
                        1e0 1e2 1e2; % 3 Bastante bueno pero la cama sigue siendo un poco muy alta. Oscilan muchísimos los gpt y en verdad casi todo.
						1e0 1e2 1e2; % 4 Baja más la cama (queda en 3m). No controla muy bien la cama. Quizás hay que ponerle aún más peso.
						1e0 1e2 1e2; % 5 Bueno! No oscila tanto el flujo (aguanta un costo tan bajo).
						1e0 1e2 1e2; % 6 Más o menos malo respecto al resto. Pareciera que el costo del gpt no afecta tanto
						1e0 1e2 1e2; % 7 Bueno pero no es mejor que el caso 2.
                        1e0 1e2 1e2; % 8 Mejor que la 7, pero es igual que el caso 2
                        1e0 1e2 1e2; % 9 Bueno
                        1e0 1e2 1e2; % 10
                        1e0 1e2 1e2  % 11
                        ];

rCostValuesIterations_RF = ...%repmat([0.001 0.01],simControlTo,1);
                        [
                        1e14 1e14; % 1 OL
                        1e-3 1e-2; % 2 
                        1e-3 1e-2; % 3 
                        1e-3 1e-2; % 4 
                        1e-3 1e-2; % 5
                        1e-3 1e-2; % 6 
                        1e-3 1e-2; % 7 
                        1e-3 1e-2; % 8 
                        1e-3 1e-2; % 9 
                       	1e-3 1e-2; % 10
                       	1e-3 1e-2 % 11
                        ];
%%%                        
rCostValuesIterations_RF = rCostValuesIterations_RF*5e1;

betaCostValuesIterations_RF = ...%repmat([1 1 1],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1e0 1e2 1e2; % 2
                        1e0 1e2 1e2; % 3
						1e0 1e2 1e2; % 4 
						1e0 1e2 1e2; % 5
						1e0 1e2 1e3; % 6 
						1e0 1e3 1e2; % 7 
                        1e0 1e2 1e2; % 8 
                        1e0 1e2 1e2; % 9 
                        1e0 1e2 1e2; % 10
                        1e0 1e2 1e2 % 11
                        ];
lambdaCostValuesIterations_RF = ...%repmat([1 1 1],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1 1e2 1e2; % 2
                        1e4 1e4 1e4; % 3
						1e4 1e4 1e4; % 4 
						1e4 1e4 1e4; % 5 
						1e4 1e4 1e4; % 6 
						1e4 1e4 1e4; % 7 
                        1e4 1e4 1e4; % 8 
                        1e4 1e4 1e4; % 9 
                        1e4 1e4 1e4; % 10
                        1e4 1e4 1e4 % 11
                        ];

numCV = size(qCostValuesIterations_RF,2);
numMV = size(rCostValuesIterations_RF,2);
%% MPC ARIMAX Cost Values
qCostValuesIterations_ARMAX = ...%repmat([1 1 100],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1e0 1e2 1e2; % 2
                        1e0 1e2 1e2; % 3 
						1e0 1e2 1e2; % 4 
						1e0 1e2 1e2; % 5 
						1e0 1e2 1e2; % 6 
						1e0 1e2 1e2; % 7 
                        1e0 1e2 1e2; % 8 
                        1e0 1e2 1e2; % 9 
                        1e0 1e2 1e2; % 10
                        1e0 1e2 1e2  % 11
                        ];

rCostValuesIterations_ARMAX = ...%repmat([0.001 0.01],simControlTo,1);
                        [
                        1e14 1e14; % 1 OL
                        1e-3 1e-2; % 2 
                        1e-3 1e-2; % 3 
                        1e-3 1e-2; % 4 
                        1e-3 1e-2; % 5
                        1e-3 1e-2; % 6 
                        1e-3 1e-2; % 7 
                        1e-3 1e-2; % 8 
                        1e-6 1e-6; % 9 
                       	1e-3 1e-2; % 10
                       	1e-3 1e-2 % 11
                        ];
rCostValuesIterations_ARMAX = rCostValuesIterations_ARMAX*5e1;
betaCostValuesIterations_ARMAX = ...%repmat([1 1 1],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1e0 1e2 1e2; % 2
                        1e0 1e2 1e2; % 3
						1e0 1e2 1e2; % 4 
						1e0 1e2 1e2; % 5
						1e0 1e2 1e2; % 6 
						1e0 1e3 1e2; % 7 
                        1e4 1e4 1e4; % 8 
                        1e2 1e2 1e2; % 9 
                        1e2 1e2 1e2; % 10
                        1e2 1e2 1e2 % 11
                        ];
lambdaCostValuesIterations_ARMAX = ...%repmat([1 1 1],simControlTo,1);
                        [
						1 1 1; % 1 OL
						1e4 1e4 1e4; % 2
                        1e4 1e4 1e4; % 3
						1e4 1e4 1e4; % 4 
						1e4 1e4 1e4; % 5 
						1e4 1e4 1e4; % 6 
						1e4 1e4 1e4; % 7 
                        1e4 1e4 1e4; % 8 
                        1e4 1e4 1e4; % 9 
                        1e4 1e4 1e4; % 10
                        1e4 1e4 1e4 % 11
                        ];

% CV
boolLimsCV = repmat(logical([1,1,1]),simControlTo,1);
boolECR = repmat(logical([1,1,1]),simControlTo,1);
boolLimsMV = repmat(logical([1,1]),simControlTo,1);
boolRateLimsMV = repmat(logical([1,1]),simControlTo,1);
cvECR = repmat([0.5,0.5,0.5],simControlTo,1);
%% Expert Tuning
kNeighboursArray = repmat(100,simControlTo,1);
errorRecSizeArray = repmat(400,simControlTo,1);
tau_R_Expert = tau_R;
useMVRegions = false;
cvToInspect = 3;
cvToControlBoolArray = logical([0 0 0; % 1
                                0 1 1; % 2
                                0 1 1; % 3
                                0 1 1; % 4
                                0 1 1; % 5
                                0 1 1; % 6
                                0 1 1; % 7
                                0 1 1; % 8
                                0 1 1; % 9
                                0 1 1; % 10
                                0 1 1 % 11
                                ]);
% K_pExpert = [0 4 10];
% T_iExpert = [1e8 10 10];
K_pExpertArray = repmat([0 1 1],simControlTo,1); % [0 4 4]; [0 4 10]
% T_iExpertArray = repmat([1e8 1e8 1e8],simControlTo,1);
T_iExpertArray = [
                    1e8 1e8 1e8; % 1
                    1e8 1e1 1e1; % 2 [1e8 1e2 1e2]
                    1e8 1e1 1e1; % 3
                    1e8 1e1 1e1; % 4
                    1e8 1e1 1e1; % 5
                    1e8 1e2 1e2; % 6
                    1e8 1e2 1e2; % 7
                    1e8 1e8 1e8; % 8
                    1e8 1e8 1e8; % 9
                    1e1 1e1 1e1; % 10
                    1e1 1e1 1e1; % 11
                    ];
expertRegionsArray = [7; % 1
                     21; % 2
                     21; % 3
                     21; % 4
                     21; % 5
                     21; % 6
                     21; % 7
                     21; % 8
                     21; % 9
                     21; % 10
                     21 % 11
                     ];

minCVErrorThresholdsArray = [
                        -1 -1 -4; % 1
                        -5 -10 -4; % 2
                        -5 -10 -4; % 3
                        -5 -10 -4; % 4
                        -5 -10 -4; % 5
                        -5 -10 -4; % 6
                        -5 -10 -4; % 7
                        -5 -10 -4; % 8
                        -5 -10 -4; % 9
                        -5 -10 -4; % 10
                        -5 -10 -4  % 11
                        ];
maxCVErrorThresholdsArray = [
                            1 1 4; % 1
                            5 10 4; % 2
                            5 10 4; % 3
                            5 10 4; % 4
                            5 10 4; % 5
                            5 10 4; % 6
                            5 10 4; % 7
                            5 10 4; % 8
                            5 10 4; % 9
                            5 10 4; % 10
                            5 10 4 % 11
                            ];
dMVArray = [
            1e-1 1e-2; % 1
            1e-1 1e-2; % 2
            1e-1 1e-2; % 3
            1e-1 1e-2; % 4
            1e-1 1e-2; % 5
            1e-1 1e-2; % 6
            1e-1 1e-2; % 7
            1e-1 1e-2; % 8
            1e-1 1e-2; % 9
            1e-1 1e-2; % 10
            1e-1 1e-2; % 11
            ];
   
smoothFuncSelect = 1;
selectEnvelope = 'GaussianEnvelope';
options.selectEnvelop = selectEnvelope;
mvToCvSigns = [-1 1;
                -1 1;
                1 1];
%% PI Tuning
KpArray = repmat([-90*1e1 3*1e0],simControlTo,1); % 90 -3

KiArray = repmat([-3.6*1e0 1*1e-4],simControlTo,1); % 3.6 -1e-4*1e-4

KdArray = repmat([0*1e-5 -0*1e0],simControlTo,1);

%% Sensor Values Struct
yValuesStruct.delta = [0 0 0];
yValuesStruct.changeBool = logical([0 0 0]);
yValuesStruct.shape = {'step','step','step'};
yValuesStruct.timeToChange = [-1 -1 floor(simTime/22)];
yValuesStruct.addNoiseBool = false;
%%
RFParamatersFile = ['RFParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateOutputStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateOutputStr '.mat'];
parametersFileArray = {RFParamatersFile,fixedParametersFileName,designParametersFileName};
%% Generate Fixed parameters
% Fixed parameters
mpc_generate_fixed_parameters(dateOutputStr);
%% Load Parameters
for strFile = 1:2
   load(parametersFileArray{strFile}); 
end
%% Filter Design
bFilter = fir1(10,0.8,kaiser(11,6));
% freqz(bFilter,1);
bFilter = 1;

%% Reference for MPC
wValuesStruct.IC = repmat(Y0,simControlTo,1);
for simIter = simControlFrom:simControlTo
    wValuesIterStruct.delta = wValuesStruct.delta(simIter,:);
    wValuesIterStruct.changeBool = wValuesStruct.changeBool(simIter,:);
    wValuesIterStruct.shape = wValuesStruct.shape(simIter,:);
    wValuesIterStruct.timeToChange = wValuesStruct.timeToChange(simIter,:);
    wValuesIterStruct.addNoiseBool = wValuesStruct.addNoiseBool(simIter,:);
    wValuesIterStruct.IC = wValuesStruct.IC(simIter,:);
    yRefArray(simIter).yRef = mpc_generate_input(wValuesIterStruct);
end
%% Sensor Input for MPC - RF
yValuesStruct.IC = Y0;
ySensor = mpc_generate_input(yValuesStruct);
%% Control Simulation
for simIter = simControlFrom:simControlTo
    %% DV Design
    if (stepInDVArray(simIter))
        stepTimeDV(1) = floor(4*simTime/10); %4
        stepTimeDV(2) = floor(6*simTime/10);
        stepTimeDV(3) = floor(5*simTime/10);
    else
        stepTimeDV(1) = simTime;
        stepTimeDV(2) = simTime;
        stepTimeDV(3) = simTime;
    end
    dvStepSize = dvStepSizeArray(simIter,:);
    %% Sim
    
    load('ThickenerOperation_Septiembre_BF.mat');
    yRef = yRefArray(simIter).yRef;
    Q_f.time = linspace(0,simTime,simTime/Dt)';
    Cp_f.time = linspace(0,simTime,simTime/Dt)';
    p1_f.time = linspace(0,simTime,simTime/Dt)';
    if dvRealData
        Q_f.signals.values = BigData.PreProcessed(7,1:simTime)';
        Cp_f.signals.values = wt_f(1:simTime)'/100;
        p1_f.signals.values = 0.356*ones(1,simTime)';
    else
       Q_f.signals.values = D0(1)*ones(1,simTime)';
       Cp_f.signals.values = D0(2)*ones(1,simTime)';
       p1_f.signals.values = 0.356*ones(1,simTime)';
    end

    %% MPC - Random Forest
    if useMPC_RF
    % Design parameters
        mpc_generate_design_parameters(dateOutputStr,N_y,N_u,optimizationMethod,...
                                    qCostValuesIterations_RF(simIter,:),...
                                    rCostValuesIterations_RF(simIter,:),...
                                    betaCostValuesIterations_RF(simIter,:),...
                                    lambdaCostValuesIterations_RF(simIter,:));
        %Load Parameters
        load(parametersFileArray{3}); 

        run parametrosEmpty.m
        rng(120938103);
        load('Agosto_SimResults_1304_State.mat');
        tic;
        sim('mpc_rf_thickener.slx');
        toc;
        % Store Results
        yMPC_RF(:,:,simIter) = y.signals.values(:,:);
        uMPC_RF(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dMPC_RF(:,:,simIter) = inputs.signals.values(:,1:numDV);
        optMPC_RF(:,:,simIter) = downsample(solverResults.signals.values(:,:),tau_C_RF);
        auxYHat = permute(yHat.signals.values(:,:,:),[3 2 1]);
        for cv = 1:numCV
            yHatMPC_RF(:,:,cv,simIter) = downsample(auxYHat(:,:,cv),tau_C_RF);
        end
        auxControlMoves = permute(controlMoves.signals.values(:,:,:),[3 2 1]);
        for mv = 1:numMV
            controlMovesMPC_RF(:,:,mv,simIter) = downsample(auxControlMoves(:,:,mv),tau_C_RF);
        end
    end
    %% MPC - ARMAX
    if useMPC_ARMAX
        tuningStruct.CV.BoolLims = boolLimsCV(simIter,:);
        tuningStruct.CV.BoolECR = boolECR(simIter,:);
        tuningStruct.CV.ECR = cvECR(simIter,:);
        tuningStruct.MV.BoolLims = boolLimsMV(simIter,:);
        tuningStruct.MV.BoolRateLims = boolRateLimsMV(simIter,:);
        mpc_design_armax_object(dateOutputStr,N_y,N_u,kappaControl_RF,...
                                qCostValuesIterations_ARMAX(simIter,:),...
                                rCostValuesIterations_ARMAX(simIter,:),...
                                betaCostValuesIterations_ARMAX(simIter,:),...
                                tuningStruct);
        load(['mpc_armax_object_' dateOutputStr '.mat']);
        run parametrosEmpty.m
        rng(120938103);
        load('Agosto_SimResults_1304_State.mat');
        tic;
        sim('mpc_armax_thickener.slx');
        toc;
        % Store results
        yMPC_ARMAX(:,:,simIter) = y.signals.values(:,:);
        uMPC_ARMAX(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dMPC_ARMAX(:,:,simIter) = inputs.signals.values(:,1:numDV);
        optMPC_ARMAX(:,:,simIter) = downsample(solverResults.signals.values(:,:),kappaControl_ARMAX);
        xHatMPC_ARMAX(:,:,simIter) = downsample(xHat.signals.values(:,:),kappaControl_ARMAX);
        auxControlMoves = permute(controlMoves.signals.values(:,:,:),[3 2 1]);
        for mv = 1:numMV
            controlMovesMPC_ARMAX(:,:,mv,simIter) = downsample(auxControlMoves(:,:,mv),kappaControl_ARMAX);
        end
       
    end
    %% Expert Control
    if useExpert
        %Load Parameters
        load(parametersFileArray{3});
        % Which CVs to Control
        cvToControlBool = cvToControlBoolArray(simIter,:);
        % Size of memory for CVs
        errorRecSize = errorRecSizeArray(simIter);
        % Softening shape
        kNeighbours = kNeighboursArray(simIter);
        integralEnvelope = myIntegralEnvelope(ones(1,errorRecSizeArray(simIter)),selectEnvelope);
        % Regions for each CV
        for cv = 1:numCV
           errorCVThr(cv,:) = linspace(maxCVErrorThresholdsArray(simIter,cv),...
                                        minCVErrorThresholdsArray(simIter,cv),...
                                        expertRegionsArray(simIter)); 
        end
        % Finess control zone
        intErrorThr = zeros(numCV,expertRegionsArray(simIter));
        ceroPosition = find(errorCVThr(1,:) == 0);
        intErrorThr(:,ceroPosition) = 1*ones(numCV,1);
        intErrorThr(:,ceroPosition+1) = 1*ones(numCV,1);
        % Regions and bounds for MV
        mvLims = [uLowLims(:,1) uHighLims(:,2)];
        % Kp and T_i
        K_pExpert = K_pExpertArray(simIter,:);
        T_iExpert = T_iExpertArray(simIter,:);
        dMV = dMVArray(simIter,:);
        for mv = 1:numMV
           mvExpertLimits(mv,:) = linspace(mvLims(mv,1),mvLims(mv,2),expertRegionsArray(simIter));
        end
        
        if useMVRegions
            % Lower bounds for MV for each CV region
            mvRegions(:,:,1) = [mvExpertLimits(:,1:end-1) mvExpertLimits(:,end-1)];
            % Upper bounds
            mvRegions(:,:,2) = [mvExpertLimits(:,2:end) mvExpertLimits(:,end)];
        else
            % Replicate most inferior/superior bound
            mvRegions(:,:,1) = repmat(mvExpertLimits(:,1),1,expertRegionsArray(simIter));
            mvRegions(:,:,2) = repmat(mvExpertLimits(:,end),1,expertRegionsArray(simIter));
        end
        run parametrosEmpty.m
        rng(120938103);
        load('Agosto_SimResults_1304_State.mat');
        tic;
        sim('expert_control_thickener.slx');
        toc;
         % Store Results
        yExpert(:,:,simIter) = y.signals.values(:,:);
        uExpert(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dExpert(:,:,simIter) = inputs.signals.values(:,1:numDV);
        auxMVComponents = permute(mvComponents.signals.values(:,:,:),[3 2 1]);
        for mv = 1:numMV
            mvComponentsExp(:,:,mv,simIter) = downsample(auxMVComponents(:,:,mv),tau_R);
        end
        explanationsExpert(:,:,simIter) = downsample(expGenerator.signals.values(:,:),tau_R);
        clear errorCVThr intErrorThr mvExpertLimits mvRegions;
    end
    %% PI Control
    if usePID
        Kp = KpArray(simIter,:);
        Ki = KiArray(simIter,:);
        Kd = KdArray(simIter,:);
        run parametrosEmpty.m
        rng(120938103);
        load('Agosto_SimResults_1304_State.mat');
        tic;
        sim('pid_thickener.slx');
        toc;
         % Store Results
        yPID(:,:,simIter) = y.signals.values(:,:);
        uPID(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dPID(:,:,simIter) = inputs.signals.values(:,1:numDV);
    end
    
    %% References
    % Store references
%     if usePID && ~useMPC_ARMAX && ~useMPC_RF && ~useExpert
%         wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
%     end
    if usePID
        wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
    end
    wRefSimulink(:,:,simIter) = wRef.signals.values(:,:);
    
end
% For the time being, multiply Cp_u by 100
% wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
%% Plot
clc;
close all;
t = inputs.time/3600;
% Titles
titlesCV = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
titlesMV = {'Underflow Rate','Flocculant Dosage'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
titlesDV = {'Feed Rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/hr','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
titlesHyp = {'ExitFlags','O.F. Values'};
titlesExpert = {'Torque Contribution','Concentration Contribution','Interface Contribution';
                'Proportional Action','Integral Action','Derivative Action'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/hr','%','N/A'};
% Colors
controlColors = {'r','k','g','m'};
controlLineStyle = {'-','--','-.',':'};
controlMarker = {'*','d','o','none'};
% Y Axis Limits
usePlotLims = false;
CVLims = [20 22;
         72 75;
         0 8];
MVLims = [65 130;
          18 32];
DVLims = [280 400;
          15 45];
controllersUsedStr = [num2str(useMPC_RF) num2str(useExpert) num2str(usePID) num2str(useMPC_ARMAX)];
for simIter = simControlFrom:simControlTo
    iterInfo = '                               Iteration %d has figures %d,%d,%d,%d\r\n';
    iterMatrix = [simIter,1+(simIter-1)*4,2+(simIter-1)*4,3+(simIter-1)*4,4+(simIter-1)*4];
    fprintf(iterInfo,iterMatrix)
    f1 = figure(1+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'southwest')
    
    for cv = 1:numCV
        subplot(numCV,1,cv)
        if useMPC_RF
            plot(t(startPlotTime:end),yMPC_RF(startPlotTime:end,cv,simIter),...
                    'LineWidth',1,...
                    'Color',controlColors{1},...
                    'LineStyle',controlLineStyle{1})
        end
        hold on
        if useMPC_ARMAX
            plot(t(startPlotTime:end),yMPC_ARMAX(startPlotTime:end,cv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{2},...
                   'LineStyle',controlLineStyle{2})
        end
        if useExpert
            plot(t(startPlotTime:end),yExpert(startPlotTime:end,cv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{3},...
                   'LineStyle',controlLineStyle{3})
        end
        if usePID
            plot(t(startPlotTime:end),yPID(startPlotTime:end,cv,simIter),...
                   'LineWidth',1.75,...
                   'Color',controlColors{4},...
                   'LineStyle',controlLineStyle{4},...
                   'Marker',controlMarker{4},'MarkerSize',0.8)
        end
        
        
        title(titlesCV{cv})
%         plot(t(startPlotTime:end),wRefSimulink(startPlotTime:end,cv,simIter),...
%                 'b--','LineWidth',1);
    %     plot(t(startPlotTime:end),yFiltered.signals.values(startPlotTime:end,cv),'g','LineWidth',1);
        ylabel(CVUnits{cv})
        xlabel('Time [hr]')
        if usePlotLims
            ylim(CVLims(cv,:));
            useLimStr = '';
        else
            useLimStr = 'nl_';
            ylim auto
        end
        yLegend_1 = ['$y_' num2str(cv) '$ MPC-RF'];
        yLegend_2 = ['$y_' num2str(cv) '$ PI'];
        wLegend = ['$w_' num2str(cv) '$'];
    %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
%         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
        grid on
        hold off
    end
    if imprint
            printName = [figurePath 'cv_' controllersUsedStr...
                        '_IT_' num2str(simIter) '_' useLimStr...
                        'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end
    f2 = figure(2+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'northwest')
    for dv = 1:numDV
        subplot(numDV,1,dv)
        if dv == 2
            kPlot = 100;
        else
            kPlot = 1;
        end
        if useMPC_RF
            plot(t(startPlotTime:end),kPlot*dMPC_RF(startPlotTime:end,dv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{1},...
                   'LineStyle',controlLineStyle{1})
        end
        if useMPC_ARMAX
            plot(t(startPlotTime:end),kPlot*dMPC_ARMAX(startPlotTime:end,dv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{1},...
                   'LineStyle',controlLineStyle{1})
        end
        hold on
        title(titlesDV{dv})
        ylabel(DVUnits{dv})
        xlabel('Time [hr]')
        if usePlotLims
            ylim(DVLims(dv,:));
            useLimStr = '';
        else
            useLimStr = 'nl_';
            ylim auto
        end
        dLegend = ['$d_' num2str(dv) '$'];
%         legend({dLegend},'Interpreter','latex');
        grid on
        
    end
    
    if imprint
            printName = [figurePath 'dv_' controllersUsedStr...
                        '_IT_' num2str(simIter) '_' useLimStr...
                        'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end
        
    
    f3 = figure(3+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'northeast')
    for mv = 1:numMV
        subplot(numMV,1,mv)
        % Add for
        if useMPC_RF
            plot(t(startPlotTime:end),uMPC_RF(startPlotTime:end,mv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{1},...
                   'LineStyle',controlLineStyle{1})
        end
        hold on
        if useMPC_ARMAX
            plot(t(startPlotTime:end),uMPC_ARMAX(startPlotTime:end,mv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{2},...
                   'LineStyle',controlLineStyle{2})
        end
        if useExpert
            plot(t(startPlotTime:end),uExpert(startPlotTime:end,mv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{3},...
                   'LineStyle',controlLineStyle{3})
        end
        if usePID
            plot(t(startPlotTime:end),uPID(startPlotTime:end,mv,simIter),...
                   'LineWidth',1.75,...
                   'Color',controlColors{4},...
                   'LineStyle',controlLineStyle{4},...
                   'Marker',controlMarker{4},'MarkerSize',0.8)
        end
        
        
        title(titlesMV{mv})
        ylabel(MVUnits{mv})
        xlabel('Time [hr]')
        if usePlotLims
            ylim(MVLims(mv,:));
        else
            ylim auto
        end
        mLegend_1 = ['$u_' num2str(mv) '$ MPC'];
        mLegend_2 = ['$u_' num2str(mv) '$ PI'];
%         legend({mLegend_1,mLegend_2},'Interpreter','latex');
        grid on
        
    end
    
    if imprint
            printName = [figurePath 'mv_' controllersUsedStr...
                        '_IT_' num2str(simIter) '_' useLimStr...
                        'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end
    
    if useMPC_ARMAX || useMPC_RF
        f4 = figure(4+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'southeast')
        [~,hyperResults] = size(solverResults.signals.values);
        for hyp = 1:hyperResults
            subplot(hyperResults,1,hyp)
            if useMPC_RF
                [controllerHits,~,~] = size(optMPC_RF);
                plot((1:controllerHits)*tau_C_RF/3600,optMPC_RF(:,hyp,simIter),...
                    'Marker',controlMarker{1},...
                    'Color',controlColors{1},...
                    'LineStyle','none')
            end
            hold on

            if useMPC_ARMAX
                [controllerHits,~,~] = size(optMPC_ARMAX);
                if hyp == 1
                    solverSteps_ARMAX(:,simIter) = optMPC_ARMAX(:,hyp,simIter);
                    successIndex = solverSteps_ARMAX >= 1;
                    optMPC_ARMAX(successIndex(:,simIter),hyp,simIter) = 1;
                end
                % Under development
                plot((1:controllerHits)*tau_C_ARMAX/3600,optMPC_ARMAX(:,hyp,simIter),...
                    'Marker',controlMarker{2},...
                    'Color',controlColors{2},...
                    'LineStyle','none')
            end
            title(titlesHyp{hyp})
%             xlabel(['Controller Sample Hits [' num2str(tau_C_RF/60) 'min/hit]'])
            xlabel(['Time [hr]'])
            xlim([0 simTime/3600])
            grid on

        end
        if imprint
                printName = [figurePath 'op_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
    % Expert plots
    if useExpert && ~useMPC_RF && ~useMPC_ARMAX
        f4 = figure(4+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'northwest')
        controllerHits = size(explanationsExpert,1);
        for cv = 1:numCV
            subplot(numCV,1,cv)
            plot((1:controllerHits)*tau_R_Expert/3600,explanationsExpert(:,cv,simIter),...
                'Marker',controlMarker{3},...
                'Color',controlColors{3},...
                'LineStyle','none')
            title(titlesCV{cv})
%             xlabel(['Controller Sample Hits [' num2str(tau_R/60) 'min/hit]'])
            xlabel(['Time [hr]'])
            xlim([0 simTime/3600])
            grid on
        end
        if imprint
                printName = [figurePath 'expExp_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            dateOutputStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
%     close all
    pause(1)
end

for simIter = simControlFrom:simControlTo
    
    
    if showMVComponents
        figure
        fig = gcf;
        movegui(fig,'southeast')
        for comp = 1:3
            subplot(3,1,comp)
            % Only plotting MV(1)
            plot((1:controllerHits)*tau_R_Expert/3600,mvComponentsExp(:,comp,1,simIter),...
                'Marker',controlMarker{3},...
                'Color',controlColors{3},...
                'LineStyle','none')
            if cvToInspect == -1
                title(titlesExpert{1,comp})
            else
                title(titlesExpert{2,comp})
            end
%             xlabel(['Controller Sample Hits [' num2str(tau_R/60) 'min/hit]']);
            xlabel(['Time [hr]'])
            xlim([0 simTime/3600])
        end
    end
end
%% Performance Indicators
% Only calculate performance when all controlles are being mentioned
ControllerResultsStruct = struct;
controllersUsed = [useMPC_RF useMPC_ARMAX useExpert usePID];
% Pile everything into one big struct}
cont = 1;

if useMPC_RF
    ControllerResultsStruct(cont).cvTimeSeries = yMPC_RF(:,1:numCV,:);
    ControllerResultsStruct(cont).mvTimeSeries = uMPC_RF(:,1:numMV,:);
    ControllerResultsStruct(cont).Name = 'MPC_RF';
    cont = cont+1;
end
if useMPC_ARMAX
    ControllerResultsStruct(cont).cvTimeSeries = yMPC_ARMAX(:,1:numCV,:);
    ControllerResultsStruct(cont).mvTimeSeries = uMPC_ARMAX(:,1:numMV,:);
    ControllerResultsStruct(cont).Name = 'MPC_ARMAX';
    cont = cont+1;
end
if useExpert
    ControllerResultsStruct(cont).cvTimeSeries = yExpert(:,1:numCV,:);
    ControllerResultsStruct(cont).mvTimeSeries = uExpert(:,1:numMV,:);
    ControllerResultsStruct(cont).Name = 'EXPERT';
    cont = cont+1;
end
if usePID
    ControllerResultsStruct(cont).cvTimeSeries = yPID(:,1:numCV,:);    
    ControllerResultsStruct(cont).mvTimeSeries = uPID(:,1:numMV,:);
    ControllerResultsStruct(cont).Name = 'PID';
    cont = cont+1;
end


    

%% Save Specific Parameters
saveTuningName = [figurePath 'mpcTuning_rf_' dateOutputStr '.mat'];
if imprint
    save(saveTuningName,'qCostValuesIterations_RF','rCostValuesIterations_RF','betaCostValuesIterations_RF',...
                        'lambdaCostValuesIterations_RF','N_y','N_u','OptimSolverStruct',...
                        'bFilter','tau_C_RF','kappaControl_RF','KpArray','KiArray',...
                        'KdArray',...
                        'qCostValuesIterations_ARMAX','rCostValuesIterations_ARMAX','betaCostValuesIterations_ARMAX',...
                        'lambdaCostValuesIterations_ARMAX');
end

if saveControlResults
   save([resultsPath 'ControlResults_' testName '_' dateOutputStr '.mat'],...
         'ControllerResultsStruct','yHatMPC_RF','optMPC_RF','controlMovesMPC_RF',...
         'xHatMPC_ARMAX','optMPC_ARMAX','controlMovesMPC_ARMAX',...
         'dMPC_RF','wRefSimulink','t',...
         'numCV','numMV','numDV',...
         'simControlFrom','simControlTo','startPlotTime',...
         'useMPC_RF','useMPC_ARMAX',...
         'tau_C_ARMAX','tau_C_RF',...
         'N_y','N_u',...
         'mpcObj',...
         'figurePath');
end