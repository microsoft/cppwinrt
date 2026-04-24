<#
.SYNOPSIS
    Verifies that generated C++/WinRT headers contain [[deprecated]] annotations
    for types known to be deprecated in Windows SDK metadata.

.DESCRIPTION
    Runs cppwinrt.exe to generate headers for a namespace with deprecated types,
    then checks that the output contains expected [[deprecated("...")]] annotations.
#>
param(
    [string]$CppWinRTExe = "$PSScriptRoot\..\_build\x64\Release\cppwinrt.exe",
    [string]$OutDir = "$env:TEMP\cppwinrt_deprecated_verify"
)

$ErrorActionPreference = "Stop"

if (-not (Test-Path $CppWinRTExe)) {
    Write-Error "cppwinrt.exe not found at $CppWinRTExe. Build the project first."
    exit 1
}

# Clean output directory
if (Test-Path $OutDir) { Remove-Item $OutDir -Recurse -Force }
New-Item $OutDir -ItemType Directory | Out-Null

Write-Host "Generating projection for Windows.Media.PlayTo..." -ForegroundColor Cyan
& $CppWinRTExe -in local -out $OutDir -include "Windows.Media.PlayTo" 2>&1 | Out-Null

$failures = 0
$passes = 0

function Assert-FileContains($File, $Pattern, $Description) {
    $match = Select-String -Path $File -Pattern $Pattern -Quiet
    if ($match) {
        Write-Host "  PASS: $Description" -ForegroundColor Green
        $script:passes++
    } else {
        Write-Host "  FAIL: $Description" -ForegroundColor Red
        $script:failures++
    }
}

function Assert-FileNotContains($File, $Pattern, $Description) {
    $match = Select-String -Path $File -Pattern $Pattern -Quiet
    if (-not $match) {
        Write-Host "  PASS: $Description" -ForegroundColor Green
        $script:passes++
    } else {
        Write-Host "  FAIL: $Description (found unexpected match)" -ForegroundColor Red
        $script:failures++
    }
}

Write-Host "`nChecking deprecated enum annotations..." -ForegroundColor Cyan
$header0 = "$OutDir\winrt\impl\Windows.Media.PlayTo.0.h"
Assert-FileContains $header0 '\[\[deprecated\("PlayToConnectionError' "Deprecated enum PlayToConnectionError"
Assert-FileContains $header0 '\[\[deprecated\("PlayToConnectionState' "Deprecated enum PlayToConnectionState"

Write-Host "`nChecking deprecated method annotations..." -ForegroundColor Cyan
Assert-FileContains $header0 '\[\[deprecated\(.*\)\]\].*auto State\(\) const' "Deprecated method State() on IPlayToConnection"

Write-Host "`nChecking deprecated interface redeclarations..." -ForegroundColor Cyan
$headerMain = "$OutDir\winrt\Windows.Media.PlayTo.h"
Assert-FileContains $headerMain 'struct \[\[deprecated\(.*\)\]\] IPlayToConnection;' "Deprecated interface redeclaration IPlayToConnection"
Assert-FileContains $headerMain 'struct \[\[deprecated\(.*\)\]\] IPlayToManager;' "Deprecated interface redeclaration IPlayToManager"

Write-Host "`nChecking deprecated class redeclarations..." -ForegroundColor Cyan
Assert-FileContains $headerMain 'struct \[\[deprecated\(.*\)\]\] PlayToConnection;' "Deprecated class redeclaration PlayToConnection"
Assert-FileContains $headerMain 'struct \[\[deprecated\(.*\)\]\] PlayToManager;' "Deprecated class redeclaration PlayToManager"
Assert-FileContains $headerMain 'struct \[\[deprecated\(.*\)\]\] PlayToSource;' "Deprecated class redeclaration PlayToSource"

Write-Host "`nChecking deprecated static methods..." -ForegroundColor Cyan
$header2 = "$OutDir\winrt\impl\Windows.Media.PlayTo.2.h"
Assert-FileContains $header2 '\[\[deprecated\(.*\)\]\].*static auto GetForCurrentView' "Deprecated static method GetForCurrentView"

Write-Host "`nChecking non-deprecated types are clean..." -ForegroundColor Cyan
Assert-FileNotContains $headerMain 'struct \[\[deprecated.*PlayToReceiver;' "PlayToReceiver should NOT be deprecated"

Write-Host "`n---"
Write-Host "Results: $passes passed, $failures failed" -ForegroundColor $(if ($failures -eq 0) { "Green" } else { "Red" })

# Cleanup
Remove-Item $OutDir -Recurse -Force

if ($failures -gt 0) { exit 1 }
