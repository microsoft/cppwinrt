// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::Telemetry {

struct IPlatformTelemetryClientStatics;
struct IPlatformTelemetryRegistrationResult;
struct IPlatformTelemetryRegistrationSettings;
struct PlatformTelemetryRegistrationResult;
struct PlatformTelemetryRegistrationSettings;

}

namespace Windows::System::Diagnostics::Telemetry {

struct IPlatformTelemetryClientStatics;
struct IPlatformTelemetryRegistrationResult;
struct IPlatformTelemetryRegistrationSettings;
struct PlatformTelemetryClient;
struct PlatformTelemetryRegistrationResult;
struct PlatformTelemetryRegistrationSettings;

}

namespace Windows::System::Diagnostics::Telemetry {

template <typename T> struct impl_IPlatformTelemetryClientStatics;
template <typename T> struct impl_IPlatformTelemetryRegistrationResult;
template <typename T> struct impl_IPlatformTelemetryRegistrationSettings;

}

namespace Windows::System::Diagnostics::Telemetry {

enum class PlatformTelemetryRegistrationStatus
{
    Success = 0,
    SettingsOutOfRange = 1,
    UnknownFailure = 2,
};

}

}
