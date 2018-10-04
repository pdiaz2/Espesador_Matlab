function stop = mpc_output_pso_fcn(optimValues, state, controlHit, ...
                                    qMatrix, beta, lambdaMatrix, wMatrix,...
                                    yLims,uLims,...
                                    yPastValues, uPastValues, dPastValues,...
                                    nTrees, nPredictors,...
                                    na, nb, nc, kappaControl,...
                                    plotProgress, plotFrom,...
                                    championTolerance, championCounterTolerance)
%MPC_DISPLAY_OUTPUT_FCN Displays associated costs of objective function
persistent bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
persistent bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
persistent bestMinTrackingError bestMinTerminalError bestMinLimBreakError
persistent bestTrackingCost bestTerminalCost bestLimBreakCost
persistent h1 h2 h3 h4
persistent champion championDistancePast championToleranceBreakCounter itSwarm
stop = false; % By default, don't stop.
switch state
    case 'init'
        champion = optimValues.bestx;
        championDistancePast = 1e5;
        championToleranceBreakCounter = 0;
        itSwarm = 1;
        if plotProgress && (controlHit >= plotFrom)
            h1 = figure;
            ax = gca;
            ax.XLim = [0 (optimValues.iteration+1)];
            movegui(h1,'west')
            h2 = figure;
            ax = gca;
            ax.XLim = [0 (optimValues.iteration+1)];
            movegui(h2,'east')
            h3 = figure;
            ax = gca;
            ax.XLim = [0 (optimValues.iteration+1)];
            movegui(h3,'north')
            h4 = figure;
            ax = gca;
            ax.XLim = [-17, 17];
            ax.YLim = [-6, 6];
            movegui(h4,'south')
        else
            
        end
    case 'iter'
        [n,N_y] = size(wMatrix);
        % Find the best objective function in current iteration
        bestScore = optimValues.bestfval;
        bestIndividual = optimValues.bestx;
        decissionVars = numel(bestIndividual);
        weightVector = ones(1,decissionVars);
        championDistance = abs(bestIndividual-champion)*weightVector';
        championSpread = championDistance-championDistancePast;
        champion = bestIndividual;
        if logical(plotProgress) && (controlHit >= plotFrom)
            fprintf('Champion Distance: %4.6f\r\n',championDistance);
        end
        [nPopulation,~] = size(bestIndividual);
        if logical(plotProgress) && (controlHit >= plotFrom)
            % Replication of yPastValues according to nPopulation
            yPastValues = permute(repmat(yPastValues,1,1,nPopulation),[3 2 1]);
            uPastValues = permute(repmat(uPastValues,1,1,nPopulation),[3 2 1]);
            dPastValues = permute(repmat(dPastValues,1,1,nPopulation),[3 2 1]);
            % Generate prediction with best individual

            [yHat] = mpc_horizon_predict(bestIndividual,N_y,uLims,...
                                  yPastValues,uPastValues,dPastValues,...
                                  nTrees,nPredictors,...
                                  na,nb,nc,kappaControl);
            % Compute vector of errors in horizon                  
            [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims );
            matrixSpTrackingError = reshape(spTrackingError,n,N_y-1);
            matrixTerminalError = reshape(terminalError,n,1);
            matrixEpsilonValues = reshape(epsilonValues,n,N_y);
            % Means of errors
            bestMeanTrackingError(:,optimValues.iteration+1) = mean(abs(matrixSpTrackingError),2);
            bestMeanTerminalError(:,optimValues.iteration+1) = mean(abs(matrixTerminalError),2);
            bestMeanLimBreakError(:,optimValues.iteration+1) = mean(abs(matrixEpsilonValues),2);
            % Max of errors
            bestMaxTrackingError(:,optimValues.iteration+1) = max(abs(matrixSpTrackingError),[],2);
            bestMaxTerminalError(:,optimValues.iteration+1) = max(abs(matrixTerminalError),[],2);
            bestMaxLimBreakError(:,optimValues.iteration+1) = max(abs(matrixEpsilonValues),[],2);
            % Min of errors
            bestMinTrackingError(:,optimValues.iteration+1) = min(abs(matrixSpTrackingError),[],2);
            bestMinTerminalError(:,optimValues.iteration+1) = min(abs(matrixTerminalError),[],2);
            bestMinLimBreakError(:,optimValues.iteration+1) = min(abs(matrixEpsilonValues),[],2);
            
            % Particle evolution
            if rem(optimValues.iteration,5) == 0 && itSwarm < 5 
                figure(h4)
                ax = gca;
                subplot(2,2,itSwarm)
                plot(optimValues.swarm(:,1),optimValues.swarm(:,2),'x','MarkerSize',7)
                xlim([-16,16])
                ylim([-6,6])
                set(gca,'xtick',[-15:5:15]);
                set(gca,'ytick',[-5:2.5:5]);
                hold on
                line([-15 -15], [-5 5],'Color',[1 0 0],'LineStyle','-')
                line([15 15], [-5 5],'Color',[1 0 0],'LineStyle','-')
                line([-15 15], [-5 -5],'Color',[1 0 0],'LineStyle','-')
                line([-15 15], [5 5],'Color',[1 0 0],'LineStyle','-')
