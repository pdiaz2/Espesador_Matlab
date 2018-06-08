function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design)
    qMatrix = 1000*ones(numCV,N_y-1);
    qMatrix(1,:) = 0.000000001*ones(1,N_y-1);
%     qMatrix(2,:) = 0.00001*ones(1,N_y-1);
    qMatrix(3,:) = 10*ones(1,N_y-1); % 0.01 lets bdlvl down. 10 compensates
    qMatrix(4,:) = 0.00001*ones(1,N_y-1);
    rMatrix = 0.0001*ones(numMV,N_u); % 0.001 bad results
%     rMatrix(1,:) = rMatrix(2,:);
    rMatrix(2,:) = 0.001*rMatrix(2,:); % 1 is very very good. 10 very similar
    betaCost = 0.0001*ones(numCV,1);
    lambdaMatrix = 0.0001*ones(numCV,N_y);
%     lambdaMatrix(1,:) = zeros(1,N_y);
%     lambdaMatrix(2,:) = zeros(1,N_y);
%     lambdaMatrix(3,:) = zeros(1,N_y);
%     lambdaMatrix(4,:) = zeros(1,N_y);
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
    
    
    %% MPC GA Parameters
    pop = 200;
    gens = 50;
    eliteFraction = 0.05;
    GAParameters = [pop; % nPopulation 
                    gens; % maxGens
                    floor(0.75*gens); % maxStallGens
                    1e-6; % functionTolerance
                    0.001*stabilityFactor;    % fitnessLimit
                    ceil(eliteFraction*pop);
                    1; % Use OutputFcn
                    0; %Plot Progress within Generations
                    1e-6; % Champion distance tolerance
                    10; % Champion break tolerance limit
                    numMV*N_u % nVars
                    ];
                     
    %% Save
    save(designParametersFileName);
end