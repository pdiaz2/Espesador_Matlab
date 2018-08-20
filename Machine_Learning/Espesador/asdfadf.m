% Load file manually in Hard_Data\PredictiveModels\
delayU = 6*ones(3,1);
delayY = 6*ones(3,1);
numDV = 2;
numMV = 2;
numOutputs = 3;
numInputs = numDV+numMV;

save('RFParameters_1408.mat','delayU','delayY','controlParamsStruct','numDV','numInputs',...
     'numOutputs','numMV','mlParamsStruct');

