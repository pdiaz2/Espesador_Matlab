@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=predictRegEnsemble_mex
set MEX_NAME=predictRegEnsemble_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for predictRegEnsemble > predictRegEnsemble_mex.mki
echo COMPILER=%COMPILER%>> predictRegEnsemble_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> predictRegEnsemble_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> predictRegEnsemble_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> predictRegEnsemble_mex.mki
echo LINKER=%LINKER%>> predictRegEnsemble_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> predictRegEnsemble_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> predictRegEnsemble_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> predictRegEnsemble_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> predictRegEnsemble_mex.mki
echo BORLAND=%BORLAND%>> predictRegEnsemble_mex.mki
echo OMPFLAGS= >> predictRegEnsemble_mex.mki
echo OMPLINKFLAGS= >> predictRegEnsemble_mex.mki
echo EMC_COMPILER=mingw64>> predictRegEnsemble_mex.mki
echo EMC_CONFIG=optim>> predictRegEnsemble_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f predictRegEnsemble_mex.mk
