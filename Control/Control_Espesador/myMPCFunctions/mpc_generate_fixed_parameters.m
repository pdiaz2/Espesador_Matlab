function mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime)
    %% Mat File Handling
    matFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
    %% Initial Conditions
    D0 = 35.7834;
    U0 = [32.9816   46.2282   25.3416];
    Y0 = [41.4120   28.7553   38.6037];
    numCV = length(Y0);
    numDV = length(D0);
    numMV = length(U0);
    %% DV Design
    if (stepInDV)
        D = [0,35.7834;floor(simTime/14),42.7834;3*floor(simTime/14),35.7834];
    else
        D = [0, D0];
    end
%     yRef = {[0,Y0(1);floor(simTime/25),36.412],[0,Y0(2);floor(simTime/4),23.7553],[0,Y0(3)]};
%     yRef = {[0,Y0(1)],[0,Y0(2);floor(simTime/4),33.7553],[0,Y0(3)]};
    %% Random Forest MEX Parameters
    [na,nb,nc,maxDelay] = generate_rf_model_orders(delayParametersFile,numCV);
    maxYDelay = maxDelay(1);
    maxUDelay = maxDelay(2);
    maxDDelay = maxDelay(3);
    % Always print to check; MEX functions throw error anyway
    nTrees = ones(1,numCV)*100
    nPredictors = [8 12 12]
    %% MPC Fixed Parameters

    % Constraints (Fixed by CIC2017)
    % On MV (1 pps => 5 pp5s)
    deltaULowLim = -5;
    deltaUHighLim = 5;

    % Restriction only on y2: 0.95*Y0(2)<= y <= 1.05*Y0(2)
    yLowLims = 0*ones(numCV,1);
    yHighLims = 100*ones(numCV,1);
    yLowLims(2,:) = 0.95*Y0(2);
    yHighLims(2,:) = 1.05*Y0(2);
    
    % Constraints on U are free according to CIC2017
    uLowLims = 0*ones(numMV,1); 
    uHighLims = 100*ones(numMV,1);
    %% Save
    save(matFileName);
end
