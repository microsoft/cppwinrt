#include "pch.h"
#include <windows.foundation.h>

// These tests validate that C++/WinRT guards against invalid implementations.
// Keep in mind that this only helps for agile and inproc callers and such invalid
// implementations will still lead to undefined behavior (mysterious crashes) if
// the calls are marshaled.

namespace
{
    struct base_base : ABI::Windows::Foundation::IStringable
    {
        ULONG m_references{ 1 };

        virtual ~base_base()
        {
        }

        HRESULT __stdcall QueryInterface(IID const& id, void** value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.

            if (id == __uuidof(ABI::Windows::Foundation::IStringable))
            {
                *value = static_cast<ABI::Windows::Foundation::IStringable*>(this);
                AddRef();

                // This is wrong: should be S_OK
                return S_FALSE;
            }

            // This is wrong: failed to clear 'value' out param
            return E_NOINTERFACE;

            // This is wrong: Failed to respond to 'IUnknown' and 'IInspectable'
        }

        ULONG __stdcall AddRef()
        {
            return ++m_references;
        }

        ULONG __stdcall Release()
        {
            auto remaining = --m_references;

            if (0 == remaining)
            {
                delete this;
            }

            return remaining;
        }

        HRESULT __stdcall GetIids(ULONG* count, IID** value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.
            REQUIRE(*count == 0);

            // This is wrong: failed to clear 'value' out param
            return E_NOTIMPL;
        }

        HRESULT __stdcall GetRuntimeClassName(HSTRING* value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.

            // This is wrong: failed to clear 'value' out param
            return E_NOTIMPL;
        }

        HRESULT __stdcall GetTrustLevel([[maybe_unused]] TrustLevel* value)
        {
            return E_NOTIMPL;
        }
    };

    struct bad_empty : base_base
    {
        HRESULT __stdcall ToString(HSTRING* value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.

            // "Don't set 'value' because hey, I want to return an empty string!"
            // This is wrong: always set out params!
            return S_OK;
        }
    };

    struct bad_false : base_base
    {
        HRESULT __stdcall ToString(HSTRING* value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.

            // "I'll return S_FALSE and tell the caller something special"
            // This is wrong: WinRT APIs may only return S_OK for success!
            WindowsCreateString(L"I'm bad", 7, value);
            return S_FALSE;
        }
    };

    struct bad_error : base_base
    {
        HRESULT __stdcall ToString(HSTRING* value)
        {
            REQUIRE(*value == nullptr); // C++/WinRT guards against invalid implementations.

            // "Hey I failed so I don't have to set the out param."
            // This is wrong: always set out params!
            return E_FAIL;
        }
    };
}

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("out_params_bad")
{
    {
        IStringable bad(new bad_empty, take_ownership_from_abi);
        REQUIRE(bad.ToString().empty());
    }

    {
        IStringable bad(new bad_false, take_ownership_from_abi);
        REQUIRE(bad.ToString() == L"I'm bad");
    }

    {
        IStringable bad(new bad_error, take_ownership_from_abi);
        REQUIRE_THROWS_AS(bad.ToString(), hresult_error);
        REQUIRE_THROWS_AS(get_interfaces(bad), hresult_not_implemented);
        REQUIRE_THROWS_AS(get_class_name(bad), hresult_not_implemented);
        REQUIRE_THROWS_AS(get_trust_level(bad), hresult_not_implemented);
    }

    {
        IStringable bad(new bad_empty, take_ownership_from_abi);
        IStringable a = bad.as<IStringable>();
        REQUIRE(a.ToString().empty());

        IClosable b = bad.try_as<IClosable>();
        REQUIRE(b == nullptr);
    }
}
