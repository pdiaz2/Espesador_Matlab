close all;
clear all;
clc;
%%
matFileName = 'Agosto_SimResults_1304_rawData.mat';
figurePath = 'figures\';
imprint = false;
plotFigures = true;
granularity = 's';
%%
load(matFileName)
% CV
CVNames = {'Torque','Concentración de Descarga','Nivel de Interfaz','Concentración de Rebose','Tiempo de Residencia',...
            'Flujo de Sólidos','Granulometría Descarga','Flujo de Rebalse'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
MVNames = {'Flujo de Descarga','Dosis de Floculante'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
DVNames = {'Flujo de Alimentación','Concentración de Alimentación','Granulometría de Alimentación'};
DVUnits = {'m3/s','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
if strcmp('s',granularity)
    samples = length(SimResults.CV(1).TimeSeries);
    figAppendName = '';
    divisorTime = 1;
else
    samples = length(SimResults.CV(1).GroupedTimeSeries);
    figAppendName = '_g';
    divisorTime = SimResults.groupBy;
end
% options.simTime/3600 = in hours
time = linspace(0,options.simTime/3600,samples+1);
timeToWatch = length(time)-1;
SimResults.CV(5).TimeSeries = filloutliers(SimResults.CV(5).TimeSeries,'clip','median');
%% Plotting
if (plotFigures)
    % CV Plots
    for cv = 1:length(CVNames)
        figure
        title(CVNames{cv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.CV(cv).TimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch),SimResults.CV(cv).GroupedTimeSeries(1:timeToWatch)) 
        end
        ylabel(CVUnits{cv})
        xlabel('Horas [hr]')
        printName = [figurePath CVSaveName{cv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
    end
    % MV Plots
    for mv = 1:length(MVNames)
        figure
        title(MVNames{mv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.MV(mv).TimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch),SimResults.MV(mv).GroupedTimeSeries(1:timeToWatch)) 
        end
        ylabel(MVUnits{mv})
        xlabel('Horas [hr]')
        printName = [figurePath MVSaveName{mv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
    end
    % DV Plots
    for dv = 1:length(DVNames)
        figure
        title(DVNames{dv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.DV(dv).TimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch),SimResults.DV(dv).GroupedTimeSeries(1:timeToWatch)) 
        end
        ylabel(DVUnits{dv})
        xlabel('Horas [hr]')
        printName = [figurePath DVSaveName{dv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
    end
end
%% Info
gradientBy = 60;
lengthFFT = 3600*50;
b = [1 zeros(1,gradientBy-2) -1];
maxGradCV = [];
maxGradMV = [];
maxGradDV = [];
maxFreqCV = [];
maxFreqMV = [];
maxFreqDV = [];
f = (0:(lengthFFT/2))/length(SimResults.CV(1).TimeSeries);
for cv = 1:length(CVNames)
    y = abs(filter(b,1,SimResults.CV(cv).TimeSeries));
    [maxGradCV(cv,:)] = max(y(gradientBy+1:end));
%     DFT = fft(SimResults.CV(cv).TimeSeries(1e5:1e4+lengthFFT))/lengthFFT;
%     DFT = abs(DFT(1:lengthFFT/2+1));
%     [garbage index] = max(abs(DFT(2:end)));
%     maxFreqCV(cv) = f(index);
end

for mv = 1:length(MVNames)
    y = abs(filter(b,1,SimResults.MV(mv).TimeSeries));
    [maxGradMV(mv,:)] = max(y(gradientBy+1:end));
end


for dv = 1:length(DVNames)
    y = abs(filter(b,1,SimResults.DV(dv).TimeSeries));
    [maxGradDV(dv,:)] = max(y(gradientBy+1:end));
end
%{
[torqueSteps(1,1) yieldStressSteps(1,1) Cp_uSteps(1,1) Cp_eSteps(1,1) bedLevelSteps(1,1) p1_uSteps(1,1)];
lololo = [num2str(torqueSteps(1,1)) ',' num2str(yieldStressSteps(1,1)) ','  num2str(Cp_uSteps(1,1)) ',' num2str(Cp_eSteps(1,1))...
     ',' num2str(bedLevelSteps(1,1)) ',' num2str(p1_uSteps(1,1))]
close all;
% options.stepSizes = options.stepSizes(1:end-1);
for i = 1:length(options.stepSizes)
    stepSizesStr{i} = num2str(options.stepSizes(i));
end

samples = length(torqueSteps(1,:));
time = linspace(0,options.simTime,samples)/3600; % In hours
timeToWatch = length(time);
% Torque plots
figure
title('Torque de Rastrillo')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),torqueSteps(i,1:timeToWatch));
end
ylabel('%');
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'torque' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Yield Stress plots
figure
title('Yield Stress Descarga')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),yieldStressSteps(i,1:timeToWatch));
end
ylabel('[Pa]');
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'yieldStress' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Concentracion Descarga plots
figure
title('Concentración de Sólidos Descarga')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),Cp_uSteps(i,1:timeToWatch)*100);
end
ylabel('%');
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'Cp_u' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Concentracion Descarga plots
figure
title('Concentración de Sólidos Rebalse')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),Cp_eSteps(i,1:timeToWatch)*100);
end
ylabel('%');
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'Cp_e' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Nivel de Sedimento
figure
title('Nivel de Interface')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),bedLevelSteps(i,1:timeToWatch));
end
ylabel('m');
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'bedLevel' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% P1_u
figure
title('P1 Descarga')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),p1_uSteps(i,1:timeToWatch))
end
ylabel('[N/A]')
xlabel('Horas [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'p1_u' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Q_u
figure
title('Flujo de Descarga')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
%     plot(time(1:end-1),Q_uControl(i,1:length(time)-1)*3600)
    plot(time(1:timeToWatch-1),Q_uControl(i,1:timeToWatch-1))
end
ylabel('[m3/hr]')
xlabel('Horas [hr]')
hold off
h1 = legend(stepSizesStr,'Location','northwest');
% h1 = legend(stepSizesStr{1:10:71});
set(h1,'Interpreter','latex');
printName = [ figurePath 'Q_u' options.stepTestType];
if imprint
    % Quick visualization
    % print(printName,'-dpng');
    % Latex
    print(printName,'-depsc');
end

% GPT
figure
title('Dosis de Floculante')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
%     plot(time(1:end-1),gptControl(i,1:length(time)-1))
    plot(time(1:timeToWatch-1),gptControl(i,1:timeToWatch-1))
end
ylabel('gpt')
xlabel('Horas [hr]')
hold off
h1 = legend(stepSizesStr,'Location','northwest');
% h1 = legend(stepSizesStr{1:10:71});
set(h1,'Interpreter','latex');
printName = [ figurePath 'gpt' options.stepTestType];
if imprint
    % Quick visualization
    % print(printName,'-dpng');
    % Latex
    print(printName,'-depsc');
end

% Q_f
figure
title('Flujo de alimentación')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch-1),Q_fControl(i,1:timeToWatch-1)*3600)
end
ylabel('[m3/hr]')
xlabel('Horas [hr]')
hold off
h1 = legend(stepSizesStr,'Location','northwest');
% h1 = legend(stepSizesStr{1:10:71});
set(h1,'Interpreter','latex');
printName = [ figurePath 'Q_f' options.stepTestType];
if imprint
    % Quick visualization
    % print(printName,'-dpng');
    % Latex
    print(printName,'-depsc');
end

% Cp_f
figure
title('Concentración de Alimentación')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch-1),Cp_fControl(i,1:timeToWatch-1)*100)
end
ylabel('[%]')
xlabel('Horas [hr]')
hold off
h1 = legend(stepSizesStr,'Location','northwest');
% h1 = legend(stepSizesStr{1:10:71});
set(h1,'Interpreter','latex');
printName = [ figurePath 'Cp_f' options.stepTestType];
if imprint
    % Quick visualization
    % print(printName,'-dpng');
    % Latex
    print(printName,'-depsc');
end

% p1_f
figure
title('Granulometría')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch-1),p1_fControl(i,1:timeToWatch-1))
end
ylabel('#')
xlabel('Horas [hr]')
hold off
h1 = legend(stepSizesStr,'Location','northwest');
% h1 = legend(stepSizesStr{1:10:71});
set(h1,'Interpreter','latex');
printName = [ figurePath 'p1_f' options.stepTestType];
if imprint
    % Quick visualization
    % print(printName,'-dpng');
    % Latex
    print(printName,'-depsc');
end
%}