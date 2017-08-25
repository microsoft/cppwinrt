// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Management.Workplace.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsBrowserAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsBrowserAllowed(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsCameraAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsCameraAllowed(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsMicrosoftAccountAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsMicrosoftAccountAllowed(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Workplace_IMdmAllowPolicyStatics<D>::IsStoreAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IMdmAllowPolicyStatics)->IsStoreAllowed(&value));
    return value;
}

template <typename D> Windows::Management::Workplace::MessagingSyncPolicy consume_Windows_Management_Workplace_IMdmPolicyStatics2<D>::GetMessagingSyncPolicy() const
{
    Windows::Management::Workplace::MessagingSyncPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IMdmPolicyStatics2)->GetMessagingSyncPolicy(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Workplace_IWorkplaceSettingsStatics<D>::IsMicrosoftAccountOptional() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Workplace::IWorkplaceSettingsStatics)->get_IsMicrosoftAccountOptional(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Management::Workplace::IMdmAllowPolicyStatics> : produce_base<D, Windows::Management::Workplace::IMdmAllowPolicyStatics>
{
    HRESULT __stdcall IsBrowserAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBrowserAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCameraAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCameraAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsMicrosoftAccountAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMicrosoftAccountAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsStoreAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStoreAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Workplace::IMdmPolicyStatics2> : produce_base<D, Windows::Management::Workplace::IMdmPolicyStatics2>
{
    HRESULT __stdcall GetMessagingSyncPolicy(abi_t<Windows::Management::Workplace::MessagingSyncPolicy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMessagingSyncPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Workplace::IWorkplaceSettingsStatics> : produce_base<D, Windows::Management::Workplace::IWorkplaceSettingsStatics>
{
    HRESULT __stdcall get_IsMicrosoftAccountOptional(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMicrosoftAccountOptional());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Workplace {

inline bool MdmPolicy::IsBrowserAllowed()
{
    return get_activation_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>().IsBrowserAllowed();
}

inline bool MdmPolicy::IsCameraAllowed()
{
    return get_activation_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>().IsCameraAllowed();
}

inline bool MdmPolicy::IsMicrosoftAccountAllowed()
{
    return get_activation_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>().IsMicrosoftAccountAllowed();
}

inline bool MdmPolicy::IsStoreAllowed()
{
    return get_activation_factory<MdmPolicy, Windows::Management::Workplace::IMdmAllowPolicyStatics>().IsStoreAllowed();
}

inline Windows::Management::Workplace::MessagingSyncPolicy MdmPolicy::GetMessagingSyncPolicy()
{
    return get_activation_factory<MdmPolicy, Windows::Management::Workplace::IMdmPolicyStatics2>().GetMessagingSyncPolicy();
}

inline bool WorkplaceSettings::IsMicrosoftAccountOptional()
{
    return get_activation_factory<WorkplaceSettings, Windows::Management::Workplace::IWorkplaceSettingsStatics>().IsMicrosoftAccountOptional();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Workplace::IMdmAllowPolicyStatics> {};

template<> struct hash<winrt::Windows::Management::Workplace::IMdmPolicyStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Workplace::IMdmPolicyStatics2> {};

template<> struct hash<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Workplace::IWorkplaceSettingsStatics> {};

template<> struct hash<winrt::Windows::Management::Workplace::MdmPolicy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Workplace::MdmPolicy> {};

template<> struct hash<winrt::Windows::Management::Workplace::WorkplaceSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Workplace::WorkplaceSettings> {};

}

WINRT_WARNING_POP
