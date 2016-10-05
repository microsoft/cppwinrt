// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Bluetooth.Rfcomm.3.h"
#include "internal/Windows.Devices.Bluetooth.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Devices.Bluetooth.GenericAttributeProfile.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Bluetooth.Advertisement.3.h"
#include "internal/Windows.Devices.Bluetooth.Background.3.h"
#include "Windows.Devices.Bluetooth.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Advertisements(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Advertisements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalStrengthFilter(abi_arg_out<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignalStrengthFilter());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>
{
    HRESULT __stdcall get_Characteristic(abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Characteristic());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>
{
    HRESULT __stdcall get_Socket(abi_arg_out<Windows::Networking::Sockets::IStreamSocket> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Socket());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Incoming(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Incoming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteDevice(abi_arg_out<Windows::Devices::Bluetooth::IBluetoothDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteDevice());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>
{
    HRESULT __stdcall get_SdpRecord(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SdpRecord());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SdpRecord(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().SdpRecord(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalServiceId(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalServiceId(abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            this->shim().LocalServiceId(*reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities value) noexcept override
    {
        try
        {
            this->shim().ServiceCapabilities(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> : produce_base<D, Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>
{
    HRESULT __stdcall get_RemoteServiceId(abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteServiceId(abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            this->shim().RemoteServiceId(*reinterpret_cast<const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Bluetooth::Background {

template <typename D> Windows::Storage::Streams::IBuffer impl_IRfcommInboundConnectionInformation<D>::SdpRecord() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->get_SdpRecord(put(value)));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::SdpRecord(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->put_SdpRecord(get(value)));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommInboundConnectionInformation<D>::LocalServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->get_LocalServiceId(put(value)));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::LocalServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const
{
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->put_LocalServiceId(get(value)));
}

template <typename D> Windows::Devices::Bluetooth::BluetoothServiceCapabilities impl_IRfcommInboundConnectionInformation<D>::ServiceCapabilities() const
{
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities value {};
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->get_ServiceCapabilities(&value));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities value) const
{
    check_hresult(static_cast<const IRfcommInboundConnectionInformation &>(static_cast<const D &>(*this))->put_ServiceCapabilities(value));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommOutboundConnectionInformation<D>::RemoteServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(static_cast<const IRfcommOutboundConnectionInformation &>(static_cast<const D &>(*this))->get_RemoteServiceId(put(value)));
    return value;
}

template <typename D> void impl_IRfcommOutboundConnectionInformation<D>::RemoteServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const
{
    check_hresult(static_cast<const IRfcommOutboundConnectionInformation &>(static_cast<const D &>(*this))->put_RemoteServiceId(get(value)));
}

template <typename D> Windows::Networking::Sockets::StreamSocket impl_IRfcommConnectionTriggerDetails<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value { nullptr };
    check_hresult(static_cast<const IRfcommConnectionTriggerDetails &>(static_cast<const D &>(*this))->get_Socket(put(value)));
    return value;
}

template <typename D> bool impl_IRfcommConnectionTriggerDetails<D>::Incoming() const
{
    bool value {};
    check_hresult(static_cast<const IRfcommConnectionTriggerDetails &>(static_cast<const D &>(*this))->get_Incoming(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDevice impl_IRfcommConnectionTriggerDetails<D>::RemoteDevice() const
{
    Windows::Devices::Bluetooth::BluetoothDevice value { nullptr };
    check_hresult(static_cast<const IRfcommConnectionTriggerDetails &>(static_cast<const D &>(*this))->get_RemoteDevice(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic impl_IGattCharacteristicNotificationTriggerDetails<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic value { nullptr };
    check_hresult(static_cast<const IGattCharacteristicNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Characteristic(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattCharacteristicNotificationTriggerDetails<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IGattCharacteristicNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(static_cast<const IBluetoothLEAdvertisementWatcherTriggerDetails &>(static_cast<const D &>(*this))->get_Error(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Advertisements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> value;
    check_hresult(static_cast<const IBluetoothLEAdvertisementWatcherTriggerDetails &>(static_cast<const D &>(*this))->get_Advertisements(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::SignalStrengthFilter() const
{
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter value { nullptr };
    check_hresult(static_cast<const IBluetoothLEAdvertisementWatcherTriggerDetails &>(static_cast<const D &>(*this))->get_SignalStrengthFilter(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus impl_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value {};
    check_hresult(static_cast<const IBluetoothLEAdvertisementPublisherTriggerDetails &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(static_cast<const IBluetoothLEAdvertisementPublisherTriggerDetails &>(static_cast<const D &>(*this))->get_Error(&value));
    return value;
}

}

}
