function [ optimalMV,fval,exitflag,population,scores ] = mpc_wrapper_thickener...
                                                        (yPastValues,uPastValues,dPastValues,...
                                                        qMatrix,rMatrix,lambdaMatrix,betaCost,wMatrix,...
                                                        yLims,uLims,lBounds,uBounds,...
                                                        nTrees,nPredictors,na,nb,nc,kappaControl,...
                                                        OptimSolverParameters)
%MPC_WRAPPER_ Wrapper for MPC optimization in Simulink
%   Detailed explanation goes here
%% GA Solver
objectiveFunction = @(x)mpc_lqr_function(x,betaCost,rMatrix, qMatrix, lambdaMatrix, wMatrix, yLims,uLims,...
                                      yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc, kappaControl);
%% Choosing Type of Optimization Method
if OptimSolverParameters(end-1) == 1
    % Genetic algorithm
    outputFcn = @(options,state,flag)mpc_output_ga_fcn(options,state,flag,...
                        qMatrix, betaCost, lambdaMatrix, wMatrix, yLims,uLims,...
                        yPastValues, uPastValues, dPastValues,...
                        nTrees, nPredictors, na, nb, nc, kappaControl,...
                        OptimSolverParameters(end-3),OptimSolverParameters(7),OptimSolverParameters(8));
    firstOptions = optimoptions('ga','UseVectorized',true,'Display','off',...
                    'PopulationSize',OptimSolverParameters(1),...
                    'MaxGenerations',OptimSolverParameters(2),...
                    'MaxStallGenerations',OptimSolverParameters(3),...
                    'FunctionTolerance',OptimSolverParameters(4),...
                    'FitnessLimit',OptimSolverParameters(5),...
                    'EliteCount',OptimSolverParameters(6),...
                    'OutputFcn',[]...
                    );
elseif OptimSolverParameters(end-1) == 2
    % Particle Swarm Optimization
    outputFcn = @(optimValues, state)mpc_output_pso_fcn(optimValues, state,...
                        qMatrix, betaCost, lambdaMatrix, wMatrix, yLims,uLims,...
                        yPastValues, uPastValues, dPastValues,...
                        nTrees, nPredictors, na, nb, nc, kappaControl,...
                        OptimSolverParameters(end-3),OptimSolverParameters(6),OptimSolverParameters(7));
                    
    firstOptions = optimoptions('particleswarm','UseVectorized',true,'Display','off',...
                    'SwarmSize',OptimSolverParameters(1),...
                    'MaxIterations',OptimSolverParameters(2),...
                    'MaxStallIterations',OptimSolverParameters(3),...
                    'FunctionTolerance',OptimSolverParameters(4),...
                    'ObjectiveLimit',OptimSolverParameters(5),...
                    'OutputFcn',[]...
                    );
                    
                                
elseif OptimSolverParamters(end-1) == 3
    outputFcn = @(stop, options, optchanged)mpc_output_patts_fcn(optimValues, options, flag, ...
                                    qMatrix, betaCost, lambdaMatrix, wMatrix,...
                                    yLims,uLims,...
                                    yPastValues, uPastValues, dPastValues,...
                                    nTrees, nPredictors,...
                                    na, nb, nc, kappaControl,...
                                    plotProgress, championTolerance,...
                                    championCounterTolerance);
end
%% Setting output function if required
if logical(OptimSolverParameters(end-2))
    options = optimoptions(firstOptions,'OutputFcn',outputFcn);
else
    options = firstOptions;
end
%% Solve usign specified solver
if OptimSolverParameters(end-1) == 1
   [x,fval,exitflag,output,population,scores] = ...
       ga(objectiveFunction,OptimSolverParameters(end),[],[],[],[],lBounds,uBounds,[],options); 
elseif OptimSolverParameters(end-1) == 2
    [x,fval,exitflag,output] = ...
        particleswarm(objectiveFunction,OptimSolverParameters(end),lBounds,uBounds,options);
    % Bogey; just for trials
    population = 0;
    scores = 0;
elseif OptimSolverParameters(end-1) == 3
    
end
% if logical(OptimSolverParameters(7))
%     options = optimoptions('ga','UseVectorized',true,'Display','off',...
%                        'PopulationSize',OptimSolverParameters(1),...
%                        'MaxGenerations',OptimSolverParameters(2),...
%                        'MaxStallGenerations',OptimSolverParameters(3),...
%                        'FunctionTolerance',OptimSolverParameters(4),...
%                        'FitnessLimit',OptimSolverParameters(5),...
%                        'EliteCount',OptimSolverParameters(6),...
%                        'OutputFcn',outputFcn...
%                        );
% else
%     options = optimoptions('ga','UseVectorized',true,'Display','off',...
%                        'PopulationSize',OptimSolverParameters(1),...
%                        'MaxGenerations',OptimSolverParameters(2),...
%                        'MaxStallGenerations',OptimSolverParameters(3),...
%                        'FunctionTolerance',OptimSolverParameters(4),...
%                        'FitnessLimit',OptimSolverParameters(5),...
%                        'EliteCount',OptimSolverParameters(6),...
%                        'OutputFcn',[]...
%                        );
% end

% [x,fval,exitflag,output,population,scores] = ga(objectiveFunction,OptimSolverParameters(end),[],[],[],[],lBounds,uBounds,[],options);
%% Saturation of MV
[m,~] = size(rMatrix);
% Saturation of MV
uLowLims = uLims(:,1,1);
uHighLims = uLims(:,1,2);
uPossible = x(1:m)'+uPastValues(:,1);
optimalMV = mpc_saturate_mv(uPossible,[uLowLims uHighLims]);
end

