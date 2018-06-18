function [ Y ] = predictRF_Y2_PRBS( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y2 Random Forest Prediction for codegeneration for Y2
%   Detailed explanation goes here
%% Error Handling
% Because of hardcoding needs, it is important to warn and stop compilation
% if difference exists
if numTrees ~= 100
   error('Number of trees is %d in hardcoded function. Different from: %d',100,numTrees); 
end
if numPredictors ~= 10
   error('Number of predictors is %d in hardcoded function. Different from: %d',10,numPredictors); 
end
%%
CRTStrArray = { 
		'RF_PRBS\cRT_2_1'
		'RF_PRBS\cRT_2_2'
		'RF_PRBS\cRT_2_3'
		'RF_PRBS\cRT_2_4'
		'RF_PRBS\cRT_2_5'
		'RF_PRBS\cRT_2_6'
		'RF_PRBS\cRT_2_7'
		'RF_PRBS\cRT_2_8'
		'RF_PRBS\cRT_2_9'
		'RF_PRBS\cRT_2_10'
		'RF_PRBS\cRT_2_11'
		'RF_PRBS\cRT_2_12'
		'RF_PRBS\cRT_2_13'
		'RF_PRBS\cRT_2_14'
		'RF_PRBS\cRT_2_15'
		'RF_PRBS\cRT_2_16'
		'RF_PRBS\cRT_2_17'
		'RF_PRBS\cRT_2_18'
		'RF_PRBS\cRT_2_19'
		'RF_PRBS\cRT_2_20'
		'RF_PRBS\cRT_2_21'
		'RF_PRBS\cRT_2_22'
		'RF_PRBS\cRT_2_23'
		'RF_PRBS\cRT_2_24'
		'RF_PRBS\cRT_2_25'
		'RF_PRBS\cRT_2_26'
		'RF_PRBS\cRT_2_27'
		'RF_PRBS\cRT_2_28'
		'RF_PRBS\cRT_2_29'
		'RF_PRBS\cRT_2_30'
		'RF_PRBS\cRT_2_31'
		'RF_PRBS\cRT_2_32'
		'RF_PRBS\cRT_2_33'
		'RF_PRBS\cRT_2_34'
		'RF_PRBS\cRT_2_35'
		'RF_PRBS\cRT_2_36'
		'RF_PRBS\cRT_2_37'
		'RF_PRBS\cRT_2_38'
		'RF_PRBS\cRT_2_39'
		'RF_PRBS\cRT_2_40'
		'RF_PRBS\cRT_2_41'
		'RF_PRBS\cRT_2_42'
		'RF_PRBS\cRT_2_43'
		'RF_PRBS\cRT_2_44'
		'RF_PRBS\cRT_2_45'
		'RF_PRBS\cRT_2_46'
		'RF_PRBS\cRT_2_47'
		'RF_PRBS\cRT_2_48'
		'RF_PRBS\cRT_2_49'
		'RF_PRBS\cRT_2_50'
		'RF_PRBS\cRT_2_51'
		'RF_PRBS\cRT_2_52'
		'RF_PRBS\cRT_2_53'
		'RF_PRBS\cRT_2_54'
		'RF_PRBS\cRT_2_55'
		'RF_PRBS\cRT_2_56'
		'RF_PRBS\cRT_2_57'
		'RF_PRBS\cRT_2_58'
		'RF_PRBS\cRT_2_59'
		'RF_PRBS\cRT_2_60'
		'RF_PRBS\cRT_2_61'
		'RF_PRBS\cRT_2_62'
		'RF_PRBS\cRT_2_63'
		'RF_PRBS\cRT_2_64'
		'RF_PRBS\cRT_2_65'
		'RF_PRBS\cRT_2_66'
		'RF_PRBS\cRT_2_67'
		'RF_PRBS\cRT_2_68'
		'RF_PRBS\cRT_2_69'
		'RF_PRBS\cRT_2_70'
		'RF_PRBS\cRT_2_71'
		'RF_PRBS\cRT_2_72'
		'RF_PRBS\cRT_2_73'
		'RF_PRBS\cRT_2_74'
		'RF_PRBS\cRT_2_75'
		'RF_PRBS\cRT_2_76'
		'RF_PRBS\cRT_2_77'
		'RF_PRBS\cRT_2_78'
		'RF_PRBS\cRT_2_79'
		'RF_PRBS\cRT_2_80'
		'RF_PRBS\cRT_2_81'
		'RF_PRBS\cRT_2_82'
		'RF_PRBS\cRT_2_83'
		'RF_PRBS\cRT_2_84'
		'RF_PRBS\cRT_2_85'
		'RF_PRBS\cRT_2_86'
		'RF_PRBS\cRT_2_87'
		'RF_PRBS\cRT_2_88'
		'RF_PRBS\cRT_2_89'
		'RF_PRBS\cRT_2_90'
		'RF_PRBS\cRT_2_91'
		'RF_PRBS\cRT_2_92'
		'RF_PRBS\cRT_2_93'
		'RF_PRBS\cRT_2_94'
		'RF_PRBS\cRT_2_95'
		'RF_PRBS\cRT_2_96'
		'RF_PRBS\cRT_2_97'
		'RF_PRBS\cRT_2_98'
		'RF_PRBS\cRT_2_99'
		'RF_PRBS\cRT_2_100'
};
%% Prediction
[nObs,nPredictors] = size(X);
Y = zeros(nObs,1);
johnny = zeros(nObs,1);
for t = 1:100
   RTree = loadCompactModel(CRTStrArray{t});
   johnny = predict(RTree,X);
   Y = Y+1/numTrees*johnny(:,1);
end

end

