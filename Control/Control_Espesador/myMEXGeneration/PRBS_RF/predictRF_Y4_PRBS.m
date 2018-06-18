function [ Y ] = predictRF_Y4_PRBS( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y3 Random Forest Prediction for codegeneration for Y3
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
		'RF_PRBS\cRT_4_1'
		'RF_PRBS\cRT_4_2'
		'RF_PRBS\cRT_4_3'
		'RF_PRBS\cRT_4_4'
		'RF_PRBS\cRT_4_5'
		'RF_PRBS\cRT_4_6'
		'RF_PRBS\cRT_4_7'
		'RF_PRBS\cRT_4_8'
		'RF_PRBS\cRT_4_9'
		'RF_PRBS\cRT_4_10'
		'RF_PRBS\cRT_4_11'
		'RF_PRBS\cRT_4_12'
		'RF_PRBS\cRT_4_13'
		'RF_PRBS\cRT_4_14'
		'RF_PRBS\cRT_4_15'
		'RF_PRBS\cRT_4_16'
		'RF_PRBS\cRT_4_17'
		'RF_PRBS\cRT_4_18'
		'RF_PRBS\cRT_4_19'
		'RF_PRBS\cRT_4_20'
		'RF_PRBS\cRT_4_21'
		'RF_PRBS\cRT_4_22'
		'RF_PRBS\cRT_4_23'
		'RF_PRBS\cRT_4_24'
		'RF_PRBS\cRT_4_25'
		'RF_PRBS\cRT_4_26'
		'RF_PRBS\cRT_4_27'
		'RF_PRBS\cRT_4_28'
		'RF_PRBS\cRT_4_29'
		'RF_PRBS\cRT_4_30'
		'RF_PRBS\cRT_4_31'
		'RF_PRBS\cRT_4_32'
		'RF_PRBS\cRT_4_33'
		'RF_PRBS\cRT_4_34'
		'RF_PRBS\cRT_4_35'
		'RF_PRBS\cRT_4_36'
		'RF_PRBS\cRT_4_37'
		'RF_PRBS\cRT_4_38'
		'RF_PRBS\cRT_4_39'
		'RF_PRBS\cRT_4_40'
		'RF_PRBS\cRT_4_41'
		'RF_PRBS\cRT_4_42'
		'RF_PRBS\cRT_4_43'
		'RF_PRBS\cRT_4_44'
		'RF_PRBS\cRT_4_45'
		'RF_PRBS\cRT_4_46'
		'RF_PRBS\cRT_4_47'
		'RF_PRBS\cRT_4_48'
		'RF_PRBS\cRT_4_49'
		'RF_PRBS\cRT_4_50'
		'RF_PRBS\cRT_4_51'
		'RF_PRBS\cRT_4_52'
		'RF_PRBS\cRT_4_53'
		'RF_PRBS\cRT_4_54'
		'RF_PRBS\cRT_4_55'
		'RF_PRBS\cRT_4_56'
		'RF_PRBS\cRT_4_57'
		'RF_PRBS\cRT_4_58'
		'RF_PRBS\cRT_4_59'
		'RF_PRBS\cRT_4_60'
		'RF_PRBS\cRT_4_61'
		'RF_PRBS\cRT_4_62'
		'RF_PRBS\cRT_4_63'
		'RF_PRBS\cRT_4_64'
		'RF_PRBS\cRT_4_65'
		'RF_PRBS\cRT_4_66'
		'RF_PRBS\cRT_4_67'
		'RF_PRBS\cRT_4_68'
		'RF_PRBS\cRT_4_69'
		'RF_PRBS\cRT_4_70'
		'RF_PRBS\cRT_4_71'
		'RF_PRBS\cRT_4_72'
		'RF_PRBS\cRT_4_73'
		'RF_PRBS\cRT_4_74'
		'RF_PRBS\cRT_4_75'
		'RF_PRBS\cRT_4_76'
		'RF_PRBS\cRT_4_77'
		'RF_PRBS\cRT_4_78'
		'RF_PRBS\cRT_4_79'
		'RF_PRBS\cRT_4_80'
		'RF_PRBS\cRT_4_81'
		'RF_PRBS\cRT_4_82'
		'RF_PRBS\cRT_4_83'
		'RF_PRBS\cRT_4_84'
		'RF_PRBS\cRT_4_85'
		'RF_PRBS\cRT_4_86'
		'RF_PRBS\cRT_4_87'
		'RF_PRBS\cRT_4_88'
		'RF_PRBS\cRT_4_89'
		'RF_PRBS\cRT_4_90'
		'RF_PRBS\cRT_4_91'
		'RF_PRBS\cRT_4_92'
		'RF_PRBS\cRT_4_93'
		'RF_PRBS\cRT_4_94'
		'RF_PRBS\cRT_4_95'
		'RF_PRBS\cRT_4_96'
		'RF_PRBS\cRT_4_97'
		'RF_PRBS\cRT_4_98'
		'RF_PRBS\cRT_4_99'
		'RF_PRBS\cRT_4_100'
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


