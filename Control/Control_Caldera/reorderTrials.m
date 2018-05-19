clear all;clc;

N = 3;
N_u = 2;
numCV = 3;
numMV = 3;
numDV = 1;
%% Future
for cv = 1:numCV
    for j = 1:N
        X_opt{(cv-1)*N+j} = ['Y_' num2str(cv) '(k+' num2str(j) ')'];
    end
end
for mv = 1:numMV
    for j = 1:N_u
        X_opt{cv*N+(mv-1)*N_u+j} = ['U_' num2str(mv) '(k+' num2str(j-1) ')'];
    end
end
%% Past
% na = [0 1 2 1]'; % numCV x 1
% nb = [0 2 1 2;...
%       0 1 2 1;...
%       0 1 1 1]; % numCV x numMV
% nc = [0 2 1 1]'; % numCV x numDV
% for cv = 2:numCV+1
%     for k = 1:na(cv)
%         X_RF{sum(na(1:cv-1))+k} = ['Y_' num2str(cv-1) '(k-' num2str(k) ')'];
%     end
%     for dv = 2:numDV+1
%         for k = 1:nc(dv)
%             X_RF{na(cv)+sum(nc(1:cv-1))+k} = ['D_' num2str(dv-1) '(k-' num2str(k) ')'];
%         end
%     end
%     for mv = 2:numMV+1
%         for k = 1:nb(cv-1,mv)
%             X_RF{na(cv)+nc(dv)+sum(nb(cv-1,1:mv-1))+k} = ['U_' num2str(mv-1) '(k-' num2str(k) ')'];  
%         end
%     end
% end
na = [1 2 1]'; % numCV x 1
nb = [2 1 2;...
      1 2 1;...
      1 1 1]; % numCV x numMV
nc = [2 1 1]'; % numCV x numDV
pSizes = [1+2+1+2+2;2+1+2+1+1;1+1+1+1+1];
X_RF = {};
for cv = 1:numCV
    for k = 1:na(cv)
        X_RF{end+1} = ['Y_' num2str(cv) '(k-' num2str(k) ')'];
    end
    for dv = 1:numDV
      for k = 1:nc(cv)
         X_RF{end+1} = ['D_' num2str(dv) '(k-' num2str(k) ')'];
      end
    end
    for mv = 1:numMV
        for k = 1:nb(cv,mv)
           X_RF{end+1} = ['U_' num2str(mv) '(k-' num2str(k) ')'];  
        end
    end
end
%%