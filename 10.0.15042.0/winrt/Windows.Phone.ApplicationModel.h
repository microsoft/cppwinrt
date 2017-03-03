// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Modes());
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
    check_hresult(WINRT_SHIM(IApplicationProfileStatics)->get_Modes(&value));
    return value;
}

inline Windows::Phone::ApplicationModel::ApplicationProfileModes ApplicationProfile::Modes()
{
    return get_activation_factory<ApplicationProfile, IApplicationProfileStatics>().Modes();
}

}

}

template<>
struct std::hash<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics>
{
    size_t operator()(const winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
