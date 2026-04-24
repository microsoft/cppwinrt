#include "pch.h"

#define WINRT_IMPORT_MODULE
import winrt_base;
import winrt.Windows.Foundation;

#include "ModuleTestHelper.h"

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();

    // Test ModuleTestHelper
    auto helper = TestModuleApp::ModuleTestHelper();
    auto uri = helper.CreateUri(L"https://example.com");
    printf("URI: %ls\n", uri.AbsoluteUri().c_str());

    auto str = helper.GetStringAsync().get();
    printf("Async: %ls\n", str.c_str());

    printf("All module tests passed.\n");
    return 0;
}
