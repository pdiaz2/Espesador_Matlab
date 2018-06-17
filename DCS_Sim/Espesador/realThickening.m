close all;clc;
clear;
%% Flux Control Parameters and Specifications

run parametrosEmpty.m

month = 'Agosto';
% outputMatFileName = [month '_SimResults_1304_rawData'];
outputMatFileName = ['PRBS_1606_rawData'];
matFileName = ['ThickenerOperation_' month '_rawData.mat'];
saveToMatFile = true;
typeOfTest = 'prbs';
makePRBs = eye(5);
prbsStrArray = {'Qu','gpt','Qf','Cf','p1f'};
prbsAmplitude = [10,4,40/3600,0.1,0.1];
%%
startThickener = 0;
load(matFileName);
numVars = length(BigData.varsIndex);
[numSamples garbage] = size(BigData.RawData');
Dt = 1;
simTime = BigData.manual.timeLimit;
simTime = 2.4e5;
% simTime = 1e5;
% simTime = 1e5;
% Noise generation
% Currently with random numbers block, - maybe use band limited for solver
% issues.
% Could try to estimate a correlation function from Excel data of the noise
% that comes with each DV (fft of time series of Data-avg)
% Excel visual fit of normal
Cf_avg = 30/100; % [0,1]
Cf_sigma = Cf_avg*0.01/3;
Cf_sigma = 0;
Cf_seed = 30;

Qf_avg = 259.77/3600; % m3/s
% Qf_sigma = Qf_avg*0.01/3;
Qf_sigma = 0;
Qf_seed = 15;

p1_avg = 0.356; % percentage
% p1_sigma = p1_avg*0.01/3;
p1_sigma = 0;
p1_seed = 1035;

p2_f = 0.6;
p3_f = 0.8;
% Very important
% Sample Time for integrators is fixed to Dt (1 in parametros_1807)
% To make the simulation run faster noiseSampleTime has to be an integer
% multiple of Dt. 
%%% False: it runs equally fast with regular sample Time (multi
%%% rate is difficult to understand because of the gaps of values. Maybe a
%%% ZOH should be added manually.
noiseSampleTime = Dt;
% Will aid in analysis
options.simTime = simTime;
options.startThickener = startThickener;
options.noiseSampleTime = noiseSampleTime;
options.noiseSeeds = [Cf_seed Qf_seed p1_seed]';
options.noiseParameters = [Cf_avg Cf_sigma;Qf_avg Qf_sigma;p1_avg p1_sigma];

options.stepTestType = outputMatFileName;
options.stepSizes = 1;
options.stepDuration = 9.98*simTime/10;
options.stepInitTime = 1*simTime/100;
options.timeGap = 4*simTime/10;
%% Crappy Definitions
SimResults.CV(1).TimeSeries = [];
SimResults.CV(2).TimeSeries = [];
SimResults.CV(3).TimeSeries = [];
SimResults.CV(4).TimeSeries = [];
SimResults.CV(5).TimeSeries = [];
SimResults.CV(6).TimeSeries = [];
SimResults.CV(7).TimeSeries = [];
SimResults.CV(8).TimeSeries = [];

SimResults.MV(1).TimeSeries = [];
SimResults.MV(2).TimeSeries = [];

SimResults.DV(1).TimeSeries = [];
SimResults.DV(2).TimeSeries = [];
SimResults.DV(3).TimeSeries = [];
%% Sim
rng(231094134);
for input = 1:5
    switch typeOfTest
        case 'realThickening'
            Q_u.signals.values = BigData.PreProcessed(4,1:simTime)';
            Q_u.time = linspace(0,simTime,simTime/Dt)';
            gpt.signals.values = FlocculantNew(1,1:simTime)';
            gpt.time = linspace(0,simTime,simTime/Dt)';
            Q_f.signals.values = BigData.PreProcessed(7,1:simTime)'/3600;
            Q_f.time = linspace(0,simTime,simTime/Dt)';
            Cp_f.signals.values = wt_f(1:simTime)'/100;
            Cp_f.time = linspace(0,simTime,simTime/Dt)';
            p1_f.signals.values = p1_avg*ones(1,simTime)';
            p1_f.time = linspace(0,simTime,simTime/Dt)';
        case 'steady'
            % Use last value of operaton in Agosto as initial value
            Qu_0 = BigData.PreProcessed(4,simTime);
            gpt_0 = FlocculantNew(1,simTime)';
            Qf_avg = BigData.PreProcessed(7,simTime)/3600;
            Cf_avg = wt_f(simTime)/100;
            %
            Q_u = myStepTest(simTime,Dt,0,options.stepDuration,...
            options.stepInitTime,0,Qu_0,options.timeGap);
            gpt = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,gpt_0,options.timeGap);
            Q_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,Qf_avg,options.timeGap); % Change 0 for DVToGenerate(#DV,i) for DVStep
            Cp_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,Cf_avg,options.timeGap);
            p1_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,p1_avg,options.timeGap);
        case 'prbs'
            % Use last value of operaton in Agosto as initial value
            Qu_0 = BigData.PreProcessed(4,simTime);
            gpt_0 = FlocculantNew(1,simTime)';
            Qf_avg = BigData.PreProcessed(7,simTime)/3600;
            Cf_avg = wt_f(simTime)/100;
            %
            Q_u = myStepTest(simTime,Dt,0,options.stepDuration,...
            options.stepInitTime,0,Qu_0,options.timeGap);
            gpt = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,gpt_0,options.timeGap);
            Q_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,Qf_avg,options.timeGap); % Change 0 for DVToGenerate(#DV,i) for DVStep
            Cp_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,Cf_avg,options.timeGap);
            p1_f = myStepTest(simTime,Dt,0,options.stepDuration,...
                options.stepInitTime,0,p1_avg,options.timeGap);
            % PRBS definition
            Band = [0 1/(3600*1)]; % 1-hour period for signal
            Range = [-1*prbsAmplitude(input), prbsAmplitude(input)];
            prbsSignal = idinput(simTime,'prbs',Band,Range);
            
            Q_u.signals.values = Q_u.signals.values+prbsSignal*(input == 1);
            gpt.signals.values = gpt.signals.values+prbsSignal*(input == 2);
            Q_f.signals.values = Q_f.signals.values+prbsSignal*(input == 3);
            Cp_f.signals.values = Cp_f.signals.values+prbsSignal*(input == 4);
            p1_f.signals.values = p1_f.signals.values+prbsSignal*(input == 5);
    end
    run parametrosEmpty.m

    % load('Agosto_SimResults_1304_State.mat');
    load('Permanent_1606_State.mat');
    tic;
    sim('espesadorReal_1202.slx');
    SimResults.executionTime = toc;
    %% Output Handling
    % CV
    SimResults.CV(1).TimeSeries = [SimResults.CV(1).TimeSeries torque.signals.values(1:end-1)'];
    SimResults.CV(2).TimeSeries = [SimResults.CV(2).TimeSeries Cp_u.signals.values(1:end-1)'];
    SimResults.CV(3).TimeSeries = [SimResults.CV(3).TimeSeries bedLevel.signals.values(1:end-1)'];
    SimResults.CV(4).TimeSeries = [SimResults.CV(4).TimeSeries Cp_e.signals.values(1:end-1)'];
    SimResults.CV(5).TimeSeries = [SimResults.CV(5).TimeSeries filloutliers(residenceTime.signals.values(1:end-2)','clip','median')];
    SimResults.CV(6).TimeSeries = [SimResults.CV(6).TimeSeries solidFlux.signals.values(1:end-2)'];
    SimResults.CV(7).TimeSeries = [SimResults.CV(7).TimeSeries p1_u.signals.values(1:end-1)'];
    SimResults.CV(8).TimeSeries = [SimResults.CV(8).TimeSeries Q_e.signals.values(1:end-2)'*3600];
    SimResults.CV(1).Name = 'Torque';
    SimResults.CV(2).Name = 'CpUf';
    SimResults.CV(3).Name = 'BdLvl';
    SimResults.CV(4).Name = 'CpEf';
    SimResults.CV(5).Name = 'TauRd';
    SimResults.CV(6).Name = 'SFlux';
    SimResults.CV(7).Name = 'P1Uf';
    SimResults.CV(8).Name = 'EfFlow';
    startYield(1,:) = 0;
    % MV

    SimResults.MV(1).TimeSeries = [SimResults.MV(1).TimeSeries Q_u.signals.values'];
    SimResults.MV(2).TimeSeries = [SimResults.MV(2).TimeSeries gpt.signals.values'];
    SimResults.MV(1).Name = 'UFlow';
    SimResults.MV(2).Name = 'Gpt';
    % DV

    SimResults.DV(1).TimeSeries = [SimResults.DV(1).TimeSeries Q_f.signals.values'*3600];
    SimResults.DV(2).TimeSeries = [SimResults.DV(2).TimeSeries Cp_f.signals.values'];
    SimResults.DV(3).TimeSeries = [SimResults.DV(3).TimeSeries p1_f.signals.values];
    SimResults.DV(1).Name = 'FeedFlow';
    SimResults.DV(2).Name = 'CpFeed';
    SimResults.DV(3).Name = 'P1Feed';
%     %% Save
%     matFile = [options.stepTestType '_' prbsStrArray{input} '.mat'];
%     matFileState = [options.stepTestType '_' prbsStrArray{input} '_State.mat'];
%     run prepDataML.m
%     if saveToMatFile
%         save(matFile,'SimResults','options','startYield');
%         save(matFileState,'phi0','w0','u10','u20','u30');
%     end
end
%% Save
matFile = [options.stepTestType '.mat'];
matFileState = [options.stepTestType '_State.mat'];
run prepDataML.m
if saveToMatFile
    save(matFile,'SimResults','options','startYield');
    save(matFileState,'phi0','w0','u10','u20','u30');
end
