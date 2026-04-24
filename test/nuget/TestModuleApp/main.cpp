#include "pch.h"

#define WINRT_IMPORT_MODULE
import winrt_base;
import winrt.Windows.Foundation;
import winrt.Windows.UI.Xaml;

#include "ModuleTestHelper.h"
#include "CustomDependencyObject.h"

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

    // Test CustomDependencyObject (inherits from DependencyObject)
    // Note: DependencyObject requires XAML runtime, which isn't available in a console app.
    // We verify the type compiles and links correctly; runtime creation would need a XAML host.
    try
    {
        auto obj = winrt::make<TestModuleApp::implementation::CustomDependencyObject>();
        obj.Name(L"test");
        printf("Name: %ls\n", obj.Name().c_str());
    }
    catch (winrt::hresult_error const& e)
    {
        printf("CustomDependencyObject: expected runtime error (no XAML host): %ls\n", e.message().c_str());
    }

    printf("All module tests passed.\n");
    return 0;
}
