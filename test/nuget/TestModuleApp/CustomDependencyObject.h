#pragma once
#include "CustomDependencyObject.g.h"

namespace winrt::TestModuleApp::implementation
{
    struct CustomDependencyObject : CustomDependencyObjectT<CustomDependencyObject>
    {
        CustomDependencyObject() = default;

        hstring Name() { return m_name; }
        void Name(hstring const& value) { m_name = value; }

    private:
        hstring m_name;
    };
}

namespace winrt::TestModuleApp::factory_implementation
{
    struct CustomDependencyObject : CustomDependencyObjectT<CustomDependencyObject, implementation::CustomDependencyObject>
    {
    };
}
