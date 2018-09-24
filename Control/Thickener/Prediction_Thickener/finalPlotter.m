close all;
imprint = true;
figurePath = 'FinalSim';
%% Options for plotting

CVNames = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque_','Cp_u_','intLevel_','Cp_e_','tauRd_','SFlx_','P1_U_','Q_e_'};
xLabelStr = 'Time [hr]';
LineWidth = 0.7;
cvLims = [20.7 21.7;
          73 75;
          -0.5 2.5];
%% Plot prediction comparisons
% Forecast comparison
load('predictionResults_48G_348_B100_k5_na6_nb6');
for cv = 1:n
    figure
    plot(timeForecast,validationOutputs(1+pastDataSamples:pastDataSamples+K_forecast,cv),'LineWidth',2)
    hold on
    title(CVNames{cv})
    plot(timeForecast,armaxForecast(:,cv),'--k','LineWidth',1.5)
    plot(timeForecast,RFPredictionStruct(cv).yForecast(:),'-.m','LineWidth',1.5)
    
    xlabel(xLabelStr);
    hold off
    grid on
%     printName = [figurePath 'forecast_' CVSaveName{cv} typeOfData ioDTStr noiseStr...
%                 kAheadStr varStringRF '_' dateTest];
%     if imprint
%         Latex
%         print(printName,'-depsc');
%         print(printName,'-djpeg');
%     end
end
load('predictionResults_48G_348_B50_Ny_48_k5_na6_nb6');
for cv = 1:n
    figure(cv)
    hold on
    plot(timeForecast,RFPredictionStruct(cv).yForecast(:),'-r','LineWidth',1.5)
    legendCell = {'Validation','ARIMAX','RF_{r}','RF_{b}'};
    locationStr = input('Loc','s');
    location = locateLegends(locationStr);
    legend(legendCell,'Location',location);
    printName = [figurePath 'forecast_' CVSaveName{cv}];
    if imprint
        print(printName,'-depsc');
    end
end

% Forecast comparison 530
load('predictionResults_1G_530_B100_k5_na6_nb6');
for cv = 1:n
    figure
    plot(timeForecast,validationOutputs(1+pastDataSamples:pastDataSamples+K_forecast,cv),'LineWidth',2)
    hold on
    title(CVNames{cv})
    plot(timeForecast,armaxForecast(:,cv),'--k','LineWidth',1.5)
    plot(timeForecast,RFPredictionStruct(cv).yForecast(:),'-.m','LineWidth',1.5)
    
    xlabel(xLabelStr);
    hold off
    grid on
%     printName = [figurePath 'forecast_' CVSaveName{cv} typeOfData ioDTStr noiseStr...
%                 kAheadStr varStringRF '_' dateTest];
%     if imprint
%         Latex
%         print(printName,'-depsc');
%         print(printName,'-djpeg');
%     end
end
load('predictionResults_48G_530_B50_Ny_48_k5_na6_nb6');
for cv = 1:n
   figure(cv+3)
   hold on
   plot(timeForecast,RFPredictionStruct(cv).yForecast(:),'-r','LineWidth',1.5)
   legendCell = {'Validation','ARIMAX','RF_{r}','RF_{b}'};
    locationStr = input('Loc','s');
    location = locateLegends(locationStr);
    legend(legendCell,'Location',location);
    printName = [figurePath 'forecast_' CVSaveName{cv}];
    if imprint
        print(printName,'-depsc');
    end
end
%%
% Prediction comparison
load('predictionResults_1G_530_B50_Ny_48_k5_na6_nb6')
for cv = 1:n
    figure
    title(CVNames{cv})
    hold on % (-1)
    plot(timePrediction(1:end),validationOutputs(1:end-armaxToRFWindowUB,cv),'LineWidth',2)
    plot(timePrediction(1:end),armaxPredict(1:end-armaxToRFWindowUB,cv),'--k','LineWidth',LineWidth);
    ylabel(CVUnits{cv})
    xlabel(xLabelStr)
    xlim([0 102])
    ylim(cvLims(cv,:))
    hold off
    grid on
end
kAheadIter = [1 24 48];
load('predictionResults_1G_348_B100_k5_na6_nb6');
kAheadIter = 1;
for iter = 1:length(kAheadIter)
    for cv = 1:n
        figure(6+3*(iter-1)+cv)
        hold on
        plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,kAheadIter(iter)),'-.m','LineWidth',LineWidth)
    end
end

load('predictionResults_1G_530_B50_Ny_48_k5_na6_nb6');
kAheadIter = 1;
for iter = 1:length(kAheadIter)
    for cv = 1:n
        figure(6+3*(iter-1)+cv)
        hold on
        plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,kAheadIter(iter)),'-r','LineWidth',LineWidth)
        legendCell = {'Validation','ARIMAX','RF_{r}','RF_{b}'};
        locationStr = input('Loc','s');
        location = locateLegends(locationStr);
        legend(legendCell,'Location',location);
        printName = [figurePath 'predict_1_' CVSaveName{cv}];
        if imprint
            print(printName,'-depsc');
        end
    end
    
