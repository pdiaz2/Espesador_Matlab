function [ Y ] = predictRF_Y2_B100_na6_nb6_1408( X,numTrees,numPredictors )
%#codegen
%PREDICTRF_Y2 Random Forest Prediction for codegeneration for Y2
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
		'RF\cRT_2_1'
		'RF\cRT_2_2'
		'RF\cRT_2_3'
		'RF\cRT_2_4'
		'RF\cRT_2_5'
		'RF\cRT_2_6'
		'RF\cRT_2_7'
		'RF\cRT_2_8'
		'RF\cRT_2_9'
		'RF\cRT_2_10'
		'RF\cRT_2_11'
		'RF\cRT_2_12'
		'RF\cRT_2_13'
		'RF\cRT_2_14'
		'RF\cRT_2_15'
		'RF\cRT_2_16'
		'RF\cRT_2_17'
		'RF\cRT_2_18'
		'RF\cRT_2_19'
		'RF\cRT_2_20'
		'RF\cRT_2_21'
		'RF\cRT_2_22'
		'RF\cRT_2_23'
		'RF\cRT_2_24'
		'RF\cRT_2_25'
		'RF\cRT_2_26'
		'RF\cRT_2_27'
		'RF\cRT_2_28'
		'RF\cRT_2_29'
		'RF\cRT_2_30'
		'RF\cRT_2_31'
		'RF\cRT_2_32'
		'RF\cRT_2_33'
		'RF\cRT_2_34'
		'RF\cRT_2_35'
		'RF\cRT_2_36'
		'RF\cRT_2_37'
		'RF\cRT_2_38'
		'RF\cRT_2_39'
		'RF\cRT_2_40'
		'RF\cRT_2_41'
		'RF\cRT_2_42'
		'RF\cRT_2_43'
		'RF\cRT_2_44'
		'RF\cRT_2_45'
		'RF\cRT_2_46'
		'RF\cRT_2_47'
		'RF\cRT_2_48'
		'RF\cRT_2_49'
		'RF\cRT_2_50'
		'RF\cRT_2_51'
		'RF\cRT_2_52'
		'RF\cRT_2_53'
		'RF\cRT_2_54'
		'RF\cRT_2_55'
		'RF\cRT_2_56'
		'RF\cRT_2_57'
		'RF\cRT_2_58'
		'RF\cRT_2_59'
		'RF\cRT_2_60'
		'RF\cRT_2_61'
		'RF\cRT_2_62'
		'RF\cRT_2_63'
		'RF\cRT_2_64'
		'RF\cRT_2_65'
		'RF\cRT_2_66'
		'RF\cRT_2_67'
		'RF\cRT_2_68'
		'RF\cRT_2_69'
		'RF\cRT_2_70'
		'RF\cRT_2_71'
		'RF\cRT_2_72'
		'RF\cRT_2_73'
		'RF\cRT_2_74'
		'RF\cRT_2_75'
		'RF\cRT_2_76'
		'RF\cRT_2_77'
		'RF\cRT_2_78'
		'RF\cRT_2_79'
		'RF\cRT_2_80'
		'RF\cRT_2_81'
		'RF\cRT_2_82'
		'RF\cRT_2_83'
		'RF\cRT_2_84'
		'RF\cRT_2_85'
		'RF\cRT_2_86'
		'RF\cRT_2_87'
		'RF\cRT_2_88'
		'RF\cRT_2_89'
		'RF\cRT_2_90'
		'RF\cRT_2_91'
		'RF\cRT_2_92'
		'RF\cRT_2_93'
		'RF\cRT_2_94'
		'RF\cRT_2_95'
		'RF\cRT_2_96'
		'RF\cRT_2_97'
		'RF\cRT_2_98'
		'RF\cRT_2_99'
		'RF\cRT_2_100'
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

