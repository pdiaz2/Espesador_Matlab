function mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime)
    %% Mat File Handling
    matFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
    delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
    %% Initial Conditions
    D0 = [325.1 0.3143 0.356];
    U0 = [111 26]; 
    Y0 = [21.02  0.737   2.126 0];
    numCV = length(Y0);
    numDV = length(D0);
    numMV = length(U0);
    %% Noise
    noisePower = [0.5 0.1 0.3 0.0001];
    noiseSeed = [1231235 456345 93894 748563];
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
    nPredictors = [10 10 9 9]
    %% MPC Fixed Parameters

    % Constraints (Fixed by CIC2017)
    % On MV (1 pps => 5 pp5s)
    deltaULowLim = -3;
    deltaUHighLim = 3;

    % Restriction only on y2: 0.95*Y0(2)<= y <= 1.05*Y0(2)
    yLowLims = 0*ones(numCV,1);
    yHighLims = 100*ones(numCV,1);
    yLowLims(1,:) = 
    yLowLims(2,:) = 0.97*Y0(2);
    yHighLims(2,:) = 1.03*Y0(2);
    
    
    % Constraints on U are free according to CIC2017
    uLowLims = 0*ones(numMV,1); 
    uHighLims = 100*ones(numMV,1);
    %% Save
    save(matFileName);
end
