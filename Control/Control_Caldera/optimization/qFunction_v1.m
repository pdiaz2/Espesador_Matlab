function z = qFunction_v1(X)
% X = [Y U];
z = 1/2*X(:,1:2)*X(:,1:2)'^2+1/2*X(:,3)*X(:,3);
end