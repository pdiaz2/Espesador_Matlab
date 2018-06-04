function predictorNames = generate_predictorNames(predictorNamesUArray,predictorNamesYArray,...
                                        na,nb)
[numInputs,~] = size(predictorNamesUArray);
[numOutputs,~] = size(predictorNamesYArray);
predictorNamesU = {};
for u = 1:numInputs
   d = nb(u);
   predictorNamesU = [predictorNamesU predictorNamesUArray{u,1:d}];
end

for y = 1:numOutputs
   d = na(y);
   predictorNames{y} = [predictorNamesYArray{y,1:d} predictorNamesU];
end
