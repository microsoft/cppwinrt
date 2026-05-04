# run_cppwinrt.ps1 — Run cppwinrt.exe to generate projection headers
# Usage: .\scripts\run_cppwinrt.ps1 [-Platform x64] [-Configuration Release] [-OutputDir build\projection]
#
# Generates projection headers from local winmd into a directory under build/.
# Use this when you need to regenerate headers after changing strings/ or cppwinrt/ code.
param(
    [string]$Platform = "x64",
    [string]$Configuration = "Release",
    [string]$OutputDir = ""
)

$ErrorActionPreference = "Stop"
$root = git -C $PSScriptRoot rev-parse --show-toplevel

$cppwinrtExe = "$root\_build\$Platform\$Configuration\cppwinrt.exe"
if (-not (Test-Path $cppwinrtExe)) {
    Write-Error "cppwinrt.exe not found at $cppwinrtExe. Run build_and_test.ps1 -BuildOnly first."
    exit 1
}

if (-not $OutputDir) {
    $OutputDir = "$root\build\projection\$Platform\$Configuration"
}
# Ensure output is under build/ (relative to repo root)
if (-not [System.IO.Path]::IsPathRooted($OutputDir)) {
    $OutputDir = Join-Path $root $OutputDir
}

New-Item -ItemType Directory -Path $OutputDir -Force | Out-Null

Write-Host "Running cppwinrt.exe:" -ForegroundColor Cyan
Write-Host "  Input:  local" -ForegroundColor Gray
Write-Host "  Output: $OutputDir" -ForegroundColor Gray

& $cppwinrtExe -in local -out $OutputDir
$exitCode = $LASTEXITCODE

if ($exitCode -ne 0) {
    Write-Host "cppwinrt.exe FAILED (exit code $exitCode)" -ForegroundColor Red
    exit $exitCode
}

Write-Host "Projection generated at: $OutputDir" -ForegroundColor Green
