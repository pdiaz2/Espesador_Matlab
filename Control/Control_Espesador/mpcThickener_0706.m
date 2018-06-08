clear all;
clc;
close all;
%% 
N_y = 10;
N_u = 3;
Dt = 1;
simTime = 1.4e6;
groupBy = 60; % This should be automatic
tau_R = 10*groupBy;
tau_C = 2*tau_R;
stepInDV = false;
imprint = false;
controlClosedLoop = 1;
startPlotTime = 1; %Wait for noise filter to stabilize
dateMatFileStr = '0706';
figurePath = 'figures\trialsTuningMPC\';
%%
%% Reference Values Struct
wValuesStruct.delta = [0 0.01 1.5 0];
wValuesStruct.changeBool = logical([0 1 1 0]);
wValuesStruct.shape = {'step','step','step','step'};
wValuesStruct.timeToChange = [-1 floor(simTime/22) floor(simTime/2) -1];
wValuesStruct.addNoiseBool = false; %always false for w
%% Sensor Values Struct
yValuesStruct.delta = [0 0 0 0];
yValuesStruct.changeBool = logical([0 0 0 0]);
yValuesStruct.shape = {'step','step','step','step'};
yValuesStruct.timeToChange = [-1 -1 floor(simTime/22) -1];
yValuesStruct.addNoiseBool = false;
%%
delayParametersFile = ['delayParameters_' dateMatFileStr '.mat'];
fixedParametersFileName = ['mpc_fixed_parameters_' dateMatFileStr '.mat'];
designParametersFileName = ['mpc_design_parameters_' dateMatFileStr '.mat'];
parametersFileArray = {delayParametersFile,fixedParametersFileName,designParametersFileName};
%% Generate parameters
% Fixed parameters
mpc_generate_fixed_parameters(dateMatFileStr,stepInDV,simTime);
% Design parameters
mpc_generate_design_parameters(dateMatFileStr,N_y,N_u);
%% Filter Design
bFilter = fir1(10,0.8,kaiser(11,6));
% freqz(bFilter,1);
bFilter = 1;
%% Load Parameters
for strFile = 1:3
   load(parametersFileArray{strFile}); 
end
%% Reference for MPC
wValuesStruct.IC = Y0;
yRef = mpc_generate_input(wValuesStruct);
%% Sensor Input for MPC
yValuesStruct.IC = Y0;
ySensor = mpc_generate_input(yValuesStruct);
%%
rng(120938103);
tic;
sim('mpc_rf_boiler.slx');
toc;