// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::TraceReporting {

struct IPlatformDiagnosticActionsStatics;
struct IPlatformDiagnosticTraceInfo;
struct IPlatformDiagnosticTraceRuntimeInfo;
struct PlatformDiagnosticTraceInfo;
struct PlatformDiagnosticTraceRuntimeInfo;

}

namespace Windows::System::Diagnostics::TraceReporting {

struct IPlatformDiagnosticActionsStatics;
struct IPlatformDiagnosticTraceInfo;
struct IPlatformDiagnosticTraceRuntimeInfo;
struct PlatformDiagnosticActions;
struct PlatformDiagnosticTraceInfo;
struct PlatformDiagnosticTraceRuntimeInfo;

}

namespace Windows::System::Diagnostics::TraceReporting {

template <typename T> struct impl_IPlatformDiagnosticActionsStatics;
template <typename T> struct impl_IPlatformDiagnosticTraceInfo;
template <typename T> struct impl_IPlatformDiagnosticTraceRuntimeInfo;

}

namespace Windows::System::Diagnostics::TraceReporting {

enum class PlatformDiagnosticActionState
{
    Success = 0,
    FreeNetworkNotAvailable = 1,
    ACPowerNotAvailable = 2,
};

enum class PlatformDiagnosticEscalationType
{
    OnCompletion = 0,
    OnFailure = 1,
};

enum class PlatformDiagnosticEventBufferLatencies : unsigned
{
    Normal = 0x1,
    CostDeferred = 0x2,
    Realtime = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(PlatformDiagnosticEventBufferLatencies)

enum class PlatformDiagnosticTracePriority
{
    Normal = 0,
    UserElevated = 1,
};

enum class PlatformDiagnosticTraceSlotState
{
    NotRunning = 0,
    Running = 1,
    Throttled = 2,
};

enum class PlatformDiagnosticTraceSlotType
{
    Alternative = 0,
    AlwaysOn = 1,
    Mini = 2,
};

}

}
