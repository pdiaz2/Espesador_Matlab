function [inputSet] = ml_rearrange_predSet( inputData, na_y, jAhead, N_y )
% inputSet = [inputData(1:end-jAhead,1:na_y) inputData(1+jAhead:end,1+na_y:end)];
% inputSet = [inputData(1+N_y():end-N_y-jAhead)]
inputSet = [inputData(1+(N_y-1)-jAhead:end-(N_y-1)-jAhead,1:na_y)...
            inputData(1+(N_y-1):end-(N_y-1),1+na_y:end)];
% outputSet = validationOutputs(1+jAhead:end);
end