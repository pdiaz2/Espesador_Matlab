%%
clear all;clc;
close all;
N_y = 12;
N_u = 3;
Dt = 1;
simTime = 7200;
tau_R = 5; % 5 s
tau_C = 12; % 60 s
stepInDV = false;
dateMatFileStr = '2805';
%%
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
parametersFileArray = {delayParametersFile,fixedParametersFileName,designParametersFileName};

%%
% Fixed parameters
mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime);
% Design parameters
mpc_generate_design_parameters(dateMatFileStr,N_y,N_u);
%%
for strFile = 1:3
   load(parametersFileArray{strFile}); 
end
%%
for cv = 1:numCV
    ref = yRef{cv};
    w(cv) = ref(1,2);
end
wMatrix = mpc_generate_w_matrix(w,qMatrix);
yPastValues = Y0'*ones(1,max(na));

uPastValues = U0'*ones(1,max(max(nb)));

dPastValues = D0'*ones(1,max(max(nc))+1);
%%
objectiveFunction = @(x)mpc_lqr_function(x,beta,rMatrix, qMatrix, lambdaMatrix, wMatrix, yLims,uLims,...
                                      yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc);
outputFcn = @(options,state,flag)mpc_display_output_fcn(options,state,flag,...
                                                        qMatrix, beta, lambdaMatrix, wMatrix, yLims,uLims,...
                                                        yPastValues, uPastValues, dPastValues,...
                                                        nTrees, nPredictors, na, nb, nc);
                                                    
rng(120938103);
options = optimoptions('ga','UseVectorized',true,'Display','off',...
                       'PopulationSize',GAParameters(1),...
                       'MaxGenerations',GAParameters(2),...
                       'MaxStallGenerations',GAParameters(3),...
                       'FunctionTolerance',GAParameters(4),...
                       'FitnessLimit',GAParameters(5),...
                       'OutputFcn',outputFcn...
                       );
tic;
[x,fval,exitflag,output,population,scores] = ga(objectiveFunction,GAParameters(6),[],[],[],[],lBounds,uBounds,[],options);
toc;