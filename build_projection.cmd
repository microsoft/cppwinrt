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

set cppwinrt_exe=%~p0\_build\x64\Release\cppwinrt.exe

if not exist "%cppwinrt_exe%" (
 echo Remember to build the "prebuild" and then "cppwinrt" projects for Release x64 first
 goto :eof
)

echo Building projection into %target_platform% %target_configuration%
%cppwinrt_exe% -in local -out %~p0\_build\%target_platform%\%target_configuration% -verbose
echo.
