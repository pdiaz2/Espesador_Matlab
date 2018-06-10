clear all;
clc;
close all;
% DV identical in all experiments
%% UF 75 FF 25
% Initial Parameters for steady state
Qu_0Vector = [111];
gpt_0Vector = [26];
for q = 1:length(Qu_0Vector)
    Qu_0 = Qu_0Vector(q); % m3/s.
    gpt_0 = gpt_0Vector(1);
%     run generateSteadyState.m
%     clearvars -except q Qu_0Vector gpt_0Vector;
%     Qu_0 = Qu_0Vector(q); % m3/s.
%     gpt_0 = 25;
    stepsMVToGenerate = [1 0];
    stepSizes = [-40:5:40];
    run testOpenLoop_0901.m;
    clearvars -except q Qu_0Vector gpt_0Vector;
    disp('Se terminaron los escalones UF de la iteración')
    disp(q)
    Qu_0 = Qu_0Vector(q); % m3/s.
    gpt_0 = gpt_0Vector(1);
    stepsMVToGenerate = [0 1];
    stepSizes = [-10:2:10];
    run testOpenLoop_0901.m;
    clearvars -except q Qu_0Vector gpt_0Vector;
    disp('Se terminaron los escalones FF de la iteración')
    disp(q)
end
% clear all;
% disp('Puntos de operacion de floculante')
% for index = 1:length(gpt_0Vector)
%     Qu_0 = 75; % m3/s.
%     gpt_0 = gpt_0Vector(index);
%     run generateSteadyState.m
%     clearvars -except index Qu_0Vector gpt_0Vector;
%     Qu_0 = 75; % m3/s.
%     gpt_0 = gpt_0Vector(index);
%     % [underflow flocculant]
%     stepsMVToGenerate = [1 0];
%     stepSizes = [-10:10:20];
%     run testOpenLoop_0901.m;
%     clearvars -except index Qu_0Vector gpt_0Vector;
%     disp('Se terminaron los escalones UF de la iteración')
%     disp(index)
%     Qu_0 = 75; % m3/s.
%     gpt_0 = gpt_0Vector(index);
%     % [underflow flocculant]
%     stepsMVToGenerate = [0 1];
%     stepSizes = [-10:3:10];
%     run testOpenLoop_0901.m;
%     clearvars -except index Qu_0Vector gpt_0Vector;
%     disp('Se terminaron los escalones FF de la iteración')
%     disp(index)
% end
