close all;
% Manual inputs
% load('ControlResults_MVP_2709_MB.mat');
load('ControlResults_final_1111.mat');
figurePath = 'figures\isolatedGraphs_Correc\'
imprint = true;
subPlotBool = false;
simTime = 200*3600;
usePlotCVLims = false;
usePlotMVLims = true;
kappaControl_ARMAX = 1;
dateOutputStr = '1111';
%%
plotControlFrom = 2
plotControlTo = 3;
startPlotTime = 1; %1
endPlotTime = length(t); %length(t)
xLimVector = [0 simTime/3600];
% For zooming in on certain parts, uncomment below
% startPlotTime = 45*3600;
% endPlotTime = 65*3600;
xLimVector = [startPlotTime endPlotTime]/3600;
% Y Axis Limits
%%
% Limits and Ticks for full plots
% CVLims = [20 22;
%          72.5 75;
%          0 6];
% MVLims = [65 130;
%           17 32];
% DVLims = [280 400;
%           15 45];
% CVTicks = [20 20.5 21 21.5 22;
%             72.5 73.25 73.85 74.5 75;
%             0 1.5 3 4.5 6];
% MVTicks = [70 85 100 115 130;
%            18 21 25 28 32];
% CVLims = [20.75 21.25;
%          73.25 74.5;
%          0 5.5];
% MVLims = [65 130;
%           18 32];
% DVLims = [280 400;
%           15 45];
% CVTicks = [20.75 21 21.25;
%             73.25 73.85 74.5;
%             0 2.5 5];
% MVTicks = [70 85 100 115 130;
%            18 21 25 28 32];
CVLims = [17.5 22;
         71 75;
         0 7.5];
MVLims = [65 130;
          17 32];
DVLims = [280 400;
          15 45];
CVTicks = [20 20.5 21 21.5 22;
            72.5 73.25 73.85 74.5 75;
            0 1.5 3 4.5 6];
CVTicks = [linspace(CVLims(1,1)+0.25,CVLims(1,2)-0.25,5);
            linspace(CVLims(2,1)+0.25,CVLims(2,2)-0.25,5);
            linspace(CVLims(3,1)+0.1, CVLims(3,2)-0.1,5)];
MVTicks = [70 85 100 115 130;
           18 21 25 28 32];
