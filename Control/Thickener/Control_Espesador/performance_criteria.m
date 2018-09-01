clear;
close all;
clc;
%%
resultsPath = 'C:\Users\Felipe\Documents\MATLAB\PabloDiaz\Git\Espesador_Matlab\Hard_Data\ResultsControl\';
dateOutputStr = '2108';
figurePath = 'figures\performanceCriteria\';
load([resultsPath 'ControlResults_' dateOutputStr '.mat']);
imprint = false;
plotGraphs = true;
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
            mean(PerformanceCriteriaStruct(controller).squaredErrorDt,1);
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
DVUnits = {'m3/s','%','N/A'};
% Colors
controlColors = {'r','k','b','m'};
controlLineStyle = {'-','--','-.','-'};
controlMarker = {'*','d','o','d'};
% Y Axis Limits
usePlotLims = false;
CVLims = [15 22;
         65 75;
         0 10];
MVLims = [80 120;
          20 30];
%% Grahical Results
selectIteration = 2; % Select which test do you wish to see results
selectControllers = [1 2];
selectedCV = [2];
selectedMV = [2];
varString = 'trackError';
f1 = figure(1+(controller-1)*length(selectControllers));
% Plotting section
if plotGraphs
    for controller = selectControllers
    
        fig = gcf;
        movegui(fig,'southwest')
        plot(t(startPlotTime:end),...
            PerformanceCriteriaStruct(controller).trackError(startPlotTime:end,selectedCV,selectIteration),...
               'LineWidth',1,...
               'Color',controlColors{controller},...
               'LineStyle',controlLineStyle{controller})
        hold on
        title(titlesCV{selectedCV})
        ylabel(CVUnits{selectedCV})
        xlabel('Time (hr)')
        if usePlotLims
            ylim(CVLims(selectedCV,:));
            useLimStr = '';
        else
            useLimStr = 'nl_';
            ylim auto
        end
        %     yFiltLegend = ['$\tilde{y}_' num2str(cv) '$'];
        %         legend({yLegend_1,yLegend_2,wLegend},'Interpreter','latex');
        grid on   
        if imprint
                printName = [figurePath varString '_controller_' num2str(controller)...
                            '_cv_' num2str(selectedCV)...
                            '_IT_' num2str(simIter) '_' useLimStr...
                            dateOutputStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    
    end
end
%% Tabular Results
selectIteration = 2; % Select which test do you wish to see results
selectControllers = [1 2];
selectedCV = [1 2 3];
selectedMV = [1 2];
% Table section
for controller = selectControllers
    fprintf('IAE\r\n')
    PerformanceCriteriaStruct(controller).IAE(1,selectedCV',selectIteration)
    fprintf('MSE\r\n')
    PerformanceCriteriaStruct(controller).MSE(1,selectedCV',selectIteration)
    fprintf('NMSE\r\n')
    PerformanceCriteriaStruct(controller).NMSE(1,selectedCV',selectIteration)
    fprintf('MAE\r\n')
    PerformanceCriteriaStruct(controller).maxTrackError(1,selectedCV',selectIteration)
    fprintf('MAO\r\n')
    PerformanceCriteriaStruct(controller).maxAbsOvershoot(1,selectedCV',selectIteration)
    fprintf('ISU\r\n')
    PerformanceCriteriaStruct(controller).ISU(1,selectedMV',selectIteration)
    fprintf('DMV\r\n')
    PerformanceCriteriaStruct(controller).costDeltaMV(1,selectedMV',selectIteration)
    fprintf('###############################\r\n')
end