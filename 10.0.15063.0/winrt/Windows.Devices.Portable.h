// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Devices.Portable.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Portable_IServiceDeviceStatics<D>::GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Portable::IServiceDeviceStatics)->GetDeviceSelector(get_abi(serviceType), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Portable_IServiceDeviceStatics<D>::GetDeviceSelectorFromServiceId(GUID const& serviceId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Portable::IServiceDeviceStatics)->GetDeviceSelectorFromServiceId(get_abi(serviceId), put_abi(selector)));
    return selector;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Devices_Portable_IStorageDeviceStatics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Storage::StorageFolder deviceRoot{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Portable::IStorageDeviceStatics)->FromId(get_abi(deviceId), put_abi(deviceRoot)));
    return deviceRoot;
}

template <typename D> hstring consume_Windows_Devices_Portable_IStorageDeviceStatics<D>::GetDeviceSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Portable::IStorageDeviceStatics)->GetDeviceSelector(put_abi(selector)));
    return selector;
}

template <typename D>
struct produce<D, Windows::Devices::Portable::IServiceDeviceStatics> : produce_base<D, Windows::Devices::Portable::IServiceDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(abi_t<Windows::Devices::Portable::ServiceDeviceType> serviceType, HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Portable::ServiceDeviceType const*>(&serviceType)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromServiceId(abi_t<GUID> serviceId, HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorFromServiceId(*reinterpret_cast<GUID const*>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Portable::IStorageDeviceStatics> : produce_base<D, Windows::Devices::Portable::IStorageDeviceStatics>
{
    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** deviceRoot) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceRoot = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *deviceRoot = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Portable {

inline hstring ServiceDevice::GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType const& serviceType)
{
    return get_activation_factory<ServiceDevice, Windows::Devices::Portable::IServiceDeviceStatics>().GetDeviceSelector(serviceType);
}

inline hstring ServiceDevice::GetDeviceSelectorFromServiceId(GUID const& serviceId)
{
    return get_activation_factory<ServiceDevice, Windows::Devices::Portable::IServiceDeviceStatics>().GetDeviceSelectorFromServiceId(serviceId);
}

inline Windows::Storage::StorageFolder StorageDevice::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<StorageDevice, Windows::Devices::Portable::IStorageDeviceStatics>().FromId(deviceId);
}

inline hstring StorageDevice::GetDeviceSelector()
{
    return get_activation_factory<StorageDevice, Windows::Devices::Portable::IStorageDeviceStatics>().GetDeviceSelector();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Portable::IServiceDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Portable::IServiceDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Portable::IStorageDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Portable::IStorageDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Portable::ServiceDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Portable::ServiceDevice> {};

template<> struct hash<winrt::Windows::Devices::Portable::StorageDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Portable::StorageDevice> {};

}

WINRT_WARNING_POP
