% pathPy = '';
% pyversion C:/Python27_64/python.exe
import py.textwrap.wrap
S = wrap('This is a string');
import py.sys.path
% Very important: we are still coding in matlab
display(path)
% 
N = py.list({'Jones','Johnson','James'});
names = py.mymod.search(N);

sim('pyTrials.slx');