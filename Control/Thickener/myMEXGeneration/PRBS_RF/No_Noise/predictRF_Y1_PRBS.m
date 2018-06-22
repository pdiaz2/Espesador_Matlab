function [ Y ] = predictRF_Y1_PRBS( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y1 Random Forest Prediction for codegeneration for Y1
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
		'RF_PRBS\cRT_1_1'
		'RF_PRBS\cRT_1_2'
		'RF_PRBS\cRT_1_3'
		'RF_PRBS\cRT_1_4'
		'RF_PRBS\cRT_1_5'
		'RF_PRBS\cRT_1_6'
		'RF_PRBS\cRT_1_7'
		'RF_PRBS\cRT_1_8'
		'RF_PRBS\cRT_1_9'
		'RF_PRBS\cRT_1_10'
		'RF_PRBS\cRT_1_11'
		'RF_PRBS\cRT_1_12'
		'RF_PRBS\cRT_1_13'
		'RF_PRBS\cRT_1_14'
		'RF_PRBS\cRT_1_15'
		'RF_PRBS\cRT_1_16'
		'RF_PRBS\cRT_1_17'
		'RF_PRBS\cRT_1_18'
		'RF_PRBS\cRT_1_19'
		'RF_PRBS\cRT_1_20'
		'RF_PRBS\cRT_1_21'
		'RF_PRBS\cRT_1_22'
		'RF_PRBS\cRT_1_23'
		'RF_PRBS\cRT_1_24'
		'RF_PRBS\cRT_1_25'
		'RF_PRBS\cRT_1_26'
		'RF_PRBS\cRT_1_27'
		'RF_PRBS\cRT_1_28'
		'RF_PRBS\cRT_1_29'
		'RF_PRBS\cRT_1_30'
		'RF_PRBS\cRT_1_31'
		'RF_PRBS\cRT_1_32'
		'RF_PRBS\cRT_1_33'
		'RF_PRBS\cRT_1_34'
		'RF_PRBS\cRT_1_35'
		'RF_PRBS\cRT_1_36'
		'RF_PRBS\cRT_1_37'
		'RF_PRBS\cRT_1_38'
		'RF_PRBS\cRT_1_39'
		'RF_PRBS\cRT_1_40'
		'RF_PRBS\cRT_1_41'
		'RF_PRBS\cRT_1_42'
		'RF_PRBS\cRT_1_43'
		'RF_PRBS\cRT_1_44'
		'RF_PRBS\cRT_1_45'
		'RF_PRBS\cRT_1_46'
		'RF_PRBS\cRT_1_47'
		'RF_PRBS\cRT_1_48'
		'RF_PRBS\cRT_1_49'
		'RF_PRBS\cRT_1_50'
		'RF_PRBS\cRT_1_51'
		'RF_PRBS\cRT_1_52'
		'RF_PRBS\cRT_1_53'
		'RF_PRBS\cRT_1_54'
		'RF_PRBS\cRT_1_55'
		'RF_PRBS\cRT_1_56'
		'RF_PRBS\cRT_1_57'
		'RF_PRBS\cRT_1_58'
		'RF_PRBS\cRT_1_59'
		'RF_PRBS\cRT_1_60'
		'RF_PRBS\cRT_1_61'
		'RF_PRBS\cRT_1_62'
		'RF_PRBS\cRT_1_63'
		'RF_PRBS\cRT_1_64'
		'RF_PRBS\cRT_1_65'
		'RF_PRBS\cRT_1_66'
		'RF_PRBS\cRT_1_67'
		'RF_PRBS\cRT_1_68'
		'RF_PRBS\cRT_1_69'
		'RF_PRBS\cRT_1_70'
		'RF_PRBS\cRT_1_71'
		'RF_PRBS\cRT_1_72'
		'RF_PRBS\cRT_1_73'
		'RF_PRBS\cRT_1_74'
		'RF_PRBS\cRT_1_75'
		'RF_PRBS\cRT_1_76'
		'RF_PRBS\cRT_1_77'
		'RF_PRBS\cRT_1_78'
		'RF_PRBS\cRT_1_79'
		'RF_PRBS\cRT_1_80'
		'RF_PRBS\cRT_1_81'
		'RF_PRBS\cRT_1_82'
		'RF_PRBS\cRT_1_83'
		'RF_PRBS\cRT_1_84'
		'RF_PRBS\cRT_1_85'
		'RF_PRBS\cRT_1_86'
		'RF_PRBS\cRT_1_87'
		'RF_PRBS\cRT_1_88'
		'RF_PRBS\cRT_1_89'
		'RF_PRBS\cRT_1_90'
		'RF_PRBS\cRT_1_91'
		'RF_PRBS\cRT_1_92'
		'RF_PRBS\cRT_1_93'
		'RF_PRBS\cRT_1_94'
		'RF_PRBS\cRT_1_95'
		'RF_PRBS\cRT_1_96'
		'RF_PRBS\cRT_1_97'
		'RF_PRBS\cRT_1_98'
		'RF_PRBS\cRT_1_99'
		'RF_PRBS\cRT_1_100'
};
%%
[nObs,nPredictors] = size(X);
Y = zeros(nObs,1);
johnny = zeros(nObs,1);
for t = 1:100
   RTree = loadCompactModel(CRTStrArray{t});
   johnny = predict(RTree,X);
   Y = Y+1/numTrees*johnny(:,1);
end
end

