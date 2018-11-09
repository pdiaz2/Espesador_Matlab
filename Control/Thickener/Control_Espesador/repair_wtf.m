load('ThickenerOperation_Septiembre_BF.mat');
close all
Cp_f.signals.values = wt_f(1:end)'/100;
t = [0:1:length(Cp_f.signals.values(1:400*3600-1))]/3600;
figure
% plot(Cp_f.signals.values)
plot(t, Cp_f.signals.values(1:400*3600))
Cp_f.signals.values(290*3600:320*3600) = max(Cp_f.signals.values(290*3600:320*3600),0.27);
figure
plot(t, Cp_f.signals.values(1:400*3600))
figure
wt_f(290*3600:320*3600) = max(wt_f(290*3600:320*3600),27);
plot(t,wt_f(1:400*3600)')