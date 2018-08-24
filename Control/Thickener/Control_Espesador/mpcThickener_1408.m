clear all;
clc;
close all;
%% Control Parameters
useMPC_RF = true;
usePID = false;
useMPC_ARMAX = false;
%%%%%%%%%%%%%%%%%
dvRealData = false;
imprint = false;
saveControlResults = false;
% Code for names:
    % - BS: BigSearch. Big pop (100+) and big gens (100+)
    % - SS: SmallSearch. Small pop (100-) and small gens (50-)
    % - <MV>S: MV cost is S. Small (0.001- w.r.t other MV cost)
dateOutputStr = '2108';
dateMatFileStr = '1408';
figurePath = 'figures\piow\';
resultsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsControl\';
%%%%%%%%%%%%%%%
N_y = 18;
N_u = 3;%4
kappaControl_RF = 5;
kappaControl_ARMAX = 5;
optimizationMethod = 'PSO';
Dt = 1;
simTime = 100*3600; % 10*3600
simControlFrom = 6;
simControlTo = 8;
groupBy = 60; % This should be automatic
tau_R = 5*groupBy;
tau_C_RF = kappaControl_RF*tau_R;
tau_C_ARMAX = kappaControl_ARMAX*tau_R;
% stepInDVArray = [false;
%                 false;
%                 false;
%                 true;
%                 true];
% dvStepSizeArray = [
%                 0 0 0;
%                 0 0 0;
%                 0 0 0;
%                 0 -0.1 0;
%                 30 0 0
%                 ];
stepInDVArray = [false;
                false;
                false;
                false;
                false;
                false;
                false;
                false;
                false;
                false];
dvStepSizeArray = [
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0;
                0 0 0
                ];
controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize


%% MPC RF Cost Values

qCostValuesIterations_RF = ...%repmat([1 1 100],simControlTo,1);
                        [
						1 10 100; % OL
						10 10 150; % Bueno, el floculante oscila mucho y no le pega a la cama.
						5 10 150; % Bueno, mucho overshoot en la cama y al final en Cp. Floculante oscila demasiado
						5 240 200; % Bueno pero tiene harto erro en regimen permanente. Podría subirse el costo del Cp_u y de la cama
						1 0.5e-4 100; % Buenisimo, se parece a lo antiguo. Hay que hacer más chico el costo de Cp_u
						1 150e-4 250; % Bueno
                        50 100e-4 50;
                        50 100e-4 500; % Bueno
                        20 100 20;
                        20 100 40
                        ];

rCostValuesIterations_RF = ...%repmat([0.001 0.01],simControlTo,1);
                        [
                        1e14 1e14; % OL
                        0.001 0.01; % Bueno
                        0.004 0.04; % Quizás soltando un poco más el Q_u, porque el error en regimen es clarísimo. Las MV bajan y se quedan quietas después de un tiempo. El valor de la función objetivse queda pegado en 30 y tiene la forma de la cama.
                        0.001 0.01;
                        0.001 0.01;
                        0.001 0.01; % Bien bueno, reaccionan lento las variables manipuladas. Hay que aumentar el esfuerzo sobre la cama (si se quiere)
                        0.001 0.01;
                        0.001 0.01; % Bien bueno, reaccionan lento las variables manipuladas. Hay que aumentar el esfuerzo sobre la cama (si se quiere)
                       	0.005 0.01;
                       	0.005 0.05
                        ];
% rCostValuesIterations = [1e10 1e10;
%                         0.001 0.01];
betaCostValuesIterations_RF = repmat([1 1 1],simControlTo,1);
lambdaCostValuesIterations_RF = repmat([1 1 1],simControlTo,1);

numCV = size(qCostValuesIterations_RF,2);
numMV = size(rCostValuesIterations_RF,2);
%% PI Tuning
KpArray = repmat([90 3],simControlTo,1);

KiArray = repmat([3.6 1e-4],simControlTo,1);

KdArray = repmat([0 0],simControlTo,1);

%% MPC ARIMAX Cost Values
qCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);
%                         [
%                         1 1 100 1;
%                         1 1 100 1;
%                         1 1 100 1];
% qCostValuesIterations = [0.001 0.0001 0.0001 0.0001;
%                         1 1 100 1]; 

rCostValuesIterations_ARMAX = repmat([0.001 0.01],simControlTo,1);
%                         [
%                         0.001 0.01;
%                         0.001 0.01;
%                         ];
% rCostValuesIterations = [1e10 1e10;
%                         0.001 0.01];
betaCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);
lambdaCostValuesIterations_ARMAX = repmat([1 1 1],simControlTo,1);

