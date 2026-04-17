import std;
import winrt;

// After importing the module, define WINRT_MODULE_IMPORTED so that
// subsequently-included namespace headers skip base.h.
#define WINRT_MODULE_IMPORTED
#include <winrt/winrt_module_namespaces.h>

using namespace winrt;
using namespace winrt::Windows::Foundation;

int main()
{
    init_apartment();
    Uri uri(L"http://aka.ms/cppwinrt");
    std::printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());
}
