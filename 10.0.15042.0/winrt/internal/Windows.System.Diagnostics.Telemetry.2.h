// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.Telemetry.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Diagnostics::Telemetry {

struct IPlatformTelemetryClientStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPlatformTelemetryClientStatics>
{
    IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformTelemetryRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume<IPlatformTelemetryRegistrationResult>
{
    IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IPlatformTelemetryRegistrationSettings :
    Windows::Foundation::IInspectable,
    impl::consume<IPlatformTelemetryRegistrationSettings>
{
    IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
};

}

}
