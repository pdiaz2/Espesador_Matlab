function [ Y ] = predictRF_Y3_PRBS( X,numTrees,numPredictors )
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
		'RF_PRBS\cRT_3_1'
		'RF_PRBS\cRT_3_2'
		'RF_PRBS\cRT_3_3'
		'RF_PRBS\cRT_3_4'
		'RF_PRBS\cRT_3_5'
		'RF_PRBS\cRT_3_6'
		'RF_PRBS\cRT_3_7'
		'RF_PRBS\cRT_3_8'
		'RF_PRBS\cRT_3_9'
		'RF_PRBS\cRT_3_10'
		'RF_PRBS\cRT_3_11'
		'RF_PRBS\cRT_3_12'
		'RF_PRBS\cRT_3_13'
		'RF_PRBS\cRT_3_14'
		'RF_PRBS\cRT_3_15'
		'RF_PRBS\cRT_3_16'
		'RF_PRBS\cRT_3_17'
		'RF_PRBS\cRT_3_18'
		'RF_PRBS\cRT_3_19'
		'RF_PRBS\cRT_3_20'
		'RF_PRBS\cRT_3_21'
		'RF_PRBS\cRT_3_22'
		'RF_PRBS\cRT_3_23'
		'RF_PRBS\cRT_3_24'
		'RF_PRBS\cRT_3_25'
		'RF_PRBS\cRT_3_26'
		'RF_PRBS\cRT_3_27'
		'RF_PRBS\cRT_3_28'
		'RF_PRBS\cRT_3_29'
		'RF_PRBS\cRT_3_30'
		'RF_PRBS\cRT_3_31'
		'RF_PRBS\cRT_3_32'
		'RF_PRBS\cRT_3_33'
		'RF_PRBS\cRT_3_34'
		'RF_PRBS\cRT_3_35'
		'RF_PRBS\cRT_3_36'
		'RF_PRBS\cRT_3_37'
		'RF_PRBS\cRT_3_38'
		'RF_PRBS\cRT_3_39'
		'RF_PRBS\cRT_3_40'
		'RF_PRBS\cRT_3_41'
		'RF_PRBS\cRT_3_42'
		'RF_PRBS\cRT_3_43'
		'RF_PRBS\cRT_3_44'
		'RF_PRBS\cRT_3_45'
		'RF_PRBS\cRT_3_46'
		'RF_PRBS\cRT_3_47'
		'RF_PRBS\cRT_3_48'
		'RF_PRBS\cRT_3_49'
		'RF_PRBS\cRT_3_50'
		'RF_PRBS\cRT_3_51'
		'RF_PRBS\cRT_3_52'
		'RF_PRBS\cRT_3_53'
		'RF_PRBS\cRT_3_54'
		'RF_PRBS\cRT_3_55'
		'RF_PRBS\cRT_3_56'
		'RF_PRBS\cRT_3_57'
		'RF_PRBS\cRT_3_58'
		'RF_PRBS\cRT_3_59'
		'RF_PRBS\cRT_3_60'
		'RF_PRBS\cRT_3_61'
		'RF_PRBS\cRT_3_62'
		'RF_PRBS\cRT_3_63'
		'RF_PRBS\cRT_3_64'
		'RF_PRBS\cRT_3_65'
		'RF_PRBS\cRT_3_66'
		'RF_PRBS\cRT_3_67'
		'RF_PRBS\cRT_3_68'
		'RF_PRBS\cRT_3_69'
		'RF_PRBS\cRT_3_70'
		'RF_PRBS\cRT_3_71'
		'RF_PRBS\cRT_3_72'
		'RF_PRBS\cRT_3_73'
		'RF_PRBS\cRT_3_74'
		'RF_PRBS\cRT_3_75'
		'RF_PRBS\cRT_3_76'
		'RF_PRBS\cRT_3_77'
		'RF_PRBS\cRT_3_78'
		'RF_PRBS\cRT_3_79'
		'RF_PRBS\cRT_3_80'
		'RF_PRBS\cRT_3_81'
		'RF_PRBS\cRT_3_82'
		'RF_PRBS\cRT_3_83'
		'RF_PRBS\cRT_3_84'
		'RF_PRBS\cRT_3_85'
		'RF_PRBS\cRT_3_86'
		'RF_PRBS\cRT_3_87'
		'RF_PRBS\cRT_3_88'
		'RF_PRBS\cRT_3_89'
		'RF_PRBS\cRT_3_90'
		'RF_PRBS\cRT_3_91'
		'RF_PRBS\cRT_3_92'
		'RF_PRBS\cRT_3_93'
		'RF_PRBS\cRT_3_94'
		'RF_PRBS\cRT_3_95'
		'RF_PRBS\cRT_3_96'
		'RF_PRBS\cRT_3_97'
		'RF_PRBS\cRT_3_98'
		'RF_PRBS\cRT_3_99'
		'RF_PRBS\cRT_3_100'
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


