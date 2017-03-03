// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.Telemetry.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Diagnostics::Telemetry {

struct PlatformTelemetryClient
{
    PlatformTelemetryClient() = delete;
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(hstring_view id);
    static Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationResult Register(hstring_view id, const Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationSettings & settings);
};

struct WINRT_EBO PlatformTelemetryRegistrationResult :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult
{
    PlatformTelemetryRegistrationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlatformTelemetryRegistrationSettings :
    Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings
{
    PlatformTelemetryRegistrationSettings(std::nullptr_t) noexcept {}
    PlatformTelemetryRegistrationSettings();
};

}

}
