// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.ApplicationModel.2.h"

namespace winrt::impl {

template <typename D> Windows::Phone::ApplicationModel::ApplicationProfileModes consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics<D>::Modes() const
{
    Windows::Phone::ApplicationModel::ApplicationProfileModes value{};
    check_hresult(WINRT_SHIM(Windows::Phone::ApplicationModel::IApplicationProfileStatics)->get_Modes(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics> : produce_base<D, Windows::Phone::ApplicationModel::IApplicationProfileStatics>
{
    HRESULT __stdcall get_Modes(abi_t<Windows::Phone::ApplicationModel::ApplicationProfileModes>* value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel {

inline Windows::Phone::ApplicationModel::ApplicationProfileModes ApplicationProfile::Modes()
{
    return get_activation_factory<ApplicationProfile, Windows::Phone::ApplicationModel::IApplicationProfileStatics>().Modes();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::ApplicationModel::IApplicationProfileStatics> {};

template<> struct hash<winrt::Windows::Phone::ApplicationModel::ApplicationProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::ApplicationModel::ApplicationProfile> {};

}

WINRT_WARNING_POP
