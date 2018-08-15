function predictorNames = ml_generate_predictorNames(predictorNamesUArray,predictorNamesYArray,...
                                        na,nb)
% [numInputs,~] = size(predictorNamesUArray);
% [numOutputs,~] = size(predictorNamesYArray);

numInputs = size(nb,2);
numOutputs = size(na,2);
predictorNamesU = {};
for u = 1:numInputs
    d = nb(u);
    if isempty(predictorNamesUArray)
        predictorNamesU = [predictorNamesU {}];
    else
        predictorNamesU = [predictorNamesU predictorNamesUArray{u,1:d}];
    end
end

for y = 1:numOutputs
   d = na(y);
   if isempty(predictorNamesYArray)
       predictorNames{y} = [{} predictorNamesU];
   else
       predictorNames{y} = [predictorNamesYArray{y,1:d} predictorNamesU];
   end
   
end
