%SHOWRESULTSTEST Plots results of RF
clear all;
close all;
clc;
%%
load('ResultsRF_Noisy_0106_saw.mat');
ml_Type = 'RF';
%%
ResultsStupidFix = fix_stupid_me(ML_Results,ml_Type,NameOutputs);
J = Evaluate_Performance(ResultsStupidFix,ml_Type,NameInputs,NameOutputs);
[numOutputs,J_i,garbage] = size(J);

if strcmp(ml_Type,'N4SID')
    fullSize = size(ResultsStupidFix.Output(1).MSE);
    dims = length(fullSize);
    J_Handy = zeros(numOutputs,dims,J_i);
    for j_i = 1:J_i
        for y = 1:numOutputs
            % It would be ideal to create I_i according to dims, but it
            % cannot be done
            [I1,I2,I3] = ind2sub(size(ResultsStupidFix.Output(1).MSE),J(y,j_i,1));
            J_Handy(y,:,j_i) = [I1 I2 I3];
        end
    end
elseif strcmp(ml_Type,'ARMAX')
    fullSize = size(ResultsStupidFix.Output(1).MSE);
    dims = length(fullSize);
    J_Handy = zeros(numOutputs,dims,J_i);
    for j_i = 1:J_i
        for y = 1:numOutputs
            % It would be ideal to create I_i according to dims, but it
            % cannot be done
            [I1,I2,I3,I4,I5,I6,I7] = ind2sub(size(ResultsStupidFix.Output(1).MSE),J(y,j_i,1));
            J_Handy(y,:,j_i) = [I1 I2 I3 I4 I5 I6 I7];
        end
    end
elseif strcmp(ml_Type,'RF')
    fullSize = size(ResultsStupidFix.Output(1).MSE);
    dims = length(fullSize);
    J_Handy = zeros(numOutputs,dims,J_i);
    for j_i = 1:J_i
        for y = 1:numOutputs
            % It would be ideal to create I_i according to dims, but it
            % cannot be done
            [I1,I2,I3] = ind2sub(size(ResultsStupidFix.Output(1).MSE),J(y,j_i,1));
            J_Handy(y,:,j_i) = [I1 I2 I3];
        end
    end
end


%% Building delayParameters Mat File
delayU = J_Handy(:,2,1);
delayY = J_Handy(:,3,1);
numDV = 1;
numMV = 3;
numInputs = numDV+numDV;
save('delayParameters_2705.mat','delayU','delayY','tau_R','numDV','numInputs',...
     'numOutputs','numMV','UBackshiftMatrix','YBackshiftMatrix');
%% Plotting
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
%% Functions
function [JMatrix] = Evaluate_Performance(Results,typeML,nameInputs,nameOutputs)
%  Evaluate Performance : Evaluates J-performance of different ML Models
%  Returns (NumOutputs,Criterions,2) Matrix
%  (:,:,1) holds the index (in full vector form) of min/max values for each output and each criteria J_i
%  (:,:,2) hold the actual value of the J_i criteria
%  Some criteria are global, so there should be a submatrix in ([2:numOutputs],[global:end],1) of just -1
    dimArray = size(Results);
    totalDims = length(dimArray);
    [garbage,numOutputs] = size(nameOutputs);
    [garbage,numInputs] = size(nameInputs);
    if strcmp(typeML,'RF')
        % Negative numbers for dimensions
        % Huge numbers for MSE
        JDimensions = 3;
    elseif strcmp(typeML,'N4SID')
        JDimensions = 5;
    elseif strcmp(typeML,'ARMAX')
        JDimensions = 5;
    end
    JMatrix = -1*ones(numOutputs,JDimensions,2);
    if strcmp(typeML,'RF')
        for y = 1:numOutputs
            for dim = 1:JDimensions
                switch dim
                    case 1
                        [JMatrix(y,dim,2),JMatrix(y,dim,1)] = min(Results.Output(y).MSE(:));
                    case 2
                        [JMatrix(y,dim,2),JMatrix(y,dim,1)] = max(abs(Results.Output(y).Correlation(:)));
                        JMatrix(y,dim,2) = JMatrix(y,dim,2)*sign(Results.Output(y).Correlation(JMatrix(y,dim,1)));
                    case 3
                        [JMatrix(y,dim,2),JMatrix(y,dim,1)] = min(Results.Output(y).OOBError(:));
                end
            end
        end
    elseif strcmp(typeML,'N4SID') || strcmp(typeML,'ARMAX')
        for y = 1:numOutputs
            for dim = 1:JDimensions
                switch dim
                    case 1
                        [JMatrix(y,dim,2),JMatrix(y,dim,1)] = min(Results.Output(y).MSE(:));
                    case 2
                        [JMatrix(y,dim,2),JMatrix(y,dim,1)] = max(abs(Results.Output(y).Correlation(:)));
                        JMatrix(y,dim,2) = JMatrix(y,dim,2)*sign(Results.Output(y).Correlation(JMatrix(y,dim,1)));
                    case 3
                        [JMatrix(1,dim,2),JMatrix(1,dim,1)] = min(Results.Fit.FPE(:));
                    case 4
                        [JMatrix(1,dim,2),JMatrix(1,dim,1)] = min(Results.Fit.AIC(:));
                    case 5
                        [JMatrix(1,dim,2),JMatrix(1,dim,1)] = min(Results.Fit.MSE(:));
                end
            end
        end
    end
%     end
end

function [varargout] = Convert_ToN_D(JMatrix,ML_Type)
% Pending
    if strcmp(ML_Type,'RF')
        
    elseif strcmp(ML_Type,'N4SID')|| strcmp(ML_Type,'ARMAX')
        
    end
end

function [ResultsFixedStruct] = fix_stupid_me(ML_Results,typeML,nameOutputs)
    [garbage,numOutputs] = size(nameOutputs);
    [exp,dU,dY] = size(ML_Results.Output(1).Performance);
    if strcmp(typeML,'RF')
        for y = 1:numOutputs
            for e = 1:exp
                for du = 1:dU
                    for dy = 1:dY
                        ResultsFixedStruct.Output(y).MSE(e,du,dy) = ...
                                ML_Results.Output(y).Performance(e,du,dy).MSE(1);
                        ResultsFixedStruct.Output(y).Correlation(e,du,dy) =...
                                ML_Results.Output(y).Performance(e,du,dy).Correlation(1);
                        ResultsFixedStruct.Output(y).OOBError(e,du,dy) = ...
                                ML_Results.Output(y).Performance(e,du,dy).OOBError(1);
                    end
                end
            end
        end
    else
        ResultsFixedStruct = ML_Results;
    end
end
