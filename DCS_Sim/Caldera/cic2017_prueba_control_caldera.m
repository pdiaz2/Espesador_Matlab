% Programa principal para prueba de controladores en el
% Concurso de Ingeniería de Control 2017 (CIC2017): Fase 1
% Autores: F. Morilla y C. Rodríguez, Octubre 2016

clear
close all
warning('off')

% Incializa el modelo y las condiciones de simulación
load('cic2017_fase1_boiler.mat')
load('cic2017_fase1_entradas.mat')
load('cic2017_fase1_controlador.mat');

% Prepara el vector de tiempos y ejecuta la simulación
vt = 0:ts:tend; % Time vector (s)
disp('Simulando ......, espere a que presente los resultados ')
[t,estados,registros] = sim('cic2017_boiler_control',vt);

% Guarda resultados para análisis y evaluación
save cic2017_caso_evaluar.mat t registros 

% Presenta y evalúa resultados 
cic2017_evalua_control_caldera