%%
titlesCV = {'Torque','Underflow Concentration','Interface Level','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
titlesMV = {'Underflow Rate','Flocculant Dosage'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
titlesDV = {'Feed Rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/hr','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
titlesHyp = {'ExitFlags','O.F. Values'};
titlesExpert = {'Torque Contribution','Concentration Contribution','Interface Contribution';
                'Proportional Action','Integral Action','Derivative Action'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/hr','%','N/A'};
% Colors
controlColors = {'r','k','b','m'};
controlLineStyle = {'-','--',':','-.'}; % Put both PID and Expert in m -. for comparison between opt v/s trad
controlMarker = {'*','d','o','none'};
lineWidth = [1.5 1.25 1.5 1.35];

controllersUsedStr = [num2str(useMPC_RF) num2str(useMPC_ARMAX) num2str(useExpert) num2str(usePID)];
%% Subplots
if subPlotBool
    for simIter = plotControlFrom:plotControlTo
        iterInfo = '                               Iteration %d has figures %d,%d,%d,%d\r\n';
        iterMatrix = [simIter,1+(simIter-1)*4,2+(simIter-1)*4,3+(simIter-1)*4,4+(simIter-1)*4];
        fprintf(iterInfo,iterMatrix)
        f1 = figure(1+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'southwest')

        for cv = 1:numCV
            subplot(numCV,1,cv)
            if useMPC_RF
                plot(t(startPlotTime:endPlotTime),yMPC_RF(startPlotTime:endPlotTime,cv,simIter),...
                        'LineWidth',lineWidth(1),...
                        'Color',controlColors{1},...
                        'LineStyle',controlLineStyle{1})
            end
            hold on
            if useMPC_ARMAX
                plot(t(startPlotTime:endPlotTime),yMPC_ARMAX(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(2),...
                       'Color',controlColors{2},...
                       'LineStyle',controlLineStyle{2})
            end
            if useExpert
                plot(t(startPlotTime:endPlotTime),yExpert(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(3),...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            if usePID
                plot(t(startPlotTime:endPlotTime),yPID(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(4),...
                       'Color',controlColors{4},...
                       'LineStyle',controlLineStyle{4},...
                       'Marker',controlMarker{4},'MarkerSize',0.8)
            end


            title(titlesCV{cv})
            plot(t(startPlotTime:endPlotTime),wRefSimulink(startPlotTime:endPlotTime,cv,simIter),...
                    'Color',[0.0 0.45 0.0],'LineStyle',':','LineWidth',2.25);
        %     plot(t(startPlotTime:endPlotTime),yFiltered.signals.values(startPlotTime:endPlotTime,cv),'g','LineWidth',1);
            ylabel(CVUnits{cv})
            xlabel('Time [hr]')
            if usePlotCVLims
                ylim(CVLims(cv,:));
                useLimStr = '';
                yticks(CVTicks(cv,:))
            else
                useLimStr = 'nl_';
                ylim auto
            end

            xlim(xLimVector);
            yLegend_1 = ['$y_' num2str(cv) '$ MPC-RF'];
            yLegend_2 = ['$y_' num2str(cv) '$ PI'];
            wLegend = ['$w_' num2str(cv) '$'];
        %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
    %         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
            grid on
            hold off
        end
        if imprint
                printName = [figurePath 'cv_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
    %             print(printName,'-djpeg');
        end
        f2 = figure(2+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'northwest')
        for dv = 1:numDV
            subplot(numDV,1,dv)
            if dv == 2
                kPlot = 100;
            else
                kPlot = 1;
            end
            if useMPC_RF
                plot(t(startPlotTime:endPlotTime),kPlot*dMPC_RF(startPlotTime:endPlotTime,dv,simIter),...
                       'LineWidth',1,...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1})
            end
            if useMPC_ARMAX
                plot(t(startPlotTime:endPlotTime),kPlot*dMPC_ARMAX(startPlotTime:endPlotTime,dv,simIter),...
                       'LineWidth',1,...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1})
            end
            hold on
            title(titlesDV{dv})
            ylabel(DVUnits{dv})
            xlabel('Time [hr]')
            if usePlotMVLims
                ylim(DVLims(dv,:));
                useLimStr = '';
            else
                useLimStr = 'nl_';
                ylim auto
            end
            xlim(xLimVector);
            dLegend = ['$d_' num2str(dv) '$'];
    %         legend({dLegend},'Interpreter','latex');
            grid on

        end

        if imprint
                printName = [figurePath 'dv_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
    %             print(printName,'-djpeg');
        end


        f3 = figure(3+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'northeast')
        for mv = 1:numMV
            subplot(numMV,1,mv)
            % Add for
            if useMPC_RF
                plot(t(startPlotTime:endPlotTime),uMPC_RF(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(1),...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1})
            end
            hold on
            if useMPC_ARMAX
                plot(t(startPlotTime:endPlotTime),uMPC_ARMAX(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(2),...
                       'Color',controlColors{2},...
                       'LineStyle',controlLineStyle{2})
            end
            if useExpert
                plot(t(startPlotTime:endPlotTime),uExpert(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(3),...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            if usePID
                plot(t(startPlotTime:endPlotTime),uPID(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(4),...
                       'Color',controlColors{4},...
                       'LineStyle',controlLineStyle{4},...
                       'Marker',controlMarker{4},'MarkerSize',0.8)
            end


            title(titlesMV{mv})
            ylabel(MVUnits{mv})
            xlabel('Time [hr]')
    %         if usePlotLims
    %             ylim(MVLims(mv,:));
    %         else
    %             ylim auto
    %         end
            ylim(MVLims(mv,:));
            yticks(MVTicks(mv,:));
            xlim(xLimVector);
            mLegend_1 = ['$u_' num2str(mv) '$ MPC'];
            mLegend_2 = ['$u_' num2str(mv) '$ PI'];
    %         legend({mLegend_1,mLegend_2},'Interpreter','latex');
            grid on

        end

        if imprint
                printName = [figurePath 'mv_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
    %             print(printName,'-djpeg');
        end

        if useMPC_ARMAX || useMPC_RF
            f4 = figure(4+(simIter-1)*4);
            fig = gcf;
            movegui(fig,'southeast')
            [~,hyperResults] = size(solverResults.signals.values);
            for hyp = 1:hyperResults
                subplot(hyperResults,1,hyp)
                if useMPC_RF
                    [controllerHits,~,~] = size(optMPC_RF);
                    plot((1:controllerHits)*tau_C_RF/3600,optMPC_RF(:,hyp,simIter),...
                        'Marker',controlMarker{1},...
                        'Color',controlColors{1},...
                        'LineStyle','none',...
                        'MarkerSize',1)
                end
                hold on

                if useMPC_ARMAX
                    [controllerHits,~,~] = size(optMPC_ARMAX);
                    if hyp == 1
                        solverSteps_ARMAX(:,simIter) = optMPC_ARMAX(:,hyp,simIter);
                        successIndex = solverSteps_ARMAX >= 1;
                        optMPC_ARMAX(successIndex(:,simIter),hyp,simIter) = 1;
                    end
                    % Under development
                    plot((1:controllerHits)*tau_C_ARMAX/3600,optMPC_ARMAX(:,hyp,simIter),...
                        'Marker',controlMarker{2},...
                        'Color',controlColors{2},...
                        'LineStyle','none',...
                        'MarkerSize',1)
                end
                title(titlesHyp{hyp})
    %             xlabel(['Controller Sample Hits [' num2str(tau_C_RF/60) 'min/hit]'])
                xlabel(['Time [hr]'])
    %             xlim([0 simTime/3600])
                xlim(xLimVector);
                grid on

            end
            if imprint
                    printName = [figurePath 'op_' controllersUsedStr...
                                '_IT_' num2str(simIter) '_' useLimStr...
                                'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                    print(printName,'-depsc');
    %                 print(printName,'-djpeg');
            end
        end
        % Expert plots
        if useExpert && ~useMPC_RF && ~useMPC_ARMAX
            f4 = figure(4+(simIter-1)*4);
            fig = gcf;
            movegui(fig,'northwest')
            controllerHits = size(explanationsExpert,1);
            for cv = 1:numCV
                subplot(numCV,1,cv)
                plot((1:controllerHits)*tau_R_Expert/3600,explanationsExpert(:,cv,simIter),...
                    'Marker',controlMarker{3},...
                    'Color',controlColors{3},...
                    'LineStyle','none')
                title(titlesCV{cv})
    %             xlabel(['Controller Sample Hits [' num2str(tau_R/60) 'min/hit]'])
                xlabel(['Time [hr]'])
                xlim([0 simTime/3600])
                grid on
            end
            if imprint
                    printName = [figurePath 'expExp_' controllersUsedStr...
                                '_IT_' num2str(simIter) '_' useLimStr...
                                dateOutputStr];
                    print(printName,'-depsc');
    %                 print(printName,'-djpeg');
            end
        end
    %     close all
        pause(1)
    end
else
%% Isolated Plots
    for simIter = plotControlFrom:plotControlTo
        iterInfo = '                               Iteration %d has figures %d,%d,%d,%d\r\n';
        iterMatrix = [simIter,1+(simIter-1)*4,2+(simIter-1)*4,3+(simIter-1)*4,4+(simIter-1)*4];
        fprintf(iterInfo,iterMatrix)
%         f1 = figure(1+(simIter-1)*4);
%         fig = gcf;
%         movegui(fig,'southwest')

        for cv = 1:numCV
%             subplot(numCV,1,cv)
            figure
            fig = gcf;
            if cv == 1
                movegui(fig,'southwest')
            elseif cv == 2
                movegui(fig,'northwest')
            else
                movegui(fig,'southeast')
            end
            if useMPC_RF
                plot(t(startPlotTime:endPlotTime),yMPC_RF(startPlotTime:endPlotTime,cv,simIter),...
                        'LineWidth',lineWidth(1),...
                        'Color',controlColors{1},...
                        'LineStyle',controlLineStyle{1})
            end
            hold on
            if useMPC_ARMAX
                plot(t(startPlotTime:endPlotTime),yMPC_ARMAX(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(2),...
                       'Color',controlColors{2},...
                       'LineStyle',controlLineStyle{2})
            end
            if useExpert
                plot(t(startPlotTime:endPlotTime),yExpert(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(3),...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            if usePID
                plot(t(startPlotTime:endPlotTime),yPID(startPlotTime:endPlotTime,cv,simIter),...
                       'LineWidth',lineWidth(4),...
                       'Color',controlColors{4},...
                       'LineStyle',controlLineStyle{4},...
                       'Marker',controlMarker{4},'MarkerSize',0.8)
            end


            title(titlesCV{cv})
            plot(t(startPlotTime:endPlotTime),wRefSimulink(startPlotTime:endPlotTime,cv,simIter),...
                    'Color',[0.0 0.45 0.0],'LineStyle',':','LineWidth',2.25);
        %     plot(t(startPlotTime:endPlotTime),yFiltered.signals.values(startPlotTime:endPlotTime,cv),'g','LineWidth',1);
            ylabel(CVUnits{cv})
            xlabel('Time [hr]')
            if usePlotCVLims
                ylim(CVLims(cv,:));
                useLimStr = '';
                yticks(CVTicks(cv,:))
            else
                useLimStr = 'nl_';
                ylim auto
            end

            xlim(xLimVector);
            yLegend_1 = ['MPC-RF'];
            yLegend_2 = ['MPC-ARIMAX'];
            yLegend_3 = ['EXP'];
            yLegend_4 = ['PI'];
            wLegend = ['$w_' num2str(cv) '$'];
        %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
    %         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
            if cv == 3 || cv == 1
                legend({yLegend_1,yLegend_2,yLegend_3,yLegend_4,wLegend},'Interpreter','latex','Location','southwest');
            else
                legend({yLegend_1,yLegend_2,yLegend_3,yLegend_4,wLegend},'Interpreter','latex','Location','northwest');
            end
            grid on
            hold off
            if imprint
                printName = [figurePath 'cv_' controllersUsedStr '_nCV_' num2str(cv)...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
    %             print(printName,'-djpeg');
            end
        end
        
%         f2 = figure(2+(simIter-1)*4);
%         fig = gcf;
%         movegui(fig,'northwest')
%         for dv = 1:numDV
%             subplot(numDV,1,dv)
%             if dv == 2
%                 kPlot = 100;
%             else
%                 kPlot = 1;
%             end
%             if useMPC_RF
%                 plot(t(startPlotTime:endPlotTime),kPlot*dMPC_RF(startPlotTime:endPlotTime,dv,simIter),...
%                        'LineWidth',1,...
%                        'Color',controlColors{1},...
%                        'LineStyle',controlLineStyle{1})
%             end
%             if useMPC_ARMAX
%                 plot(t(startPlotTime:endPlotTime),kPlot*dMPC_ARMAX(startPlotTime:endPlotTime,dv,simIter),...
%                        'LineWidth',1,...
%                        'Color',controlColors{1},...
%                        'LineStyle',controlLineStyle{1})
%             end
%             hold on
%             title(titlesDV{dv})
%             ylabel(DVUnits{dv})
%             xlabel('Time [hr]')
%             if usePlotMVLims
%                 ylim(DVLims(dv,:));
%                 useLimStr = '';
%             else
%                 useLimStr = 'nl_';
%                 ylim auto
%             end
%             xlim(xLimVector);
%             dLegend = ['$d_' num2str(dv) '$'];
%     %         legend({dLegend},'Interpreter','latex');
%             grid on
% 
%         end
% 
%         if imprint
%                 printName = [figurePath 'dv_' controllersUsedStr...
%                             '_IT_' num2str(simIter) '_' useLimStr...
%                             'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
%                 print(printName,'-depsc');
%     %             print(printName,'-djpeg');
%         end


        f3 = figure(4+(simIter-1)*4);
        fig = gcf;
        movegui(fig,'northeast')
        for mv = 1:numMV
            subplot(numMV,1,mv)
            % Add for
            if useMPC_RF
                plot(t(startPlotTime:endPlotTime),uMPC_RF(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(1),...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1})
            end
            hold on
            if useMPC_ARMAX
                plot(t(startPlotTime:endPlotTime),uMPC_ARMAX(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(2),...
                       'Color',controlColors{2},...
                       'LineStyle',controlLineStyle{2})
            end
            if useExpert
                plot(t(startPlotTime:endPlotTime),uExpert(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(3),...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3})
            end
            if usePID
                plot(t(startPlotTime:endPlotTime),uPID(startPlotTime:endPlotTime,mv,simIter),...
                       'LineWidth',lineWidth(4),...
                       'Color',controlColors{4},...
                       'LineStyle',controlLineStyle{4},...
                       'Marker',controlMarker{4},'MarkerSize',0.8)
            end
            title(titlesMV{mv})
            ylabel(MVUnits{mv})
            xlabel('Time [hr]')
    %         if usePlotLims
    %             ylim(MVLims(mv,:));
    %         else
    %             ylim auto
    %         end
            ylim(MVLims(mv,:));
            yticks(MVTicks(mv,:));
            xlim(xLimVector);
            mLegend_1 = ['$u_' num2str(mv) '$ MPC'];
            mLegend_2 = ['$u_' num2str(mv) '$ PI'];
    %         legend({mLegend_1,mLegend_2},'Interpreter','latex');
%             legend({'RF-MPC','ARIMAX-MPC'})
            grid on

        end

        if imprint
                printName = [figurePath 'mv_' controllersUsedStr...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
                print(printName,'-depsc');
    %             print(printName,'-djpeg');
        end

%         if useMPC_ARMAX || useMPC_RF
%             f4 = figure(4+(simIter-1)*4);
%             fig = gcf;
%             movegui(fig,'southeast')
%             [~,hyperResults] = size(solverResults.signals.values);
%             for hyp = 1:hyperResults
%                 subplot(hyperResults,1,hyp)
%                 if useMPC_RF
%                     [controllerHits,~,~] = size(optMPC_RF);
%                     plot((1:controllerHits)*tau_C_RF/3600,optMPC_RF(:,hyp,simIter),...
%                         'Marker',controlMarker{1},...
%                         'Color',controlColors{1},...
%                         'LineStyle','none',...
%                         'MarkerSize',1)
%                 end
%                 hold on
% 
%                 if useMPC_ARMAX
%                     [controllerHits,~,~] = size(optMPC_ARMAX);
%                     if hyp == 1
%                         solverSteps_ARMAX(:,simIter) = optMPC_ARMAX(:,hyp,simIter);
%                         successIndex = solverSteps_ARMAX >= 1;
%                         optMPC_ARMAX(successIndex(:,simIter),hyp,simIter) = 1;
%                     end
%                     % Under development
%                     plot((1:controllerHits)*tau_C_ARMAX/3600,optMPC_ARMAX(:,hyp,simIter),...
%                         'Marker',controlMarker{2},...
%                         'Color',controlColors{2},...
%                         'LineStyle','none',...
%                         'MarkerSize',1)
%                 end
%                 title(titlesHyp{hyp})
%     %             xlabel(['Controller Sample Hits [' num2str(tau_C_RF/60) 'min/hit]'])
%                 xlabel(['Time [hr]'])
%     %             xlim([0 simTime/3600])
%                 xlim(xLimVector);
%                 grid on
% 
%             end
%             if imprint
%                     printName = [figurePath 'op_' controllersUsedStr...
%                                 '_IT_' num2str(simIter) '_' useLimStr...
%                                 'tCA_' num2str(kappaControl_ARMAX) '_' dateOutputStr];
%                     print(printName,'-depsc');
%     %                 print(printName,'-djpeg');
%             end
%         end
%         % Expert plots
%         if useExpert && ~useMPC_RF && ~useMPC_ARMAX
%             f4 = figure(4+(simIter-1)*4);
%             fig = gcf;
%             movegui(fig,'northwest')
%             controllerHits = size(explanationsExpert,1);
%             for cv = 1:numCV
%                 subplot(numCV,1,cv)
%                 plot((1:controllerHits)*tau_R_Expert/3600,explanationsExpert(:,cv,simIter),...
%                     'Marker',controlMarker{3},...
%                     'Color',controlColors{3},...
%                     'LineStyle','none')
%                 title(titlesCV{cv})
%     %             xlabel(['Controller Sample Hits [' num2str(tau_R/60) 'min/hit]'])
%                 xlabel(['Time [hr]'])
%                 xlim([0 simTime/3600])
%                 grid on
%             end
%             if imprint
%                     printName = [figurePath 'expExp_' controllersUsedStr...
%                                 '_IT_' num2str(simIter) '_' useLimStr...
%                                 dateOutputStr];
%                     print(printName,'-depsc');
%     %                 print(printName,'-djpeg');
%             end
%         end
%     %     close all
%         pause(1)
    end
end
