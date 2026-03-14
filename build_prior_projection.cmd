@echo off

setlocal ENABLEDELAYEDEXPANSION

set target_platform=%1
set target_configuration=%2
if "%target_platform%"=="" set target_platform=x64

if /I "%target_platform%" equ "all" (
  if "%target_configuration%"=="" (
    set target_configuration=all
  )
  call %0 x86 !target_configuration!
  call %0 x64 !target_configuration!
  call %0 arm64 !target_configuration!
  goto :eof
)

if /I "%target_configuration%" equ "all" (
  call %0 %target_platform% Debug
  call %0 %target_platform% Release
  goto :eof
)

if "%target_configuration%"=="" (
 set target_configuration=Debug
)

set reference_output=%~p0\_reference\%target_platform%\%target_configuration%
if exist "%reference_output%" (
 echo Removing existing reference projections
 rmdir /s /q "%reference_output%"
)

if not exist ".\.nuget" mkdir ".\.nuget"
if not exist ".\.nuget\nuget.exe" powershell -Command "$ProgressPreference = 'SilentlyContinue' ; Invoke-WebRequest https://dist.nuget.org/win-x86-commandline/latest/nuget.exe -OutFile .\.nuget\nuget.exe"

mkdir %reference_output%\package
.\.nuget\nuget.exe install Microsoft.Windows.CppWinRT -o %reference_output%\package
set reference_cppwinrt=
for /F "delims=" %%a in ('dir /s /b %reference_output%\package\cppwinrt.exe') DO set reference_cppwinrt=%%a
if "%reference_cppwinrt%"=="" (
 echo Could not find the reference cppwinrt.exe under %reference_output%\package
 goto :EOF
)

echo Generating reference projection from %reference_cppwinrt% to %reference_output%\cppwinrt
%reference_cppwinrt% -in local -out %reference_output% -verbose
echo.
