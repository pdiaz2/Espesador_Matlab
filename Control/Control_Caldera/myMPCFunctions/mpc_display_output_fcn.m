function [ state, options, optchanged ] = mpc_display_output_fcn(options, state, flag, ...
                                                                qMatrix, beta, lambdaMatrix, wMatrix, yLims,uLims,...
                                                                yPastValues, uPastValues, dPastValues,...
                                                                nTrees, nPredictors, na, nb, nc)
%MPC_DISPLAY_OUTPUT_FCN Displays associated costs of objective function
persistent bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
persistent bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
persistent bestMinTrackingError bestMinTerminalError bestMinLimBreakError
persistent bestTrackingCost bestTerminalCost bestLimBreakCost
persistent h1 h2
optchanged = false;
switch flag
    case 'init'
        h1 = figure;
        ax = gca;
        ax.XLim = [0 (state.Generation+1)];
        h2 = figure;
        ax = gca;
        ax.XLim = [0 (state.Generation+1)];
    case 'iter'
        [n,N_y] = size(wMatrix);
        % Find the best objective function in current generation => Best(end)
        bestScore = state.Best(end);
        ibest = find(state.Score == bestScore,1,'last');
        bestIndividual = state.Population(ibest,:);
        [nPopulation,~] = size(bestIndividual);
        % Replication of yPastValues according to nPopulation
        yPastValues = permute(repmat(yPastValues,1,1,nPopulation),[3 2 1]);
        uPastValues = permute(repmat(uPastValues,1,1,nPopulation),[3 2 1]);
        dPastValues = permute(repmat(dPastValues,1,1,nPopulation),[3 2 1]);
        % Generate prediction with best individual
        
        [yHat] = mpc_horizon_predict(bestIndividual,N_y,uLims,...
                              yPastValues,uPastValues,dPastValues,...
                              nTrees,nPredictors,...
                              na,nb,nc);
        % Compute vector of errors in horizon                  
        [ spTrackingError, terminalError, epsilonValues ] = mpc_horizon_error( yHat, wMatrix, yLims );
        % Means of errors
        bestMeanTrackingError(1,state.Generation+1) = mean(abs(spTrackingError));
        bestMeanTerminalError(1,state.Generation+1) = mean(abs(terminalError));
        bestMeanLimBreakError(1,state.Generation+1) = mean(abs(epsilonValues));
        % Max of errors
        bestMaxTrackingError(1,state.Generation+1) = max(abs(spTrackingError));
        bestMaxTerminalError(1,state.Generation+1) = max(abs(terminalError));
        bestMaxLimBreakError(1,state.Generation+1) = max(abs(epsilonValues));
        % Min of errors
        bestMinTrackingError(1,state.Generation+1) = min(abs(spTrackingError));
        bestMinTerminalError(1,state.Generation+1) = min(abs(terminalError));
        bestMinLimBreakError(1,state.Generation+1) = min(abs(epsilonValues));
        % Plot
        if rem(state.Generation,10) == 0
            figure(h1)
            ax = gca;
            ax.XLim = [0 (state.Generation+1)];
            plot(0:state.Generation,bestMeanTrackingError,'b+')
            hold on
            plot(0:state.Generation,bestMeanTerminalError,'r*')
            plot(0:state.Generation,bestMeanLimBreakError,'go')
            
            plot(0:state.Generation,bestMaxTrackingError,'b--')
            plot(0:state.Generation,bestMaxTerminalError,'r--')
            plot(0:state.Generation,bestMaxLimBreakError,'g--')
            
            plot(0:state.Generation,bestMinTrackingError,'b--')
            plot(0:state.Generation,bestMinTerminalError,'r--')
            plot(0:state.Generation,bestMinLimBreakError,'g--')
            hold off
            grid on
            legend({'Mean Track Error','Mean Terminal Error','Mean LimBreak Error'},'Location','southwest')
        end
        % Costs of errors
        [ spTrackingCost, terminalCost, limBreakCost ] = mpc_horizon_cost( spTrackingError, terminalError, epsilonValues, ...
                                                                        qMatrix,beta,lambdaMatrix);
        bestTrackingCost(1,state.Generation+1) = 1/2*spTrackingCost;
        bestTerminalCost(1,state.Generation+1) = 1/2*terminalCost;
        bestLimBreakCost(1,state.Generation+1) = 1/2*limBreakCost;
        
        % Plot
        if rem(state.Generation,10) == 0
            figure(h2)
            ax = gca;
            ax.XLim = [0 (state.Generation+1)];
            plot(0:state.Generation,bestTrackingCost,'b.')
            hold on
            plot(0:state.Generation,bestTerminalCost,'r*')
            plot(0:state.Generation,bestLimBreakCost,'go')
            hold off
            grid on
            legend({'Track Cost','Terminal Cost','LimBreak Cost'},'Location','northeast')
            fprintf('Generation %d\r\n',state.Generation);
            fprintf('Last Improvement Generation %d\r\n',state.LastImprovement)
            fprintf('Delta U(0) is %4.4f\r\n',bestIndividual(1:3))
            fprintf('F.O.Value Now is %4.2f\r\n',bestScore)
            fprintf('Total Function Evaluations %d\r\n',state.FunEval)
            pause()
        end
        
    case 'done'
        clear bestMeanTrackingError bestMeanTerminalError bestMeanLimBreakError
        clear bestMaxTrackingError bestMaxTerminalError bestMaxLimBreakError
        clear bestMinTrackingError bestMinTerminalError bestMinLimBreakError
        clear bestTrackingCost bestTerminalCost bestLimBreakCost
        clear h1 h2
        close all
end


end

