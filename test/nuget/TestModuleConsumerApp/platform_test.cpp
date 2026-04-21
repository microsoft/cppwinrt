import std;
import winrt;

// Test using platform types from the module in a separate TU.
// No component headers needed here.
using namespace winrt;
using namespace winrt::Windows::Foundation;

void test_platform_types()
{
    Uri uri(L"https://example.com");
    std::printf("Platform types in separate TU: %ls\n", uri.Domain().c_str());
}
