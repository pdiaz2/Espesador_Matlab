function [ readData ] = wrapper_opc_ua( opcParameters, disconnectBool,...
                                            writeBool, message)
%WRAPPER_OPC_UA Wrapper for read/write operations with OPC UA Server
%   OPC Server must be LOCAL (localhost).
%   Server string *could* be supplied from Simulink (not Workspace) using
%   this idea: https://la.mathworks.com/matlabcentral/answers/30149-text-input-in-simulink
%   Inputs:
%   - opcParameters: vector that contains information for retrieval os
%   server info (thickener location, specific PV locations)
%   - disconnectBool = value after which the ua_client should disconnect
%   - writeBool: true if wrapper is used for writing
%   - message: values to be written
% 
persistent ua_client
MV = zeros(2,1);
messageCell = num2cell(message);
killOPC = false;
%% Connection to OPC Client
if isempty(ua_client)
%     fprintf('No creado')
%     ua_client = opcua('opc.tcp://localhost:4840/freeopcua/server/');
    ua_client = opcua('opc.tcp://localhost:4840/freeopcua/server/');
    connect(ua_client)
else
    if isConnected(ua_client)
%         fprintf('Conectado')
    elseif disconnectBool
        % Do nothing, OPC Server should remain disconnected
        killOPC = true;
    else
%         fprintf('Desconectado')
        connect(ua_client)
    end
end
if killOPC
    % Do nothing
    readData = MV;
else
    %% Namespace
    nodes = getNamespace(ua_client);
    thickener = nodes(opcParameters(1));
    processVar = thickener.Children;

    %% Read/Write Operations
    if writeBool
        % Write CV
        cvOPCIndex = [opcParameters(4):opcParameters(5)-1];
        writeValue(ua_client,processVar(cvOPCIndex),...
                   messageCell(1:length(cvOPCIndex)));
        % Write DV
        dvOPCIndex = [opcParameters(6):opcParameters(7)];
        writeValue(ua_client,processVar(dvOPCIndex),...
                   messageCell(length(cvOPCIndex)+1:length(cvOPCIndex)+length(dvOPCIndex)));

    else
        % Read MV values, specified in positions opcParameters(3
        mvOPCIndex = [opcParameters(5):opcParameters(6)-1];
        MV = readValue(ua_client,processVar(mvOPCIndex));
    end
    %% Output Results
    readData = MV;
    %% Disconnect if necessary
    if disconnectBool
       disconnect(ua_client) 
    else

    end
end
end

