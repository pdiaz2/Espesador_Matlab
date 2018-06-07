function [ Y ] = predictRF_Y4( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y3 Random Forest Prediction for codegeneration for Y3
%   Detailed explanation goes here
%% Error Handling
% Because of hardcoding needs, it is important to warn and stop compilation
% if difference exists
if numTrees ~= 100
   error('Number of trees is %d in hardcoded function. Different from: %d',100,numTrees); 
end
if numPredictors ~= 9
   error('Number of predictors is %d in hardcoded function. Different from: %d',12,numPredictors); 
end
%%
CRTStrArray = { 
		'RF\cRT_4_1'
		'RF\cRT_4_2'
		'RF\cRT_4_3'
		'RF\cRT_4_4'
		'RF\cRT_4_5'
		'RF\cRT_4_6'
		'RF\cRT_4_7'
		'RF\cRT_4_8'
		'RF\cRT_4_9'
		'RF\cRT_4_10'
		'RF\cRT_4_11'
		'RF\cRT_4_12'
		'RF\cRT_4_13'
		'RF\cRT_4_14'
		'RF\cRT_4_15'
		'RF\cRT_4_16'
		'RF\cRT_4_17'
		'RF\cRT_4_18'
		'RF\cRT_4_19'
		'RF\cRT_4_20'
		'RF\cRT_4_21'
		'RF\cRT_4_22'
		'RF\cRT_4_23'
		'RF\cRT_4_24'
		'RF\cRT_4_25'
		'RF\cRT_4_26'
		'RF\cRT_4_27'
		'RF\cRT_4_28'
		'RF\cRT_4_29'
		'RF\cRT_4_30'
		'RF\cRT_4_31'
		'RF\cRT_4_32'
		'RF\cRT_4_33'
		'RF\cRT_4_34'
		'RF\cRT_4_35'
		'RF\cRT_4_36'
		'RF\cRT_4_37'
		'RF\cRT_4_38'
		'RF\cRT_4_39'
		'RF\cRT_4_40'
		'RF\cRT_4_41'
		'RF\cRT_4_42'
		'RF\cRT_4_43'
		'RF\cRT_4_44'
		'RF\cRT_4_45'
		'RF\cRT_4_46'
		'RF\cRT_4_47'
		'RF\cRT_4_48'
		'RF\cRT_4_49'
		'RF\cRT_4_50'
		'RF\cRT_4_51'
		'RF\cRT_4_52'
		'RF\cRT_4_53'
		'RF\cRT_4_54'
		'RF\cRT_4_55'
		'RF\cRT_4_56'
		'RF\cRT_4_57'
		'RF\cRT_4_58'
		'RF\cRT_4_59'
		'RF\cRT_4_60'
		'RF\cRT_4_61'
		'RF\cRT_4_62'
		'RF\cRT_4_63'
		'RF\cRT_4_64'
		'RF\cRT_4_65'
		'RF\cRT_4_66'
		'RF\cRT_4_67'
		'RF\cRT_4_68'
		'RF\cRT_4_69'
		'RF\cRT_4_70'
		'RF\cRT_4_71'
		'RF\cRT_4_72'
		'RF\cRT_4_73'
		'RF\cRT_4_74'
		'RF\cRT_4_75'
		'RF\cRT_4_76'
		'RF\cRT_4_77'
		'RF\cRT_4_78'
		'RF\cRT_4_79'
		'RF\cRT_4_80'
		'RF\cRT_4_81'
		'RF\cRT_4_82'
		'RF\cRT_4_83'
		'RF\cRT_4_84'
		'RF\cRT_4_85'
		'RF\cRT_4_86'
		'RF\cRT_4_87'
		'RF\cRT_4_88'
		'RF\cRT_4_89'
		'RF\cRT_4_90'
		'RF\cRT_4_91'
		'RF\cRT_4_92'
		'RF\cRT_4_93'
		'RF\cRT_4_94'
		'RF\cRT_4_95'
		'RF\cRT_4_96'
		'RF\cRT_4_97'
		'RF\cRT_4_98'
		'RF\cRT_4_99'
		'RF\cRT_4_100'
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


