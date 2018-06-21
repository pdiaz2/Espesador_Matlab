function [ A, y , Cz] = cell_average(z,Dz,N,opt,Z,Zr1,Zr2)

A = zeros(N+3,1);
y = zeros(N+4,1);
Cz = zeros(N+3,1);
for i=1:N+3
   Cz(i) = integral(@(x) cross_section(x,opt),z(i),z(i+1)); 
   y(i) = integral(@(x) bounds(x,opt),z(i)-Dz/2,z(i)+Dz/2)/Dz; 
end
   A = Cz/Dz;
for i=N+4:N+4
   y(i) = integral(@(x) bounds(x,opt),z(i)-Dz/2,z(i)+Dz/2)/Dz;
end

[~,jr1] = max(z(Zr1>z));
[~,jr2] = max(z(Zr2>z));
Cz = Cz.*and(Z>=Z(jr1),Z<=Z(jr2));
Cz = Cz/sum(Cz);
end

