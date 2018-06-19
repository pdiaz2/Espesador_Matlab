clear all;
clc;
close all;
%% 
N_y = 15;
N_u = 3;%4
kappaControl = 5;
optimizationMethod = 'PSO';
Dt = 1;
simTime = 2.4e5;

groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
tau_C = kappaControl*tau_R;
stepInDV = false;
dvStepSize = [0 0 0];
dvRealData = false;
imprint = true;
controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize
dateMatFileStr = '1306';
figurePath = 'figures\SemTeleco_Comparison_';
% figurePath = 'figures\mpc_rf_comparisons\open_loop_benchmark';
% Code for names:
    % - BS: BigSearch. Big pop (100+) and big gens (100+)
    % - SS: SmallSearch. Small pop (100-) and small gens (50-)
    % - <MV>S: MV cost is S. Small (0.001- w.r.t other MV cost)
%% Cost Values
totalSimulations = 2;
qCostValuesIterations = [1 1 100 1;
               0.001 0.0001 0.0001 0.0001]; % Open Loop
rCostValuesIterations = [0.001 0.01;
                1e10 1e10];
betaCostValuesIterations = repmat([1 1 1 1],2,1);
lambdaCostValuesIterations = repmat([1 1 1 1],2,1);
%% Reference Values Struct
wValuesStruct.delta = [0 0.01 2 0];
wValuesStruct.changeBool = logical([0 0 0 0]);
wValuesStruct.shape = {'step','step','step','step'};
wValuesStruct.timeToChange = [-1 floor(simTime/22) floor(simTime/10) -1];
wValuesStruct.addNoiseBool = false; %always false for w
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
mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime);
%% Load Parameters
for strFile = 1:2
   load(parametersFileArray{strFile}); 
end
%% Filter Design
bFilter = fir1(10,0.8,kaiser(11,6));
% freqz(bFilter,1);
bFilter = 1;

%% Reference for MPC
wValuesStruct.IC = Y0;
yRef = mpc_generate_input(wValuesStruct);
%% Sensor Input for MPC
yValuesStruct.IC = Y0;
ySensor = mpc_generate_input(yValuesStruct);
for simIter = 1:totalSimulations
    %% Generate Design Parameters
    % Design parameters
    mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod,...
                                qCostValuesIterations(simIter,:),...
                                rCostValuesIterations(simIter,:),...
                                betaCostValuesIterations(simIter,:),...
                                lambdaCostValuesIterations(simIter,:));
    %% Load Parameters
    
    load(parametersFileArray{3}); 
    %% Sim
    rng(120938103);
    load('ThickenerOperation_Septiembre_rawData.mat');
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


    run parametrosEmpty.m

    load('Agosto_SimResults_1304_State.mat');
    tic;
    sim('mpc_rf_thickener.slx');
    toc;
    %% Store Results
    ySimulation(:,:,simIter) = y.signals.values(:,:);
end
%% Plot
close all;
t = inputs.time/3600;
% Titles
titlesCV = {'Torque','Concentración de Descarga','Nivel de Interfaz',...
            'Concentración de Rebose',...
            'Flujo de Sólidos',...
            'Yield Stres',...
            'Flujo de Rebalse'};
titlesMV = {'Flujo de Descarga','Dosis de Floculante'};
titlesDV = {'Flujo de Alimentación','Concentración de Alimentación','Granulometría de Alimentación'};
titlesHyp = {'ExitFlags','F.O. Values'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
% Y Axis Limits
CVLims = [15 22;
         0.65 0.75;
         0 10];
MVLims = [80 120;
          20 30];     
f1 = figure(1);
fig = gcf;
movegui(fig,'southwest')
for cv = 1:numCV-1
    subplot(numCV-1,1,cv)
    for simIter = 1:totalSimulations
        plot(t(startPlotTime:end),ySimulation(startPlotTime:end,cv,simIter),'LineWidth',1)
        hold on
    end
%     title(titlesCV{cv})
    plot(t(startPlotTime:end),wRef.signals.values(startPlotTime:end,cv),'r','LineWidth',1);
%     plot(t(startPlotTime:end),yFiltered.signals.values(startPlotTime:end,cv),'g','LineWidth',1);
    ylabel(CVUnits{cv})
    xlabel('Time (hr)')
    ylim(CVLims(cv,:));
%     ylim auto
    yLegend = ['$y_' num2str(cv) '$'];
    wLegend = ['$w_' num2str(cv) '$'];
%     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
    legend({yLegend,wLegend},'Interpreter','latex');
    grid on
    hold off
end
if imprint
        printName = [figurePath 'mpc_rf_CV_' dateMatFileStr];
        print(printName,'-depsc');
        print(printName,'-djpeg');
end
f2 = figure(2);
fig = gcf;
movegui(fig,'northwest')
for dv = 1:numDV
    subplot(numDV,1,dv)
    plot(t(startPlotTime:end),inputs.signals.values(startPlotTime:end,dv),'LineWidth',1)
%     title(titlesDV{dv})
    ylabel(DVUnits{dv})
    xlabel('Time (hr)')
    dLegend = ['$d_' num2str(dv) '$'];
    legend({dLegend},'Interpreter','latex');
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_DV_' dateMatFileStr];
        print(printName,'-depsc');
        print(printName,'-djpeg');
    end
end
f3 = figure(3);
fig = gcf;
movegui(fig,'northeast')
for mv = 1:numMV
    subplot(numMV,1,mv)
    % Add for
    plot(t(startPlotTime:end),inputs.signals.values(startPlotTime:end,mv+numDV),'LineWidth',1)
%     title(titlesMV{mv})
    ylabel(MVUnits{mv})
    xlabel('Time (hr)')
    ylim(MVLims(mv,:));
    mLegend = ['$u_' num2str(mv) '$'];
    legend({mLegend},'Interpreter','latex');
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_MV_' dateMatFileStr];
        print(printName,'-depsc');
        print(printName,'-djpeg');
    end
end
f4 = figure(4);
fig = gcf;
movegui(fig,'southeast')
[~,hyperResults] = size(gaResults.signals.values);
for hyp = 1:hyperResults
    subplot(hyperResults,1,hyp)
    plot(t,gaResults.signals.values(:,hyp),'*','LineWidth',1)
    title(titlesHyp{hyp})
    xlabel('Time (hr)')
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_GA_' dateMatFileStr];
        print(printName,'-depsc');
        print(printName,'-djpeg');
    end
end
%% Save Specific Parameters
saveTuningName = [figurePath 'mpc_rf_' dateMatFileStr '.mat'];
if imprint
    save(saveTuningName,'qCostValues','rCostValues','betaCostValues',...
                        'lambdaCostValues','N_y','N_u','OptimSolverStruct',...
                        'bFilter','tau_C','kappaControl');
end