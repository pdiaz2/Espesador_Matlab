function [ premOutputs ] = prem( mf1Outputs,mf2Outputs )
%Computs the certainty of the premise made by certainty of two fuzzy sets
premOutputs = zeros(3,5);
for torqueValues = 1:3
    for yieldValues = 1:5
        premOutputs(torqueValues,yieldValues) = min(mf1Outputs(torqueValues),mf2Outputs(yieldValues));
    end
end

end

