clear;clc

load('ARMAX_MDL_Sim_3107.mat');
armaxModelForMPC = setmpcsignals(armaxModel,'MV',[4 5],'MD',[1 2 3]);
mpcObj = mpc(armaxModelForMPC);
%% Scaling

%%
save('mpcObjARMAX.mat','mpcObj')
% Could add constructor from here
%% Convert to State-Space Form

% armaxSS = idss(armaxModel,'Ts',armaxModel.Ts);
% A = armaxSS.A;
% n = size(A,1);
% rankA = rank(A);
% % if (rankA == n)
% %     fprintf('System is full rank with rank %d\r\n',rankA)
% % else
% %     fprintf('System is internall unstable with rank %d\r\n',rankA)
% % end
% 
% if (isstable(armaxSS))
%     fprintf('System is internally stable\r\n')
% else
%     fprintf('System is internally unstable\r\n')
% end
% 
% Ob = obsv(armaxSS);
% if rank(Ob) == n
%     fprintf('System is observable\r\n') 
% else
%     fprintf('System is not observable\r\n')
% end
% armaxSS.InputGroup.MV = [3 4];
% armaxSS.InputGroup.MD = [1 2];
% %% Minimal realization
% armaxSSMin = minreal(armaxSS);
% [Abar,Bbar,Cbar,T,k] = ctrbf(armaxSSMin.A,armaxSSMin.B,armaxSSMin.C);
% Auc = Abar(1:n-sum(k),1:n-sum(k))
% 
% [AbarObs,BbarObs,CbarObs,TObs,kObs] = obsvf(armaxSSMin.A,armaxSSMin.B,armaxSSMin.C);
%% Generate MPCObj
% mpcObj = mpc(armaxSS);
%% Save MPCObj
% save('mpcObjARMAX.mat','mpcObj')