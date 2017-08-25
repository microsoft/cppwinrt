// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionThumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionThumbnail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_ProviderId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_AccessPointName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_AccessPointName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_UserName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_Password(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_Password(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_IsCompressionEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_IsCompressionEnabled(value));
}

template <typename D> Windows::Networking::Connectivity::CellularApnAuthenticationType consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType() const
{
    Windows::Networking::Connectivity::CellularApnAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_AuthenticationType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_AuthenticationType(get_abi(value)));
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType consume_Windows_Networking_Connectivity_IConnectionCost<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_NetworkCostType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::Roaming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_Roaming(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::OverDataLimit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_OverDataLimit(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::ApproachingDataLimit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_ApproachingDataLimit(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost2<D>::BackgroundDataUsageRestricted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost2)->get_BackgroundDataUsageRestricted(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IConnectionProfile<D>::ProfileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_ProfileName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkConnectivityLevel consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkConnectivityLevel() const
{
    Windows::Networking::Connectivity::NetworkConnectivityLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkConnectivityLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionCost consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetConnectionCost() const
{
    Windows::Networking::Connectivity::ConnectionCost value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetConnectionCost(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataPlanStatus consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetDataPlanStatus() const
{
    Windows::Networking::Connectivity::DataPlanStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetDataPlanStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime) const
{
    Windows::Networking::Connectivity::DataUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsage(get_abi(StartTime), get_abi(EndTime), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime, Windows::Networking::Connectivity::RoamingStates const& States) const
{
    Windows::Networking::Connectivity::DataUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsagePerRoamingStates(get_abi(StartTime), get_abi(EndTime), get_abi(States), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkSecuritySettings consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkSecuritySettings() const
{
    Windows::Networking::Connectivity::NetworkSecuritySettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkSecuritySettings(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWwanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWlanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanConnectionProfileDetails consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WwanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WwanConnectionProfileDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_WwanConnectionProfileDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WlanConnectionProfileDetails consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WlanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WlanConnectionProfileDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_WlanConnectionProfileDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<GUID> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_ServiceProviderGuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetSignalBars() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetSignalBars(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DomainConnectivityLevel consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetDomainConnectivityLevel() const
{
    Windows::Networking::Connectivity::DomainConnectivityLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetDomainConnectivityLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::DataUsageGranularity const& granularity, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetNetworkUsageAsync(get_abi(startTime), get_abi(endTime), get_abi(granularity), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetConnectivityIntervalsAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetConnectivityIntervalsAsync(get_abi(startTime), get_abi(endTime), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> consume_Windows_Networking_Connectivity_IConnectionProfile3<D>::GetAttributedNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile3)->GetAttributedNetworkUsageAsync(get_abi(startTime), get_abi(endTime), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsConnected(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsConnected(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWwanConnectionProfile(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWlanConnectionProfile(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType(Windows::Networking::Connectivity::NetworkCostType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_NetworkCostType(get_abi(value)));
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_NetworkCostType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid(optional<GUID> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_ServiceProviderGuid(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<GUID> consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_ServiceProviderGuid(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsRoaming(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsRoaming(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsOverDataLimit(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsOverDataLimit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsBackgroundDataUsageRestricted(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsBackgroundDataUsageRestricted(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::RawData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_RawData(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_IConnectionSession<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionSession)->get_ConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::StartTime() const
{
    Windows::Foundation::DateTime startTime{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityInterval)->get_StartTime(put_abi(startTime)));
    return startTime;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityInterval)->get_ConnectionDuration(put_abi(duration)));
    return duration;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->AcquireConnectionAsync(get_abi(cellularApnContext), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->AddHttpRoutePolicy(get_abi(routePolicy)));
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->RemoveHttpRoutePolicy(get_abi(routePolicy)));
}

template <typename D> Windows::Networking::Connectivity::DataPlanUsage consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataPlanUsage() const
{
    Windows::Networking::Connectivity::DataPlanUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_DataPlanUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataLimitInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_DataLimitInMegabytes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::InboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_InboundBitsPerSecond(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::OutboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_OutboundBitsPerSecond(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::NextBillingCycle() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_NextBillingCycle(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::MaxTransferSizeInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_MaxTransferSizeInMegabytes(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::MegabytesUsed() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanUsage)->get_MegabytesUsed(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::LastSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanUsage)->get_LastSyncTime(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_Connectivity_IIPInformation<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IIPInformation)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Networking_Connectivity_IIPInformation<D>::PrefixLength() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IIPInformation)->get_PrefixLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData consume_Windows_Networking_Connectivity_ILanIdentifier<D>::InfrastructureId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_InfrastructureId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData consume_Windows_Networking_Connectivity_ILanIdentifier<D>::PortId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_PortId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_ILanIdentifier<D>::NetworkAdapterId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_NetworkAdapterId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Type() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifierData)->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint8_t> consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifierData)->get_Value(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::OutboundMaxBitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_OutboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::InboundMaxBitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_InboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::IanaInterfaceType() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_IanaInterfaceType(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkItem consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkItem() const
{
    Windows::Networking::Connectivity::NetworkItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkItem(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkAdapterId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkAdapterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> consume_Windows_Networking_Connectivity_INetworkAdapter<D>::GetConnectedProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->GetConnectedProfileAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetConnectionProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetConnectionProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetInternetConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetInternetConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetLanIdentifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetLanIdentifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetHostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetHostNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetProxyConfigurationAsync(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetSortedEndpointPairs(get_abi(destinationList), get_abi(sortOptions), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->add_NetworkStatusChanged(get_abi(networkStatusHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Connectivity::INetworkInformationStatics>(this, &abi_t<Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged, NetworkStatusChanged(networkStatusHandler));
}

template <typename D> void consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->remove_NetworkStatusChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> consume_Windows_Networking_Connectivity_INetworkInformationStatics2<D>::FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics2)->FindConnectionProfilesAsync(get_abi(pProfileFilter), put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_INetworkItem<D>::NetworkId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkItem)->get_NetworkId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkTypes consume_Windows_Networking_Connectivity_INetworkItem<D>::GetNetworkTypes() const
{
    Windows::Networking::Connectivity::NetworkTypes value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkItem)->GetNetworkTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAuthenticationType consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkAuthenticationType() const
{
    Windows::Networking::Connectivity::NetworkAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkAuthenticationType(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkEncryptionType consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkEncryptionType() const
{
    Windows::Networking::Connectivity::NetworkEncryptionType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkEncryptionType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewInternetConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewInternetConnectionProfile(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewConnectionCost() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewConnectionCost(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewNetworkConnectivityLevel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewNetworkConnectivityLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewDomainConnectivityLevel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewDomainConnectivityLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewHostNameList() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewHostNameList(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewWwanRegistrationState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewWwanRegistrationState(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringOperationalState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringOperationalState(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringClientCount() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringClientCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Connectivity_INetworkUsage<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_ConnectionDuration(put_abi(duration)));
    return duration;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::ProxyUris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProxyConfiguration)->get_ProxyUris(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::CanConnectDirectly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProxyConfiguration)->get_CanConnectDirectly(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_IRoutePolicy<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_ConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_HostName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::DomainNameType consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostNameType() const
{
    Windows::Networking::DomainNameType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_HostNameType(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::RoutePolicy consume_Windows_Networking_Connectivity_IRoutePolicyFactory<D>::CreateRoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type) const
{
    Windows::Networking::Connectivity::RoutePolicy routePolicy{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicyFactory)->CreateRoutePolicy(get_abi(connectionProfile), get_abi(hostName), get_abi(type), put_abi(routePolicy)));
    return routePolicy;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails<D>::GetConnectedSsid() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWlanConnectionProfileDetails)->GetConnectedSsid(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::HomeProviderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_HomeProviderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::AccessPointName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_AccessPointName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanNetworkRegistrationState consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetNetworkRegistrationState() const
{
    Windows::Networking::Connectivity::WwanNetworkRegistrationState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetNetworkRegistrationState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanDataClass consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetCurrentDataClass() const
{
    Windows::Networking::Connectivity::WwanDataClass value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetCurrentDataClass(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IAttributedNetworkUsage> : produce_base<D, Windows::Networking::Connectivity::IAttributedNetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributionName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionThumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributionThumbnail());
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
    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProviderId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessPointName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessPointName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Password(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Password(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCompressionEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCompressionEnabled());
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
            typename D::abi_guard guard(this->shim());
            this->shim().IsCompressionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(abi_t<Windows::Networking::Connectivity::CellularApnAuthenticationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationType(abi_t<Windows::Networking::Connectivity::CellularApnAuthenticationType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationType(*reinterpret_cast<Windows::Networking::Connectivity::CellularApnAuthenticationType const*>(&value));
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
    HRESULT __stdcall get_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roaming(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Roaming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverDataLimit(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApproachingDataLimit(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApproachingDataLimit());
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
    HRESULT __stdcall get_BackgroundDataUsageRestricted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundDataUsageRestricted());
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
    HRESULT __stdcall get_ProfileName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkConnectivityLevel(abi_t<Windows::Networking::Connectivity::NetworkConnectivityLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNetworkNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConnectionCost(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDataPlanStatus(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDataPlanStatus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalUsage(abi_t<Windows::Foundation::DateTime> StartTime, abi_t<Windows::Foundation::DateTime> EndTime, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocalUsage(*reinterpret_cast<Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&EndTime)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalUsagePerRoamingStates(abi_t<Windows::Foundation::DateTime> StartTime, abi_t<Windows::Foundation::DateTime> EndTime, abi_t<Windows::Networking::Connectivity::RoamingStates> States, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLocalUsage(*reinterpret_cast<Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&EndTime), *reinterpret_cast<Windows::Networking::Connectivity::RoamingStates const*>(&States)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkSecuritySettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkSecuritySettings());
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
    HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWwanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WwanConnectionProfileDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WwanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WlanConnectionProfileDetails(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WlanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSignalBars(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSignalBars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDomainConnectivityLevel(abi_t<Windows::Networking::Connectivity::DomainConnectivityLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkUsageAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::DataUsageGranularity> granularity, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNetworkUsageAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::DataUsageGranularity const*>(&granularity), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConnectivityIntervalsAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectivityIntervalsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
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
    HRESULT __stdcall GetAttributedNetworkUsageAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAttributedNetworkUsageAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
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
            typename D::abi_guard guard(this->shim());
            this->shim().IsConnected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConnected());
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
            typename D::abi_guard guard(this->shim());
            this->shim().IsWwanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWwanConnectionProfile());
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
            typename D::abi_guard guard(this->shim());
            this->shim().IsWlanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkCostType(*reinterpret_cast<Windows::Networking::Connectivity::NetworkCostType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceProviderGuid(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceProviderGuid(*reinterpret_cast<Windows::Foundation::IReference<GUID> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceProviderGuid());
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
    HRESULT __stdcall put_IsRoaming(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRoaming(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRoaming(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRoaming());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverDataLimit(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverDataLimit(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverDataLimit(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsBackgroundDataUsageRestricted(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBackgroundDataUsageRestricted(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBackgroundDataUsageRestricted(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBackgroundDataUsageRestricted());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawData());
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
    HRESULT __stdcall get_ConnectionProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionProfile());
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
    HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* startTime) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *startTime = detach_abi(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(abi_t<Windows::Foundation::TimeSpan>* duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *duration = detach_abi(this->shim().ConnectionDuration());
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
    HRESULT __stdcall AcquireConnectionAsync(::IUnknown* cellularApnContext, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AcquireConnectionAsync(*reinterpret_cast<Windows::Networking::Connectivity::CellularApnContext const*>(&cellularApnContext)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddHttpRoutePolicy(::IUnknown* routePolicy) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddHttpRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveHttpRoutePolicy(::IUnknown* routePolicy) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveHttpRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
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
    HRESULT __stdcall get_DataPlanUsage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataPlanUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataLimitInMegabytes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataLimitInMegabytes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecond(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBitsPerSecond(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextBillingCycle(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextBillingCycle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxTransferSizeInMegabytes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxTransferSizeInMegabytes());
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
    HRESULT __stdcall get_MegabytesUsed(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MegabytesUsed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSyncTime());
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
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesReceived());
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
    HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrefixLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrefixLength());
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
    HRESULT __stdcall get_InfrastructureId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InfrastructureId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PortId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PortId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAdapterId());
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
    HRESULT __stdcall get_Type(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
    HRESULT __stdcall get_OutboundMaxBitsPerSecond(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundMaxBitsPerSecond(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IanaInterfaceType(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IanaInterfaceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkItem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConnectedProfileAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectedProfileAsync());
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
    HRESULT __stdcall GetConnectionProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectionProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInternetConnectionProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLanIdentifiers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetLanIdentifiers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHostNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHostNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProxyConfigurationAsync(::IUnknown* uri, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetProxyConfigurationAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSortedEndpointPairs(::IUnknown* destinationList, abi_t<Windows::Networking::HostNameSortOptions> sortOptions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSortedEndpointPairs(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair> const*>(&destinationList), *reinterpret_cast<Windows::Networking::HostNameSortOptions const*>(&sortOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NetworkStatusChanged(::IUnknown* networkStatusHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().NetworkStatusChanged(*reinterpret_cast<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const*>(&networkStatusHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NetworkStatusChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkStatusChanged(*reinterpret_cast<event_token const*>(&eventCookie));
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
    HRESULT __stdcall FindConnectionProfilesAsync(::IUnknown* pProfileFilter, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindConnectionProfilesAsync(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfileFilter const*>(&pProfileFilter)));
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
    HRESULT __stdcall get_NetworkId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkTypes(abi_t<Windows::Networking::Connectivity::NetworkTypes>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNetworkTypes());
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
    HRESULT __stdcall get_NetworkAuthenticationType(abi_t<Windows::Networking::Connectivity::NetworkAuthenticationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkEncryptionType(abi_t<Windows::Networking::Connectivity::NetworkEncryptionType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkEncryptionType());
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
    HRESULT __stdcall get_HasNewInternetConnectionProfile(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewConnectionCost(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewNetworkConnectivityLevel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewDomainConnectivityLevel(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewHostNameList(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewHostNameList());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewWwanRegistrationState(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewWwanRegistrationState());
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
    HRESULT __stdcall get_HasNewTetheringOperationalState(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewTetheringOperationalState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewTetheringClientCount(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasNewTetheringClientCount());
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
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(abi_t<Windows::Foundation::TimeSpan>* duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *duration = detach_abi(this->shim().ConnectionDuration());
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
    HRESULT __stdcall get_ProxyUris(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProxyUris());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanConnectDirectly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanConnectDirectly());
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
    HRESULT __stdcall get_ConnectionProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HostName(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HostName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HostNameType(abi_t<Windows::Networking::DomainNameType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HostNameType());
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
    HRESULT __stdcall CreateRoutePolicy(::IUnknown* connectionProfile, ::IUnknown* hostName, abi_t<Windows::Networking::DomainNameType> type, ::IUnknown** routePolicy) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *routePolicy = detach_abi(this->shim().CreateRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfile const*>(&connectionProfile), *reinterpret_cast<Windows::Networking::HostName const*>(&hostName), *reinterpret_cast<Windows::Networking::DomainNameType const*>(&type)));
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
    HRESULT __stdcall GetConnectedSsid(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetConnectedSsid());
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
    HRESULT __stdcall get_HomeProviderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HomeProviderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkRegistrationState(abi_t<Windows::Networking::Connectivity::WwanNetworkRegistrationState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNetworkRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentDataClass(abi_t<Windows::Networking::Connectivity::WwanDataClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentDataClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

inline CellularApnContext::CellularApnContext() :
    CellularApnContext(activate_instance<CellularApnContext>())
{}

inline ConnectionProfileFilter::ConnectionProfileFilter() :
    ConnectionProfileFilter(activate_instance<ConnectionProfileFilter>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> ConnectivityManager::AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext)
{
    return get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().AcquireConnectionAsync(cellularApnContext);
}

inline void ConnectivityManager::AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
{
    get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().AddHttpRoutePolicy(routePolicy);
}

inline void ConnectivityManager::RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
{
    get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().RemoveHttpRoutePolicy(routePolicy);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> NetworkInformation::GetConnectionProfiles()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetConnectionProfiles();
}

inline Windows::Networking::Connectivity::ConnectionProfile NetworkInformation::GetInternetConnectionProfile()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetInternetConnectionProfile();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> NetworkInformation::GetLanIdentifiers()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetLanIdentifiers();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> NetworkInformation::GetHostNames()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetHostNames();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> NetworkInformation::GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetProxyConfigurationAsync(uri);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> NetworkInformation::GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetSortedEndpointPairs(destinationList, sortOptions);
}

inline event_token NetworkInformation::NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().NetworkStatusChanged(networkStatusHandler);
}

inline factory_event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics> NetworkInformation::NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
{
    auto factory = get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>();
    return { factory, &abi_t<Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged, factory.NetworkStatusChanged(networkStatusHandler) };
}

inline void NetworkInformation::NetworkStatusChanged(event_token const& eventCookie)
{
    get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().NetworkStatusChanged(eventCookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> NetworkInformation::FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics2>().FindConnectionProfilesAsync(pProfileFilter);
}

inline RoutePolicy::RoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type) :
    RoutePolicy(get_activation_factory<RoutePolicy, Windows::Networking::Connectivity::IRoutePolicyFactory>().CreateRoutePolicy(connectionProfile, hostName, type))
{}

template <typename L> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(L handler) :
    NetworkStatusChangedEventHandler(impl::make_delegate<NetworkStatusChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(F* handler) :
    NetworkStatusChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(O* object, M method) :
    NetworkStatusChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void NetworkStatusChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender) const
{
    check_hresult((*(abi_t<NetworkStatusChangedEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ICellularApnContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ICellularApnContext> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionCost> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionCost2> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionProfile> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionProfile2> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionProfile3> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectionSession> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityInterval> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectivityInterval> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IDataPlanStatus> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IDataPlanUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IDataUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IDataUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IIPInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IIPInformation> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ILanIdentifier> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifierData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ILanIdentifierData> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkAdapter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkAdapter> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkItem> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::INetworkUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IProxyConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IProxyConfiguration> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IRoutePolicy> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::CellularApnContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::CellularApnContext> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionCost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectionCost> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectionProfile> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectionSession> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityInterval> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectivityInterval> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ConnectivityManager> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::DataPlanStatus> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::DataPlanUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::DataUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::DataUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::IPInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::IPInformation> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifier> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::LanIdentifier> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifierData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::LanIdentifierData> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkAdapter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkAdapter> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkInformation> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkItem> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkUsage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::NetworkUsage> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::ProxyConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::ProxyConfiguration> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::RoutePolicy> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::RoutePolicy> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> {};

template<> struct hash<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> {};

}

WINRT_WARNING_POP
