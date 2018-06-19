clear all;
clc;
close all;
%% Input Design

stepTests = false;
if stepTests
    makeMatrix = eye(5)%;[1 0 1 1];
    addICInSimulation = ones(1,5);
else
    makeMatrix = ones(1,5);
    load('ThickenerOperation_Septiembre_rawData.mat');
    addICInSimulation = zeros(1,5);
end
Dt = 1; % 5 seconds sampling time
% simTime = BigData.manual.timeLimit;
simTime = 0.4e6;
amplitude = 20;
[numMakes ~] = size(makeMatrix);
stepInitTime = 120;
groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
dateMatFileStr = '0706';
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
startPlotTime = 1;
imprint = true;
figurePath = 'figures\mpc_rf_comparisons\ACCA_Sept_';
%% Noise
noisePower = [0.05 0.001 0.03 0.00001];
noiseSeed = [1231235 456345 93894 748563];
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
nTrees = [100 100 100 100];
nPredictors = [10 10 9 9];
titlesCV = {'Torque','Concentración de Descarga','Nivel de Interfaz',...
            'Concentración de Rebose',...
            'Flujo de Sólidos',...
            'Yield Stres',...
            'Flujo de Rebalse'};
titlesMV = {'Flujo de Descarga','Dosis de Floculante'};
titlesDV = {'Flujo de Alimentación','Concentración de Alimentación','Granulometría de Alimentación'};
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
for m = [1 4 5]
    make = makeMatrix(m,:);
    if stepTests
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
        gptVals = gptVals.signals.values;
        %%
        Q_fAmplitude = 1.4*D0(1)*0.2;
        Cp_fAmplitude = 1.4*D0(2)*0.2;
        p1_fAmplitude = 1.4*D0(3)*0.2;
        Q_uAmplitude = 1.4*U0(1)*0.2;
        gptAmplitude = 1.4*U0(2)*0.2;
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
    else
        Q_u.signals.values = BigData.PreProcessed(4,1:simTime)';
        Q_u.time = linspace(0,simTime,simTime/Dt)';
        gpt.signals.values = FlocculantNew(1,1:simTime)';
        gpt.time = linspace(0,simTime,simTime/Dt)';
        Q_f.signals.values = BigData.PreProcessed(7,1:simTime)';
        Q_f.time = linspace(0,simTime,simTime/Dt)';
        Cp_f.signals.values = wt_f(1:simTime)'/100;
        Cp_f.time = linspace(0,simTime,simTime/Dt)';
        p1_f.signals.values = D0(3)*ones(1,simTime)';
        p1_f.time = linspace(0,simTime,simTime/Dt)';
    end
    %%
    run parametrosEmpty.m

    load('Agosto_SimResults_1304_State.mat');
    tic;
    sim('rf_thickener_open_loop.slx');
    toc;
    %%
    t = inputs.time(1:simTime)/3600;
    
    
    figure(1)
    for cv = 1:numCV-1
        caca = yHat.signals.values(cv,1,:);
        yHatVector(:,cv) = reshape(caca,simTime+1,1);
        subplot(numCV-1,1,cv)
        plot(downsample(t(1:simTime),tau_R),downsample(y.signals.values(1:simTime,cv),tau_R),'LineWidth',1)
        hold on
        plot(downsample(t(1:simTime),tau_R),downsample(yHatVector(1:simTime,cv),tau_R)','--','LineWidth',1)
%         title(titlesCV{cv})
        ylabel(CVUnits{cv})
        xlabel('Time (hr)')
        yLegend = ['$y_' num2str(cv) '(k)$'];
        yHatLegend = ['RF - $y_' num2str(cv) '(k)$'];
        legend({yLegend,yHatLegend},'Interpreter','latex');
        grid on
        hold off
        if imprint
            printName = [figurePath 'rf_comparison_CV_' dateMatFileStr];
            print(printName,'-depsc');
        end
    end
    figure(2)
    for dv = 1:numDV
        subplot(numDV,1,dv)
        plot(t(startPlotTime:simTime),inputs.signals.values(startPlotTime:simTime,dv),'LineWidth',1)
%         title(titlesDV{dv})
        ylabel(DVUnits{dv})
        xlabel('Time (hr)')
        dLegend = ['$d_' num2str(dv) '(k)$'];
        legend({dLegend},'Interpreter','latex');
        grid on
        if imprint
            printName = [figurePath 'rf_comparison_DV_' dateMatFileStr];
            print(printName,'-depsc');
        end
    end
    figure(3)
    for mv = 1:numMV
        subplot(numMV,1,mv)
        plot(t(startPlotTime:simTime),inputs.signals.values(startPlotTime:simTime,mv+numDV),'LineWidth',1)
%         title(titlesMV{mv})
        ylabel(MVUnits{mv})
        xlabel('Time(hr)')
        mLegend = ['$u_' num2str(mv) '(k)$'];
        legend({mLegend},'Interpreter','latex');
        grid on
        if imprint
            printName = [figurePath 'rf_comparison_MV_' dateMatFileStr];
            print(printName,'-depsc');
        end
    end
    pause();
end