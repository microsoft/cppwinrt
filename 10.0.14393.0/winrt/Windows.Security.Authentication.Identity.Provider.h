// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Security.Authentication.Identity.Provider.3.h"
#include "Windows.Security.Authentication.Identity.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>
{
    HRESULT __stdcall get_ServiceAuthenticationHmac(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceAuthenticationHmac());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionNonce(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionNonce());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceNonce(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceNonce());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceConfigurationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FinishAuthenticationAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> deviceHmac, abi_arg_in<Windows::Storage::Streams::IBuffer> sessionHmac, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FinishAuthenticationAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&deviceHmac), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&sessionHmac)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AbortAuthenticationAsync(abi_arg_in<hstring> errorLogMessage, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AbortAuthenticationAsync(*reinterpret_cast<const hstring *>(&errorLogMessage)));
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>
{
    HRESULT __stdcall get_Status(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus * value) noexcept override
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

    HRESULT __stdcall get_Authentication(abi_arg_out<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Authentication());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>
{
    HRESULT __stdcall get_StageInfo(abi_arg_out<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StageInfo());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>
{
    HRESULT __stdcall get_Stage(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scenario(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scenario());
            return S_OK;
        }
        catch (...)
        {
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
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>
{
    HRESULT __stdcall abi_ShowNotificationMessageAsync(abi_arg_in<hstring> deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShowNotificationMessageAsync(*reinterpret_cast<const hstring *>(&deviceName), message));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAuthenticationAsync(abi_arg_in<hstring> deviceId, abi_arg_in<Windows::Storage::Streams::IBuffer> serviceAuthenticationNonce, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAuthenticationAsync(*reinterpret_cast<const hstring *>(&deviceId), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&serviceAuthenticationNonce)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStageChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AuthenticationStageChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStageChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AuthenticationStageChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAuthenticationStageInfoAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetAuthenticationStageInfoAsync());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> deviceId) noexcept override
    {
        try
        {
            *deviceId = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceModelNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceConfigurationData());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>
{
    HRESULT __stdcall abi_FinishRegisteringDeviceAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> deviceConfigurationData, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FinishRegisteringDeviceAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AbortRegisteringDeviceAsync(abi_arg_in<hstring> errorLogMessage, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AbortRegisteringDeviceAsync(*reinterpret_cast<const hstring *>(&errorLogMessage)));
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>
{
    HRESULT __stdcall get_Status(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus * value) noexcept override
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

    HRESULT __stdcall get_Registration(abi_arg_out<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Registration());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>
{
    HRESULT __stdcall abi_RequestStartRegisteringDeviceAsync(abi_arg_in<hstring> deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities, abi_arg_in<hstring> deviceFriendlyName, abi_arg_in<hstring> deviceModelNumber, abi_arg_in<Windows::Storage::Streams::IBuffer> deviceKey, abi_arg_in<Windows::Storage::Streams::IBuffer> mutualAuthenticationKey, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestStartRegisteringDeviceAsync(*reinterpret_cast<const hstring *>(&deviceId), capabilities, *reinterpret_cast<const hstring *>(&deviceFriendlyName), *reinterpret_cast<const hstring *>(&deviceModelNumber), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&deviceKey), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&mutualAuthenticationKey)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>>> deviceInfoList) noexcept override
    {
        try
        {
            *deviceInfoList = detach(this->shim().FindAllRegisteredDeviceInfoAsync(queryType));
            return S_OK;
        }
        catch (...)
        {
            *deviceInfoList = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterDeviceAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnregisterDeviceAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateDeviceConfigurationDataAsync(abi_arg_in<hstring> deviceId, abi_arg_in<Windows::Storage::Streams::IBuffer> deviceConfigurationData, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UpdateDeviceConfigurationDataAsync(*reinterpret_cast<const hstring *>(&deviceId), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&deviceConfigurationData)));
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

namespace Windows::Security::Authentication::Identity::Provider {

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus impl_ISecondaryAuthenticationFactorRegistrationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus value {};
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration impl_ISecondaryAuthenticationFactorRegistrationResult<D>::Registration() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration value { nullptr };
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationResult &>(static_cast<const D &>(*this))->get_Registration(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus impl_ISecondaryAuthenticationFactorAuthenticationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus value {};
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication impl_ISecondaryAuthenticationFactorAuthenticationResult<D>::Authentication() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication value { nullptr };
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationResult &>(static_cast<const D &>(*this))->get_Authentication(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> impl_ISecondaryAuthenticationFactorRegistrationStatics<D>::RequestStartRegisteringDeviceAsync(hstring_ref deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities, hstring_ref deviceFriendlyName, hstring_ref deviceModelNumber, const Windows::Storage::Streams::IBuffer & deviceKey, const Windows::Storage::Streams::IBuffer & mutualAuthenticationKey) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> operation;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationStatics &>(static_cast<const D &>(*this))->abi_RequestStartRegisteringDeviceAsync(get(deviceId), capabilities, get(deviceFriendlyName), get(deviceModelNumber), get(deviceKey), get(mutualAuthenticationKey), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> impl_ISecondaryAuthenticationFactorRegistrationStatics<D>::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> deviceInfoList;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationStatics &>(static_cast<const D &>(*this))->abi_FindAllRegisteredDeviceInfoAsync(queryType, put(deviceInfoList)));
    return deviceInfoList;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorRegistrationStatics<D>::UnregisterDeviceAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationStatics &>(static_cast<const D &>(*this))->abi_UnregisterDeviceAsync(get(deviceId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorRegistrationStatics<D>::UpdateDeviceConfigurationDataAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistrationStatics &>(static_cast<const D &>(*this))->abi_UpdateDeviceConfigurationDataAsync(get(deviceId), get(deviceConfigurationData), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorRegistration<D>::FinishRegisteringDeviceAsync(const Windows::Storage::Streams::IBuffer & deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistration &>(static_cast<const D &>(*this))->abi_FinishRegisteringDeviceAsync(get(deviceConfigurationData), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorRegistration<D>::AbortRegisteringDeviceAsync(hstring_ref errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorRegistration &>(static_cast<const D &>(*this))->abi_AbortRegisteringDeviceAsync(get(errorLogMessage), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::ShowNotificationMessageAsync(hstring_ref deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStatics &>(static_cast<const D &>(*this))->abi_ShowNotificationMessageAsync(get(deviceName), message, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::StartAuthenticationAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & serviceAuthenticationNonce) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> operation;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStatics &>(static_cast<const D &>(*this))->abi_StartAuthenticationAsync(get(deviceId), get(serviceAuthenticationNonce), put(operation)));
    return operation;
}

template <typename D> event_token impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStatics &>(static_cast<const D &>(*this))->add_AuthenticationStageChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISecondaryAuthenticationFactorAuthenticationStatics> impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISecondaryAuthenticationFactorAuthenticationStatics>(this, &ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics::remove_AuthenticationStageChanged, AuthenticationStageChanged(handler));
}

template <typename D> void impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(event_token token) const
{
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStatics &>(static_cast<const D &>(*this))->remove_AuthenticationStageChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> impl_ISecondaryAuthenticationFactorAuthenticationStatics<D>::GetAuthenticationStageInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStatics &>(static_cast<const D &>(*this))->abi_GetAuthenticationStageInfoAsync(put(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISecondaryAuthenticationFactorAuthentication<D>::ServiceAuthenticationHmac() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->get_ServiceAuthenticationHmac(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISecondaryAuthenticationFactorAuthentication<D>::SessionNonce() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->get_SessionNonce(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISecondaryAuthenticationFactorAuthentication<D>::DeviceNonce() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->get_DeviceNonce(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISecondaryAuthenticationFactorAuthentication<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->get_DeviceConfigurationData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> impl_ISecondaryAuthenticationFactorAuthentication<D>::FinishAuthenticationAsync(const Windows::Storage::Streams::IBuffer & deviceHmac, const Windows::Storage::Streams::IBuffer & sessionHmac) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->abi_FinishAuthenticationAsync(get(deviceHmac), get(sessionHmac), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ISecondaryAuthenticationFactorAuthentication<D>::AbortAuthenticationAsync(hstring_ref errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthentication &>(static_cast<const D &>(*this))->abi_AbortAuthenticationAsync(get(errorLogMessage), put(result)));
    return result;
}

template <typename D> hstring impl_ISecondaryAuthenticationFactorInfo<D>::DeviceId() const
{
    hstring deviceId;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorInfo &>(static_cast<const D &>(*this))->get_DeviceId(put(deviceId)));
    return deviceId;
}

template <typename D> hstring impl_ISecondaryAuthenticationFactorInfo<D>::DeviceFriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorInfo &>(static_cast<const D &>(*this))->get_DeviceFriendlyName(put(value)));
    return value;
}

template <typename D> hstring impl_ISecondaryAuthenticationFactorInfo<D>::DeviceModelNumber() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorInfo &>(static_cast<const D &>(*this))->get_DeviceModelNumber(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_ISecondaryAuthenticationFactorInfo<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorInfo &>(static_cast<const D &>(*this))->get_DeviceConfigurationData(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage impl_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Stage() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage value {};
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStageInfo &>(static_cast<const D &>(*this))->get_Stage(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario impl_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Scenario() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario value {};
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStageInfo &>(static_cast<const D &>(*this))->get_Scenario(&value));
    return value;
}

template <typename D> hstring impl_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStageInfo &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo impl_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs<D>::StageInfo() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo value { nullptr };
    check_hresult(static_cast<const ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs &>(static_cast<const D &>(*this))->get_StageInfo(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorAuthentication::ShowNotificationMessageAsync(hstring_ref deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>().ShowNotificationMessageAsync(deviceName, message);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> SecondaryAuthenticationFactorAuthentication::StartAuthenticationAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & serviceAuthenticationNonce)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>().StartAuthenticationAsync(deviceId, serviceAuthenticationNonce);
}

inline event_token SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(handler);
}

inline factory_event_revoker<ISecondaryAuthenticationFactorAuthenticationStatics> SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> & handler)
{
    auto factory = get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>();
    return { factory, &ABI::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics::remove_AuthenticationStageChanged, factory.AuthenticationStageChanged(handler) };
}

inline void SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(event_token token)
{
    get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> SecondaryAuthenticationFactorAuthentication::GetAuthenticationStageInfoAsync()
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, ISecondaryAuthenticationFactorAuthenticationStatics>().GetAuthenticationStageInfoAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> SecondaryAuthenticationFactorRegistration::RequestStartRegisteringDeviceAsync(hstring_ref deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities, hstring_ref deviceFriendlyName, hstring_ref deviceModelNumber, const Windows::Storage::Streams::IBuffer & deviceKey, const Windows::Storage::Streams::IBuffer & mutualAuthenticationKey)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, ISecondaryAuthenticationFactorRegistrationStatics>().RequestStartRegisteringDeviceAsync(deviceId, capabilities, deviceFriendlyName, deviceModelNumber, deviceKey, mutualAuthenticationKey);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> SecondaryAuthenticationFactorRegistration::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, ISecondaryAuthenticationFactorRegistrationStatics>().FindAllRegisteredDeviceInfoAsync(queryType);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UnregisterDeviceAsync(hstring_ref deviceId)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, ISecondaryAuthenticationFactorRegistrationStatics>().UnregisterDeviceAsync(deviceId);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UpdateDeviceConfigurationDataAsync(hstring_ref deviceId, const Windows::Storage::Streams::IBuffer & deviceConfigurationData)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, ISecondaryAuthenticationFactorRegistrationStatics>().UpdateDeviceConfigurationDataAsync(deviceId, deviceConfigurationData);
}

}

}
