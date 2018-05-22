load('delayParameters.mat');
for y = 1:numOutputs
    delayUMatrix(y,:) = UBackshiftMatrix(delayU(y),:);
    delayYMatrix(y,:) = YBackshiftMatrix(delayY(y),:);
    uRecSize = max(max(delayUMatrix));
    yRecSize = max(max(delayYMatrix));
end
% Code will be eliminated afterwards
na = [delayYMatrix(2,2);delayYMatrix(2,2);delayYMatrix(3,3)];
nb = delayUMatrix(:,2:end);
nc = delayUMatrix(:,1);
N_u = 2;
tau_R = 5;
D0 = 35.7834;
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
yPastValues = Y0'*ones(1,max(na));
uPastValues = U0'*ones(1,max(max(nb)));
dPastValues = D0'*ones(1,max(max(nc)));
deltaMV = 0.1*linspace(1,3,3);
deltaMV = [deltaMV (deltaMV(1:3)+100)];
nTrees = ones(1,3)*100;
nPredictors = 10*ones(1,3);
N_y = 3;
qMatrix = ones(numOutputs,N_y-1);
rMatrix = ones(numMV,N_u);
beta = 100;
wMatrix = repmat([40 28 36]',1,3);
lambdaMatrix = 100*ones(numOutputs,N_y);
yHighLims = 40*ones(numOutputs,N_y);
yLowLims = 20*ones(numOutputs,N_y);
yLims = cat(3,yLowLims,yHighLims);
% x = [1 2 3 deltaMV];
% z = mpc_lqr_function(x,beta,rMatrix);
%%
objectiveFunction = @(x)mpc_lqr_function_v2(x,beta,rMatrix, qMatrix, lambdaMatrix, wMatrix, yLims,...
                                      yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc);
nVars = numMV*N_u;
lBounds = [-5*ones(1,numOutputs*N_u)];
uBounds = [5*ones(1,numOutputs*N_u)];
options = optimoptions('ga','UseVectorized',true,'Display','off','MaxStallGenerations',500,'PopulationSize',100,'MaxGenerations',100);
tic;
[caquita,fval,exitflag,output,population,scores] = ga(objectiveFunction,nVars,[],[],[],[],lBounds,uBounds,[],options);
toc;
%%
% %% GA
% objectiveFunction = @(x)mpc_lqr_function(x,beta,rMatrix);
% nonlinearConstraintsFunction = @(x)mpc_constraint_generator(x,qMatrix,lambdaMatrix,wMatrix,yLims,...
%                                               yPastValues,uPastValues,dPastValues,...
%                                               nTrees,nPredictors,...
%                                               na,nb,nc);
% nVars = 3+numMV*N_u;
% lBounds = [0 0 0 -2*ones(1,numOutputs*N_u)];
% uBounds = [1 1 2 2*ones(1,numOutputs*N_u)];
% options = optimoptions('ga','UseVectorized',true,'Display','iter','MaxStallGenerations',500,'PopulationSize',100,'MaxGenerations',1);
% tic;
% [caquita,fval,exitflag,output,population,scores] = ga(objectiveFunction,nVars,[],[],[],[],lBounds,uBounds,nonlinearConstraintsFunction,options);
% toc;