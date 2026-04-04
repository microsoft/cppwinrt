import std;
import winrt;

// Include just the root component namespace header — NOT the Widgets namespace.
// CreateWidget() returns a Widgets::Widget, but we can call it and hold the
// result without including the Widgets header, as long as we don't call
// methods on the Widget object itself.
#include <winrt/TestModuleComponent.h>

using namespace winrt;
using namespace winrt::Windows::Foundation;

void test_platform_types();
void test_widget_usage();

int main()
{
    init_apartment();

    // Platform types (from the winrt module)
    Uri uri(L"http://aka.ms/cppwinrt");
    std::printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());

    // Component types — call a method that returns a cross-namespace type
    // without including the Widgets namespace header.
    winrt::TestModuleComponent::TestModuleComponentClass component;
    component.Test();
    auto widget = component.CreateWidget(); // Returns Widgets::Widget
    // We can hold 'widget' but to call Widget.Name() we'd need the Widgets header.
    std::printf("Component test passed.\n");

    // Delegate to other TUs that test more scenarios
    test_platform_types();
    test_widget_usage();
}
