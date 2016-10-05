// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Networking.Connectivity.3.h"
#include "Windows.Networking.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Networking::Connectivity {

template <typename L> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(L lambda) :
    NetworkStatusChangedEventHandler(impl::make_delegate<impl_NetworkStatusChangedEventHandler<L>, NetworkStatusChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(F * function) :
    NetworkStatusChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(O * object, M method) :
    NetworkStatusChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void NetworkStatusChangedEventHandler::operator()(const Windows::IInspectable & sender) const
{
    check_hresult((*this)->abi_Invoke(get(sender)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IAttributedNetworkUsage> : produce_base<D, Windows::Networking::Connectivity::IAttributedNetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionThumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributionThumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ICellularApnContext> : produce_base<D, Windows::Networking::Connectivity::ICellularApnContext>
{
    HRESULT __stdcall get_ProviderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProviderId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ProviderId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessPointName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AccessPointName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().UserName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Password(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Password(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCompressionEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCompressionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCompressionEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsCompressionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType value) noexcept override
    {
        try
        {
            this->shim().AuthenticationType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionCost> : produce_base<D, Windows::Networking::Connectivity::IConnectionCost>
{
    HRESULT __stdcall get_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roaming(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Roaming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverDataLimit(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApproachingDataLimit(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApproachingDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionCost2> : produce_base<D, Windows::Networking::Connectivity::IConnectionCost2>
{
    HRESULT __stdcall get_BackgroundDataUsageRestricted(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundDataUsageRestricted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile>
{
    HRESULT __stdcall get_ProfileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNetworkConnectivityLevel(Windows::Networking::Connectivity::NetworkConnectivityLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNetworkNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNetworkNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConnectionCost(abi_arg_out<Windows::Networking::Connectivity::IConnectionCost> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataPlanStatus(abi_arg_out<Windows::Networking::Connectivity::IDataPlanStatus> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDataPlanStatus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapter(abi_arg_out<Windows::Networking::Connectivity::INetworkAdapter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalUsage(abi_arg_in<Windows::Foundation::DateTime> StartTime, abi_arg_in<Windows::Foundation::DateTime> EndTime, abi_arg_out<Windows::Networking::Connectivity::IDataUsage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLocalUsage(*reinterpret_cast<const Windows::Foundation::DateTime *>(&StartTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&EndTime)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalUsagePerRoamingStates(abi_arg_in<Windows::Foundation::DateTime> StartTime, abi_arg_in<Windows::Foundation::DateTime> EndTime, Windows::Networking::Connectivity::RoamingStates States, abi_arg_out<Windows::Networking::Connectivity::IDataUsage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLocalUsage(*reinterpret_cast<const Windows::Foundation::DateTime *>(&StartTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&EndTime), States));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkSecuritySettings(abi_arg_out<Windows::Networking::Connectivity::INetworkSecuritySettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkSecuritySettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile2> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile2>
{
    HRESULT __stdcall get_IsWwanConnectionProfile(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWwanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WwanConnectionProfileDetails(abi_arg_out<Windows::Networking::Connectivity::IWwanConnectionProfileDetails> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WwanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WlanConnectionProfileDetails(abi_arg_out<Windows::Networking::Connectivity::IWlanConnectionProfileDetails> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WlanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(abi_arg_out<Windows::Foundation::IReference<GUID>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSignalBars(abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSignalBars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDomainConnectivityLevel(Windows::Networking::Connectivity::DomainConnectivityLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNetworkUsageAsync(abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_in<Windows::Foundation::DateTime> endTime, Windows::Networking::Connectivity::DataUsageGranularity granularity, abi_arg_in<Windows::Networking::Connectivity::NetworkUsageStates> states, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNetworkUsageAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&endTime), granularity, *reinterpret_cast<const Windows::Networking::Connectivity::NetworkUsageStates *>(&states)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConnectivityIntervalsAsync(abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_in<Windows::Foundation::DateTime> endTime, abi_arg_in<Windows::Networking::Connectivity::NetworkUsageStates> states, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectivityIntervalsAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&endTime), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkUsageStates *>(&states)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile3> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile3>
{
    HRESULT __stdcall abi_GetAttributedNetworkUsageAsync(abi_arg_in<Windows::Foundation::DateTime> startTime, abi_arg_in<Windows::Foundation::DateTime> endTime, abi_arg_in<Windows::Networking::Connectivity::NetworkUsageStates> states, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAttributedNetworkUsageAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&startTime), *reinterpret_cast<const Windows::Foundation::DateTime *>(&endTime), *reinterpret_cast<const Windows::Networking::Connectivity::NetworkUsageStates *>(&states)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfileFilter> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfileFilter>
{
    HRESULT __stdcall put_IsConnected(bool value) noexcept override
    {
        try
        {
            this->shim().IsConnected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsConnected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsWwanConnectionProfile(bool value) noexcept override
    {
        try
        {
            this->shim().IsWwanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWwanConnectionProfile(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWwanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsWlanConnectionProfile(bool value) noexcept override
    {
        try
        {
            this->shim().IsWlanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType value) noexcept override
    {
        try
        {
            this->shim().NetworkCostType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceProviderGuid(abi_arg_in<Windows::Foundation::IReference<GUID>> value) noexcept override
    {
        try
        {
            this->shim().ServiceProviderGuid(*reinterpret_cast<const Windows::Foundation::IReference<GUID> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(abi_arg_out<Windows::Foundation::IReference<GUID>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfileFilter2> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfileFilter2>
{
    HRESULT __stdcall put_IsRoaming(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().IsRoaming(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRoaming(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRoaming());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverDataLimit(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().IsOverDataLimit(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverDataLimit(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsBackgroundDataUsageRestricted(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().IsBackgroundDataUsageRestricted(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBackgroundDataUsageRestricted(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsBackgroundDataUsageRestricted());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionSession> : produce_base<D, Windows::Networking::Connectivity::IConnectionSession>
{
    HRESULT __stdcall get_ConnectionProfile(abi_arg_out<Windows::Networking::Connectivity::IConnectionProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectivityInterval> : produce_base<D, Windows::Networking::Connectivity::IConnectivityInterval>
{
    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> startTime) noexcept override
    {
        try
        {
            *startTime = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(abi_arg_out<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            *duration = detach(this->shim().ConnectionDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectivityManagerStatics> : produce_base<D, Windows::Networking::Connectivity::IConnectivityManagerStatics>
{
    HRESULT __stdcall abi_AcquireConnectionAsync(abi_arg_in<Windows::Networking::Connectivity::ICellularApnContext> cellularApnContext, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AcquireConnectionAsync(*reinterpret_cast<const Windows::Networking::Connectivity::CellularApnContext *>(&cellularApnContext)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddHttpRoutePolicy(abi_arg_in<Windows::Networking::Connectivity::IRoutePolicy> routePolicy) noexcept override
    {
        try
        {
            this->shim().AddHttpRoutePolicy(*reinterpret_cast<const Windows::Networking::Connectivity::RoutePolicy *>(&routePolicy));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveHttpRoutePolicy(abi_arg_in<Windows::Networking::Connectivity::IRoutePolicy> routePolicy) noexcept override
    {
        try
        {
            this->shim().RemoveHttpRoutePolicy(*reinterpret_cast<const Windows::Networking::Connectivity::RoutePolicy *>(&routePolicy));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataPlanStatus> : produce_base<D, Windows::Networking::Connectivity::IDataPlanStatus>
{
    HRESULT __stdcall get_DataPlanUsage(abi_arg_out<Windows::Networking::Connectivity::IDataPlanUsage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataPlanUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataLimitInMegabytes(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataLimitInMegabytes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecond(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBitsPerSecond(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextBillingCycle(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NextBillingCycle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxTransferSizeInMegabytes(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxTransferSizeInMegabytes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataPlanUsage> : produce_base<D, Windows::Networking::Connectivity::IDataPlanUsage>
{
    HRESULT __stdcall get_MegabytesUsed(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MegabytesUsed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataUsage> : produce_base<D, Windows::Networking::Connectivity::IDataUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IIPInformation> : produce_base<D, Windows::Networking::Connectivity::IIPInformation>
{
    HRESULT __stdcall get_NetworkAdapter(abi_arg_out<Windows::Networking::Connectivity::INetworkAdapter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrefixLength(abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrefixLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ILanIdentifier> : produce_base<D, Windows::Networking::Connectivity::ILanIdentifier>
{
    HRESULT __stdcall get_InfrastructureId(abi_arg_out<Windows::Networking::Connectivity::ILanIdentifierData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InfrastructureId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PortId(abi_arg_out<Windows::Networking::Connectivity::ILanIdentifierData> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PortId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ILanIdentifierData> : produce_base<D, Windows::Networking::Connectivity::ILanIdentifierData>
{
    HRESULT __stdcall get_Type(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint8_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkAdapter> : produce_base<D, Windows::Networking::Connectivity::INetworkAdapter>
{
    HRESULT __stdcall get_OutboundMaxBitsPerSecond(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundMaxBitsPerSecond(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IanaInterfaceType(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IanaInterfaceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkItem(abi_arg_out<Windows::Networking::Connectivity::INetworkItem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConnectedProfileAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectedProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkInformationStatics> : produce_base<D, Windows::Networking::Connectivity::INetworkInformationStatics>
{
    HRESULT __stdcall abi_GetConnectionProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectionProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInternetConnectionProfile(abi_arg_out<Windows::Networking::Connectivity::IConnectionProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLanIdentifiers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLanIdentifiers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHostNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHostNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProxyConfigurationAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetProxyConfigurationAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSortedEndpointPairs(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair>> destinationList, Windows::Networking::HostNameSortOptions sortOptions, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSortedEndpointPairs(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair> *>(&destinationList), sortOptions));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NetworkStatusChanged(abi_arg_in<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler> networkStatusHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().NetworkStatusChanged(*reinterpret_cast<const Windows::Networking::Connectivity::NetworkStatusChangedEventHandler *>(&networkStatusHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NetworkStatusChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().NetworkStatusChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkInformationStatics2> : produce_base<D, Windows::Networking::Connectivity::INetworkInformationStatics2>
{
    HRESULT __stdcall abi_FindConnectionProfilesAsync(abi_arg_in<Windows::Networking::Connectivity::IConnectionProfileFilter> pProfileFilter, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindConnectionProfilesAsync(*reinterpret_cast<const Windows::Networking::Connectivity::ConnectionProfileFilter *>(&pProfileFilter)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkItem> : produce_base<D, Windows::Networking::Connectivity::INetworkItem>
{
    HRESULT __stdcall get_NetworkId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNetworkTypes(Windows::Networking::Connectivity::NetworkTypes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNetworkTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkSecuritySettings> : produce_base<D, Windows::Networking::Connectivity::INetworkSecuritySettings>
{
    HRESULT __stdcall get_NetworkAuthenticationType(Windows::Networking::Connectivity::NetworkAuthenticationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkEncryptionType(Windows::Networking::Connectivity::NetworkEncryptionType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkEncryptionType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : produce_base<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails>
{
    HRESULT __stdcall get_HasNewInternetConnectionProfile(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewConnectionCost(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewNetworkConnectivityLevel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewDomainConnectivityLevel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewHostNameList(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewHostNameList());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewWwanRegistrationState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewWwanRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : produce_base<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
{
    HRESULT __stdcall get_HasNewTetheringOperationalState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewTetheringOperationalState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewTetheringClientCount(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasNewTetheringClientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkUsage> : produce_base<D, Windows::Networking::Connectivity::INetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(abi_arg_out<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            *duration = detach(this->shim().ConnectionDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IProxyConfiguration> : produce_base<D, Windows::Networking::Connectivity::IProxyConfiguration>
{
    HRESULT __stdcall get_ProxyUris(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProxyUris());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanConnectDirectly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanConnectDirectly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IRoutePolicy> : produce_base<D, Windows::Networking::Connectivity::IRoutePolicy>
{
    HRESULT __stdcall get_ConnectionProfile(abi_arg_out<Windows::Networking::Connectivity::IConnectionProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HostName(abi_arg_out<Windows::Networking::IHostName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HostNameType(Windows::Networking::DomainNameType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HostNameType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IRoutePolicyFactory> : produce_base<D, Windows::Networking::Connectivity::IRoutePolicyFactory>
{
    HRESULT __stdcall abi_CreateRoutePolicy(abi_arg_in<Windows::Networking::Connectivity::IConnectionProfile> connectionProfile, abi_arg_in<Windows::Networking::IHostName> hostName, Windows::Networking::DomainNameType type, abi_arg_out<Windows::Networking::Connectivity::IRoutePolicy> routePolicy) noexcept override
    {
        try
        {
            *routePolicy = detach(this->shim().CreateRoutePolicy(*reinterpret_cast<const Windows::Networking::Connectivity::ConnectionProfile *>(&connectionProfile), *reinterpret_cast<const Windows::Networking::HostName *>(&hostName), type));
            return S_OK;
        }
        catch (...)
        {
            *routePolicy = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : produce_base<D, Windows::Networking::Connectivity::IWlanConnectionProfileDetails>
{
    HRESULT __stdcall abi_GetConnectedSsid(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetConnectedSsid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : produce_base<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails>
{
    HRESULT __stdcall get_HomeProviderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HomeProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNetworkRegistrationState(Windows::Networking::Connectivity::WwanNetworkRegistrationState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetNetworkRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentDataClass(Windows::Networking::Connectivity::WwanDataClass * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentDataClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Networking::Connectivity {

template <typename D> uint64_t impl_IDataUsage<D>::BytesSent() const
{
    uint64_t value {};
    check_hresult(static_cast<const IDataUsage &>(static_cast<const D &>(*this))->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t impl_IDataUsage<D>::BytesReceived() const
{
    uint64_t value {};
    check_hresult(static_cast<const IDataUsage &>(static_cast<const D &>(*this))->get_BytesReceived(&value));
    return value;
}

template <typename D> uint32_t impl_IDataPlanUsage<D>::MegabytesUsed() const
{
    uint32_t value {};
    check_hresult(static_cast<const IDataPlanUsage &>(static_cast<const D &>(*this))->get_MegabytesUsed(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IDataPlanUsage<D>::LastSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IDataPlanUsage &>(static_cast<const D &>(*this))->get_LastSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataPlanUsage impl_IDataPlanStatus<D>::DataPlanUsage() const
{
    Windows::Networking::Connectivity::DataPlanUsage value { nullptr };
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_DataPlanUsage(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IDataPlanStatus<D>::DataLimitInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_DataLimitInMegabytes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IDataPlanStatus<D>::InboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_InboundBitsPerSecond(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IDataPlanStatus<D>::OutboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_OutboundBitsPerSecond(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IDataPlanStatus<D>::NextBillingCycle() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_NextBillingCycle(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IDataPlanStatus<D>::MaxTransferSizeInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IDataPlanStatus &>(static_cast<const D &>(*this))->get_MaxTransferSizeInMegabytes(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType impl_IConnectionCost<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value {};
    check_hresult(static_cast<const IConnectionCost &>(static_cast<const D &>(*this))->get_NetworkCostType(&value));
    return value;
}

template <typename D> bool impl_IConnectionCost<D>::Roaming() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionCost &>(static_cast<const D &>(*this))->get_Roaming(&value));
    return value;
}

template <typename D> bool impl_IConnectionCost<D>::OverDataLimit() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionCost &>(static_cast<const D &>(*this))->get_OverDataLimit(&value));
    return value;
}

template <typename D> bool impl_IConnectionCost<D>::ApproachingDataLimit() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionCost &>(static_cast<const D &>(*this))->get_ApproachingDataLimit(&value));
    return value;
}

template <typename D> bool impl_IConnectionCost2<D>::BackgroundDataUsageRestricted() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionCost2 &>(static_cast<const D &>(*this))->get_BackgroundDataUsageRestricted(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAuthenticationType impl_INetworkSecuritySettings<D>::NetworkAuthenticationType() const
{
    Windows::Networking::Connectivity::NetworkAuthenticationType value {};
    check_hresult(static_cast<const INetworkSecuritySettings &>(static_cast<const D &>(*this))->get_NetworkAuthenticationType(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkEncryptionType impl_INetworkSecuritySettings<D>::NetworkEncryptionType() const
{
    Windows::Networking::Connectivity::NetworkEncryptionType value {};
    check_hresult(static_cast<const INetworkSecuritySettings &>(static_cast<const D &>(*this))->get_NetworkEncryptionType(&value));
    return value;
}

template <typename D> hstring impl_IConnectionProfile<D>::ProfileName() const
{
    hstring value;
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->get_ProfileName(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkConnectivityLevel impl_IConnectionProfile<D>::GetNetworkConnectivityLevel() const
{
    Windows::Networking::Connectivity::NetworkConnectivityLevel value {};
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetNetworkConnectivityLevel(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IConnectionProfile<D>::GetNetworkNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetNetworkNames(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionCost impl_IConnectionProfile<D>::GetConnectionCost() const
{
    Windows::Networking::Connectivity::ConnectionCost value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetConnectionCost(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataPlanStatus impl_IConnectionProfile<D>::GetDataPlanStatus() const
{
    Windows::Networking::Connectivity::DataPlanStatus value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetDataPlanStatus(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter impl_IConnectionProfile<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->get_NetworkAdapter(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage impl_IConnectionProfile<D>::GetLocalUsage(const Windows::Foundation::DateTime & StartTime, const Windows::Foundation::DateTime & EndTime) const
{
    Windows::Networking::Connectivity::DataUsage value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetLocalUsage(get(StartTime), get(EndTime), put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage impl_IConnectionProfile<D>::GetLocalUsage(const Windows::Foundation::DateTime & StartTime, const Windows::Foundation::DateTime & EndTime, Windows::Networking::Connectivity::RoamingStates States) const
{
    Windows::Networking::Connectivity::DataUsage value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->abi_GetLocalUsagePerRoamingStates(get(StartTime), get(EndTime), States, put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkSecuritySettings impl_IConnectionProfile<D>::NetworkSecuritySettings() const
{
    Windows::Networking::Connectivity::NetworkSecuritySettings value { nullptr };
    check_hresult(static_cast<const IConnectionProfile &>(static_cast<const D &>(*this))->get_NetworkSecuritySettings(put(value)));
    return value;
}

template <typename D> hstring impl_IWlanConnectionProfileDetails<D>::GetConnectedSsid() const
{
    hstring value;
    check_hresult(static_cast<const IWlanConnectionProfileDetails &>(static_cast<const D &>(*this))->abi_GetConnectedSsid(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IConnectivityInterval<D>::StartTime() const
{
    Windows::Foundation::DateTime startTime {};
    check_hresult(static_cast<const IConnectivityInterval &>(static_cast<const D &>(*this))->get_StartTime(put(startTime)));
    return startTime;
}

template <typename D> Windows::Foundation::TimeSpan impl_IConnectivityInterval<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration {};
    check_hresult(static_cast<const IConnectivityInterval &>(static_cast<const D &>(*this))->get_ConnectionDuration(put(duration)));
    return duration;
}

template <typename D> uint64_t impl_INetworkUsage<D>::BytesSent() const
{
    uint64_t value {};
    check_hresult(static_cast<const INetworkUsage &>(static_cast<const D &>(*this))->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t impl_INetworkUsage<D>::BytesReceived() const
{
    uint64_t value {};
    check_hresult(static_cast<const INetworkUsage &>(static_cast<const D &>(*this))->get_BytesReceived(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_INetworkUsage<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration {};
    check_hresult(static_cast<const INetworkUsage &>(static_cast<const D &>(*this))->get_ConnectionDuration(put(duration)));
    return duration;
}

template <typename D> uint64_t impl_IAttributedNetworkUsage<D>::BytesSent() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAttributedNetworkUsage &>(static_cast<const D &>(*this))->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t impl_IAttributedNetworkUsage<D>::BytesReceived() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAttributedNetworkUsage &>(static_cast<const D &>(*this))->get_BytesReceived(&value));
    return value;
}

template <typename D> hstring impl_IAttributedNetworkUsage<D>::AttributionId() const
{
    hstring value;
    check_hresult(static_cast<const IAttributedNetworkUsage &>(static_cast<const D &>(*this))->get_AttributionId(put(value)));
    return value;
}

template <typename D> hstring impl_IAttributedNetworkUsage<D>::AttributionName() const
{
    hstring value;
    check_hresult(static_cast<const IAttributedNetworkUsage &>(static_cast<const D &>(*this))->get_AttributionName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IAttributedNetworkUsage<D>::AttributionThumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IAttributedNetworkUsage &>(static_cast<const D &>(*this))->get_AttributionThumbnail(put(value)));
    return value;
}

template <typename D> bool impl_IConnectionProfile2<D>::IsWwanConnectionProfile() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> bool impl_IConnectionProfile2<D>::IsWlanConnectionProfile() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanConnectionProfileDetails impl_IConnectionProfile2<D>::WwanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WwanConnectionProfileDetails value { nullptr };
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->get_WwanConnectionProfileDetails(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WlanConnectionProfileDetails impl_IConnectionProfile2<D>::WlanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WlanConnectionProfileDetails value { nullptr };
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->get_WlanConnectionProfileDetails(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<GUID> impl_IConnectionProfile2<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value;
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->get_ServiceProviderGuid(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IConnectionProfile2<D>::GetSignalBars() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->abi_GetSignalBars(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DomainConnectivityLevel impl_IConnectionProfile2<D>::GetDomainConnectivityLevel() const
{
    Windows::Networking::Connectivity::DomainConnectivityLevel value {};
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->abi_GetDomainConnectivityLevel(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> impl_IConnectionProfile2<D>::GetNetworkUsageAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::DateTime & endTime, Windows::Networking::Connectivity::DataUsageGranularity granularity, const Windows::Networking::Connectivity::NetworkUsageStates & states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> value;
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->abi_GetNetworkUsageAsync(get(startTime), get(endTime), granularity, get(states), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> impl_IConnectionProfile2<D>::GetConnectivityIntervalsAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::DateTime & endTime, const Windows::Networking::Connectivity::NetworkUsageStates & states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> value;
    check_hresult(static_cast<const IConnectionProfile2 &>(static_cast<const D &>(*this))->abi_GetConnectivityIntervalsAsync(get(startTime), get(endTime), get(states), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> impl_IConnectionProfile3<D>::GetAttributedNetworkUsageAsync(const Windows::Foundation::DateTime & startTime, const Windows::Foundation::DateTime & endTime, const Windows::Networking::Connectivity::NetworkUsageStates & states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> value;
    check_hresult(static_cast<const IConnectionProfile3 &>(static_cast<const D &>(*this))->abi_GetAttributedNetworkUsageAsync(get(startTime), get(endTime), get(states), put(value)));
    return value;
}

template <typename D> uint32_t impl_ILanIdentifierData<D>::Type() const
{
    uint32_t value {};
    check_hresult(static_cast<const ILanIdentifierData &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint8_t> impl_ILanIdentifierData<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<uint8_t> value;
    check_hresult(static_cast<const ILanIdentifierData &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData impl_ILanIdentifier<D>::InfrastructureId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value { nullptr };
    check_hresult(static_cast<const ILanIdentifier &>(static_cast<const D &>(*this))->get_InfrastructureId(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData impl_ILanIdentifier<D>::PortId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value { nullptr };
    check_hresult(static_cast<const ILanIdentifier &>(static_cast<const D &>(*this))->get_PortId(put(value)));
    return value;
}

template <typename D> GUID impl_ILanIdentifier<D>::NetworkAdapterId() const
{
    GUID value {};
    check_hresult(static_cast<const ILanIdentifier &>(static_cast<const D &>(*this))->get_NetworkAdapterId(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> impl_INetworkInformationStatics<D>::GetConnectionProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> value;
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetConnectionProfiles(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile impl_INetworkInformationStatics<D>::GetInternetConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value { nullptr };
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetInternetConnectionProfile(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> impl_INetworkInformationStatics<D>::GetLanIdentifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> value;
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetLanIdentifiers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> impl_INetworkInformationStatics<D>::GetHostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value;
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetHostNames(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> impl_INetworkInformationStatics<D>::GetProxyConfigurationAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> value;
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetProxyConfigurationAsync(get(uri), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> impl_INetworkInformationStatics<D>::GetSortedEndpointPairs(const Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair> & destinationList, Windows::Networking::HostNameSortOptions sortOptions) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value;
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->abi_GetSortedEndpointPairs(get(destinationList), sortOptions, put(value)));
    return value;
}

template <typename D> event_token impl_INetworkInformationStatics<D>::NetworkStatusChanged(const Windows::Networking::Connectivity::NetworkStatusChangedEventHandler & networkStatusHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->add_NetworkStatusChanged(get(networkStatusHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<INetworkInformationStatics> impl_INetworkInformationStatics<D>::NetworkStatusChanged(auto_revoke_t, const Windows::Networking::Connectivity::NetworkStatusChangedEventHandler & networkStatusHandler) const
{
    return impl::make_event_revoker<D, INetworkInformationStatics>(this, &ABI::Windows::Networking::Connectivity::INetworkInformationStatics::remove_NetworkStatusChanged, NetworkStatusChanged(networkStatusHandler));
}

template <typename D> void impl_INetworkInformationStatics<D>::NetworkStatusChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const INetworkInformationStatics &>(static_cast<const D &>(*this))->remove_NetworkStatusChanged(eventCookie));
}

template <typename D> void impl_IConnectionProfileFilter<D>::IsConnected(bool value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->put_IsConnected(value));
}

template <typename D> bool impl_IConnectionProfileFilter<D>::IsConnected() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->get_IsConnected(&value));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter<D>::IsWwanConnectionProfile(bool value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->put_IsWwanConnectionProfile(value));
}

template <typename D> bool impl_IConnectionProfileFilter<D>::IsWwanConnectionProfile() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter<D>::IsWlanConnectionProfile(bool value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->put_IsWlanConnectionProfile(value));
}

template <typename D> bool impl_IConnectionProfileFilter<D>::IsWlanConnectionProfile() const
{
    bool value {};
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter<D>::NetworkCostType(Windows::Networking::Connectivity::NetworkCostType value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->put_NetworkCostType(value));
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType impl_IConnectionProfileFilter<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value {};
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->get_NetworkCostType(&value));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter<D>::ServiceProviderGuid(const Windows::Foundation::IReference<GUID> & value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->put_ServiceProviderGuid(get(value)));
}

template <typename D> Windows::Foundation::IReference<GUID> impl_IConnectionProfileFilter<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value;
    check_hresult(static_cast<const IConnectionProfileFilter &>(static_cast<const D &>(*this))->get_ServiceProviderGuid(put(value)));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter2<D>::IsRoaming(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->put_IsRoaming(get(value)));
}

template <typename D> Windows::Foundation::IReference<bool> impl_IConnectionProfileFilter2<D>::IsRoaming() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->get_IsRoaming(put(value)));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter2<D>::IsOverDataLimit(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->put_IsOverDataLimit(get(value)));
}

template <typename D> Windows::Foundation::IReference<bool> impl_IConnectionProfileFilter2<D>::IsOverDataLimit() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->get_IsOverDataLimit(put(value)));
    return value;
}

template <typename D> void impl_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->put_IsBackgroundDataUsageRestricted(get(value)));
}

template <typename D> Windows::Foundation::IReference<bool> impl_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->get_IsBackgroundDataUsageRestricted(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IConnectionProfileFilter2<D>::RawData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IConnectionProfileFilter2 &>(static_cast<const D &>(*this))->get_RawData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> impl_INetworkInformationStatics2<D>::FindConnectionProfilesAsync(const Windows::Networking::Connectivity::ConnectionProfileFilter & pProfileFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> value;
    check_hresult(static_cast<const INetworkInformationStatics2 &>(static_cast<const D &>(*this))->abi_FindConnectionProfilesAsync(get(pProfileFilter), put(value)));
    return value;
}

template <typename D> GUID impl_INetworkItem<D>::NetworkId() const
{
    GUID value {};
    check_hresult(static_cast<const INetworkItem &>(static_cast<const D &>(*this))->get_NetworkId(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkTypes impl_INetworkItem<D>::GetNetworkTypes() const
{
    Windows::Networking::Connectivity::NetworkTypes value {};
    check_hresult(static_cast<const INetworkItem &>(static_cast<const D &>(*this))->abi_GetNetworkTypes(&value));
    return value;
}

template <typename D> uint64_t impl_INetworkAdapter<D>::OutboundMaxBitsPerSecond() const
{
    uint64_t value {};
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->get_OutboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint64_t impl_INetworkAdapter<D>::InboundMaxBitsPerSecond() const
{
    uint64_t value {};
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->get_InboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint32_t impl_INetworkAdapter<D>::IanaInterfaceType() const
{
    uint32_t value {};
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->get_IanaInterfaceType(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkItem impl_INetworkAdapter<D>::NetworkItem() const
{
    Windows::Networking::Connectivity::NetworkItem value { nullptr };
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->get_NetworkItem(put(value)));
    return value;
}

template <typename D> GUID impl_INetworkAdapter<D>::NetworkAdapterId() const
{
    GUID value {};
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->get_NetworkAdapterId(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> impl_INetworkAdapter<D>::GetConnectedProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> value;
    check_hresult(static_cast<const INetworkAdapter &>(static_cast<const D &>(*this))->abi_GetConnectedProfileAsync(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter impl_IIPInformation<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value { nullptr };
    check_hresult(static_cast<const IIPInformation &>(static_cast<const D &>(*this))->get_NetworkAdapter(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IIPInformation<D>::PrefixLength() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(static_cast<const IIPInformation &>(static_cast<const D &>(*this))->get_PrefixLength(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> impl_IProxyConfiguration<D>::ProxyUris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value;
    check_hresult(static_cast<const IProxyConfiguration &>(static_cast<const D &>(*this))->get_ProxyUris(put(value)));
    return value;
}

template <typename D> bool impl_IProxyConfiguration<D>::CanConnectDirectly() const
{
    bool value {};
    check_hresult(static_cast<const IProxyConfiguration &>(static_cast<const D &>(*this))->get_CanConnectDirectly(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile impl_IConnectionSession<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value { nullptr };
    check_hresult(static_cast<const IConnectionSession &>(static_cast<const D &>(*this))->get_ConnectionProfile(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile impl_IRoutePolicy<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value { nullptr };
    check_hresult(static_cast<const IRoutePolicy &>(static_cast<const D &>(*this))->get_ConnectionProfile(put(value)));
    return value;
}

template <typename D> Windows::Networking::HostName impl_IRoutePolicy<D>::HostName() const
{
    Windows::Networking::HostName value { nullptr };
    check_hresult(static_cast<const IRoutePolicy &>(static_cast<const D &>(*this))->get_HostName(put(value)));
    return value;
}

template <typename D> Windows::Networking::DomainNameType impl_IRoutePolicy<D>::HostNameType() const
{
    Windows::Networking::DomainNameType value {};
    check_hresult(static_cast<const IRoutePolicy &>(static_cast<const D &>(*this))->get_HostNameType(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::RoutePolicy impl_IRoutePolicyFactory<D>::CreateRoutePolicy(const Windows::Networking::Connectivity::ConnectionProfile & connectionProfile, const Windows::Networking::HostName & hostName, Windows::Networking::DomainNameType type) const
{
    Windows::Networking::Connectivity::RoutePolicy routePolicy { nullptr };
    check_hresult(static_cast<const IRoutePolicyFactory &>(static_cast<const D &>(*this))->abi_CreateRoutePolicy(get(connectionProfile), get(hostName), type, put(routePolicy)));
    return routePolicy;
}

template <typename D> hstring impl_ICellularApnContext<D>::ProviderId() const
{
    hstring value;
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_ProviderId(put(value)));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::ProviderId(hstring_ref value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_ProviderId(get(value)));
}

template <typename D> hstring impl_ICellularApnContext<D>::AccessPointName() const
{
    hstring value;
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_AccessPointName(put(value)));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::AccessPointName(hstring_ref value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_AccessPointName(get(value)));
}

template <typename D> hstring impl_ICellularApnContext<D>::UserName() const
{
    hstring value;
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_UserName(put(value)));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::UserName(hstring_ref value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_UserName(get(value)));
}

template <typename D> hstring impl_ICellularApnContext<D>::Password() const
{
    hstring value;
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_Password(put(value)));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::Password(hstring_ref value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_Password(get(value)));
}

template <typename D> bool impl_ICellularApnContext<D>::IsCompressionEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_IsCompressionEnabled(&value));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::IsCompressionEnabled(bool value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_IsCompressionEnabled(value));
}

template <typename D> Windows::Networking::Connectivity::CellularApnAuthenticationType impl_ICellularApnContext<D>::AuthenticationType() const
{
    Windows::Networking::Connectivity::CellularApnAuthenticationType value {};
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->get_AuthenticationType(&value));
    return value;
}

template <typename D> void impl_ICellularApnContext<D>::AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType value) const
{
    check_hresult(static_cast<const ICellularApnContext &>(static_cast<const D &>(*this))->put_AuthenticationType(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> impl_IConnectivityManagerStatics<D>::AcquireConnectionAsync(const Windows::Networking::Connectivity::CellularApnContext & cellularApnContext) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> operation;
    check_hresult(static_cast<const IConnectivityManagerStatics &>(static_cast<const D &>(*this))->abi_AcquireConnectionAsync(get(cellularApnContext), put(operation)));
    return operation;
}

template <typename D> void impl_IConnectivityManagerStatics<D>::AddHttpRoutePolicy(const Windows::Networking::Connectivity::RoutePolicy & routePolicy) const
{
    check_hresult(static_cast<const IConnectivityManagerStatics &>(static_cast<const D &>(*this))->abi_AddHttpRoutePolicy(get(routePolicy)));
}

template <typename D> void impl_IConnectivityManagerStatics<D>::RemoveHttpRoutePolicy(const Windows::Networking::Connectivity::RoutePolicy & routePolicy) const
{
    check_hresult(static_cast<const IConnectivityManagerStatics &>(static_cast<const D &>(*this))->abi_RemoveHttpRoutePolicy(get(routePolicy)));
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewInternetConnectionProfile() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewInternetConnectionProfile(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewConnectionCost() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewConnectionCost(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewNetworkConnectivityLevel() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewNetworkConnectivityLevel(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewDomainConnectivityLevel() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewDomainConnectivityLevel(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewHostNameList() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewHostNameList(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails<D>::HasNewWwanRegistrationState() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails &>(static_cast<const D &>(*this))->get_HasNewWwanRegistrationState(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails2<D>::HasNewTetheringOperationalState() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails2 &>(static_cast<const D &>(*this))->get_HasNewTetheringOperationalState(&value));
    return value;
}

template <typename D> bool impl_INetworkStateChangeEventDetails2<D>::HasNewTetheringClientCount() const
{
    bool value {};
    check_hresult(static_cast<const INetworkStateChangeEventDetails2 &>(static_cast<const D &>(*this))->get_HasNewTetheringClientCount(&value));
    return value;
}

template <typename D> hstring impl_IWwanConnectionProfileDetails<D>::HomeProviderId() const
{
    hstring value;
    check_hresult(static_cast<const IWwanConnectionProfileDetails &>(static_cast<const D &>(*this))->get_HomeProviderId(put(value)));
    return value;
}

template <typename D> hstring impl_IWwanConnectionProfileDetails<D>::AccessPointName() const
{
    hstring value;
    check_hresult(static_cast<const IWwanConnectionProfileDetails &>(static_cast<const D &>(*this))->get_AccessPointName(put(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanNetworkRegistrationState impl_IWwanConnectionProfileDetails<D>::GetNetworkRegistrationState() const
{
    Windows::Networking::Connectivity::WwanNetworkRegistrationState value {};
    check_hresult(static_cast<const IWwanConnectionProfileDetails &>(static_cast<const D &>(*this))->abi_GetNetworkRegistrationState(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanDataClass impl_IWwanConnectionProfileDetails<D>::GetCurrentDataClass() const
{
    Windows::Networking::Connectivity::WwanDataClass value {};
    check_hresult(static_cast<const IWwanConnectionProfileDetails &>(static_cast<const D &>(*this))->abi_GetCurrentDataClass(&value));
    return value;
}

inline CellularApnContext::CellularApnContext() :
    CellularApnContext(activate_instance<CellularApnContext>())
{}

inline ConnectionProfileFilter::ConnectionProfileFilter() :
    ConnectionProfileFilter(activate_instance<ConnectionProfileFilter>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> ConnectivityManager::AcquireConnectionAsync(const Windows::Networking::Connectivity::CellularApnContext & cellularApnContext)
{
    return get_activation_factory<ConnectivityManager, IConnectivityManagerStatics>().AcquireConnectionAsync(cellularApnContext);
}

inline void ConnectivityManager::AddHttpRoutePolicy(const Windows::Networking::Connectivity::RoutePolicy & routePolicy)
{
    get_activation_factory<ConnectivityManager, IConnectivityManagerStatics>().AddHttpRoutePolicy(routePolicy);
}

inline void ConnectivityManager::RemoveHttpRoutePolicy(const Windows::Networking::Connectivity::RoutePolicy & routePolicy)
{
    get_activation_factory<ConnectivityManager, IConnectivityManagerStatics>().RemoveHttpRoutePolicy(routePolicy);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> NetworkInformation::GetConnectionProfiles()
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetConnectionProfiles();
}

inline Windows::Networking::Connectivity::ConnectionProfile NetworkInformation::GetInternetConnectionProfile()
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetInternetConnectionProfile();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> NetworkInformation::GetLanIdentifiers()
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetLanIdentifiers();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> NetworkInformation::GetHostNames()
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetHostNames();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> NetworkInformation::GetProxyConfigurationAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetProxyConfigurationAsync(uri);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> NetworkInformation::GetSortedEndpointPairs(const Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair> & destinationList, Windows::Networking::HostNameSortOptions sortOptions)
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().GetSortedEndpointPairs(destinationList, sortOptions);
}

inline event_token NetworkInformation::NetworkStatusChanged(const Windows::Networking::Connectivity::NetworkStatusChangedEventHandler & networkStatusHandler)
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics>().NetworkStatusChanged(networkStatusHandler);
}

inline factory_event_revoker<INetworkInformationStatics> NetworkInformation::NetworkStatusChanged(auto_revoke_t, const Windows::Networking::Connectivity::NetworkStatusChangedEventHandler & networkStatusHandler)
{
    auto factory = get_activation_factory<NetworkInformation, INetworkInformationStatics>();
    return { factory, &ABI::Windows::Networking::Connectivity::INetworkInformationStatics::remove_NetworkStatusChanged, factory.NetworkStatusChanged(networkStatusHandler) };
}

inline void NetworkInformation::NetworkStatusChanged(event_token eventCookie)
{
    get_activation_factory<NetworkInformation, INetworkInformationStatics>().NetworkStatusChanged(eventCookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> NetworkInformation::FindConnectionProfilesAsync(const Windows::Networking::Connectivity::ConnectionProfileFilter & pProfileFilter)
{
    return get_activation_factory<NetworkInformation, INetworkInformationStatics2>().FindConnectionProfilesAsync(pProfileFilter);
}

inline RoutePolicy::RoutePolicy(const Windows::Networking::Connectivity::ConnectionProfile & connectionProfile, const Windows::Networking::HostName & hostName, Windows::Networking::DomainNameType type) :
    RoutePolicy(get_activation_factory<RoutePolicy, IRoutePolicyFactory>().CreateRoutePolicy(connectionProfile, hostName, type))
{}

}

}
