function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u,optimizationMethod)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design)
    qMatrix = qNormMatrix*ones(numCV,N_y-1)*1/((N_y-1)*numCV);
%     qMatrix(1,:) = 10*qMatrix(1,:);
%     qMatrix(2,:) = 100*qMatrix(2,:);
    qMatrix(3,:) = 100*qMatrix(3,:); % 0.01 lets bdlvl down. 10 compensates
%     qMatrix(4,:) = 0.00001*qMatrix(4,:);
    rMatrix = rNormMatrix*ones(numMV,N_u); % 0.001 bad results
    rMatrix(1,:) = 1*rMatrix(1,:); % 0.001
    rMatrix(2,:) = 0.001*rMatrix(2,:); % 1 is very very good. 10 very similar
    betaCost = betaNormMatrix*ones(numCV,1)*1/(numCV);
    lambdaMatrix = lambdaNormMatrix*ones(numCV,N_y)*1/((N_y)*numCV);
%     lambdaMatrix(1,:) = 0.00001*lambdaMatrix(1,:);
%     lambdaMatrix(2,:) = 0.00001*lambdaMatrix(2,:);
%     lambdaMatrix(3,:) = 0.00001*lambdaMatrix(3,:);
%     lambdaMatrix(4,:) = 0.00001*lambdaMatrix(4,:);
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
    gens = 30;% 100 for GA
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
                                    0; %Plot Progress within Generations. 1 => plot; 2 => verbose (end-3) always
                                    1; % Use OutputFcn, (end-2 always);
                                    2; % 2 => PSO is being used (end-1 always)
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
            
    end
    %% Save
    save(designParametersFileName);
end