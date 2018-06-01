%TESTBIGDATA Generates various input waveforms and
clear all;
clc;
close all;
%% Input Design
Dt = 1; % 0.5 seconds sampling time
simTime = 80*60;
% stepsOrSpecial = 'steps';
matFileName = ['testData_3005.mat'];
showGraphs = false;
saveMatFile = true;
freqs = [5 10 50]; % numMax cycles in sim: simTime*maxFreq = simTime*0.3*Fs_05;
waveform = {'Sinusoid'; 'Square' ;'Sawtooth';'Steps'};
makeMatrix = [1 0 0 0;...
        0 1 0 0;...
        0 0 1 0;...
        0 0 0 1;...
        1 0 1 0;...
        0 1 0 1;...
        0 0 1 1;...
        1 1 0 1;...
    ];
[numMakes ~] = size(makeMatrix);
stepInitTime = 30;
for f = 1:length(freqs)%;1:length(freqs)
   for w = 1:length(waveform)%1:length(waveform)
      for m = 1:numMakes%;numMakes
        numberCycles = freqs(f);
        wave = waveform{w};
        make = makeMatrix(m,:);
        fSignal = numberCycles/simTime;
        N = simTime/Dt;
        DtOscillator = 1/N;
        simTimeOscillator = 1;
        NOscillator = simTimeOscillator/DtOscillator;
        fRequired = numberCycles;
        % Initial Conditions
        D0 = 35.7834;
        U0 = [32.9816   46.2282   25.3416];
        Y0 = [41.4120   28.7553   38.6037];
        
        % Amplitudes
        demandAmplitude = 6;
        combustibleAmplitude = 6;
        aguaAmplitude = 6;
        aireAmplitude = 6;
        if (w == 4)
            demandaVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
            combustibleVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
            aireVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
            aguaVals = myStepTest(simTime,Dt,1,simTime,stepInitTime,1,0,0);
            demandaVals = demandaVals.signals.values;
            combustibleVals = combustibleVals.signals.values;
            aireVals = aireVals.signals.values;
            aguaVals = aguaVals.signals.values;
        else
            demandaVals = oscillator(wave,simTimeOscillator,fRequired,0,0,1/DtOscillator);
            combustibleVals = oscillator(wave,simTimeOscillator,fRequired,0,0,1/DtOscillator);
            aireVals = oscillator(wave,simTimeOscillator,fRequired,0,0,1/DtOscillator);
            aguaVals = oscillator(wave,simTimeOscillator,fRequired,0,0,1/DtOscillator); 
        end

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

        %% Simulate
        sim('openLoopBoiler.slx');
        results(f,w,m).inputs = inputs;
        results(f,w,m).outputs = [y1.signals.values y2.signals.values y3.signals.values];
        if (showGraphs)
            figure
            plot(y1.signals.values)
            hold on
            plot(y2.signals.values)
            plot(y3.signals.values)
            legend('y1','y2','y3')
            hold off
            
            figure
            plot(inputs.signals.values(:,1))
            hold on
            plot(inputs.signals.values(:,2))
            plot(inputs.signals.values(:,3))
            plot(inputs.signals.values(:,4))
            hold off
            legend('DmnVpr','Cmbst','Aire','Agua');
            pause;
            close all
        end
      end
   end
end
if (saveMatFile)
    save(matFileName,'results','waveform','makeMatrix','freqs','Dt');
end