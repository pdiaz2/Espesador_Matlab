function [Q_u, gpt,explanation,iterations,errorYield] = expertControlFunction(bedLevel,torque,yieldStress,Cp_u,...
    Q_uPast,gptPast,explanationPast,iterationsPast,errorPast,...Parameters
    iterationsLimit, yieldStressTarget, offsetYield, checkTorque,...
    Q_uMax, Q_uMaxFine, Q_uMin, gptMax, gptMin, dGpt, dQ_u, Q_uMinFine)
%#codegen





torqueMax = 40;
%torqueSoftHigh = 0.14;
torqueMin = 10;
yieldStressMax = 90-offsetYield;
yieldStressMaxFine = 80-offsetYield;
yieldStressMinFine = 45-offsetYield;
% dGpt = 0.01;
% yieldStressMin = 15-offsetYield;
% % The minimum is false
% Q_uMax = 140;
% 
% Q_uMinFine = 80;
% CpOutMax = 0.71;
% CpOutMin = 0.68;



yieldStressStart = 30-offsetYield;
torqueWarning = 36; % From 0.3 to 0.36. From 0.2 to 0.3 - more growth
torqueSafetyGap = 3; % From 0.06 to 0.03
%explanation = 0; % Changes when it is saturated
Q_uOffset = 45; % Best result when 45

% Export to script


% Error calculation
errorYield = yieldStressTarget-yieldStress;
dErrorYield = errorYield-errorPast;
% dE > 0 => y(k-1) > y(k)
if isnan(dErrorYield)
   dErrorYield = -100; 
end
% Keep the same for default
Q_u = Q_uPast;
gpt = gptPast;


if iterationsPast == iterationsLimit
    if (torque >= torqueMin && torque <= torqueWarning) || ~checkTorque
        explanation = 10;
        if explanationPast ~= 2 && explanationPast ~= 4;
            if (errorYield >= 40 || isnan(yieldStress)) && explanationPast ~= 5
                Q_u = Q_uPast - dQ_u*(Q_uPast > Q_uMin)*sign(dErrorYield);
                gpt = gptPast + dGpt*( gptPast < gptMax)*sign(dErrorYield);
                explanation = 1;
            elseif errorYield < 40 &&  ...
                    errorYield >= 25 && explanationPast ~= 6 % addition explantio
%                 Q_u = Q_uPast+dQ_u*(Q_uPast < Q_uMaxFine);
%                 %gpt = (gptMax+gptMin)*0.5;
%                 gpt = gptPast-dGpt*(gptPast > 26);
                Q_u = Q_uPast - dQ_u*(Q_uPast > Q_uMinFine)*sign(dErrorYield);
                gpt = gptPast + dGpt*(gptPast < 27)*sign(dErrorYield);
                explanation = 5;
        %                 if Q_uPast < Q_uMinFine
        %                     Q_u = Q_uPast+dQ_u;
        %                     valveSaturation = 14;
        %                 end
            elseif errorYield < 25 ...
                    && errorYield >= 0 && explanationPast ~= 7
            % Too close to slurry
                %Q_u = Q_uOffset + 15; % From 50 to 15;
                % gpt = 23.5;
                explanation = 6;
                Q_u = Q_uPast - dQ_u*(Q_uPast > Q_uMinFine+10)*sign(dErrorYield);
                gpt = gptPast + dGpt*(gptPast < 26)*sign(dErrorYield);
%                 elseif gptPast < gptMax
%                     gpt = gptPast+dGpt;
%                     explanation = 7;
%                 else
%                     % Do nothing because got no hands
%                     explanation = 8;
%                 end
            elseif errorYield < 0 && errorYield >= -15 ...
                    && explanationPast ~= 8
                % Q_u = Q_uOffset + 25; % From 70 to 25
                Q_u = Q_uPast - dQ_u*(Q_uPast < Q_uMaxFine-10)*sign(dErrorYield);
                gpt = gptPast + dGpt*(gptPast > 24)*sign(dErrorYield);
%                 gpt = 23;
%                 explanation = 7;
%                 if Q_uPast < Q_uMax
%                     Q_u = Q_uPast+dQ_u;
%                     explanation = 7;
%                 end
                %             elseif gptPast > gptMin
                %                 gpt = gptPast-dGpt;
                %                 explanation = 10;
                %             else
                %                 % Do nothing because got no hands
                %                 explanation = 11;
                %             end
            elseif errorYield < -15 ...
                    && errorYield >= -25 && explanationPast ~= 9
                Q_u = Q_uPast - dQ_u*(Q_uPast < Q_uMaxFine)*sign(dErrorYield);
                gpt = gptPast + dGpt*(gptPast > 23)*sign(dErrorYield);
    %             Q_u = Q_uMaxFine;
    %             gpt = gptMin;
                explanation = 8;
            elseif errorYield < -25 % Was an else before
                Q_u = Q_uPast - dQ_u*(Q_uPast < Q_uMax)*sign(dErrorYield);
                gpt = gptPast + dGpt*(gptPast > gptMin)*sign(dErrorYield);
%                 Q_u = Q_uMax; % From 110 to 45
%                 gpt = 21;
                explanation = 9;
            end
            
        end
    else
        explanation = 99;
    end
    iterations = 0;
else
    iterations = iterationsPast+1;
    explanation = -1;
end
end