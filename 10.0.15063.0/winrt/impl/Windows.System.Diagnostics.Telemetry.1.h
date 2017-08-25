// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry {

struct WINRT_EBO IPlatformTelemetryClientStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryClientStatics>
{
    IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlatformTelemetryRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryRegistrationResult>
{
    IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlatformTelemetryRegistrationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformTelemetryRegistrationSettings>
{
    IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
};

}
