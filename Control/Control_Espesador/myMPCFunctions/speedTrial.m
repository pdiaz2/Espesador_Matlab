clear;
clc;
pause(2);

V0 = [1:1000]';
fprintf('bench\r\n');
tic;
VBench = repmat(V0,1,100);
toc;
%%
fprintf('1\r\n')
tic;
V1 = V0(:, ones(100,1));
toc;
%%
fprintf('2\r\n')
tic;
V2 = V0 * ones(1,100);
toc;
%%
fprintf('3\r\n')
tic;
V3 = kron(V0, ones(1,100));
toc;
%%
fprintf('4\r\n')
tic;
V4 = [V0 V0 V0];
toc;
%%
fprintf('5\r\n')
tic;

V5 = arrayfun(@(~)V0, 1:100, 'uniformoutput', false);
V5 = cat(2, V5{:});

toc;
%%
fprintf('6\r\n')
tic;
[Vi{1:100}] = deal(V0);
V6 = [Vi{:}];

toc;
%%
fprintf('7\r\n')
tic;

M = bsxfun(@times, ones(1,100), V0);

toc;
