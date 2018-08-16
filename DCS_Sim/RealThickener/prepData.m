clear all;
close all;
clc;
%% Load Data
imprint = false;
figureOption = 'ViewPreProcessed'; % ViewPreProcessed or CompareMethods
saveToMatFile = true;
cama = true;
month = 'Octubre'; % October: eliminated due to System Error in Underflow Rate.
% Some portions could be hand picked for test set (first validation).

matfileName = ['BigDataSaul_' month '_BF.mat'];
DVFileName = ['DV_' month '_BF.mat'];
load(DVFileName);
load(matfileName);
BigData.months = {'Agosto','Septiembre','Octubre','Noviembre'};
% if cama
%     BigData.PreProcessed(3,:) = 12-BigData.PreProcessed(3,:);
% end
%% Densimeter Preprocessing
rho_s = 2.75; % g/l
rho_f = 1.0; % g/l
numVars = length(BigData.varsIndex);
[numSamples garbage] = size(BigData.RawData');
% DV = DV(1:1+17*24+8); % Amount of Data shared between BigData and Excel
DVResized(1,:) = imresize(DV(:),[numSamples 1],'nearest')';
% Smooth?
% Add Noise?
meanDV = mean(DV,1);
GPTConstant = 3.84; % This measurement is uncertain, could be modeled as that and noise
rhoFeedRaw = DVResized;
for th = 4
    rhoFeed = filloutliers(rhoFeedRaw,'linear','median',...
            'ThresholdFactor',th);
    figure
    % subplot(2,1,1)
    plot(rhoFeedRaw)
    hold on
    plot(rhoFeed)
    legend('Densímetro Alimentación Raw[g/l]','Densímetro Alimentación Preprocesado [g/l]')
    hold off
end
%% Feed solid concentration weight
wt_f_Raw = (rhoFeed-rho_f)*rho_s./((rho_s-rho_f)*rhoFeed)*100;
figure
plot(wt_f_Raw)
hold on

wt_f = filloutliers(wt_f_Raw,'linear','median',...
            'ThresholdFactor',2);
plot(wt_f);
legend('Concentración de alimentación Raw [%]','Concentración de alimentación Preprocesado[%]');
hold off
%% Butterworth filtering
% Butterworth filtering generates a transient in the beginning of data,
% because of the "picking up" of the filter. Therefore, removal of outliers
% is required
BigData.clipByForce = [5 60 0 50 0 0 0];
BigData.ButterOrder(1,:) = [4 2 4 4 4 4 6];
BigData.ButterOrder(2,:) = [4 2 4 4 4 4 6];
BigData.ButterOrder(3,:) = [4 2 4 4 4 4 6];
BigData.ButterOrder(4,:) = [4 2 4 4 4 4 6];
BigData.thresholdFactorGlobal(1,:) = [3 1.2 3 2.5 1.5 2 0.2]; % The same as in filterData.m
BigData.thresholdFactorGlobal(2,:) = [3 1.2 3 2.5 1.5 2 0.2]; 
BigData.thresholdFactorGlobal(3,:) = [3 1.2 3 2 1.5 2 0.2];
BigData.thresholdFactorGlobal(4,:) = [3 1.2 3 2 1.5 2 0.2]; 
for var = 1:numVars
    currentMonth = strcmp(month,BigData.months);
%     for k = 1:numSamples
%         if BigData.PreProcessed(var,k) < BigData.clipByForce(var)
%             BigData.PreProcessed(var,k) = BigData.clipByForce(var);
%         end
%     end
    [b,a] = butter(BigData.ButterOrder(currentMonth,var),0.005);
    BigData.PreProcessed(var,:) = filter(b,a,BigData.PreProcessed(var,:));
%     BigData.PreProcessed(var,:) = filloutliers(BigData.PreProcessed(var,:),'linear','movmedian',60,...
%     'ThresholdFactor',BigData.thresholdFactorLocal(var));
    BigData.PreProcessed(var,:) = filloutliers(BigData.PreProcessed(var,:),'nearest','median',...
        'ThresholdFactor',BigData.thresholdFactorGlobal(currentMonth,var));
end

%% Solids rate (Excel Formula)
BigData.FlujoAlimentacionSmooth = BigData.PreProcessed(7,:);
Solidos = BigData.FlujoAlimentacionSmooth.*rhoFeed.*wt_f/100;
figure
plot(Solidos)
legend('Flujo de sólidos a la entrada [Ton/hr]')

%% Flocculant Flow (Excel formula)
Flocculant = GPTConstant*BigData.PreProcessed(5,:)./Solidos*1000;
figure
plot(Flocculant)
legend('Dosis de floculante según datos [gpt]')
meanValueFlocculant = mean(Flocculant);
FlocculantAC = Flocculant-meanValueFlocculant;
rescaleSize = 0.3;
FlocculantAC = rescaleSize*FlocculantAC;
FlocculantNew = meanValueFlocculant+FlocculantAC;
figure
plot(FlocculantNew)
legend('Dosis de floculante reescalando [gpt]')
FlocculantNew = filloutliers(FlocculantNew,'linear','median',...
        'ThresholdFactor',3);
figure
plot(FlocculantNew)
legend('Dosis de floculante con manejo de outliers [gpt]')
BigData.PreProcessed(:,1)
BigData.PreProcessed(:,100)
BigData.PreProcessed(:,1000)
figurePath = 'figures\';

if strcmp(figureOption,'CompareMethods')
    for i = 1:numVars
        figure
        plot(BigData.RawData(i,:))
        hold on
        plot(BigData.PreProcessedData(i,:))
        plot(BigData.PreProcessed(i,:))
        legend({[BigData.varsNames{i} ' Raw'],[BigData.varsNames{i} ' Método 1'],...
            [BigData.varsNames{i} ' Método 2']},'Location','southeast')
        hold off
        if imprint
            printName = [figurePath 'PP_Comp' num2str(i)];
            print(printName,'-depsc');
        end
    end
else
   for i = 1:numVars
        figure
        plot(BigData.PreProcessed(i,:))
        legend({[BigData.varsNames{i} ' Preprocesado']},'Location','southeast')
        if imprint
            printName = [figurePath 'PP_Final' num2str(i)];
            print(printName,'-depsc');
        end
    end 
end
%% Manual Inspection of Graphs
matFile = ['ThickenerOperationSaul_' month '_BF.mat'];
BigData.manual.timeLimit = length(DVResized); % In FeedRate we can see that the plant was practically put out of service ata around 1.3e6
if saveToMatFile
    save(matFile,'FlocculantNew','BigData','rhoFeed','wt_f','month');
end