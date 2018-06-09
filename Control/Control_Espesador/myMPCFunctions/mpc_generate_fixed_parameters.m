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
    noisePower = [0.0005 0.00000001 0.0003 0.000001];
%     noisePower = zeros(1,4);
    noiseSeed = [1231235 456345 93894 748563];
    %% DV Design
    if (stepInDV)
        stepTimeDV(1) = floor(simTime/10);
        stepTimeDV(2) = simTime;
        stepTimeDV(3) = simTime;
    else
        stepTimeDV(1) = simTime;
        stepTimeDV(2) = simTime;
        stepTimeDV(3) = simTime;
    end
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
    deltaULowLim(1) = -15;
    deltaULowLim(2) = -5;
    deltaUHighLim(1) = 15;
    deltaUHighLim(2) = 5;

    % Restriction only on y2: 0.95*Y0(2)<= y <= 1.05*Y0(2)

    yLowLims(1,:) = 0.8*Y0(1);
    yHighLims(1,:) = 1.2*Y0(1);
    yLowLims(2,:) = 0.97*Y0(2);
    yHighLims(2,:) = 1.03*Y0(2);
    yLowLims(3,:) = 1.8;
    yHighLims(3,:) = 8;
    yLowLims(4,:) = 0;
    yHighLims(4,:) = 0.1;
    
    
    % Constraints on U are free according to CIC2017
    uLowLims(1,:) = 70;
    uHighLims(1,:) = 125;
    uLowLims(2,:) = 23;
    uHighLims(2,:) = 29;
    %% Normalization Parameters
    % Factor that multiplies cost matrixes of MPC to normalize the error
    % w.r.t the setpoints/dynamic range of each variable
    qNormMatrix = diag([10 100 1 1000]);
    rNormMatrix = diag([1 1]);
    betaNormMatrix = qNormMatrix;
    lambdaNormMatrix = qNormMatrix;
    %% Numeric Solution Stability Factor
    stabilityFactor = 1;
    %% Save
    save(matFileName);
end
