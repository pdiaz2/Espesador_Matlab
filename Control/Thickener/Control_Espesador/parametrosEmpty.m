%CT Numerical Simulation for Variable Cross-Section
% clear
addpath('functions')  

global Ddata Cdata H B R R1 R2 varphi Delta A v_max n_rz rho_f rho_s alpha ...
    beta phi_c phi_max g jf

%Parametros de espesador

B = 12; % meters, altura entre la alimentacion y descarga
H = 2.5; % meters, altura entre la recuperacion de agua/rebalse y la alimentacion
R = 8.5;
R1 = 1.8;
R2 = 3.6;
varphi = pi/6;
Delta = 0.5;
N = 210; % numero de muestras espaciales (division espacial del espesador)
M = 10000; % numero de muestras utilizadas para la integral numerica
% Dt = 0.003;
Dt = 1;

% Parametros Modulo Espesador
g = 9.81;
phi_c = 0.2; % volume fraction of solids
phi_max = 1; % volume fraction of solids
v_max = 25/3600; % m/s
n_rz = 9.65; %
rho_f = 1000; %kg/m3
rho_s = 2750; %kg/m3
alpha = 6.3; % Pa
beta = 15;
phi_f = weight_to_volume_fraction(0.1,rho_s,rho_f);

% Parametros Modulo Floculacion
b0 = -1.3102;
b1 = 25.8137;
b2 = 40.3845;
b3 = 78.1795;
b4 = 1000;

% Parametros Modulo Yield Stress
c0 = 1.6005e+03;
c1 = -512.8365;
theta = 0.2;
kappa = 220.97; %model parameter 
m = 8.68; %modelo parameter

% Parametros Modulo Torque de Rastrillo
Zr1 = 7;
Zr2 = B;
a1 = 29.6547;
a2 = 1.8198;
a3 = 13.2250;

% Initiation of Simulation

Dz = (B+H)/N;

j = (-2:N+2)';
jf = ceil(H/Dz);
z = (j+1/2)*Dz-H;
Z = (-(H+Dz):Dz:(B+Dz))';
Cdata = linspace(0,phi_max,M);
Ddata = zeros(size(Cdata));

% Codigo para calcular integral numerica por primera vez

% for i=1:length(Cdata)
%     
%     if(Cdata(i)>=phi_c)
%         Ddata(i) = integral(@(x)d_comp(x)./x,phi_c,Cdata(i), 'WayPoints', Cdata(1:i));
%     end
% 
% end
% save('compression_flux_data.mat','Cdata','Ddata')


% Cargar los valores obtenidos para la integral numerica 
load('compression_flux_data.mat')

% 1. varying cross-section; 2. semi-constant cross-section; 
% 3. constant cross-section
opt = 1;
% figure(3); plot(z,cross_section(z,opt),'x-')
% xlabel('hight with respect to feed level [m]'); ylabel('thickener cross section [m^2]')

[A, y, Cz] = cell_average(z,Dz,N,opt,Z,Zr1,Zr2); % vector with average cross section area of layer j and staggered discontinuity vector

lambda = 1./(Dz*A);
mu = lambda/Dz;

k_f = 1;
CLF = CLF_condition1(Dt,Dz,898.56/3600,k_f);

disp(['CLF condition factor: ',num2str(CLF)])
%Solucion Inicial
%load('initial_solution.mat');
phi0 = zeros(N+3,1);
w0 = zeros(N+3,1);
u10 = zeros(N+3,1);
u20 = zeros(N+3,1);
u30 = zeros(N+3,1);

