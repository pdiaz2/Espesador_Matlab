function expData = ml_select_experiment(tData,t,numSamplesPerExp)
    expData = tData(1+(t-1)*numSamplesPerExp:t*numSamplesPerExp,:);
end