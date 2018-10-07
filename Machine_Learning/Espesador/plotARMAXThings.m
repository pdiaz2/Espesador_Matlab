close all;
load('ARMAX_MDL_Sim_Noise_k5_na5_nb4_nc3_1408');
armaxModelGood = armaxModel;
load('ARMAX_MDL_Sim_Noise_k5_na2_nb2_nc3_1408');
% h = iopzplot(armaxModelGood,armaxModel);
armaxModelGood.InputName = {'Feed Rate';
                            'F.S.C.';
                             'U. Flow';
                             'Flocc.'};
armaxModelGood.OutputName = {'Torque';
                              'U.S.C.';
                              'I.L.'};
figure
h = iopzplot(armaxModelGood);
setoptions(h,'IOGrouping','none')
showConfidence(h);
print('pzmap','-depsc')

figure
l = bodeplot(armaxModelGood)
setoptions(l,'Xlim',[1e-6,1e-3],'MagVisible','off');
showConfidence(l)
print('bodeplotPhase','-depsc')

figure
l = bodeplot(armaxModelGood)
setoptions(l,'Xlim',[1e-6,1e-3],'PhaseVisible','off');
showConfidence(l)
print('bodeplotMag','-depsc')