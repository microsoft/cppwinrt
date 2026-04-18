// Regression test: Verify that #include of a winrt namespace header works
// correctly when WINRT_MODULE is defined project-wide, even without importing
// the winrt module in this TU. Since Windows.Foundation IS in the module, the
// module guard falls through to traditional base.h inclusion, and cross-dep
// guards are bypassed (WINRT_MODULE_NS_<self> is defined).
//
// This TU does NOT use the PCH and does NOT do any 'import' statements.

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
