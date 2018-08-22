% load('')
%%
simIter = 3;
sampleTimes = [1 10 20 30];
plotTrajectory = false;
plotMVSequence = true;
%%
titlesCV = {'Torque Trajectory','Underflow Concentration Trajectory','Interface Level Trajectory','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
titlesMV = {'Discharge Flow Optimal Sequence','Flocculant Dose Optimal Sequence'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
titlesDV = {'Feed rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/s','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
titlesHyp = {'ExitFlags','F.O. Values'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
% Colors
% Colors
controlColors = {'r','b','y'};
controlLineStyle = {'-','-.','--'};
controlMarker = {'*','none','d'};
% Y Axis Limits
CVLims = [15 22;
         65 75;
         0 10];
MVLims = [80 120;
          20 30];
%%
if plotTrajectory
    for f = 1:length(sampleTimes)
        sampleTime = sampleTimes(f);
        optimalTrajectory_RF = yHatMPC_RF(sampleTime,:,:,simIter);
        if useMPC_ARMAX
            optimalTrajectory_ARMAX = yHatMPC_ARMAX(sampleTime,:,:,simIter);
        end
        f1 = figure;
        fig = gcf;
        movegui(fig,'northeast')
        for cv = 1:numCV
            subplot(numCV,1,cv)
            % Add for
            plot(0:(N_y-1),optimalTrajectory_RF(cv,:),...
                   'LineWidth',1,...
                   'Color',controlColors{1},...
                   'LineStyle',controlLineStyle{1})
            hold on
            if useMPC_ARMAX
                plot(0:(N_y-1),optimalTrajectory_ARMAX(cv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            title(titlesCV{cv})
            ylabel(CVUnits{cv})
            xlabel(['Samples [' num2str(tau_R/60)  'min/sample]']);
%             ylim(MVLims(mv,:));
            ylim auto
            yLegend_1 = ['$y*_' num2str(mv) '$ RF'];
            yLegend_2 = ['$y*_' num2str(mv) '$ ARIMAX'];
    %         legend({mLegend_1,mLegend_2},'Interpreter','latex');
            grid on
            
        end
        
        if imprint
                printName = [figurePath 'optTrajectory_' num2str(simIter) '_' num2str(f) '_' dateMatFileStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
end
if plotMVSequence
    for f = 1:length(sampleTimes)
        sampleTime = sampleTimes(f);
        localControlMove_RF = controlMovesMPC_RF(sampleTime,:,:,simIter);
        if useMPC_ARMAX
            localControlMove_ARMAX = controlMovesMPC_ARMAX(sampleTime,:,:,simIter);
        end
        f1 = figure;
        fig = gcf;
        movegui(fig,'southwest')
        for mv = 1:numMV
            subplot(numMV,1,mv)
            % Add for
            plot(0:(N_y-1),localControlMove_RF(mv,:),...
                   'LineWidth',1,...
                   'Color',controlColors{1},...
                   'LineStyle',controlLineStyle{1})
            hold on
            if useMPC_ARMAX
                plot(0:(N_y-1),localControlMove_RF(mv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            title(titlesMV{mv})
            ylabel(MVUnits{mv})
            xlabel(['Samples [' num2str(tau_R/60)  'min/sample]']);
%             ylim(MVLims(mv,:));
            ylim auto
            mLegend_1 = ['$u*_' num2str(mv) '$ RF'];
            mLegend_2 = ['$u*_' num2str(mv) '$ ARIMAX'];
    %         legend({mLegend_1,mLegend_2},'Interpreter','latex');
            grid on
            
        end
        
        if imprint
                printName = [figurePath 'controlMoves_' num2str(simIter) '_' num2str(f) '_' dateMatFileStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
end