# Verify removed API support in CPPWinRT generated headers
# This script checks the generated .0.h and .h files to verify:
# 1. ABI vtable slots are preserved for removed methods
# 2. User-facing consume structs exclude removed methods
# 3. Deprecated methods remain visible with [[deprecated]]
# 4. Normal methods are present in both ABI and consume
# 5. Component generation (-component) skips fully removed classes

param(
    [string]$GeneratedDir = "test\test_component\Generated Files\winrt",
    [string]$ComponentDir = "test\test_component\Generated Files"
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

Write-Host "`n=== IRemovedClass: property-level removal ===" -ForegroundColor Cyan

# ABI vtable must preserve ALL property accessors (normal + removed)
Assert-Contains $h0 "virtual int32_t __stdcall get_NormalProp(void**) noexcept = 0;" `
    "IRemovedClass ABI vtable has get_NormalProp (preserved)"
Assert-Contains $h0 "virtual int32_t __stdcall get_RemovedProp(void**) noexcept = 0;" `
    "IRemovedClass ABI vtable has get_RemovedProp (preserved)"

# Consume struct: normal prop present, removed prop hidden
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClass\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1]
    if ($body -match "NormalProp") {
        Write-Host "  PASS: IRemovedClass consume has NormalProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume missing NormalProp" -ForegroundColor Red
        $script:failed++
    }
    if ($body -notmatch "RemovedProp") {
        Write-Host "  PASS: IRemovedClass consume does NOT have RemovedProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume still has RemovedProp" -ForegroundColor Red
        $script:failed++
    }
}

Write-Host "`n=== IRemovedClass: read-write property removal ===" -ForegroundColor Cyan

# ABI: both writable props preserved
Assert-Contains $h0 "virtual int32_t __stdcall get_WritableRemovedProp(void**) noexcept = 0;" `
    "IRemovedClass ABI vtable has get_WritableRemovedProp (preserved)"
Assert-Contains $h0 "virtual int32_t __stdcall put_WritableRemovedProp(void*) noexcept = 0;" `
    "IRemovedClass ABI vtable has put_WritableRemovedProp (preserved)"

# Consume struct: normal writable prop present, removed writable prop hidden
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClass\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1]
    if ($body -match "WritableProp") {
        Write-Host "  PASS: IRemovedClass consume has WritableProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume missing WritableProp" -ForegroundColor Red
        $script:failed++
    }
    if ($body -notmatch "WritableRemovedProp") {
        Write-Host "  PASS: IRemovedClass consume does NOT have WritableRemovedProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume still has WritableRemovedProp" -ForegroundColor Red
        $script:failed++
    }
}

Write-Host "`n=== IRemovedClass: event-level removal ===" -ForegroundColor Cyan

# ABI: both events preserved
Assert-Contains $h0 "virtual int32_t __stdcall add_RemovedEvent(void*, winrt::event_token*) noexcept = 0;" `
    "IRemovedClass ABI vtable has add_RemovedEvent (preserved)"
Assert-Contains $h0 "virtual int32_t __stdcall remove_RemovedEvent(winrt::event_token) noexcept = 0;" `
    "IRemovedClass ABI vtable has remove_RemovedEvent (preserved)"

# Consume struct: normal event present, removed event hidden
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClass\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1]
    if ($body -match "NormalEvent") {
        Write-Host "  PASS: IRemovedClass consume has NormalEvent" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume missing NormalEvent" -ForegroundColor Red
        $script:failed++
    }
    if ($body -notmatch "RemovedEvent") {
        Write-Host "  PASS: IRemovedClass consume does NOT have RemovedEvent" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClass consume still has RemovedEvent" -ForegroundColor Red
        $script:failed++
    }
}

Write-Host "`n=== IRemovedClassStatics: static property removal ===" -ForegroundColor Cyan

# ABI: both static props preserved
Assert-Contains $h0 "virtual int32_t __stdcall get_StaticRemovedProp(void**) noexcept = 0;" `
    "IRemovedClassStatics ABI vtable has get_StaticRemovedProp (preserved)"

# Consume struct
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClassStatics\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1]
    if ($body -match "StaticProp") {
        Write-Host "  PASS: IRemovedClassStatics consume has StaticProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClassStatics consume missing StaticProp" -ForegroundColor Red
        $script:failed++
    }
    if ($body -notmatch "StaticRemovedProp") {
        Write-Host "  PASS: IRemovedClassStatics consume does NOT have StaticRemovedProp" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClassStatics consume still has StaticRemovedProp" -ForegroundColor Red
        $script:failed++
    }
}

Write-Host "`n=== IRemovedClassFactory: constructor removal ===" -ForegroundColor Cyan

# ABI: removed constructor factory method preserved
Assert-Contains $h0 "virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;" `
    "IRemovedClassFactory ABI vtable has CreateInstance (preserved)"

# Consume struct should be empty (removed constructor hidden)
$consumeSection = (Get-Content $h0 -Raw) -match 'struct consume_test_component_IRemovedClassFactory\s*\{([^}]+)\}'
if ($consumeSection) {
    $body = $Matches[1].Trim()
    if ($body -eq "") {
        Write-Host "  PASS: IRemovedClassFactory consume is empty (removed constructor hidden)" -ForegroundColor Green
        $script:passed++
    } else {
        Write-Host "  FAIL: IRemovedClassFactory consume is not empty: $body" -ForegroundColor Red
        $script:failed++
    }
} else {
    Write-Host "  PASS: IRemovedClassFactory consume section not found or empty" -ForegroundColor Green
    $script:passed++
}

Write-Host "`n=== IDeprecatedClass: deprecated property annotations ===" -ForegroundColor Cyan

