function mpc_generate_design_parameters(dateMatFileStr,N_y,N_u)
    %% Mat File Handling
    fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
    load(fixedParametersFileName);
    %% MPC Design Parameters
    % Weight Matrices (Design)
    qMatrix = 10*ones(numCV,N_y-1);
    rMatrix = 2*ones(numMV,N_u);
    beta = 0;
    lambdaMatrix = 100*ones(numCV,N_y);

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
    nVars = numMV*N_u;
    maxGens = 100;
    maxStallGens = 15;
    nPopulation = 100;
    %% Save
    save(designParametersFileName);
end