clear;
close all;
clc;
%%
resultsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsControl\';
dateOutputStr = '3009';

load([resultsPath 'ControlResults_final_' dateOutputStr '.mat']);
figurePath = 'figures\performanceCriteria\';
imprint = false;
plotGraphs = false;
%% Compute
wSteadyState = repmat(wRefSimulink(end,:,:),size(wRefSimulink,1),1,1);
PerformanceCriteriaStruct = struct;
for controller = 1:size(ControllerResultsStruct,2)
    % Steady-state error in time
    steadyStateError =...
        wSteadyState-ControllerResultsStruct(controller).cvTimeSeries;
    % Tracking error in time
    PerformanceCriteriaStruct(controller).trackError =...
        wRefSimulink-ControllerResultsStruct(controller).cvTimeSeries;
    % Absolute Error Evolution
    PerformanceCriteriaStruct(controller).absoluteErrorDt = ...
        cumsum(abs(PerformanceCriteriaStruct(controller).trackError),1);
    % IAE
    PerformanceCriteriaStruct(controller).IAE = ...
            PerformanceCriteriaStruct(controller).absoluteErrorDt(end,:,:);
    % Maximum Absolute overshoot
    PerformanceCriteriaStruct(controller).maxAbsOvershoot = ...
        max(abs(steadyStateError),[],1)./wSteadyState(end,:,:)*100;
    % Squared Error Evolution
    PerformanceCriteriaStruct(controller).squaredErrorDt =...
        cumsum(PerformanceCriteriaStruct(controller).trackError.^2,1);
    % Max tracking error
    PerformanceCriteriaStruct(controller).maxTrackError = ...
            max(abs(PerformanceCriteriaStruct(controller).trackError),[],1);
    % MSE
    PerformanceCriteriaStruct(controller).MSE = ...
            mean(PerformanceCriteriaStruct(controller).trackError.^2,1);
    % NMSE 
    PerformanceCriteriaStruct(controller).NMSE = ...
            PerformanceCriteriaStruct(controller).MSE./mean(wRefSimulink,1).^2;
        
    % Control Effort (Integral Squared Control Action)
    PerformanceCriteriaStruct(controller).ISU = ...
        sum((ControllerResultsStruct(controller).mvTimeSeries-...
        repmat(mean(ControllerResultsStruct(controller).mvTimeSeries,1),...
                size(wRefSimulink,1),1,1)).^2,1);
    % Variation Effort of MV
    PerformanceCriteriaStruct(controller).deltaMV = ...
        diff(ControllerResultsStruct(controller).mvTimeSeries,1,1);
    % Variation Effort of MV
    PerformanceCriteriaStruct(controller).costDeltaMV = ...
        sum(PerformanceCriteriaStruct(controller).deltaMV.^2,1);
