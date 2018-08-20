function [ Y ] = predictRF_Y1_B100_na6_nb6_1408( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y1 Random Forest Prediction for codegeneration for Y1
%   Detailed explanation goes here
%% Error Handling
% Because of hardcoding needs, it is important to warn and stop compilation
% if difference exists
if numTrees ~= 100
   error('Number of trees is %d in hardcoded function. Different from: %d',100,numTrees); 
end
if numPredictors ~= 360
   error('Number of predictors is %d in hardcoded function. Different from: %d',360,numPredictors); 
end
%%
CRTStrArray = { 
		'RF\cRT_1_1'
		'RF\cRT_1_2'
		'RF\cRT_1_3'
		'RF\cRT_1_4'
		'RF\cRT_1_5'
		'RF\cRT_1_6'
		'RF\cRT_1_7'
		'RF\cRT_1_8'
		'RF\cRT_1_9'
		'RF\cRT_1_10'
		'RF\cRT_1_11'
		'RF\cRT_1_12'
		'RF\cRT_1_13'
		'RF\cRT_1_14'
		'RF\cRT_1_15'
		'RF\cRT_1_16'
		'RF\cRT_1_17'
		'RF\cRT_1_18'
		'RF\cRT_1_19'
		'RF\cRT_1_20'
		'RF\cRT_1_21'
		'RF\cRT_1_22'
		'RF\cRT_1_23'
		'RF\cRT_1_24'
		'RF\cRT_1_25'
		'RF\cRT_1_26'
		'RF\cRT_1_27'
		'RF\cRT_1_28'
		'RF\cRT_1_29'
		'RF\cRT_1_30'
		'RF\cRT_1_31'
		'RF\cRT_1_32'
		'RF\cRT_1_33'
		'RF\cRT_1_34'
		'RF\cRT_1_35'
		'RF\cRT_1_36'
		'RF\cRT_1_37'
		'RF\cRT_1_38'
		'RF\cRT_1_39'
		'RF\cRT_1_40'
		'RF\cRT_1_41'
		'RF\cRT_1_42'
		'RF\cRT_1_43'
		'RF\cRT_1_44'
		'RF\cRT_1_45'
		'RF\cRT_1_46'
		'RF\cRT_1_47'
		'RF\cRT_1_48'
		'RF\cRT_1_49'
		'RF\cRT_1_50'
		'RF\cRT_1_51'
		'RF\cRT_1_52'
		'RF\cRT_1_53'
		'RF\cRT_1_54'
		'RF\cRT_1_55'
		'RF\cRT_1_56'
		'RF\cRT_1_57'
		'RF\cRT_1_58'
		'RF\cRT_1_59'
		'RF\cRT_1_60'
		'RF\cRT_1_61'
		'RF\cRT_1_62'
		'RF\cRT_1_63'
		'RF\cRT_1_64'
		'RF\cRT_1_65'
		'RF\cRT_1_66'
		'RF\cRT_1_67'
		'RF\cRT_1_68'
		'RF\cRT_1_69'
		'RF\cRT_1_70'
		'RF\cRT_1_71'
		'RF\cRT_1_72'
		'RF\cRT_1_73'
		'RF\cRT_1_74'
		'RF\cRT_1_75'
		'RF\cRT_1_76'
		'RF\cRT_1_77'
		'RF\cRT_1_78'
		'RF\cRT_1_79'
		'RF\cRT_1_80'
		'RF\cRT_1_81'
		'RF\cRT_1_82'
		'RF\cRT_1_83'
		'RF\cRT_1_84'
		'RF\cRT_1_85'
		'RF\cRT_1_86'
		'RF\cRT_1_87'
		'RF\cRT_1_88'
		'RF\cRT_1_89'
		'RF\cRT_1_90'
		'RF\cRT_1_91'
		'RF\cRT_1_92'
		'RF\cRT_1_93'
		'RF\cRT_1_94'
		'RF\cRT_1_95'
		'RF\cRT_1_96'
		'RF\cRT_1_97'
		'RF\cRT_1_98'
		'RF\cRT_1_99'
		'RF\cRT_1_100'
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

