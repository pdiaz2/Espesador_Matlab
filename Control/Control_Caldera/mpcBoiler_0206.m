clear all;
clc;
close all;
%% 
N_y = 10;
N_u = 3;
Dt = 1;
simTime = 1200;
tau_R = 5; % 5 s
tau_C = 12; % 60 s
stepInDV = false;
imprint = true;
startPlotTime = 10; %Wait for noise filter to stabilize
dateMatFileStr = '0206';
figurePath = 'figures\';
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
%% Filter Design
bFilter = fir1(10,0.8,kaiser(11,6));
% freqz(bFilter,1);
bFilter = 1;
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
    plot(t(startPlotTime:end),y.signals.values(startPlotTime:end,cv),'LineWidth',1)
    hold on
    title(titlesCV{cv})
    plot(t(startPlotTime:end),wRef.signals.values(startPlotTime:end,cv),'r','LineWidth',1);
    plot(t(startPlotTime:end),yFiltered.signals.values(startPlotTime:end,cv),'g','LineWidth',1);
    xlabel('Tiempo (s)')
    yLegend = ['$y_' num2str(cv) '$'];
    wLegend = ['$w_' num2str(cv) '$'];
    yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
    legend({yLegend,wLegend,yFiltLegend},'Interpreter','latex');
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
    xlabel('Tiempo (s)')
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
    xlabel('Tiempo (s)')
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
    xlabel('Tiempo (s)')
    grid on
    if imprint
        printName = [figurePath 'mpc_rf_GA_' dateMatFileStr];
        print(printName,'-depsc');
    end
end