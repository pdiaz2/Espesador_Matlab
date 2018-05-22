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
maxYDelay = max(na);
maxUDelay = max(max(nb));
maxDDelay = max(max(nc));
%% Initial Conditions
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
numCV = length(Y0);
numDV = length(D0);
numMV = length(U0);
%% MPC Parameters
tau_R = 5;
tau_C = 12*tau_R;
N_u = 2;
nTrees = ones(1,3)*100;
nPredictors = 10*ones(1,3);
N_y = 3;
qMatrix = ones(numOutputs,N_y-1);
wMatrix = 40*ones(numOutputs,N_y);
lambdaMatrix = 100*ones(numOutputs,N_y);
rMatrix = ones(numMV,N_u);
beta = 100;
yHighLims = 40*ones(numOutputs,N_y);
yLowLims = 20*ones(numOutputs,N_y);
yLims = cat(3,yLowLims,yHighLims);
nVars = 3+numMV*N_u;
lBounds = [0 0 0 -2*ones(1,numOutputs*N_u)];
uBounds = [1 1 2 2*ones(1,numOutputs*N_u)];
%%
sim('mpc_rf_boiler.slx');
