function [stop, options, optchanged]  = mpc_output_patts_fcn(optimvalues, options, flag, ...
                                                            qMatrix, betaCost, lambdaMatrix, wMatrix,...
                                                            yLims,uLims,...
                                                            yPastValues, uPastValues, dPastValues,...
                                                            nTrees, nPredictors,...
                                                            na, nb, nc, kappaControl,...
                                                            plotProgress)%, %hampionTolerance,...
                                                            %championCounterTolerance)
%MPC_DISPLAY_OUTPUT_FCN Displays associated costs of objective function
persistent bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
persistent bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
persistent bestMinTrackingError bestMinTerminalError bestMinLimBreakError
persistent bestTrackingCost bestTerminalCost bestLimBreakCost
persistent h1 h2
% persistent champion championDistancePast championToleranceBreakCounter
stop = false; % By default, don't stop.
optchanged = false;
switch flag
    case 'init'
%         champion = optimValues.x;
%         championDistancePast = 1e5;
%         championToleranceBreakCounter = 0;
        if plotProgress
            h1 = figure;
            ax = gca;
            ax.XLim = [0 (optimvalues.iteration+1)];
            movegui(h1,'west')
            h2 = figure;
            ax = gca;
            ax.XLim = [0 (optimvalues.iteration+1)];
            movegui(h2,'east')
        else
            
        end
    case 'iter'
        [n,N_y] = size(wMatrix);
        % Find the best objective function in current iteration
        bestScore = optimvalues.fval;
        bestIndividual = optimvalues.x;
