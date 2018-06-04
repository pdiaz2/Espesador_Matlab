function [ Y ] = predictRF_Y3( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y3 Random Forest Prediction for codegeneration for Y3
%   Detailed explanation goes here
%% Error Handling
% Because of hardcoding needs, it is important to warn and stop compilation
% if difference exists
if numTrees ~= 100
   error('Number of trees is %d in hardcoded function. Different from: %d',100,numTrees); 
end
if numPredictors ~= 12
   error('Number of predictors is %d in hardcoded function. Different from: %d',12,numPredictors); 
end
%%
CRTStrArray = { 
		'RF\cRT_3_1'
		'RF\cRT_3_2'
		'RF\cRT_3_3'
		'RF\cRT_3_4'
		'RF\cRT_3_5'
		'RF\cRT_3_6'
		'RF\cRT_3_7'
		'RF\cRT_3_8'
		'RF\cRT_3_9'
		'RF\cRT_3_10'
		'RF\cRT_3_11'
		'RF\cRT_3_12'
		'RF\cRT_3_13'
		'RF\cRT_3_14'
		'RF\cRT_3_15'
		'RF\cRT_3_16'
		'RF\cRT_3_17'
		'RF\cRT_3_18'
		'RF\cRT_3_19'
		'RF\cRT_3_20'
		'RF\cRT_3_21'
		'RF\cRT_3_22'
		'RF\cRT_3_23'
		'RF\cRT_3_24'
		'RF\cRT_3_25'
		'RF\cRT_3_26'
		'RF\cRT_3_27'
		'RF\cRT_3_28'
		'RF\cRT_3_29'
		'RF\cRT_3_30'
		'RF\cRT_3_31'
		'RF\cRT_3_32'
		'RF\cRT_3_33'
		'RF\cRT_3_34'
		'RF\cRT_3_35'
		'RF\cRT_3_36'
		'RF\cRT_3_37'
		'RF\cRT_3_38'
		'RF\cRT_3_39'
		'RF\cRT_3_40'
		'RF\cRT_3_41'
		'RF\cRT_3_42'
		'RF\cRT_3_43'
		'RF\cRT_3_44'
		'RF\cRT_3_45'
		'RF\cRT_3_46'
		'RF\cRT_3_47'
		'RF\cRT_3_48'
		'RF\cRT_3_49'
		'RF\cRT_3_50'
		'RF\cRT_3_51'
		'RF\cRT_3_52'
		'RF\cRT_3_53'
		'RF\cRT_3_54'
		'RF\cRT_3_55'
		'RF\cRT_3_56'
		'RF\cRT_3_57'
		'RF\cRT_3_58'
		'RF\cRT_3_59'
		'RF\cRT_3_60'
		'RF\cRT_3_61'
		'RF\cRT_3_62'
		'RF\cRT_3_63'
		'RF\cRT_3_64'
		'RF\cRT_3_65'
		'RF\cRT_3_66'
		'RF\cRT_3_67'
		'RF\cRT_3_68'
		'RF\cRT_3_69'
		'RF\cRT_3_70'
		'RF\cRT_3_71'
		'RF\cRT_3_72'
		'RF\cRT_3_73'
		'RF\cRT_3_74'
		'RF\cRT_3_75'
		'RF\cRT_3_76'
		'RF\cRT_3_77'
		'RF\cRT_3_78'
		'RF\cRT_3_79'
		'RF\cRT_3_80'
		'RF\cRT_3_81'
		'RF\cRT_3_82'
		'RF\cRT_3_83'
		'RF\cRT_3_84'
		'RF\cRT_3_85'
		'RF\cRT_3_86'
		'RF\cRT_3_87'
		'RF\cRT_3_88'
		'RF\cRT_3_89'
		'RF\cRT_3_90'
		'RF\cRT_3_91'
		'RF\cRT_3_92'
		'RF\cRT_3_93'
		'RF\cRT_3_94'
		'RF\cRT_3_95'
		'RF\cRT_3_96'
		'RF\cRT_3_97'
		'RF\cRT_3_98'
		'RF\cRT_3_99'
		'RF\cRT_3_100'
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


