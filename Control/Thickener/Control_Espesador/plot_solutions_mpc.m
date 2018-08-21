function [ figArray ] = plot_solutions_mpc(solutionsArrayRF,solutionsArrayARMAX,sampleTimes,...
                                            titles,units)
%PLOT_SOLUTIONS_MPC Summary of this function goes here
%   Detailed explanation goes here
for f = 1:length(sampleTimes)
   sampleTime = sampleTimes(f);
   figArray(f) = plot_local_solution_mpc(solutionsArrayRF(:,:,sampleTime),...
                                         titles,units);
end


end

function [ fig ] = plot_local_solution_mpc(localSolution)
    fig = figure;
    [nVars,N_y] = size(localSolution);
    if nVars == 2
        % This is a optimalMV plot
        subplot(2,1,1)
        plot(0:N_y-1,localSolution(1,:));
    elseif nVars == 3

    end
end
