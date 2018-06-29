function pOptions = ml_generate_pOptions(ML_Model,inputTimeSeries,validationOutputs,...
                                        inputOffset,outputOffset)
% Order of model
modelOrder = order(ML_Model);
% Specify initial conditions
ic.Input = repmat(inputTimeSeries(1,:),modelOrder+1000,1); %BigM is indifferent for 
ic.Output = repmat(validationOutputs(1,:),modelOrder+1000,1);
pOptions = predictOptions('InitialCondition',ic,...
                        'InputOffset',inputOffset,...
                        'OutputOffset',outputOffset);
