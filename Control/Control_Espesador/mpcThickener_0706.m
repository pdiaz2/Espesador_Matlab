clear all;
clc;
close all;
%% 
N_y = 10;
N_u = 3;
kappaControl = 5;
Dt = 1;
simTime = 1.3e5;
groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
tau_C = kappaControl*tau_R;
stepInDV = false;
dvStepSize = [0 0 0];
dvRealData = false;
imprint = false;
controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize
dateMatFileStr = '0706';
figurePath = 'figures\';
%%
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
%% Generate parameters
% Fixed parameters
mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime);
% Design parameters
mpc_generate_design_parameters(dateMatFileStr,N_y,N_u);
%% Filter Design
bFilter = fir1(10,0.8,kaiser(11,6));
% freqz(bFilter,1);
bFilter = 1;
%% Load Parameters
for strFile = 1:3
   load(parametersFileArray{strFile}); 
end
%% Reference for MPC
wValuesStruct.IC = Y0;
yRef = mpc_generate_input(wValuesStruct);
%% Sensor Input for MPC
yValuesStruct.IC = Y0;
ySensor = mpc_generate_input(yValuesStruct);
%%
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
%% Plot
close all;
t = inputs.time/3600;
titlesCV = {'Torque','Concentración de Descarga','Nivel de Interfaz',...
            'Concentración de Rebose',...
            'Flujo de Sólidos',...
            'Yield Stres',...
            'Flujo de Rebalse'};
titlesMV = {'Flujo de Descarga','Dosis de Floculante'};
titlesDV = {'Flujo de Alimentación','Concentración de Alimentación','Granulometría de Alimentación'};
titlesHyp = {'ExitFlags','F.O. Values'};
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
figure(1)
for cv = 1:numCV-1
    subplot(numCV-1,1,cv)
    plot(t(startPlotTime:end),y.signals.values(startPlotTime:end,cv),'LineWidth',1)
    hold on
    title(titlesCV{cv})
    plot(t(startPlotTime:end),wRef.signals.values(startPlotTime:end,cv),'r','LineWidth',1);
%     plot(t(startPlotTime:end),yFiltered.signals.values(startPlotTime:end,cv),'g','LineWidth',1);
    ylabel(CVUnits{cv})
    xlabel('Tiempo (hr)')
    yLegend = ['$y_' num2str(cv) '$'];
    wLegend = ['$w_' num2str(cv) '$'];
%     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
    legend({yLegend,wLegend},'Interpreter','latex');
    grid on
    hold off
    if imprint
        printName = [figurePath 'mpc_rf_CV_' dateMatFileStr];
        print(printName,'-depsc');
    end
end
figure(2)
for dv = 1:numDV
    subplot(numDV,1,dv)
    plot(t(startPlotTime:end),inputs.signals.values(startPlotTime:end,dv),'LineWidth',1)
    title(titlesDV{dv})
    ylabel(DVUnits{dv})
    xlabel('Tiempo (hr)')
    dLegend = ['$d_' num2str(dv) '$'];
    legend({dLegend},'Interpreter','latex');
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_DV_' dateMatFileStr];
        print(printName,'-depsc');
    end
end
figure(3)
for mv = 1:numMV
    subplot(numMV,1,mv)
    plot(t(startPlotTime:end),inputs.signals.values(startPlotTime:end,mv+numDV),'LineWidth',1)
    title(titlesMV{mv})
    ylabel(MVUnits{mv})
    xlabel('Tiempo (hr)')
    mLegend = ['$u_' num2str(mv) '$'];
    legend({mLegend},'Interpreter','latex');
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_MV_' dateMatFileStr];
        print(printName,'-depsc');
    end
end
figure(4)
[~,hyperResults] = size(gaResults.signals.values);
for hyp = 1:hyperResults
    subplot(hyperResults,1,hyp)
    plot(t,gaResults.signals.values(:,hyp),'*','LineWidth',1)
    title(titlesHyp{hyp})
    xlabel('Tiempo (hr)')
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_GA_' dateMatFileStr];
        print(printName,'-depsc');
    end
end