#pragma once
#include "RemovedClass.g.h"

namespace winrt::test_component::implementation
{
    struct RemovedClass : RemovedClassT<RemovedClass>
    {
        RemovedClass() = default;
        RemovedClass(hstring const& name) : m_name(name) {}

        static void ActiveStaticMethod();
        static void RemovedStaticMethod();
        static hstring StaticProp();
        static hstring StaticRemovedProp();
        void ActiveMethod();
        void RemovedMethod();
        hstring NormalProp();
        hstring RemovedProp();
        hstring WritableProp();
        void WritableProp(hstring const& value);
        hstring WritableRemovedProp();
        void WritableRemovedProp(hstring const& value);
        winrt::event_token NormalEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        void NormalEvent(winrt::event_token const& token) noexcept;
        winrt::event_token RemovedEvent(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        void RemovedEvent(winrt::event_token const& token) noexcept;

    private:
        hstring m_name;
        hstring m_normalProp;
        hstring m_removedProp;
        hstring m_writableProp;
        hstring m_writableRemovedProp;
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>> m_normalEvent;
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>> m_removedEvent;
    };
}
namespace winrt::test_component::factory_implementation
{
    struct RemovedClass : RemovedClassT<RemovedClass, implementation::RemovedClass>
    {
    };
}
