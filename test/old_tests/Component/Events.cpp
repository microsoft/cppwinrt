#include "pch.h"
#include "Events.h"

namespace winrt::Component::implementation
{
    using namespace Windows::Foundation;

    event_token Events::SimpleEvent(EventHandler<int32_t> const& handler)
    {
        return m_simple.add(handler);
    }

    void Events::SimpleEvent(event_token const& cookie)
    {
        m_simple.remove(cookie);
    }

    void Events::RaiseSimpleEvent(int value)
    {
        m_simple(*this, value);
    }

    event_token Events::TypedEvent(TypedEventHandler<Component::Events, int32_t> const& handler)
    {
        return m_typed.add(handler);
    }

    void Events::TypedEvent(event_token const& cookie)
    {
        m_typed.remove(cookie);
    }

    void Events::RaiseTypedEvent(int value)
    {
        m_typed(*this, value);
    }

    event_token Events::CustomEvent(CustomDelegate const& handler)
    {
        return m_custom.add(handler);
    }

    void Events::CustomEvent(event_token const& cookie)
    {
        m_custom.remove(cookie);
    }

    void Events::RaiseCustomEvent(int value)
    {
        m_custom(value);
    }
} // namespace winrt::Component::implementation

namespace winrt::Component::factory_implementation
{
    using namespace Windows::Foundation;

    event_token Events::StaticEvent(EventHandler<int32_t> const& handler)
    {
        return m_static.add(handler);
    }

    void Events::StaticEvent(event_token const& cookie)
    {
        m_static.remove(cookie);
    }

    void Events::RaiseStaticEvent(int value)
    {
        m_static(nullptr, value);
    }

    std::atomic<int> Events::s_constructorCount;

    bool Events::TestStaticLifetime()
    {
        auto GetReferenceCount = [this]()
        {
            AddRef();
            return Release();
        };

        // Capture current reference count.
        auto refcount = GetReferenceCount();

        // Reset constructor count.
        s_constructorCount = 0;

        // make_self should return a reference to ourselves
        // since we are static_lifetime.
        if (make_self<Events>().get() != this)
        {
            return false;
        }

        // Refcount should be unchanged.
        if (refcount != GetReferenceCount())
        {
            return false;
        }

        // Should not have been constructed spuriously.
        if (s_constructorCount != 0)
        {
            return false;
        }

        // Clear the static lifetime. That should drop the reference count.
        clear_factory_static_lifetime<Events>();
        if (refcount == GetReferenceCount())
        {
            return false;
        }

        // Making a new object should put a different instance into
        // the static lifetime.
        if (make_self<Events>().get() == this)
        {
            return false;
        }

        return true;
    }
} // namespace winrt::Component::factory_implementation
