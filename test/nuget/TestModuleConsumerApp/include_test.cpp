// Regression test: Verify that a plain #include of a winrt namespace header
// works correctly when WINRT_MODULE is defined project-wide (by the NuGet
// CppWinRTModuleConsume property) but this TU does NOT import the winrt module.
//
// This validates the WINRT_MODULE vs WINRT_MODULE_IMPORTED decoupling:
// WINRT_MODULE alone should not break traditional header inclusion.

// WINRT_MODULE is defined project-wide by the NuGet targets.
// We do NOT do 'import winrt;' here.

// This TU uses traditional #include mode, so base.h must use textual STL
// includes rather than 'import std;'. Undefine WINRT_IMPORT_STD to avoid
// conflicts between 'import std;' and subsequent STL #includes.
#undef WINRT_IMPORT_STD

#include <winrt/Windows.Foundation.h>

void include_test_with_winrt_module_defined()
{
    winrt::Windows::Foundation::Uri uri(L"https://example.com/path?q=1");
    auto domain = uri.Domain();
    auto scheme = uri.SchemeName();
    winrt::hstring str = uri.ToString();
    (void)domain;
    (void)scheme;
    (void)str;
}
