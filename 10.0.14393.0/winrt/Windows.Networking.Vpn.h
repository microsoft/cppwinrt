// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Security.Cryptography.Certificates.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Networking.Vpn.3.h"
#include "Windows.Networking.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnAppId> : produce_base<D, Windows::Networking::Vpn::IVpnAppId>
{
    HRESULT __stdcall get_Type(Windows::Networking::Vpn::VpnAppIdType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Networking::Vpn::VpnAppIdType value) noexcept override
    {
        try
        {
            this->shim().Type(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Value(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnAppIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnAppIdFactory>
{
    HRESULT __stdcall abi_Create(Windows::Networking::Vpn::VpnAppIdType type, abi_arg_in<hstring> value, abi_arg_out<Windows::Networking::Vpn::IVpnAppId> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(type, *reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannel> : produce_base<D, Windows::Networking::Vpn::IVpnChannel>
{
    HRESULT __stdcall abi_AssociateTransport(abi_arg_in<Windows::IInspectable> mainOuterTunnelTransport, abi_arg_in<Windows::IInspectable> optionalOuterTunnelTransport) noexcept override
    {
        try
        {
            this->shim().AssociateTransport(*reinterpret_cast<const Windows::IInspectable *>(&mainOuterTunnelTransport), *reinterpret_cast<const Windows::IInspectable *>(&optionalOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv4list, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv6list, abi_arg_in<Windows::Networking::Vpn::IVpnInterfaceId> vpnInterfaceId, abi_arg_in<Windows::Networking::Vpn::IVpnRouteAssignment> routeScope, abi_arg_in<Windows::Networking::Vpn::IVpnNamespaceAssignment> namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, abi_arg_in<Windows::IInspectable> mainOuterTunnelTransport, abi_arg_in<Windows::IInspectable> optionalOuterTunnelTransport) noexcept override
    {
        try
        {
            this->shim().Start(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv4list), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv6list), *reinterpret_cast<const Windows::Networking::Vpn::VpnInterfaceId *>(&vpnInterfaceId), *reinterpret_cast<const Windows::Networking::Vpn::VpnRouteAssignment *>(&routeScope), *reinterpret_cast<const Windows::Networking::Vpn::VpnNamespaceAssignment *>(&namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, *reinterpret_cast<const Windows::IInspectable *>(&mainOuterTunnelTransport), *reinterpret_cast<const Windows::IInspectable *>(&optionalOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCredentials(Windows::Networking::Vpn::VpnCredentialType credType, bool isRetry, bool isSingleSignOnCredential, abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> certificate, abi_arg_out<Windows::Networking::Vpn::IVpnPickedCredential> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().RequestCredentials(credType, isRetry, isSingleSignOnCredential, *reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType type, abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> vpnPacketBuffer) noexcept override
    {
        try
        {
            this->shim().RequestVpnPacketBuffer(type, *vpnPacketBuffer);
            return S_OK;
        }
        catch (...)
        {
            *vpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogDiagnosticMessage(abi_arg_in<hstring> message) noexcept override
    {
        try
        {
            this->shim().LogDiagnosticMessage(*reinterpret_cast<const hstring *>(&message));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::Networking::Vpn::IVpnChannelConfiguration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActivityChange(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActivityChange(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActivityChange(event_token token) noexcept override
    {
        try
        {
            this->shim().ActivityChange(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlugInContext(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().PlugInContext(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInContext(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlugInContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemHealth(abi_arg_out<Windows::Networking::Vpn::IVpnSystemHealth> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemHealth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCustomPrompt(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt>> customPrompt) noexcept override
    {
        try
        {
            this->shim().RequestCustomPrompt(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> *>(&customPrompt));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetErrorMessage(abi_arg_in<hstring> message) noexcept override
    {
        try
        {
            this->shim().SetErrorMessage(*reinterpret_cast<const hstring *>(&message));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAllowedSslTlsVersions(abi_arg_in<Windows::IInspectable> tunnelTransport, bool useTls12) noexcept override
    {
        try
        {
            this->shim().SetAllowedSslTlsVersions(*reinterpret_cast<const Windows::IInspectable *>(&tunnelTransport), useTls12);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannel2> : produce_base<D, Windows::Networking::Vpn::IVpnChannel2>
{
    HRESULT __stdcall abi_StartWithMainTransport(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv4list, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv6list, abi_arg_in<Windows::Networking::Vpn::IVpnInterfaceId> vpnInterfaceId, abi_arg_in<Windows::Networking::Vpn::IVpnRouteAssignment> assignedRoutes, abi_arg_in<Windows::Networking::Vpn::IVpnDomainNameAssignment> assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, abi_arg_in<Windows::IInspectable> mainOuterTunnelTransport) noexcept override
    {
        try
        {
            this->shim().StartWithMainTransport(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv4list), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv6list), *reinterpret_cast<const Windows::Networking::Vpn::VpnInterfaceId *>(&vpnInterfaceId), *reinterpret_cast<const Windows::Networking::Vpn::VpnRouteAssignment *>(&assignedRoutes), *reinterpret_cast<const Windows::Networking::Vpn::VpnDomainNameAssignment *>(&assignedDomainName), mtuSize, maxFrameSize, Reserved, *reinterpret_cast<const Windows::IInspectable *>(&mainOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartExistingTransports(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv4list, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIPv6list, abi_arg_in<Windows::Networking::Vpn::IVpnInterfaceId> vpnInterfaceId, abi_arg_in<Windows::Networking::Vpn::IVpnRouteAssignment> assignedRoutes, abi_arg_in<Windows::Networking::Vpn::IVpnDomainNameAssignment> assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) noexcept override
    {
        try
        {
            this->shim().StartExistingTransports(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv4list), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIPv6list), *reinterpret_cast<const Windows::Networking::Vpn::VpnInterfaceId *>(&vpnInterfaceId), *reinterpret_cast<const Windows::Networking::Vpn::VpnRouteAssignment *>(&assignedRoutes), *reinterpret_cast<const Windows::Networking::Vpn::VpnDomainNameAssignment *>(&assignedDomainName), mtuSize, maxFrameSize, Reserved);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActivityStateChange(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActivityStateChange(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActivityStateChange(event_token token) noexcept override
    {
        try
        {
            this->shim().ActivityStateChange(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVpnSendPacketBuffer(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> vpnSendPacketBuffer) noexcept override
    {
        try
        {
            *vpnSendPacketBuffer = detach(this->shim().GetVpnSendPacketBuffer());
            return S_OK;
        }
        catch (...)
        {
            *vpnSendPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVpnReceivePacketBuffer(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> vpnReceivePacketBuffer) noexcept override
    {
        try
        {
            *vpnReceivePacketBuffer = detach(this->shim().GetVpnReceivePacketBuffer());
            return S_OK;
        }
        catch (...)
        {
            *vpnReceivePacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCustomPromptAsync(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement>> customPromptElement, abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().RequestCustomPromptAsync(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> *>(&customPromptElement)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCredentialsWithCertificateAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> certificate, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().RequestCredentialsAsync(credType, credOptions, *reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCredentialsWithOptionsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().RequestCredentialsAsync(credType, credOptions));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCredentialsSimpleAsync(Windows::Networking::Vpn::VpnCredentialType credType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>> credential) noexcept override
    {
        try
        {
            *credential = detach(this->shim().RequestCredentialsAsync(credType));
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TerminateConnection(abi_arg_in<hstring> message) noexcept override
    {
        try
        {
            this->shim().TerminateConnection(*reinterpret_cast<const hstring *>(&message));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartWithTrafficFilter(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIpv4List, abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> assignedClientIpv6List, abi_arg_in<Windows::Networking::Vpn::IVpnInterfaceId> vpnInterfaceId, abi_arg_in<Windows::Networking::Vpn::IVpnRouteAssignment> assignedRoutes, abi_arg_in<Windows::Networking::Vpn::IVpnDomainNameAssignment> assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, abi_arg_in<Windows::IInspectable> mainOuterTunnelTransport, abi_arg_in<Windows::IInspectable> optionalOuterTunnelTransport, abi_arg_in<Windows::Networking::Vpn::IVpnTrafficFilterAssignment> assignedTrafficFilters) noexcept override
    {
        try
        {
            this->shim().StartWithTrafficFilter(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIpv4List), *reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> *>(&assignedClientIpv6List), *reinterpret_cast<const Windows::Networking::Vpn::VpnInterfaceId *>(&vpnInterfaceId), *reinterpret_cast<const Windows::Networking::Vpn::VpnRouteAssignment *>(&assignedRoutes), *reinterpret_cast<const Windows::Networking::Vpn::VpnDomainNameAssignment *>(&assignedNamespace), mtuSize, maxFrameSize, reserved, *reinterpret_cast<const Windows::IInspectable *>(&mainOuterTunnelTransport), *reinterpret_cast<const Windows::IInspectable *>(&optionalOuterTunnelTransport), *reinterpret_cast<const Windows::Networking::Vpn::VpnTrafficFilterAssignment *>(&assignedTrafficFilters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs>
{
    HRESULT __stdcall get_Type(Windows::Networking::Vpn::VpnChannelActivityEventType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>
{
    HRESULT __stdcall get_ActivityState(Windows::Networking::Vpn::VpnChannelActivityEventType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration>
{
    HRESULT __stdcall get_ServerServiceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerServiceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerHostNameList(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerHostNameList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomField(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomField());
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
struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration2> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration2>
{
    HRESULT __stdcall get_ServerUris(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerUris());
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
struct produce<D, Windows::Networking::Vpn::IVpnChannelStatics> : produce_base<D, Windows::Networking::Vpn::IVpnChannelStatics>
{
    HRESULT __stdcall abi_ProcessEventAsync(abi_arg_in<Windows::IInspectable> thirdPartyPlugIn, abi_arg_in<Windows::IInspectable> event) noexcept override
    {
        try
        {
            this->shim().ProcessEventAsync(*reinterpret_cast<const Windows::IInspectable *>(&thirdPartyPlugIn), *reinterpret_cast<const Windows::IInspectable *>(&event));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCredential> : produce_base<D, Windows::Networking::Vpn::IVpnCredential>
{
    HRESULT __stdcall get_PasskeyCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PasskeyCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CertificateCredential(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CertificateCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalPin(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdditionalPin());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldPasswordCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldPasswordCredential());
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
struct produce<D, Windows::Networking::Vpn::IVpnCustomCheckBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomCheckBox>
{
    HRESULT __stdcall put_InitialCheckState(bool value) noexcept override
    {
        try
        {
            this->shim().InitialCheckState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialCheckState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialCheckState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Checked(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Checked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomComboBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomComboBox>
{
    HRESULT __stdcall put_OptionsText(abi_arg_in<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            this->shim().OptionsText(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<hstring> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OptionsText(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OptionsText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomEditBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomEditBox>
{
    HRESULT __stdcall put_DefaultText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DefaultText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoEcho(bool value) noexcept override
    {
        try
        {
            this->shim().NoEcho(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NoEcho(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NoEcho());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
struct produce<D, Windows::Networking::Vpn::IVpnCustomErrorBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomErrorBox>
{};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPrompt> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    HRESULT __stdcall put_Label(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Label(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Label(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Compulsory(bool value) noexcept override
    {
        try
        {
            this->shim().Compulsory(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Compulsory(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Compulsory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bordered(bool value) noexcept override
    {
        try
        {
            this->shim().Bordered(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bordered(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bordered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>
{
    HRESULT __stdcall put_InitialValue(bool value) noexcept override
    {
        try
        {
            this->shim().InitialValue(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialValue(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptElement> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Compulsory(bool value) noexcept override
    {
        try
        {
            this->shim().Compulsory(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Compulsory(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Compulsory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Emphasized(bool value) noexcept override
    {
        try
        {
            this->shim().Emphasized(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Emphasized(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Emphasized());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>
{
    HRESULT __stdcall get_Options(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptText> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptText>
{
    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput>
{
    HRESULT __stdcall put_PlaceholderText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PlaceholderText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaceholderText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTextHidden(bool value) noexcept override
    {
        try
        {
            this->shim().IsTextHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTextHidden(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTextHidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
struct produce<D, Windows::Networking::Vpn::IVpnCustomTextBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomTextBox>
{
    HRESULT __stdcall put_DisplayText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayText());
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
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameAssignment>
{
    HRESULT __stdcall get_DomainNameList(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainNameList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAutoConfigurationUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ProxyAutoConfigurationUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAutoConfigurationUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyAutoConfigurationUri());
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
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo>
{
    HRESULT __stdcall put_DomainName(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().DomainName(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DomainNameType(Windows::Networking::Vpn::VpnDomainNameType value) noexcept override
    {
        try
        {
            this->shim().DomainNameType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainNameType(Windows::Networking::Vpn::VpnDomainNameType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainNameType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DnsServers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DnsServers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebProxyServers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebProxyServers());
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
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo2> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo2>
{
    HRESULT __stdcall get_WebProxyUris(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebProxyUris());
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
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
{
    HRESULT __stdcall abi_CreateVpnDomainNameInfo(abi_arg_in<hstring> name, Windows::Networking::Vpn::VpnDomainNameType nameType, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName>> dnsServerList, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName>> proxyServerList, abi_arg_out<Windows::Networking::Vpn::IVpnDomainNameInfo> domainNameInfo) noexcept override
    {
        try
        {
            *domainNameInfo = detach(this->shim().CreateVpnDomainNameInfo(*reinterpret_cast<const hstring *>(&name), nameType, *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> *>(&dnsServerList), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> *>(&proxyServerList)));
            return S_OK;
        }
        catch (...)
        {
            *domainNameInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnInterfaceId> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceId>
{
    HRESULT __stdcall abi_GetAddressInfo(uint32_t * __idSize, abi_arg_out<uint8_t> * id) noexcept override
    {
        try
        {
            this->shim().GetAddressInfo(detach<uint8_t>(__idSize, id));
            return S_OK;
        }
        catch (...)
        {
            *__idSize = 0;
            *id = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory>
{
    HRESULT __stdcall abi_CreateVpnInterfaceId(uint32_t __addressSize, abi_arg_in<uint8_t> * address, abi_arg_out<Windows::Networking::Vpn::IVpnInterfaceId> vpnInterfaceId) noexcept override
    {
        try
        {
            *vpnInterfaceId = detach(this->shim().CreateVpnInterfaceId(array_ref<const uint8_t>(address, address + __addressSize)));
            return S_OK;
        }
        catch (...)
        {
            *vpnInterfaceId = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnManagementAgent> : produce_base<D, Windows::Networking::Vpn::IVpnManagementAgent>
{
    HRESULT __stdcall abi_AddProfileFromXmlAsync(abi_arg_in<hstring> xml, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AddProfileFromXmlAsync(*reinterpret_cast<const hstring *>(&xml)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddProfileFromObjectAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AddProfileFromObjectAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateProfileFromXmlAsync(abi_arg_in<hstring> xml, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateProfileFromXmlAsync(*reinterpret_cast<const hstring *>(&xml)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateProfileFromObjectAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateProfileFromObjectAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProfilesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetProfilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteProfileAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteProfileAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectProfileAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectProfileAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConnectProfileWithPasswordCredentialAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_in<Windows::Security::Credentials::IPasswordCredential> passwordCredential, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ConnectProfileWithPasswordCredentialAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile), *reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&passwordCredential)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DisconnectProfileAsync(abi_arg_in<Windows::Networking::Vpn::IVpnProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DisconnectProfileAsync(*reinterpret_cast<const Windows::Networking::Vpn::IVpnProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceAssignment>
{
    HRESULT __stdcall put_NamespaceList(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>> value) noexcept override
    {
        try
        {
            this->shim().NamespaceList(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NamespaceList(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NamespaceList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAutoConfigUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ProxyAutoConfigUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAutoConfigUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyAutoConfigUri());
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
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfo> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfo>
{
    HRESULT __stdcall put_Namespace(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Namespace(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Namespace(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Namespace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DnsServers(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            this->shim().DnsServers(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DnsServers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DnsServers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WebProxyServers(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            this->shim().WebProxyServers(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebProxyServers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebProxyServers());
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
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
{
    HRESULT __stdcall abi_CreateVpnNamespaceInfo(abi_arg_in<hstring> name, abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> dnsServerList, abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>> proxyServerList, abi_arg_out<Windows::Networking::Vpn::IVpnNamespaceInfo> namespaceInfo) noexcept override
    {
        try
        {
            *namespaceInfo = detach(this->shim().CreateVpnNamespaceInfo(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> *>(&dnsServerList), *reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> *>(&proxyServerList)));
            return S_OK;
        }
        catch (...)
        {
            *namespaceInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile>
{
    HRESULT __stdcall get_Servers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Servers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoutingPolicyType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) noexcept override
    {
        try
        {
            this->shim().RoutingPolicyType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NativeProtocolType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType value) noexcept override
    {
        try
        {
            this->shim().NativeProtocolType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserAuthenticationMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) noexcept override
    {
        try
        {
            this->shim().UserAuthenticationMethod(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TunnelAuthenticationMethod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) noexcept override
    {
        try
        {
            this->shim().TunnelAuthenticationMethod(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EapConfiguration(abi_arg_out<hstring> Value) noexcept override
    {
        try
        {
            *Value = detach(this->shim().EapConfiguration());
            return S_OK;
        }
        catch (...)
        {
            *Value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EapConfiguration(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().EapConfiguration(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile2>
{
    HRESULT __stdcall get_RequireVpnClientAppUI(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequireVpnClientAppUI());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequireVpnClientAppUI(bool value) noexcept override
    {
        try
        {
            this->shim().RequireVpnClientAppUI(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Networking::Vpn::VpnManagementConnectionStatus * value) noexcept override
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
struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer>
{
    HRESULT __stdcall get_Buffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) noexcept override
    {
        try
        {
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::Vpn::VpnPacketBufferStatus * value) noexcept override
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

    HRESULT __stdcall put_TransportAffinity(uint32_t value) noexcept override
    {
        try
        {
            this->shim().TransportAffinity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportAffinity(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportAffinity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer2>
{
    HRESULT __stdcall get_AppId(abi_arg_out<Windows::Networking::Vpn::IVpnAppId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppId());
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
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferFactory> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferFactory>
{
    HRESULT __stdcall abi_CreateVpnPacketBuffer(abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> parentBuffer, uint32_t offset, uint32_t length, abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> vpnPacketBuffer) noexcept override
    {
        try
        {
            *vpnPacketBuffer = detach(this->shim().CreateVpnPacketBuffer(*reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&parentBuffer), offset, length));
            return S_OK;
        }
        catch (...)
        {
            *vpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList>
{
    HRESULT __stdcall abi_Append(abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            this->shim().Append(*reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddAtBegin(abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            this->shim().AddAtBegin(*reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAtEnd(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            *nextVpnPacketBuffer = detach(this->shim().RemoveAtEnd());
            return S_OK;
        }
        catch (...)
        {
            *nextVpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAtBegin(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            *nextVpnPacketBuffer = detach(this->shim().RemoveAtBegin());
            return S_OK;
        }
        catch (...)
        {
            *nextVpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) noexcept override
    {
        try
        {
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::Vpn::VpnPacketBufferStatus * value) noexcept override
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

    HRESULT __stdcall get_Size(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList2>
{
    HRESULT __stdcall abi_AddLeadingPacket(abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            this->shim().AddLeadingPacket(*reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveLeadingPacket(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            *nextVpnPacketBuffer = detach(this->shim().RemoveLeadingPacket());
            return S_OK;
        }
        catch (...)
        {
            *nextVpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddTrailingPacket(abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            this->shim().AddTrailingPacket(*reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveTrailingPacket(abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> nextVpnPacketBuffer) noexcept override
    {
        try
        {
            *nextVpnPacketBuffer = detach(this->shim().RemoveTrailingPacket());
            return S_OK;
        }
        catch (...)
        {
            *nextVpnPacketBuffer = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPickedCredential> : produce_base<D, Windows::Networking::Vpn::IVpnPickedCredential>
{
    HRESULT __stdcall get_PasskeyCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PasskeyCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalPin(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdditionalPin());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldPasswordCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldPasswordCredential());
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
struct produce<D, Windows::Networking::Vpn::IVpnPlugIn> : produce_base<D, Windows::Networking::Vpn::IVpnPlugIn>
{
    HRESULT __stdcall abi_Connect(abi_arg_in<Windows::Networking::Vpn::IVpnChannel> channel) noexcept override
    {
        try
        {
            this->shim().Connect(*reinterpret_cast<const Windows::Networking::Vpn::VpnChannel *>(&channel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Disconnect(abi_arg_in<Windows::Networking::Vpn::IVpnChannel> channel) noexcept override
    {
        try
        {
            this->shim().Disconnect(*reinterpret_cast<const Windows::Networking::Vpn::VpnChannel *>(&channel));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetKeepAlivePayload(abi_arg_in<Windows::Networking::Vpn::IVpnChannel> channel, abi_arg_out<Windows::Networking::Vpn::IVpnPacketBuffer> keepAlivePacket) noexcept override
    {
        try
        {
            this->shim().GetKeepAlivePayload(*reinterpret_cast<const Windows::Networking::Vpn::VpnChannel *>(&channel), *keepAlivePacket);
            return S_OK;
        }
        catch (...)
        {
            *keepAlivePacket = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Encapsulate(abi_arg_in<Windows::Networking::Vpn::IVpnChannel> channel, abi_arg_in<Windows::Networking::Vpn::IVpnPacketBufferList> packets, abi_arg_in<Windows::Networking::Vpn::IVpnPacketBufferList> encapulatedPackets) noexcept override
    {
        try
        {
            this->shim().Encapsulate(*reinterpret_cast<const Windows::Networking::Vpn::VpnChannel *>(&channel), *reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBufferList *>(&packets), *reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBufferList *>(&encapulatedPackets));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Decapsulate(abi_arg_in<Windows::Networking::Vpn::IVpnChannel> channel, abi_arg_in<Windows::Networking::Vpn::IVpnPacketBuffer> encapBuffer, abi_arg_in<Windows::Networking::Vpn::IVpnPacketBufferList> decapsulatedPackets, abi_arg_in<Windows::Networking::Vpn::IVpnPacketBufferList> controlPacketsToSend) noexcept override
    {
        try
        {
            this->shim().Decapsulate(*reinterpret_cast<const Windows::Networking::Vpn::VpnChannel *>(&channel), *reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBuffer *>(&encapBuffer), *reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBufferList *>(&decapsulatedPackets), *reinterpret_cast<const Windows::Networking::Vpn::VpnPacketBufferList *>(&controlPacketsToSend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile>
{
    HRESULT __stdcall get_ServerUris(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerUris());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomConfiguration(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomConfiguration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomConfiguration(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CustomConfiguration(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VpnPluginPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VpnPluginPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VpnPluginPackageFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().VpnPluginPackageFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile2>
{
    HRESULT __stdcall get_RequireVpnClientAppUI(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequireVpnClientAppUI());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequireVpnClientAppUI(bool value) noexcept override
    {
        try
        {
            this->shim().RequireVpnClientAppUI(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Networking::Vpn::VpnManagementConnectionStatus * value) noexcept override
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
struct produce<D, Windows::Networking::Vpn::IVpnProfile> : produce_base<D, Windows::Networking::Vpn::IVpnProfile>
{
    HRESULT __stdcall get_ProfileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProfileName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ProfileName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppTriggers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppTriggers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Routes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Routes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DomainNameInfoList(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DomainNameInfoList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFilters(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrafficFilters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RememberCredentials(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RememberCredentials());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RememberCredentials(bool value) noexcept override
    {
        try
        {
            this->shim().RememberCredentials(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysOn(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlwaysOn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysOn(bool value) noexcept override
    {
        try
        {
            this->shim().AlwaysOn(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRoute> : produce_base<D, Windows::Networking::Vpn::IVpnRoute>
{
    HRESULT __stdcall put_Address(abi_arg_in<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            this->shim().Address(*reinterpret_cast<const Windows::Networking::HostName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrefixSize(uint8_t value) noexcept override
    {
        try
        {
            this->shim().PrefixSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrefixSize(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrefixSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRouteAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnRouteAssignment>
{
    HRESULT __stdcall put_Ipv4InclusionRoutes(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            this->shim().Ipv4InclusionRoutes(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv6InclusionRoutes(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            this->shim().Ipv6InclusionRoutes(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv4InclusionRoutes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ipv4InclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv6InclusionRoutes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ipv6InclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv4ExclusionRoutes(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            this->shim().Ipv4ExclusionRoutes(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv6ExclusionRoutes(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            this->shim().Ipv6ExclusionRoutes(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv4ExclusionRoutes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ipv4ExclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv6ExclusionRoutes(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ipv6ExclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExcludeLocalSubnets(bool value) noexcept override
    {
        try
        {
            this->shim().ExcludeLocalSubnets(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExcludeLocalSubnets(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExcludeLocalSubnets());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRouteFactory> : produce_base<D, Windows::Networking::Vpn::IVpnRouteFactory>
{
    HRESULT __stdcall abi_CreateVpnRoute(abi_arg_in<Windows::Networking::IHostName> address, uint8_t prefixSize, abi_arg_out<Windows::Networking::Vpn::IVpnRoute> route) noexcept override
    {
        try
        {
            *route = detach(this->shim().CreateVpnRoute(*reinterpret_cast<const Windows::Networking::HostName *>(&address), prefixSize));
            return S_OK;
        }
        catch (...)
        {
            *route = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnSystemHealth> : produce_base<D, Windows::Networking::Vpn::IVpnSystemHealth>
{
    HRESULT __stdcall get_StatementOfHealth(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StatementOfHealth());
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
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilter> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilter>
{
    HRESULT __stdcall get_AppId(abi_arg_out<Windows::Networking::Vpn::IVpnAppId> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppId(abi_arg_in<Windows::Networking::Vpn::IVpnAppId> value) noexcept override
    {
        try
        {
            this->shim().AppId(*reinterpret_cast<const Windows::Networking::Vpn::VpnAppId *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppClaims(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppClaims());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(Windows::Networking::Vpn::VpnIPProtocol * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Protocol(Windows::Networking::Vpn::VpnIPProtocol value) noexcept override
    {
        try
        {
            this->shim().Protocol(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPortRanges(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalPortRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePortRanges(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemotePortRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddressRanges(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalAddressRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddressRanges(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteAddressRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoutingPolicyType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) noexcept override
    {
        try
        {
            this->shim().RoutingPolicyType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment>
{
    HRESULT __stdcall get_TrafficFilterList(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrafficFilterList());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOutbound(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowOutbound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowOutbound(bool value) noexcept override
    {
        try
        {
            this->shim().AllowOutbound(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInbound(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowInbound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowInbound(bool value) noexcept override
    {
        try
        {
            this->shim().AllowInbound(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Networking::Vpn::IVpnAppId> appId, abi_arg_out<Windows::Networking::Vpn::IVpnTrafficFilter> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Networking::Vpn::VpnAppId *>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking::Vpn {

template <typename D> void impl_IVpnPlugIn<D>::Connect(const Windows::Networking::Vpn::VpnChannel & channel) const
{
    check_hresult(static_cast<const IVpnPlugIn &>(static_cast<const D &>(*this))->abi_Connect(get(channel)));
}

template <typename D> void impl_IVpnPlugIn<D>::Disconnect(const Windows::Networking::Vpn::VpnChannel & channel) const
{
    check_hresult(static_cast<const IVpnPlugIn &>(static_cast<const D &>(*this))->abi_Disconnect(get(channel)));
}

template <typename D> void impl_IVpnPlugIn<D>::GetKeepAlivePayload(const Windows::Networking::Vpn::VpnChannel & channel, Windows::Networking::Vpn::VpnPacketBuffer & keepAlivePacket) const
{
    check_hresult(static_cast<const IVpnPlugIn &>(static_cast<const D &>(*this))->abi_GetKeepAlivePayload(get(channel), put(keepAlivePacket)));
}

template <typename D> void impl_IVpnPlugIn<D>::Encapsulate(const Windows::Networking::Vpn::VpnChannel & channel, const Windows::Networking::Vpn::VpnPacketBufferList & packets, const Windows::Networking::Vpn::VpnPacketBufferList & encapulatedPackets) const
{
    check_hresult(static_cast<const IVpnPlugIn &>(static_cast<const D &>(*this))->abi_Encapsulate(get(channel), get(packets), get(encapulatedPackets)));
}

template <typename D> void impl_IVpnPlugIn<D>::Decapsulate(const Windows::Networking::Vpn::VpnChannel & channel, const Windows::Networking::Vpn::VpnPacketBuffer & encapBuffer, const Windows::Networking::Vpn::VpnPacketBufferList & decapsulatedPackets, const Windows::Networking::Vpn::VpnPacketBufferList & controlPacketsToSend) const
{
    check_hresult(static_cast<const IVpnPlugIn &>(static_cast<const D &>(*this))->abi_Decapsulate(get(channel), get(encapBuffer), get(decapsulatedPackets), get(controlPacketsToSend)));
}

template <typename D> void impl_IVpnCustomPrompt<D>::Label(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->put_Label(get(value)));
}

template <typename D> hstring impl_IVpnCustomPrompt<D>::Label() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->get_Label(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomPrompt<D>::Compulsory(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->put_Compulsory(value));
}

template <typename D> bool impl_IVpnCustomPrompt<D>::Compulsory() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->get_Compulsory(&value));
    return value;
}

template <typename D> void impl_IVpnCustomPrompt<D>::Bordered(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->put_Bordered(value));
}

template <typename D> bool impl_IVpnCustomPrompt<D>::Bordered() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPrompt &>(static_cast<const D &>(*this))->get_Bordered(&value));
    return value;
}

template <typename D> void impl_IVpnCustomEditBox<D>::DefaultText(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomEditBox &>(static_cast<const D &>(*this))->put_DefaultText(get(value)));
}

template <typename D> hstring impl_IVpnCustomEditBox<D>::DefaultText() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomEditBox &>(static_cast<const D &>(*this))->get_DefaultText(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomEditBox<D>::NoEcho(bool value) const
{
    check_hresult(static_cast<const IVpnCustomEditBox &>(static_cast<const D &>(*this))->put_NoEcho(value));
}

template <typename D> bool impl_IVpnCustomEditBox<D>::NoEcho() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomEditBox &>(static_cast<const D &>(*this))->get_NoEcho(&value));
    return value;
}

template <typename D> hstring impl_IVpnCustomEditBox<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomEditBox &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomComboBox<D>::OptionsText(const Windows::Foundation::Collections::IVectorView<hstring> & value) const
{
    check_hresult(static_cast<const IVpnCustomComboBox &>(static_cast<const D &>(*this))->put_OptionsText(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IVpnCustomComboBox<D>::OptionsText() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IVpnCustomComboBox &>(static_cast<const D &>(*this))->get_OptionsText(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVpnCustomComboBox<D>::Selected() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVpnCustomComboBox &>(static_cast<const D &>(*this))->get_Selected(&value));
    return value;
}

template <typename D> void impl_IVpnCustomTextBox<D>::DisplayText(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomTextBox &>(static_cast<const D &>(*this))->put_DisplayText(get(value)));
}

template <typename D> hstring impl_IVpnCustomTextBox<D>::DisplayText() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomTextBox &>(static_cast<const D &>(*this))->get_DisplayText(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomCheckBox<D>::InitialCheckState(bool value) const
{
    check_hresult(static_cast<const IVpnCustomCheckBox &>(static_cast<const D &>(*this))->put_InitialCheckState(value));
}

template <typename D> bool impl_IVpnCustomCheckBox<D>::InitialCheckState() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomCheckBox &>(static_cast<const D &>(*this))->get_InitialCheckState(&value));
    return value;
}

template <typename D> bool impl_IVpnCustomCheckBox<D>::Checked() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomCheckBox &>(static_cast<const D &>(*this))->get_Checked(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoute impl_IVpnRouteFactory<D>::CreateVpnRoute(const Windows::Networking::HostName & address, uint8_t prefixSize) const
{
    Windows::Networking::Vpn::VpnRoute route { nullptr };
    check_hresult(static_cast<const IVpnRouteFactory &>(static_cast<const D &>(*this))->abi_CreateVpnRoute(get(address), prefixSize, put(route)));
    return route;
}

template <typename D> void impl_IVpnRoute<D>::Address(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IVpnRoute &>(static_cast<const D &>(*this))->put_Address(get(value)));
}

template <typename D> Windows::Networking::HostName impl_IVpnRoute<D>::Address() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IVpnRoute &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> void impl_IVpnRoute<D>::PrefixSize(uint8_t value) const
{
    check_hresult(static_cast<const IVpnRoute &>(static_cast<const D &>(*this))->put_PrefixSize(value));
}

template <typename D> uint8_t impl_IVpnRoute<D>::PrefixSize() const
{
    uint8_t value {};
    check_hresult(static_cast<const IVpnRoute &>(static_cast<const D &>(*this))->get_PrefixSize(&value));
    return value;
}

template <typename D> void impl_IVpnRouteAssignment<D>::Ipv4InclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const
{
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->put_Ipv4InclusionRoutes(get(value)));
}

template <typename D> void impl_IVpnRouteAssignment<D>::Ipv6InclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const
{
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->put_Ipv6InclusionRoutes(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> impl_IVpnRouteAssignment<D>::Ipv4InclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value;
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->get_Ipv4InclusionRoutes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> impl_IVpnRouteAssignment<D>::Ipv6InclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value;
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->get_Ipv6InclusionRoutes(put(value)));
    return value;
}

template <typename D> void impl_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const
{
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->put_Ipv4ExclusionRoutes(get(value)));
}

template <typename D> void impl_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const
{
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->put_Ipv6ExclusionRoutes(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> impl_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value;
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->get_Ipv4ExclusionRoutes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> impl_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value;
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->get_Ipv6ExclusionRoutes(put(value)));
    return value;
}

template <typename D> void impl_IVpnRouteAssignment<D>::ExcludeLocalSubnets(bool value) const
{
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->put_ExcludeLocalSubnets(value));
}

template <typename D> bool impl_IVpnRouteAssignment<D>::ExcludeLocalSubnets() const
{
    bool value {};
    check_hresult(static_cast<const IVpnRouteAssignment &>(static_cast<const D &>(*this))->get_ExcludeLocalSubnets(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnNamespaceInfo impl_IVpnNamespaceInfoFactory<D>::CreateVpnNamespaceInfo(hstring_ref name, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & proxyServerList) const
{
    Windows::Networking::Vpn::VpnNamespaceInfo namespaceInfo { nullptr };
    check_hresult(static_cast<const IVpnNamespaceInfoFactory &>(static_cast<const D &>(*this))->abi_CreateVpnNamespaceInfo(get(name), get(dnsServerList), get(proxyServerList), put(namespaceInfo)));
    return namespaceInfo;
}

template <typename D> void impl_IVpnNamespaceInfo<D>::Namespace(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->put_Namespace(get(value)));
}

template <typename D> hstring impl_IVpnNamespaceInfo<D>::Namespace() const
{
    hstring value;
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->get_Namespace(put(value)));
    return value;
}

template <typename D> void impl_IVpnNamespaceInfo<D>::DnsServers(const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & value) const
{
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->put_DnsServers(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> impl_IVpnNamespaceInfo<D>::DnsServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value;
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->get_DnsServers(put(value)));
    return value;
}

template <typename D> void impl_IVpnNamespaceInfo<D>::WebProxyServers(const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & value) const
{
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->put_WebProxyServers(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> impl_IVpnNamespaceInfo<D>::WebProxyServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value;
    check_hresult(static_cast<const IVpnNamespaceInfo &>(static_cast<const D &>(*this))->get_WebProxyServers(put(value)));
    return value;
}

template <typename D> void impl_IVpnNamespaceAssignment<D>::NamespaceList(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> & value) const
{
    check_hresult(static_cast<const IVpnNamespaceAssignment &>(static_cast<const D &>(*this))->put_NamespaceList(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> impl_IVpnNamespaceAssignment<D>::NamespaceList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> value;
    check_hresult(static_cast<const IVpnNamespaceAssignment &>(static_cast<const D &>(*this))->get_NamespaceList(put(value)));
    return value;
}

template <typename D> void impl_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IVpnNamespaceAssignment &>(static_cast<const D &>(*this))->put_ProxyAutoConfigUri(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IVpnNamespaceAssignment &>(static_cast<const D &>(*this))->get_ProxyAutoConfigUri(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnInterfaceId impl_IVpnInterfaceIdFactory<D>::CreateVpnInterfaceId(array_ref<const uint8_t> address) const
{
    Windows::Networking::Vpn::VpnInterfaceId vpnInterfaceId { nullptr };
    check_hresult(static_cast<const IVpnInterfaceIdFactory &>(static_cast<const D &>(*this))->abi_CreateVpnInterfaceId(address.size(), get(address), put(vpnInterfaceId)));
    return vpnInterfaceId;
}

template <typename D> void impl_IVpnInterfaceId<D>::GetAddressInfo(com_array<uint8_t> & id) const
{
    check_hresult(static_cast<const IVpnInterfaceId &>(static_cast<const D &>(*this))->abi_GetAddressInfo(put_size(id), put(id)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IVpnPickedCredential<D>::PasskeyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IVpnPickedCredential &>(static_cast<const D &>(*this))->get_PasskeyCredential(put(value)));
    return value;
}

template <typename D> hstring impl_IVpnPickedCredential<D>::AdditionalPin() const
{
    hstring value;
    check_hresult(static_cast<const IVpnPickedCredential &>(static_cast<const D &>(*this))->get_AdditionalPin(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IVpnPickedCredential<D>::OldPasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IVpnPickedCredential &>(static_cast<const D &>(*this))->get_OldPasswordCredential(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IVpnCredential<D>::PasskeyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IVpnCredential &>(static_cast<const D &>(*this))->get_PasskeyCredential(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IVpnCredential<D>::CertificateCredential() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IVpnCredential &>(static_cast<const D &>(*this))->get_CertificateCredential(put(value)));
    return value;
}

template <typename D> hstring impl_IVpnCredential<D>::AdditionalPin() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCredential &>(static_cast<const D &>(*this))->get_AdditionalPin(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IVpnCredential<D>::OldPasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IVpnCredential &>(static_cast<const D &>(*this))->get_OldPasswordCredential(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::Buffer impl_IVpnSystemHealth<D>::StatementOfHealth() const
{
    Windows::Storage::Streams::Buffer value { nullptr };
    check_hresult(static_cast<const IVpnSystemHealth &>(static_cast<const D &>(*this))->get_StatementOfHealth(put(value)));
    return value;
}

template <typename D> hstring impl_IVpnChannelConfiguration<D>::ServerServiceName() const
{
    hstring value;
    check_hresult(static_cast<const IVpnChannelConfiguration &>(static_cast<const D &>(*this))->get_ServerServiceName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> impl_IVpnChannelConfiguration<D>::ServerHostNameList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value;
    check_hresult(static_cast<const IVpnChannelConfiguration &>(static_cast<const D &>(*this))->get_ServerHostNameList(put(value)));
    return value;
}

template <typename D> hstring impl_IVpnChannelConfiguration<D>::CustomField() const
{
    hstring value;
    check_hresult(static_cast<const IVpnChannelConfiguration &>(static_cast<const D &>(*this))->get_CustomField(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> impl_IVpnChannelConfiguration2<D>::ServerUris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value;
    check_hresult(static_cast<const IVpnChannelConfiguration2 &>(static_cast<const D &>(*this))->get_ServerUris(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnChannelActivityEventType impl_IVpnChannelActivityEventArgs<D>::Type() const
{
    Windows::Networking::Vpn::VpnChannelActivityEventType value {};
    check_hresult(static_cast<const IVpnChannelActivityEventArgs &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> void impl_IVpnChannel<D>::AssociateTransport(const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_AssociateTransport(get(mainOuterTunnelTransport), get(optionalOuterTunnelTransport)));
}

template <typename D> void impl_IVpnChannel<D>::Start(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & routeScope, const Windows::Networking::Vpn::VpnNamespaceAssignment & namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_Start(get(assignedClientIPv4list), get(assignedClientIPv6list), get(vpnInterfaceId), get(routeScope), get(namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, get(mainOuterTunnelTransport), get(optionalOuterTunnelTransport)));
}

template <typename D> void impl_IVpnChannel<D>::Stop() const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> Windows::Networking::Vpn::VpnPickedCredential impl_IVpnChannel<D>::RequestCredentials(Windows::Networking::Vpn::VpnCredentialType credType, bool isRetry, bool isSingleSignOnCredential, const Windows::Security::Cryptography::Certificates::Certificate & certificate) const
{
    Windows::Networking::Vpn::VpnPickedCredential credential { nullptr };
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_RequestCredentials(credType, isRetry, isSingleSignOnCredential, get(certificate), put(credential)));
    return credential;
}

template <typename D> void impl_IVpnChannel<D>::RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType type, Windows::Networking::Vpn::VpnPacketBuffer & vpnPacketBuffer) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_RequestVpnPacketBuffer(type, put(vpnPacketBuffer)));
}

template <typename D> void impl_IVpnChannel<D>::LogDiagnosticMessage(hstring_ref message) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_LogDiagnosticMessage(get(message)));
}

template <typename D> uint32_t impl_IVpnChannel<D>::Id() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnChannelConfiguration impl_IVpnChannel<D>::Configuration() const
{
    Windows::Networking::Vpn::VpnChannelConfiguration value { nullptr };
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->get_Configuration(put(value)));
    return value;
}

template <typename D> event_token impl_IVpnChannel<D>::ActivityChange(const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->add_ActivityChange(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IVpnChannel> impl_IVpnChannel<D>::ActivityChange(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IVpnChannel>(this, &ABI::Windows::Networking::Vpn::IVpnChannel::remove_ActivityChange, ActivityChange(handler));
}

template <typename D> void impl_IVpnChannel<D>::ActivityChange(event_token token) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->remove_ActivityChange(token));
}

template <typename D> void impl_IVpnChannel<D>::PlugInContext(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->put_PlugInContext(get(value)));
}

template <typename D> Windows::IInspectable impl_IVpnChannel<D>::PlugInContext() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->get_PlugInContext(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnSystemHealth impl_IVpnChannel<D>::SystemHealth() const
{
    Windows::Networking::Vpn::VpnSystemHealth value { nullptr };
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->get_SystemHealth(put(value)));
    return value;
}

template <typename D> void impl_IVpnChannel<D>::RequestCustomPrompt(const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> & customPrompt) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_RequestCustomPrompt(get(customPrompt)));
}

template <typename D> void impl_IVpnChannel<D>::SetErrorMessage(hstring_ref message) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_SetErrorMessage(get(message)));
}

template <typename D> void impl_IVpnChannel<D>::SetAllowedSslTlsVersions(const Windows::IInspectable & tunnelTransport, bool useTls12) const
{
    check_hresult(static_cast<const IVpnChannel &>(static_cast<const D &>(*this))->abi_SetAllowedSslTlsVersions(get(tunnelTransport), useTls12));
}

template <typename D> void impl_IVpnChannel2<D>::StartWithMainTransport(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, const Windows::IInspectable & mainOuterTunnelTransport) const
{
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_StartWithMainTransport(get(assignedClientIPv4list), get(assignedClientIPv6list), get(vpnInterfaceId), get(assignedRoutes), get(assignedDomainName), mtuSize, maxFrameSize, Reserved, get(mainOuterTunnelTransport)));
}

template <typename D> void impl_IVpnChannel2<D>::StartExistingTransports(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const
{
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_StartExistingTransports(get(assignedClientIPv4list), get(assignedClientIPv6list), get(vpnInterfaceId), get(assignedRoutes), get(assignedDomainName), mtuSize, maxFrameSize, Reserved));
}

template <typename D> event_token impl_IVpnChannel2<D>::ActivityStateChange(const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->add_ActivityStateChange(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IVpnChannel2> impl_IVpnChannel2<D>::ActivityStateChange(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> & handler) const
{
    return impl::make_event_revoker<D, IVpnChannel2>(this, &ABI::Windows::Networking::Vpn::IVpnChannel2::remove_ActivityStateChange, ActivityStateChange(handler));
}

template <typename D> void impl_IVpnChannel2<D>::ActivityStateChange(event_token token) const
{
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->remove_ActivityStateChange(token));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnChannel2<D>::GetVpnSendPacketBuffer() const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnSendPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_GetVpnSendPacketBuffer(put(vpnSendPacketBuffer)));
    return vpnSendPacketBuffer;
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnChannel2<D>::GetVpnReceivePacketBuffer() const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnReceivePacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_GetVpnReceivePacketBuffer(put(vpnReceivePacketBuffer)));
    return vpnReceivePacketBuffer;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IVpnChannel2<D>::RequestCustomPromptAsync(const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> & customPromptElement) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_RequestCustomPromptAsync(get(customPromptElement), put(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> impl_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, const Windows::Security::Cryptography::Certificates::Certificate & certificate) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential;
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_RequestCredentialsWithCertificateAsync(credType, credOptions, get(certificate), put(credential)));
    return credential;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> impl_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential;
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_RequestCredentialsWithOptionsAsync(credType, credOptions, put(credential)));
    return credential;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> impl_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential;
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_RequestCredentialsSimpleAsync(credType, put(credential)));
    return credential;
}

template <typename D> void impl_IVpnChannel2<D>::TerminateConnection(hstring_ref message) const
{
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_TerminateConnection(get(message)));
}

template <typename D> void impl_IVpnChannel2<D>::StartWithTrafficFilter(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIpv4List, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIpv6List, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport, const Windows::Networking::Vpn::VpnTrafficFilterAssignment & assignedTrafficFilters) const
{
    check_hresult(static_cast<const IVpnChannel2 &>(static_cast<const D &>(*this))->abi_StartWithTrafficFilter(get(assignedClientIpv4List), get(assignedClientIpv6List), get(vpnInterfaceId), get(assignedRoutes), get(assignedNamespace), mtuSize, maxFrameSize, reserved, get(mainOuterTunnelTransport), get(optionalOuterTunnelTransport), get(assignedTrafficFilters)));
}

template <typename D> void impl_IVpnCustomPromptElement<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IVpnCustomPromptElement<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomPromptElement<D>::Compulsory(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->put_Compulsory(value));
}

template <typename D> bool impl_IVpnCustomPromptElement<D>::Compulsory() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->get_Compulsory(&value));
    return value;
}

template <typename D> void impl_IVpnCustomPromptElement<D>::Emphasized(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->put_Emphasized(value));
}

template <typename D> bool impl_IVpnCustomPromptElement<D>::Emphasized() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPromptElement &>(static_cast<const D &>(*this))->get_Emphasized(&value));
    return value;
}

template <typename D> void impl_IVpnChannelStatics<D>::ProcessEventAsync(const Windows::IInspectable & thirdPartyPlugIn, const Windows::IInspectable & event) const
{
    check_hresult(static_cast<const IVpnChannelStatics &>(static_cast<const D &>(*this))->abi_ProcessEventAsync(get(thirdPartyPlugIn), get(event)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnPacketBufferFactory<D>::CreateVpnPacketBuffer(const Windows::Networking::Vpn::VpnPacketBuffer & parentBuffer, uint32_t offset, uint32_t length) const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnPacketBufferFactory &>(static_cast<const D &>(*this))->abi_CreateVpnPacketBuffer(get(parentBuffer), offset, length, put(vpnPacketBuffer)));
    return vpnPacketBuffer;
}

template <typename D> Windows::Storage::Streams::Buffer impl_IVpnPacketBuffer<D>::Buffer() const
{
    Windows::Storage::Streams::Buffer value { nullptr };
    check_hresult(static_cast<const IVpnPacketBuffer &>(static_cast<const D &>(*this))->get_Buffer(put(value)));
    return value;
}

template <typename D> void impl_IVpnPacketBuffer<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) const
{
    check_hresult(static_cast<const IVpnPacketBuffer &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBufferStatus impl_IVpnPacketBuffer<D>::Status() const
{
    Windows::Networking::Vpn::VpnPacketBufferStatus value {};
    check_hresult(static_cast<const IVpnPacketBuffer &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IVpnPacketBuffer<D>::TransportAffinity(uint32_t value) const
{
    check_hresult(static_cast<const IVpnPacketBuffer &>(static_cast<const D &>(*this))->put_TransportAffinity(value));
}

template <typename D> uint32_t impl_IVpnPacketBuffer<D>::TransportAffinity() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVpnPacketBuffer &>(static_cast<const D &>(*this))->get_TransportAffinity(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnAppId impl_IVpnPacketBuffer2<D>::AppId() const
{
    Windows::Networking::Vpn::VpnAppId value { nullptr };
    check_hresult(static_cast<const IVpnPacketBuffer2 &>(static_cast<const D &>(*this))->get_AppId(put(value)));
    return value;
}

template <typename D> void impl_IVpnPacketBufferList<D>::Append(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const
{
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->abi_Append(get(nextVpnPacketBuffer)));
}

template <typename D> void impl_IVpnPacketBufferList<D>::AddAtBegin(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const
{
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->abi_AddAtBegin(get(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnPacketBufferList<D>::RemoveAtEnd() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->abi_RemoveAtEnd(put(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnPacketBufferList<D>::RemoveAtBegin() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->abi_RemoveAtBegin(put(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> void impl_IVpnPacketBufferList<D>::Clear() const
{
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_IVpnPacketBufferList<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) const
{
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBufferStatus impl_IVpnPacketBufferList<D>::Status() const
{
    Windows::Networking::Vpn::VpnPacketBufferStatus value {};
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> uint32_t impl_IVpnPacketBufferList<D>::Size() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVpnPacketBufferList &>(static_cast<const D &>(*this))->get_Size(&value));
    return value;
}

template <typename D> void impl_IVpnPacketBufferList2<D>::AddLeadingPacket(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const
{
    check_hresult(static_cast<const IVpnPacketBufferList2 &>(static_cast<const D &>(*this))->abi_AddLeadingPacket(get(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnPacketBufferList2<D>::RemoveLeadingPacket() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnPacketBufferList2 &>(static_cast<const D &>(*this))->abi_RemoveLeadingPacket(put(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> void impl_IVpnPacketBufferList2<D>::AddTrailingPacket(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const
{
    check_hresult(static_cast<const IVpnPacketBufferList2 &>(static_cast<const D &>(*this))->abi_AddTrailingPacket(get(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer impl_IVpnPacketBufferList2<D>::RemoveTrailingPacket() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer { nullptr };
    check_hresult(static_cast<const IVpnPacketBufferList2 &>(static_cast<const D &>(*this))->abi_RemoveTrailingPacket(put(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> void impl_IVpnCustomPromptTextInput<D>::PlaceholderText(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomPromptTextInput &>(static_cast<const D &>(*this))->put_PlaceholderText(get(value)));
}

template <typename D> hstring impl_IVpnCustomPromptTextInput<D>::PlaceholderText() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomPromptTextInput &>(static_cast<const D &>(*this))->get_PlaceholderText(put(value)));
    return value;
}

template <typename D> void impl_IVpnCustomPromptTextInput<D>::IsTextHidden(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPromptTextInput &>(static_cast<const D &>(*this))->put_IsTextHidden(value));
}

template <typename D> bool impl_IVpnCustomPromptTextInput<D>::IsTextHidden() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPromptTextInput &>(static_cast<const D &>(*this))->get_IsTextHidden(&value));
    return value;
}

template <typename D> hstring impl_IVpnCustomPromptTextInput<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomPromptTextInput &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnCustomPromptOptionSelector<D>::Options() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnCustomPromptOptionSelector &>(static_cast<const D &>(*this))->get_Options(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVpnCustomPromptOptionSelector<D>::SelectedIndex() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVpnCustomPromptOptionSelector &>(static_cast<const D &>(*this))->get_SelectedIndex(&value));
    return value;
}

template <typename D> void impl_IVpnCustomPromptBooleanInput<D>::InitialValue(bool value) const
{
    check_hresult(static_cast<const IVpnCustomPromptBooleanInput &>(static_cast<const D &>(*this))->put_InitialValue(value));
}

template <typename D> bool impl_IVpnCustomPromptBooleanInput<D>::InitialValue() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPromptBooleanInput &>(static_cast<const D &>(*this))->get_InitialValue(&value));
    return value;
}

template <typename D> bool impl_IVpnCustomPromptBooleanInput<D>::Value() const
{
    bool value {};
    check_hresult(static_cast<const IVpnCustomPromptBooleanInput &>(static_cast<const D &>(*this))->get_Value(&value));
    return value;
}

template <typename D> void impl_IVpnCustomPromptText<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnCustomPromptText &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> hstring impl_IVpnCustomPromptText<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IVpnCustomPromptText &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnChannelActivityEventType impl_IVpnChannelActivityStateChangedArgs<D>::ActivityState() const
{
    Windows::Networking::Vpn::VpnChannelActivityEventType value {};
    check_hresult(static_cast<const IVpnChannelActivityStateChangedArgs &>(static_cast<const D &>(*this))->get_ActivityState(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnDomainNameInfo impl_IVpnDomainNameInfoFactory<D>::CreateVpnDomainNameInfo(hstring_ref name, Windows::Networking::Vpn::VpnDomainNameType nameType, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & proxyServerList) const
{
    Windows::Networking::Vpn::VpnDomainNameInfo domainNameInfo { nullptr };
    check_hresult(static_cast<const IVpnDomainNameInfoFactory &>(static_cast<const D &>(*this))->abi_CreateVpnDomainNameInfo(get(name), nameType, get(dnsServerList), get(proxyServerList), put(domainNameInfo)));
    return domainNameInfo;
}

template <typename D> void impl_IVpnDomainNameInfo<D>::DomainName(const Windows::Networking::HostName & value) const
{
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->put_DomainName(get(value)));
}

template <typename D> Windows::Networking::HostName impl_IVpnDomainNameInfo<D>::DomainName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->get_DomainName(put(value)));
    return value;
}

template <typename D> void impl_IVpnDomainNameInfo<D>::DomainNameType(Windows::Networking::Vpn::VpnDomainNameType value) const
{
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->put_DomainNameType(value));
}

template <typename D> Windows::Networking::Vpn::VpnDomainNameType impl_IVpnDomainNameInfo<D>::DomainNameType() const
{
    Windows::Networking::Vpn::VpnDomainNameType value {};
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->get_DomainNameType(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> impl_IVpnDomainNameInfo<D>::DnsServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value;
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->get_DnsServers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> impl_IVpnDomainNameInfo<D>::WebProxyServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value;
    check_hresult(static_cast<const IVpnDomainNameInfo &>(static_cast<const D &>(*this))->get_WebProxyServers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> impl_IVpnDomainNameInfo2<D>::WebProxyUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value;
    check_hresult(static_cast<const IVpnDomainNameInfo2 &>(static_cast<const D &>(*this))->get_WebProxyUris(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> impl_IVpnDomainNameAssignment<D>::DomainNameList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> value;
    check_hresult(static_cast<const IVpnDomainNameAssignment &>(static_cast<const D &>(*this))->get_DomainNameList(put(value)));
    return value;
}

template <typename D> void impl_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IVpnDomainNameAssignment &>(static_cast<const D &>(*this))->put_ProxyAutoConfigurationUri(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IVpnDomainNameAssignment &>(static_cast<const D &>(*this))->get_ProxyAutoConfigurationUri(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnAppId impl_IVpnAppIdFactory<D>::Create(Windows::Networking::Vpn::VpnAppIdType type, hstring_ref value) const
{
    Windows::Networking::Vpn::VpnAppId result { nullptr };
    check_hresult(static_cast<const IVpnAppIdFactory &>(static_cast<const D &>(*this))->abi_Create(type, get(value), put(result)));
    return result;
}

template <typename D> Windows::Networking::Vpn::VpnAppIdType impl_IVpnAppId<D>::Type() const
{
    Windows::Networking::Vpn::VpnAppIdType value {};
    check_hresult(static_cast<const IVpnAppId &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> void impl_IVpnAppId<D>::Type(Windows::Networking::Vpn::VpnAppIdType value) const
{
    check_hresult(static_cast<const IVpnAppId &>(static_cast<const D &>(*this))->put_Type(value));
}

template <typename D> hstring impl_IVpnAppId<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IVpnAppId &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IVpnAppId<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnAppId &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Networking::Vpn::VpnTrafficFilter impl_IVpnTrafficFilterFactory<D>::Create(const Windows::Networking::Vpn::VpnAppId & appId) const
{
    Windows::Networking::Vpn::VpnTrafficFilter result { nullptr };
    check_hresult(static_cast<const IVpnTrafficFilterFactory &>(static_cast<const D &>(*this))->abi_Create(get(appId), put(result)));
    return result;
}

template <typename D> Windows::Networking::Vpn::VpnAppId impl_IVpnTrafficFilter<D>::AppId() const
{
    Windows::Networking::Vpn::VpnAppId value { nullptr };
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_AppId(put(value)));
    return value;
}

template <typename D> void impl_IVpnTrafficFilter<D>::AppId(const Windows::Networking::Vpn::VpnAppId & value) const
{
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->put_AppId(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnTrafficFilter<D>::AppClaims() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_AppClaims(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnIPProtocol impl_IVpnTrafficFilter<D>::Protocol() const
{
    Windows::Networking::Vpn::VpnIPProtocol value {};
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_Protocol(&value));
    return value;
}

template <typename D> void impl_IVpnTrafficFilter<D>::Protocol(Windows::Networking::Vpn::VpnIPProtocol value) const
{
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->put_Protocol(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnTrafficFilter<D>::LocalPortRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_LocalPortRanges(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnTrafficFilter<D>::RemotePortRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_RemotePortRanges(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnTrafficFilter<D>::LocalAddressRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_LocalAddressRanges(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnTrafficFilter<D>::RemoteAddressRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_RemoteAddressRanges(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoutingPolicyType impl_IVpnTrafficFilter<D>::RoutingPolicyType() const
{
    Windows::Networking::Vpn::VpnRoutingPolicyType value {};
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->get_RoutingPolicyType(&value));
    return value;
}

template <typename D> void impl_IVpnTrafficFilter<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) const
{
    check_hresult(static_cast<const IVpnTrafficFilter &>(static_cast<const D &>(*this))->put_RoutingPolicyType(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> impl_IVpnTrafficFilterAssignment<D>::TrafficFilterList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> value;
    check_hresult(static_cast<const IVpnTrafficFilterAssignment &>(static_cast<const D &>(*this))->get_TrafficFilterList(put(value)));
    return value;
}

template <typename D> bool impl_IVpnTrafficFilterAssignment<D>::AllowOutbound() const
{
    bool value {};
    check_hresult(static_cast<const IVpnTrafficFilterAssignment &>(static_cast<const D &>(*this))->get_AllowOutbound(&value));
    return value;
}

template <typename D> void impl_IVpnTrafficFilterAssignment<D>::AllowOutbound(bool value) const
{
    check_hresult(static_cast<const IVpnTrafficFilterAssignment &>(static_cast<const D &>(*this))->put_AllowOutbound(value));
}

template <typename D> bool impl_IVpnTrafficFilterAssignment<D>::AllowInbound() const
{
    bool value {};
    check_hresult(static_cast<const IVpnTrafficFilterAssignment &>(static_cast<const D &>(*this))->get_AllowInbound(&value));
    return value;
}

template <typename D> void impl_IVpnTrafficFilterAssignment<D>::AllowInbound(bool value) const
{
    check_hresult(static_cast<const IVpnTrafficFilterAssignment &>(static_cast<const D &>(*this))->put_AllowInbound(value));
}

template <typename D> hstring impl_IVpnProfile<D>::ProfileName() const
{
    hstring value;
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_ProfileName(put(value)));
    return value;
}

template <typename D> void impl_IVpnProfile<D>::ProfileName(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->put_ProfileName(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> impl_IVpnProfile<D>::AppTriggers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> value;
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_AppTriggers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> impl_IVpnProfile<D>::Routes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value;
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_Routes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> impl_IVpnProfile<D>::DomainNameInfoList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> value;
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_DomainNameInfoList(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> impl_IVpnProfile<D>::TrafficFilters() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> value;
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_TrafficFilters(put(value)));
    return value;
}

template <typename D> bool impl_IVpnProfile<D>::RememberCredentials() const
{
    bool value {};
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_RememberCredentials(&value));
    return value;
}

template <typename D> void impl_IVpnProfile<D>::RememberCredentials(bool value) const
{
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->put_RememberCredentials(value));
}

template <typename D> bool impl_IVpnProfile<D>::AlwaysOn() const
{
    bool value {};
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->get_AlwaysOn(&value));
    return value;
}

template <typename D> void impl_IVpnProfile<D>::AlwaysOn(bool value) const
{
    check_hresult(static_cast<const IVpnProfile &>(static_cast<const D &>(*this))->put_AlwaysOn(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> impl_IVpnPlugInProfile<D>::ServerUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value;
    check_hresult(static_cast<const IVpnPlugInProfile &>(static_cast<const D &>(*this))->get_ServerUris(put(value)));
    return value;
}

template <typename D> hstring impl_IVpnPlugInProfile<D>::CustomConfiguration() const
{
    hstring value;
    check_hresult(static_cast<const IVpnPlugInProfile &>(static_cast<const D &>(*this))->get_CustomConfiguration(put(value)));
    return value;
}

template <typename D> void impl_IVpnPlugInProfile<D>::CustomConfiguration(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnPlugInProfile &>(static_cast<const D &>(*this))->put_CustomConfiguration(get(value)));
}

template <typename D> hstring impl_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IVpnPlugInProfile &>(static_cast<const D &>(*this))->get_VpnPluginPackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnPlugInProfile &>(static_cast<const D &>(*this))->put_VpnPluginPackageFamilyName(get(value)));
}

template <typename D> bool impl_IVpnPlugInProfile2<D>::RequireVpnClientAppUI() const
{
    bool value {};
    check_hresult(static_cast<const IVpnPlugInProfile2 &>(static_cast<const D &>(*this))->get_RequireVpnClientAppUI(&value));
    return value;
}

template <typename D> void impl_IVpnPlugInProfile2<D>::RequireVpnClientAppUI(bool value) const
{
    check_hresult(static_cast<const IVpnPlugInProfile2 &>(static_cast<const D &>(*this))->put_RequireVpnClientAppUI(value));
}

template <typename D> Windows::Networking::Vpn::VpnManagementConnectionStatus impl_IVpnPlugInProfile2<D>::ConnectionStatus() const
{
    Windows::Networking::Vpn::VpnManagementConnectionStatus value {};
    check_hresult(static_cast<const IVpnPlugInProfile2 &>(static_cast<const D &>(*this))->get_ConnectionStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVpnNativeProfile<D>::Servers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_Servers(put(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoutingPolicyType impl_IVpnNativeProfile<D>::RoutingPolicyType() const
{
    Windows::Networking::Vpn::VpnRoutingPolicyType value {};
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_RoutingPolicyType(&value));
    return value;
}

template <typename D> void impl_IVpnNativeProfile<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) const
{
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->put_RoutingPolicyType(value));
}

template <typename D> Windows::Networking::Vpn::VpnNativeProtocolType impl_IVpnNativeProfile<D>::NativeProtocolType() const
{
    Windows::Networking::Vpn::VpnNativeProtocolType value {};
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_NativeProtocolType(&value));
    return value;
}

template <typename D> void impl_IVpnNativeProfile<D>::NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType value) const
{
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->put_NativeProtocolType(value));
}

template <typename D> Windows::Networking::Vpn::VpnAuthenticationMethod impl_IVpnNativeProfile<D>::UserAuthenticationMethod() const
{
    Windows::Networking::Vpn::VpnAuthenticationMethod value {};
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_UserAuthenticationMethod(&value));
    return value;
}

template <typename D> void impl_IVpnNativeProfile<D>::UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) const
{
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->put_UserAuthenticationMethod(value));
}

template <typename D> Windows::Networking::Vpn::VpnAuthenticationMethod impl_IVpnNativeProfile<D>::TunnelAuthenticationMethod() const
{
    Windows::Networking::Vpn::VpnAuthenticationMethod value {};
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_TunnelAuthenticationMethod(&value));
    return value;
}

template <typename D> void impl_IVpnNativeProfile<D>::TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) const
{
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->put_TunnelAuthenticationMethod(value));
}

template <typename D> hstring impl_IVpnNativeProfile<D>::EapConfiguration() const
{
    hstring Value;
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->get_EapConfiguration(put(Value)));
    return Value;
}

template <typename D> void impl_IVpnNativeProfile<D>::EapConfiguration(hstring_ref value) const
{
    check_hresult(static_cast<const IVpnNativeProfile &>(static_cast<const D &>(*this))->put_EapConfiguration(get(value)));
}

template <typename D> bool impl_IVpnNativeProfile2<D>::RequireVpnClientAppUI() const
{
    bool value {};
    check_hresult(static_cast<const IVpnNativeProfile2 &>(static_cast<const D &>(*this))->get_RequireVpnClientAppUI(&value));
    return value;
}

template <typename D> void impl_IVpnNativeProfile2<D>::RequireVpnClientAppUI(bool value) const
{
    check_hresult(static_cast<const IVpnNativeProfile2 &>(static_cast<const D &>(*this))->put_RequireVpnClientAppUI(value));
}

template <typename D> Windows::Networking::Vpn::VpnManagementConnectionStatus impl_IVpnNativeProfile2<D>::ConnectionStatus() const
{
    Windows::Networking::Vpn::VpnManagementConnectionStatus value {};
    check_hresult(static_cast<const IVpnNativeProfile2 &>(static_cast<const D &>(*this))->get_ConnectionStatus(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::AddProfileFromXmlAsync(hstring_ref xml) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_AddProfileFromXmlAsync(get(xml), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::AddProfileFromObjectAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_AddProfileFromObjectAsync(get(profile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::UpdateProfileFromXmlAsync(hstring_ref xml) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_UpdateProfileFromXmlAsync(get(xml), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::UpdateProfileFromObjectAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_UpdateProfileFromObjectAsync(get(profile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> impl_IVpnManagementAgent<D>::GetProfilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_GetProfilesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::DeleteProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_DeleteProfileAsync(get(profile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::ConnectProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_ConnectProfileAsync(get(profile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::ConnectProfileWithPasswordCredentialAsync(const Windows::Networking::Vpn::IVpnProfile & profile, const Windows::Security::Credentials::PasswordCredential & passwordCredential) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_ConnectProfileWithPasswordCredentialAsync(get(profile), get(passwordCredential), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> impl_IVpnManagementAgent<D>::DisconnectProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> operation;
    check_hresult(static_cast<const IVpnManagementAgent &>(static_cast<const D &>(*this))->abi_DisconnectProfileAsync(get(profile), put(operation)));
    return operation;
}

inline VpnAppId::VpnAppId(Windows::Networking::Vpn::VpnAppIdType type, hstring_ref value) :
    VpnAppId(get_activation_factory<VpnAppId, IVpnAppIdFactory>().Create(type, value))
{}

inline void VpnChannel::ProcessEventAsync(const Windows::IInspectable & thirdPartyPlugIn, const Windows::IInspectable & event)
{
    get_activation_factory<VpnChannel, IVpnChannelStatics>().ProcessEventAsync(thirdPartyPlugIn, event);
}

inline VpnCustomCheckBox::VpnCustomCheckBox() :
    VpnCustomCheckBox(activate_instance<VpnCustomCheckBox>())
{}

inline VpnCustomComboBox::VpnCustomComboBox() :
    VpnCustomComboBox(activate_instance<VpnCustomComboBox>())
{}

inline VpnCustomEditBox::VpnCustomEditBox() :
    VpnCustomEditBox(activate_instance<VpnCustomEditBox>())
{}

inline VpnCustomErrorBox::VpnCustomErrorBox() :
    VpnCustomErrorBox(activate_instance<VpnCustomErrorBox>())
{}

inline VpnCustomPromptBooleanInput::VpnCustomPromptBooleanInput() :
    VpnCustomPromptBooleanInput(activate_instance<VpnCustomPromptBooleanInput>())
{}

inline VpnCustomPromptOptionSelector::VpnCustomPromptOptionSelector() :
    VpnCustomPromptOptionSelector(activate_instance<VpnCustomPromptOptionSelector>())
{}

inline VpnCustomPromptText::VpnCustomPromptText() :
    VpnCustomPromptText(activate_instance<VpnCustomPromptText>())
{}

inline VpnCustomPromptTextInput::VpnCustomPromptTextInput() :
    VpnCustomPromptTextInput(activate_instance<VpnCustomPromptTextInput>())
{}

inline VpnCustomTextBox::VpnCustomTextBox() :
    VpnCustomTextBox(activate_instance<VpnCustomTextBox>())
{}

inline VpnDomainNameAssignment::VpnDomainNameAssignment() :
    VpnDomainNameAssignment(activate_instance<VpnDomainNameAssignment>())
{}

inline VpnDomainNameInfo::VpnDomainNameInfo(hstring_ref name, Windows::Networking::Vpn::VpnDomainNameType nameType, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & proxyServerList) :
    VpnDomainNameInfo(get_activation_factory<VpnDomainNameInfo, IVpnDomainNameInfoFactory>().CreateVpnDomainNameInfo(name, nameType, dnsServerList, proxyServerList))
{}

inline VpnInterfaceId::VpnInterfaceId(array_ref<const uint8_t> address) :
    VpnInterfaceId(get_activation_factory<VpnInterfaceId, IVpnInterfaceIdFactory>().CreateVpnInterfaceId(address))
{}

inline VpnManagementAgent::VpnManagementAgent() :
    VpnManagementAgent(activate_instance<VpnManagementAgent>())
{}

inline VpnNamespaceAssignment::VpnNamespaceAssignment() :
    VpnNamespaceAssignment(activate_instance<VpnNamespaceAssignment>())
{}

inline VpnNamespaceInfo::VpnNamespaceInfo(hstring_ref name, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & proxyServerList) :
    VpnNamespaceInfo(get_activation_factory<VpnNamespaceInfo, IVpnNamespaceInfoFactory>().CreateVpnNamespaceInfo(name, dnsServerList, proxyServerList))
{}

inline VpnNativeProfile::VpnNativeProfile() :
    VpnNativeProfile(activate_instance<VpnNativeProfile>())
{}

inline VpnPacketBuffer::VpnPacketBuffer(const Windows::Networking::Vpn::VpnPacketBuffer & parentBuffer, uint32_t offset, uint32_t length) :
    VpnPacketBuffer(get_activation_factory<VpnPacketBuffer, IVpnPacketBufferFactory>().CreateVpnPacketBuffer(parentBuffer, offset, length))
{}

inline VpnPlugInProfile::VpnPlugInProfile() :
    VpnPlugInProfile(activate_instance<VpnPlugInProfile>())
{}

inline VpnRoute::VpnRoute(const Windows::Networking::HostName & address, uint8_t prefixSize) :
    VpnRoute(get_activation_factory<VpnRoute, IVpnRouteFactory>().CreateVpnRoute(address, prefixSize))
{}

inline VpnRouteAssignment::VpnRouteAssignment() :
    VpnRouteAssignment(activate_instance<VpnRouteAssignment>())
{}

inline VpnTrafficFilter::VpnTrafficFilter(const Windows::Networking::Vpn::VpnAppId & appId) :
    VpnTrafficFilter(get_activation_factory<VpnTrafficFilter, IVpnTrafficFilterFactory>().Create(appId))
{}

inline VpnTrafficFilterAssignment::VpnTrafficFilterAssignment() :
    VpnTrafficFilterAssignment(activate_instance<VpnTrafficFilterAssignment>())
{}

}

}
