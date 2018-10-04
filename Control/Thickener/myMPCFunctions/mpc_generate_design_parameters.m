function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod,...
                                        qCostValues,rCostValues,betaCostValues,lambdaCostValues)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design) 
    qMatrix = diag(qCostValues)*qNormMatrix.^2*ones(numCV,N_y-1)*1/((N_y-1)*numCV); 
    rMatrix = diag(rCostValues)*rNormMatrix.^2*ones(numMV,N_u); 
    betaCost = diag(betaCostValues)*betaNormMatrix.^2*ones(numCV,1)*1/(numCV);
    lambdaMatrix = diag(lambdaCostValues)*lambdaNormMatrix.^2*ones(numCV,N_y)*1/((N_y)*numCV);

    %% Stability for Numeric Method
    qMatrix = stabilityFactor*qMatrix;
    rMatrix = stabilityFactor*rMatrix;
    betaCost = stabilityFactor*betaCost;
    lambdaMatrix = stabilityFactor*lambdaMatrix;
    %% Bounds and Constraints
    % Delta U bounds (decission variables)
%     lBounds = deltaULowLim*ones(1,numMV*N_u);
%     uBounds = deltaUHighLim*ones(1,numMV*N_u);
    lBounds = repmat(deltaULowLim,1,N_u);
    uBounds = repmat(deltaUHighLim,1,N_u);

    % CV Constraints
    yLowLims = yLowLims*ones(1,N_y);
    yHighLims = yHighLims*ones(1,N_y);
    yLims = cat(3,yLowLims,yHighLims);

    % MV Constraints
    uLowLims = uLowLims*ones(1,N_u);
    uHighLims = uHighLims*ones(1,N_u);
    uLims = cat(3,uLowLims,uHighLims);
    
    
    %% MPC Optimization Solver Parameters
    pop = 100;% 200
    gens = 30;% 30 for PSO, 100 for GA
%     gens = 30;
    eliteFraction = 0.05;
    championCounterFraction = 1; % 0.25 for GA
    OptimSolverStruct.GAParameters = [pop; % nPopulation 
                                    gens; % maxGens
                                    floor(0.75*gens); % maxStallGens
                                    0.5e-3; % functionTolerance
                                    0.001*stabilityFactor;    % fitnessLimit
                                    ceil(eliteFraction*pop); % Elitism fraction
                                    1e-3; % Champion distance tolerance
                                    ceil(championCounterFraction*gens); % Champion tolerance break counter
                                    1; %Plot Progress within Generations. 1 => plot; 2 => verbose (end-3) always
                                    1; % Use OutputFcn, (end-2 always);
                                    1; % 1 => GA is being used (end-1 always)
                                    numMV*N_u % nVars (end always)
                                    ];
    OptimSolverStruct.PSOParameters = [pop; % SwarmSize
                                    gens; % MaxIterations
                                    floor(0.75*gens); % MaxStallIterations
                                    0.5e-3; % FunctionTolerance
                                    0.001*stabilityFactor; %ObjectiveLimit
                                    1e-3; % Champion distance tolerance
                                    ceil(championCounterFraction*gens); % Champion tolerance break counter
                                    floor(10*60/5); % Plot from contol hit (end-4 always); % 10
                                    2; %Plot Progress within Generations. 1 => plot; 2 => verbose (end-3) always
                                    1; % Use OutputFcn, (end-2 always);
                                    2; % 2 => PSO is being used (end-1 always)
                                    numMV*N_u % nVars (end always)
                                    ];
    % Pattern Search Options: Missing F.O Limit (ball around optimum)
    OptimSolverStruct.PattParameters = [pop*20*numMV*N_u; % MaxFunctionEvaluations (Matlab default is this)
                                    gens*numMV*N_u; % MaxIterations (Matlab default is this)
                                    0.5e-3; % FunctionTolerance
                                    1e-3; % StepTolerance (analog to champion distance tolerance)
                                    2; %Plot Progress within Generations. 1 => plot; 2 => verbose (end-3) always
                                    0; % Use OutputFcn, (end-2 always);
                                    3; % 1 => Pattern is being used (end-1 always)
                                    numMV*N_u % nVars (end always)
                                    ];
    switch optimizationMethod
        case 'GA'
            OptimSolverParameters = OptimSolverStruct.GAParameters;
            OptimSolverParameters(end-1) = 1;
        case 'PSO'
            OptimSolverParameters = OptimSolverStruct.PSOParameters;
            OptimSolverParameters(end-1) = 2;
        case 'PattS'
            OptimSolverParameters = OptimSolverStruct.PattParameters;
            OptimSolverParameters(end-1) = 3;
    end
    %% Save
    save(designParametersFileName);
end