function mpc_design_armax_object( dateMatFileStr,N_y,N_u,kappaControl_ARMAX,...
                                qCostValues,rCostValues,betaCostValues,tuningStruct)
%MPC_DESIGN_ARMAX_OBJECT Summary of this function goes here
%   Detailed explanation goes here
%% Mat File Handling
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
armaxModelFile = ['ARMAX_MDL_Sim_Noise_k5_na5_nb4_nc3_1408.mat']; % change to be function of datMatFileStr
mpcObjectFileName = ['mpc_armax_object_' dateMatFileStr '.mat'];
load(fixedParametersFileName);
load(armaxModelFile);

%% MPC Object creation
augmentedSys = ss(armaxModel,'augmented');
augmentedMPC = setmpcsignals(augmentedSys,'MV',[3 4],'MD',[1 2],'UD',[5 6 7]);
% armaxModelForMPC = setmpcsignals(armaxModel,'MV',[3 4],'MD',[1 2]);
mpcObj = mpc(augmentedMPC);
%% MPC Object Specs
% Controller Sample Time, which is the sample time for the CONTROLLER BLOCK
% NOT THE MODEL. The model is constructed before and the solver is called
% on the below sample time
% mpcObj.Ts = mpcObj.Ts*kappaControl;
mpcObj.PredictionHorizon = N_y;
% Block moves - Tells the controller to keep the MV constant during the
% blocks
mpcObj.ControlHorizon = kappaControl_ARMAX*N_u;
controlHorizon = kappaControl_ARMAX*ones(1,N_u);
controlHorizon(N_u) = controlHorizon(N_u)+(N_y-kappaControl_ARMAX*N_u);
mpcObj.ControlHorizon = controlHorizon;
% Weights for horizon
mpcObj.Weights.OV = ones(N_y,numCV);
mpcObj.Weights.MV = zeros(N_y,numMV);

for cv = 1:numCV % Not considering Cpef
    %% Cost Assignment
%     mpcObj.Weights.OV(1:N_y-1,cv) = qCostValues(cv)*ones(N_y-1,1);
%     mpcObj.Weights.OV(N_y,cv) = betaCostValues(cv);
    mpcObj.Weights.OV(1:N_y-1,cv) = sqrt(qCostValues(cv))*ones(N_y-1,1);
    mpcObj.Weights.OV(N_y,cv) = sqrt(betaCostValues(cv)*(N_y-1));
%     mpcObj.OV(cv).ScaleFactor = 1./qNormMatrix(cv,cv)*(N_y*(numCV));
    mpcObj.OV(cv).ScaleFactor = 1./qNormMatrix(cv,cv)*sqrt(((N_y-1)*(numCV)));
    %% Limits
    if tuningStruct.CV.BoolLims(cv)
        mpcObj.OV(cv).Min = yLowLims(cv);
        mpcObj.OV(cv).Max = yHighLims(cv);
        if tuningStruct.CV.BoolECR(cv)
            mpcObj.OV(cv).MinECR = tuningStruct.CV.ECR(cv);
            mpcObj.OV(cv).MaxECR = tuningStruct.CV.ECR(cv);
        end
    end
end

for mv = 1:numMV
   %% Cost Assignment
%    mpcObj.Weights.ManipulatedVariablesRate(:,mv) = rCostValues(mv);
   mpcObj.Weights.ManipulatedVariablesRate(:,mv) = sqrt(rCostValues(mv)); 
   mpcObj.MV(mv).ScaleFactor = 1./rNormMatrix(mv,mv);
   %% Limits
   if tuningStruct.MV.BoolLims(mv)
       mpcObj.MV(mv).Min = uLowLims(mv);
       mpcObj.MV(mv).Max = uHighLims(mv);
   end
   if tuningStruct.MV.BoolRateLims(mv)
       mpcObj.MV(mv).RateMin = deltaULowLim(mv);
       mpcObj.MV(mv).RateMax = deltaUHighLim(mv);
   end
   
end
%% Load operating point (nominal) conditions
% We have shown that sysForecast.A is equal to augmentedMPC.A. B and C are
% differente, but the state vector is then THE SAME. Therefore, we can use
% the last value of the state produced by sysForecast as the nominal state
% value for the mpcObj.
mpcObj.Model.Nominal.X = x0_ARMAX;
mpcObj.Model.Nominal.Y = x0_RF.y0Memory(:,1);
mpcObj.Model.Nominal.U = [x0_RF.d0Memory(:,1);x0_RF.u0Memory(:,1);zeros(numCV,1)];
%% Penalization of limit breaking
% mpcObj.Weights.ECR = lambdaCostValues(1);
%% Output Disturbance elimination
% Unmeasured input disturbance is zero (?)
distMod = getindist(mpcObj);
distMod.A = zeros(numCV,numCV);
setindist(mpcObj,'model',distMod)
% Output disturbance is zero by construction and identification
setoutdist(mpcObj,'model',tf(zeros(numCV,1)))

%% Save
save(mpcObjectFileName,'mpcObj');
end

