// Regression test: Verify that #include of a winrt namespace header works
// BEFORE 'import winrt;' in the same TU. This simulates real-world scenarios
// where 3rd-party headers (e.g., WIL's cppwinrt.h) include winrt headers
// from their own headers, which get pulled in before the user's import.
//
// The extern "C++" wrapping in winrt.ixx allows the module's exported
// declarations to merge with the textually-included declarations.
//
// This TU does NOT use the PCH.

#include <winrt/Windows.Foundation.h>  // Include BEFORE import

import winrt;  // Import AFTER include — must not conflict

using namespace winrt;
using namespace winrt::Windows::Foundation;

void include_before_import_test()
{
    // Verify types from both the include and the import work
    Uri uri(L"https://example.com");
    auto domain = uri.Domain();
    hstring str = uri.ToString();
    (void)domain;
    (void)str;
}
