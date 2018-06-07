function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design)
    qMatrix = 1*ones(numCV,N_y-1);
    qMatrix(1,:) = zeros(1,N_y-1);
%     qMatrix(2,:) = zeros(1,N_y-1);
%     qMatrix(3,:) = zeros(1,N_y-1);
    rMatrix = 1*ones(numMV,N_u);
%     rMatrix(1,:) = rMatrix(2,:);
%     rMatrix(2,:) = rMatrix(2,:);
    rMatrix(3,:) = 0.01*rMatrix(3,:);
    beta = 0*ones(numCV,1);
    lambdaMatrix = 100*ones(numCV,N_y);
%     lambdaMatrix(1,:) = zeros(1,N_y);
%     lambdaMatrix(2,:) = zeros(1,N_y);
%     lambdaMatrix(3,:) = zeros(1,N_y);

    % Delta U bounds (decission variables)
    lBounds = deltaULowLim*ones(1,numMV*N_u);
    uBounds = deltaUHighLim*ones(1,numMV*N_u);

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
    gens = 100;
    eliteFraction = 0.05;
    GAParameters = [pop; % nPopulation 
                    gens; % maxGens
                    floor(0.75*gens); % maxStallGens
                    1e-6; % functionTolerance
                    3;    % fitnessLimit
                    ceil(eliteFraction*pop);
                    numMV*N_u % nVars
                    ];
                     
    %% Save
    save(designParametersFileName);
end