clear all;
clc;
close all;
%%
load('delayParameters_2705.mat');
for y = 1:numOutputs
    delayUMatrix(y,:) = UBackshiftMatrix(delayU(y),:);
    delayYMatrix(y,:) = YBackshiftMatrix(delayY(y),:);
    uRecSize = max(max(delayUMatrix));
    yRecSize = max(max(delayYMatrix));
end
% Code will be eliminated afterwards
na = [delayYMatrix(1,1);delayYMatrix(2,2);delayYMatrix(3,3)];
nb = delayUMatrix(:,2:end);
% nc = [delayUMatrix(:,1) delayUMatrix(:,1)];
nc = delayUMatrix(:,1);
nPopulation = 5;
N_u = 2;
tau_R = 5;
% D0 = [35.7834 700];
D0 = [35.7834];
U0 = [32.9816   46.2282   25.3416];
Y0 = [41.4120   28.7553   38.6037];
yPastValues = Y0'*ones(1,max(na));

uPastValues = U0'*ones(1,max(max(nb)));

dPastValues = D0'*ones(1,max(max(nc))+1);
deltaMV = 0.1*linspace(1,3,3);
deltaMV = [deltaMV (deltaMV(1:3)+100)];
nTrees = ones(1,3)*100;
nPredictors = [8 7 10];
N_y = 3;
qMatrix = ones(numOutputs,N_y-1);
rMatrix = ones(numMV,N_u);
beta = 100;
wMatrix = repmat([40 28 36]',1,N_y);
lambdaMatrix = 100*ones(numOutputs,N_y);
yHighLims = 40*ones(numOutputs,N_y);
yLowLims = 20*ones(numOutputs,N_y);
yLims = cat(3,yLowLims,yHighLims);
uLowLims = 24*ones(numMV,N_u);
uHighLims = 30*ones(numMV,N_u);
uLims = cat(3,uLowLims,uHighLims);
%%
objectiveFunction = @(x)mpc_lqr_function(x,beta,rMatrix, qMatrix, lambdaMatrix, wMatrix, yLims,uLims,...
                                      yPastValues, uPastValues, dPastValues,...
                                      nTrees, nPredictors, na, nb, nc);
outputFcn = @(options,state,flag)mpc_display_output_fcn(options,state,flag,...
                                                        qMatrix, beta, lambdaMatrix, wMatrix, yLims,uLims,...
                                                        yPastValues, uPastValues, dPastValues,...
                                                        nTrees, nPredictors, na, nb, nc);
                                                    
rng(120938103);
nVars = numMV*N_u;
lBounds = [-5*ones(1,numOutputs*N_u)];
uBounds = [5*ones(1,numOutputs*N_u)];
options = optimoptions('ga','UseVectorized',true,'Display','off',...
                        'MaxStallGenerations',50,'PopulationSize',nPopulation,'MaxGenerations',100,...
                        'OutputFcn',outputFcn);
tic;
[x,fval,exitflag,output,population,scores] = ga(objectiveFunction,nVars,[],[],[],[],lBounds,uBounds,[],options);
toc;
