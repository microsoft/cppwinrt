#pragma once
#include "DeprecatedClass.g.h"

namespace winrt::test_component::implementation
{
    struct DeprecatedClass : DeprecatedClassT<DeprecatedClass>
    {
        DeprecatedClass() = default;
        DeprecatedClass(hstring const& name) : m_name(name) {}

        static void StaticMethod();
        static void OldStaticMethod();
        static hstring StaticProp();
        static hstring StaticDeprecatedProp();
        void Method();
        void OldMethod();
        hstring NormalProp();
        hstring DeprecatedProp();
        hstring WritableProp();
        void WritableProp(hstring const& value);
        hstring WritableDeprecatedProp();
        void WritableDeprecatedProp(hstring const& value);
        winrt::event_token NormalEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        void NormalEvent(winrt::event_token const& token) noexcept;
        winrt::event_token DeprecatedEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        void DeprecatedEvent(winrt::event_token const& token) noexcept;

    private:
        hstring m_name;
        hstring m_normalProp;
        hstring m_deprecatedProp;
        hstring m_writableProp;
        hstring m_writableDeprecatedProp;
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>> m_normalEvent;
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>> m_deprecatedEvent;
    };
}
namespace winrt::test_component::factory_implementation
{
    struct DeprecatedClass : DeprecatedClassT<DeprecatedClass, implementation::DeprecatedClass>
    {
    };
}
