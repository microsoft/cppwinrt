#include "pch.h"
#include "RemovedClass.h"
#include "RemovedClass.g.cpp"

namespace winrt::test_component::implementation
{
    void RemovedClass::ActiveStaticMethod()
    {
    }

    void RemovedClass::RemovedStaticMethod()
    {
        throw hresult_not_implemented();
    }

    hstring RemovedClass::StaticProp()
    {
        return L"StaticPropValue";
    }

    hstring RemovedClass::StaticRemovedProp()
    {
        return L"StaticRemovedPropValue";
    }

    void RemovedClass::ActiveMethod()
    {
    }

    void RemovedClass::RemovedMethod()
    {
        throw hresult_not_implemented();
    }

    hstring RemovedClass::NormalProp()
    {
        return m_normalProp;
    }

    hstring RemovedClass::RemovedProp()
    {
        return m_removedProp;
    }

    hstring RemovedClass::WritableProp()
    {
        return m_writableProp;
    }

    void RemovedClass::WritableProp(hstring const& value)
    {
        m_writableProp = value;
    }

    hstring RemovedClass::WritableRemovedProp()
    {
        return m_writableRemovedProp;
    }

    void RemovedClass::WritableRemovedProp(hstring const& value)
    {
        m_writableRemovedProp = value;
    }

    winrt::event_token RemovedClass::NormalEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return m_normalEvent.add(handler);
    }

    void RemovedClass::NormalEvent(winrt::event_token const& token) noexcept
    {
        m_normalEvent.remove(token);
    }

    winrt::event_token RemovedClass::RemovedEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        return m_removedEvent.add(handler);
    }

    void RemovedClass::RemovedEvent(winrt::event_token const& token) noexcept
    {
        m_removedEvent.remove(token);
    }
}
