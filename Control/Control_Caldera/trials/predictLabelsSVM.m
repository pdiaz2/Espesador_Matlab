function label = predictLabelsSVM(x) %#codegen
%PREDICTLABELSSVM Label new observations using trained SVM model Mdl
%   predictLabelsSVM predicts the vector of labels label using 
%   the saved SVM model Mdl and the predictor data x.
X = [31,30,40,39,35,45,42,41,37,37];
Mdl = loadCompactModel('SVMModel');
Mdl = loadCompactModel('RF\cRT_1_1');
Mdl = loadCompactModel('RF\cRT_1_2');
% Mdl_2 = loadCompactModel('RF\cRT_1_1');
label = predict(Mdl,X);
% label = predict(Mdl_2,X);
end

