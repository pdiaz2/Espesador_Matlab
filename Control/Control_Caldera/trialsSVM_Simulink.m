load ionosphere
n = numel(Y)
Y = strcmp(Y,'g');
prsntX = X(1:300,:);
prsntY = Y(1:300);
ftrX = X(301:end,:);
ftrY = Y(301:end);
Mdl = fitcsvm(prsntX,prsntY,'Standardize',true);
saveCompactModel(Mdl,'SVMIonosphere');

SimMdlName = 'slexSVMIonospherePredictExample';
open_system(SimMdlName);

sim(SimMdlName);

labelsSL = svmlogsout.getElement(1).Values.Data;
scoresSL = svmlogsout.getElement(2).Values.Data;
%%
load fisheriris
inds = ~strcmp(species,'setosa');
X = meas(inds,3:4);
Y = species(inds);
Mdl = fitcsvm(X,Y);
saveCompactModel(Mdl,'SVMModel');
type predictLabelsSVM.m % Display contents of predictLabelsSVM.m file
%%
codegen predictLabelsSVM.m -args {X} -report
labels1 = resubPredict(Mdl);
labels2 = predictLabelsSVM(X);
labels3 = predictLabelsSVM_mex(X);
verifyMEX = isequal(labels1,labels2,labels3)
