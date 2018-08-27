%% Plots
% Load previous .mat for display
% clear all;
clc;
% load('stepTestDV_SS_75_25.mat');
[torqueSteps(1,1) yieldStressSteps(1,1) Cp_uSteps(1,1) Cp_eSteps(1,1) bedLevelSteps(1,1) p1_uSteps(1,1)];
lololo = [num2str(torqueSteps(1,1)) ',' num2str(yieldStressSteps(1,1)) ','  num2str(Cp_uSteps(1,1)) ',' num2str(Cp_eSteps(1,1))...
     ',' num2str(bedLevelSteps(1,1)) ',' num2str(p1_uSteps(1,1))]
close all;
% options.stepSizes = options.stepSizes(1:end-1);
for i = 1:length(options.stepSizes)
    stepSizesStr{i} = num2str(options.stepSizes(i));
end
figurePath = 'figures\';
imprint = false;
samples = length(torqueSteps(1,:));
time = linspace(0,options.simTime,samples)/3600; % In hours
timeToWatch = length(time);
% Torque plots
figure
title('Torque')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),torqueSteps(i,1:timeToWatch));
end
ylabel('%');
xlabel('Hours [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'torque' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Yield Stress plots
figure
title('Underflow Yield Stress')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),yieldStressSteps(i,1:timeToWatch));
end
ylabel('[Pa]');
xlabel('Hours [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'yieldStress' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Concentracion Descarga plots
figure
title('Underflow Concentration')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),Cp_uSteps(i,1:timeToWatch)*100);
end
ylabel('%');
xlabel('Hours [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'Cp_u' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Concentracion Descarga plots
figure
title('Overflow Concentration')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),Cp_eSteps(i,1:timeToWatch)*100);
end
ylabel('%');
xlabel('Hours [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'Cp_e' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Nivel de Sedimento
figure
title('Interface Level')
hold on
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch),bedLevelSteps(i,1:timeToWatch));
end
ylabel('m');
xlabel('Hours [hr]')
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
xlabel('Hours [hr]')
hold off
legend(stepSizesStr);
printName = [figurePath 'p1_u' options.stepTestType];
if imprint
    % Latex
    print(printName,'-depsc');
end

% Q_u
figure
title('Underflow Rate')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
%     plot(time(1:end-1),Q_uControl(i,1:length(time)-1)*3600)
    plot(time(1:timeToWatch-1),Q_uControl(i,1:timeToWatch-1))
end
ylabel('[m3/hr]')
xlabel('Hours [hr]')
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
title('Flocculant Dosage')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
%     plot(time(1:end-1),gptControl(i,1:length(time)-1))
    plot(time(1:timeToWatch-1),gptControl(i,1:timeToWatch-1))
end
ylabel('gpt')
xlabel('Hours [hr]')
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
title('Feedflow Rate')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch-1),Q_fControl(i,1:timeToWatch-1)*3600)
end
ylabel('[m3/hr]')
xlabel('Hours [hr]')
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
title('Feed Concentrarion')
hold on
% for i = 1:length(options.stepSizes)
for i = 1:length(options.stepSizes)
    plot(time(1:timeToWatch-1),Cp_fControl(i,1:timeToWatch-1)*100)
end
ylabel('[%]')
xlabel('Hours [hr]')
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
xlabel('Hours [hr]')
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