end
%% Plot options
% Titles
titlesCV = {'Torque Error','Underflow Concentration Error','Interface Level Error','Overflow Concentration','Residence Time',...
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
DVUnits = {'m3/s','%','N/A'};
% Plot and graphic things
controlColors = {'r','k','b','m'};
controlLineStyle = {'-','--',':','-.'}; % Put both PID and Expert in m -. for comparison between opt v/s trad
controlMarker = {'*','d','o','none'};
lineWidth = [1.5 1.25 1.5 1.35];
% Y Axis Limits
usePlotLims = false;
CVLims = [15 22;
         65 75;
         0 10];
MVLims = [80 120;
          20 30];
%% Graphical Results
selectIteration = 4; % Select which test do you wish to see results
selectControllersStr = '1111'; % RF,ARMAX,Exp,PI
selectedCV = [2 3];
selectedMV = [1 2];
contString = '';
startPlotTime = 1; %1
endPlotTime = length(t); %length(t)

xLimVector = [0 100];
% For zooming in on certain parts, uncomment below
% startPlotTime = 45*3600;
% endPlotTime = 60*3600;
% xLimVector = [startPlotTime endPlotTime]/3600;
selectControllers = [];
if selectControllersStr(1) == '1'
    selectControllers = [selectControllers 1];
end
if selectControllersStr(2) == '1'
    selectControllers = [selectControllers 2];
end
if selectControllersStr(3) == '1'
    selectControllers = [selectControllers 3];
end
if selectControllersStr(4) == '1'
    selectControllers = [selectControllers 4];
end
% Plotting section
if plotGraphs
    figure
    
    for cv = selectedCV
        subplot(2,1,cv-1)
        %% Tracking Error
        varString = 'trackError';
        for controller = selectControllers
            fig = gcf;
            movegui(fig,'northwest')
            plot(t(startPlotTime:endPlotTime),...
                PerformanceCriteriaStruct(controller).trackError(startPlotTime:endPlotTime,cv,selectIteration),...
                    'LineWidth',lineWidth(controller),...
                    'Color',controlColors{controller},...
                    'LineStyle',controlLineStyle{controller})
            hold on
            title(titlesCV{cv})
            ylabel(CVUnits{cv})
            xlabel('Time (hr)')
            if usePlotLims
                ylim(CVLims(cv,:));
                useLimStr = '';
            else
                useLimStr = 'nl_';
                ylim auto
            end
            xlim(xLimVector);
            %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
            %         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
            grid on   


        end
    end
    if imprint
            printName = [figurePath varString '_' selectControllersStr...
                        '_IT_' num2str(selectIteration) '_' useLimStr...
                        dateOutputStr];
            print(printName,'-depsc');
    end
    figure
        %% IAE Evolution
    for cv = selectedCV
        subplot(2,1,cv-1)
        varString = 'iaeEvol';
        for controller = selectControllers
            fig = gcf;
            movegui(fig,'northeast')
            plot(t(startPlotTime:endPlotTime),...
                PerformanceCriteriaStruct(controller).absoluteErrorDt(startPlotTime:endPlotTime,cv,selectIteration),...
                   'LineWidth',1,...
                   'Color',controlColors{controller},...
                   'LineStyle',controlLineStyle{controller})
            hold on
            title(titlesCV{cv})
            ylabel(CVUnits{cv})
            xlabel('Time (hr)')
            if usePlotLims
                ylim(CVLims(cv,:));
                useLimStr = '';
            else
                useLimStr = 'nl_';
                ylim auto
            end
            xlim(xLimVector);
            %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
            %         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
            grid on   


        end
    end
    if imprint
        printName = [figurePath varString '_' selectControllersStr...
                    '_IT_' num2str(selectIteration) '_' useLimStr...
                    dateOutputStr];
        print(printName,'-depsc');
    end
        %% deltaMV
    figure
    for mv = selectedMV
        subplot(2,1,mv)
        varString = 'deltaMV';
        for controller = selectControllers
            fig = gcf;
            movegui(fig,'southwest')
            plot(t(startPlotTime:endPlotTime-1),...
                PerformanceCriteriaStruct(controller).deltaMV(startPlotTime:endPlotTime-1,mv,selectIteration),...
                   'LineWidth',1,...
                   'Color',controlColors{controller},...
                   'LineStyle',controlLineStyle{controller})
            hold on
            title(titlesMV{mv})
            ylabel(MVUnits{mv})
            xlabel('Time (hr)')
            if usePlotLims
                ylim(CVLims(mv,:));
                useLimStr = '';
            else
                useLimStr = 'nl_';
                ylim auto
            end
            grid on
            xlim(xLimVector);
            

        end
        
    end
    if imprint
        printName = [figurePath varString '_' selectControllersStr...
                    '_IT_' num2str(selectIteration) '_' useLimStr...
                    dateOutputStr];
        print(printName,'-depsc');
    end
end
%% Tabular Results
clc;
selectIteration = 8; % Select which test do you wish to see results
selectedCV = [1 2 3];
selectedMV = [1 2];
% Table section
% for controller = selectControllers
%     fprintf('IAE\r\n')
%     PerformanceCriteriaStruct(controller).IAE(1,selectedCV',selectIteration)
%     fprintf('MSE\r\n')
%     PerformanceCriteriaStruct(controller).MSE(1,selectedCV',selectIteration)
%     fprintf('NMSE\r\n')
%     PerformanceCriteriaStruct(controller).NMSE(1,selectedCV',selectIteration)
%     fprintf('MAE\r\n')
%     PerformanceCriteriaStruct(controller).maxTrackError(1,selectedCV',selectIteration)
%     fprintf('MAO\r\n')
%     PerformanceCriteriaStruct(controller).maxAbsOvershoot(1,selectedCV',selectIteration)
%     fprintf('ISU\r\n')
%     PerformanceCriteriaStruct(controller).ISU(1,selectedMV',selectIteration)
%     fprintf('DMV\r\n')
%     PerformanceCriteriaStruct(controller).costDeltaMV(1,selectedMV',selectIteration)
%     fprintf('###############################\r\n')
% end
for cv = selectedCV
    fprintf('CV Table %d\r\n',cv)
    for controller = selectControllers
        % MSE
        fprintf('% .2f ',PerformanceCriteriaStruct(controller).MSE(1,cv,selectIteration)*1e2)

        % IAE
        fprintf('% .2f ',PerformanceCriteriaStruct(controller).IAE(1,cv,selectIteration)*1e-4)

        % MAE
        fprintf('% .2f \r\n',PerformanceCriteriaStruct(controller).maxTrackError(1,cv,selectIteration))
    end
    
    fprintf('###############################\r\n')
end

fprintf('MV Table \r\n');
for controller = selectControllers
    % SCV
    for mv = selectedMV
        fprintf('% .2f ',PerformanceCriteriaStruct(controller).costDeltaMV(1,mv,selectIteration))
    end
    % ISU
    for mv = selectedMV
        fprintf('% .2f ',PerformanceCriteriaStruct(controller).ISU(1,mv,selectIteration)*1e-6)
    
    end
    fprintf('\r\n')
end

%% Mean Results
%% Tabular Results
clc;
selectIteration = 8; % Select which test do you wish to see results
selectedCV = [1 2 3];
selectedMV = [1 2];
% end
for cv = selectedCV
    fprintf('CV Table %d\r\n',cv)
    for controller = selectControllers
        % MSE
        fprintf('% .2f ',sum(PerformanceCriteriaStruct(controller).MSE(1,cv,:))/selectIteration*1e2)

        % IAE
        fprintf('% .2f ',sum(PerformanceCriteriaStruct(controller).IAE(1,cv,:))/selectIteration*1e-4)

        % MAE
        fprintf('% .2f \r\n',sum(PerformanceCriteriaStruct(controller).maxTrackError(1,cv,:))/selectIteration)
    end
    
    fprintf('###############################\r\n')
end

fprintf('MV Table \r\n');
for controller = selectControllers
    % SCV
    for mv = selectedMV
        fprintf('% .2f ',sum(PerformanceCriteriaStruct(controller).costDeltaMV(1,mv,:))/selectIteration)
    end
    % ISU
    for mv = selectedMV
        fprintf('% .2f ',sum(PerformanceCriteriaStruct(controller).ISU(1,mv,:))/selectIteration*1e-6)
    
    end
    fprintf('\r\n')
end

