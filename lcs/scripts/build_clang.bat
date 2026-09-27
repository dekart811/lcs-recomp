@echo off
setlocal EnableExtensions
for %%I in ("%~dp0..\..") do set "REPO=%%~fI"
set "BUILD=%REPO%\out\lcs-clang"
set "LLVM=C:\Program Files\LLVM\bin"

if not exist "%LLVM%\clang-cl.exe" (
  echo clang-cl not found at "%LLVM%".
  pause
  exit /b 3
)
for /f "usebackq delims=" %%I in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -property installationPath`) do set "VS=%%I"
call "%VS%\VC\Auxiliary\Build\vcvars64.bat" >nul || exit /b 4

if not exist "%BUILD%\build.ninja" (
  cmake -S "%REPO%" -B "%BUILD%" -G Ninja -DCMAKE_BUILD_TYPE=Release ^
    -DCMAKE_C_COMPILER="%LLVM%\clang-cl.exe" -DCMAKE_CXX_COMPILER="%LLVM%\clang-cl.exe" ^
    -DCMAKE_LINKER="%LLVM%\lld-link.exe" -DCMAKE_RC_COMPILER="%LLVM%\llvm-rc.exe" || exit /b 5
)
ninja -C "%BUILD%" LCSNative
set "CODE=%errorlevel%"
if not "%CODE%"=="0" pause
exit /b %CODE%
