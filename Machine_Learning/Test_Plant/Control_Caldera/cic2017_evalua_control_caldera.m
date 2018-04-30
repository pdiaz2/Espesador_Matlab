% Programa para evaluar controladores en el
% Concurso de Ingeniería de Control 2017 (CIC2017): Fase 1
% Autores: F. Morilla y C. Rodríguez, Octubre 2016

clear
close all

% Carga resultados de la simulación correspondiente al controlador que 
% hace de referencia
load cic2017_caso_referencia.mat
%load cic2017_caso1_evaluar.mat
registrosr=registros;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Carga resultados de la simulación con un controlador peor
% load cic2017_caso_evaluar_malo.mat
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Carga resultados de la simulación correspondiente al controlador que 
% se quiere evaluar
load cic2017_caso_evaluar.mat

% Presenta los resultados con escala temporal en minutos
vt=t/60;

figure(1)
subplot(3,1,1)
plot(vt,registrosr(:,5),vt,registros(:,5),vt,registros(:,8), 'LineWidth',1)
title('Presión de vapor y consigna (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

subplot(3,1,2)
plot(vt,registrosr(:,6),vt,registros(:,6),vt,registros(:,9), 'LineWidth',1)
title('Oxígeno en exceso y consigna (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

subplot(3,1,3)
plot(vt,registrosr(:,7),vt,registros(:,7),vt,registros(:,10), 'LineWidth',1)
title('Nivel de agua y consigna (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

figure(2)
subplot(3,1,1)
stairs(vt,[registrosr(:,2) registros(:,2)],'LineWidth',1)
title('Combustible (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

subplot(3,1,2)
stairs(vt,[registrosr(:,3) registros(:,3)],'LineWidth',1)
title('Aire (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

subplot(3,1,3)
stairs(vt,[registrosr(:,4) registros(:,4)],'LineWidth',1)
title('Agua (%)')
xlabel('Tiempo (min)')
legend('Caso referencia','Caso a evaluar')
grid

% Evualúa la efectividad relativa del cambio de controlador
J=cic2017_evaluaJCaldera(t,registrosr,registros);
disp(['El controlador evaluado tiene un J igual a ' sprintf('%0.4f',J)])