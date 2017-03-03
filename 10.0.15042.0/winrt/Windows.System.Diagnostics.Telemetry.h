// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.System.Diagnostics.Telemetry.3.h"
#include "Windows.System.Diagnostics.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics> : produce_base<D, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
{
    HRESULT __stdcall abi_Register(impl::abi_arg_in<hstring> id, impl::abi_arg_out<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Register(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterWithSettings(impl::abi_arg_in<hstring> id, impl::abi_arg_in<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings> settings, impl::abi_arg_out<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Register(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings *>(&settings)));
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
    HRESULT __stdcall get_Status(Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus * value) noexcept override
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
    HRESULT __stdcall get_StorageSize(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_UploadQuotaSize(uint32_t * value) noexcept override
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

namespace Windows::System::Diagnostics::Telemetry {

template <typename D> uint32_t impl_IPlatformTelemetryRegistrationSettings<D>::StorageSize() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IPlatformTelemetryRegistrationSettings)->get_StorageSize(&value));
    return value;
}

template <typename D> void impl_IPlatformTelemetryRegistrationSettings<D>::StorageSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IPlatformTelemetryRegistrationSettings)->put_StorageSize(value));
}

template <typename D> uint32_t impl_IPlatformTelemetryRegistrationSettings<D>::UploadQuotaSize() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IPlatformTelemetryRegistrationSettings)->get_UploadQuotaSize(&value));
    return value;
}

template <typename D> void impl_IPlatformTelemetryRegistrationSettings<D>::UploadQuotaSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(IPlatformTelemetryRegistrationSettings)->put_UploadQuotaSize(value));
}

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus impl_IPlatformTelemetryRegistrationResult<D>::Status() const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus value {};
    check_hresult(WINRT_SHIM(IPlatformTelemetryRegistrationResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult impl_IPlatformTelemetryClientStatics<D>::Register(hstring_view id) const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult result { nullptr };
    check_hresult(WINRT_SHIM(IPlatformTelemetryClientStatics)->abi_Register(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult impl_IPlatformTelemetryClientStatics<D>::Register(hstring_view id, const Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings & settings) const
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult result { nullptr };
    check_hresult(WINRT_SHIM(IPlatformTelemetryClientStatics)->abi_RegisterWithSettings(get_abi(id), get_abi(settings), put_abi(result)));
    return result;
}

inline Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult PlatformTelemetryClient::Register(hstring_view id)
{
    return get_activation_factory<PlatformTelemetryClient, IPlatformTelemetryClientStatics>().Register(id);
}

inline Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult PlatformTelemetryClient::Register(hstring_view id, const Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings & settings)
{
    return get_activation_factory<PlatformTelemetryClient, IPlatformTelemetryClientStatics>().Register(id, settings);
}

inline PlatformTelemetryRegistrationSettings::PlatformTelemetryRegistrationSettings() :
    PlatformTelemetryRegistrationSettings(activate_instance<PlatformTelemetryRegistrationSettings>())
{}

}

}

template<>
struct std::hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