% CV
boolLimsCV = repmat(logical([0,0,0]),simControlTo,1);
boolECR = repmat(logical([0,0,0]),simControlTo,1);
boolLimsMV = repmat([0,0,0],simControlTo,1);
boolRateLimsMV = repmat([0,0,0],simControlTo,1);
cvECR = repmat([0.5,0.5,0.5],simControlTo,1);
%% Reference Values Struct
wValuesStruct.delta = [
                        0 0 0;
                        0 0 4;
                        0 -0.4 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
                        0 0 0;
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
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0;
                                    0 0 0
                                    ]);
wValuesStruct.shape = {
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
                        'step','step','step';
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
                                -1 -1 floor(simTime/1e3);
                                -1 floor(simTime/1e2) -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
                                -1 -1 -1;
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
%% Sensor Values Struct
yValuesStruct.delta = [0 0 0];
yValuesStruct.changeBool = logical([0 0 0]);
yValuesStruct.shape = {'step','step','step'};
yValuesStruct.timeToChange = [-1 -1 floor(simTime/22)];
yValuesStruct.addNoiseBool = false;
%%
RFParamatersFile = ['RFParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
parametersFileArray = {RFParamatersFile,fixedParametersFileName,designParametersFileName};
%% Generate Fixed parameters
% Fixed parameters
mpc_generate_fixed_parameters(dateMatFileStr);
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
        stepTimeDV(1) = floor(simTime/10);
        stepTimeDV(2) = floor(simTime/10);
        stepTimeDV(3) = simTime;
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
        mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod,...
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
        % For the time being, multiply Cp_u by 100
%         y.signals.values(:,2) = y.signals.values(:,2)*100;

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
        % For the time being, multiply Cp_u by 100
%         y.signals.values(:,2) = y.signals.values(:,2)*100;

        yPID(:,:,simIter) = y.signals.values(:,:);
        uPID(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dPID(:,:,simIter) = inputs.signals.values(:,1:numDV);
    end
    %% MPC - ARMAX
    if useMPC_ARMAX
        tuningStruct.CV.BoolLims = boolLimsCV(simIter,:);
        tuningStruct.CV.BoolECR = boolECR(simIter,:);
        tuningStruct.CV.ECR = cvECR(simIter,:);
        tuningStruct.MV.BoolLims = boolLimsMV(simIter,:);
        tuningStruct.MV.BoolRateLims = boolRateLimsMV(simIter,:);
        mpc_design_armax_object(dateMatFileStr,N_y,N_u,kappaControl_RF,...
                                qCostValuesIterations_ARMAX(simIter,:),...
                                rCostValuesIterations_ARMAX(simIter,:),...
                                betaCostValuesIterations_ARMAX(simIter,:),...
                                tuningStruct);
        load(['mpc_armax_object' dateMatFileStr '.mat']);
        run parametrosEmpty.m
        rng(120938103);
        load('Agosto_SimResults_1304_State.mat');
        tic;
        sim('mpc_armax_thickener.slx');
        toc;

        % Store Results
        % For the time being, multiply Cp_u by 100
%         y.signals.values(:,2) = y.signals.values(:,2)*100;

        yARMAX(:,:,simIter) = y.signals.values(:,:);
        uARMAX(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
        dARMAX(:,:,simIter) = inputs.signals.values(:,1:numDV);
        optMPC_ARMAX(:,:,simIter) = downsample(solverResults.signals.values(:,:),kappaControl_ARMAX);
        yHatMPC_ARMAX(:,:,simIter) = downsample(xHat.signals.values(:,:),kappaControl_ARMAX);
        auxControlMoves = permute(controlMoves.signals.values(:,:,:),[3 2 1]);
        for mv = 1:numMV
            controlMovesMPC_ARMAX(:,:,mv,simIter) = downsample(auxControlMoves(:,:,mv),kappaControl_ARMAX);
        end
       
    end
    %% References
    % Store references
%     wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
    wRefSimulink(:,:,simIter) = wRef.signals.values(:,:);
    
end
% For the time being, multiply Cp_u by 100
% wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
%% Plot
close all;
t = inputs.time/3600;
% Titles
titlesCV = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
titlesMV = {'Discharge Flow','Flocculant Dose'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
titlesDV = {'Feed rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/s','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
titlesHyp = {'ExitFlags','F.O. Values'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
% Colors
controlColors = {'r','b','y'};
controlLineStyle = {'-','-.','--'};
controlMarker = {'*','none','d'};
% Y Axis Limits
CVLims = [15 22;
         65 75;
         0 10];
MVLims = [80 120;
          20 30];
for simIter = simControlFrom:simControlTo
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
        if usePID
            plot(t(startPlotTime:end),yPID(startPlotTime:end,cv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{2},...
                   'LineStyle',controlLineStyle{2})
        end
        
        if useMPC_ARMAX
            plot(t(startPlotTime:end),yMPC_ARMAX(startPlotTime:end,cv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{3},...
                   'LineStyle',controlLineStyle{3})
        end
        title(titlesCV{cv})
        plot(t(startPlotTime:end),wRefSimulink(startPlotTime:end,cv,simIter),...
                'g--','LineWidth',1);
    %     plot(t(startPlotTime:end),yFiltered.signals.values(startPlotTime:end,cv),'g','LineWidth',1);
        ylabel(CVUnits{cv})
        xlabel('Time (hr)')
    %     ylim(CVLims(cv,:));
        ylim auto
        yLegend_1 = ['$y_' num2str(cv) '$ MPC-RF'];
        yLegend_2 = ['$y_' num2str(cv) '$ PI'];
        wLegend = ['$w_' num2str(cv) '$'];
    %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
%         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
        grid on
        hold off
    end
    if imprint
            printName = [figurePath 'control_CV_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end
    f2 = figure(2+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'northwest')
    for dv = 1:numDV
        subplot(numDV,1,dv)

        plot(t(startPlotTime:end),dMPC_RF(startPlotTime:end,dv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{1},...
               'LineStyle',controlLineStyle{1})
        hold on
        ylabel(DVUnits{dv})
        xlabel('Time (hr)')
        dLegend = ['$d_' num2str(dv) '$'];
%         legend({dLegend},'Interpreter','latex');
        grid on
        
    end
    
    if imprint
            printName = [figurePath 'control_DV_IT_' num2str(simIter) '_nl_' dateMatFileStr];
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
        if usePID
            plot(t(startPlotTime:end),uPID(startPlotTime:end,mv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{2},...
                   'LineStyle',controlLineStyle{2})
        end
        
        if useMPC_ARMAX
            plot(t(startPlotTime:end),uMPC_RF(startPlotTime:end,mv,simIter),...
                   'LineWidth',1,...
                   'Color',controlColors{3},...
                   'LineStyle',controlLineStyle{3})
        end
        title(titlesMV{mv})
        ylabel(MVUnits{mv})
        xlabel('Time (hr)')
        ylim(MVLims(mv,:));
        ylim auto
        mLegend_1 = ['$u_' num2str(mv) '$ MPC'];
        mLegend_2 = ['$u_' num2str(mv) '$ PI'];
%         legend({mLegend_1,mLegend_2},'Interpreter','latex');
        grid on
        
    end
    
    if imprint
            printName = [figurePath 'control_MV_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end
    f4 = figure(4+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'southeast')
    [~,hyperResults] = size(solverResults.signals.values);
    [controllerHits,~,~] = size(optMPC_RF);
    for hyp = 1:hyperResults
        subplot(hyperResults,1,hyp)
        if useMPC_RF
            plot(1:controllerHits,optMPC_RF(:,hyp,simIter),...
                'Marker',controlMarker{1},...
                'Color',controlColors{1},...
                'LineStyle','none')
        end
        hold on
        
        if useMPC_ARMAX
            status = optMPC_ARMAX(:,1,simIter);
            successIndex = status >= 1;
            % Under development
            plot(1:controllerHits,optMPC_ARMAX(:,hyp,simIter),...
                'Marker',controlMarker{3},...
                'Color',controlColors{3},...
                'LineStyle','none')
        end
        title(titlesHyp{hyp})
        xlabel(['Controller Sample Hits [' num2str(tau_C_RF/60) 'min/hit]'])
        grid on
        
    end
    if imprint
            printName = [figurePath 'control_OP_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
    end  
%     close all
    pause(1)
end

%% Save Specific Parameters
saveTuningName = [figurePath 'mpcTuning_rf_' dateOutputStr '.mat'];
if imprint
    save(saveTuningName,'qCostValuesIterations_RF','rCostValuesIterations_RF','betaCostValuesIterations_RF',...
                        'lambdaCostValuesIterations_RF','N_y','N_u','OptimSolverStruct',...
                        'bFilter','tau_C_RF','kappaControl_RF','KpArray','KiArray',...
                        'KdArray');
end

if saveControlResults
   save([resultsPath 'ControlResults_' dateOutputStr '.mat'],...
         'yMPC_RF','uMPC_RF','yHatMPC_RF','optMPC_RF','controlMovesMPC_RF',...
         'yPID','uPID',...
         'yMPC_ARMAX','uMPC_ARMAX','yHatMPC_ARMAX','optMPC_ARMAX','controlMovesMPC_ARMAX',...
         'dMPC_RF','wRefSimulink','t',...
         'numCV','numMV','numDV',...
         'simControlFrom','simControlTo','startPlotTime',...
         'figurePath');
end