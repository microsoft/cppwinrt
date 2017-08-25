// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.Diagnostics.TraceReporting.2.h"
#include "winrt/Windows.System.Diagnostics.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::IsScenarioEnabled(GUID const& scenarioId) const
{
    bool isActive{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->IsScenarioEnabled(get_abi(scenarioId), &isActive));
    return isActive;
}

template <typename D> bool consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::TryEscalateScenario(GUID const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->TryEscalateScenario(get_abi(scenarioId), get_abi(escalationType), get_abi(outputDirectory), timestampOutputDirectory, forceEscalationUpload, get_abi(triggers), &result));
    return result;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState result{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->DownloadLatestSettingsForNamespace(get_abi(partner), get_abi(feature), isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::GetActiveScenarioList() const
{
    Windows::Foundation::Collections::IVectorView<GUID> scenarioIds{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->GetActiveScenarioList(put_abi(scenarioIds)));
    return scenarioIds;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState result{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->ForceUpload(get_abi(latency), uploadOverCostedNetwork, uploadOverBattery, put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, GUID const& scenarioId, uint64_t traceProfileHash) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState slotState{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->IsTraceRunning(get_abi(slotType), get_abi(scenarioId), traceProfileHash, put_abi(slotState)));
    return slotState;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo traceRuntimeInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->GetActiveTraceRuntime(get_abi(slotType), put_abi(traceRuntimeInfo)));
    return traceRuntimeInfo;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>::GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> traceInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics)->GetKnownTraceList(get_abi(slotType), put_abi(traceInfo)));
    return traceInfo;
}

template <typename D> GUID consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::ScenarioId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_ScenarioId(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::ProfileHash() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_ProfileHash(&value));
    return value;
}

template <typename D> bool consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::IsExclusive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_IsExclusive(&value));
    return value;
}

template <typename D> bool consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::IsAutoLogger() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_IsAutoLogger(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::MaxTraceDurationFileTime() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_MaxTraceDurationFileTime(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>::Priority() const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo)->get_Priority(put_abi(value)));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo<D>::RuntimeFileTime() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo)->get_RuntimeFileTime(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo<D>::EtwRuntimeFileTime() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo)->get_EtwRuntimeFileTime(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> : produce_base<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
{
    HRESULT __stdcall IsScenarioEnabled(abi_t<GUID> scenarioId, bool* isActive) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isActive = detach_abi(this->shim().IsScenarioEnabled(*reinterpret_cast<GUID const*>(&scenarioId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEscalateScenario(abi_t<GUID> scenarioId, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType> escalationType, HSTRING outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, ::IUnknown* triggers, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryEscalateScenario(*reinterpret_cast<GUID const*>(&scenarioId), *reinterpret_cast<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const*>(&escalationType), *reinterpret_cast<hstring const*>(&outputDirectory), timestampOutputDirectory, forceEscalationUpload, *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&triggers)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DownloadLatestSettingsForNamespace(HSTRING partner, HSTRING feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DownloadLatestSettingsForNamespace(*reinterpret_cast<hstring const*>(&partner), *reinterpret_cast<hstring const*>(&feature), isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetActiveScenarioList(::IUnknown** scenarioIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scenarioIds = detach_abi(this->shim().GetActiveScenarioList());
            return S_OK;
        }
        catch (...)
        {
            *scenarioIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ForceUpload(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies> latency, bool uploadOverCostedNetwork, bool uploadOverBattery, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ForceUpload(*reinterpret_cast<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const*>(&latency), uploadOverCostedNetwork, uploadOverBattery));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsTraceRunning(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, abi_t<GUID> scenarioId, uint64_t traceProfileHash, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>* slotState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *slotState = detach_abi(this->shim().IsTraceRunning(*reinterpret_cast<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const*>(&slotType), *reinterpret_cast<GUID const*>(&scenarioId), traceProfileHash));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetActiveTraceRuntime(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, ::IUnknown** traceRuntimeInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *traceRuntimeInfo = detach_abi(this->shim().GetActiveTraceRuntime(*reinterpret_cast<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const*>(&slotType)));
            return S_OK;
        }
        catch (...)
        {
            *traceRuntimeInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetKnownTraceList(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, ::IUnknown** traceInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *traceInfo = detach_abi(this->shim().GetKnownTraceList(*reinterpret_cast<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const*>(&slotType)));
            return S_OK;
        }
        catch (...)
        {
            *traceInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo> : produce_base<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
{
    HRESULT __stdcall get_ScenarioId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScenarioId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProfileHash(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProfileHash());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExclusive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsExclusive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAutoLogger(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAutoLogger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxTraceDurationFileTime(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxTraceDurationFileTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Priority(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> : produce_base<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
{
    HRESULT __stdcall get_RuntimeFileTime(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RuntimeFileTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EtwRuntimeFileTime(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EtwRuntimeFileTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::TraceReporting {

inline bool PlatformDiagnosticActions::IsScenarioEnabled(GUID const& scenarioId)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().IsScenarioEnabled(scenarioId);
}

inline bool PlatformDiagnosticActions::TryEscalateScenario(GUID const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().TryEscalateScenario(scenarioId, escalationType, outputDirectory, timestampOutputDirectory, forceEscalationUpload, triggers);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState PlatformDiagnosticActions::DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().DownloadLatestSettingsForNamespace(partner, feature, isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery);
}

inline Windows::Foundation::Collections::IVectorView<GUID> PlatformDiagnosticActions::GetActiveScenarioList()
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().GetActiveScenarioList();
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState PlatformDiagnosticActions::ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().ForceUpload(latency, uploadOverCostedNetwork, uploadOverBattery);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState PlatformDiagnosticActions::IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, GUID const& scenarioId, uint64_t traceProfileHash)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().IsTraceRunning(slotType, scenarioId, traceProfileHash);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo PlatformDiagnosticActions::GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().GetActiveTraceRuntime(slotType);
}

inline Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> PlatformDiagnosticActions::GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType)
{
    return get_activation_factory<PlatformDiagnosticActions, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>().GetKnownTraceList(slotType);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> {};

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo> {};

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> {};

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions> {};

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> {};

template<> struct hash<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo> {};

}

WINRT_WARNING_POP
