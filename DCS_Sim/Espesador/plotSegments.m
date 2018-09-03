ix = { 1:10, 11:20, 21:40 };
colors = 'gbr';
figure; cla;
for i=1:3
    plot(ix{i},ix{i},'Color',colors(i)); hold on
end


