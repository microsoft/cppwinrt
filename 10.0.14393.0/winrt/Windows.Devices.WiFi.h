// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Networking.Connectivity.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.WiFi.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAdapter> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapter>
{
    HRESULT __stdcall get_NetworkAdapter(abi_arg_out<Windows::Networking::Connectivity::INetworkAdapter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ScanAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScanAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkReport(abi_arg_out<Windows::Devices::WiFi::IWiFiNetworkReport> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AvailableNetworksChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable>> args, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().AvailableNetworksChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> *>(&args)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableNetworksChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().AvailableNetworksChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectAsync(abi_arg_in<Windows::Devices::WiFi::IWiFiAvailableNetwork> availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Devices::WiFi::WiFiAvailableNetwork *>(&availableNetwork), reconnectionKind));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithPasswordCredentialAsync(abi_arg_in<Windows::Devices::WiFi::IWiFiAvailableNetwork> availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, abi_arg_in<Windows::Security::Credentials::IPasswordCredential> passwordCredential, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Devices::WiFi::WiFiAvailableNetwork *>(&availableNetwork), reconnectionKind, *reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&passwordCredential)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectWithPasswordCredentialAndSsidAsync(abi_arg_in<Windows::Devices::WiFi::IWiFiAvailableNetwork> availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, abi_arg_in<Windows::Security::Credentials::IPasswordCredential> passwordCredential, abi_arg_in<hstring> ssid, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectAsync(*reinterpret_cast<const Windows::Devices::WiFi::WiFiAvailableNetwork *>(&availableNetwork), reconnectionKind, *reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&passwordCredential), *reinterpret_cast<const hstring *>(&ssid)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Disconnect() noexcept override
    {
        try
        {
            this->shim().Disconnect();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAdapterStatics> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapterStatics>
{
    HRESULT __stdcall abi_FindAllAdaptersAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindAllAdaptersAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> deviceSelector) noexcept override
    {
        try
        {
            *deviceSelector = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestAccessAsync());
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
struct produce<D, Windows::Devices::WiFi::IWiFiAvailableNetwork> : produce_base<D, Windows::Devices::WiFi::IWiFiAvailableNetwork>
{
    HRESULT __stdcall get_Uptime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uptime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ssid(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ssid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bssid(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bssid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChannelCenterFrequencyInKilohertz());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkRssiInDecibelMilliwatts(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkRssiInDecibelMilliwatts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalBars(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignalBars());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkKind(Windows::Devices::WiFi::WiFiNetworkKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhyKind(Windows::Devices::WiFi::WiFiPhyKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhyKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecuritySettings(abi_arg_out<Windows::Networking::Connectivity::INetworkSecuritySettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SecuritySettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BeaconInterval(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BeaconInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWiFiDirect(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWiFiDirect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiConnectionResult> : produce_base<D, Windows::Devices::WiFi::IWiFiConnectionResult>
{
    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::WiFi::WiFiConnectionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiNetworkReport> : produce_base<D, Windows::Devices::WiFi::IWiFiNetworkReport>
{
    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableNetworks(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableNetworks());
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

namespace Windows::Devices::WiFi {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> impl_IWiFiAdapterStatics<D>::FindAllAdaptersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> value;
    check_hresult(static_cast<const IWiFiAdapterStatics &>(static_cast<const D &>(*this))->abi_FindAllAdaptersAsync(put(value)));
    return value;
}

template <typename D> hstring impl_IWiFiAdapterStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector;
    check_hresult(static_cast<const IWiFiAdapterStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> impl_IWiFiAdapterStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> asyncOp;
    check_hresult(static_cast<const IWiFiAdapterStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> impl_IWiFiAdapterStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> value;
    check_hresult(static_cast<const IWiFiAdapterStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter impl_IWiFiAdapter<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value { nullptr };
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->get_NetworkAdapter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWiFiAdapter<D>::ScanAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->abi_ScanAsync(put(value)));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiNetworkReport impl_IWiFiAdapter<D>::NetworkReport() const
{
    Windows::Devices::WiFi::WiFiNetworkReport value { nullptr };
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->get_NetworkReport(put(value)));
    return value;
}

template <typename D> event_token impl_IWiFiAdapter<D>::AvailableNetworksChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> & args) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->add_AvailableNetworksChanged(get(args), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IWiFiAdapter> impl_IWiFiAdapter<D>::AvailableNetworksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> & args) const
{
    return impl::make_event_revoker<D, IWiFiAdapter>(this, &ABI::Windows::Devices::WiFi::IWiFiAdapter::remove_AvailableNetworksChanged, AvailableNetworksChanged(args));
}

template <typename D> void impl_IWiFiAdapter<D>::AvailableNetworksChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->remove_AvailableNetworksChanged(eventCookie));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> impl_IWiFiAdapter<D>::ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value;
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->abi_ConnectAsync(get(availableNetwork), reconnectionKind, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> impl_IWiFiAdapter<D>::ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, const Windows::Security::Credentials::PasswordCredential & passwordCredential) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value;
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->abi_ConnectWithPasswordCredentialAsync(get(availableNetwork), reconnectionKind, get(passwordCredential), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> impl_IWiFiAdapter<D>::ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, const Windows::Security::Credentials::PasswordCredential & passwordCredential, hstring_ref ssid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value;
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->abi_ConnectWithPasswordCredentialAndSsidAsync(get(availableNetwork), reconnectionKind, get(passwordCredential), get(ssid), put(value)));
    return value;
}

template <typename D> void impl_IWiFiAdapter<D>::Disconnect() const
{
    check_hresult(static_cast<const IWiFiAdapter &>(static_cast<const D &>(*this))->abi_Disconnect());
}

template <typename D> Windows::Foundation::DateTime impl_IWiFiNetworkReport<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IWiFiNetworkReport &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> impl_IWiFiNetworkReport<D>::AvailableNetworks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> value;
    check_hresult(static_cast<const IWiFiNetworkReport &>(static_cast<const D &>(*this))->get_AvailableNetworks(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IWiFiAvailableNetwork<D>::Uptime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_Uptime(put(value)));
    return value;
}

template <typename D> hstring impl_IWiFiAvailableNetwork<D>::Ssid() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_Ssid(put(value)));
    return value;
}

template <typename D> hstring impl_IWiFiAvailableNetwork<D>::Bssid() const
{
    hstring value;
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_Bssid(put(value)));
    return value;
}

template <typename D> int32_t impl_IWiFiAvailableNetwork<D>::ChannelCenterFrequencyInKilohertz() const
{
    int32_t value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_ChannelCenterFrequencyInKilohertz(&value));
    return value;
}

template <typename D> double impl_IWiFiAvailableNetwork<D>::NetworkRssiInDecibelMilliwatts() const
{
    double value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_NetworkRssiInDecibelMilliwatts(&value));
    return value;
}

template <typename D> uint8_t impl_IWiFiAvailableNetwork<D>::SignalBars() const
{
    uint8_t value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_SignalBars(&value));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiNetworkKind impl_IWiFiAvailableNetwork<D>::NetworkKind() const
{
    Windows::Devices::WiFi::WiFiNetworkKind value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_NetworkKind(&value));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiPhyKind impl_IWiFiAvailableNetwork<D>::PhyKind() const
{
    Windows::Devices::WiFi::WiFiPhyKind value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_PhyKind(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkSecuritySettings impl_IWiFiAvailableNetwork<D>::SecuritySettings() const
{
    Windows::Networking::Connectivity::NetworkSecuritySettings value { nullptr };
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_SecuritySettings(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IWiFiAvailableNetwork<D>::BeaconInterval() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_BeaconInterval(put(value)));
    return value;
}

template <typename D> bool impl_IWiFiAvailableNetwork<D>::IsWiFiDirect() const
{
    bool value {};
    check_hresult(static_cast<const IWiFiAvailableNetwork &>(static_cast<const D &>(*this))->get_IsWiFiDirect(&value));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiConnectionStatus impl_IWiFiConnectionResult<D>::ConnectionStatus() const
{
    Windows::Devices::WiFi::WiFiConnectionStatus value {};
    check_hresult(static_cast<const IWiFiConnectionResult &>(static_cast<const D &>(*this))->get_ConnectionStatus(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> WiFiAdapter::FindAllAdaptersAsync()
{
    return get_activation_factory<WiFiAdapter, IWiFiAdapterStatics>().FindAllAdaptersAsync();
}

inline hstring WiFiAdapter::GetDeviceSelector()
{
    return get_activation_factory<WiFiAdapter, IWiFiAdapterStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> WiFiAdapter::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<WiFiAdapter, IWiFiAdapterStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> WiFiAdapter::RequestAccessAsync()
{
    return get_activation_factory<WiFiAdapter, IWiFiAdapterStatics>().RequestAccessAsync();
}

}

}
