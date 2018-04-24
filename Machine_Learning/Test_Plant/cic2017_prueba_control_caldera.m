% Programa principal para prueba de controladores en el
% Concurso de Ingenier�a de Control 2017 (CIC2017): Fase 1
% Autores: F. Morilla y C. Rodr�guez, Octubre 2016

clear
close all
warning('off')

% Incializa el modelo y las condiciones de simulaci�n
load('cic2017_fase1_boiler.mat')
load('cic2017_fase1_entradas.mat')
load('cic2017_fase1_controlador.mat');

% Prepara el vector de tiempos y ejecuta la simulaci�n
vt = 0:ts:tend; % Time vector (s)
disp('Simulando ......, espere a que presente los resultados ')
[t,estados,registros] = sim('cic2017_boiler_control',vt);

% Guarda resultados para an�lisis y evaluaci�n
save cic2017_caso_evaluar.mat t registros 

% Presenta y eval�a resultados 
cic2017_evalua_control_caldera