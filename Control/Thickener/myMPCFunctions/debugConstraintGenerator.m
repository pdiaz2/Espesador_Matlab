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
yPastValues = repmat(linspace(1,max(na),max(na)),3,1);
yPastValues = yPastValues+[1,2,3]'*10;
uPastValues = repmat(linspace(1,max(max(nb)),max(max(nb))),3,1);
uPastValues = uPastValues+[1,10,100]'*70;
dPastValues = linspace(1,max(max(nc)),max(max(nc)))+500;
deltaMV = 0.1*linspace(1,3,3);
deltaMV = [deltaMV (deltaMV(1:3)+100)];
x = [1 2 3 deltaMV];
lambda = x;
q = x;
w = x;
nTrees = ones(1,3)*100;
nPredictors = 10*ones(1,3);
N_y = 3;
qMatrix = ones(numOutputs,N_y-1);
wMatrix = 40*ones(numOutputs,N_y);
lambdaMatrix = 100*ones(numOutputs,N_y);
yHighLims = 40*ones(numOutputs,N_y);
yLowLims = 20*ones(numOutputs,N_y);
yLims = cat(3,yLowLims,yHighLims);
[caca1 caca2] = mpc_constraint_generator(x,qMatrix,lambdaMatrix,wMatrix,yLims,...
                                              yPastValues,uPastValues,dPastValues,...
                                              nTrees,nPredictors,...
                                              na,nb,nc)