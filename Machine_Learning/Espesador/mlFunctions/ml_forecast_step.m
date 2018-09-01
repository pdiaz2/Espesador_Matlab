function [ yForecast ] = ml_forecast_step( ML_Model, inputTimeSeries,...
                                       kForecast,na_y,nb_y,...
                                        externalInput)
%ML_FORECAST Summary of this function goes here
%   Detailed explanation goes here
yForecast = zeros(1,kForecast);
% Initially, yRShift is the 1:na_y block of inputTimeSeries in the first
% row
yRShift = inputTimeSeries(1,1:na_y);
xRShift = inputTimeSeries(1,na_y+1:end);
for k = 1:kForecast
    yForecast(k) = predict(ML_Model,[yRShift xRShift]);
    % Update yRShift
    yRShift = [yForecast(k) yRShift(1,1:end-1)];
    for u = 1:length(nb_y)
        xRShift(2+(u-1)*nb_y(u):u*nb_y(u)) = xRShift(1+(u-1)*nb_y(u):u*nb_y(u)-1);
        xRShift(1+(u-1)*nb_y(u)) = externalInput(k,u);
    end
end
end

