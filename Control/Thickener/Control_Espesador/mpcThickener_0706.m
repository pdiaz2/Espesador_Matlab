clear all;
clc;
close all;
%% 
N_y = 15;
N_u = 3;%4
kappaControl = 5;
optimizationMethod = 'PSO';
Dt = 1;
simTime = 20*3600; % 10*3600
% simTime = 3600;
simControlFrom = 1;
simControlTo = 1;
groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
tau_C = kappaControl*tau_R;
stepInDVArray = [false;
            false;
            false;
            true;
            true];
dvStepSizeArray = [
                0 0 0;
                0 0 0;
                0 0 0;
                0 -0.1 0;
                30 0 0
                ];
dvRealData = false;
imprint = false;
controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize
dateMatFileStr = '2407';
figurePath = 'figures\opcConnection\';
% Code for names:
    % - BS: BigSearch. Big pop (100+) and big gens (100+)
    % - SS: SmallSearch. Small pop (100-) and small gens (50-)
    % - <MV>S: MV cost is S. Small (0.001- w.r.t other MV cost)
%% MPC Cost Values

qCostValuesIterations = repmat([1 1 100 1],simControlTo,1);
%                         [
%                         1 1 100 1;
%                         1 1 100 1;
%                         1 1 100 1];
% qCostValuesIterations = [0.001 0.0001 0.0001 0.0001;
%                         1 1 100 1]; 

rCostValuesIterations = repmat([0.001 0.01],simControlTo,1);
%                         [
%                         0.001 0.01;
%                         0.001 0.01;
%                         ];
% rCostValuesIterations = [1e10 1e10;
%                         0.001 0.01];
betaCostValuesIterations = repmat([1 1 1 1],simControlTo,1);
lambdaCostValuesIterations = repmat([1 1 1 1],simControlTo,1);
%% PI Tuning
KpArray = repmat([90 3],simControlTo,1);
%             [
%             90 3;
%             90 3
%             ];
KiArray = repmat([3.6 1e-4],simControlTo,1);
%             [
%             3.6 1e-4;
%             3.6 1e-4
%             ];
KdArray = repmat([0 0],simControlTo,1);
%             [
%             0 0;
%             0 0;
%             ];
%% Reference Values Struct
wValuesStruct.delta = [
                        0 0 0 0;
                        0 0 4 0;
                        0 -0.004 0 0;
                        0 0 0 0;
                        0 0 0 0;
                       ];
wValuesStruct.changeBool = logical([
                                    0 0 0 0;
                                    0 0 1 0;
                                    0 1 0 0;
                                    0 0 0 0;
                                    0 0 0 0
                                    ]);
wValuesStruct.shape = {
                        'step','step','step','step';
                        'step','step','step','step';
                        'step','step','step','step';
                        'step','step','step','step';
                        'step','step','step','step'
                        };
wValuesStruct.timeToChange = [
                                -1 -1 -1 -1;
                                -1 -1 floor(simTime/1e3) -1;
                                -1 floor(simTime/1e2) -1 -1;
                                -1 -1 -1 -1;
                                -1 -1 -1 -1
                                ];
wValuesStruct.addNoiseBool = [
                                false; %always false for w
                                false;
                                false;
                                false;
                                false;
                                ];
