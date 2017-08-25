// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.2.h"
#include "winrt/Windows.Devices.Bluetooth.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::Advertisements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_Advertisements(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>::SignalStrengthFilter() const
{
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails)->get_SignalStrengthFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails)->get_Characteristic(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::EventTriggeringMode() const
{
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_EventTriggeringMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>::ValueChangedEvents() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2)->get_ValueChangedEvents(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::TriggerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->get_TriggerId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->get_Service(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection)->Start());
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics<D>::AllServices() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics)->get_AllServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Background::GattServiceProviderConnection consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails<D>::Connection() const
{
    Windows::Devices::Bluetooth::Background::GattServiceProviderConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_Socket(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::Incoming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_Incoming(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDevice consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>::RemoteDevice() const
{
    Windows::Devices::Bluetooth::BluetoothDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails)->get_RemoteDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::SdpRecord() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_SdpRecord(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::SdpRecord(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_SdpRecord(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::LocalServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_LocalServiceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::LocalServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_LocalServiceId(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::BluetoothServiceCapabilities consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::ServiceCapabilities() const
{
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->get_ServiceCapabilities(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>::ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation)->put_ServiceCapabilities(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation<D>::RemoteServiceId() const
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation)->get_RemoteServiceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation<D>::RemoteServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation)->put_RemoteServiceId(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> : produce_base<D, Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) noexcept override
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

    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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
    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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

    HRESULT __stdcall get_Advertisements(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_SignalStrengthFilter(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Characteristic(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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

    HRESULT __stdcall get_EventTriggeringMode(abi_t<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>* value) noexcept override
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

    HRESULT __stdcall get_ValueChangedEvents(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_TriggerId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_Service(::IUnknown** value) noexcept override
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

    HRESULT __stdcall Start() noexcept override
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
    HRESULT __stdcall get_AllServices(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Socket(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Incoming(bool* value) noexcept override
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

    HRESULT __stdcall get_RemoteDevice(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_SdpRecord(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_SdpRecord(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SdpRecord(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalServiceId(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_LocalServiceId(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceCapabilities(abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>* value) noexcept override
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

    HRESULT __stdcall put_ServiceCapabilities(abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceCapabilities(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothServiceCapabilities const*>(&value));
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
    HRESULT __stdcall get_RemoteServiceId(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_RemoteServiceId(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteServiceId(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background {

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> GattServiceProviderConnection::AllServices()
{
    return get_activation_factory<GattServiceProviderConnection, Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>().AllServices();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation> {};

}

WINRT_WARNING_POP
