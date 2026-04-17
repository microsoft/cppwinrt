import std;
import winrt;

// After importing the module, define WINRT_MODULE_IMPORTED so that
// subsequently-included namespace headers skip base.h.
#define WINRT_MODULE_IMPORTED
#include <winrt/winrt_module_namespaces.h>

// Test using platform types from the module in a separate TU.
// No component headers needed here.
using namespace winrt;
using namespace winrt::Windows::Foundation;

void test_platform_types()
{
    Uri uri(L"https://example.com");
    std::printf("Platform types in separate TU: %ls\n", uri.Domain().c_str());
}
