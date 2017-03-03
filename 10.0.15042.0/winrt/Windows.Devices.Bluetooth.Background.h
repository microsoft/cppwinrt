// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Advertisements(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Advertisements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalStrengthFilter(impl::abi_arg_out<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignalStrengthFilter());
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
    HRESULT __stdcall get_Characteristic(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Characteristic());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EventTriggeringMode(Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EventTriggeringMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueChangedEvents(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueChangedEvents());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>
{
    HRESULT __stdcall get_TriggerId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TriggerId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Service(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>
{
    HRESULT __stdcall get_AllServices(impl::abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllServices());
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
struct produce<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(impl::abi_arg_out<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
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
    HRESULT __stdcall get_Socket(impl::abi_arg_out<Windows::Networking::Sockets::IStreamSocket> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Socket());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Incoming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteDevice(impl::abi_arg_out<Windows::Devices::Bluetooth::IBluetoothDevice> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteDevice());
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
    HRESULT __stdcall get_SdpRecord(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SdpRecord());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SdpRecord(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SdpRecord(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalServiceId(impl::abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalServiceId(impl::abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceCapabilities());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_RemoteServiceId(impl::abi_arg_out<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteServiceId(impl::abi_arg_in<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->get_SdpRecord(put_abi(value)));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::SdpRecord(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->put_SdpRecord(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommInboundConnectionInformation<D>::LocalServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->get_LocalServiceId(put_abi(value)));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::LocalServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const
{
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->put_LocalServiceId(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::BluetoothServiceCapabilities impl_IRfcommInboundConnectionInformation<D>::ServiceCapabilities() const
{
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities value {};
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->get_ServiceCapabilities(&value));
    return value;
}

template <typename D> void impl_IRfcommInboundConnectionInformation<D>::ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities value) const
{
    check_hresult(WINRT_SHIM(IRfcommInboundConnectionInformation)->put_ServiceCapabilities(value));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId impl_IRfcommOutboundConnectionInformation<D>::RemoteServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value { nullptr };
    check_hresult(WINRT_SHIM(IRfcommOutboundConnectionInformation)->get_RemoteServiceId(put_abi(value)));
    return value;
}

template <typename D> void impl_IRfcommOutboundConnectionInformation<D>::RemoteServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const
{
    check_hresult(WINRT_SHIM(IRfcommOutboundConnectionInformation)->put_RemoteServiceId(get_abi(value)));
}

template <typename D> Windows::Networking::Sockets::StreamSocket impl_IRfcommConnectionTriggerDetails<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value { nullptr };
    check_hresult(WINRT_SHIM(IRfcommConnectionTriggerDetails)->get_Socket(put_abi(value)));
    return value;
}

template <typename D> bool impl_IRfcommConnectionTriggerDetails<D>::Incoming() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRfcommConnectionTriggerDetails)->get_Incoming(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDevice impl_IRfcommConnectionTriggerDetails<D>::RemoteDevice() const
{
    Windows::Devices::Bluetooth::BluetoothDevice value { nullptr };
    check_hresult(WINRT_SHIM(IRfcommConnectionTriggerDetails)->get_RemoteDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic impl_IGattCharacteristicNotificationTriggerDetails<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic value { nullptr };
    check_hresult(WINRT_SHIM(IGattCharacteristicNotificationTriggerDetails)->get_Characteristic(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattCharacteristicNotificationTriggerDetails<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattCharacteristicNotificationTriggerDetails)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattCharacteristicNotificationTriggerDetails2<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicNotificationTriggerDetails2)->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode impl_IGattCharacteristicNotificationTriggerDetails2<D>::EventTriggeringMode() const
{
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicNotificationTriggerDetails2)->get_EventTriggeringMode(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> impl_IGattCharacteristicNotificationTriggerDetails2<D>::ValueChangedEvents() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> value;
    check_hresult(WINRT_SHIM(IGattCharacteristicNotificationTriggerDetails2)->get_ValueChangedEvents(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> impl_IGattServiceProviderConnectionStatics<D>::AllServices() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> value;
    check_hresult(WINRT_SHIM(IGattServiceProviderConnectionStatics)->get_AllServices(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGattServiceProviderConnection<D>::TriggerId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGattServiceProviderConnection)->get_TriggerId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService impl_IGattServiceProviderConnection<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService value { nullptr };
    check_hresult(WINRT_SHIM(IGattServiceProviderConnection)->get_Service(put_abi(value)));
    return value;
}

template <typename D> void impl_IGattServiceProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(IGattServiceProviderConnection)->abi_Start());
}

template <typename D> Windows::Devices::Bluetooth::Background::GattServiceProviderConnection impl_IGattServiceProviderTriggerDetails<D>::Connection() const
{
    Windows::Devices::Bluetooth::Background::GattServiceProviderConnection value { nullptr };
    check_hresult(WINRT_SHIM(IGattServiceProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Error(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Advertisements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> value;
    check_hresult(WINRT_SHIM(IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Advertisements(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::SignalStrengthFilter() const
{
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter value { nullptr };
    check_hresult(WINRT_SHIM(IBluetoothLEAdvertisementWatcherTriggerDetails)->get_SignalStrengthFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus impl_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value {};
    check_hresult(WINRT_SHIM(IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Error(&value));
    return value;
}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> GattServiceProviderConnection::AllServices()
{
    return get_activation_factory<GattServiceProviderConnection, IGattServiceProviderConnectionStatics>().AllServices();
}

}

}

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
