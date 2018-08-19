clear;
clc;
close all;
%% CSV Reading
month = 'Agosto';
csvname = ['Todos_' month '_BF.csv'];
lengthFile = [2674800 2592000 2678400 2505600];
rowAdjustment = 7*24*60*60+1; % Numbering starts from 0 in dlmread
endOfFile = 2674800;
M = dlmread(csvname,';',[1 3 endOfFile 15]);
% MV1: Underflow Rate --> 7110_FT_1030 (m3/hr) --> 6
% MV2: GPT --> No_Tag --> Excel (interpolate every hour, add noise every k*Dt ?)
% "MV"3: AguaDosificacion --> 7120_FT_1001 --> 12 equiv floccFlow
% CV1: Torque --> 7110_OT_1003 --> 15
% CV2: Underflow Concentration --> 7110_DT_1030_SOLIDO -> 4
% CV3: Cama --> 7110_LT_1009_S4 --> 10
% CV4: Barro --> 7110_LT_1009_S3 --> 9
% DV1: FeedFlow Rate --> 7110_FT_1012 --> 5
% DV2: Feed Concentration --> Excel
% DV3: Granulometrics --> Excel and understanding
% Assuming residence Time = 9 hrs
torqueIndex = 15;
underflowIndex = 6;
Cp_uIndex = 4;
bedLevelIndex = 10;
mudIndex = 9;
Q_fIndex = 5;
floccFlowIndex = 12;
dilutionIndex = 13;
% [CV MV DV] = [Torque Cp_u BedLevel UnderFlow FloccFlow Dilution FeedFlow]
BigData.varsIndex = [torqueIndex Cp_uIndex bedLevelIndex underflowIndex floccFlowIndex dilutionIndex Q_fIndex];
BigData.varsNames = {'Torque','Concentración de Descarga','Interfaz','Flujo de Descarga','Flujo de Floculante'...
    ,'Agua de Dilución','Flujo de Alimentación'};
numVars = length(BigData.varsIndex);
[numSamples garbage] = size(M);
for i = 1:numVars
    figure
    if i == 3
        plot(12-M(:,BigData.varsIndex(i)-2))
    else
        plot(M(:,BigData.varsIndex(i)-2))
    end
    legend(BigData.varsNames{i})
end
BigData.RawData = M(:,BigData.varsIndex-2)';
% BigData.RawData(3,:) = 12*ones(1,numSamples)-BigData.RawData(3,:);

run filterData.m
