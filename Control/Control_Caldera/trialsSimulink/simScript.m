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
%%
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
%%
simTime = 500*Dt;
tic;
sim('openLoopBoiler.slx');
toc;