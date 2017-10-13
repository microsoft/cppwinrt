// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.2.h"
#include "winrt/Windows.Devices.Bluetooth.h"

namespace winrt::impl {

template <typename D> Windows::Networking::HostName consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::ConnectionHostName() const noexcept
{
    Windows::Networking::HostName value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->get_ConnectionHostName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::ConnectionServiceName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->get_ConnectionServiceName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::ServiceId() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::ProtectionLevel() const noexcept
{
    Windows::Networking::Sockets::SocketProtectionLevel value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::MaxProtectionLevel() const noexcept
{
    Windows::Networking::Sockets::SocketProtectionLevel value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->get_MaxProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::GetSdpRawAttributesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->GetSdpRawAttributesAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>::GetSdpRawAttributesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService)->GetSdpRawAttributesWithCacheModeAsync(get_abi(cacheMode), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDevice consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2<D>::Device() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothDevice value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3<D>::DeviceAccessInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3)->get_DeviceAccessInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3)->RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics<D>::GetDeviceSelector(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics)->GetDeviceSelector(get_abi(serviceId), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDevice(get_abi(bluetoothDevice), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceWithCacheMode(get_abi(bluetoothDevice), get_abi(cacheMode), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceAndServiceId(get_abi(bluetoothDevice), get_abi(serviceId), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(get_abi(bluetoothDevice), get_abi(serviceId), get_abi(cacheMode), put_abi(selector)));
    return selector;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult<D>::Error() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult<D>::Services() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> services{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult)->get_Services(put_abi(services)));
    return services;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId<D>::Uuid() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId<D>::AsShortId() const
{
    uint32_t shortId{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId)->AsShortId(&shortId));
    return shortId;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId<D>::AsString() const
{
    hstring id{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId)->AsString(put_abi(id)));
    return id;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::FromUuid(GUID const& uuid) const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->FromUuid(get_abi(uuid), put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::FromShortId(uint32_t shortId) const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->FromShortId(shortId, put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::SerialPort() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_SerialPort(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::ObexObjectPush() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_ObexObjectPush(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::ObexFileTransfer() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_ObexFileTransfer(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::PhoneBookAccessPce() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_PhoneBookAccessPce(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::PhoneBookAccessPse() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_PhoneBookAccessPse(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>::GenericFileTransfer() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId serviceId{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics)->get_GenericFileTransfer(put_abi(serviceId)));
    return serviceId;
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>::ServiceId() const noexcept
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>::SdpRawAttributes() const noexcept
{
    Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider)->get_SdpRawAttributes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>::StartAdvertising(Windows::Networking::Sockets::StreamSocketListener const& listener) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider)->StartAdvertising(get_abi(listener)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>::StopAdvertising() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider)->StopAdvertising());
}

template <typename D> void consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2<D>::StartAdvertising(Windows::Networking::Sockets::StreamSocketListener const& listener, bool radioDiscoverable) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2)->StartAdvertisingWithRadioDiscoverability(get_abi(listener), radioDiscoverable));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics<D>::CreateAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics)->CreateAsync(get_abi(serviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
{
    HRESULT __stdcall get_ConnectionHostName(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ConnectionHostName());
        return S_OK;
    }

    HRESULT __stdcall get_ConnectionServiceName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ConnectionServiceName());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProtectionLevel());
        return S_OK;
    }

    HRESULT __stdcall get_MaxProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxProtectionLevel());
        return S_OK;
    }

