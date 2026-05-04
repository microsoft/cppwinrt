# build_and_test.ps1 — Single-invocation build and test for cppwinrt
# Usage: .\scripts\build_and_test.ps1 [-Platform x64] [-Configuration Release] [-BuildOnly] [-BinLog]
param(
    [string]$Platform = "x64",
    [string]$Configuration = "Release",
    [switch]$BuildOnly,
    [switch]$BinLog
)

$ErrorActionPreference = "Stop"
$root = git -C $PSScriptRoot rev-parse --show-toplevel

# Ensure NuGet
if (-not (Test-Path "$root\.nuget\nuget.exe")) {
    New-Item -ItemType Directory -Path "$root\.nuget" -Force | Out-Null
    $ProgressPreference = 'SilentlyContinue'
    Invoke-WebRequest "https://dist.nuget.org/win-x86-commandline/latest/nuget.exe" `
        -OutFile "$root\.nuget\nuget.exe"
}
& "$root\.nuget\nuget.exe" restore "$root\cppwinrt.sln" -Verbosity quiet

# Build ALL targets in one msbuild invocation.
# The solution already has ProjectDependencies:
#   prebuild -> (none)
#   cppwinrt -> prebuild
#   test_component -> cppwinrt
#   test -> cppwinrt + test_component + test_component_no_pch
#   (etc.)
# /m lets MSBuild parallelize across the dependency graph.
$targets = @(
    "test\test",
    "test\test_nocoro",
    "test\test_cpp20",
    "test\test_cpp20_no_sourcelocation",
    "test\test_fast",
    "test\test_slow",
    "test\test_module_lock_custom",
    "test\test_module_lock_none",
    "test\old_tests\test_old"
) -join ";"

$buildDir = "$root\_build"
New-Item -ItemType Directory -Path $buildDir -Force | Out-Null

$msbuildArgs = @(
    "$root\cppwinrt.sln",
    "/v:m", "/m",
    "/p:Configuration=$Configuration",
    "/p:Platform=$Platform",
    "/t:$targets"
)
if ($BinLog) {
    $msbuildArgs += "/bl:$buildDir\build.binlog"
}

Write-Host "Building: $targets" -ForegroundColor Cyan
$buildLog = "$buildDir\build_output.log"
& msbuild @msbuildArgs 2>&1 | Tee-Object -FilePath $buildLog
$buildExitCode = $LASTEXITCODE

if ($buildExitCode -ne 0) {
    Write-Host "BUILD FAILED (exit code $buildExitCode)" -ForegroundColor Red
    Write-Host "Full log: $buildLog"
    exit $buildExitCode
}

Write-Host "BUILD SUCCEEDED" -ForegroundColor Green

if ($BuildOnly) { exit 0 }

# Run tests
$testDir = "$buildDir\$Platform\$Configuration"
$testExes = @(
    "test", "test_nocoro", "test_cpp20", "test_cpp20_no_sourcelocation",
    "test_fast", "test_slow", "test_old",
    "test_module_lock_custom", "test_module_lock_none"
)
$failures = @()
foreach ($test in $testExes) {
    $exe = "$testDir\$test.exe"
    if (-not (Test-Path $exe)) {
        Write-Host "SKIP $test (not found)" -ForegroundColor Yellow
        continue
    }
    Write-Host "RUN  $test" -ForegroundColor Cyan -NoNewline
    & $exe > "$testDir\${test}_results.txt" 2>&1
    if ($LASTEXITCODE -ne 0) {
        Write-Host " FAIL" -ForegroundColor Red
        $failures += $test
    } else {
        Write-Host " PASS" -ForegroundColor Green
    }
}

if ($failures.Count -gt 0) {
    Write-Host "`nFAILED TESTS: $($failures -join ', ')" -ForegroundColor Red
    exit 1
}
Write-Host "`nALL TESTS PASSED" -ForegroundColor Green
