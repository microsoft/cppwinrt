// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.2.h"
#include "winrt/Windows.System.Profile.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>::SerialNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
{
    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

inline hstring SmbiosInformation::SerialNumber()
{
    return get_activation_factory<SmbiosInformation, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>().SerialNumber();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> {};

}

WINRT_WARNING_POP
