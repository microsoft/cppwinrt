# Verify removed API support in CPPWinRT generated headers
# This script checks the generated .0.h and .h files to verify:
# 1. ABI vtable slots are preserved for removed methods
# 2. User-facing consume structs exclude removed methods
# 3. Deprecated methods remain visible with [[deprecated]]
# 4. Normal methods are present in both ABI and consume

param(
    [string]$GeneratedDir = "test\test_component\Generated Files\winrt"
)

$ErrorActionPreference = "Stop"
$script:passed = 0
$script:failed = 0

function Assert-Contains {
    param([string]$File, [string]$Pattern, [string]$Message)
    $content = Get-Content $File -Raw
    if ($content -match [regex]::Escape($Pattern)) {
        Write-Host "  PASS: $Message" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: $Message" -ForegroundColor Red
        Write-Host "    Expected to find: $Pattern" -ForegroundColor Yellow
        $script:failed++
    }
}

function Assert-NotContains {
    param([string]$File, [string]$Pattern, [string]$Message)
    $content = Get-Content $File -Raw
    if ($content -match [regex]::Escape($Pattern)) {
        Write-Host "  FAIL: $Message" -ForegroundColor Red
        Write-Host "    Expected NOT to find: $Pattern" -ForegroundColor Yellow
        $script:failed++
    } else {
        Write-Host "  PASS: $Message" -ForegroundColor Green
        $script:passed++
    }
}

$h0 = Join-Path $GeneratedDir "impl\test_component.0.h"

if (!(Test-Path $h0)) {
    Write-Host "ERROR: Generated files not found at $h0" -ForegroundColor Red
    Write-Host "Run the cppwinrt build first." -ForegroundColor Yellow
    exit 1
}

Write-Host "`n=== IVtableTest: ABI vtable slot preservation ===" -ForegroundColor Cyan

# ABI vtable must have ALL 4 methods (normal + deprecated + removed + normal)
Assert-Contains $h0 "virtual int32_t __stdcall NormalMethod() noexcept = 0;" `
    "ABI vtable has NormalMethod slot"
Assert-Contains $h0 "virtual int32_t __stdcall DeprecatedMethod() noexcept = 0;" `
    "ABI vtable has DeprecatedMethod slot"
Assert-Contains $h0 "virtual int32_t __stdcall RemovedMethod() noexcept = 0;" `
    "ABI vtable has RemovedMethod slot (preserved for binary compat)"
Assert-Contains $h0 "virtual int32_t __stdcall AnotherNormalMethod() noexcept = 0;" `
    "ABI vtable has AnotherNormalMethod slot"

Write-Host "`n=== IVtableTest: User consume struct ===" -ForegroundColor Cyan

# Consume struct should have normal + deprecated, but NOT removed
Assert-Contains $h0 "auto NormalMethod() const;" `
    "Consume struct has NormalMethod"
Assert-Contains $h0 "auto DeprecatedMethod() const;" `
    "Consume struct has DeprecatedMethod"
Assert-NotContains $h0 "auto RemovedMethod() const;" `
    "Consume struct does NOT have RemovedMethod (hidden)"
Assert-Contains $h0 "auto AnotherNormalMethod() const;" `
    "Consume struct has AnotherNormalMethod"

Write-Host "`n=== IVtableTest: Deprecated annotation ===" -ForegroundColor Cyan

Assert-Contains $h0 '[[deprecated("DeprecatedMethod is deprecated.")]] auto DeprecatedMethod() const;' `
    "DeprecatedMethod has [[deprecated]] annotation"

Write-Host "`n=== IRemovedClass: method-level removal ===" -ForegroundColor Cyan

# ABI should have both ActiveMethod and RemovedMethod
Assert-Contains $h0 "virtual int32_t __stdcall ActiveMethod() noexcept = 0;" `
    "IRemovedClass ABI vtable has ActiveMethod"
Assert-Contains $h0 "virtual int32_t __stdcall RemovedMethod() noexcept = 0;" `
    "IRemovedClass ABI vtable has RemovedMethod (preserved)"

# Consume should only have ActiveMethod
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClass\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1]
    if ($body -match "ActiveMethod") {
        Write-Host "  PASS: IRemovedClass consume has ActiveMethod" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume missing ActiveMethod" -ForegroundColor Red
        $script:failed++
    }
    if ($body -notmatch "RemovedMethod") {
        Write-Host "  PASS: IRemovedClass consume does NOT have RemovedMethod" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume still has RemovedMethod" -ForegroundColor Red
        $script:failed++
    }
}

Write-Host "`n=== PartiallyRemovedEnum: field-level removal ===" -ForegroundColor Cyan

# Enum definitions are in the .0.h file
Assert-Contains $h0 "Visible = 0," "PartiallyRemovedEnum has Visible value"
Assert-Contains $h0 "AlsoVisible = 2," "PartiallyRemovedEnum has AlsoVisible value"
Assert-NotContains $h0 "Hidden = 1," "PartiallyRemovedEnum does NOT have Hidden value (removed)"

Write-Host "`n=== RemovedEnum: fully removed enum ===" -ForegroundColor Cyan

# RemovedEnum should NOT have its enum class definition (entire type removed)
Assert-NotContains $h0 "enum class RemovedEnum" "RemovedEnum type definition is excluded"

Write-Host "`n=== Summary ===" -ForegroundColor Cyan
Write-Host "Passed: $($script:passed)" -ForegroundColor Green
if ($script:failed -gt 0) {
    Write-Host "Failed: $($script:failed)" -ForegroundColor Red
    exit 1
} else {
    Write-Host "All checks passed!" -ForegroundColor Green
}
