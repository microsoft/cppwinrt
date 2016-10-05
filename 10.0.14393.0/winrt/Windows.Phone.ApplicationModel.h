// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Phone.ApplicationModel.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics> : produce_base<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics>
{
    HRESULT __stdcall get_Modes(Windows::Phone::ApplicationModel::ApplicationProfileModes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Modes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::ApplicationModel {

template <typename D> Windows::Phone::ApplicationModel::ApplicationProfileModes impl_IApplicationProfileStatics<D>::Modes() const
{
    Windows::Phone::ApplicationModel::ApplicationProfileModes value {};
    check_hresult(static_cast<const IApplicationProfileStatics &>(static_cast<const D &>(*this))->get_Modes(&value));
    return value;
}

inline Windows::Phone::ApplicationModel::ApplicationProfileModes ApplicationProfile::Modes()
{
    return get_activation_factory<ApplicationProfile, IApplicationProfileStatics>().Modes();
}

}

}
