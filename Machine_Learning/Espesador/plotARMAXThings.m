close all;
load('ARMAX_MDL_Sim_Noise_k5_na5_nb4_nc3_1408');
armaxModelGood = armaxModel;
load('ARMAX_MDL_Sim_Noise_k5_na2_nb2_nc3_1408');
% h = iopzplot(armaxModelGood,armaxModel);
figure
h = iopzplot(armaxModelGood);
setoptions(h,'IOGrouping','none')
showConfidence(h);
print('pzmap','-depsc')

figure
h = iopzplot(armaxModel);
setoptions(h,'IOGrouping','none')
showConfidence(h);
figure
l = bodeplot(armaxModel)
setoptions(l,'Xlim',[1e-6,1e-3],'PhaseVisible','off');
showConfidence(l)
print('bodeplot','-depsc')