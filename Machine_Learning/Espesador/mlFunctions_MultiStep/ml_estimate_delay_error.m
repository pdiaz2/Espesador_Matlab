function [delay] = ml_estimate_delay_error(validationOutputs,...
                                                N_y,yHat)
dims = ndims(yHat);
if dims == 2
    for j = 0:N_y-1
%         delay(j+1) = finddelay(yHat(1:100,j+1),validationOutputs(1+j:end-(N_y-1-j)),N_y);
%         delay(j+1) = finddelay(yHat(1:100,j+1),validationOutputs(1+j:j+100),N_y);
        DC_yHat = mean(yHat(1:100,j+1));
        DC_valOut = mean(validationOutputs(1+j:100+j));
        Var_yHat = var(yHat(1:100,j+1));
        Var_valOut = var(validationOutputs(1+j:100+j));
        [r,lags] = xcorr(yHat(1:100,j+1)-DC_yHat,...
                        validationOutputs(1+j:100+j)-DC_valOut,N_y);
        r = r/(100*sqrt(Var_yHat*Var_valOut));
        [~,delay(j+1)] = max(r(lags>0));
    end
elseif dims == 3
    % Construction
    for j = 0:N_y-1
        auxYHat = yHat(:,:,j+1);
        
    end
    
end
end