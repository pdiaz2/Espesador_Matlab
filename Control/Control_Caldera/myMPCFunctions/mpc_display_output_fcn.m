function [ state, options, optchanged ] = mpc_display_output_fcn(options, state, flag, ...
                                                                qMatrix, lambdaMatrix, wMatrix, yLims,...
                                                                yPastValues, uPastValues, dPastValues,...
                                                                nTrees, nPredictors, na, nb, nc)
%MPC_DISPLAY_OUTPUT_FCN Displays associated costs of objective function
persistent bestTrackingCost bestTerminalCost bestLimBreakCost
optchanged = false;
switch flag
    case 'init'
        % Find the best objective function in current generation => Best(end)
        ibest = state.Best(end);
        ibest = find(state.Score == ibest,1,'last');
        bestx = state.Population(ibest,:);
        
    case 'iter'
        lalala
    case 'done'
        
end


end

