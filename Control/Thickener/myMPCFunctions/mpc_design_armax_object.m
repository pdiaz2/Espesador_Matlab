function mpc_design_armax_object( dateMatFileStr,N_y,N_u,kappaControl_ARMAX,...
                                qCostValues,rCostValues,betaCostValues,tuningStruct)
%MPC_DESIGN_ARMAX_OBJECT Summary of this function goes here
%   Detailed explanation goes here
%% Mat File Handling
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
armaxModelFile = ['ARMAX_MDL_Sim_Noise_k5_na1_nb1_nc3_1408.mat']; % change to be function of datMatFileStr
mpcObjectFileName = ['mpc_armax_object' dateMatFileStr '.mat'];
load(fixedParametersFileName);
load(armaxModelFile);

%% MPC Object creation
armaxModelForMPC = setmpcsignals(armaxModel,'MV',[3 4],'MD',[1 2]);
mpcObj = mpc(armaxModelForMPC);
%% MPC Object Specs
% Controller Sample Time, which is the sample time for the CONTROLLER BLOCK
% NOT THE MODEL. The model is constructed before and the solver is called
% on the below sample time
% mpcObj.Ts = mpcObj.Ts*kappaControl;
mpcObj.PredictionHorizon = N_y;
% Block moves - Tells the controller to keep the MV constant during the
% blocks
mpcObj.ControlHorizon = kappaControl_ARMAX*ones(1,N_u);
mpcObj.ControlHorizon(N_u) = mpcObj.ControlHorizon(N_u)+(N_y-kappaControl_ARMAX*N_u);
% Weights for horizon
mpcObj.Weights.OV = ones(N_y,numCV);
mpcObj.Weights.MV = ones(N_y,numMV);

for cv = 1:numCV % Not considering Cpef
    %% Variable Scaling
%     mpcObj.OV(cv).ScaleFactor = qNormMatrix(cv,cv)*(N_y*(numCV));
    % We are taking advantage of the fact that NormMatrixes for
    % q,beta,lambda are all the same.
    
    %% Limits
    if tuningStruct.CV.BoolLims(cv)
        mpcObj.OV(cv).ScaleFactor = qNormMatrix(cv,cv)*(N_y*(numCV));
        mpcObj.OV(cv).Min = yLowLims(cv);
        mpcObj.OV(cv).Max = yHighLims(cv);
        if tuningStruct.CV.BoolECR(cv)
            mpcObj.OV(cv).MinECR = tuningStruct.CV.ECR(cv);
            mpcObj.OV(cv).MaxECR = tuningStruct.CV.ECR(cv);
        end
    end
    
    %% Cost Assignment
    mpcObj.Weights.OV(1:N_y-1,cv) = qCostValues(cv)*ones(N_y-1,1);
    mpcObj.Weights.OV(N_y,cv) = betaCostValues(cv);
end
% mpcObj.OV(2).ScaleFactor = 1*1/(N_y*(numCV)); % Override before (RF used Cp_uf in [0,1], not[0, 100])
% mpcObj.OV(2).Max = 100*mpcObj.OV(2).Max;
% mpcObj.OV(2).Min = 100*mpcObj.OV(2).Min;
for mv = 1:numMV
   %% Variable Scaling
%    mpcObj.MV(mv).ScaleFactor = rNormMatrix(mv,mv);
   %% Limits
   if tuningStruct.MV.BoolLims(mv)
       mpcObj.MV(mv).ScaleFactor = 1/rNormMatrix(mv,mv);
       mpcObj.MV(mv).Min = uLowLims(mv);
       mpcObj.MV(mv).Max = uHighLims(mv);
   end
   if tuningStruct.MV.BoolRateLims(mv)
       mpcObj.MV(mv).RateMin = deltaULowLim(mv);
       mpcObj.MV(mv).RateMax = deltaUHighLim(mv);
   end
   %% Cost Assignment
   mpcObj.Weights.MV(:,mv) = rCostValues(mv);
end
%% Penalization of limit breaking
% mpcObj.Weights.ECR = lambdaCostValues(1);
%% Output Disturbance elimination
% Input disturbance is zero by construction and identification
% setoutdist(mpcObj,'model',tf)zeros(
% setoutdist(mpcObj,'model',tf(zeros(numCV,1)))
%% Save
save(mpcObjectFileName,'mpcObj');
end

