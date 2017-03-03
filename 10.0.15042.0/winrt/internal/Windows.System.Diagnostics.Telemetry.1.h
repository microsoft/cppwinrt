// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.Diagnostics.Telemetry.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::Telemetry {

struct __declspec(uuid("9bf3f25d-d5c3-4eea-8dbe-9c8dbb0d9d8f")) __declspec(novtable) IPlatformTelemetryClientStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Register(hstring id, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult ** result) = 0;
    virtual HRESULT __stdcall abi_RegisterWithSettings(hstring id, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings * settings, Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult ** result) = 0;
};

struct __declspec(uuid("4d8518ab-2292-49bd-a15a-3d71d2145112")) __declspec(novtable) IPlatformTelemetryRegistrationResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus * value) = 0;
};

struct __declspec(uuid("819a8582-ca19-415e-bb79-9c224bfa3a73")) __declspec(novtable) IPlatformTelemetryRegistrationSettings : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_StorageSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_StorageSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_UploadQuotaSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_UploadQuotaSize(uint32_t value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult> { using default_interface = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult; };
template <> struct traits<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings> { using default_interface = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings; };

}

namespace Windows::System::Diagnostics::Telemetry {

template <typename D>
struct WINRT_EBO impl_IPlatformTelemetryClientStatics
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(hstring_view id) const;
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(hstring_view id, const Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings & settings) const;
};

template <typename D>
struct WINRT_EBO impl_IPlatformTelemetryRegistrationResult
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IPlatformTelemetryRegistrationSettings
{
    uint32_t StorageSize() const;
    void StorageSize(uint32_t value) const;
    uint32_t UploadQuotaSize() const;
    void UploadQuotaSize(uint32_t value) const;
};

}

namespace impl {

template <> struct traits<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>
{
    using abi = ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics;
    template <typename D> using consume = Windows::System::Diagnostics::Telemetry::impl_IPlatformTelemetryClientStatics<D>;
};

template <> struct traits<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>
{
    using abi = ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult;
    template <typename D> using consume = Windows::System::Diagnostics::Telemetry::impl_IPlatformTelemetryRegistrationResult<D>;
};

template <> struct traits<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>
{
    using abi = ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings;
    template <typename D> using consume = Windows::System::Diagnostics::Telemetry::impl_IPlatformTelemetryRegistrationSettings<D>;
};

template <> struct traits<Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient"; }
};

template <> struct traits<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>
{
    using abi = ABI::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult"; }
};

template <> struct traits<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>
{
    using abi = ABI::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings"; }
};

}

}
