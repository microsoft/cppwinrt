import std;
import winrt;

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
}
