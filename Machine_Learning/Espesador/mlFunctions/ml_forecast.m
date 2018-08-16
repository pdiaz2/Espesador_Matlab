function [ yForecast] = ml_forecast(ML_Model, inputTimeSeries,...
                                       kForecast,na_y)
%ML_FORECAST Summary of this function goes here
%   Detailed explanation goes here
yForecast = zeros(1,kForecast);
% Initially, yRShift is the 1:na_y block of inputTimeSeries in the first
% row
yRShift = inputTimeSeries(1,1:na_y);
for k = 1:kForecast
    yForecast(k) = predict(ML_Model,[yRShift inputTimeSeries(k,1+na_y:end)]);
    % Update yRShift
    yRShift = [yForecast(k) yRShift(1,1:end-1)];

end
end

