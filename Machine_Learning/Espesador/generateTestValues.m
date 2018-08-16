for cv = 1:3
   b = cv*1e4*ones(1,10000);
   c = 0:999;
   SimResults.CV(cv).GroupedTimeSeries = b+c;
   SimResults.CV(cv).Name = ['CV' num2str(cv)];
end

for mv = 1:2
    b = (mv+3)*1e4*ones(1,1000);
    c = 0:999;
    SimResults.MV(mv).GroupedTimeSeries = b+c;
    SimResults.MV(mv).Name = ['MV' num2str(mv)];
end

for dv = 1:2
    b = (dv+5)*1e4*ones(1,1000);
    c = 0:999;
    SimResults.DV(dv).GroupedTimeSeries = b+c;
    SimResults.DV(dv).Name = ['DV' num2str(dv)];
end
SimResults.groupBy = 60;