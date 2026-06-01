# build_and_test.ps1 — Parallel build and test for cppwinrt
#
# Default: builds only test\test (and its deps: prebuild, cppwinrt, test_component, etc.)
# -BuildAll: builds all 9 test targets
# -Test:     after building, runs whichever test executables were built
# -Clean:    git clean -dfx . before building (wipes all build artifacts)
# -BinLog:   produce _build\build.binlog for structured error analysis
#
# Usage:
#   .\scripts\build_and_test.ps1                    # build test\test only
#   .\scripts\build_and_test.ps1 -Test              # build test\test + run it
#   .\scripts\build_and_test.ps1 -BuildAll          # build all test targets
#   .\scripts\build_and_test.ps1 -BuildAll -Test    # build all + run all
#   .\scripts\build_and_test.ps1 -Clean -BuildAll   # clean + build all
param(
    [string]$Platform = "x64",
    [string]$Configuration = "Release",
    [switch]$BuildAll,
    [switch]$Test,
    [switch]$Clean,
    [switch]$BinLog
)

$ErrorActionPreference = "Stop"
$root = git -C $PSScriptRoot rev-parse --show-toplevel

if ($Clean) {
    Write-Host "Cleaning workspace (git clean -dfx) ..." -ForegroundColor Yellow
    git -C $root clean -dfx .
}

# Ensure NuGet
if (-not (Test-Path "$root\.nuget\nuget.exe")) {
    New-Item -ItemType Directory -Path "$root\.nuget" -Force | Out-Null
    $ProgressPreference = 'SilentlyContinue'
    Invoke-WebRequest "https://dist.nuget.org/win-x86-commandline/latest/nuget.exe" `
        -OutFile "$root\.nuget\nuget.exe"
}
& "$root\.nuget\nuget.exe" restore "$root\cppwinrt.sln" -Verbosity quiet

# Select targets. Default: just test\test (pulls in prebuild, cppwinrt, test_component, etc.)
if ($BuildAll) {
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
} else {
    $targets = "test\test"
}

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

if (-not $Test) { exit 0 }

# Run tests — only executables that exist (covers both default and -BuildAll)
$testDir = "$buildDir\$Platform\$Configuration"
$testExes = @(
    "test", "test_nocoro", "test_cpp20", "test_cpp20_no_sourcelocation",
    "test_fast", "test_slow", "test_old",
    "test_module_lock_custom", "test_module_lock_none"
)
$failures = @()
foreach ($t in $testExes) {
    $exe = "$testDir\$t.exe"
    if (-not (Test-Path $exe)) { continue }
    Write-Host "RUN  $t" -ForegroundColor Cyan -NoNewline
    & $exe > "$testDir\${t}_results.txt" 2>&1
    if ($LASTEXITCODE -ne 0) {
        Write-Host " FAIL" -ForegroundColor Red
        $failures += $t
    } else {
        Write-Host " PASS" -ForegroundColor Green
    }
}

if ($failures.Count -gt 0) {
    Write-Host "`nFAILED TESTS: $($failures -join ', ')" -ForegroundColor Red
    exit 1
}
Write-Host "`nALL TESTS PASSED" -ForegroundColor Green