end


load('predictionResults_24G_530_B50_Ny_48_k5_na6_nb6')
for cv = 1:n
    figure
    title(CVNames{cv})
    hold on % (-1)
    plot(timePrediction(1:end),validationOutputs(1:end-armaxToRFWindowUB,cv),'LineWidth',2)
%     plot(timePrediction(1:end),armaxPredict(1:end-armaxToRFWindowUB,cv),'--k','LineWidth',LineWidth);
    plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,24),'-r','LineWidth',LineWidth)
    ylabel(CVUnits{cv})
    xlabel(xLabelStr)
    xlim([0 102])
    ylim(cvLims(cv,:))
    hold off
    grid on
end
load('predictionResults_48G_530_B50_Ny_48_k5_na6_nb6');
for cv = 1:n
    figure
    title(CVNames{cv})
    hold on % (-1)
    plot(timePrediction(1:end),validationOutputs(1:end-armaxToRFWindowUB,cv),'LineWidth',2)
%     plot(timePrediction(1:end),armaxPredict(1:end-armaxToRFWindowUB,cv),'--k','LineWidth',LineWidth);
    plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,48),'-r','LineWidth',LineWidth)
    ylabel(CVUnits{cv})
    xlabel(xLabelStr)
    xlim([0 102])
    ylim(cvLims(cv,:))
    hold off
    grid on
end


load('predictionResults_24G_348_B100_k5_na6_nb6');
for iter = 1:length(kAheadIter)
    for cv = 1:n
        figure(9+cv)
        hold on
        plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,24),'-.k','LineWidth',LineWidth)
        legendCell = {'Validation','RF_{b}','RF_{r}'};
        locationStr = input('Loc','s');
        location = locateLegends(locationStr);
        legend(legendCell,'Location',location);
        printName = [figurePath 'predict_24_' CVSaveName{cv}];
        if imprint
            print(printName,'-depsc');
        end
    end
end

load('predictionResults_48G_348_B100_k5_na6_nb6');
for iter = 1:length(kAheadIter)
    for cv = 1:n
        figure(12+cv)
        hold on
        plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,48),'-.k','LineWidth',LineWidth)
        legendCell = {'Validation','RF_{b}','RF_{r}'};
        locationStr = input('Loc','s');
        location = locateLegends(locationStr);
        legend(legendCell,'Location',location);
        printName = [figurePath 'predict_48_' CVSaveName{cv}];
        if imprint
            print(printName,'-depsc');
        end
    end
end
% % % load('predictionResults_1G_530_B50_Ny_48_k5_na6_nb6');
% % % for iter = 1:length(kAheadIter)
% % %     for cv = 1:n
% % %         figure(6+3*(iter-1)+cv)
% % %         hold on
% % %         plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,kAheadIter(iter)),'--r','LineWidth',LineWidth)
% % %     end
% % % end
% % % for cv = 1:n
% % %     
% % %     plot(timePrediction(1:end),RFPredictionStruct(cv).yHat(:,K_ahead),'-.r','LineWidth',LineWidth)
% % %     
% % %     legend({'Validation','ARIMAX','RF'});
% % %     hold off
% % %     grid on
% % %     printName = [figurePath CVSaveName{cv} typeOfData ioDTStr noiseStr...
% % %                 kAheadStr varStringRF '_' dateTest];
% % %     if imprint
% % %         Latex
% % %         print(printName,'-depsc');
% % %         print(printName,'-djpeg');
% % %     end
% % % end
% Reaction Curves
load('predictionResults_48G_530_B50_Ny_48_k5_na6_nb6');
for simIter = 1:size(makeStepMatrix)
    for cv = 1:n
        figure
        title(CVNames{cv})
        hold on
        plot(tForecast/3600,ReactionCurveStruct(simIter).yThickener(:,cv)','LineWidth',1.5)
        plot(tForecast/3600,ReactionCurveStruct(simIter).y_ARMAX(cv,:),'--k','LineWidth',1.5);
        plot(tForecast/3600,ReactionCurveStruct(simIter).y_RF(:,cv)','-.r','LineWidth',1.5)

        ylabel(CVUnits{cv})
        xlabel(xLabelStr)
        
        hold off
        grid on
        legendCell = {'Validation','ARIMAX','RF_{b}'};
        locationStr = input('Loc','s');
        location = locateLegends(locationStr);
        legend(legendCell,'Location',location);
        printName = [figurePath 'RC_' CVSaveName{cv} num2str(simIter)];
        if imprint
            print(printName,'-depsc');
        end
    end
end