%                 line([-15 -15],get(axes,'YLim'),'Color',[1 0 0],'LineStyle','-');
%                 line([15 15],get(axes,'YLim'),'Color',[1 0 0],'LineStyle','-');
                title(['Iteration ' num2str(optimValues.iteration)])
                hold off
                xlabel('$\Delta U_1(t)$','Interpreter','latex')
                xlim([-16,16])
                ylim([-6,6])
                ylabel('$\Delta U_2(t)$','Interpreter','latex')
                grid on

%                 line([-5 -5],get(axes,'YLim'),'Color',[1 0 0],'LineStyle','-');
%                 line([5 5],get(axes,'YLim'),'Color',[1 0 0],'LineStyle','-');
                itSwarm = itSwarm+1;
                
                pause
            end
%             legend(legendArray,'Location','southwest')
            
            % Plot
            if rem(optimValues.iteration,10) == 0
                markerType = {'*','o','s','.'};
                colorType = {'b','r','g'};
                
                 % Plot Mean Errors
                figure(h1)
                ax = gca;
                ax.XLim = [0 (optimValues.iteration+1)];
                legendArray = {};               
                for cv = 1:n
                    plot(0:optimValues.iteration,bestMeanTrackingError(cv,:),...
                        'Marker',markerType{cv},'Color',colorType{2})
                    hold on
                    plot(0:optimValues.iteration,bestMeanTerminalError(cv,:),...
                        'Marker',markerType{cv},'Color',colorType{1})
%                     plot(0:optimValues.iteration,bestMeanLimBreakError(cv,:),...
%                         'Marker',markerType{cv},'Color',colorType{3})
                    legendArray{end+1} = ['MeanTrack_' num2str(cv)];
                    legendArray{end+1} = ['MeanTerm_' num2str(cv)];
%                     legendArray{end+1} = ['MeanLim_' num2str(cv) ];
                end
                title('Mean Predicted Errors')
                hold off
                xlabel('Iteration [I]')
                grid on
                legend(legendArray,'Location','southwest')
                
                % Plot Max errors
                figure(h2);
                ax = gca;
                ax.XLim = [0 (optimValues.iteration+1)];
                legendArray = {};
                for cv = 1:n
                    plot(0:optimValues.iteration,bestMaxTrackingError(cv,:),...
                        'Marker',markerType{cv},'Color',colorType{2})
                    hold on
                    plot(0:optimValues.iteration,bestMaxTerminalError(cv,:),...
                        'Marker',markerType{cv},'Color',colorType{1})
%                     plot(0:optimValues.iteration,bestMaxLimBreakError(cv,:),...
%                         'Marker',markerType{cv},'Color',colorType{3})
                    legendArray{end+1} = ['MaxTrack_' num2str(cv)];
                    legendArray{end+1} = ['MaxTerm_' num2str(cv)];
%                     legendArray{end+1} = ['MaxLim_' num2str(cv) ];
                end
                title('Maximum Predicted Errors')
                hold off
                xlabel('Iteration [I]')
                grid on
                legend(legendArray,'Location','southwest')
            end
            % Costs of errors
            [ spTrackingCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError, epsilonValues, ...
                                                                            qMatrix,beta,lambdaMatrix);
            bestTrackingCost(1,optimValues.iteration+1) = 1/2*spTrackingCost;
            bestTerminalCost(1,optimValues.iteration+1) = 1/2*terminalCost;
            bestLimBreakCost(1,optimValues.iteration+1) = 1/2*limBreakCost;

            % Plot
            if rem(optimValues.iteration,10) == 0
                figure(h3)
                ax = gca;
                ax.XLim = [0 (optimValues.iteration+1)];
                plot(0:optimValues.iteration,bestTrackingCost,'-r*')
                hold on
                title('Objective Function Value')
                plot(0:optimValues.iteration,bestTerminalCost,'-b.')
                plot(0:optimValues.iteration,bestLimBreakCost,'-go')
                xlabel('Iteration [I]')
                hold off
                grid on
                legend({'Track Cost','Terminal Cost','Lim Break Cost'},'Location','northeast')
                fprintf('Generation %d\r\n',optimValues.iteration);
                fprintf('Stall iterations %d\r\n',optimValues.stalliterations)
                fprintf('Delta U(0) is %4.4f\r\n',bestIndividual(1:2))
                fprintf('F.O.Value Now is %4.8f\r\n',bestScore)
                fprintf('Total Function Evaluations %d\r\n',optimValues.funccount)
                fprintf('Champion Distance Counter is %d\r\n',championToleranceBreakCounter);
                fprintf('Simulation Time is %3.2f hours\r\n',controlHit*5/60)
                pause()
            end
        else
        end
%         if (abs(championSpread)) < championTolerance
%             championToleranceBreakCounter = championToleranceBreakCounter+1;   
%         end
        if (championDistance) < championTolerance
            championToleranceBreakCounter = championToleranceBreakCounter+1;
            
        end

        if championToleranceBreakCounter > championCounterTolerance
           stop = true;
        end
        championDistancePast = championDistance;
    case 'done'
        clear bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
        clear bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
        clear bestMinTrackingError bestMinTerminalError bestMinLimBreakError
        clear bestTrackingCost bestTerminalCost bestLimBreakCost
        clear h1 h2 h3 h4
        clear champion championDistancePast championToleranceBreakCounter itSwarm
        close all
end


end

