clear;
clc;
close all;
%% CSV Reading
csvname = 'todos_5minPreproc.csv';
adjustCol = 1;
adjustRow = 1;
tau_R = 5;
M = dlmread(csvname,',',adjustRow,adjustCol);
% CV1: Torque ---> e_7110_ot_1003 -> 16
% "CV2": Underflow Densimeter ---> e_7110_dt_1030 -> 4
% CV2: Underflow Concentration---> e_7110_dt_1030_solido -> 5
% "CV3": Bed Level ---> e_7110_lt_1009_s4 -> 10
% "CV4": Clarity Level ---> e_7110_lt_1009 -> 8
% "CV5": Interface Level ---> e_7110_lt_1009_s2 -> 9
% "CV6": Mud Level ---> e_7110_lt_1009_s3 -> 12
% "CV7": BedPressure ---> e_7110_pt_1010 -> 11

% MV1: Underflow rate ---> e_7110_ft_1030 -> 7
% MV2: Dosification Flux ---> e_7120_ft_1001 -> 14
% MV3: Dilution Flux ---> e_7120_ft_1002 -> 13

% DV1: Feedflow rate ---> e_7110_ft_1012 -> 6
% "DV2": Densimeter Feed ---> e_7110_dt_1011 -> 2
% DV2: Feed Concentration ---> e_7110_dt_1011_solido -> 3

% NADA: Level Flocc Tank ---> e_7120_lit_001 -> 15

nVars = size(M,2);
torqueIndex = 16;
Cp_uIndex = 5;
bedLevelIndex = 10;
clarityLevelIndex = 8;
interfaceLevelIndex = 9;
mudLevelIndex = 12;
bedPressureIndex = 11;

Q_uIndex = 7;
Qff_dosisIndex = 14;
Qff_dilutLevel = 13;

Q_fIndex = 6;
Cp_fIndex = 3;

varIndexes = [torqueIndex Cp_uIndex bedLevelIndex clarityLevelIndex ...
            interfaceLevelIndex mudLevelIndex bedPressureIndex ...
            Q_uIndex Qff_dosisIndex Qff_dilutLevel ...
            Q_fIndex Cp_fIndex
            ];
nVars = length(varIndexes);
varNames = {'Torque', 'Cp_u', 'BdLvl' ,'ClrtLvl', 'IntfLvl', 'MudLvl', 'BedPress',...
            'Q_u', 'Qff_dos' ,'Qff_dil', ...
            'Q_f' ,'Cp_f'};
time = 0:(size(M,1)-1);
for var = 1:nVars
    figure
    plot(time*5/60,M(:,varIndexes(var)-adjustCol))
    xlabel('Hours  [hr]')
    legend(varNames{var})
    grid on
end

SimResults.groupBy = 60;

for cv = 1:7
    SimResults.CV(cv).Name = varNames{cv};
    SimResults.CV(cv).GroupedTimeSeries = M(:,varIndexes(cv)-adjustCol)';
end

for mv = 1:3
    SimResults.MV(mv).Name = varNames{mv+7};
    SimResults.MV(mv).GroupedTimeSeries = M(:,varIndexes(mv+7)-adjustCol)';
end

for dv = 1:2
    SimResults.DV(dv).Name = varNames{dv+10};
    SimResults.DV(dv).GroupedTimeSeries = M(:,varIndexes(dv+10)-adjustCol)';
end

save('Abril_A_Julio_Real_1708.mat','SimResults');
