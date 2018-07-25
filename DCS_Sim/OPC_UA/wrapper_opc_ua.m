function [ y ] = wrapper_opc_ua( u )
%WRAPPER_OPC_UA Summary of this function goes here
%   Detailed explanation goes here
persistent ua_client
if isempty(ua_client)
    fprintf('No creado')
    ua_client = opcua('opc.tcp://localhost:4840/freeopcua/server/');
    connect(ua_client)
else
    if isConnected(ua_client)
        fprintf('Conectado')
    else
        fprintf('Desconectado')
        connect(ua_client)
    end
end

%%
nodes = getNamespace(ua_client);
thickener = nodes(4);
ProcessVar = thickener.Children;
writeValue(ua_client,ProcessVar(1:3),{4,5,6});
disconnect(ua_client);
y = 100;
end

