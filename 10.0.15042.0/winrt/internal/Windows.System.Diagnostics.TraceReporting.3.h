// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.TraceReporting.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Diagnostics::TraceReporting {

struct PlatformDiagnosticActions
{
    PlatformDiagnosticActions() = delete;
    static bool IsScenarioEnabled(GUID scenarioId);
    static bool TryEscalateScenario(GUID scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, hstring_view outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, map_view<hstring, hstring> triggers);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState DownloadLatestSettingsForNamespace(hstring_view partner, hstring_view feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery);
    static Windows::Foundation::Collections::IVectorView<GUID> GetActiveScenarioList();
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType);
    static Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType);
};

struct WINRT_EBO PlatformDiagnosticTraceInfo :
    Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo
{
    PlatformDiagnosticTraceInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlatformDiagnosticTraceRuntimeInfo :
    Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo
{
    PlatformDiagnosticTraceRuntimeInfo(std::nullptr_t) noexcept {}
};

}

}
