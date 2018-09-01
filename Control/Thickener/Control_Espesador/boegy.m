%% Reaction Curves
makeMatrix = eye(4);%;[1 0 1 1];
% load('ThickenerOperation_Septiembre_rawData.mat');
stepTests = true;K_forecast = 50;Dt = 1;
D0 = [326.3733 0.3143 0.356];
U0 = [114.8275 26.0152]; 
Y0 = [21.0190  73.7604   2.1261];
addICInSimulation = ones(1,5);
amplitude = 20;
[numMakes ~] = size(makeMatrix);
stepInitTime = 2;
groupBy = 60; % This should be automatic
tau_R = 5*groupBy;
simTime = 5*K_forecast*tau_R+stepInitTime;
for iterationsSim = 1:size(makeMatrix)
    make = makeMatrix(iterationsSim,:);
    if stepTests
        fprintf('Hola')
        Q_fVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        Cp_fVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        p1_fVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        Q_uVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
        gptVals = myStepTest(simTime,Dt,1/2,3*K_forecast*tau_R+stepInitTime,stepInitTime,1,0,simTime/4);
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

%     load('Agosto_SimResults_1304_State.mat');
    load('Permanent_1606_State.mat');
    tic;
%     sim('rf_thickener_open_loop_prbs.slx');
    toc;
end
