clear all;
clc;
close all;
%% 
N_y = 10;
N_u = 3;
Dt = 1;
simTime = 3600;
tau_R = 5; % 5 s
tau_C = 12; % 60 s
stepInDV = false;
dateMatFileStr = '2805';
%%
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
parametersFileArray = {delayParametersFile,fixedParametersFileName,designParametersFileName};
%%
% Fixed parameters
mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime);
% Design parameters
mpc_generate_design_parameters(dateMatFileStr,N_y,N_u);
%%
for strFile = 1:3
   load(parametersFileArray{strFile}); 
end

%%
rng(120938103);
tic;
sim('mpc_rf_boiler.slx');
toc;
%% Plot
close all
t = inputs.time;
titlesCV = {'Presión de vapor y consigna (%)','Oxígeno en exceso y consigna (%)',...
        'Nivel de agua y consigna (%)'};
titlesDV = {'Demanda de vapor (%)'};
titlesMV = {'Combustible (%)','Aire (%)', 'Agua (%)'};
titlesHyp = {'ExitFlags','F.O. Values'};
figure(1)
for cv = 1:numCV
    subplot(numCV,1,cv)
    plot(t,y.signals.values(:,cv),'LineWidth',1)
    hold on
    title(titlesCV{cv})
    plot(t,wRef.signals.values(:,cv),'r','LineWidth',1);
    xlabel('Tiempo (s)')
    yLegend = ['$y_' num2str(cv) '$'];
    wLegend = ['$w_' num2str(cv) '$'];
    legend({yLegend,wLegend},'Interpreter','latex');
    grid on
    hold off
end
figure(2)
for dv = 1:numDV
    subplot(numDV,1,dv)
    plot(t,inputs.signals.values(:,dv),'LineWidth',1)
    title(titlesDV{dv})
    xlabel('Tiempo (s)')
    dLegend = ['$d_' num2str(dv) '$'];
    legend({dLegend},'Interpreter','latex');
    grid on
end
figure(3)
for mv = 1:numMV
    subplot(numMV,1,mv)
    plot(t,inputs.signals.values(:,mv+numDV),'LineWidth',1)
    title(titlesMV{mv})
    xlabel('Tiempo (s)')
    mLegend = ['$u_' num2str(mv) '$'];
    legend({mLegend},'Interpreter','latex');
    grid on
end
figure(4)
[~,hyperResults] = size(gaResults.signals.values);
for hyp = 1:hyperResults
    subplot(hyperResults,1,hyp)
    plot(t,gaResults.signals.values(:,hyp),'*','LineWidth',1)
    title(titlesHyp{hyp})
    xlabel('Tiempo (s)')
    grid on
end