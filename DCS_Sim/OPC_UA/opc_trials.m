% clc;
% serverList = opcuaserverinfo('opc.tcp://146.155.14.192:4840/freeopcua/server/');
% uaClient = opcua(serverList);
% % disp(uaClient)
% connect(uaClient)
clear;
clc;
% global ua_client
% ua_client = opcua('opc.tcp://146.155.14.192:4840/freeopcua/server/');
% ua_client = opcua('opc.tcp://localhost:16664/OpenOpcUaServer/');
ua_client = opcua('opc.tcp://localhost:4840/freeopcua/server/');
connect(ua_client)
%%
nodes = getNamespace(ua_client);
sstat = getServerStatus(ua_client);
% NodeList = browseNamespace(ua_client);
%%
server = nodes(1);
serverArray = server.Children(1);
namespaceArray = server.Children(2);
% for ch = 1:length(nodes(1).Children)
%     readValue(ua_client,nodes(1).Children(ch))
% end
% 
% for ch = 1:length(nodes(1).Children(11).Children.Children)
%     readValue(ua_client,nodes(1).Children(11).Children.Children(ch))
% end
%%
% disconnect(ua_client)