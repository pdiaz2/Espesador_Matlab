function mpc_design_armax_object( dateMatFileStr,N_y,N_u,kappaControl,...
                                                    qCostValues,rCostValues,betaCostValues,lambdaCostValues)
%MPC_DESIGN_ARMAX_OBJECT Summary of this function goes here
%   Detailed explanation goes here
%% Mat File Handling
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
armaxModelFile = ['ARMAX_MDL_Sim_1008.mat']; % change to be function of datMatFileStr
mpcObjectFileName = ['mpc_armax_object' dateMatFileStr '.mat'];
load(fixedParametersFileName);
load(armaxModelFile);
fprintf('Change numCV-1 to numCV after fixing\r\n')
%% MPC Object creation
armaxModelForMPC = setmpcsignals(armaxModel,'MV',[4 5],'MD',[1 2 3]);
mpcObj = mpc(armaxModelForMPC);
%% MPC Object Specs
mpcObj.PredictionHorizon = N_y;
% Block moves - Tells the controller to keep the MV constant during the
% blocks
mpcObj.ControlHorizon = kappaControl*ones(1,N_u);
mpcObj.ControlHorizon(N_u) = mpcObj.ControlHorizon(N_u)+(N_y-kappaControl*N_u);
% Weights for horizon
mpcObj.Weights.OV = ones(N_y,numCV-1);
mpcObj.Weights.MV = ones(N_y,numMV);

for cv = 1:numCV-1 % Not considering Cpef
    %% Variable Scaling
    mpcObj.OV(cv).ScaleFactor = qNormMatrix(cv,cv)*1/(N_y*(numCV-1));
    % We are taking advantage of the fact that NormMatrixes for
    % q,beta,lambda are all the same.
    
    %% Limits
    mpcObj.OV(cv).Min = yLowLims(cv);
    mpcObj.OV(cv).Max = yHighLims(cv);
    mpcObj.OV(cv).MinECR = 0.5;
    mpcObj.OV(cv).MaxECR = 0.5;
    %% Cost Assignment
    mpcObj.Weights.OV(1:N_y-1,cv) = qCostValues(cv)*ones(N_y-1,1);
    mpcObj.Weights.OV(N_y,cv) = betaCostValues(cv);
end
mpcObj.OV(2).ScaleFactor = 1*1/(N_y*(numCV-1)); % Override before (RF used Cp_uf in [0,1], not[0, 100])
mpcObj.OV(2).Max = 100*mpcObj.OV(2).Max;
mpcObj.OV(2).Min = 100*mpcObj.OV(2).Min;
for mv = 1:numMV
   %% Variable Scaling
   mpcObj.MV(mv).ScaleFactor = rNormMatrix(mv,mv);
   %% Limits
   mpcObj.MV(mv).Min = uLowLims(mv);
   mpcObj.MV(mv).Max = uHighLims(mv);
   mpcObj.MV(mv).RateMin = deltaULowLim(mv);
   mpcObj.MV(mv).RateMax = deltaUHighLim(mv);
   %% Cost Assignment
   mpcObj.Weights.MV(:,mv) = rCostValues(mv);
end
%% Penalization of limit breaking
% mpcObj.Weights.ECR = lambdaCostValues(1);
%% Output Disturbance elimination
% Input disturbance is zero by construction and identification
% setoutdist(mpcObj,'model',tf)zeros(
setoutdist(mpcObj,'model',tf(zeros(numCV-1,1)))
%% Save
save(mpcObjectFileName,'mpcObj');
end

