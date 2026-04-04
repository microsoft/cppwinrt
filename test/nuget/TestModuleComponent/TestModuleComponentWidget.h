#pragma once
#include "Widgets.Widget.g.h"

namespace winrt::TestModuleComponent::Widgets::implementation
{
    struct Widget : WidgetT<Widget>
    {
        Widget() = default;
        Widget(hstring const& name) : m_name(name) {}
        hstring Name() const { return m_name; }
        winrt::TestModuleComponent::Widgets::WidgetSize Size() const { return { 100.0f, 50.0f }; }

    private:
        hstring m_name{ L"DefaultWidget" };
    };
}
namespace winrt::TestModuleComponent::Widgets::factory_implementation
{
    struct Widget : WidgetT<Widget, implementation::Widget> {};
}
