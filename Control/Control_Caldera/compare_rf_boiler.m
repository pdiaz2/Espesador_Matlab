%GENERATEPLANTDATA Old version to test features of
clear all;
clc;
close all;
%% Input Design
makeMatrix = eye(4)%;[1 0 1 1];
% Dt = 1/40; % 5 seconds sampling time
Dt = 1; % 5 seconds sampling time
simTime = 100;
amplitude = 20;
[numMakes ~] = size(makeMatrix);
stepInitTime = 60;
tau_R = 5;
dateMatFileStr = '0606';
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
startPlotTime = 1;
imprint = false;
%%
%% Initial Conditions
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
numCV = length(Y0);
numDV = length(D0);
numMV = length(U0);
%% Random Forest Specifications
[na,nb,nc,maxDelay] = generate_rf_model_orders(delayParametersFile,numCV);
maxYDelay = maxDelay(1);
maxUDelay = maxDelay(2);
maxDDelay = maxDelay(3);
%%
nTrees = ones(1,numCV)*100
nPredictors = [8 12 12]
%% Simulation Time
simTime = 1200;
titlesCV = {'Presión de vapor y consigna (%)','Oxígeno en exceso y consigna (%)',...
        'Nivel de agua y consigna (%)'};
titlesMV = {'Combustible (%)','Aire (%)', 'Agua (%)'};
titlesDV = {'Demanda de vapor (%)'};
for m = 1:numMakes
    make = makeMatrix(m,:);
    demandaVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    combustibleVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    aireVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    aguaVals = myStepTest(simTime,Dt,1/2,simTime/3,stepInitTime,1,0,simTime/4);
    demandaVals = demandaVals.signals.values;
    combustibleVals = combustibleVals.signals.values;
    aireVals = aireVals.signals.values;
    aguaVals = aguaVals.signals.values;
    
    % Amplitudes
    demandAmplitude = amplitude;
    combustibleAmplitude = amplitude;
    aguaAmplitude = amplitude;
    aireAmplitude = amplitude;
    % Demanda Vapor

    demandaVapor.time = linspace(0,simTime-Dt,simTime/Dt)';
    demandaVapor.signals.dimensions = [1];
    demandaVapor.signals.values = demandAmplitude*demandaVals;
    % Combustible

    combustible.time = linspace(0,simTime-Dt,simTime/Dt)';
    combustible.signals.dimensions = [1];
    combustible.signals.values = combustibleAmplitude*combustibleVals;
    % Aire
    aire.time = linspace(0,simTime-Dt,simTime/Dt)';
    aire.signals.dimensions = [1];
    aire.signals.values = aireAmplitude*aireVals;
    % Agua

    agua.time = linspace(0,simTime-Dt,simTime/Dt)';
    agua.signals.dimensions = [1];
    agua.signals.values = aguaAmplitude*aguaVals;
    %%
    sim('rf_boiler_open_loop.slx');
    %%
    t = inputs.time;
    
    close all;
    
    figure(1)
    for cv = 1:numCV
        caca = yHat.signals.values(cv,1,:);
        yHatVector(:,cv) = reshape(caca,simTime+1,1);
        subplot(numCV,1,cv)
        plot(downsample(t(1:end),tau_R),downsample(y.signals.values(1:end,cv),tau_R),'LineWidth',1)
        hold on
        plot(downsample(t(1:end),tau_R),downsample(yHatVector(1:end,cv),tau_R)','LineWidth',1)
        title(titlesCV{cv})
        xlabel('Tiempo (s)')
        yLegend = ['$y_' num2str(cv) '$'];
        yHatLegend = ['$\hat{y}_' num2str(cv) '$'];
        legend({yLegend,yHatLegend},'Interpreter','latex');
        grid on
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
    pause();
end

%%
%{
% numberCycles = 27;
% % fSignal = simTime/numberCycles;
% fSignal = numberCycles/simTime;
% minDt = 1/(2*fSignal);
% N = simTime/Dt;
% DtOscillator = 1/N;
% simTimeOscillator = 1;
% NOscillator = simTimeOscillator/DtOscillator;
% % fRequired = 1/(DtOscillator/Dt*fSignal);
% fRequired = numberCycles;
% % Amplitudes
% demandAmplitude = 2;
% combustibleAmplitude = 0.75;
% aguaAmplitude = 1.5;
% aireAmplitude = 0.33;
% % Demanda Vapor
% demandaVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
% demandaVapor.time = linspace(0,simTime-Dt,simTime/Dt)';
% demandaVapor.signals.dimensions = [1];
% demandaVapor.signals.values = demandAmplitude*demandaVals;
% % Combustible
% combustibleVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
% combustible.time = linspace(0,simTime-Dt,simTime/Dt)';
% combustible.signals.dimensions = [1];
% combustible.signals.values = combustibleAmplitude*combustibleVals;
% % Aire
% aireVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
% aire.time = linspace(0,simTime-Dt,simTime/Dt)';
% aire.signals.dimensions = [1];
% aire.signals.values = aireAmplitude*aireVals;
% % Agua
% aguaVals = oscillator('Sinusoid',simTimeOscillator,fRequired,0,0,1/DtOscillator);
% agua.time = linspace(0,simTime-Dt,simTime/Dt)';
% agua.signals.dimensions = [1];
% agua.signals.values = aguaAmplitude*aguaVals;
% 
% % figure
% % plot(demandaVapor.signals.values)
% % hold on
% % % plot(combustible.signals.values)
% % % plot(aire.signals.values)
% % % plot(agua.signals.values)
% % hold off
% 
% % figure
% % plot(abs(fft(demandaVals)))
%}