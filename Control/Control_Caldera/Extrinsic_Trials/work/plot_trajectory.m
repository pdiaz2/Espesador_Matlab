function plot_trajectory(z,y)
%#eml

N=size(y,2);
eml.extrinsic('plot','title','xlabel','ylabel','axis','pause');
title('Trajectory of object [blue] its Kalman estimate[green]');
xlabel('horizontal position');
ylabel('vertical position');
for i=1:N
plot(z(1,i), z(2,i), 'bx-');
plot(y(1,i), y(2,i), 'go-');
axis([-1.1, 1.1, -1.1, 1.1]);
pause(0.02);
end
end