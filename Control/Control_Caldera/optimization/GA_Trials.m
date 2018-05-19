my_fun([2 3]);
%% Vectorized Fashion
% Makes computation of objective function faster

% If you have a nonlinear constraint, be sure to write the constraint in a 
% vectorized fashion. For details, see Vectorized Constraints.

% Set the UseVectorized option to true using optimoptions, or set User function evaluation > 
% Evaluate objective/fitness and constraint functions to vectorized in the Optimization app.
% For patternsearch, also set UseCompletePoll to true. Be sure to pass the options structure to the solver.

% To use my_fun as a vectorized objective function for patternsearch:

options = optimoptions('patternsearch','UseCompletePoll',true,'UseVectorized',true);
[x fval] = patternsearch(@my_fun2,[1 1],[],[],[],[],[],[],...
    [],options);
% The [] are no constraints, and [1 1] is initial point for pattern search.

% To use my_fun as a vectorized objective function for ga:

options = optimoptions('ga','UseVectorized',true);
[x fval] = ga(@my_fun2,2,[],[],[],[],[],[],[],options);

%% Vectorized cosntraints
% The following code gives these nonlinear constraints in a vectorized fashion, 
% assuming that the rows of your input matrix x are your population or input vectors:



options = optimoptions('patternsearch','UseCompletePoll',true,'UseVectorized',true);
[x fval] = patternsearch(@vfun,[1,1,2],[],[],[],[],[],[],...
    @nlinconst,options)
% Optimization terminated: mesh size less than options.MeshTolerance
%  and constraint violation is less than options.ConstraintTolerance.
% 

% Using ga:

options = optimoptions('ga','UseVectorized',true);
[x fval] = ga(@vfun,3,[],[],[],[],[],[],@nlinconst,options)
% Optimization terminated: maximum number of generations exceeded.
%%
clear all;
options = optimoptions('ga','UseVectorized',true,'Display','off','MaxStallGenerations',500,'PopulationSize',100,'MaxGenerations',100);
tic;
[x,fval,exitflag,output] = ga(qrFunction(x),2,[],[],[],[],[],[],@nlinconst_2,options);
toc;