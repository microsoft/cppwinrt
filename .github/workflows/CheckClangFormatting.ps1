$VSDevCmd = & "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere" -latest -find Common7\tools\VSDevCmd.bat
if (!$VSDevCmd) { exit 1 }
Write-Host "Using VSDevCmd: ${VSDevCmd}"
& $VSDevCmd;

$originalLocation = Get-Location
Set-Location $PSScriptRoot\..\..\

& .\find_clang_format.cmd
if ($LASTEXITCODE -ne 0) {
    exit $LASTEXITCODE
}

& git clang-format origin/master --binary "$env:CLANG_FORMAT" --style file -- cppwinrt/*.h cppwinrt/*.cpp fast_fwd/*.h fast_fwd/*.cpp prebuild/*.h prebuild/*.cpp scratch/*.h scratch/*.cpp strings/*.h strings/*.cpp test/*.h test/*.cpp vsix/*.h vsix/*.cpp

if ($LASTEXITCODE -ne 0) {
    Write-Host ::error ERROR: This branch contains changes that have not been formatted with `'clang-format`'
    Write-Host NOTE:  To resolve this issue, you can run `'clang-format`' in the following ways:
    Write-Host        * Run ``build_test_all.cmd`` which will run `'clang-format`' on _all_ source files. This script is
    Write-Host          simpler to run, however there`'s a chance it may touch additional files you never changed due to you having
    Write-Host          a mis-matched version of `'clang-format`'. This may require you to manually revert changes made by
    Write-Host          `'clang-format`' to the locations where you made no code changes.
    Write-Host
    Write-Host        For more information, please see https://github.com/microsoft/cppwinrt?tab=readme-ov-file#formatting
    Write-Host
    Write-Host NOTE:  As an additional note, given that different versions of `'clang-format`' may have different behaviors, this
    Write-Host        may be a false positive. If you believe that to be the case ^`(e.g. none of the above resulted in modifications
    Write-Host        to the code you have changed^`), please note this in your PR.
    exit 1
}

Set-Location $originalLocation
