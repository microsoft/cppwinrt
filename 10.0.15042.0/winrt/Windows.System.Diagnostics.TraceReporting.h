// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.Diagnostics.TraceReporting.3.h"
#include "Windows.System.Diagnostics.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> : produce_base<D, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
{
    HRESULT __stdcall abi_IsScenarioEnabled(GUID scenarioId, bool * isActive) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isActive = detach_abi(this->shim().IsScenarioEnabled(scenarioId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryEscalateScenario(GUID scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, impl::abi_arg_in<hstring> outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, impl::abi_arg_in<Windows::Foundation::Collections::IMapView<hstring, hstring>> triggers, bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryEscalateScenario(scenarioId, escalationType, *reinterpret_cast<const hstring *>(&outputDirectory), timestampOutputDirectory, forceEscalationUpload, *reinterpret_cast<const Windows::Foundation::Collections::IMapView<hstring, hstring> *>(&triggers)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DownloadLatestSettingsForNamespace(impl::abi_arg_in<hstring> partner, impl::abi_arg_in<hstring> feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DownloadLatestSettingsForNamespace(*reinterpret_cast<const hstring *>(&partner), *reinterpret_cast<const hstring *>(&feature), isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetActiveScenarioList(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<GUID>> scenarioIds) noexcept override
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

    HRESULT __stdcall abi_ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ForceUpload(latency, uploadOverCostedNetwork, uploadOverBattery));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState * slotState) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *slotState = detach_abi(this->shim().IsTraceRunning(slotType, scenarioId, traceProfileHash));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, impl::abi_arg_out<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> traceRuntimeInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *traceRuntimeInfo = detach_abi(this->shim().GetActiveTraceRuntime(slotType));
            return S_OK;
        }
        catch (...)
        {
            *traceRuntimeInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>> traceInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *traceInfo = detach_abi(this->shim().GetKnownTraceList(slotType));
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
    HRESULT __stdcall get_ScenarioId(GUID * value) noexcept override
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

    HRESULT __stdcall get_ProfileHash(uint64_t * value) noexcept override
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

    HRESULT __stdcall get_IsExclusive(bool * value) noexcept override
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

    HRESULT __stdcall get_IsAutoLogger(bool * value) noexcept override
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

    HRESULT __stdcall get_MaxTraceDurationFileTime(int64_t * value) noexcept override
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

    HRESULT __stdcall get_Priority(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority * value) noexcept override
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
    HRESULT __stdcall get_RuntimeFileTime(int64_t * value) noexcept override
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

    HRESULT __stdcall get_EtwRuntimeFileTime(int64_t * value) noexcept override
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

namespace Windows::System::Diagnostics::TraceReporting {

template <typename D> GUID impl_IPlatformDiagnosticTraceInfo<D>::ScenarioId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_ScenarioId(&value));
    return value;
}

template <typename D> uint64_t impl_IPlatformDiagnosticTraceInfo<D>::ProfileHash() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_ProfileHash(&value));
    return value;
}

template <typename D> bool impl_IPlatformDiagnosticTraceInfo<D>::IsExclusive() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_IsExclusive(&value));
    return value;
}

template <typename D> bool impl_IPlatformDiagnosticTraceInfo<D>::IsAutoLogger() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_IsAutoLogger(&value));
    return value;
}

template <typename D> int64_t impl_IPlatformDiagnosticTraceInfo<D>::MaxTraceDurationFileTime() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_MaxTraceDurationFileTime(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority impl_IPlatformDiagnosticTraceInfo<D>::Priority() const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceInfo)->get_Priority(&value));
    return value;
}

template <typename D> int64_t impl_IPlatformDiagnosticTraceRuntimeInfo<D>::RuntimeFileTime() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceRuntimeInfo)->get_RuntimeFileTime(&value));
    return value;
}

template <typename D> int64_t impl_IPlatformDiagnosticTraceRuntimeInfo<D>::EtwRuntimeFileTime() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticTraceRuntimeInfo)->get_EtwRuntimeFileTime(&value));
    return value;
}

template <typename D> bool impl_IPlatformDiagnosticActionsStatics<D>::IsScenarioEnabled(GUID scenarioId) const
{
    bool isActive {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_IsScenarioEnabled(scenarioId, &isActive));
    return isActive;
}

template <typename D> bool impl_IPlatformDiagnosticActionsStatics<D>::TryEscalateScenario(GUID scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, hstring_view outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, map_view<hstring, hstring> triggers) const
{
    bool result {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_TryEscalateScenario(scenarioId, escalationType, get_abi(outputDirectory), timestampOutputDirectory, forceEscalationUpload, get_abi(triggers), &result));
    return result;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState impl_IPlatformDiagnosticActionsStatics<D>::DownloadLatestSettingsForNamespace(hstring_view partner, hstring_view feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState result {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_DownloadLatestSettingsForNamespace(get_abi(partner), get_abi(feature), isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery, &result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> impl_IPlatformDiagnosticActionsStatics<D>::GetActiveScenarioList() const
{
    Windows::Foundation::Collections::IVectorView<GUID> scenarioIds;
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_GetActiveScenarioList(put_abi(scenarioIds)));
    return scenarioIds;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState impl_IPlatformDiagnosticActionsStatics<D>::ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState result {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_ForceUpload(latency, uploadOverCostedNetwork, uploadOverBattery, &result));
    return result;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState impl_IPlatformDiagnosticActionsStatics<D>::IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState slotState {};
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_IsTraceRunning(slotType, scenarioId, traceProfileHash, &slotState));
    return slotState;
}

template <typename D> Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo impl_IPlatformDiagnosticActionsStatics<D>::GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType) const
{
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo traceRuntimeInfo { nullptr };
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_GetActiveTraceRuntime(slotType, put_abi(traceRuntimeInfo)));
    return traceRuntimeInfo;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> impl_IPlatformDiagnosticActionsStatics<D>::GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType) const
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> traceInfo;
    check_hresult(WINRT_SHIM(IPlatformDiagnosticActionsStatics)->abi_GetKnownTraceList(slotType, put_abi(traceInfo)));
    return traceInfo;
}

inline bool PlatformDiagnosticActions::IsScenarioEnabled(GUID scenarioId)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().IsScenarioEnabled(scenarioId);
}

inline bool PlatformDiagnosticActions::TryEscalateScenario(GUID scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, hstring_view outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, map_view<hstring, hstring> triggers)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().TryEscalateScenario(scenarioId, escalationType, outputDirectory, timestampOutputDirectory, forceEscalationUpload, triggers);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState PlatformDiagnosticActions::DownloadLatestSettingsForNamespace(hstring_view partner, hstring_view feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().DownloadLatestSettingsForNamespace(partner, feature, isScenarioNamespace, downloadOverCostedNetwork, downloadOverBattery);
}

inline Windows::Foundation::Collections::IVectorView<GUID> PlatformDiagnosticActions::GetActiveScenarioList()
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().GetActiveScenarioList();
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState PlatformDiagnosticActions::ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().ForceUpload(latency, uploadOverCostedNetwork, uploadOverBattery);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState PlatformDiagnosticActions::IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().IsTraceRunning(slotType, scenarioId, traceProfileHash);
}

inline Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo PlatformDiagnosticActions::GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().GetActiveTraceRuntime(slotType);
}

inline Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> PlatformDiagnosticActions::GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType)
{
    return get_activation_factory<PlatformDiagnosticActions, IPlatformDiagnosticActionsStatics>().GetKnownTraceList(slotType);
}

}

}

template<>
struct std::hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