%Ganancia de producto para obtener los valores obervables
L = zeros(2,N+3);
L(1,2) = 1;
L(2,end-1) = 1;
% % % % % % % % %CT Numerical Simulation for Variable Cross-Section
% % % % % % % % % clear all
% % % % % % % % addpath('functions')  
% % % % % % % % 
% % % % % % % % global Ddata Cdata H B R R1 R2 varphi Delta A v_max n_rz rho_f rho_s alpha ...
% % % % % % % %     beta phi_c phi_max g jf
% % % % % % % % 
% % % % % % % % %Parametros de espesador
% % % % % % % % 
% % % % % % % % B = 12; % meters, altura entre la alimentacion y descarga
% % % % % % % % H = 4; % meters, altura entre la recuperacion de agua/rebalse y la alimentacion
% % % % % % % % R = 8.5;
% % % % % % % % R1 = 1.8;
% % % % % % % % R2 = 3.6;
% % % % % % % % varphi = pi/6;
% % % % % % % % Delta = 0.5;
% % % % % % % % N = 210; % numero de muestras espaciales (division espacial del espesador)
% % % % % % % % M = 10000; % numero de muestras utilizadas para la integral numerica
% % % % % % % % Dt = 1;
% % % % % % % % 
% % % % % % % % % Parametros Modulo Espesador
% % % % % % % % g = 9.81;
% % % % % % % % phi_c = 0.23; % volume fraction of solids
% % % % % % % % phi_max = 1; % volume fraction of solids
% % % % % % % % v_max = 25/3600; % m/s
% % % % % % % % n_rz = 10.5; %
% % % % % % % % rho_f = 1000; %kg/m3
% % % % % % % % rho_s = 2750; %kg/m3
% % % % % % % % alpha = 6; % Pa
% % % % % % % % beta = 16.5;
% % % % % % % % phi_f = weight_to_volume_fraction(0.1,rho_s,rho_f);
% % % % % % % % 
% % % % % % % % % Parametros Modulo Floculacion
% % % % % % % % b0 = -1.3102;
% % % % % % % % b1 = 25.8137;
% % % % % % % % b2 = 40.3845;
% % % % % % % % b3 = 78.1795;
% % % % % % % % b4 = 1000;
% % % % % % % % 
% % % % % % % % % Parametros Modulo Yield Stress
% % % % % % % % c0 = 1.6745e3;
% % % % % % % % c1 = 0.28*-7.7543e3;
% % % % % % % % theta = 0.2;
% % % % % % % % kappa = 220.97; %model parameter 
% % % % % % % % m = 8.68; %modelo parameter
% % % % % % % % 
% % % % % % % % % Parametros Modulo Torque de Rastrillo
% % % % % % % % Zr1 = 7;
% % % % % % % % Zr2 = B;
% % % % % % % % a1 = 61.8;
% % % % % % % % a2 = 2.8;
% % % % % % % % a3 = 13.4;
% % % % % % % % 
% % % % % % % % % Initiation of Simulation
% % % % % % % % 
% % % % % % % % Dz = (B+H)/N;
% % % % % % % % 
% % % % % % % % j = (-2:N+2)';
% % % % % % % % jf = ceil(H/Dz);
% % % % % % % % z = (j+1/2)*Dz-H;
% % % % % % % % Z = (-(H+Dz):Dz:(B+Dz))';
% % % % % % % % Cdata = linspace(0,phi_max,M);
% % % % % % % % Ddata = zeros(size(Cdata));
% % % % % % % % 
% % % % % % % % % Codigo para calcular integral numerica por primera vez
% % % % % % % % %{
% % % % % % % % for i=1:length(Cdata)
% % % % % % % %     
% % % % % % % %     if(Cdata(i)>=phi_c)
% % % % % % % %         Ddata(i) = integral(@(x)d_comp(x)./x,phi_c,Cdata(i), 'WayPoints', Cdata(1:i));
% % % % % % % %     end
% % % % % % % % 
% % % % % % % % end
% % % % % % % % save('compression_flux_data.mat','Cdata','Ddata')
% % % % % % % % %}
% % % % % % % % 
% % % % % % % % % Cargar los valores obtenidos para la integral numerica 
% % % % % % % % load('compression_flux_data.mat')
% % % % % % % % 
% % % % % % % % %{
% % % % % % % % figure(1)
% % % % % % % % subplot(2,2,1)
% % % % % % % % plot(Cdata,d_comp(Cdata)); 
% % % % % % % % xlabel('Concentracion volumetrica de solidos (v/v)'); ylabel('Compresibilidad del sedimento (Pa)');
% % % % % % % % subplot(2,2,2)
% % % % % % % % plot(Cdata,Ddata)
% % % % % % % % xlabel('Concentracion volumetrica de solidos (v/v)'); ylabel('Primitica de la compresibilidad del sedimento (Pa)');
% % % % % % % % subplot(2,2,3)
% % % % % % % % plot(Cdata,v_hs(Cdata))
% % % % % % % % xlabel('Concentracion volumetrica de solidos (v/v)'); ylabel('velocidad de sedimentacion impedida (m/s)');
% % % % % % % % subplot(2,2,4)
% % % % % % % % plot(Cdata,Cdata.*v_hs(Cdata))
% % % % % % % % xlabel('Concentracion volumetrica de solidos (v/v)'); ylabel('Funcion de densidad de flujo (m/s)');
% % % % % % % % figure(2)
% % % % % % % % c = 0:0.1:40;
% % % % % % % % plot(c,b0+b1*(b2-c).*exp(-(c-b3).^2/b4))
% % % % % % % % xlabel('Dosis de floculante (gpt)'); ylabel('Velocidad inicial de sedimentacion (m/h)');
% % % % % % % % %}
% % % % % % % % 
% % % % % % % % %1. varying cross-section; 2. semi-constant cross-section; 
% % % % % % % % %3. constant cross-section
% % % % % % % % opt = 1;
% % % % % % % % % figure(3); plot(z,cross_section(z,opt),'x-')
% % % % % % % % % xlabel('hight with respect to feed level [m]'); ylabel('thickener cross section [m^2]')
% % % % % % % % 
% % % % % % % % [A, y, Cz] = cell_average(z,Dz,N,opt,Z,Zr1,Zr2); % vector with average cross section area of layer j and staggered discontinuity vector
% % % % % % % % 
% % % % % % % % lambda = 1./(Dz*A);
% % % % % % % % mu = lambda/Dz;
% % % % % % % % 
% % % % % % % % k_f = 1;
% % % % % % % % CLF = CLF_condition1(Dt,Dz,898.56/3600,k_f);
% % % % % % % % 
% % % % % % % % disp(['CLF condition factor: ',num2str(CLF)])
% % % % % % % % 
% % % % % % % % %Solucion Inicial
% % % % % % % % %load('initial_solution.mat');
% % % % % % % % % load('SS_UF73_FF25.mat');
% % % % % % % % % Uncomment below to start with empty thickener
% % % % % % % % phi0 = zeros(N+3,1);
% % % % % % % % w0 = zeros(N+3,1);
% % % % % % % % u10 = zeros(N+3,1);
% % % % % % % % u20 = zeros(N+3,1);
% % % % % % % % u30 = zeros(N+3,1);
% % % % % % % % 
% % % % % % % % %Ganancia de producto para obtener los valores obervables
% % % % % % % % L = zeros(2,N+3);
% % % % % % % % L(1,2) = 1;
% % % % % % % % L(2,end-1) = 1;