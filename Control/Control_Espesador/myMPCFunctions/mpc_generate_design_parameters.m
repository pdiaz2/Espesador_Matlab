function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design)
    qMatrix = qNormMatrix*ones(numCV,N_y-1)*1/((N_y-1)*numCV);
%     qMatrix(1,:) = 10*qMatrix(1,:);
%     qMatrix(2,:) = 100*qMatrix(2,:);
%     qMatrix(3,:) = 10*qMatrix(3,:); % 0.01 lets bdlvl down. 10 compensates
%     qMatrix(4,:) = 0.00001*qMatrix(4,:);
    rMatrix = rNormMatrix*ones(numMV,N_u); % 0.001 bad results
%     rMatrix(1,:) = 1*rMatrix(1,:);
%     rMatrix(2,:) = 1*rMatrix(2,:); % 1 is very very good. 10 very similar
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
    
    
    %% MPC GA Parameters
    pop = 200;% 200
    gens = 100;
    eliteFraction = 0.05;
    GAParameters = [pop; % nPopulation 
                    gens; % maxGens
                    floor(0.75*gens); % maxStallGens
                    1e-3; % functionTolerance
                    0.001*stabilityFactor;    % fitnessLimit
                    ceil(eliteFraction*pop);
                    1; % Use OutputFcn
                    2; %Plot Progress within Generations
                    1e-3; % Champion distance tolerance
                    10; % Champion break tolerance limit
                    numMV*N_u % nVars
                    ];
                     
    %% Save
    save(designParametersFileName);
end