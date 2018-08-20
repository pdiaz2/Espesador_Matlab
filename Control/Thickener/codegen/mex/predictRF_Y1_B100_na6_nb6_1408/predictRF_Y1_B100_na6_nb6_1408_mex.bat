@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=predictRF_Y1_B100_na6_nb6_1408_mex
set MEX_NAME=predictRF_Y1_B100_na6_nb6_1408_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for predictRF_Y1_B100_na6_nb6_1408 > predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo COMPILER=%COMPILER%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo LINKER=%LINKER%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo BORLAND=%BORLAND%>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo OMPFLAGS= >> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo OMPLINKFLAGS= >> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo EMC_COMPILER=mingw64>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
echo EMC_CONFIG=optim>> predictRF_Y1_B100_na6_nb6_1408_mex.mki
"C:\Program Files\MATLAB\R2017a\bin\win64\gmake" -B -f predictRF_Y1_B100_na6_nb6_1408_mex.mk
