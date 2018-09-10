function [trajectory] = mpc_generate_input(signalValuesStruct)
%MPC_GENERATE_SENSOR_INPUT Generate custom sensor signal to feed to the
%controller for calibration and design
n = numel(signalValuesStruct.IC);
trajectory = cell(1,n);
for cv = 1:n
    if signalValuesStruct.changeBool(cv)
        signalFinalValue = signalValuesStruct.IC(cv)+signalValuesStruct.delta(cv);
        signalTimeToChange = signalValuesStruct.timeToChange(cv);
        switch signalValuesStruct.shape{cv}
            case 'step'
                trajectory{1,cv} = [0,signalValuesStruct.IC(cv)];
                trajectory{1,cv} = [trajectory{1,cv};signalTimeToChange,signalFinalValue];
            case 'mountain'
                trajectory{1,cv} = [0,signalValuesStruct.IC(cv)];
                trajectory{1,cv} = [trajectory{1,cv};
                                    signalTimeToChange, signalFinalValue;
                                    4*signalTimeToChange, signalValuesStruct.IC(cv);
                                    7*signalTimeToChange, signalValuesStruct.IC(cv)-signalValuesStruct.delta(cv)
                                    ];
        end
    else
        trajectory{1,cv} = [0,signalValuesStruct.IC(cv)];
    end
end
end