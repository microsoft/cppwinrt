// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.2.h"
#include "winrt/Windows.System.Diagnostics.h"

namespace winrt::impl {

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics<D>::Register(param::hstring const& id) const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics)->Register(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics<D>::Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings) const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics)->RegisterWithSettings(get_abi(id), get_abi(settings), put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult<D>::Status() const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>::StorageSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings)->get_StorageSize(&value));
    return value;
}

template <typename D> void consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>::StorageSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings)->put_StorageSize(value));
}

template <typename D> uint32_t consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>::UploadQuotaSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings)->get_UploadQuotaSize(&value));
    return value;
}

template <typename D> void consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>::UploadQuotaSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings)->put_UploadQuotaSize(value));
}

template <typename D>
struct produce<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics> : produce_base<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
{
    HRESULT __stdcall Register(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Register(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterWithSettings(HSTRING id, ::IUnknown* settings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Register(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const*>(&settings)));
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
struct produce<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> : produce_base<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings> : produce_base<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
{
    HRESULT __stdcall get_StorageSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StorageSize(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StorageSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UploadQuotaSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UploadQuotaSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UploadQuotaSize(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UploadQuotaSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {

inline Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult PlatformTelemetryClient::Register(param::hstring const& id)
{
    return get_activation_factory<PlatformTelemetryClient, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>().Register(id);
}

inline Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult PlatformTelemetryClient::Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings)
{
    return get_activation_factory<PlatformTelemetryClient, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>().Register(id, settings);
}

inline PlatformTelemetryRegistrationSettings::PlatformTelemetryRegistrationSettings() :
    PlatformTelemetryRegistrationSettings(activate_instance<PlatformTelemetryRegistrationSettings>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics> {};

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> {};

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings> {};

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient> {};

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult> {};

template<> struct hash<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings> {};

}

WINRT_WARNING_POP
