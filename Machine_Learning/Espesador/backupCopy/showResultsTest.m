%SHOWRESULTSTEST Plots results of RF
clear all;
close all;
clc;
%%
load('ResultsRFBigTest_0204.mat');
load('testData.mat');
load('RF1.mat');
load('RF2.mat');
load('RF3.mat');
minMSE_Y = -1*ones(3,4);
minMSE_Y(:,4) = -minMSE_Y(:,4)*1e6;
maxCorr_Y = -2*ones(3,4);
minOOBError = minMSE_Y;
for n = 1:numSubSets
    for dx = 1:backshiftCasesU
        for dy = 1:backshiftCasesY
            for output = 1:3
                minMSECandidate = ML_Results(n,dx,dy).Results(output).MSE;
                maxCorrCandidate = ML_Results(n,dx,dy).Results(output).Correlation;
                minOOBErrorCandidate = ML_Results(n,dx,dy).Results(output).OOBError(100);
                if minMSECandidate < minMSE_Y(output,4)
                    minMSE_Y(output,1:3) = [n dx dy];
                    minMSE_Y(output,4) = minMSECandidate;
                else
                    
                end
                if maxCorrCandidate > maxCorr_Y(output,4)
                    maxCorr_Y(output,1:3) = [n dx dy];
                    maxCorr_Y(output,4) = maxCorrCandidate;
                else
                    
                end
                if minOOBErrorCandidate < minOOBError(output,4)
                    minOOBError(output,1:3) = [n dx dy];
                    minOOBError(output,4) = minOOBErrorCandidate;
                else
                    
                end
            end
        end
    end
end
% Y1Predicted = predict(RandomForestY1,InputDataFinalY1);
% Y2Predicted = predict(RandomForestY2,InputDataFinalY2);
% Y3Predicted = predict(RandomForestY3,InputDataFinalY3);
% figure
% plot(Y1Predicted)
% hold on
% plot(results(1,3,8).outputs(1+6*5:end,1))
% legend('Presión de Vapor Modelo','Presión de Vapor Random Forest')
% hold off
% 
% 
% figure
% plot(Y2Predicted)
% hold on
% plot(results(1,3,8).outputs(1+2*5:end,2))
% legend('Exceso de Oxígeno Modelo','Exceso de Oxígeno Random Forest')
% hold off
% 
% figure
% plot(Y3Predicted)
% hold on
% plot(results(1,3,8).outputs(1+3*5:end,3))
% legend('Nivel de Agua Modelo','Nivel de Agua Random Forest')
% hold off
