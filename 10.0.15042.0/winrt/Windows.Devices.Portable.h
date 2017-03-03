// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Devices.Portable.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Portable::IServiceDeviceStatics> : produce_base<D, Windows::Devices::Portable::IServiceDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType, impl::abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector(serviceType));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromServiceId(GUID serviceId, impl::abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorFromServiceId(serviceId));
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
    HRESULT __stdcall abi_FromId(impl::abi_arg_in<hstring> deviceId, impl::abi_arg_out<Windows::Storage::IStorageFolder> deviceRoot) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceRoot = detach_abi(this->shim().FromId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *deviceRoot = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(impl::abi_arg_out<hstring> selector) noexcept override
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

namespace Windows::Devices::Portable {

template <typename D> Windows::Storage::StorageFolder impl_IStorageDeviceStatics<D>::FromId(hstring_view deviceId) const
{
    Windows::Storage::StorageFolder deviceRoot { nullptr };
    check_hresult(WINRT_SHIM(IStorageDeviceStatics)->abi_FromId(get_abi(deviceId), put_abi(deviceRoot)));
    return deviceRoot;
}

template <typename D> hstring impl_IStorageDeviceStatics<D>::GetDeviceSelector() const
{
    hstring selector;
    check_hresult(WINRT_SHIM(IStorageDeviceStatics)->abi_GetDeviceSelector(put_abi(selector)));
    return selector;
}

template <typename D> hstring impl_IServiceDeviceStatics<D>::GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType) const
{
    hstring selector;
    check_hresult(WINRT_SHIM(IServiceDeviceStatics)->abi_GetDeviceSelector(serviceType, put_abi(selector)));
    return selector;
}

template <typename D> hstring impl_IServiceDeviceStatics<D>::GetDeviceSelectorFromServiceId(GUID serviceId) const
{
    hstring selector;
    check_hresult(WINRT_SHIM(IServiceDeviceStatics)->abi_GetDeviceSelectorFromServiceId(serviceId, put_abi(selector)));
    return selector;
}

inline hstring ServiceDevice::GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType)
{
    return get_activation_factory<ServiceDevice, IServiceDeviceStatics>().GetDeviceSelector(serviceType);
}

inline hstring ServiceDevice::GetDeviceSelectorFromServiceId(GUID serviceId)
{
    return get_activation_factory<ServiceDevice, IServiceDeviceStatics>().GetDeviceSelectorFromServiceId(serviceId);
}

inline Windows::Storage::StorageFolder StorageDevice::FromId(hstring_view deviceId)
{
    return get_activation_factory<StorageDevice, IStorageDeviceStatics>().FromId(deviceId);
}

inline hstring StorageDevice::GetDeviceSelector()
{
    return get_activation_factory<StorageDevice, IStorageDeviceStatics>().GetDeviceSelector();
}

}

}

template<>
struct std::hash<winrt::Windows::Devices::Portable::IServiceDeviceStatics>
{
    size_t operator()(const winrt::Windows::Devices::Portable::IServiceDeviceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Portable::IStorageDeviceStatics>
{
    size_t operator()(const winrt::Windows::Devices::Portable::IStorageDeviceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
