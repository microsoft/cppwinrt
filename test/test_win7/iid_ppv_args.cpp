#include "pch.h"
#include <windows.foundation.h>

namespace
{
    struct Stringable : winrt::implements<Stringable, winrt::Windows::Foundation::IStringable>
    {
        winrt::hstring ToString()
        {
            return L"hello";
        }
    };

    HRESULT GetStringable(GUID const& id, void** object) noexcept
    {
        *object = nullptr;

        if (id != __uuidof(ABI::Windows::Foundation::IStringable))
        {
            return E_NOINTERFACE;
        }

        *object = winrt::detach_abi(winrt::make<Stringable>());
        return S_OK;
    }
}

TEST_CASE("iid_ppv_args")
{
    {
        winrt::com_ptr<ABI::Windows::Foundation::IStringable> ptr;
        REQUIRE(S_OK == GetStringable(IID_PPV_ARGS(&ptr)));
        REQUIRE(ptr.as<winrt::Windows::Foundation::IStringable>().ToString() == L"hello");
    }
    {
        winrt::com_ptr<ABI::Windows::Foundation::IClosable> ptr;
        REQUIRE(E_NOINTERFACE == GetStringable(IID_PPV_ARGS(&ptr)));
    }
}
