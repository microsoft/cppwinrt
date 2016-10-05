// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Devices.Portable.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Portable::IServiceDeviceStatics> : produce_base<D, Windows::Devices::Portable::IServiceDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelector(serviceType));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromServiceId(GUID serviceId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelectorFromServiceId(serviceId));
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
    HRESULT __stdcall abi_FromId(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Storage::IStorageFolder> deviceRoot) noexcept override
    {
        try
        {
            *deviceRoot = detach(this->shim().FromId(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *deviceRoot = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelector());
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

template <typename D> Windows::Storage::StorageFolder impl_IStorageDeviceStatics<D>::FromId(hstring_ref deviceId) const
{
    Windows::Storage::StorageFolder deviceRoot { nullptr };
    check_hresult(static_cast<const IStorageDeviceStatics &>(static_cast<const D &>(*this))->abi_FromId(get(deviceId), put(deviceRoot)));
    return deviceRoot;
}

template <typename D> hstring impl_IStorageDeviceStatics<D>::GetDeviceSelector() const
{
    hstring selector;
    check_hresult(static_cast<const IStorageDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(selector)));
    return selector;
}

template <typename D> hstring impl_IServiceDeviceStatics<D>::GetDeviceSelector(Windows::Devices::Portable::ServiceDeviceType serviceType) const
{
    hstring selector;
    check_hresult(static_cast<const IServiceDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(serviceType, put(selector)));
    return selector;
}

template <typename D> hstring impl_IServiceDeviceStatics<D>::GetDeviceSelectorFromServiceId(GUID serviceId) const
{
    hstring selector;
    check_hresult(static_cast<const IServiceDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromServiceId(serviceId, put(selector)));
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

inline Windows::Storage::StorageFolder StorageDevice::FromId(hstring_ref deviceId)
{
    return get_activation_factory<StorageDevice, IStorageDeviceStatics>().FromId(deviceId);
}

inline hstring StorageDevice::GetDeviceSelector()
{
    return get_activation_factory<StorageDevice, IStorageDeviceStatics>().GetDeviceSelector();
}

}

}
