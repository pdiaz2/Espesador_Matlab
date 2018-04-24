clear all
load carbig
Cylinders = categorical(Cylinders);
Model_Year = categorical(Model_Year);
Origin = categorical(cellstr(Origin));
X = table(Cylinders,Displacement,Horsepower,Weight,Acceleration,Model_Year,...
    Origin,MPG);
countLevels = @(x)numel(categories(categorical(x)));
numLevels = varfun(countLevels,X(:,1:end-1),'OutputFormat','uniform');