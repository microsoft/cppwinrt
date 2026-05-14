<#
.SYNOPSIS
    Verifies that [[deprecated]] annotations work correctly with precompiled headers (PCH).

.DESCRIPTION
    Generates projection headers for a deprecated Windows SDK namespace, creates a PCH
    that includes those headers, then verifies:
    1. PCH creation succeeds with /W4 /WX
    2. Source files using the PCH but NOT using deprecated APIs compile clean
    3. Source files using deprecated APIs WITH pragma suppress compile clean
    4. Source files using deprecated APIs WITHOUT suppress trigger C4996 warning
#>
[CmdLetBinding()]
Param(
    [string] $CppWinRTExe = "G:\cppwinrt\_build\x64\Release\cppwinrt.exe"
)

$ErrorActionPreference = "Continue"
$passed = 0
$failed = 0

function Test-Check {
    param([string]$Name, [bool]$Condition)
    if ($Condition) {
        Write-Host "  PASS: $Name" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: $Name" -ForegroundColor Red
        $script:failed++
    }
}

# Find MSVC
$clPath = "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC"
$clVersion = Get-ChildItem $clPath | Sort-Object Name -Descending | Select-Object -First 1
$cl = "$($clVersion.FullName)\bin\Hostx64\x64\cl.exe"

# Find Windows SDK
$sdkInc = Get-ChildItem "C:\Program Files (x86)\Windows Kits\10\Include" | Sort-Object Name -Descending | Select-Object -First 1
$sdkIncPath = $sdkInc.FullName

Write-Host "MSVC: $cl"
Write-Host "SDK:  $sdkIncPath"

# Create temp directories
$genDir = Join-Path $env:TEMP "pch_deprecated_gen_$(Get-Random)"
$testDir = Join-Path $env:TEMP "pch_deprecated_test_$(Get-Random)"
New-Item -ItemType Directory -Path $genDir, $testDir -Force | Out-Null

try {
    # Generate projection for a deprecated namespace
    Write-Host "`nGenerating projection for Windows.Media.PlayTo..."
    & $CppWinRTExe -in sdk -out $genDir -filter Windows.Media.PlayTo
    if ($LASTEXITCODE -ne 0) { throw "cppwinrt.exe failed" }

    $commonArgs = @(
        "/std:c++20", "/W4", "/WX", "/EHsc", "/MD",
        "/I", $genDir,
        "/I", "$sdkIncPath\ucrt",
        "/I", "$sdkIncPath\um",
        "/I", "$sdkIncPath\shared",
        "/I", "$sdkIncPath\winrt",
        "/I", "$sdkIncPath\cppwinrt",
        "/I", "$($clVersion.FullName)\include"
    )

    # Create PCH header
    @"
#pragma once
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Media.PlayTo.h"
"@ | Set-Content "$testDir\pch.h"
    @"
#include "pch.h"
"@ | Set-Content "$testDir\pch.cpp"

    # Step 1: Create PCH
    Write-Host "`n=== PCH Creation ==="
    & $cl @commonArgs /Yc"pch.h" /Fp"$testDir\pch.pch" /c "$testDir\pch.cpp" /Fo"$testDir\pch.obj" 2>&1 | Out-Null
    Test-Check "PCH creation with deprecated headers succeeds with /W4 /WX" ($LASTEXITCODE -eq 0)

    # Step 2: Clean compilation (no deprecated usage)
    @"
#include "pch.h"
void clean_test() {
    winrt::Windows::Foundation::Uri uri{ L"http://example.com" };
    (void)uri;
}
"@ | Set-Content "$testDir\test_clean.cpp"
    & $cl @commonArgs /Yu"pch.h" /Fp"$testDir\pch.pch" /c "$testDir\test_clean.cpp" /Fo"$testDir\test_clean.obj" 2>&1 | Out-Null
    Test-Check "Source using PCH without deprecated usage compiles clean" ($LASTEXITCODE -eq 0)

    # Step 3: Deprecated usage with suppression
    @"
#include "pch.h"
#pragma warning(push)
#pragma warning(disable: 4996)
void suppressed_test() {
    auto s = winrt::Windows::Media::PlayTo::PlayToConnectionState::Connected;
    (void)s;
}
#pragma warning(pop)
"@ | Set-Content "$testDir\test_suppress.cpp"
    & $cl @commonArgs /Yu"pch.h" /Fp"$testDir\pch.pch" /c "$testDir\test_suppress.cpp" /Fo"$testDir\test_suppress.obj" 2>&1 | Out-Null
    Test-Check "Deprecated usage with pragma suppress compiles clean with /WX" ($LASTEXITCODE -eq 0)

    # Step 4: Deprecated usage without suppression (should warn, not error)
    @"
#include "pch.h"
void warn_test() {
    auto s = winrt::Windows::Media::PlayTo::PlayToConnectionState::Connected;
    (void)s;
}
"@ | Set-Content "$testDir\test_warn.cpp"
    $noWxArgs = $commonArgs | ForEach-Object { if ($_ -ne "/WX") { $_ } }
    $warnOutput = & $cl @noWxArgs /Yu"pch.h" /Fp"$testDir\pch.pch" /c "$testDir\test_warn.cpp" /Fo"$testDir\test_warn.obj" 2>&1 | Out-String
    Test-Check "Deprecated usage without suppress triggers C4996 warning" ($warnOutput -match "C4996")
    Test-Check "Warning message includes deprecation text" ($warnOutput -match "PlayToConnectionState")

    Write-Host "`n=== Results ==="
    Write-Host "$passed passed, $failed failed out of $($passed + $failed) checks"

    if ($failed -gt 0) { throw "$failed check(s) failed" }
    Write-Host "`nAll PCH checks passed!" -ForegroundColor Green
}
finally {
    Remove-Item -Recurse -Force $genDir, $testDir -ErrorAction SilentlyContinue
}
