import std;
import winrt;

// After importing the module, define WINRT_MODULE_IMPORTED so that
// subsequently-included namespace headers skip base.h.
#define WINRT_MODULE_IMPORTED
#include <winrt/winrt_module_namespaces.h>

// This TU includes BOTH component namespace headers so it can call methods
// on the Widget type returned by CreateWidget().
#include <winrt/TestModuleComponent.h>
#include <winrt/TestModuleComponent.Widgets.h>

void test_widget_usage()
{
    winrt::TestModuleComponent::TestModuleComponentClass component;
    auto widget = component.CreateWidget();

    // Now we CAN call Widget methods because we included the Widgets header.
    auto name = widget.Name();
    std::printf("Widget name: %ls\n", name.c_str());

    // Test the cross-namespace struct (WidgetSize field from Widgets namespace
    // in a struct defined in the root TestModuleComponent namespace).
    auto info = component.GetWidgetInfo();
    std::printf("Widget info: %ls (%.0fx%.0f)\n", info.Description.c_str(), info.Size.Width, info.Size.Height);

    // Test calling a method that returns a platform type (Windows.Foundation.Uri).
    // The platform type comes from the module, the component type doesn't.
    auto uri = component.GetUri();
    std::printf("Component URI: %ls\n", uri.AbsoluteUri().c_str());
}
