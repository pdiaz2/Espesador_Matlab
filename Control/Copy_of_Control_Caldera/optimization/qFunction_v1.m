function z = qFunction_v1(X)
% X = [Y U YPast UPast]; YPast doesn't count
z = 1/2*X(:,1:2)*X(:,1:2)'+1/2*X(:,3)*X(:,3);
end