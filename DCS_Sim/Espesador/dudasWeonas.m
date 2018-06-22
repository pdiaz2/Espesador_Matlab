init_sys = idpoly([1 -0.99],[1 -1 0.2],[]);
opt = simOptions('AddNoise',false);
u = iddata([],[1:6]',1);
data = sim(init_sys,u,opt);
data.InputData = u.InputData;
data.OutputData
% data.OutputData(2) = 10;
s.Input = u.InputData(1);
s.Output = data.OutputData(1);
opt.InitialCondition = s;
u_1 = iddata([],[2:6]',1);
data_1 = sim(init_sys,u_1,opt);
data_1.OutputData
K = 2;
[yp,x0,sys_pred] = predict(init_sys,data,K);
yp.OutputData
% caca = ss2tf(sys_pred.A,sys_pred.B,sys_pred.C,sys_pred.D);s
% K = 0 is simualtion and yp(t) = data.OutputData(t) (y(t))
% init_sys = idpoly([1 -0.99],[],[1 -1 0.2]);
% opt = simOptions('AddNoise',true);
% u = iddata([],zeros(400,0),1);
% data = sim(init_sys,u,opt);
% 
% na = 1;
% nb = 2;
% sys = armax(data(1:200),[na nb]);
% 
% K = 4;
% yp = predict(sys,data,K);