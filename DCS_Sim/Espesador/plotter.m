close all;
clear all;
clc;
%%
% matFileName = 'Agosto_SimResults_1304_rawData.mat';
nameDataset = 'ThreeMonths';
typeOfData = 'Real';
dateTest = '2706';
matFileName = [nameDataset '_' typeOfData '_' dateTest '_Trials_BF.mat'];
figurePath = ['figures\' typeOfData '\'];
imprint = false;
plotFigures = true;
granularity = 's';
%%
load(matFileName)
% CV
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
    samples = length(SimResults.CV(1).TimeSeries);
    figAppendName = '';
    divisorTime = 1;
else
    samples = length(SimResults.CV(1).GroupedTimeSeries);
    figAppendName = '_g';
    divisorTime = SimResults.groupBy;
end
% options.simTime/3600 = in hours
time = linspace(0,options.simTime/3600,samples+1);
timeToWatch = length(time)-1;
SimResults.CV(5).TimeSeries = filloutliers(SimResults.CV(5).TimeSeries,'clip','median');
dynamicRangeCV = zeros(numel(CVNames),3);
dynamicRangeMV = zeros(numel(MVNames),3);
dynamicRangeDV = zeros(numel(DVNames),3);
%% Plotting
if (plotFigures)
    % CV Plots
    for cv = 1:length(CVNames)
        figure
        title(CVNames{cv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.CV(cv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.CV(cv).FilteredTimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch),SimResults.CV(cv).GroupedTimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.CV(cv).LearingData(1:timeToWatch))
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
        dynamicRange(cv,1) = min(SimResults.CV(cv).TimeSeries(1:timeToWatch));
        dynamicRange(cv,2) = max(SimResults.CV(cv).TimeSeries(1:timeToWatch));
        dynamicRange(cv,3) = dynamicRange(cv,2)-dynamicRange(cv,1);
    end
    % MV Plots
    for mv = 1:length(MVNames)
        figure
        title(MVNames{mv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.MV(mv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.MV(mv).FilteredTimeSeries(1:timeToWatch)) 
        else
            plot(time(1:timeToWatch),SimResults.MV(mv).GroupedTimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.MV(mv).LearingData(1:timeToWatch))
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
        
        dynamicRange(mv,1) = min(SimResults.CV(mv).TimeSeries(1:timeToWatch));
        dynamicRange(mv,2) = max(SimResults.CV(mv).TimeSeries(1:timeToWatch));
        dynamicRange(mv,3) = dynamicRange(mv,2)-dynamicRange(mv,1);
    end
    % DV Plots
    for dv = 1:length(DVNames)
        figure
        title(DVNames{dv})
        hold on
        if strcmp('s',granularity)
            plot(time(1:timeToWatch),SimResults.DV(dv).TimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.DV(dv).FilteredTimeSeries(1:timeToWatch))
        else
            plot(time(1:timeToWatch),SimResults.DV(dv).GroupedTimeSeries(1:timeToWatch))
            plot(time(1:timeToWatch),SimResults.DV(dv).LearingData(1:timeToWatch))
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
        dynamicRange(dv,1) = min(SimResults.CV(dv).TimeSeries(1:timeToWatch));
        dynamicRange(dv,2) = max(SimResults.CV(dv).TimeSeries(1:timeToWatch));
        dynamicRange(dv,3) = dynamicRange(dv,2)-dynamicRange(dv,1);
    end
end
%% Frequency plots
% f = -1/length(SimResults.fftWindow)/2:1/length(SimResults.fftWindow)/2;
f = -1/2:1/length(SimResults.fftWindow):1/2;
f = 0:1/length(SimResults.fftWindow):1;
viewFreq = 100;
maxFreqCV = zeros(length(CVNames),2);
maxFreqMV = zeros(length(MVNames),2);
maxFreqDV = zeros(length(DVNames),2);

figure
for cv = 1:3
    title('Frequency Analysis of Thickener CV')
    hold on
    plot(f(1:viewFreq),10*log10(abs((SimResults.CV(cv).FFT(1:viewFreq))))) 
    ylabel('dB')
    xlabel('Frequency [Hz]')
    
    printName = [figurePath 'FFT_CV_Real_' num2str(viewFreq)];
    [maxFreqCV(cv,1),maxFreqCV(cv,2)] = max(10*log10((abs(SimResults.CV(cv).FFT(1:end)))));
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
    plot(f(1:viewFreq),10*log10(abs((SimResults.MV(mv).FFT(1:viewFreq))))) 
    ylabel('dB')
    xlabel('Frequency [Hz]')
    printName = [figurePath 'FFT_MV_' typeOfData '_' num2str(viewFreq)];
    [maxFreqMV(mv,1),maxFreqMV(mv,2)] = max(10*log10((abs(SimResults.MV(mv).FFT(1:end)))));
end
legend(MVNames);
grid on
if imprint
    % Latex
    print(printName,'-depsc');
end
