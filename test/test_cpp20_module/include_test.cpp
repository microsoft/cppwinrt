// Regression test: Verify that a plain #include of a winrt namespace header
// works correctly when WINRT_MODULE is defined project-wide but this TU does
// NOT import the winrt module. This validates that WINRT_MODULE (project-level)
// doesn't break traditional header inclusion — only WINRT_MODULE_IMPORTED
// (TU-level, set after 'import winrt;') triggers module-aware header behavior.
//
// This file intentionally does NOT use the PCH (which would pull in catch.hpp
// etc.) because it needs to verify headers work standalone.

// WINRT_MODULE is already defined project-wide by the vcxproj preprocessor
// definitions. We do NOT do 'import winrt;' here.

// This TU uses traditional #include mode, so base.h must use textual STL
// includes rather than 'import std;'. Undefine WINRT_IMPORT_STD to ensure
// base.h falls back to #include directives (the std module IFC may not be
// usable in a TU that isn't importing the winrt module).
#undef WINRT_IMPORT_STD

#include <winrt/Windows.Foundation.h>

// If WINRT_MODULE incorrectly caused base.h to be skipped, this TU would fail
// to compile because winrt types wouldn't be defined.

void include_test_with_winrt_module_defined()
{
    winrt::Windows::Foundation::Uri uri(L"https://example.com/path?q=1");

    // Exercise a few methods to prove the types are fully usable
    auto domain = uri.Domain();
    auto path = uri.Path();
    auto scheme = uri.SchemeName();

    // Verify we can use base types too (hstring, IStringable, etc.)
    winrt::hstring str = uri.ToString();
    (void)domain;
    (void)path;
    (void)scheme;
    (void)str;
}
