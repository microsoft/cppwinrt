#pragma once

#include "NonCachedStatic.g.h"

namespace winrt::Component::factory_implementation
{
    struct NonCachedStatic : NonCachedStaticT<NonCachedStatic, void, non_agile, static_lifetime>
    {
        winrt::event_token StaticEvent(Windows::Foundation::EventHandler<int32_t> const& handler)
        {
            return m_static.add(handler);
        }

        void StaticEvent(winrt::event_token const& cookie)
        {
            m_static.remove(cookie);
        }

        void RaiseStaticEvent(int32_t value)
        {
            m_static(nullptr, value);
        }

        event<Windows::Foundation::EventHandler<int32_t>> m_static;
    };
}
