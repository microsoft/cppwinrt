// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {

enum class PlatformTelemetryRegistrationStatus
{
    Success = 0,
    SettingsOutOfRange = 1,
    UnknownFailure = 2,
};

struct IPlatformTelemetryClientStatics;
struct IPlatformTelemetryRegistrationResult;
struct IPlatformTelemetryRegistrationSettings;
struct PlatformTelemetryClient;
struct PlatformTelemetryRegistrationResult;
struct PlatformTelemetryRegistrationSettings;

}

namespace winrt::impl {

template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>{ using type = enum_category; };
template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryClient>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings" }; };
template <> struct name<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>{ static constexpr auto & value{ L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationStatus" }; };
template <> struct guid<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>{ static constexpr GUID value{ 0x9BF3F25D,0xD5C3,0x4EEA,{ 0x8D,0xBE,0x9C,0x8D,0xBB,0x0D,0x9D,0x8F } }; };
template <> struct guid<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>{ static constexpr GUID value{ 0x4D8518AB,0x2292,0x49BD,{ 0xA1,0x5A,0x3D,0x71,0xD2,0x14,0x51,0x12 } }; };
template <> struct guid<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>{ static constexpr GUID value{ 0x819A8582,0xCA19,0x415E,{ 0xBB,0x79,0x9C,0x22,0x4B,0xFA,0x3A,0x73 } }; };
template <> struct default_interface<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult>{ using type = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult; };
template <> struct default_interface<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings>{ using type = Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings; };

template <typename D>
struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id) const;
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(param::hstring const& id, Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings const& settings) const;
};
template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics> { template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult
{
    Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus Status() const;
};
template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult> { template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings
{
    uint32_t StorageSize() const;
    void StorageSize(uint32_t value) const;
    uint32_t UploadQuotaSize() const;
    void UploadQuotaSize(uint32_t value) const;
};
template <> struct consume<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings> { template <typename D> using type = consume_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings<D>; };

template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Register(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RegisterWithSettings(HSTRING id, ::IUnknown* settings, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus>* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StorageSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_StorageSize(uint32_t value) = 0;
    virtual HRESULT __stdcall get_UploadQuotaSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_UploadQuotaSize(uint32_t value) = 0;
};};

}
