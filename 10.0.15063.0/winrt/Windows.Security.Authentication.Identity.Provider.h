// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Provider.2.h"
#include "winrt/Windows.Security.Authentication.Identity.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::ServiceAuthenticationHmac() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_ServiceAuthenticationHmac(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::SessionNonce() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_SessionNonce(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::DeviceNonce() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_DeviceNonce(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_DeviceConfigurationData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::FinishAuthenticationAsync(Windows::Storage::Streams::IBuffer const& deviceHmac, Windows::Storage::Streams::IBuffer const& sessionHmac) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->FinishAuthenticationAsync(get_abi(deviceHmac), get_abi(sessionHmac), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::AbortAuthenticationAsync(param::hstring const& errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->AbortAuthenticationAsync(get_abi(errorLogMessage), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult<D>::Authentication() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult)->get_Authentication(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs<D>::StageInfo() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs)->get_StageInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Stage() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_Stage(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Scenario() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_Scenario(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->ShowNotificationMessageAsync(get_abi(deviceName), get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->StartAuthenticationAsync(get_abi(deviceId), get_abi(serviceAuthenticationNonce), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->add_AuthenticationStageChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>(this, &abi_t<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>::remove_AuthenticationStageChanged, AuthenticationStageChanged(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->remove_AuthenticationStageChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::GetAuthenticationStageInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->GetAuthenticationStageInfoAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->RegisterDevicePresenceMonitoringAsync(get_abi(deviceId), get_abi(deviceInstancePath), get_abi(monitoringMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->RegisterDevicePresenceMonitoringWithNewDeviceAsync(get_abi(deviceId), get_abi(deviceInstancePath), get_abi(monitoringMode), get_abi(deviceFriendlyName), get_abi(deviceModelNumber), get_abi(deviceConfigurationData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->UnregisterDevicePresenceMonitoringAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::IsDevicePresenceMonitoringSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->IsDevicePresenceMonitoringSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceId() const
{
    hstring deviceId{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceId(put_abi(deviceId)));
    return deviceId;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceFriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceModelNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceModelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceConfigurationData(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::PresenceMonitoringMode() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->get_PresenceMonitoringMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::UpdateDevicePresenceAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence const& presenceState) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->UpdateDevicePresenceAsync(get_abi(presenceState), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::IsAuthenticationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->get_IsAuthenticationSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration<D>::FinishRegisteringDeviceAsync(Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration)->FinishRegisteringDeviceAsync(get_abi(deviceConfigurationData), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration<D>::AbortRegisteringDeviceAsync(param::hstring const& errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration)->AbortRegisteringDeviceAsync(get_abi(errorLogMessage), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult<D>::Registration() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult)->get_Registration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->RequestStartRegisteringDeviceAsync(get_abi(deviceId), get_abi(capabilities), get_abi(deviceFriendlyName), get_abi(deviceModelNumber), get_abi(deviceKey), get_abi(mutualAuthenticationKey), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> deviceInfoList{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->FindAllRegisteredDeviceInfoAsync(get_abi(queryType), put_abi(deviceInfoList)));
    return deviceInfoList;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::UnregisterDeviceAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->UnregisterDeviceAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->UpdateDeviceConfigurationDataAsync(get_abi(deviceId), get_abi(deviceConfigurationData), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>
{
    HRESULT __stdcall get_ServiceAuthenticationHmac(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceAuthenticationHmac());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionNonce(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionNonce());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceNonce(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceNonce());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceConfigurationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAuthenticationAsync(::IUnknown* deviceHmac, ::IUnknown* sessionHmac, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FinishAuthenticationAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceHmac), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&sessionHmac)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AbortAuthenticationAsync(HSTRING errorLogMessage, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AbortAuthenticationAsync(*reinterpret_cast<hstring const*>(&errorLogMessage)));
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
    HRESULT __stdcall get_Status(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus>* value) noexcept override
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

    HRESULT __stdcall get_Authentication(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Authentication());
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
    HRESULT __stdcall get_StageInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StageInfo());
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
    HRESULT __stdcall get_Stage(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scenario(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scenario());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
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
    HRESULT __stdcall ShowNotificationMessageAsync(HSTRING deviceName, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage> message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowNotificationMessageAsync(*reinterpret_cast<hstring const*>(&deviceName), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAuthenticationAsync(HSTRING deviceId, ::IUnknown* serviceAuthenticationNonce, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAuthenticationAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&serviceAuthenticationNonce)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStageChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AuthenticationStageChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStageChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStageChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAuthenticationStageInfoAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetAuthenticationStageInfoAsync());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>
{
    HRESULT __stdcall RegisterDevicePresenceMonitoringAsync(HSTRING deviceId, HSTRING deviceInstancePath, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode> monitoringMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RegisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&deviceInstancePath), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const*>(&monitoringMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterDevicePresenceMonitoringWithNewDeviceAsync(HSTRING deviceId, HSTRING deviceInstancePath, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode> monitoringMode, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, ::IUnknown* deviceConfigurationData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RegisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&deviceInstancePath), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const*>(&monitoringMode), *reinterpret_cast<hstring const*>(&deviceFriendlyName), *reinterpret_cast<hstring const*>(&deviceModelNumber), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterDevicePresenceMonitoringAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnregisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsDevicePresenceMonitoringSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDevicePresenceMonitoringSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>
{
    HRESULT __stdcall get_DeviceId(HSTRING* deviceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceModelNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceConfigurationData());
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
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>
{
    HRESULT __stdcall get_PresenceMonitoringMode(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresenceMonitoringMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateDevicePresenceAsync(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence> presenceState, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateDevicePresenceAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence const*>(&presenceState)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAuthenticationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAuthenticationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>
{
    HRESULT __stdcall FinishRegisteringDeviceAsync(::IUnknown* deviceConfigurationData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FinishRegisteringDeviceAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AbortRegisteringDeviceAsync(HSTRING errorLogMessage, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AbortRegisteringDeviceAsync(*reinterpret_cast<hstring const*>(&errorLogMessage)));
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
    HRESULT __stdcall get_Status(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus>* value) noexcept override
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

    HRESULT __stdcall get_Registration(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Registration());
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
    HRESULT __stdcall RequestStartRegisteringDeviceAsync(HSTRING deviceId, abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities> capabilities, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, ::IUnknown* deviceKey, ::IUnknown* mutualAuthenticationKey, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStartRegisteringDeviceAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const*>(&capabilities), *reinterpret_cast<hstring const*>(&deviceFriendlyName), *reinterpret_cast<hstring const*>(&deviceModelNumber), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceKey), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&mutualAuthenticationKey)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllRegisteredDeviceInfoAsync(abi_t<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope> queryType, ::IUnknown** deviceInfoList) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceInfoList = detach_abi(this->shim().FindAllRegisteredDeviceInfoAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const*>(&queryType)));
            return S_OK;
        }
        catch (...)
        {
            *deviceInfoList = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnregisterDeviceAsync(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnregisterDeviceAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateDeviceConfigurationDataAsync(HSTRING deviceId, ::IUnknown* deviceConfigurationData, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateDeviceConfigurationDataAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
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

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Provider {

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorAuthentication::ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().ShowNotificationMessageAsync(deviceName, message);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> SecondaryAuthenticationFactorAuthentication::StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().StartAuthenticationAsync(deviceId, serviceAuthenticationNonce);
}

inline event_token SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(handler);
}

inline factory_event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>();
    return { factory, &abi_t<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>::remove_AuthenticationStageChanged, factory.AuthenticationStageChanged(handler) };
}

inline void SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(event_token const& token)
{
    get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> SecondaryAuthenticationFactorAuthentication::GetAuthenticationStageInfoAsync()
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().GetAuthenticationStageInfoAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> SecondaryAuthenticationFactorRegistration::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().RegisterDevicePresenceMonitoringAsync(deviceId, deviceInstancePath, monitoringMode);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> SecondaryAuthenticationFactorRegistration::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().RegisterDevicePresenceMonitoringAsync(deviceId, deviceInstancePath, monitoringMode, deviceFriendlyName, deviceModelNumber, deviceConfigurationData);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().UnregisterDevicePresenceMonitoringAsync(deviceId);
}

inline bool SecondaryAuthenticationFactorRegistration::IsDevicePresenceMonitoringSupported()
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().IsDevicePresenceMonitoringSupported();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> SecondaryAuthenticationFactorRegistration::RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().RequestStartRegisteringDeviceAsync(deviceId, capabilities, deviceFriendlyName, deviceModelNumber, deviceKey, mutualAuthenticationKey);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> SecondaryAuthenticationFactorRegistration::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().FindAllRegisteredDeviceInfoAsync(queryType);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UnregisterDeviceAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().UnregisterDeviceAsync(deviceId);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().UpdateDeviceConfigurationDataAsync(deviceId, deviceConfigurationData);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration> {};

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> {};

}

WINRT_WARNING_POP