Assert-Contains $h0 '[[deprecated("DeprecatedProp is deprecated.")]] [[nodiscard]] auto DeprecatedProp() const;' `
    "DeprecatedProp has [[deprecated]] annotation"
Assert-Contains $h0 '[[deprecated("WritableDeprecatedProp is deprecated.")]] [[nodiscard]] auto WritableDeprecatedProp() const;' `
    "WritableDeprecatedProp getter has [[deprecated]] annotation"
Assert-Contains $h0 '[[deprecated("WritableDeprecatedProp is deprecated.")]] auto WritableDeprecatedProp(param::hstring const& value) const;' `
    "WritableDeprecatedProp setter has [[deprecated]] annotation"

Write-Host "`n=== IDeprecatedClass: deprecated event annotations ===" -ForegroundColor Cyan

Assert-Contains $h0 '[[deprecated("DeprecatedEvent is deprecated.")]] auto DeprecatedEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;' `
    "DeprecatedEvent add has [[deprecated]] annotation"

Write-Host "`n=== IDeprecatedClassStatics: deprecated static property annotations ===" -ForegroundColor Cyan

Assert-Contains $h0 '[[deprecated("StaticDeprecatedProp is deprecated.")]] [[nodiscard]] auto StaticDeprecatedProp() const;' `
    "StaticDeprecatedProp has [[deprecated]] annotation"

Write-Host "`n=== IDeprecatedClassFactory: deprecated constructor annotations ===" -ForegroundColor Cyan

Assert-Contains $h0 '[[deprecated("Use default constructor instead.")]] auto CreateInstance(param::hstring const& name) const;' `
    "Deprecated constructor factory has [[deprecated]] annotation"

Write-Host "`n=== PartiallyRemovedEnum: field-level removal ===" -ForegroundColor Cyan

# Enum definitions are in the .0.h file
Assert-Contains $h0 "Visible = 0," "PartiallyRemovedEnum has Visible value"
Assert-Contains $h0 "AlsoVisible = 2," "PartiallyRemovedEnum has AlsoVisible value"
Assert-NotContains $h0 "Hidden = 1," "PartiallyRemovedEnum does NOT have Hidden value (removed)"

Write-Host "`n=== RemovedEnum: fully removed enum ===" -ForegroundColor Cyan

# RemovedEnum should NOT have its enum class definition (entire type removed)
Assert-NotContains $h0 "enum class RemovedEnum" "RemovedEnum type definition is excluded"

Write-Host "`n=== FullyRemovedClass: component generation exclusion ===" -ForegroundColor Cyan

# Fully removed class should not have a usable class definition in the main header
$mainH = Join-Path $GeneratedDir "test_component.h"
Assert-NotContains $mainH "struct FullyRemovedClass :" `
    "FullyRemovedClass has no user-visible class definition"

# Component generation checks: module.g.cpp should NOT reference fully removed classes
$moduleGCpp = Join-Path $ComponentDir "module.g.cpp"
if (Test-Path $moduleGCpp) {
    Assert-NotContains $moduleGCpp "FullyRemovedClass" `
        "module.g.cpp does NOT reference FullyRemovedClass"

    # Verify non-removed classes ARE still present
    Assert-Contains $moduleGCpp "RemovedClass" `
        "module.g.cpp still references RemovedClass (has removed members, but class itself is not removed)"
} else {
    Write-Host "  SKIP: module.g.cpp not found (component mode not run)" -ForegroundColor Yellow
}

# Component stubs should NOT be generated for fully removed classes
$removedStubH = Join-Path $ComponentDir "FullyRemovedClass.g.h"
$removedStubCpp = Join-Path $ComponentDir "FullyRemovedClass.g.cpp"
if (!(Test-Path $removedStubH)) {
    Write-Host "  PASS: FullyRemovedClass.g.h was NOT generated" -ForegroundColor Green
    $script:passed++
} else {
    Write-Host "  FAIL: FullyRemovedClass.g.h should NOT be generated for a fully removed class" -ForegroundColor Red
    $script:failed++
}
if (!(Test-Path $removedStubCpp)) {
    Write-Host "  PASS: FullyRemovedClass.g.cpp was NOT generated" -ForegroundColor Green
    $script:passed++
} else {
    Write-Host "  FAIL: FullyRemovedClass.g.cpp should NOT be generated for a fully removed class" -ForegroundColor Red
    $script:failed++
}

# Non-removed classes with removed members should STILL get stubs
$removedClassStub = Join-Path $ComponentDir "RemovedClass.g.h"
if (Test-Path $removedClassStub) {
    Write-Host "  PASS: RemovedClass.g.h IS generated (class not removed, only some members)" -ForegroundColor Green
    $script:passed++
} else {
    Write-Host "  FAIL: RemovedClass.g.h should be generated (class itself is not removed)" -ForegroundColor Red
    $script:failed++
}

Write-Host "`n=== Summary ===" -ForegroundColor Cyan
Write-Host "Passed: $($script:passed)" -ForegroundColor Green
if ($script:failed -gt 0) {
    Write-Host "Failed: $($script:failed)" -ForegroundColor Red
    exit 1
} else {
    Write-Host "All checks passed!" -ForegroundColor Green
}
