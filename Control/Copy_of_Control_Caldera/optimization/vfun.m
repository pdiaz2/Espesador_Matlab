function y = vfun(x)

lala = tontera(x);
y = -x(:,1).^2 - x(:,2).^2 - x(:,3).^2+lala;
end

function sumaTonta = tontera(x)
    sumaTonta(:,1) = 6+x(:,1);
    sumaTonta(:,2) = 7+x(:,2);
    sumaTonta(:,3) = 8+x(:,3);
end