%GENERATEPLANTDATA Old version to test features of
clear all;
clc;
close all;
%% Input Design
make = [1 0 0 0];
% Dt = 1/40; % 5 seconds sampling time
Dt = 1; % 5 seconds sampling time
simTime = 80*60;

numberCycles = 2000;
% fSignal = simTime/numberCycles;
fSignal = numberCycles/simTime;
minDt = 1/(2*fSignal)
N = simTime/Dt;
DtOscillator = 1/N;
simTimeOscillator = 1;
NOscillator = simTimeOscillator/DtOscillator;
% fRequired = 1/(DtOscillator/Dt*fSignal);
fRequired = numberCycles;
% Amplitudes
demandAmplitude = 5;
combustibleAmplitude = 3;
aguaAmplitude = 6;
aireAmplitude = 6;
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

figure
plot(demandaVapor.signals.values)
hold on
% plot(combustible.signals.values)
% plot(aire.signals.values)
% plot(agua.signals.values)
hold off

figure
plot(abs(fft(demandaVals)))
%% Initial Conditions
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
%% Simulate
sim('openLoopBoiler.slx');
%% Plot
t = inputs.time;
figure(1)
subplot(3,1,1)
plot(t,y1.signals.values,'LineWidth',1)
title('Presión de vapor y consigna (%)')
xlabel('Tiempo (s)')
legend('y_1')
grid

subplot(3,1,2)
plot(t,y2.signals.values, 'LineWidth',1)
title('Oxígeno en exceso y consigna (%)')
xlabel('Tiempo (s)')
legend('y_2')
grid

subplot(3,1,3)
plot(t,y3.signals.values, 'LineWidth',1)
title('Nivel de agua y consigna (%)')
xlabel('Tiempo (s)')
legend('y_3')
grid

figure(2)
subplot(4,1,1)
stairs(t,inputs.signals.values(:,2), 'LineWidth',1)
title('Combustible (%)')
xlabel('Tiempo (s)')
legend('MV')
grid

subplot(4,1,2)
stairs(t,inputs.signals.values(:,3),'LineWidth',1)
title('Aire (%)')
xlabel('Tiempo (s)')
legend('MV')
grid

subplot(4,1,3)
stairs(t,inputs.signals.values(:,4),'LineWidth',1)
title('Agua (%)')
xlabel('Tiempo (s)')
legend('MV')
grid

subplot(4,1,4)
stairs(t,inputs.signals.values(:,1),'LineWidth',1)
title('Demanda (%)')
xlabel('Tiempo (s)')
legend('DV')
grid
