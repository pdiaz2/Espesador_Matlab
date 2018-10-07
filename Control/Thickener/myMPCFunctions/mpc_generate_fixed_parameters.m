function mpc_generate_fixed_parameters(dateMatFileStr)
    %% Mat File Handling
    matFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
%     RFParametersFile = ['RFParameters_' dateMatFileStr '.mat'];
%     x0FileName = ['x0Control_Sim_1408' dateMatFileStr '.mat'];
    RFParametersFile = ['RFParameters_1408.mat'];
    x0FileName = ['x0Control_Sim_1209.mat'];
%     x0FileName = ['x0Control_Sim_1408_NO.mat'];
    %% Initial Conditions
    D0 = [326.3733 0.3143];
    U0 = [114.8275 26.0152]; 
    Y0 = [21.0190  73.7604   2.1261];
    numCV = length(Y0);
    numDV = length(D0);
    numMV = length(U0);
    %% Noise for CV
    cvSNR = [90 90 90 90]; % DB
    cvVariance = [5 0.005 3 0.000001];
    cvNoisePower = cvVariance./10.^(cvSNR/10);
    cvNoiseSeed = [11051993 5031995 8061958 1111960];

    %% Predictor initial state
    load(x0FileName);
    y0Memory = x0_RF.y0Memory;
    u0Memory = x0_RF.u0Memory;
    d0Memory = x0_RF.d0Memory;
    %% Random Forest MEX Parameters
    [na,nb,nc,maxDelay] = generate_rf_model_orders(RFParametersFile,numCV);
    maxYDelay = maxDelay(1);
    maxUDelay = maxDelay(2);
    maxDDelay = maxDelay(3);
    % Always print to check; MEX functions throw error anyway
    nTrees = ones(1,numCV)*100
    nPredictors = [360 360 360 360]
    %% MPC Fixed Parameters

    % Constraints 
    % On MV (1 pps => 5 pp5s)
    deltaULowLim(1) = -15;%-10; % -15
    deltaULowLim(2) = -5;%; % -5
    deltaUHighLim(1) = 15;%;
    deltaUHighLim(2) = 5;%;

    yLowLims(1,:) = 0.95*Y0(1); % 0.8
    yHighLims(1,:) = 1.05*Y0(1); % 1.2
    yLowLims(2,:) = 0.97*Y0(2);
    yHighLims(2,:) = 1.03*Y0(2);
    yLowLims(3,:) = 0.9*Y0(3); %0.7055
%     yHighLims(3,:) = 2*Y0(3); % 3.7628
    yHighLims(3,:) = 6.25;
    fprintf('CV Low Limits are %2.4f \r\n',yLowLims);
    fprintf('CV High Limits are %2.4f \r\n',yHighLims);
%     yLowLims(4,:) = 0;
%     yHighLims(4,:) = 0.1;
%     
    
    
    uLowLims(1,:) = 70; % 90
    uHighLims(1,:) = 125;
    uLowLims(2,:) = 18; %23
    uHighLims(2,:) = 31; % 36
    
    fprintf('MV Low Limits are %d \r\n',uLowLims);
    fprintf('uV High Limits are %d \r\n',uHighLims);
    
    fprintf('MV Rate Limits are %d \r\n',deltaUHighLim);
    
    %% Normalization Parameters
    % Factor that multiplies cost matrixes of MPC to normalize the error
    % w.r.t the setpoints/dynamic range of each variable
    % Another idea is to normalize between 0 and 100% w.r.t each variable
    % high and low lims. That would mean to substract (y(k)-y_Low)/yHigh-yLow)
    qNormMatrix = diag([1/3 1/3 1/5]); % Could also be yLimMax-yLimMin (or something like that)% 0:54 1 1 1 
    rNormMatrix = diag([1/deltaUHighLim(1) 1/deltaUHighLim(2)]); % 0:54 - 1 1
    betaNormMatrix = qNormMatrix;
    lambdaNormMatrix = qNormMatrix;
    %% Numeric Solution Stability Factor
    stabilityFactor = 1;
    %% OPC Parameters
    opcParameters(1) = 4; % Thickener Index in OPC Server
    opcParameters(2) = 100; % Seconds before disconnecting client
    opcParameters(3) = 5; % tau_s of system
    opcParameters(4) = 1;
    opcParameters(5) = 4;
    opcParameters(6) = 6;
    opcParameters(7) = 8;
    %% Save
    save(matFileName);
end
