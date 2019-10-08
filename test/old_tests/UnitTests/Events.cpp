#include "pch.h"
#include "catch.hpp"
#include <windows.foundation.h>
#include "winrt/Component.h"

namespace ABI::Windows::Foundation
{
    template <>
    struct __declspec(uuid("12ECEDAC-1AEE-5BA5-BD66-959A0FB2B1FF"))
        IEventHandler<int> : IEventHandler_impl<int>
    {
    };
}

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;

namespace
{
    struct NonAgileDelegate : implements<NonAgileDelegate, non_agile, ABI::Windows::Foundation::IEventHandler<int>, IMarshal>
    {
        int& result;

        NonAgileDelegate(int& result) : result(result)
        {
        }

        HRESULT __stdcall Invoke(::IInspectable*, int value) override
        {
            result = value;
            return S_OK;
        }

        HRESULT __stdcall GetUnmarshalClass(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, CLSID* pCid) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetUnmarshalClass(riid, pv, dwDestContext, pvDestContext, mshlflags, pCid);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall GetMarshalSizeMax(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, DWORD* pSize) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetMarshalSizeMax(riid, pv, dwDestContext, pvDestContext, mshlflags, pSize);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall MarshalInterface(IStream* pStm, REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->MarshalInterface(pStm, riid, pv, dwDestContext, pvDestContext, mshlflags);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall UnmarshalInterface(IStream* pStm, REFIID riid, void** ppv) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->UnmarshalInterface(pStm, riid, ppv);
            }

            *ppv = nullptr;
            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall ReleaseMarshalData(IStream* pStm) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->ReleaseMarshalData(pStm);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall DisconnectObject(DWORD dwReserved) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->DisconnectObject(dwReserved);
            }

            return E_OUTOFMEMORY;
        }

    private:

        static com_ptr<::IMarshal> get_marshaler() noexcept
        {
            com_ptr<::IUnknown> unknown;
            WINRT_VERIFY_(S_OK, CoCreateFreeThreadedMarshaler(nullptr, unknown.put()));
            return unknown ? unknown.try_as<::IMarshal>() : nullptr;
        }

        com_ptr<::IMarshal> m_marshaler{ get_marshaler() };
    };

    struct NonMarshalDelegate : implements<NonMarshalDelegate, non_agile, ABI::Windows::Foundation::IEventHandler<int>>
    {
        int& result;

        NonMarshalDelegate(int& result) : result(result)
        {
        }

        HRESULT __stdcall Invoke(::IInspectable*, int value) override
        {
            result = value;
            return S_OK;
        }
    };
}