%         decissionVars = numel(bestIndividual);
%         weightVector = ones(1,decissionVars);
%         championDistance = abs(bestIndividual-champion)*weightVector';
%         championSpread = championDistance-championDistancePast;
%         champion = bestIndividual;
%         if logical(plotProgress)
%             fprintf('Champion Distance: %4.6f\r\n',optimValues.TolX);
%         end
        [nPopulation,~] = size(bestIndividual);
        if logical(plotProgress)
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
            if plotProgress == 1
                % Means of errors
                bestMeanTrackingError(1,optimvalues.iteration+1) = mean(abs(spTrackingError));
                bestMeanTerminalError(1,optimvalues.iteration+1) = mean(abs(terminalError));
                bestMeanLimBreakError(1,optimvalues.iteration+1) = mean(abs(epsilonValues));
                % Max of errors
                bestMaxTrackingError(1,optimvalues.iteration+1) = max(abs(spTrackingError));
                bestMaxTerminalError(1,optimvalues.iteration+1) = max(abs(terminalError));
                bestMaxLimBreakError(1,optimvalues.iteration+1) = max(abs(epsilonValues));
                % Min of errors
                bestMinTrackingError(1,optimvalues.iteration+1) = min(abs(spTrackingError));
                bestMinTerminalError(1,optimvalues.iteration+1) = min(abs(terminalError));
                bestMinLimBreakError(1,optimvalues.iteration+1) = min(abs(epsilonValues));
            elseif plotProgress == 2
                matrixSpTrackingError = reshape(spTrackingError,n,N_y-1);
                matrixTerminalError = reshape(terminalError,n,1);
                matrixEpsilonValues = reshape(epsilonValues,n,N_y);
                % Means of errors
                bestMeanTrackingError(:,optimvalues.iteration+1) = mean(abs(matrixSpTrackingError),2);
                bestMeanTerminalError(:,optimvalues.iteration+1) = mean(abs(matrixTerminalError),2);
                bestMeanLimBreakError(:,optimvalues.iteration+1) = mean(abs(matrixEpsilonValues),2);
                % Max of errors
                bestMaxTrackingError(:,optimvalues.iteration+1) = max(abs(matrixSpTrackingError),[],2);
                bestMaxTerminalError(:,optimvalues.iteration+1) = max(abs(matrixTerminalError),[],2);
                bestMaxLimBreakError(:,optimvalues.iteration+1) = max(abs(matrixEpsilonValues),[],2);
                % Min of errors
                bestMinTrackingError(:,optimvalues.iteration+1) = min(abs(matrixSpTrackingError),[],2);
                bestMinTerminalError(:,optimvalues.iteration+1) = min(abs(matrixTerminalError),[],2);
                bestMinLimBreakError(:,optimvalues.iteration+1) = min(abs(matrixEpsilonValues),[],2);
            end
            % Plot
            if rem(optimvalues.iteration,10) == 0
                figure(h1)
                ax = gca;
                ax.XLim = [0 (optimvalues.iteration+1)];
                if plotProgress == 1
                    plot(0:optimvalues.iteration,bestMeanTrackingError,'r+')
                    hold on
                    plot(0:optimvalues.iteration,bestMeanTerminalError,'b*')
                    plot(0:optimvalues.iteration,bestMeanLimBreakError,'go')

                    plot(0:optimvalues.iteration,bestMaxTrackingError,'r--')
                    plot(0:optimvalues.iteration,bestMaxTerminalError,'b--')
                    plot(0:optimvalues.iteration,bestMaxLimBreakError,'g--')

                    plot(0:optimvalues.iteration,bestMinTrackingError,'r--')
                    plot(0:optimvalues.iteration,bestMinTerminalError,'b--')
                    plot(0:optimvalues.iteration,bestMinLimBreakError,'g--')
                    hold off
                    grid on
                    legend({'Mean Track Error','Mean Terminal Error','Mean LimBreak Error'},'Location','southwest')
                elseif plotProgress == 2
                    legendArray = {};
                    markerType = {'*','o','s','.'};
                    colorType = {'b','r','g'};
                    for cv = 1:n
                        plot(0:optimvalues.iteration,bestMaxTerminalError(cv,:),...
                            'Marker',markerType{cv},'Color',colorType{1})
                        hold on
                        plot(0:optimvalues.iteration,bestMaxTrackingError(cv,:),...
                            'Marker',markerType{cv},'Color',colorType{2})
                        plot(0:optimvalues.iteration,bestMaxLimBreakError(cv,:),...
                            'Marker',markerType{cv},'Color',colorType{3})
                        legendArray{end+1} = ['MaxTerm_' num2str(cv)];
                        legendArray{end+1} = ['MaxTrack_' num2str(cv)];
                        legendArray{end+1} = ['MaxLim_' num2str(cv) ];
                    end
                    hold off
                    grid on
                    legend(legendArray,'Location','southwest')
                end
            end
            % Costs of errors
            [ spTrackingCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError, epsilonValues, ...
                                                                            qMatrix,betaCost,lambdaMatrix);
            bestTrackingCost(1,optimvalues.iteration+1) = 1/2*spTrackingCost;
            bestTerminalCost(1,optimvalues.iteration+1) = 1/2*terminalCost;
            bestLimBreakCost(1,optimvalues.iteration+1) = 1/2*limBreakCost;

            % Plot
            if rem(optimvalues.iteration,10) == 0
                figure(h2)
                ax = gca;
                ax.XLim = [0 (optimvalues.iteration+1)];
                plot(0:optimvalues.iteration,bestTrackingCost,'r*')
                hold on
                plot(0:optimvalues.iteration,bestTerminalCost,'b.')
                plot(0:optimvalues.iteration,bestLimBreakCost,'go')
                hold off
                grid on
                legend({'Track Cost','Terminal Cost','LimBreak Cost'},'Location','northeast')
                fprintf('Generation %d\r\n',optimvalues.iteration);
                fprintf('Method used %s\r\n',optimvalues.method)
                fprintf('Mesh size %4.4f',optimvalues.meshsize);
                fprintf('Delta U(0) is %4.4f\r\n',bestIndividual(1:2))
                fprintf('F.O.Value Now is %4.8f\r\n',bestScore)
                fprintf('Total Function Evaluations %d\r\n',optimvalues.funccount)
                fprintf('Champion Distance: %4.6f\r\n',optimvalues.TolX);
                fprintf('Change inf F.O : %4.6f\r\n',optimvalues.TolX);
                pause()
            end
        else
        end
%         if (abs(championSpread)) < championTolerance
%             championToleranceBreakCounter = championToleranceBreakCounter+1;   
%         end
%         if (championDistance) < championTolerance
%             championToleranceBreakCounter = championToleranceBreakCounter+1;
%             
%         end
% 
%         if championToleranceBreakCounter > championCounterTolerance
%            stop = true;
%         end
%         championDistancePast = championDistance;
    case 'done'
        clear bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
        clear bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
        clear bestMinTrackingError bestMinTerminalError bestMinLimBreakError
        clear bestTrackingCost bestTerminalCost bestLimBreakCost
        clear h1 h2
%         clear champion championDistancePast championToleranceBreakCounter
        close all
end


end

