clear;
close all;
clc;
%% IC and Init
%% Initial Conditions
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
Dt = 0.5; % 5 seconds sampling time
simTime = 80*60;
stepInitTime = 30;
%% Prepare All-Steps
% Amplitudes - Comply with restrictions
demandAmplitude = 5;
combustibleAmplitude = 5;
aguaAmplitude = 5;
aireAmplitude = 5; 
demandaVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
combustibleVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
aireVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
aguaVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
demandaVals = demandaVals.signals.values;
combustibleVals = combustibleVals.signals.values;
aireVals = aireVals.signals.values;
aguaVals = aguaVals.signals.values;
%% Inputs for Simulink
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
%% Demanda de Vapor
makeMat = eye(4);
demandaVapor.signals.values = demandaVapor.signals.values+randn(length(demandaVapor.signals.values),1);
combustible.signals.values = combustible.signals.values+randn(length(combustible.signals.values),1);
aire.signals.values = aire.signals.values+randn(length(aire.signals.values),1);
agua.signals.values = agua.signals.values+randn(length(agua.signals.values),1);
for input = 1:4
    make = makeMat(input,:);
    sim('openLoopBoiler.slx');

    % Y = [(y1.signals.values-Y0(1)) (y2.signals.values-Y0(2)) (y3.signals.values-Y0(3))];
    % U = [(inputs.signals.values(:,1)-D0) (inputs.signals.values(:,2)-U0(1)) (inputs.signals.values(:,3)-U0(2))...
    %     (inputs.signals.values(:,4)-U0(3))];
    Y = [y1.signals.values y2.signals.values y3.signals.values];
    U = [inputs.signals.values(:,1) inputs.signals.values(:,2) inputs.signals.values(:,3) inputs.signals.values(:,4)];
    wind = hann(200);
    nov = 100;
    Fs = 1/Dt;
    [q,fq] = tfestimate(U,Y,wind,nov,2^14,Fs,'mimo');
    figure
    for jk = 1:3
        subplot(3,1,jk)
        plot(fq,20*log10(abs(q(:,jk,input))))
        title(['Input ' int2str(input) ', Output ' int2str(jk)])
        axis([0 Fs/2 -50 20])
    end
end
%%
% Y = [y1.signals.values y2.signals.values y3.signals.values];
% U = [inputs.signals.values(:,1) inputs.signals.values(:,2) inputs.signals.values(:,3) inputs.signals.values(:,4)];
% wind = hann(200);
% nov = 100;
% Fs = 1/Dt;
% [q,fq] = tfestimate(U,Y,wind,nov,2^14,Fs,'mimo');
% for jk = 1:3
%     for kj = 1:4
%         subplot(3,4,4*(jk-1)+kj)
%         plot(fq,20*log10(abs(q(:,jk,kj))))
%         title(['Input ' int2str(kj) ', Output ' int2str(jk)])
%         axis([0 Fs/2 -50 100])
%     end
% end
% t = inputs.time;
% figure(1)
% subplot(3,1,1)
% plot(t,y1.signals.values,'LineWidth',1)
% title('Presión de vapor y consigna (%)')
% xlabel('Tiempo (s)')
% legend('y_1')
% grid
% 
% subplot(3,1,2)
% plot(t,y2.signals.values, 'LineWidth',1)
% title('Oxígeno en exceso y consigna (%)')
% xlabel('Tiempo (s)')
% legend('y_2')
% grid
% 
% subplot(3,1,3)
% plot(t,y3.signals.values, 'LineWidth',1)
% title('Nivel de agua y consigna (%)')
% xlabel('Tiempo (s)')
% legend('y_3')
% grid
% 
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