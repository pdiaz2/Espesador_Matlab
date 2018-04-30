function [ myStepSignal ] = myStepTest( simTime,Dt,stepSize,stepDuration,stepInitTime,makeStep,initialValue,timeGap)
%CREATEOPENLOOPFUNCTION Summary of this function goes here
%   Detailed explanation goes here
myStepSignal.time = linspace(0,simTime,simTime/Dt)';
myStepSignal.signals.dimensions = 1;
myStepSignal.signals.values = initialValue*ones(simTime/Dt,1);
stepInitSample = round(stepInitTime/Dt);
if makeStep
    myStepSignal.signals.values(stepInitSample:stepInitSample+round(stepDuration/Dt)) = initialValue+stepSize;
    myStepSignal.signals.values(stepInitSample+round(stepDuration/Dt)+timeGap:stepInitSample+round(stepDuration/Dt)+timeGap...
        +round(stepDuration/Dt)) = initialValue-stepSize;
else
   % Do nothing 
end
myStepSignal.signals.values = myStepSignal.signals.values(1:length(myStepSignal.time));
end

