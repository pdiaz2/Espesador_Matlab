clear all;
clc;
close all;
%% Input Design
makeMatrix = eye(5)%;[1 0 1 1];
% Dt = 1/40; % 5 seconds sampling time
Dt = 1; % 5 seconds sampling time
simTime = 1e4;
amplitude = 20;
[numMakes ~] = size(makeMatrix);
stepInitTime = 120;
groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
dateMatFileStr = '0706';
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
startPlotTime = 1;
imprint = false;
%%
%%
%% Initial Conditions
% Obtained by LOOKING AT INITIAL VALUES ON GRAPHS!!!!!
% Can be done much better!!
D0 = [325.1 0.3143 0.356];
U0 = [111 26]; 
Y0 = [21.02  0.737   2.126 0];
numCV = length(Y0);
numDV = length(D0);
numMV = length(U0);
%% Random Forest Specifications
[na,nb,nc,maxDelay] = generate_rf_model_orders(delayParametersFile,numCV);
maxYDelay = maxDelay(1);
maxUDelay = maxDelay(2);
maxDDelay = maxDelay(3);
%%
numTrees = [100 100 100 100];
numPredictors = [10 10 9 9];
titlesCV = {'Torque','Concentración de Descarga','Nivel de Interfaz',...
            'Concentración de Rebose',...
            'Flujo de Sólidos',...
            'Yield Stres',...
            'Flujo de Rebalse'};
titlesMV = {'Flujo de Descarga','Dosis de Floculante'};
titlesDV = {'Flujo de Alimentación','Concentración de Alimentación','Granulometría de Alimentación'};
for m = 1:numMakes
    make = makeMatrix(m,:);
    load('Agosto_SimResults_1304_State.mat');
    Q_fVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    Cp_fVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    p1_fVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    Q_uVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    gptVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    %%
    Q_fVals = Q_fVals.signals.values;
    Cp_fVals = Cp_fVals.signals.values;
    p1_fVals = p1_fVals.signals.values;
    Q_uVals = Q_uVals.signals.values;
    gptVals = qptVals.signals.values;
    %%
    Q_fAmplitude = 2*D0(1)*0.10;
    Cp_fAmplitude = 2*D0(2)*0.10;
    p1_fAmplitude = 2*D0(3)*0.10;
    Q_uAmplitude = 2*U0(1)*0.10;
    gptAmplitude = 2*U0(2)*0.10;
    %%
    Q_f.time = linspace(0,simTime-Dt,simTime/Dt)';
    Q_f.signals.dimensions = [1];
    Q_f.signals.values = Q_fAmplitude*Q_fVals;
    
    Cp_f.time = linspace(0,simTime-Dt,simTime/Dt)';
    Cp_f.signals.dimensions = [1];
    Cp_f.signals.values = Cp_fAmplitude*Cp_fVals;
    
    p1_f.time = linspace(0,simTime-Dt,simTime/Dt)';
    p1_f.signals.dimensions = [1];
    p1_f.signals.values = p1_fAmplitude*p1_fVals;
    
    Q_u.time = linspace(0,simTime-Dt,simTime/Dt)';
    Q_u.signals.dimensions = [1];
    Q_u.signals.values = Q_uAmplitude*Q_uVals;
    
    gpt.time = linspace(0,simTime-Dt,simTime/Dt)';
    gpt.signals.dimensions = [1];
    gpt.signals.values = gptAmplitude*gptVals;
    %%
    run parametrosEmpty.m

    load('Agosto_SimResults_1304_State.mat');
    tic;
    sim('rf_thickener_open_loop.slx');
    toc;
end