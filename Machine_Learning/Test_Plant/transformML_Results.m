
dimensions = size(ML_Results);
for a = 1:dimensions(1)
    for b = 1:dimensions(2)
        for c = 1:dimensions(3)
            for y = 1:3
                Results.Output(y).MSE(a,b,c) = ML_Results(a,b,c).Results(y).MSE;
                Results.Output(y).Correlation(a,b,c) = ML_Results(a,b,c).Results(y).Correlation;
                Results.Output(y).OOBError(a,b,c) = ML_Results(a,b,c).Results(y).OOBError(end);
            end
%             Results.N4Fit.AIC(a,b,c) = ML_Results(a,b,c).N4Fit.AIC;
%             Results.N4Fit.MSE(a,b,c) = ML_Results(a,b,c).N4Fit.MSE;
%             Results.N4Horizon(a,b,c,:) = ML_Results(a,b,c).N4Horizon;
        end
    end
end
save('ResultsRF_1404_step.mat','Results','-append');