%% Sensor Values Struct
yValuesStruct.delta = [0 0 0 0];
yValuesStruct.changeBool = logical([0 0 0 0]);
yValuesStruct.shape = {'step','step','step','step'};
yValuesStruct.timeToChange = [-1 -1 floor(simTime/22) -1];
yValuesStruct.addNoiseBool = false;
%%
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
parametersFileArray = {delayParametersFile,fixedParametersFileName,designParametersFileName};
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
        p1_f.signals.values = D0(3)*ones(1,simTime)';
    else
       Q_f.signals.values = D0(1)*ones(1,simTime)';
       Cp_f.signals.values = D0(2)*ones(1,simTime)';
       p1_f.signals.values = D0(3)*ones(1,simTime)';
    end

    %% MPC - Random Forest
    % Design parameters
    mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod,...
                                qCostValuesIterations(simIter,:),...
                                rCostValuesIterations(simIter,:),...
                                betaCostValuesIterations(simIter,:),...
                                lambdaCostValuesIterations(simIter,:));
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
    y.signals.values(:,2) = y.signals.values(:,2)*100;
    
    yMPC_RF(:,:,simIter) = y.signals.values(:,:);
    uMPC_RF(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
    dMPC_RF(:,:,simIter) = inputs.signals.values(:,1:numDV);
    optMPC_RF(:,:,simIter) = gaResults.signals.values(:,:);
    %% PI Control
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
    y.signals.values(:,2) = y.signals.values(:,2)*100;
    
    yPID(:,:,simIter) = y.signals.values(:,:);
    uPID(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
    dPID(:,:,simIter) = inputs.signals.values(:,1:numDV);
    %% MPC - ARMAX
    mpc_design_armax_object(dateMatFileStr,N_y,N_u,kappaControl,...
                            qCostValuesIterations(simIter,:),...
                            rCostValuesIterations(simIter,:),...
                            betaCostValuesIterations(simIter,:),...
                            lambdaCostValuesIterations(simIter,:));
    load(['mpc_armax_object' dateMatFileStr '.mat']);
    run parametrosEmpty.m
    rng(120938103);
    load('Agosto_SimResults_1304_State.mat');
    tic;
    sim('mpc_armax_thickener.slx');
    toc;
    
    % Store Results
    % For the time being, multiply Cp_u by 100
    y.signals.values(:,2) = y.signals.values(:,2)*100;
    
    yARMAX(:,:,simIter) = y.signals.values(:,:);
    uARMAX(:,:,simIter) = inputs.signals.values(:,1+numDV:end);
    dARMAX(:,:,simIter) = inputs.signals.values(:,1:numDV);
    optMPC_ARMAX(:,:,simIter) = gaResults.signals.values(:,:);
    % Store references
    wRef.signals.values(:,2) = wRef.signals.values(:,2)*100;
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
controlColors = {'r','b'};
controlLineStyle = {'-','-.'};
controlMarker = {'none','*'};
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
    for cv = 1:numCV-1
        subplot(numCV-1,1,cv)

        plot(t(startPlotTime:end),yMPC_RF(startPlotTime:end,cv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{1},...
               'LineStyle',controlLineStyle{1})
        hold on
        plot(t(startPlotTime:end),yPID(startPlotTime:end,cv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{2},...
               'LineStyle',controlLineStyle{2})
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
        plot(t(startPlotTime:end),dPID(startPlotTime:end,dv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{1},...
               'LineStyle',controlLineStyle{2})
        title(titlesDV{dv})
        ylabel(DVUnits{dv})
        xlabel('Time (hr)')
        dLegend = ['$d_' num2str(dv) '$'];
%         legend({dLegend},'Interpreter','latex');
        grid on
        if imprint
            printName = [figurePath 'control_DV_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
        end
    end
    f3 = figure(3+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'northeast')
    for mv = 1:numMV
        subplot(numMV,1,mv)
        % Add for
        plot(t(startPlotTime:end),uMPC_RF(startPlotTime:end,mv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{1},...
               'LineStyle',controlLineStyle{1})
        hold on
        plot(t(startPlotTime:end),uPID(startPlotTime:end,mv,simIter),...
               'LineWidth',1,...
               'Color',controlColors{2},...
               'LineStyle',controlLineStyle{2})
        title(titlesMV{mv})
        ylabel(MVUnits{mv})
        xlabel('Time (hr)')
        ylim(MVLims(mv,:));
        ylim auto
        mLegend_1 = ['$u_' num2str(mv) '$ MPC'];
        mLegend_2 = ['$u_' num2str(mv) '$ PI'];
%         legend({mLegend_1,mLegend_2},'Interpreter','latex');
        grid on
        if imprint
            printName = [figurePath 'control_MV_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
        end
    end
    f4 = figure(4+(simIter-1)*4);
    fig = gcf;
    movegui(fig,'southeast')
    [~,hyperResults] = size(gaResults.signals.values);
    for hyp = 1:hyperResults
        subplot(hyperResults,1,hyp)
        plot(t,optMPC_RF(:,hyp,simIter),'*',...
            'Color',controlColors{1},...
            'LineWidth',1)
        title(titlesHyp{hyp})
        xlabel('Time (hr)')
        grid on
        if imprint
            printName = [figurePath 'control_OP_IT_' num2str(simIter) '_nl_' dateMatFileStr];
            print(printName,'-depsc');
            print(printName,'-djpeg');
        end
    end
end
%% Save Specific Parameters
saveTuningName = [figurePath 'mpc_rf_' dateMatFileStr '.mat'];
if imprint
    save(saveTuningName,'qCostValues','rCostValues','betaCostValues',...
                        'lambdaCostValues','N_y','N_u','OptimSolverStruct',...
                        'bFilter','tau_C','kappaControl','KpArray','KiArray',...
                        'KdArray');
end