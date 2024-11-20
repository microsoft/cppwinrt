[CmdletBinding()]
Param
(
    [Parameter(Mandatory=$true)]
    [string]$generatedFilesDir,

    [Parameter(Mandatory=$true)]
    [string]$cppwinrtHeaderFolder
)

if (!(Test-Path $generatedFilesDir))
{
    mkdir $generatedFilesDir;
}

$generatedPchContent = "#pragma once`r`n`r`n";

$allHeaders = Get-ChildItem "$cppwinrtHeaderFolder\\Windows.*.h";
foreach ($header in $allHeaders)
{
    $chunks = $header.FullName.Split("\\");
    $header = $chunks[$chunks.Length - 1];
    $generatedPchContent += "#include `"winrt/$header`"`r`n";
}

Set-Content -Path "$generatedFilesDir\\pch.h" -Value $generatedPchContent -Force -Encoding UTF8