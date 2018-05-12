%PLOTDATA Plot Input and Outputs
load('testData.mat');
freqsTotal = length(freqs);
wavesTotal = length(waveform);
[makeTotal ~] = size(makeMatrix);
%% Plot
for f = 1:length(freqs)
   for w = 1:length(waveform)
      for m = 1:length(makeMatrix)
        t = results(f,w,m).inputs.time;
        [f w m]
        figure(1)
        subplot(3,1,1)
        plot(t,results(f,w,m).outputs(:,1)','LineWidth',1)
        title('Presión de vapor y consigna (%)')
        xlabel('Tiempo (s)')
        legend('y_1')
        grid

        subplot(3,1,2)
        plot(t,results(f,w,m).outputs(:,2)', 'LineWidth',1)
        title('Oxígeno en exceso y consigna (%)')
        xlabel('Tiempo (s)')
        legend('y_2')
        grid

        subplot(3,1,3)
        plot(t,results(f,w,m).outputs(:,3)', 'LineWidth',1)
        title('Nivel de agua y consigna (%)')
        xlabel('Tiempo (s)')
        legend('y_3')
        grid

%         figure(2)
%         subplot(4,1,1)
%         stairs(t,results(f,w,m).inputs.signals.values(:,2), 'LineWidth',1)
%         title('Combustible (%)')
%         xlabel('Tiempo (s)')
%         legend('MV')
%         grid
% 
%         subplot(4,1,2)
%         stairs(t,results(f,w,m).inputs.signals.values(:,3),'LineWidth',1)
%         title('Aire (%)')
%         xlabel('Tiempo (s)')
%         legend('MV')
%         grid
% 
%         subplot(4,1,3)
%         stairs(t,results(f,w,m).inputs.signals.values(:,4),'LineWidth',1)
%         title('Agua (%)')
%         xlabel('Tiempo (s)')
%         legend('MV')
%         grid
% 
%         subplot(4,1,4)
%         stairs(t,results(f,w,m).inputs.signals.values(:,1),'LineWidth',1)
%         title('Demanda (%)')
%         xlabel('Tiempo (s)')
%         legend('DV')
%         grid  
        
        pause(3)
        close all;
      end
   end
end


