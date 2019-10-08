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
  call %0 arm !target_configuration!
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

echo Building projection into %target_platform% %target_configuration%
%~p0\build\x64\Release\cppwinrt.exe -in local -out %~p0\build\%target_platform%\%target_configuration% -verbose
echo.
