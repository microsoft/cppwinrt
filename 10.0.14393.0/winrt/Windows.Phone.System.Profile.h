// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Phone.System.Profile.3.h"
#include "Windows.Phone.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::System::Profile::IRetailModeStatics> : produce_base<D, Windows::Phone::System::Profile::IRetailModeStatics>
{
    HRESULT __stdcall get_RetailModeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RetailModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::System::Profile {

template <typename D> bool impl_IRetailModeStatics<D>::RetailModeEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IRetailModeStatics &>(static_cast<const D &>(*this))->get_RetailModeEnabled(&value));
    return value;
}

inline bool RetailMode::RetailModeEnabled()
{
    return get_activation_factory<RetailMode, IRetailModeStatics>().RetailModeEnabled();
}

}

}
