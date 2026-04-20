// Test: Include a namespace header that is NOT in the module, without
// importing winrt first. Windows.Storage depends on Windows.Foundation
// (which IS in the module). This tests whether the compound cross-dep
// guards correctly handle the case where a non-module namespace needs
// types from a module namespace, but the module hasn't been imported.
//
// Expected: With WINRT_MODULE defined, the module guard sees that
// Windows.Storage is NOT in the module and uses base_macros.h only.
// Cross-dep guards skip Windows.Foundation deps (dep in module, self not).
// This SHOULD fail because Foundation types aren't available — documenting
// this as a known limitation of the boundary design.
//
// If this test compiles, the boundary design handles this case. If not,
// it confirms that non-module namespace headers require import winrt first.

// WINRT_MODULE is defined project-wide.
// We intentionally do NOT import winrt.

#include <winrt/Windows.Storage.h>

void non_module_include_test()
{
    // If this compiles, the include chain resolved correctly.
    winrt::Windows::Storage::StorageFolder folder{ nullptr };
    (void)folder;
}
