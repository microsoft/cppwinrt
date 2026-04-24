#include "pch.h"
#include "DeprecatedClass.h"
#include "DeprecatedClass.g.cpp"

namespace winrt::test_component::implementation
{
    void DeprecatedClass::StaticMethod()
    {
    }

    void DeprecatedClass::OldStaticMethod()
    {
    }

    hstring DeprecatedClass::StaticProp()
    {
        return L"StaticPropValue";
    }

    hstring DeprecatedClass::StaticDeprecatedProp()
    {
        return L"StaticDeprecatedPropValue";
    }

    void DeprecatedClass::Method()
    {
    }

    void DeprecatedClass::OldMethod()
    {
    }

    hstring DeprecatedClass::NormalProp()
    {
        return m_normalProp;
    }

    hstring DeprecatedClass::DeprecatedProp()
    {
        return m_deprecatedProp;
    }

    hstring DeprecatedClass::WritableProp()
    {
        return m_writableProp;
    }

    void DeprecatedClass::WritableProp(hstring const& value)
    {
        m_writableProp = value;
    }

    hstring DeprecatedClass::WritableDeprecatedProp()
    {
        return m_writableDeprecatedProp;
    }

    void DeprecatedClass::WritableDeprecatedProp(hstring const& value)
    {
        m_writableDeprecatedProp = value;
    }

    winrt::event_token DeprecatedClass::NormalEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return m_normalEvent.add(handler);
    }

    void DeprecatedClass::NormalEvent(winrt::event_token const& token) noexcept
    {
        m_normalEvent.remove(token);
    }

    winrt::event_token DeprecatedClass::DeprecatedEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return m_deprecatedEvent.add(handler);
    }

    void DeprecatedClass::DeprecatedEvent(winrt::event_token const& token) noexcept
    {
        m_deprecatedEvent.remove(token);
    }
}
