// Regression test: Verify that #include of a winrt namespace header works
// correctly when WINRT_MODULE is defined project-wide, even without importing
// the winrt module in this TU. Since Windows.Foundation IS in the module, the
// module guard falls through to traditional base.h inclusion.

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