    HRESULT __stdcall GetSdpRawAttributesAsync(::IUnknown** asyncOp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().GetSdpRawAttributesAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSdpRawAttributesWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, ::IUnknown** asyncOp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().GetSdpRawAttributesAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Device());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>
{
    HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceAccessInformation());
        return S_OK;
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(::IUnknown* serviceId, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId)));
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
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>
{
    HRESULT __stdcall GetDeviceSelectorForBluetoothDevice(::IUnknown* bluetoothDevice, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorForBluetoothDevice(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDevice const*>(&bluetoothDevice)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceWithCacheMode(::IUnknown* bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorForBluetoothDevice(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDevice const*>(&bluetoothDevice), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceId(::IUnknown* bluetoothDevice, ::IUnknown* serviceId, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceAndServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDevice const*>(&bluetoothDevice), *reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(::IUnknown* bluetoothDevice, ::IUnknown* serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceAndServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDevice const*>(&bluetoothDevice), *reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
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
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Error());
        return S_OK;
    }

    HRESULT __stdcall get_Services(::IUnknown** services) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *services = detach_abi(this->shim().Services());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>
{
    HRESULT __stdcall get_Uuid(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Uuid());
        return S_OK;
    }

    HRESULT __stdcall AsShortId(uint32_t* shortId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *shortId = detach_abi(this->shim().AsShortId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AsString(HSTRING* id) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *id = detach_abi(this->shim().AsString());
            return S_OK;
        }
        catch (...)
        {
            *id = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>
{
    HRESULT __stdcall FromUuid(GUID uuid, ::IUnknown** serviceId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *serviceId = detach_abi(this->shim().FromUuid(*reinterpret_cast<GUID const*>(&uuid)));
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromShortId(uint32_t shortId, ::IUnknown** serviceId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *serviceId = detach_abi(this->shim().FromShortId(shortId));
            return S_OK;
        }
        catch (...)
        {
            *serviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialPort(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().SerialPort());
        return S_OK;
    }

    HRESULT __stdcall get_ObexObjectPush(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().ObexObjectPush());
        return S_OK;
    }

    HRESULT __stdcall get_ObexFileTransfer(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().ObexFileTransfer());
        return S_OK;
    }

    HRESULT __stdcall get_PhoneBookAccessPce(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().PhoneBookAccessPce());
        return S_OK;
    }

    HRESULT __stdcall get_PhoneBookAccessPse(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().PhoneBookAccessPse());
        return S_OK;
    }

    HRESULT __stdcall get_GenericFileTransfer(::IUnknown** serviceId) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *serviceId = detach_abi(this->shim().GenericFileTransfer());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
{
    HRESULT __stdcall get_ServiceId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_SdpRawAttributes(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SdpRawAttributes());
        return S_OK;
    }

    HRESULT __stdcall StartAdvertising(::IUnknown* listener) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&listener));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAdvertising() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAdvertising();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>
{
    HRESULT __stdcall StartAdvertisingWithRadioDiscoverability(::IUnknown* listener, bool radioDiscoverable) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising(*reinterpret_cast<Windows::Networking::Sockets::StreamSocketListener const*>(&listener), radioDiscoverable);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> : produce_base<D, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>
{
    HRESULT __stdcall CreateAsync(::IUnknown* serviceId, ::IUnknown** asyncOp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CreateAsync(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> RfcommDeviceService::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>().FromIdAsync(deviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelector(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>().GetDeviceSelector(serviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDevice(bluetoothDevice);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDevice(bluetoothDevice, cacheMode);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceAndServiceId(bluetoothDevice, serviceId);
}

inline hstring RfcommDeviceService::GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
{
    return get_activation_factory<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceAndServiceId(bluetoothDevice, serviceId, cacheMode);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::FromUuid(GUID const& uuid)
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().FromUuid(uuid);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::FromShortId(uint32_t shortId)
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().FromShortId(shortId);
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::SerialPort()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().SerialPort();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::ObexObjectPush()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().ObexObjectPush();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::ObexFileTransfer()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().ObexFileTransfer();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::PhoneBookAccessPce()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().PhoneBookAccessPce();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::PhoneBookAccessPse()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().PhoneBookAccessPse();
}

inline Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RfcommServiceId::GenericFileTransfer()
{
    return get_activation_factory<RfcommServiceId, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>().GenericFileTransfer();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> RfcommServiceProvider::CreateAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId)
{
    return get_activation_factory<RfcommServiceProvider, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>().CreateAsync(serviceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> {};

}

WINRT_WARNING_POP
