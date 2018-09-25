% load('')
close all;
%%
imprint = false;
simIter = 2;
zoomInTimes = [1 2 3];

plotTrajectory = true;
plotMVSequence = true;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
useMPC_RF = true;
useMPC_ARMAX = true;
groupBy = 60; 
tau_R = 5*groupBy;
N_y = 18; % 18
N_u = 3;%3 Try 6
kappaControl_RF = 1; %1
kappaControl_ARMAX = 1; % 5
optimizationMethod = 'PSO';
tau_C_RF = kappaControl_RF*tau_R;
tau_C_ARMAX = kappaControl_ARMAX*tau_R;
%%
controllerHitTimes = floor(zoomInTimes*3600/tau_C_RF);
% controllerHitTimes = [1 10 20 30];
%%
titlesCV = {'Torque Trajectory','Underflow Concentration Trajectory','Interface Level Trajectory','Overflow Concentration','Residence Time',...
            'Solid Throughput','Underflow Particle Diameter','Overflow'};
CVUnits = {'%','%','m','%','hr','ton/hr','N/A','m3/hr'};
CVSaveName = {'torque','Cp_u','intLevel','Cp_e','tauRd','SFlx','P1_U','Q_e'};
% MV
titlesMV = {'Underflow Rate Optimal Sequence','Flocculant Dose Optimal Sequence'};
MVUnits = {'m3/hr','gpt'};
MVSaveName = {'Q_u','gpt'};
% DV
titlesDV = {'Feed Rate','Feed Concentration','Feed Particle Diameter'};
DVUnits = {'m3/hr','%','N/A'};
DVSaveName = {'Q_f','Cp_f','P1_f'};
titlesHyp = {'Solver Exit Flags','F.O. Values'};
% Units
CVUnits = {'%','%','m','%'};
MVUnits = {'m3/hr','gpt'};
DVUnits = {'m3/s','%','N/A'};
% Colors
% Colors
controlColors = {'r','b','k'};
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
    for f = 1:length(controllerHitTimes)
        controllerHit = controllerHitTimes(f);
        if useMPC_RF
            optimalTrajectory_RF = permute(yHatMPC_RF(controllerHit,:,:,simIter),[3,2,1]);
        end
        if useMPC_ARMAX
            estimatedState_ARMAX = xHatMPC_ARMAX(controllerHit,:,simIter)';
            % Use estimated state as initial state for forecasting
            %{
%             icForecast = idpar(estimatedState_ARMAX);
%             opt = forecastOptions('InitialCondition',icForecast);
%             % Use y(t) up to this instant (tau_C_ARMAX*controllerHit)
%             yPast = downsample(yMPC_ARMAX(1:tau_C_ARMAX*controllerHit,1:numCV,simIter),tau_R);
%             % Use u(t) up to this instant
%             uPast = downsample(uMPC_ARMAX(1:tau_C_ARMAX*controllerHit,:,simIter),tau_R);

%             inputPast = [dPast uPast];
%             pastData = iddata(yPast,inputPast,tau_R);

            %             [yf,x0,sysf,yf_sd,x,x_sd] = forecast(idss(mpcObj.Model.Plant),pastData,N_y,futureData,opt);
            %}
            % Use d(t) up to this instant
            dPast = downsample(dMPC_RF(1:tau_C_ARMAX*controllerHit,:,simIter),tau_R);
            localControlMove_ARMAX = permute(controlMovesMPC_ARMAX(controllerHit,:,:,simIter),[3,2,1]);
            futureData = [repmat(dPast(end,:),N_y,1) localControlMove_ARMAX' zeros(N_y,numCV)];
            tForecast = [0:tau_R:(N_y-1)*tau_R]';
            optimalTrajectory_ARMAX = lsim(mpcObj.Model.Plant,futureData,tForecast,...
                                        estimatedState_ARMAX(1:size(mpcObj.Model.Plant.C,2)));
            optimalTrajectory_ARMAX = optimalTrajectory_ARMAX';
% %             optimalTrajectory_ARMAX = mpcObj.Model.Plant.C*...
% %                                     estimatedState_ARMAX(1:size(mpcObj.Model.Plant.C,2));
        end
        f1 = figure;
        fig = gcf;
        movegui(fig,'northeast')
        for cv = 1:numCV
            subplot(numCV,1,cv)
            % Add for
            if useMPC_RF
                plot(0:(N_y-1),optimalTrajectory_RF(cv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1},...
                       'Marker',controlMarker{1})
            end
            hold on
            if useMPC_ARMAX
                plot(0:(N_y-1),optimalTrajectory_ARMAX(cv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3},...
                        'Marker',controlMarker{3})
            end
            title(titlesCV{cv})
            ylabel(CVUnits{cv})
            xlabel(['Samples [' num2str(tau_R/60)  'min/sample]']);
            ylim(CVLims(cv,:));
%             ylim auto
            yLegend_1 = ['$y*_' num2str(cv) '$ RF'];
            yLegend_2 = ['$y*_' num2str(cv) '$ ARIMAX'];
    %         legend({mLegend_1,mLegend_2},'Interpreter','latex');
            grid on
            
        end
        
        if imprint
                printName = [figurePath 'optTraj_' controllersUsed...
                        '_IT_' num2str(simIter) '_' useLimStr...
                        'tCA_' num2str(kappaControl_ARMAX) '_' dateMatFileStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
end
if plotMVSequence
    for f = 1:length(controllerHitTimes)
        controllerHit = controllerHitTimes(f);
        if useMPC_RF
            localControlMove_RF = permute(controlMovesMPC_RF(controllerHit,:,:,simIter),[3,2,1]);
        end
        if useMPC_ARMAX
            localControlMove_ARMAX = permute(controlMovesMPC_ARMAX(controllerHit,:,:,simIter),[3,2,1]);
        end
        f1 = figure;
        fig = gcf;
        movegui(fig,'southwest')
        for mv = 1:numMV
            subplot(numMV,1,mv)
            % Add for
            if useMPC_RF
                plot(0:(N_y-1),localControlMove_RF(mv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{1},...
                       'LineStyle',controlLineStyle{1},...
                       'Marker',controlMarker{1})
            end
            hold on
            if useMPC_ARMAX
                plot(0:(N_y-1),localControlMove_ARMAX(mv,:),...
                       'LineWidth',1,...
                       'Color',controlColors{3},...
                       'LineStyle',controlLineStyle{3},...
                        'Marker',controlMarker{3})
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
                printName = [figurePath 'optSeq_' controllersUsed...
                        '_IT_' num2str(simIter) '_' useLimStr...
                        'tCA_' num2str(kappaControl_ARMAX) '_' dateMatFileStr];
                print(printName,'-depsc');
                print(printName,'-djpeg');
        end
    end
end