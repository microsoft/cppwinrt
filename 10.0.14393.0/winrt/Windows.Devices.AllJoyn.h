// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Globalization.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Security.Cryptography.Certificates.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Devices.AllJoyn.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutData> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutData>
{
    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultAppName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultAppName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultAppName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DefaultAppName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppNames(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateOfManufacture(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateOfManufacture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DateOfManufacture(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().DateOfManufacture(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultDescription(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DefaultDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptions(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Descriptions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultManufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultManufacturer(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DefaultManufacturer(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturers(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Manufacturers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ModelNumber(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ModelNumber(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SoftwareVersion(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SoftwareVersion(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportUrl(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SupportUrl(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppId(GUID value) noexcept override
    {
        try
        {
            this->shim().AppId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView>
{
    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AJSoftwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AJSoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateOfManufacture(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateOfManufacture());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultLanguage(abi_arg_out<Windows::Globalization::ILanguage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultLanguage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedLanguages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedLanguages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Manufacturer());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>
{
    HRESULT __stdcall abi_GetDataBySessionPortAsync(abi_arg_in<hstring> uniqueName, abi_arg_in<Windows::Devices::AllJoyn::IAllJoynBusAttachment> busAttachment, uint16_t sessionPort, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<const hstring *>(&uniqueName), *reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynBusAttachment *>(&busAttachment), sessionPort));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataBySessionPortWithLanguageAsync(abi_arg_in<hstring> uniqueName, abi_arg_in<Windows::Devices::AllJoyn::IAllJoynBusAttachment> busAttachment, uint16_t sessionPort, abi_arg_in<Windows::Globalization::ILanguage> language, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<const hstring *>(&uniqueName), *reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynBusAttachment *>(&busAttachment), sessionPort, *reinterpret_cast<const Windows::Globalization::Language *>(&language)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>
{
    HRESULT __stdcall abi_Accept() noexcept override
    {
        try
        {
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>
{
    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionPort(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionPort());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficType(Windows::Devices::AllJoyn::AllJoynTrafficType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrafficType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SamePhysicalNode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SamePhysicalNode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SameNetwork(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SameNetwork());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Accept() noexcept override
    {
        try
        {
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType trafficType, uint8_t proximity, abi_arg_in<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> acceptSessionJoiner, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&uniqueName), sessionPort, trafficType, proximity, *reinterpret_cast<const Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner *>(&acceptSessionJoiner)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Succeeded(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Succeeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>
{
    HRESULT __stdcall get_AboutData(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynAboutData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AboutData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionSpecification(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionSpecification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PingAsync(abi_arg_in<hstring> uniqueName, abi_arg_out<Windows::Foundation::IAsyncOperation<int32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PingAsync(*reinterpret_cast<const hstring *>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Connect() noexcept override
    {
        try
        {
            this->shim().Connect();
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall add_StateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationMechanisms(abi_arg_out<Windows::Foundation::Collections::IVector<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationMechanisms());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CredentialsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CredentialsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CredentialsRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().CredentialsRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CredentialsVerificationRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CredentialsVerificationRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CredentialsVerificationRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().CredentialsVerificationRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationComplete(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AuthenticationComplete(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationComplete(event_token token) noexcept override
    {
        try
        {
            this->shim().AuthenticationComplete(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
{
    HRESULT __stdcall abi_GetAboutDataAsync(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynServiceInfo> serviceInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAboutDataAsync(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynServiceInfo *>(&serviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAboutDataWithLanguageAsync(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynServiceInfo> serviceInfo, abi_arg_in<Windows::Globalization::ILanguage> language, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAboutDataAsync(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynServiceInfo *>(&serviceInfo), *reinterpret_cast<const Windows::Globalization::Language *>(&language)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AcceptSessionJoinerRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AcceptSessionJoinerRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AcceptSessionJoinerRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().AcceptSessionJoinerRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionJoined(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SessionJoined(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionJoined(event_token token) noexcept override
    {
        try
        {
            this->shim().SessionJoined(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> connectionSpecification, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusAttachment> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&connectionSpecification)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusAttachment> defaultBusAttachment) noexcept override
    {
        try
        {
            *defaultBusAttachment = detach(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *defaultBusAttachment = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWatcher(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> requiredInterfaces, abi_arg_out<Windows::Devices::Enumeration::IDeviceWatcher> deviceWatcher) noexcept override
    {
        try
        {
            *deviceWatcher = detach(this->shim().GetWatcher(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&requiredInterfaces)));
            return S_OK;
        }
        catch (...)
        {
            *deviceWatcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObject> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObject>
{
    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
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

    HRESULT __stdcall abi_AddProducer(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynProducer> producer) noexcept override
    {
        try
        {
            this->shim().AddProducer(*reinterpret_cast<const Windows::Devices::AllJoyn::IAllJoynProducer *>(&producer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BusAttachment(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusAttachment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BusAttachment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> objectPath, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusObject> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&objectPath)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithBusAttachment(abi_arg_in<hstring> objectPath, abi_arg_in<Windows::Devices::AllJoyn::IAllJoynBusAttachment> busAttachment, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusObject> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithBusAttachment(*reinterpret_cast<const hstring *>(&objectPath), *reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynBusAttachment *>(&busAttachment)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(int32_t status, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(status));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentials> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentials>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Certificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Certificate(abi_arg_in<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            this->shim().Certificate(*reinterpret_cast<const Windows::Security::Cryptography::Certificates::Certificate *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PasswordCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PasswordCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().PasswordCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Timeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Timeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>
{
    HRESULT __stdcall get_AttemptCount(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttemptCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Credentials(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynCredentials> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Credentials());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedUserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerIntermediateCertificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Accept() noexcept override
    {
        try
        {
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo>
{
    HRESULT __stdcall get_SenderUniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SenderUniqueName());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> senderUniqueName, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynMessageInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&senderUniqueName)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducer> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducer>
{
    HRESULT __stdcall abi_SetBusObject(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynBusObject> busObject) noexcept override
    {
        try
        {
            this->shim().SetBusObject(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynBusObject *>(&busObject));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(int32_t status, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(status));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo>
{
    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ObjectPath(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ObjectPath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionPort(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionPort());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> uniqueName, abi_arg_in<hstring> objectPath, uint16_t sessionPort, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynServiceInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&uniqueName), *reinterpret_cast<const hstring *>(&objectPath), sessionPort));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>
{
    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> uniqueName, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&uniqueName)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSession> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSession>
{
    HRESULT __stdcall get_Id(int32_t * value) noexcept override
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

    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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

    HRESULT __stdcall abi_RemoveMemberAsync(abi_arg_in<hstring> uniqueName, abi_arg_out<Windows::Foundation::IAsyncOperation<int32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RemoveMemberAsync(*reinterpret_cast<const hstring *>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MemberAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MemberAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MemberAdded(event_token token) noexcept override
    {
        try
        {
            this->shim().MemberAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MemberRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MemberRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MemberRemoved(event_token token) noexcept override
    {
        try
        {
            this->shim().MemberRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Lost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Lost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Lost(event_token token) noexcept override
    {
        try
        {
            this->shim().Lost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>
{
    HRESULT __stdcall get_Session(abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Session());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynSession> session, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynSession *>(&session)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::Devices::AllJoyn::AllJoynSessionLostReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>
{
    HRESULT __stdcall abi_Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason reason, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(reason));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>
{
    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> uniqueName, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&uniqueName)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>
{
    HRESULT __stdcall get_UniqueName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UniqueName());
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> uniqueName, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&uniqueName)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics>
{
    HRESULT __stdcall abi_GetFromServiceInfoAsync(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynServiceInfo> serviceInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynServiceInfo *>(&serviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFromServiceInfoAndBusAttachmentAsync(abi_arg_in<Windows::Devices::AllJoyn::IAllJoynServiceInfo> serviceInfo, abi_arg_in<Windows::Devices::AllJoyn::IAllJoynBusAttachment> busAttachment, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynServiceInfo *>(&serviceInfo), *reinterpret_cast<const Windows::Devices::AllJoyn::AllJoynBusAttachment *>(&busAttachment)));
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
struct produce<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics>
{
    HRESULT __stdcall get_Ok(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ok());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fail(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fail());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OperationTimedOut(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OperationTimedOut());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherEndClosed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherEndClosed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionRefused(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionRefused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationFailed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationFailed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationRejectedByUser(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationRejectedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SslConnectFailed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SslConnectFailed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SslIdentityVerificationFailed(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SslIdentityVerificationFailed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientSecurity(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InsufficientSecurity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument1(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument2(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument3(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument3());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument4(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument4());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument5(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument5());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument6(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument6());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument7(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument7());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument8(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InvalidArgument8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t * value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>
{
    HRESULT __stdcall abi_Create(int32_t status, abi_arg_out<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(status));
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

namespace Windows::Devices::AllJoyn {

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::Ok() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_Ok(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::Fail() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_Fail(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::OperationTimedOut() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_OperationTimedOut(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::OtherEndClosed() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_OtherEndClosed(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::ConnectionRefused() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_ConnectionRefused(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::AuthenticationFailed() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_AuthenticationFailed(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::AuthenticationRejectedByUser() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_AuthenticationRejectedByUser(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::SslConnectFailed() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_SslConnectFailed(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::SslIdentityVerificationFailed() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_SslIdentityVerificationFailed(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InsufficientSecurity() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InsufficientSecurity(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument1() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument1(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument2() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument2(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument3() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument3(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument4() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument4(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument5() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument5(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument6() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument6(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument7() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument7(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynStatusStatics<D>::InvalidArgument8() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynStatusStatics &>(static_cast<const D &>(*this))->get_InvalidArgument8(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAboutData impl_IAllJoynBusAttachment<D>::AboutData() const
{
    Windows::Devices::AllJoyn::AllJoynAboutData value { nullptr };
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->get_AboutData(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynBusAttachment<D>::ConnectionSpecification() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->get_ConnectionSpecification(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachmentState impl_IAllJoynBusAttachment<D>::State() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState value {};
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> hstring impl_IAllJoynBusAttachment<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> impl_IAllJoynBusAttachment<D>::PingAsync(hstring_ref uniqueName) const
{
    Windows::Foundation::IAsyncOperation<int32_t> operation;
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->abi_PingAsync(get(uniqueName), put(operation)));
    return operation;
}

template <typename D> void impl_IAllJoynBusAttachment<D>::Connect() const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->abi_Connect());
}

template <typename D> void impl_IAllJoynBusAttachment<D>::Disconnect() const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->abi_Disconnect());
}

template <typename D> event_token impl_IAllJoynBusAttachment<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->add_StateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment> impl_IAllJoynBusAttachment<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_IAllJoynBusAttachment<D>::StateChanged(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->remove_StateChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVector<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> impl_IAllJoynBusAttachment<D>::AuthenticationMechanisms() const
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> value;
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->get_AuthenticationMechanisms(put(value)));
    return value;
}

template <typename D> event_token impl_IAllJoynBusAttachment<D>::CredentialsRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->add_CredentialsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment> impl_IAllJoynBusAttachment<D>::CredentialsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment::remove_CredentialsRequested, CredentialsRequested(handler));
}

template <typename D> void impl_IAllJoynBusAttachment<D>::CredentialsRequested(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->remove_CredentialsRequested(token));
}

template <typename D> event_token impl_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->add_CredentialsVerificationRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment> impl_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment::remove_CredentialsVerificationRequested, CredentialsVerificationRequested(handler));
}

template <typename D> void impl_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->remove_CredentialsVerificationRequested(token));
}

template <typename D> event_token impl_IAllJoynBusAttachment<D>::AuthenticationComplete(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->add_AuthenticationComplete(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment> impl_IAllJoynBusAttachment<D>::AuthenticationComplete(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment::remove_AuthenticationComplete, AuthenticationComplete(handler));
}

template <typename D> void impl_IAllJoynBusAttachment<D>::AuthenticationComplete(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment &>(static_cast<const D &>(*this))->remove_AuthenticationComplete(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> impl_IAllJoynBusAttachment2<D>::GetAboutDataAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation;
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->abi_GetAboutDataAsync(get(serviceInfo), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> impl_IAllJoynBusAttachment2<D>::GetAboutDataAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo, const Windows::Globalization::Language & language) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation;
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->abi_GetAboutDataWithLanguageAsync(get(serviceInfo), get(language), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->add_AcceptSessionJoinerRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment2> impl_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment2>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment2::remove_AcceptSessionJoinerRequested, AcceptSessionJoinerRequested(handler));
}

template <typename D> void impl_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->remove_AcceptSessionJoinerRequested(token));
}

template <typename D> event_token impl_IAllJoynBusAttachment2<D>::SessionJoined(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->add_SessionJoined(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusAttachment2> impl_IAllJoynBusAttachment2<D>::SessionJoined(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusAttachment2>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment2::remove_SessionJoined, SessionJoined(handler));
}

template <typename D> void impl_IAllJoynBusAttachment2<D>::SessionJoined(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusAttachment2 &>(static_cast<const D &>(*this))->remove_SessionJoined(token));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment impl_IAllJoynBusAttachmentStatics<D>::GetDefault() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment defaultBusAttachment { nullptr };
    check_hresult(static_cast<const IAllJoynBusAttachmentStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(defaultBusAttachment)));
    return defaultBusAttachment;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher impl_IAllJoynBusAttachmentStatics<D>::GetWatcher(const Windows::Foundation::Collections::IIterable<hstring> & requiredInterfaces) const
{
    Windows::Devices::Enumeration::DeviceWatcher deviceWatcher { nullptr };
    check_hresult(static_cast<const IAllJoynBusAttachmentStatics &>(static_cast<const D &>(*this))->abi_GetWatcher(get(requiredInterfaces), put(deviceWatcher)));
    return deviceWatcher;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachmentState impl_IAllJoynBusAttachmentStateChangedEventArgs<D>::State() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState value {};
    check_hresult(static_cast<const IAllJoynBusAttachmentStateChangedEventArgs &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynBusAttachmentStateChangedEventArgs<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynBusAttachmentStateChangedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism impl_IAllJoynCredentials<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value {};
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->get_AuthenticationMechanism(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IAllJoynCredentials<D>::Certificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->get_Certificate(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynCredentials<D>::Certificate(const Windows::Security::Cryptography::Certificates::Certificate & value) const
{
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->put_Certificate(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IAllJoynCredentials<D>::PasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->get_PasswordCredential(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynCredentials<D>::PasswordCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->put_PasswordCredential(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IAllJoynCredentials<D>::Timeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->get_Timeout(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynCredentials<D>::Timeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IAllJoynCredentials &>(static_cast<const D &>(*this))->put_Timeout(get(value)));
}

template <typename D> uint16_t impl_IAllJoynCredentialsRequestedEventArgs<D>::AttemptCount() const
{
    uint16_t value {};
    check_hresult(static_cast<const IAllJoynCredentialsRequestedEventArgs &>(static_cast<const D &>(*this))->get_AttemptCount(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynCredentials impl_IAllJoynCredentialsRequestedEventArgs<D>::Credentials() const
{
    Windows::Devices::AllJoyn::AllJoynCredentials value { nullptr };
    check_hresult(static_cast<const IAllJoynCredentialsRequestedEventArgs &>(static_cast<const D &>(*this))->get_Credentials(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynCredentialsRequestedEventArgs<D>::PeerUniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynCredentialsRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerUniqueName(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynCredentialsRequestedEventArgs<D>::RequestedUserName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynCredentialsRequestedEventArgs &>(static_cast<const D &>(*this))->get_RequestedUserName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IAllJoynCredentialsRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IAllJoynCredentialsRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value {};
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_AuthenticationMechanism(&value));
    return value;
}

template <typename D> hstring impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerUniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerUniqueName(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerCertificate(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value {};
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerCertificateErrorSeverity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->get_PeerIntermediateCertificates(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::Accept() const
{
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->abi_Accept());
}

template <typename D> Windows::Foundation::Deferral impl_IAllJoynCredentialsVerificationRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IAllJoynCredentialsVerificationRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism impl_IAllJoynAuthenticationCompleteEventArgs<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value {};
    check_hresult(static_cast<const IAllJoynAuthenticationCompleteEventArgs &>(static_cast<const D &>(*this))->get_AuthenticationMechanism(&value));
    return value;
}

template <typename D> hstring impl_IAllJoynAuthenticationCompleteEventArgs<D>::PeerUniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAuthenticationCompleteEventArgs &>(static_cast<const D &>(*this))->get_PeerUniqueName(put(value)));
    return value;
}

template <typename D> bool impl_IAllJoynAuthenticationCompleteEventArgs<D>::Succeeded() const
{
    bool value {};
    check_hresult(static_cast<const IAllJoynAuthenticationCompleteEventArgs &>(static_cast<const D &>(*this))->get_Succeeded(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment impl_IAllJoynBusAttachmentFactory<D>::Create(hstring_ref connectionSpecification) const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment result { nullptr };
    check_hresult(static_cast<const IAllJoynBusAttachmentFactory &>(static_cast<const D &>(*this))->abi_Create(get(connectionSpecification), put(result)));
    return result;
}

template <typename D> int32_t impl_IAllJoynSession<D>::Id() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->get_Id(&value));
    return value;
}

template <typename D> int32_t impl_IAllJoynSession<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> impl_IAllJoynSession<D>::RemoveMemberAsync(hstring_ref uniqueName) const
{
    Windows::Foundation::IAsyncOperation<int32_t> operation;
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->abi_RemoveMemberAsync(get(uniqueName), put(operation)));
    return operation;
}

template <typename D> event_token impl_IAllJoynSession<D>::MemberAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->add_MemberAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynSession> impl_IAllJoynSession<D>::MemberAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynSession>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynSession::remove_MemberAdded, MemberAdded(handler));
}

template <typename D> void impl_IAllJoynSession<D>::MemberAdded(event_token token) const
{
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->remove_MemberAdded(token));
}

template <typename D> event_token impl_IAllJoynSession<D>::MemberRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->add_MemberRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynSession> impl_IAllJoynSession<D>::MemberRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynSession>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynSession::remove_MemberRemoved, MemberRemoved(handler));
}

template <typename D> void impl_IAllJoynSession<D>::MemberRemoved(event_token token) const
{
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->remove_MemberRemoved(token));
}

template <typename D> event_token impl_IAllJoynSession<D>::Lost(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->add_Lost(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynSession> impl_IAllJoynSession<D>::Lost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynSession>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynSession::remove_Lost, Lost(handler));
}

template <typename D> void impl_IAllJoynSession<D>::Lost(event_token token) const
{
    check_hresult(static_cast<const IAllJoynSession &>(static_cast<const D &>(*this))->remove_Lost(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> impl_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> operation;
    check_hresult(static_cast<const IAllJoynSessionStatics &>(static_cast<const D &>(*this))->abi_GetFromServiceInfoAsync(get(serviceInfo), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> impl_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> operation;
    check_hresult(static_cast<const IAllJoynSessionStatics &>(static_cast<const D &>(*this))->abi_GetFromServiceInfoAndBusAttachmentAsync(get(serviceInfo), get(busAttachment), put(operation)));
    return operation;
}

template <typename D> void impl_IAllJoynProducer<D>::SetBusObject(const Windows::Devices::AllJoyn::AllJoynBusObject & busObject) const
{
    check_hresult(static_cast<const IAllJoynProducer &>(static_cast<const D &>(*this))->abi_SetBusObject(get(busObject)));
}

template <typename D> void impl_IAllJoynBusObject<D>::Start() const
{
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IAllJoynBusObject<D>::Stop() const
{
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> void impl_IAllJoynBusObject<D>::AddProducer(const Windows::Devices::AllJoyn::IAllJoynProducer & producer) const
{
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->abi_AddProducer(get(producer)));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment impl_IAllJoynBusObject<D>::BusAttachment() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment value { nullptr };
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->get_BusAttachment(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSession impl_IAllJoynBusObject<D>::Session() const
{
    Windows::Devices::AllJoyn::AllJoynSession value { nullptr };
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->get_Session(put(value)));
    return value;
}

template <typename D> event_token impl_IAllJoynBusObject<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAllJoynBusObject> impl_IAllJoynBusObject<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAllJoynBusObject>(this, &ABI::Windows::Devices::AllJoyn::IAllJoynBusObject::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IAllJoynBusObject<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IAllJoynBusObject &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObject impl_IAllJoynBusObjectFactory<D>::Create(hstring_ref objectPath) const
{
    Windows::Devices::AllJoyn::AllJoynBusObject result { nullptr };
    check_hresult(static_cast<const IAllJoynBusObjectFactory &>(static_cast<const D &>(*this))->abi_Create(get(objectPath), put(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObject impl_IAllJoynBusObjectFactory<D>::CreateWithBusAttachment(hstring_ref objectPath, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment) const
{
    Windows::Devices::AllJoyn::AllJoynBusObject result { nullptr };
    check_hresult(static_cast<const IAllJoynBusObjectFactory &>(static_cast<const D &>(*this))->abi_CreateWithBusAttachment(get(objectPath), get(busAttachment), put(result)));
    return result;
}

template <typename D> hstring impl_IAllJoynServiceInfo<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynServiceInfo &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynServiceInfo<D>::ObjectPath() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynServiceInfo &>(static_cast<const D &>(*this))->get_ObjectPath(put(value)));
    return value;
}

template <typename D> uint16_t impl_IAllJoynServiceInfo<D>::SessionPort() const
{
    uint16_t value {};
    check_hresult(static_cast<const IAllJoynServiceInfo &>(static_cast<const D &>(*this))->get_SessionPort(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> impl_IAllJoynServiceInfoStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> operation;
    check_hresult(static_cast<const IAllJoynServiceInfoStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(operation)));
    return operation;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynServiceInfo impl_IAllJoynServiceInfoFactory<D>::Create(hstring_ref uniqueName, hstring_ref objectPath, uint16_t sessionPort) const
{
    Windows::Devices::AllJoyn::AllJoynServiceInfo result { nullptr };
    check_hresult(static_cast<const IAllJoynServiceInfoFactory &>(static_cast<const D &>(*this))->abi_Create(get(uniqueName), get(objectPath), sessionPort, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> impl_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(hstring_ref uniqueName, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment, uint16_t sessionPort) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation;
    check_hresult(static_cast<const IAllJoynAboutDataViewStatics &>(static_cast<const D &>(*this))->abi_GetDataBySessionPortAsync(get(uniqueName), get(busAttachment), sessionPort, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> impl_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(hstring_ref uniqueName, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment, uint16_t sessionPort, const Windows::Globalization::Language & language) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation;
    check_hresult(static_cast<const IAllJoynAboutDataViewStatics &>(static_cast<const D &>(*this))->abi_GetDataBySessionPortWithLanguageAsync(get(uniqueName), get(busAttachment), sessionPort, get(language), put(operation)));
    return operation;
}

template <typename D> int32_t impl_IAllJoynAboutDataView<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IAllJoynAboutDataView<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::AJSoftwareVersion() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_AJSoftwareVersion(put(value)));
    return value;
}

template <typename D> GUID impl_IAllJoynAboutDataView<D>::AppId() const
{
    GUID value {};
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_AppId(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAllJoynAboutDataView<D>::DateOfManufacture() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_DateOfManufacture(put(value)));
    return value;
}

template <typename D> Windows::Globalization::Language impl_IAllJoynAboutDataView<D>::DefaultLanguage() const
{
    Windows::Globalization::Language value { nullptr };
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_DefaultLanguage(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::HardwareVersion() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_HardwareVersion(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::ModelNumber() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_ModelNumber(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::SoftwareVersion() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_SoftwareVersion(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> impl_IAllJoynAboutDataView<D>::SupportedLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_SupportedLanguages(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAllJoynAboutDataView<D>::SupportUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_SupportUrl(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::AppName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_AppName(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::DeviceName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_DeviceName(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutDataView<D>::Manufacturer() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutDataView &>(static_cast<const D &>(*this))->get_Manufacturer(put(value)));
    return value;
}

template <typename D> bool impl_IAllJoynAboutData<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> hstring impl_IAllJoynAboutData<D>::DefaultAppName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_DefaultAppName(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::DefaultAppName(hstring_ref value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_DefaultAppName(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IAllJoynAboutData<D>::AppNames() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_AppNames(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAllJoynAboutData<D>::DateOfManufacture() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_DateOfManufacture(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::DateOfManufacture(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_DateOfManufacture(get(value)));
}

template <typename D> hstring impl_IAllJoynAboutData<D>::DefaultDescription() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_DefaultDescription(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::DefaultDescription(hstring_ref value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_DefaultDescription(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IAllJoynAboutData<D>::Descriptions() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_Descriptions(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutData<D>::DefaultManufacturer() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_DefaultManufacturer(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::DefaultManufacturer(hstring_ref value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_DefaultManufacturer(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IAllJoynAboutData<D>::Manufacturers() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_Manufacturers(put(value)));
    return value;
}

template <typename D> hstring impl_IAllJoynAboutData<D>::ModelNumber() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_ModelNumber(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::ModelNumber(hstring_ref value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_ModelNumber(get(value)));
}

template <typename D> hstring impl_IAllJoynAboutData<D>::SoftwareVersion() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_SoftwareVersion(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::SoftwareVersion(hstring_ref value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_SoftwareVersion(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IAllJoynAboutData<D>::SupportUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_SupportUrl(put(value)));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::SupportUrl(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_SupportUrl(get(value)));
}

template <typename D> GUID impl_IAllJoynAboutData<D>::AppId() const
{
    GUID value {};
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->get_AppId(&value));
    return value;
}

template <typename D> void impl_IAllJoynAboutData<D>::AppId(GUID value) const
{
    check_hresult(static_cast<const IAllJoynAboutData &>(static_cast<const D &>(*this))->put_AppId(value));
}

template <typename D> hstring impl_IAllJoynAcceptSessionJoinerEventArgs<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> uint16_t impl_IAllJoynAcceptSessionJoinerEventArgs<D>::SessionPort() const
{
    uint16_t value {};
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->get_SessionPort(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynTrafficType impl_IAllJoynAcceptSessionJoinerEventArgs<D>::TrafficType() const
{
    Windows::Devices::AllJoyn::AllJoynTrafficType value {};
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->get_TrafficType(&value));
    return value;
}

template <typename D> bool impl_IAllJoynAcceptSessionJoinerEventArgs<D>::SamePhysicalNode() const
{
    bool value {};
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->get_SamePhysicalNode(&value));
    return value;
}

template <typename D> bool impl_IAllJoynAcceptSessionJoinerEventArgs<D>::SameNetwork() const
{
    bool value {};
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->get_SameNetwork(&value));
    return value;
}

template <typename D> void impl_IAllJoynAcceptSessionJoinerEventArgs<D>::Accept() const
{
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgs &>(static_cast<const D &>(*this))->abi_Accept());
}

template <typename D> void impl_IAllJoynAcceptSessionJoiner<D>::Accept() const
{
    check_hresult(static_cast<const IAllJoynAcceptSessionJoiner &>(static_cast<const D &>(*this))->abi_Accept());
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs impl_IAllJoynAcceptSessionJoinerEventArgsFactory<D>::Create(hstring_ref uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType trafficType, uint8_t proximity, const Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner & acceptSessionJoiner) const
{
    Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynAcceptSessionJoinerEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(get(uniqueName), sessionPort, trafficType, proximity, get(acceptSessionJoiner), put(result)));
    return result;
}

template <typename D> hstring impl_IAllJoynSessionMemberAddedEventArgs<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynSessionMemberAddedEventArgs &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs impl_IAllJoynSessionMemberAddedEventArgsFactory<D>::Create(hstring_ref uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynSessionMemberAddedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(get(uniqueName), put(result)));
    return result;
}

template <typename D> hstring impl_IAllJoynSessionMemberRemovedEventArgs<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynSessionMemberRemovedEventArgs &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs impl_IAllJoynSessionMemberRemovedEventArgsFactory<D>::Create(hstring_ref uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynSessionMemberRemovedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(get(uniqueName), put(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSession impl_IAllJoynSessionJoinedEventArgs<D>::Session() const
{
    Windows::Devices::AllJoyn::AllJoynSession value { nullptr };
    check_hresult(static_cast<const IAllJoynSessionJoinedEventArgs &>(static_cast<const D &>(*this))->get_Session(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs impl_IAllJoynSessionJoinedEventArgsFactory<D>::Create(const Windows::Devices::AllJoyn::AllJoynSession & session) const
{
    Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynSessionJoinedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(get(session), put(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionLostReason impl_IAllJoynSessionLostEventArgs<D>::Reason() const
{
    Windows::Devices::AllJoyn::AllJoynSessionLostReason value {};
    check_hresult(static_cast<const IAllJoynSessionLostEventArgs &>(static_cast<const D &>(*this))->get_Reason(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs impl_IAllJoynSessionLostEventArgsFactory<D>::Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason reason) const
{
    Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynSessionLostEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(reason, put(result)));
    return result;
}

template <typename D> int32_t impl_IAllJoynProducerStoppedEventArgs<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynProducerStoppedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs impl_IAllJoynProducerStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynProducerStoppedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(status, put(result)));
    return result;
}

template <typename D> int32_t impl_IAllJoynBusObjectStoppedEventArgs<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynBusObjectStoppedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs impl_IAllJoynBusObjectStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynBusObjectStoppedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(status, put(result)));
    return result;
}

template <typename D> int32_t impl_IAllJoynWatcherStoppedEventArgs<D>::Status() const
{
    int32_t value {};
    check_hresult(static_cast<const IAllJoynWatcherStoppedEventArgs &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs impl_IAllJoynWatcherStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynWatcherStoppedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(status, put(result)));
    return result;
}

template <typename D> hstring impl_IAllJoynServiceInfoRemovedEventArgs<D>::UniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynServiceInfoRemovedEventArgs &>(static_cast<const D &>(*this))->get_UniqueName(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs impl_IAllJoynServiceInfoRemovedEventArgsFactory<D>::Create(hstring_ref uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs result { nullptr };
    check_hresult(static_cast<const IAllJoynServiceInfoRemovedEventArgsFactory &>(static_cast<const D &>(*this))->abi_Create(get(uniqueName), put(result)));
    return result;
}

template <typename D> hstring impl_IAllJoynMessageInfo<D>::SenderUniqueName() const
{
    hstring value;
    check_hresult(static_cast<const IAllJoynMessageInfo &>(static_cast<const D &>(*this))->get_SenderUniqueName(put(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynMessageInfo impl_IAllJoynMessageInfoFactory<D>::Create(hstring_ref senderUniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynMessageInfo result { nullptr };
    check_hresult(static_cast<const IAllJoynMessageInfoFactory &>(static_cast<const D &>(*this))->abi_Create(get(senderUniqueName), put(result)));
    return result;
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> AllJoynAboutDataView::GetDataBySessionPortAsync(hstring_ref uniqueName, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment, uint16_t sessionPort)
{
    return get_activation_factory<AllJoynAboutDataView, IAllJoynAboutDataViewStatics>().GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> AllJoynAboutDataView::GetDataBySessionPortAsync(hstring_ref uniqueName, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment, uint16_t sessionPort, const Windows::Globalization::Language & language)
{
    return get_activation_factory<AllJoynAboutDataView, IAllJoynAboutDataViewStatics>().GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort, language);
}

inline AllJoynAcceptSessionJoinerEventArgs::AllJoynAcceptSessionJoinerEventArgs(hstring_ref uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType trafficType, uint8_t proximity, const Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner & acceptSessionJoiner) :
    AllJoynAcceptSessionJoinerEventArgs(get_activation_factory<AllJoynAcceptSessionJoinerEventArgs, IAllJoynAcceptSessionJoinerEventArgsFactory>().Create(uniqueName, sessionPort, trafficType, proximity, acceptSessionJoiner))
{}

inline AllJoynBusAttachment::AllJoynBusAttachment() :
    AllJoynBusAttachment(activate_instance<AllJoynBusAttachment>())
{}

inline AllJoynBusAttachment::AllJoynBusAttachment(hstring_ref connectionSpecification) :
    AllJoynBusAttachment(get_activation_factory<AllJoynBusAttachment, IAllJoynBusAttachmentFactory>().Create(connectionSpecification))
{}

inline Windows::Devices::AllJoyn::AllJoynBusAttachment AllJoynBusAttachment::GetDefault()
{
    return get_activation_factory<AllJoynBusAttachment, IAllJoynBusAttachmentStatics>().GetDefault();
}

inline Windows::Devices::Enumeration::DeviceWatcher AllJoynBusAttachment::GetWatcher(const Windows::Foundation::Collections::IIterable<hstring> & requiredInterfaces)
{
    return get_activation_factory<AllJoynBusAttachment, IAllJoynBusAttachmentStatics>().GetWatcher(requiredInterfaces);
}

inline AllJoynBusObject::AllJoynBusObject() :
    AllJoynBusObject(activate_instance<AllJoynBusObject>())
{}

inline AllJoynBusObject::AllJoynBusObject(hstring_ref objectPath) :
    AllJoynBusObject(get_activation_factory<AllJoynBusObject, IAllJoynBusObjectFactory>().Create(objectPath))
{}

inline AllJoynBusObject::AllJoynBusObject(hstring_ref objectPath, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment) :
    AllJoynBusObject(get_activation_factory<AllJoynBusObject, IAllJoynBusObjectFactory>().CreateWithBusAttachment(objectPath, busAttachment))
{}

inline AllJoynBusObjectStoppedEventArgs::AllJoynBusObjectStoppedEventArgs(int32_t status) :
    AllJoynBusObjectStoppedEventArgs(get_activation_factory<AllJoynBusObjectStoppedEventArgs, IAllJoynBusObjectStoppedEventArgsFactory>().Create(status))
{}

inline AllJoynMessageInfo::AllJoynMessageInfo(hstring_ref senderUniqueName) :
    AllJoynMessageInfo(get_activation_factory<AllJoynMessageInfo, IAllJoynMessageInfoFactory>().Create(senderUniqueName))
{}

inline AllJoynProducerStoppedEventArgs::AllJoynProducerStoppedEventArgs(int32_t status) :
    AllJoynProducerStoppedEventArgs(get_activation_factory<AllJoynProducerStoppedEventArgs, IAllJoynProducerStoppedEventArgsFactory>().Create(status))
{}

inline AllJoynServiceInfo::AllJoynServiceInfo(hstring_ref uniqueName, hstring_ref objectPath, uint16_t sessionPort) :
    AllJoynServiceInfo(get_activation_factory<AllJoynServiceInfo, IAllJoynServiceInfoFactory>().Create(uniqueName, objectPath, sessionPort))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> AllJoynServiceInfo::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<AllJoynServiceInfo, IAllJoynServiceInfoStatics>().FromIdAsync(deviceId);
}

inline AllJoynServiceInfoRemovedEventArgs::AllJoynServiceInfoRemovedEventArgs(hstring_ref uniqueName) :
    AllJoynServiceInfoRemovedEventArgs(get_activation_factory<AllJoynServiceInfoRemovedEventArgs, IAllJoynServiceInfoRemovedEventArgsFactory>().Create(uniqueName))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> AllJoynSession::GetFromServiceInfoAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo)
{
    return get_activation_factory<AllJoynSession, IAllJoynSessionStatics>().GetFromServiceInfoAsync(serviceInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> AllJoynSession::GetFromServiceInfoAsync(const Windows::Devices::AllJoyn::AllJoynServiceInfo & serviceInfo, const Windows::Devices::AllJoyn::AllJoynBusAttachment & busAttachment)
{
    return get_activation_factory<AllJoynSession, IAllJoynSessionStatics>().GetFromServiceInfoAsync(serviceInfo, busAttachment);
}

inline AllJoynSessionJoinedEventArgs::AllJoynSessionJoinedEventArgs(const Windows::Devices::AllJoyn::AllJoynSession & session) :
    AllJoynSessionJoinedEventArgs(get_activation_factory<AllJoynSessionJoinedEventArgs, IAllJoynSessionJoinedEventArgsFactory>().Create(session))
{}

inline AllJoynSessionLostEventArgs::AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason reason) :
    AllJoynSessionLostEventArgs(get_activation_factory<AllJoynSessionLostEventArgs, IAllJoynSessionLostEventArgsFactory>().Create(reason))
{}

inline AllJoynSessionMemberAddedEventArgs::AllJoynSessionMemberAddedEventArgs(hstring_ref uniqueName) :
    AllJoynSessionMemberAddedEventArgs(get_activation_factory<AllJoynSessionMemberAddedEventArgs, IAllJoynSessionMemberAddedEventArgsFactory>().Create(uniqueName))
{}

inline AllJoynSessionMemberRemovedEventArgs::AllJoynSessionMemberRemovedEventArgs(hstring_ref uniqueName) :
    AllJoynSessionMemberRemovedEventArgs(get_activation_factory<AllJoynSessionMemberRemovedEventArgs, IAllJoynSessionMemberRemovedEventArgsFactory>().Create(uniqueName))
{}

inline int32_t AllJoynStatus::Ok()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().Ok();
}

inline int32_t AllJoynStatus::Fail()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().Fail();
}

inline int32_t AllJoynStatus::OperationTimedOut()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().OperationTimedOut();
}

inline int32_t AllJoynStatus::OtherEndClosed()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().OtherEndClosed();
}

inline int32_t AllJoynStatus::ConnectionRefused()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().ConnectionRefused();
}

inline int32_t AllJoynStatus::AuthenticationFailed()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().AuthenticationFailed();
}

inline int32_t AllJoynStatus::AuthenticationRejectedByUser()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().AuthenticationRejectedByUser();
}

inline int32_t AllJoynStatus::SslConnectFailed()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().SslConnectFailed();
}

inline int32_t AllJoynStatus::SslIdentityVerificationFailed()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().SslIdentityVerificationFailed();
}

inline int32_t AllJoynStatus::InsufficientSecurity()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InsufficientSecurity();
}

inline int32_t AllJoynStatus::InvalidArgument1()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument1();
}

inline int32_t AllJoynStatus::InvalidArgument2()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument2();
}

inline int32_t AllJoynStatus::InvalidArgument3()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument3();
}

inline int32_t AllJoynStatus::InvalidArgument4()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument4();
}

inline int32_t AllJoynStatus::InvalidArgument5()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument5();
}

inline int32_t AllJoynStatus::InvalidArgument6()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument6();
}

inline int32_t AllJoynStatus::InvalidArgument7()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument7();
}

inline int32_t AllJoynStatus::InvalidArgument8()
{
    return get_activation_factory<AllJoynStatus, IAllJoynStatusStatics>().InvalidArgument8();
}

inline AllJoynWatcherStoppedEventArgs::AllJoynWatcherStoppedEventArgs(int32_t status) :
    AllJoynWatcherStoppedEventArgs(get_activation_factory<AllJoynWatcherStoppedEventArgs, IAllJoynWatcherStoppedEventArgsFactory>().Create(status))
{}

}

}
