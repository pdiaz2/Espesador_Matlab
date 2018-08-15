clear all
clc;
close all;
%%
load('Septiembre_Sim_1304_BF')

%%
nameDataset = 'ThreeMonths';
typeOfData = 'Real';
dateTest = '2706';
outputMatFileName = [nameDataset '_' typeOfData '_' dateTest '_BF.mat'];
figurePath = ['figures\' typeOfData '\'];
saveToMatFile = false;
imprint = false;
plotFigures = true;
%%
granularity = 'g';
viewFreq = 100;
compensatePhase = 4;
startThickener = 0;
%%
months = {'Agosto','Septiembre','Octubre'};
SimResults.CV(1).TimeSeries = [];
SimResults.CV(2).TimeSeries = [];
SimResults.CV(3).TimeSeries = [];
SimResults.MV(1).TimeSeries = [];
SimResults.MV(2).TimeSeries = [];
SimResults.DV(1).TimeSeries = [];
SimResults.DV(2).TimeSeries = [];
for monthIndex = 1:length(months)
    month = months{monthIndex};
    matFileName = ['ThickenerOperation_' month '_BF.mat'];
    load(matFileName);

    numVars = length(BigData.varsIndex);
    [numSamples garbage] = size(BigData.RawData');
    Dt = 1;
    simTime = BigData.manual.timeLimit;
    SimResults.CV(1).TimeSeries = [SimResults.CV(1).TimeSeries; BigData.PreProcessed(1,1:simTime)'];
    SimResults.CV(2).TimeSeries = [SimResults.CV(2).TimeSeries; BigData.PreProcessed(2,1:simTime)'];
    SimResults.CV(3).TimeSeries = [SimResults.CV(3).TimeSeries; BigData.PreProcessed(3,1:simTime)'];


    % MV

    SimResults.MV(1).TimeSeries = [SimResults.MV(1).TimeSeries; BigData.PreProcessed(4,1:simTime)'];
    SimResults.MV(2).TimeSeries = [SimResults.MV(2).TimeSeries; FlocculantNew(1,1:simTime)'];

    % DV

    SimResults.DV(1).TimeSeries = [SimResults.DV(1).TimeSeries; BigData.PreProcessed(7,1:simTime)'];
    SimResults.DV(2).TimeSeries = [SimResults.DV(2).TimeSeries; wt_f(1:simTime)'/100];
end
%% Pad Variables Not Used
numSamples = length(SimResults.CV(1).TimeSeries);
for cv = 4:length(SimResults.CV)
   SimResults.CV(cv).TimeSeries = padarray(SimResults.CV(cv).TimeSeries',...
                                    numSamples-length(SimResults.CV(cv).TimeSeries),...
                                    'replicate','post');
                                            
end
for dv = 3:length(SimResults.DV)
   SimResults.DV(dv).TimeSeries = padarray(SimResults.DV(dv).TimeSeries,...
                                    numSamples-length(SimResults.DV(dv).TimeSeries),...
                                    'replicate','post');
                                            
end
%% FFT of Signals
fftWindow = 15*3600:60*3600;

SimResults.fftWindow = fftWindow;
% Viewing frequency components for August only: implied in this is
% hypothesis that noise properties and fundamental frequencies do not
% change so much over time (stationary process)
for cv = 1:8
    SimResults.CV(cv).FFT = fft(SimResults.CV(cv).TimeSeries(fftWindow))*1/length(fftWindow);
    
end

for dv = 1:3
    SimResults.DV(dv).FFT = fft(SimResults.DV(dv).TimeSeries(fftWindow))*1/length(fftWindow);
end

for mv = 1:2
    SimResults.MV(mv).FFT = fft(SimResults.MV(mv).TimeSeries(fftWindow));
end
for dv = 1:3
    SimResults.DV(dv).FFT = fft(SimResults.DV(dv).TimeSeries(fftWindow));
end
%% Filter Design
lpFilt = designfilt('lowpassiir','FilterOrder',2, ...
         'PassbandFrequency',4e-4,...
         'PassbandRipple',0.01, ...
         'SampleRate',1);
% fvtool(lpFilt);
%%
SimResultsRaw = SimResults;
SimResultsRaw = dp_group_time_series(SimResultsRaw);
%% PreProcessing
SimResultsRaw.groupBy = 60;
SimResults = data_preprocessing(SimResultsRaw,lpFilt);
options.stepTestType = '_Real';
%% Manual Adjustments
SimResultsRaw.filterWarmUp = 10;
SimResults.filterWarmUp = SimResultsRaw.filterWarmUp;
SimResultsRaw = dp_compensate_filter_warmup(SimResultsRaw);
SimResults = dp_compensate_filter_warmup(SimResults);
SimResults.compensatePhase = compensatePhase;
SimResults = dp_compensate_phase(SimResults);
%%
badCp_u = find(SimResults.CV(2).GroupedTimeSeries(:) > 79);
badBedLevel = find(SimResults.CV(3).GroupedTimeSeries(:) > 11.5);
%% Plot
CVNames = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
MVNames = {'Discharge Flow','Flocculant Dose'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
DVNames = {'Feed rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/s','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
if strcmp('s',granularity)
    samples = length(SimResultsRaw.CV(1).TimeSeries);
    figAppendName = '';
    divisorTime = 1;
else
    samples = length(SimResultsRaw.CV(1).GroupedTimeSeries);
    figAppendName = '_g';
    divisorTime = SimResults.groupBy;
end
% options.simTime/3600 = in hours
time = linspace(0,options.simTime*length(months)/3600,samples+1);
timeToWatch = length(time)-1;
SimResultsRaw.CV(5).TimeSeries = filloutliers(SimResultsRaw.CV(5).TimeSeries,'clip','median');
dynamicRangeCV = zeros(numel(CVNames),3);
dynamicRangeMV = zeros(numel(MVNames),3);
dynamicRangeDV = zeros(numel(DVNames),3);

if (plotFigures)
    % CV Plots5
    for cv = 1:3%length(CVNames)
        figure
        title(CVNames{cv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResultsRaw.CV(cv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.CV(cv).TimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch-compensatePhase),SimResultsRaw.CV(cv).GroupedTimeSeries(1:timeToWatch-compensatePhase))
            plot(time(1:timeToWatch-compensatePhase),SimResults.CV(cv).GroupedTimeSeries(1:end))
        end
        ylabel(CVUnits{cv})
        xlabel('Hours [hr]')
        legend('Semi-Raw','PreProcessed')
        grid on
        printName = [figurePath CVSaveName{cv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
        dynamicRangeCV(cv,1) = min(SimResultsRaw.CV(cv).TimeSeries(1:timeToWatch));
        dynamicRangeCV(cv,2) = max(SimResultsRaw.CV(cv).TimeSeries(1:timeToWatch));
        dynamicRangeCV(cv,3) = dynamicRangeCV(cv,2)-dynamicRangeCV(cv,1);
    end
    % MV Plots
    for mv = 1:length(MVNames)
        figure
        title(MVNames{mv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResultsRaw.MV(mv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.MV(mv).TimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch-compensatePhase),SimResultsRaw.MV(mv).GroupedTimeSeries(1:timeToWatch-compensatePhase))
            plot(time(1:timeToWatch-compensatePhase),SimResults.MV(mv).GroupedTimeSeries(1:end))
        end
        grid on
        ylabel(MVUnits{mv})
        xlabel('Hours [hr]')
        legend('Semi-Raw','PreProcessed')
        printName = [figurePath MVSaveName{mv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
        
        dynamicRangeMV(mv,1) = min(SimResultsRaw.MV(mv).TimeSeries(1:timeToWatch));
        dynamicRangeMV(mv,2) = max(SimResultsRaw.MV(mv).TimeSeries(1:timeToWatch));
        dynamicRangeMV(mv,3) = dynamicRangeMV(mv,2)-dynamicRangeMV(mv,1);
    end
    % DV Plots
    for dv = 1:length(DVNames)
        figure
        title(DVNames{dv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResultsRaw.DV(dv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.DV(dv).TimeSeries(1:timeToWatch))
        else
            plot(time(1:timeToWatch-compensatePhase),SimResults.DV(dv).GroupedTimeSeries(1:timeToWatch-compensatePhase))
            plot(time(1:timeToWatch-compensatePhase),SimResults.DV(dv).GroupedTimeSeries(1:end))
        end
        grid on
        ylabel(DVUnits{dv})
        xlabel('Hours [hr]')
        legend('Semi-Raw','PreProcessed')
        printName = [figurePath DVSaveName{dv} options.stepTestType figAppendName];
        if imprint
            % Latex
            print(printName,'-depsc');
        end
        hold off
        dynamicRangeDV(dv,1) = min(SimResultsRaw.DV(dv).TimeSeries(1:timeToWatch));
        dynamicRangeDV(dv,2) = max(SimResultsRaw.DV(dv).TimeSeries(1:timeToWatch));
        dynamicRangeDV(dv,3) = dynamicRangeDV(dv,2)-dynamicRangeDV(dv,1);
    end
end
%% Frequency plots
% f = -1/length(SimResults.fftWindow)/2:1/length(SimResults.fftWindow)/2;
f = -1/2:1/length(SimResultsRaw.fftWindow):1/2;
f = 0:1/length(SimResultsRaw.fftWindow):1;

maxFreqCV = zeros(length(CVNames),2);
maxFreqMV = zeros(length(MVNames),2);
maxFreqDV = zeros(length(DVNames),2);

figure
for cv = 1:3
    title('Frequency Analysis of Thickener CV')
    hold on
    plot(f(1:viewFreq),10*log10(abs((SimResultsRaw.CV(cv).FFT(1:viewFreq))))) 
    ylabel('dB')
    xlabel('Frequency [Hz]')
    
    printName = [figurePath 'FFT_CV_Real_' num2str(viewFreq)];
    [maxFreqCV(cv,1),maxFreqCV(cv,2)] = max(10*log10((abs(SimResultsRaw.CV(cv).FFT(1:end)))));
end
legend(CVNames{1:3});
grid on
if imprint
    % Latex
    print(printName,'-depsc');
end

figure
for mv = 1:length(MVNames)
    title('Frequency Analysis of Thickener MV')
    hold on
    plot(f(1:viewFreq),10*log10(abs((SimResultsRaw.MV(mv).FFT(1:viewFreq))))) 
    ylabel('dB')
    xlabel('Frequency [Hz]')
    printName = [figurePath 'FFT_MV_' typeOfData '_' num2str(viewFreq)];
    [maxFreqMV(mv,1),maxFreqMV(mv,2)] = max(10*log10((abs(SimResultsRaw.MV(mv).FFT(1:end)))));
end
legend(MVNames);
grid on
if imprint
    % Latex
    print(printName,'-depsc');
end
hold off
%% Autocorrelation
startAutocorr = 200*60;
maxLag = 24*60;
autocorrWindowSize = 100*60;

for cv = 1:3
    figure
    DC = mean(SimResults.CV(cv).GroupedTimeSeries(startAutocorr:...
                              startAutocorr+autocorrWindowSize));
    Var = var(SimResults.CV(cv).GroupedTimeSeries(startAutocorr:...
                              startAutocorr+autocorrWindowSize));
    [r,lags] = xcorr(SimResults.CV(cv).GroupedTimeSeries(startAutocorr:...
                              startAutocorr+autocorrWindowSize)-DC,maxLag);
    subplot(2,1,1)
    plot((0:autocorrWindowSize)/60,SimResults.CV(cv).GroupedTimeSeries(startAutocorr:...
                              startAutocorr+autocorrWindowSize))
    xlabel('Hours [hr]')
    grid on
    subplot(2,1,2)
    plot(r(floor(length(r)/2)+1:end)/(autocorrWindowSize*Var))
    xlabel('Lags (min)')
    grid on
end


%%
for cv = 1:length(CVNames)
    SimResults.CV(cv).Name = SimResultsRaw.CV(cv).Name;
end
for mv = 1:length(MVNames)
    SimResults.MV(mv).Name = SimResultsRaw.MV(mv).Name;
end
for dv = 1:length(DVNames)
    SimResults.DV(dv).Name = SimResultsRaw.DV(dv).Name;
end
%%
if saveToMatFile
    save(outputMatFileName,'SimResults','options','startYield');
end

