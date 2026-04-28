@echo off

set "target_platform=%~1"
if "%target_platform%"=="" set "target_platform=x64"

set "vsdevcmd_arch="
if /I "%target_platform%"=="x86" set "vsdevcmd_arch=x86"
if /I "%target_platform%"=="x64" set "vsdevcmd_arch=x64"
if /I "%target_platform%"=="arm64" set "vsdevcmd_arch=arm64"

if "%vsdevcmd_arch%"=="" (
    echo Unsupported target platform "%target_platform%". Expected one of: x86, x64, arm64.
    exit /b 1
)

set "vswhere_path=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
set "vs_install_path="

if exist "%vswhere_path%" for /f "usebackq delims=" %%i in (`"%vswhere_path%" -latest -products * -property installationPath`) do set "vs_install_path=%%i"
if "%vs_install_path%"=="" if exist "%vswhere_path%" for /f "usebackq delims=" %%i in (`"%vswhere_path%" -latest -prerelease -products * -property installationPath`) do set "vs_install_path=%%i"
if "%vs_install_path%"=="" if exist "%vswhere_path%" for /f "usebackq delims=" %%i in (`"%vswhere_path%" -all -products * -property installationPath`) do if "%vs_install_path%"=="" set "vs_install_path=%%i"

if not "%VSCMD_VER%"=="" goto :resolve_msbuild

if not exist "%vswhere_path%" (
    echo Could not find vswhere at "%vswhere_path%".
    exit /b 1
)

if "%vs_install_path%"=="" (
    echo Could not locate a Visual Studio installation.
    exit /b 1
)

set "vsdevcmd_path=%vs_install_path%\Common7\Tools\VsDevCmd.bat"
if not exist "%vsdevcmd_path%" (
    echo Could not find VsDevCmd.bat at "%vsdevcmd_path%".
    exit /b 1
)

call "%vsdevcmd_path%" -no_logo -startdir=none -host_arch=x64 -arch=%vsdevcmd_arch%
if errorlevel 1 (
    echo VsDevCmd failed for target "%target_platform%".
    exit /b 1
)

:resolve_msbuild
set "resolved_msbuild=msbuild"
where msbuild >nul 2>&1
if not errorlevel 1 goto :set_msbuild

if not "%vs_install_path%"=="" set "resolved_msbuild=%vs_install_path%\MSBuild\Current\Bin\MSBuild.exe"
if exist "%resolved_msbuild%" goto :set_msbuild

if not exist "%vswhere_path%" (
    echo Could not find msbuild in PATH and could not find vswhere at "%vswhere_path%".
    exit /b 1
)

set "resolved_msbuild="
for /f "usebackq delims=" %%i in (`"%vswhere_path%" -latest -products * -find MSBuild\Current\Bin\MSBuild.exe`) do set "resolved_msbuild=%%i"

if "%resolved_msbuild%"=="" (
    echo Could not locate MSBuild.exe.
    exit /b 1
)

:set_msbuild
set "MSBUILD_CMD=%resolved_msbuild%"
exit /b 0
