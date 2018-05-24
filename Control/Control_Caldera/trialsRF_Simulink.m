%GENERATEPLANTDATA Old version to test features of
clear all;
clc;
close all;
%% Input Design
make = [1 0 1 1];
% Dt = 1/40; % 5 seconds sampling time
Dt = 1; % 5 seconds sampling time
simTime = 80*60;

numberCycles = 27;
% fSignal = simTime/numberCycles;
fSignal = numberCycles/simTime;
minDt = 1/(2*fSignal);
N = simTime/Dt;
DtOscillator = 1/N;
simTimeOscillator = 1;
NOscillator = simTimeOscillator/DtOscillator;
% fRequired = 1/(DtOscillator/Dt*fSignal);
fRequired = numberCycles;
% Amplitudes
demandAmplitude = 2;
combustibleAmplitude = 0.75;
aguaAmplitude = 1.5;
aireAmplitude = 0.33;
% Demanda Vapor
demandaVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
demandaVapor.time = linspace(0,simTime-Dt,simTime/Dt)';
demandaVapor.signals.dimensions = [1];
demandaVapor.signals.values = demandAmplitude*demandaVals;
% Combustible
combustibleVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
combustible.time = linspace(0,simTime-Dt,simTime/Dt)';
combustible.signals.dimensions = [1];
combustible.signals.values = combustibleAmplitude*combustibleVals;
% Aire
aireVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
aire.time = linspace(0,simTime-Dt,simTime/Dt)';
aire.signals.dimensions = [1];
aire.signals.values = aireAmplitude*aireVals;
% Agua
aguaVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
agua.time = linspace(0,simTime-Dt,simTime/Dt)';
agua.signals.dimensions = [1];
agua.signals.values = aguaAmplitude*aguaVals;

% figure
% plot(demandaVapor.signals.values)
% hold on
% % plot(combustible.signals.values)
% % plot(aire.signals.values)
% % plot(agua.signals.values)
% hold off

% figure
% plot(abs(fft(demandaVals)))
%% Random Forest Specifications
load('delayParameters.mat');
for y = 1:numOutputs
    delayUMatrix(y,:) = UBackshiftMatrix(delayU(y),:);
    delayYMatrix(y,:) = YBackshiftMatrix(delayY(y),:);
    uRecSize = max(max(delayUMatrix));
    yRecSize = max(max(delayYMatrix));
end
% Code will be eliminated afterwards
na = [delayYMatrix(2,2);delayYMatrix(2,2);delayYMatrix(3,3)];
nb = delayUMatrix(:,2:end);
nc = delayUMatrix(:,1);
%% Initial Conditions
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
numCV = length(Y0);
numDV = length(D0);
numMV = length(U0);
%% Simulation Time
simTime = 40*80;
demandaVapor.time = demandaVapor.time(1:simTime);
demandaVapor.signals.dimensions = [1];
demandaVapor.signals.values = demandaVapor.signals.values(1:simTime);

combustible.time = combustible.time(1:simTime);
combustible.signals.dimensions = [1];
combustible.signals.values = combustible.signals.values(1:simTime);

aire.time = aire.time(1:simTime);
aire.signals.dimensions = [1];
aire.signals.values = aire.signals.values(1:simTime);

agua.time = agua.time(1:simTime);
agua.signals.dimensions = [1];
agua.signals.values = agua.signals.values(1:simTime);
%% Simulate
tic;
sim('openLoopBoiler.slx');
toc;
tic;
sim('openLoopBoiler_RF.slx');
toc;
%% Plot
close all
t = inputs.time;
titles = {'Presión de vapor y consigna (%)','Oxígeno en exceso y consigna (%)',...
        'Nivel de agua y consigna (%)'};
caca.signals.values(:,:) = yHat.signals.values(:,1,:); 
figure(1)
for cv = 1:numCV
    subplot(numCV,1,cv)
    plot(t,y.signals.values(:,cv),'LineWidth',1)
    hold on
    plot(t,caca.signals.values(cv,:),'LineWidth',1)
    title(titles{cv})
    xlabel('Tiempo (s)')
    yLegend = ['$y_' num2str(cv) '$'];
    yHatLegend = ['$\hat{y}_' num2str(cv) '$'];
    legend({yLegend,yHatLegend},'Interpreter','latex');
    grid
end
hold off
% figure(2)
% subplot(4,1,1)
% stairs(t,inputs.signals.values(:,2), 'LineWidth',1)
% title('Combustible (%)')
% xlabel('Tiempo (s)')
% legend('MV')
% grid
% 
% subplot(4,1,2)
% stairs(t,inputs.signals.values(:,3),'LineWidth',1)
% title('Aire (%)')
% xlabel('Tiempo (s)')
% legend('MV')
% grid
% 
% subplot(4,1,3)
% stairs(t,inputs.signals.values(:,4),'LineWidth',1)
% title('Agua (%)')
% xlabel('Tiempo (s)')
% legend('MV')
% grid
% 
% subplot(4,1,4)
% stairs(t,inputs.signals.values(:,1),'LineWidth',1)
% title('Demanda (%)')
% xlabel('Tiempo (s)')
% legend('DV')
% grid
