// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.2.h"
#include "winrt/Windows.System.Profile.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportLink() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportAppLink() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportAppLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportProvider() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>::SerialNumber() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::LocalSystemEdition() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_LocalSystemEdition(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemManufacturers::OemSupportInfo consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::OemSupportInfo() const noexcept
{
    Windows::System::Profile::SystemManufacturers::OemSupportInfo value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_OemSupportInfo(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : produce_base<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
{
    HRESULT __stdcall get_SupportLink(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportLink());
        return S_OK;
    }

    HRESULT __stdcall get_SupportAppLink(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportAppLink());
        return S_OK;
    }

    HRESULT __stdcall get_SupportProvider(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportProvider());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
{
    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SerialNumber());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
{
    HRESULT __stdcall get_LocalSystemEdition(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocalSystemEdition());
        return S_OK;
    }

    HRESULT __stdcall get_OemSupportInfo(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OemSupportInfo());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

inline hstring SmbiosInformation::SerialNumber()
{
    return get_activation_factory<SmbiosInformation, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>().SerialNumber();
}

inline hstring SystemSupportInfo::LocalSystemEdition()
{
    return get_activation_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>().LocalSystemEdition();
}

inline Windows::System::Profile::SystemManufacturers::OemSupportInfo SystemSupportInfo::OemSupportInfo()
{
    return get_activation_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>().OemSupportInfo();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> {};

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> {};

}

WINRT_WARNING_POP