TEST_CASE("Events")
{
    {
        Events events;
        int result = 0;

        EventHandler<int> delegate;
        *put_abi(delegate) = make<NonAgileDelegate>(result).detach();

        REQUIRE(!delegate.try_as<IAgileObject>());
        REQUIRE(delegate.try_as<IMarshal>());

        auto token = events.SimpleEvent(delegate);

        REQUIRE(result == 0);
        events.RaiseSimpleEvent(123);
        REQUIRE(result == 123);

        events.SimpleEvent(token);

        REQUIRE(result == 123);
        events.RaiseSimpleEvent(321);
        REQUIRE(result == 123); // no change
    }

    {
        Events events;
        int result = 0;

        EventHandler<int> delegate;
        *put_abi(delegate) = make<NonMarshalDelegate>(result).detach();

        REQUIRE(!delegate.try_as<IAgileObject>());
        REQUIRE(!delegate.try_as<IMarshal>());

        auto token = events.SimpleEvent(delegate);

        REQUIRE(result == 0);
        events.RaiseSimpleEvent(123);
        REQUIRE(result == 123);

        events.SimpleEvent(token);

        REQUIRE(result == 123);
        events.RaiseSimpleEvent(321);
        REQUIRE(result == 123); // no change
    }

    {
        Events events;
        int result = 0;

        auto token = events.SimpleEvent([&result](auto&&, int value)
        {
            result = value;
        });

        REQUIRE(result == 0);
        events.RaiseSimpleEvent(123);
        REQUIRE(result == 123);

        events.SimpleEvent(token);

        REQUIRE(result == 123);
        events.RaiseSimpleEvent(321);
        REQUIRE(result == 123); // no change
    }

    {
        Events events;
        int result = 0;

        auto revoker = events.SimpleEvent(auto_revoke, [&result](auto&&, int value)
        {
            result = value;
        });

        REQUIRE(result == 0);
        events.RaiseSimpleEvent(123);
        REQUIRE(result == 123);

        // This validates the operator bool on the revoker, which was previously broken.
        REQUIRE(revoker);
        revoker.revoke();
        REQUIRE(!revoker);

        REQUIRE(result == 123);
        events.RaiseSimpleEvent(321);
        REQUIRE(result == 123); // no change
    }

    {
        int result = 0;

        auto token = Events::StaticEvent([&result](auto&&, int value)
        {
            result = value;
        });

        REQUIRE(result == 0);
        Events::RaiseStaticEvent(123);
        REQUIRE(result == 123);

        Events::StaticEvent(token);

        REQUIRE(result == 123);
        Events::RaiseStaticEvent(321);
        REQUIRE(result == 123); // no change
    }

    {
        int result = 0;

        auto revoker = Events::StaticEvent(auto_revoke, [&result](auto&&, int value)
        {
            result = value;
        });

        REQUIRE(result == 0);
        Events::RaiseStaticEvent(123);
        REQUIRE(result == 123);

        // This validates the operator bool on the revoker, which was previously broken.
        REQUIRE(revoker);
        revoker.revoke();
        REQUIRE(!revoker);

        REQUIRE(result == 123);
        Events::RaiseStaticEvent(321);
        REQUIRE(result == 123); // no change
    }


    {
        Events events;
        int result = 0;

        events.TypedEvent([&](Events const& sender, int value)
        {
            REQUIRE(sender == events);
            result = value;
        });

        REQUIRE(result == 0);
        events.RaiseTypedEvent(123);
        REQUIRE(result == 123);
    }

    {
        Events events;
        int result = 0;

        events.CustomEvent([&](int value)
        {
            result = value;
        });

        REQUIRE(result == 0);
        events.RaiseCustomEvent(123);
        REQUIRE(result == 123);
    }

    {
        ReturnDelegate d = []
        {
            return L"one";
        };

        REQUIRE(d() == L"one");

        d = []
        {
            return hstring(L"two");
        };

        REQUIRE(d() == L"two");
    }
}

TEST_CASE("typed_event_revoker")
{
    Events events;
    int result = 0;
    event_revoker<IEvents> revoker = events.SimpleEvent(auto_revoke, [&result](auto&&, int value)
    {
        result = value;
    });

    REQUIRE(result == 0);
    events.RaiseSimpleEvent(123);
    REQUIRE(result == 123);

    // This validates the operator bool on the revoker, which was previously broken.
    REQUIRE(revoker);
    revoker.revoke();
    REQUIRE(!revoker);

    REQUIRE(result == 123);
    events.RaiseSimpleEvent(321);
    REQUIRE(result == 123); // no change

}

TEST_CASE("static_event")
{
    int result = 0;

    auto token = Static::StaticEvent([&result](auto&&, int value)
    {
        result = value;
    });

    REQUIRE(result == 0);
    Static::RaiseStaticEvent(123);
    REQUIRE(result == 123);

    Static::StaticEvent(token);

    REQUIRE(result == 123);
    Static::RaiseStaticEvent(321);
    REQUIRE(result == 123); // no change
}

TEST_CASE("non_cached_static_event")
{
    int result = 0;

    auto token = NonCachedStatic::StaticEvent([&result](auto&&, int value)
    {
        result = value;
    });

    REQUIRE(result == 0);
    NonCachedStatic::RaiseStaticEvent(123);
    REQUIRE(result == 123);

    NonCachedStatic::StaticEvent(token);

    REQUIRE(result == 123);
    NonCachedStatic::RaiseStaticEvent(321);
    REQUIRE(result == 123); // no change
}
