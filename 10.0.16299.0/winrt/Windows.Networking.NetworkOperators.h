// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Devices.Sms.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.NetworkOperators.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Networking_NetworkOperators_IFdnAccessManagerStatics<D>::RequestUnlockAsync(param::hstring const& contactListId) const
{
    Windows::Foundation::IAsyncOperation<bool> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IFdnAccessManagerStatics)->RequestUnlockAsync(get_abi(contactListId), put_abi(returnValue)));
    return returnValue;
}

template <typename D> com_array<uint8_t> consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::WirelessNetworkId() const noexcept
{
    com_array<uint8_t> value;
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->get_WirelessNetworkId(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::NetworkAdapter() const noexcept
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::RedirectMessageUrl() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->get_RedirectMessageUrl(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::RedirectMessageXml() const noexcept
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->get_RedirectMessageXml(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::AuthenticationUrl() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->get_AuthenticationUrl(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::IssueCredentials(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->IssueCredentials(get_abi(userName), get_abi(password), get_abi(extraParameters), markAsManualConnectOnFailure));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::AbortAuthentication(bool markAsManual) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->AbortAuthentication(markAsManual));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::SkipAuthentication() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->SkipAuthentication());
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext<D>::TriggerAttentionRequired(param::hstring const& packageRelativeApplicationId, param::hstring const& applicationParameters) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext)->TriggerAttentionRequired(get_abi(packageRelativeApplicationId), get_abi(applicationParameters)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContext2<D>::IssueCredentialsAsync(param::hstring const& userName, param::hstring const& password, param::hstring const& extraParameters, bool markAsManualConnectOnFailure) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2)->IssueCredentialsAsync(get_abi(userName), get_abi(password), get_abi(extraParameters), markAsManualConnectOnFailure, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationContextStatics<D>::TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context) const
{
    bool isValid{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics)->TryGetAuthenticationContext(get_abi(evenToken), put_abi(context), &isValid));
    return isValid;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IHotspotAuthenticationEventDetails<D>::EventToken() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails)->get_EventToken(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>::HasNetworkErrorOccurred() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult)->get_HasNetworkErrorOccurred(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>::ResponseCode() const noexcept
{
    Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult)->get_ResponseCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>::LogoffUrl() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult)->get_LogoffUrl(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::XmlDocument consume_Windows_Networking_NetworkOperators_IHotspotCredentialsAuthenticationResult<D>::AuthenticationReplyXml() const noexcept
{
    Windows::Data::Xml::Dom::XmlDocument value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult)->get_AuthenticationReplyXml(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>::EFSpn() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics)->get_EFSpn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>::Gid1() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics)->get_Gid1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownCSimFilePathsStatics<D>::Gid2() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics)->get_Gid2(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>::EFSpn() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics)->get_EFSpn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>::Gid1() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics)->get_Gid1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownRuimFilePathsStatics<D>::Gid2() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics)->get_Gid2(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>::EFOns() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics)->get_EFOns(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>::EFSpn() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics)->get_EFSpn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>::Gid1() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics)->get_Gid1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownSimFilePathsStatics<D>::Gid2() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics)->get_Gid2(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>::EFSpn() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics)->get_EFSpn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>::EFOpl() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics)->get_EFOpl(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>::EFPnn() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics)->get_EFPnn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>::Gid1() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics)->get_Gid1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IKnownUSimFilePathsStatics<D>::Gid2() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics)->get_Gid2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>::NetworkAccountId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>::ServiceProviderGuid() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount)->get_ServiceProviderGuid(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>::ServiceProviderName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount)->get_ServiceProviderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>::CurrentNetwork() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork network{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount)->get_CurrentNetwork(put_abi(network)));
    return network;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount<D>::CurrentDeviceInformation() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation deviceInformation{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount)->get_CurrentDeviceInformation(put_abi(deviceInformation)));
    return deviceInformation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount2<D>::GetConnectionProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount2)->GetConnectionProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccount3<D>::AccountExperienceUrl() const noexcept
{
    Windows::Foundation::Uri value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccount3)->get_AccountExperienceUrl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountEventArgs<D>::NetworkAccountId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics<D>::AvailableNetworkAccountIds() const noexcept
{
    Windows::Foundation::Collections::IVectorView<hstring> ppAccountIds{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics)->get_AvailableNetworkAccountIds(put_abi(ppAccountIds)));
    return ppAccountIds;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccount consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountStatics<D>::CreateFromNetworkAccountId(param::hstring const& networkAccountId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccount ppAccount{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics)->CreateFromNetworkAccountId(get_abi(networkAccountId), put_abi(ppAccount)));
    return ppAccount;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>::NetworkAccountId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>::HasDeviceInformationChanged() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs)->get_HasDeviceInformationChanged(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountUpdatedEventArgs<D>::HasNetworkChanged() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs)->get_HasNetworkChanged(&value));
    return value;
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountAdded(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->add_AccountAdded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountAdded, AccountAdded(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountAdded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->remove_AccountAdded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountUpdated(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->add_AccountUpdated(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountUpdated, AccountUpdated(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountUpdated(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->remove_AccountUpdated(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountRemoved(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->add_AccountRemoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_AccountRemoved, AccountRemoved(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::AccountRemoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->remove_AccountRemoved(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::EnumerationCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->remove_EnumerationCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->add_Stopped(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Stopped(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->remove_Stopped(get_abi(cookie)));
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Status() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus status{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->Start());
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandAccountWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher)->Stop());
}

template <typename D> int32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar<D>::AntennaIndex() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar)->get_AntennaIndex(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandAntennaSar<D>::SarBackoffIndex() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar)->get_SarBackoffIndex(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::BaseStationId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_BaseStationId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::BaseStationPNCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_BaseStationPNCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::BaseStationLatitude() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_BaseStationLatitude(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::BaseStationLongitude() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_BaseStationLongitude(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::BaseStationLastBroadcastGpsTime() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_BaseStationLastBroadcastGpsTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::NetworkId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_NetworkId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::PilotSignalStrengthInDB() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_PilotSignalStrengthInDB(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellCdma<D>::SystemId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma)->get_SystemId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::BaseStationId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_BaseStationId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::CellId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_CellId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::ChannelNumber() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_ChannelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::LocationAreaCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_LocationAreaCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::ProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::ReceivedSignalStrengthInDBm() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_ReceivedSignalStrengthInDBm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellGsm<D>::TimingAdvanceInBitPeriods() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm)->get_TimingAdvanceInBitPeriods(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::CellId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_CellId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::ChannelNumber() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_ChannelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::PhysicalCellId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_PhysicalCellId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::ProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::ReferenceSignalReceivedPowerInDBm() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_ReferenceSignalReceivedPowerInDBm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::ReferenceSignalReceivedQualityInDBm() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_ReferenceSignalReceivedQualityInDBm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::TimingAdvanceInBitPeriods() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_TimingAdvanceInBitPeriods(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellLte<D>::TrackingAreaCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellLte)->get_TrackingAreaCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::CellId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_CellId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::CellParameterId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_CellParameterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::ChannelNumber() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_ChannelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::LocationAreaCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_LocationAreaCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::PathLossInDB() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_PathLossInDB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::ProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::ReceivedSignalCodePowerInDBm() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_ReceivedSignalCodePowerInDBm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellTdscdma<D>::TimingAdvanceInBitPeriods() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma)->get_TimingAdvanceInBitPeriods(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::CellId() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_CellId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::ChannelNumber() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_ChannelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::LocationAreaCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_LocationAreaCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::PathLossInDB() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_PathLossInDB(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::PrimaryScramblingCode() const noexcept
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_PrimaryScramblingCode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::ProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::ReceivedSignalCodePowerInDBm() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_ReceivedSignalCodePowerInDBm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellUmts<D>::SignalToNoiseRatioInDB() const noexcept
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts)->get_SignalToNoiseRatioInDB(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::NeighboringCellsCdma() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_NeighboringCellsCdma(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::NeighboringCellsGsm() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_NeighboringCellsGsm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::NeighboringCellsLte() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_NeighboringCellsLte(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::NeighboringCellsTdscdma() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_NeighboringCellsTdscdma(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::NeighboringCellsUmts() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_NeighboringCellsUmts(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::ServingCellsCdma() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_ServingCellsCdma(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::ServingCellsGsm() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_ServingCellsGsm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::ServingCellsLte() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellLte> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_ServingCellsLte(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::ServingCellsTdscdma() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_ServingCellsTdscdma(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> consume_Windows_Networking_NetworkOperators_IMobileBroadbandCellsInfo<D>::ServingCellsUmts() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo)->get_ServingCellsUmts(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkDeviceStatus consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::NetworkDeviceStatus() const noexcept
{
    Windows::Networking::NetworkOperators::NetworkDeviceStatus value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_NetworkDeviceStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::Manufacturer() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_Manufacturer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::Model() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_Model(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::FirmwareInformation() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_FirmwareInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::CellularClass() const noexcept
{
    Windows::Devices::Sms::CellularClass value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::DataClasses consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::DataClasses() const noexcept
{
    Windows::Networking::NetworkOperators::DataClasses value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_DataClasses(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::CustomDataClass() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_CustomDataClass(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::MobileEquipmentId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_MobileEquipmentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::TelephoneNumbers() const noexcept
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_TelephoneNumbers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::SubscriberId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_SubscriberId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::SimIccId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_SimIccId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceType consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::DeviceType() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceType pDeviceType{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_DeviceType(put_abi(pDeviceType)));
    return pDeviceType;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandRadioState consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation<D>::CurrentRadioState() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState pCurrentState{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation)->get_CurrentRadioState(put_abi(pCurrentState)));
    return pCurrentState;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinManager consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>::PinManager() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinManager value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2)->get_PinManager(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>::Revision() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2)->get_Revision(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation2<D>::SerialNumber() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>::SimSpn() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3)->get_SimSpn(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>::SimPnn() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3)->get_SimPnn(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceInformation3<D>::SimGid1() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3)->get_SimGid1(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>::DeviceServiceId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService)->get_DeviceServiceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>::SupportedCommands() const noexcept
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService)->get_SupportedCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>::OpenDataSession() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService)->OpenDataSession(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceService<D>::OpenCommandSession() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService)->OpenCommandSession(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult<D>::StatusCode() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult)->get_StatusCode(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandResult<D>::ResponseData() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult)->get_ResponseData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>::SendQueryCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession)->SendQueryCommandAsync(commandId, get_abi(data), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>::SendSetCommandAsync(uint32_t commandId, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession)->SendSetCommandAsync(commandId, get_abi(data), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceCommandSession<D>::CloseSession() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession)->CloseSession());
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataReceivedEventArgs<D>::ReceivedData() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs)->get_ReceivedData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>::WriteDataAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession)->WriteDataAsync(get_abi(value), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>::CloseSession() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession)->CloseSession());
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession)->add_DataReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>::remove_DataReceived, DataReceived(eventHandler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceDataSession<D>::DataReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession)->remove_DataReceived(get_abi(eventCookie)));
}

template <typename D> GUID consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>::DeviceServiceId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation)->get_DeviceServiceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>::IsDataReadSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation)->get_IsDataReadSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceInformation<D>::IsDataWriteSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation)->get_IsDataWriteSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>::DeviceServiceId() const noexcept
{
    GUID value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails)->get_DeviceServiceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_NetworkOperators_IMobileBroadbandDeviceServiceTriggerDetails<D>::ReceivedData() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails)->get_ReceivedData(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandAccount consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::CurrentAccount() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandAccount value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_CurrentAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::DeviceInformation() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::MaxDeviceServiceCommandSizeInBytes() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_MaxDeviceServiceCommandSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::MaxDeviceServiceDataSizeInBytes() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_MaxDeviceServiceDataSizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::DeviceServices() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_DeviceServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandDeviceService consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::GetDeviceService(GUID const& deviceServiceId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandDeviceService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->GetDeviceService(get_abi(deviceServiceId), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::IsResetSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_IsResetSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::ResetAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->ResetAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::GetCurrentConfigurationAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->GetCurrentConfigurationAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem<D>::CurrentNetwork() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem)->get_CurrentNetwork(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2<D>::GetIsPassthroughEnabledAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem2)->GetIsPassthroughEnabledAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus> consume_Windows_Networking_NetworkOperators_IMobileBroadbandModem2<D>::SetIsPassthroughEnabledAsync(bool value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandModemStatus> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModem2)->SetIsPassthroughEnabledAsync(value, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUicc consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>::Uicc() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandUicc value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration)->get_Uicc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>::HomeProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration)->get_HomeProviderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration<D>::HomeProviderName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration)->get_HomeProviderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandSarManager consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemConfiguration2<D>::SarManager() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandSarManager value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2)->get_SarManager(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandModem consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandModem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics)->FromId(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandModem consume_Windows_Networking_NetworkOperators_IMobileBroadbandModemStatics<D>::GetDefault() const
{
    Windows::Networking::NetworkOperators::MobileBroadbandModem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::NetworkAdapter() const noexcept
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkRegistrationState consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::NetworkRegistrationState() const noexcept
{
    Windows::Networking::NetworkOperators::NetworkRegistrationState registrationState{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_NetworkRegistrationState(put_abi(registrationState)));
    return registrationState;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::RegistrationNetworkError() const noexcept
{
    uint32_t networkError{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_RegistrationNetworkError(&networkError));
    return networkError;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::PacketAttachNetworkError() const noexcept
{
    uint32_t networkError{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_PacketAttachNetworkError(&networkError));
    return networkError;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::ActivationNetworkError() const noexcept
{
    uint32_t networkError{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_ActivationNetworkError(&networkError));
    return networkError;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::AccessPointName() const noexcept
{
    hstring apn{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_AccessPointName(put_abi(apn)));
    return apn;
}

template <typename D> Windows::Networking::NetworkOperators::DataClasses consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::RegisteredDataClass() const noexcept
{
    Windows::Networking::NetworkOperators::DataClasses value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_RegisteredDataClass(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::RegisteredProviderId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_RegisteredProviderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::RegisteredProviderName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->get_RegisteredProviderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork<D>::ShowConnectionUI() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork)->ShowConnectionUI());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2<D>::GetVoiceCallSupportAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2)->GetVoiceCallSupportAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork2<D>::RegistrationUiccApps() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2)->get_RegistrationUiccApps(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo> consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetwork3<D>::GetCellsInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3)->GetCellsInfoAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandNetwork consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChange<D>::Network() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandNetwork value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange)->get_Network(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> consume_Windows_Networking_NetworkOperators_IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails<D>::NetworkRegistrationStateChanges() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails)->get_NetworkRegistrationStateChanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinType consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::Type() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinType value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinLockState consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::LockState() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_LockState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinFormat consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::Format() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinFormat value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_Format(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::Enabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_Enabled(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::MaxLength() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_MaxLength(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::MinLength() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_MinLength(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::AttemptsRemaining() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->get_AttemptsRemaining(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::EnableAsync(param::hstring const& currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->EnableAsync(get_abi(currentPin), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::DisableAsync(param::hstring const& currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->DisableAsync(get_abi(currentPin), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::EnterAsync(param::hstring const& currentPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->EnterAsync(get_abi(currentPin), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::ChangeAsync(param::hstring const& currentPin, param::hstring const& newPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->ChangeAsync(get_abi(currentPin), get_abi(newPin), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPin<D>::UnblockAsync(param::hstring const& pinUnblockKey, param::hstring const& newPin) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPin)->UnblockAsync(get_abi(pinUnblockKey), get_abi(newPin), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinType consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>::PinType() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinType value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange)->get_PinType(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPinLockState consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChange<D>::PinLockState() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandPinLockState value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange)->get_PinLockState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinLockStateChangeTriggerDetails<D>::PinLockStateChanges() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails)->get_PinLockStateChanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinType> consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager<D>::SupportedPins() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandPinType> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinManager)->get_SupportedPins(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandPin consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinManager<D>::GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType const& pinType) const
{
    Windows::Networking::NetworkOperators::MobileBroadbandPin value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinManager)->GetPin(get_abi(pinType), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult<D>::IsSuccessful() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult)->get_IsSuccessful(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandPinOperationResult<D>::AttemptsRemaining() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult)->get_AttemptsRemaining(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandRadioState consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChange<D>::RadioState() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandRadioState value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange)->get_RadioState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> consume_Windows_Networking_NetworkOperators_IMobileBroadbandRadioStateChangeTriggerDetails<D>::RadioStateChanges() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails)->get_RadioStateChanges(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::IsBackoffEnabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->get_IsBackoffEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::IsWiFiHardwareIntegrated() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->get_IsWiFiHardwareIntegrated(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::IsSarControlledByHardware() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->get_IsSarControlledByHardware(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::Antennas() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->get_Antennas(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::HysteresisTimerPeriod() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->get_HysteresisTimerPeriod(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::TransmissionStateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->add_TransmissionStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager> consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::TransmissionStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>(this, &abi_t<Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>::remove_TransmissionStateChanged, TransmissionStateChanged(handler));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::TransmissionStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->remove_TransmissionStateChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::EnableBackoffAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->EnableBackoffAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::DisableBackoffAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->DisableBackoffAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::SetConfigurationAsync(param::async_iterable<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> const& antennas) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->SetConfigurationAsync(get_abi(antennas), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::RevertSarToHardwareControlAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->RevertSarToHardwareControlAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::SetTransmissionStateChangedHysteresisAsync(Windows::Foundation::TimeSpan const& timerPeriod) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->SetTransmissionStateChangedHysteresisAsync(get_abi(timerPeriod), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::GetIsTransmittingAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->GetIsTransmittingAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::StartTransmissionStateMonitoring() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->StartTransmissionStateMonitoring());
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IMobileBroadbandSarManager<D>::StopTransmissionStateMonitoring() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandSarManager)->StopTransmissionStateMonitoring());
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IMobileBroadbandTransmissionStateChangedEventArgs<D>::IsTransmitting() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs)->get_IsTransmitting(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc<D>::SimIccId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUicc)->get_SimIccId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandUicc<D>::GetUiccAppsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUicc)->GetUiccAppsAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>::Id() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAppKind consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>::Kind() const noexcept
{
    Windows::Networking::NetworkOperators::UiccAppKind value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>::GetRecordDetailsAsync(param::async_iterable<uint32_t> const& uiccFilePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp)->GetRecordDetailsAsync(get_abi(uiccFilePath), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccApp<D>::ReadRecordAsync(param::async_iterable<uint32_t> const& uiccFilePath, int32_t recordIndex) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp)->ReadRecordAsync(get_abi(uiccFilePath), recordIndex, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult<D>::Status() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppReadRecordResult<D>::Data() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::Status() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAppRecordKind consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::Kind() const noexcept
{
    Windows::Networking::NetworkOperators::UiccAppRecordKind value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::RecordCount() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_RecordCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::RecordSize() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_RecordSize(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAccessCondition consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::ReadAccessCondition() const noexcept
{
    Windows::Networking::NetworkOperators::UiccAccessCondition value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_ReadAccessCondition(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UiccAccessCondition consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppRecordDetailsResult<D>::WriteAccessCondition() const noexcept
{
    Windows::Networking::NetworkOperators::UiccAccessCondition value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult)->get_WriteAccessCondition(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult<D>::Status() const noexcept
{
    Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> consume_Windows_Networking_NetworkOperators_IMobileBroadbandUiccAppsResult<D>::UiccApps() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult)->get_UiccApps(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::NotificationType() const noexcept
{
    Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_NotificationType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::NetworkAccountId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::EncodingType() const noexcept
{
    uint8_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_EncodingType(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::Message() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_Message(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::RuleId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_RuleId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::ISmsMessage consume_Windows_Networking_NetworkOperators_INetworkOperatorNotificationEventDetails<D>::SmsMessage() const noexcept
{
    Windows::Devices::Sms::ISmsMessage value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails)->get_SmsMessage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>::Ssid() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration)->get_Ssid(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>::Ssid(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration)->put_Ssid(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>::Passphrase() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration)->get_Passphrase(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringAccessPointConfiguration<D>::Passphrase(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration)->put_Passphrase(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient<D>::MacAddress() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient)->get_MacAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClient<D>::HostNames() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient)->get_HostNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringClientManager<D>::GetTetheringClients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager)->GetTetheringClients(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringEntitlementCheck<D>::AuthorizeTethering(bool allow, param::hstring const& entitlementFailureReason) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck)->AuthorizeTethering(allow, get_abi(entitlementFailureReason)));
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::MaxClientCount() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->get_MaxClientCount(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::ClientCount() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->get_ClientCount(&value));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringOperationalState consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::TetheringOperationalState() const noexcept
{
    Windows::Networking::NetworkOperators::TetheringOperationalState value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->get_TetheringOperationalState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::GetCurrentAccessPointConfiguration() const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration configuration{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->GetCurrentAccessPointConfiguration(put_abi(configuration)));
    return configuration;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::ConfigureAccessPointAsync(Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration const& configuration) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->ConfigureAccessPointAsync(get_abi(configuration), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::StartTetheringAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->StartTetheringAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManager<D>::StopTetheringAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager)->StopTetheringAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringCapability consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics<D>::GetTetheringCapability(param::hstring const& networkAccountId) const
{
    Windows::Networking::NetworkOperators::TetheringCapability value{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics)->GetTetheringCapability(get_abi(networkAccountId), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics<D>::CreateFromNetworkAccountId(param::hstring const& networkAccountId) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics)->CreateFromNetworkAccountId(get_abi(networkAccountId), put_abi(ppManager)));
    return ppManager;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringCapability consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2<D>::GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const
{
    Windows::Networking::NetworkOperators::TetheringCapability result{};
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2)->GetTetheringCapabilityFromConnectionProfile(get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics2<D>::CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2)->CreateFromConnectionProfile(get_abi(profile), put_abi(ppManager)));
    return ppManager;
}

template <typename D> Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringManagerStatics3<D>::CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager ppManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3)->CreateFromConnectionProfileWithTargetAdapter(get_abi(profile), get_abi(adapter), put_abi(ppManager)));
    return ppManager;
}

template <typename D> Windows::Networking::NetworkOperators::TetheringOperationStatus consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult<D>::Status() const noexcept
{
    Windows::Networking::NetworkOperators::TetheringOperationStatus value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_INetworkOperatorTetheringOperationResult<D>::AdditionalErrorMessage() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult)->get_AdditionalErrorMessage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults<D>::AllElementsProvisioned() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults)->get_AllElementsProvisioned(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IProvisionFromXmlDocumentResults<D>::ProvisionResultsXml() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults)->get_ProvisionResultsXml(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IProvisionedProfile<D>::UpdateCost(Windows::Networking::Connectivity::NetworkCostType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisionedProfile)->UpdateCost(get_abi(value)));
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IProvisionedProfile<D>::UpdateUsage(Windows::Networking::NetworkOperators::ProfileUsage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisionedProfile)->UpdateUsage(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> consume_Windows_Networking_NetworkOperators_IProvisioningAgent<D>::ProvisionFromXmlDocumentAsync(param::hstring const& provisioningXmlDocument) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisioningAgent)->ProvisionFromXmlDocumentAsync(get_abi(provisioningXmlDocument), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Networking::NetworkOperators::ProvisionedProfile consume_Windows_Networking_NetworkOperators_IProvisioningAgent<D>::GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType const& mediaType, param::hstring const& profileName) const
{
    Windows::Networking::NetworkOperators::ProvisionedProfile provisionedProfile{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisioningAgent)->GetProvisionedProfile(get_abi(mediaType), get_abi(profileName), put_abi(provisionedProfile)));
    return provisionedProfile;
}

template <typename D> Windows::Networking::NetworkOperators::ProvisioningAgent consume_Windows_Networking_NetworkOperators_IProvisioningAgentStaticMethods<D>::CreateFromNetworkAccountId(param::hstring const& networkAccountId) const
{
    Windows::Networking::NetworkOperators::ProvisioningAgent provisioningAgent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods)->CreateFromNetworkAccountId(get_abi(networkAccountId), put_abi(provisioningAgent)));
    return provisioningAgent;
}

template <typename D> uint8_t consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::DataCodingScheme() const noexcept
{
    uint8_t value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->get_DataCodingScheme(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::DataCodingScheme(uint8_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->put_DataCodingScheme(value));
}

template <typename D> com_array<uint8_t> consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::GetPayload() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->GetPayload(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::SetPayload(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->SetPayload(value.size(), get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::PayloadAsText() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->get_PayloadAsText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IUssdMessage<D>::PayloadAsText(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessage)->put_PayloadAsText(get_abi(value)));
}

template <typename D> Windows::Networking::NetworkOperators::UssdMessage consume_Windows_Networking_NetworkOperators_IUssdMessageFactory<D>::CreateMessage(param::hstring const& messageText) const
{
    Windows::Networking::NetworkOperators::UssdMessage ussdMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdMessageFactory)->CreateMessage(get_abi(messageText), put_abi(ussdMessage)));
    return ussdMessage;
}

template <typename D> Windows::Networking::NetworkOperators::UssdResultCode consume_Windows_Networking_NetworkOperators_IUssdReply<D>::ResultCode() const noexcept
{
    Windows::Networking::NetworkOperators::UssdResultCode value{};
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdReply)->get_ResultCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::NetworkOperators::UssdMessage consume_Windows_Networking_NetworkOperators_IUssdReply<D>::Message() const noexcept
{
    Windows::Networking::NetworkOperators::UssdMessage value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdReply)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> consume_Windows_Networking_NetworkOperators_IUssdSession<D>::SendMessageAndGetReplyAsync(Windows::Networking::NetworkOperators::UssdMessage const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::NetworkOperators::UssdReply> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdSession)->SendMessageAndGetReplyAsync(get_abi(message), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Networking_NetworkOperators_IUssdSession<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdSession)->Close());
}

template <typename D> Windows::Networking::NetworkOperators::UssdSession consume_Windows_Networking_NetworkOperators_IUssdSessionStatics<D>::CreateFromNetworkAccountId(param::hstring const& networkAccountId) const
{
    Windows::Networking::NetworkOperators::UssdSession ussdSession{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdSessionStatics)->CreateFromNetworkAccountId(get_abi(networkAccountId), put_abi(ussdSession)));
    return ussdSession;
}

template <typename D> Windows::Networking::NetworkOperators::UssdSession consume_Windows_Networking_NetworkOperators_IUssdSessionStatics<D>::CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId) const
{
    Windows::Networking::NetworkOperators::UssdSession ussdSession{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::NetworkOperators::IUssdSessionStatics)->CreateFromNetworkInterfaceId(get_abi(networkInterfaceId), put_abi(ussdSession)));
    return ussdSession;
}

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IFdnAccessManagerStatics> : produce_base<D, Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>
{
    HRESULT __stdcall RequestUnlockAsync(HSTRING contactListId, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RequestUnlockAsync(*reinterpret_cast<hstring const*>(&contactListId)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext>
{
    HRESULT __stdcall get_WirelessNetworkId(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        std::tie(*__valueSize, *value) = detach_abi(this->shim().WirelessNetworkId());
        return S_OK;
    }

    HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAdapter());
        return S_OK;
    }

    HRESULT __stdcall get_RedirectMessageUrl(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RedirectMessageUrl());
        return S_OK;
    }

    HRESULT __stdcall get_RedirectMessageXml(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RedirectMessageXml());
        return S_OK;
    }

    HRESULT __stdcall get_AuthenticationUrl(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AuthenticationUrl());
        return S_OK;
    }

    HRESULT __stdcall IssueCredentials(HSTRING userName, HSTRING password, HSTRING extraParameters, bool markAsManualConnectOnFailure) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IssueCredentials(*reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<hstring const*>(&extraParameters), markAsManualConnectOnFailure);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AbortAuthentication(bool markAsManual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AbortAuthentication(markAsManual);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SkipAuthentication() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkipAuthentication();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TriggerAttentionRequired(HSTRING packageRelativeApplicationId, HSTRING applicationParameters) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TriggerAttentionRequired(*reinterpret_cast<hstring const*>(&packageRelativeApplicationId), *reinterpret_cast<hstring const*>(&applicationParameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2>
{
    HRESULT __stdcall IssueCredentialsAsync(HSTRING userName, HSTRING password, HSTRING extraParameters, bool markAsManualConnectOnFailure, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().IssueCredentialsAsync(*reinterpret_cast<hstring const*>(&userName), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<hstring const*>(&extraParameters), markAsManualConnectOnFailure));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>
{
    HRESULT __stdcall TryGetAuthenticationContext(HSTRING evenToken, ::IUnknown** context, bool* isValid) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isValid = detach_abi(this->shim().TryGetAuthenticationContext(*reinterpret_cast<hstring const*>(&evenToken), *reinterpret_cast<Windows::Networking::NetworkOperators::HotspotAuthenticationContext*>(context)));
            return S_OK;
        }
        catch (...)
        {
            *context = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails>
{
    HRESULT __stdcall get_EventToken(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EventToken());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> : produce_base<D, Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult>
{
    HRESULT __stdcall get_HasNetworkErrorOccurred(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasNetworkErrorOccurred());
        return S_OK;
    }

    HRESULT __stdcall get_ResponseCode(Windows::Networking::NetworkOperators::HotspotAuthenticationResponseCode* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ResponseCode());
        return S_OK;
    }

    HRESULT __stdcall get_LogoffUrl(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LogoffUrl());
        return S_OK;
    }

    HRESULT __stdcall get_AuthenticationReplyXml(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AuthenticationReplyXml());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFSpn());
        return S_OK;
    }

    HRESULT __stdcall get_Gid1(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid1());
        return S_OK;
    }

    HRESULT __stdcall get_Gid2(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid2());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFSpn());
        return S_OK;
    }

    HRESULT __stdcall get_Gid1(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid1());
        return S_OK;
    }

    HRESULT __stdcall get_Gid2(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid2());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>
{
    HRESULT __stdcall get_EFOns(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFOns());
        return S_OK;
    }

    HRESULT __stdcall get_EFSpn(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFSpn());
        return S_OK;
    }

    HRESULT __stdcall get_Gid1(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid1());
        return S_OK;
    }

    HRESULT __stdcall get_Gid2(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid2());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> : produce_base<D, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>
{
    HRESULT __stdcall get_EFSpn(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFSpn());
        return S_OK;
    }

    HRESULT __stdcall get_EFOpl(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFOpl());
        return S_OK;
    }

    HRESULT __stdcall get_EFPnn(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EFPnn());
        return S_OK;
    }

    HRESULT __stdcall get_Gid1(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid1());
        return S_OK;
    }

    HRESULT __stdcall get_Gid2(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gid2());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount>
{
    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAccountId());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceProviderGuid(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceProviderGuid());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceProviderName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceProviderName());
        return S_OK;
    }

    HRESULT __stdcall get_CurrentNetwork(::IUnknown** network) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *network = detach_abi(this->shim().CurrentNetwork());
        return S_OK;
    }

    HRESULT __stdcall get_CurrentDeviceInformation(::IUnknown** deviceInformation) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *deviceInformation = detach_abi(this->shim().CurrentDeviceInformation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount2>
{
    HRESULT __stdcall GetConnectionProfiles(::IUnknown** value) noexcept final
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
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount3> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccount3>
{
    HRESULT __stdcall get_AccountExperienceUrl(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AccountExperienceUrl());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs>
{
    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAccountId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>
{
    HRESULT __stdcall get_AvailableNetworkAccountIds(::IUnknown** ppAccountIds) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *ppAccountIds = detach_abi(this->shim().AvailableNetworkAccountIds());
        return S_OK;
    }

    HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ppAccount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppAccount = detach_abi(this->shim().CreateFromNetworkAccountId(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ppAccount = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs>
{
    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAccountId());
        return S_OK;
    }

    HRESULT __stdcall get_HasDeviceInformationChanged(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasDeviceInformationChanged());
        return S_OK;
    }

    HRESULT __stdcall get_HasNetworkChanged(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HasNetworkChanged());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher>
{
    HRESULT __stdcall add_AccountAdded(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AccountAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountAdded(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountAdded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountUpdated(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AccountUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountUpdated(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountUpdated(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountRemoved(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AccountRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountRemoved(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountRemoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcherStatus* status) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *status = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar>
{
    HRESULT __stdcall get_AntennaIndex(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AntennaIndex());
        return S_OK;
    }

    HRESULT __stdcall get_SarBackoffIndex(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SarBackoffIndex());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma>
{
    HRESULT __stdcall get_BaseStationId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationId());
        return S_OK;
    }

    HRESULT __stdcall get_BaseStationPNCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationPNCode());
        return S_OK;
    }

    HRESULT __stdcall get_BaseStationLatitude(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationLatitude());
        return S_OK;
    }

    HRESULT __stdcall get_BaseStationLongitude(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationLongitude());
        return S_OK;
    }

    HRESULT __stdcall get_BaseStationLastBroadcastGpsTime(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationLastBroadcastGpsTime());
        return S_OK;
    }

    HRESULT __stdcall get_NetworkId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkId());
        return S_OK;
    }

    HRESULT __stdcall get_PilotSignalStrengthInDB(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PilotSignalStrengthInDB());
        return S_OK;
    }

    HRESULT __stdcall get_SystemId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SystemId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm>
{
    HRESULT __stdcall get_BaseStationId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaseStationId());
        return S_OK;
    }

    HRESULT __stdcall get_CellId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellId());
        return S_OK;
    }

    HRESULT __stdcall get_ChannelNumber(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ChannelNumber());
        return S_OK;
    }

    HRESULT __stdcall get_LocationAreaCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationAreaCode());
        return S_OK;
    }

    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_ReceivedSignalStrengthInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReceivedSignalStrengthInDBm());
        return S_OK;
    }

    HRESULT __stdcall get_TimingAdvanceInBitPeriods(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TimingAdvanceInBitPeriods());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellLte> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellLte>
{
    HRESULT __stdcall get_CellId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellId());
        return S_OK;
    }

    HRESULT __stdcall get_ChannelNumber(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ChannelNumber());
        return S_OK;
    }

    HRESULT __stdcall get_PhysicalCellId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PhysicalCellId());
        return S_OK;
    }

    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_ReferenceSignalReceivedPowerInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReferenceSignalReceivedPowerInDBm());
        return S_OK;
    }

    HRESULT __stdcall get_ReferenceSignalReceivedQualityInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReferenceSignalReceivedQualityInDBm());
        return S_OK;
    }

    HRESULT __stdcall get_TimingAdvanceInBitPeriods(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TimingAdvanceInBitPeriods());
        return S_OK;
    }

    HRESULT __stdcall get_TrackingAreaCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TrackingAreaCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma>
{
    HRESULT __stdcall get_CellId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellId());
        return S_OK;
    }

    HRESULT __stdcall get_CellParameterId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellParameterId());
        return S_OK;
    }

    HRESULT __stdcall get_ChannelNumber(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ChannelNumber());
        return S_OK;
    }

    HRESULT __stdcall get_LocationAreaCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationAreaCode());
        return S_OK;
    }

    HRESULT __stdcall get_PathLossInDB(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PathLossInDB());
        return S_OK;
    }

    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_ReceivedSignalCodePowerInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReceivedSignalCodePowerInDBm());
        return S_OK;
    }

    HRESULT __stdcall get_TimingAdvanceInBitPeriods(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TimingAdvanceInBitPeriods());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts>
{
    HRESULT __stdcall get_CellId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellId());
        return S_OK;
    }

    HRESULT __stdcall get_ChannelNumber(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ChannelNumber());
        return S_OK;
    }

    HRESULT __stdcall get_LocationAreaCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationAreaCode());
        return S_OK;
    }

    HRESULT __stdcall get_PathLossInDB(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PathLossInDB());
        return S_OK;
    }

    HRESULT __stdcall get_PrimaryScramblingCode(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PrimaryScramblingCode());
        return S_OK;
    }

    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_ReceivedSignalCodePowerInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReceivedSignalCodePowerInDBm());
        return S_OK;
    }

    HRESULT __stdcall get_SignalToNoiseRatioInDB(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SignalToNoiseRatioInDB());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo>
{
    HRESULT __stdcall get_NeighboringCellsCdma(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringCellsCdma());
        return S_OK;
    }

    HRESULT __stdcall get_NeighboringCellsGsm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringCellsGsm());
        return S_OK;
    }

    HRESULT __stdcall get_NeighboringCellsLte(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringCellsLte());
        return S_OK;
    }

    HRESULT __stdcall get_NeighboringCellsTdscdma(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringCellsTdscdma());
        return S_OK;
    }

    HRESULT __stdcall get_NeighboringCellsUmts(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NeighboringCellsUmts());
        return S_OK;
    }

    HRESULT __stdcall get_ServingCellsCdma(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServingCellsCdma());
        return S_OK;
    }

    HRESULT __stdcall get_ServingCellsGsm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServingCellsGsm());
        return S_OK;
    }

    HRESULT __stdcall get_ServingCellsLte(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServingCellsLte());
        return S_OK;
    }

    HRESULT __stdcall get_ServingCellsTdscdma(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServingCellsTdscdma());
        return S_OK;
    }

    HRESULT __stdcall get_ServingCellsUmts(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServingCellsUmts());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation>
{
    HRESULT __stdcall get_NetworkDeviceStatus(Windows::Networking::NetworkOperators::NetworkDeviceStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkDeviceStatus());
        return S_OK;
    }

    HRESULT __stdcall get_Manufacturer(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Manufacturer());
        return S_OK;
    }

    HRESULT __stdcall get_Model(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Model());
        return S_OK;
    }

    HRESULT __stdcall get_FirmwareInformation(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FirmwareInformation());
        return S_OK;
    }

    HRESULT __stdcall get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CellularClass());
        return S_OK;
    }

    HRESULT __stdcall get_DataClasses(Windows::Networking::NetworkOperators::DataClasses* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DataClasses());
        return S_OK;
    }

    HRESULT __stdcall get_CustomDataClass(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CustomDataClass());
        return S_OK;
    }

    HRESULT __stdcall get_MobileEquipmentId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MobileEquipmentId());
        return S_OK;
    }

    HRESULT __stdcall get_TelephoneNumbers(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TelephoneNumbers());
        return S_OK;
    }

    HRESULT __stdcall get_SubscriberId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SubscriberId());
        return S_OK;
    }

    HRESULT __stdcall get_SimIccId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimIccId());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceType(Windows::Networking::NetworkOperators::MobileBroadbandDeviceType* pDeviceType) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *pDeviceType = detach_abi(this->shim().DeviceType());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_CurrentRadioState(Windows::Networking::NetworkOperators::MobileBroadbandRadioState* pCurrentState) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *pCurrentState = detach_abi(this->shim().CurrentRadioState());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2>
{
    HRESULT __stdcall get_PinManager(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PinManager());
        return S_OK;
    }

    HRESULT __stdcall get_Revision(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Revision());
        return S_OK;
    }

    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SerialNumber());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3>
{
    HRESULT __stdcall get_SimSpn(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimSpn());
        return S_OK;
    }

    HRESULT __stdcall get_SimPnn(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimPnn());
        return S_OK;
    }

    HRESULT __stdcall get_SimGid1(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimGid1());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService>
{
    HRESULT __stdcall get_DeviceServiceId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_SupportedCommands(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportedCommands());
        return S_OK;
    }

    HRESULT __stdcall OpenDataSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenDataSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenCommandSession(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpenCommandSession());
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
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult>
{
    HRESULT __stdcall get_StatusCode(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StatusCode());
        return S_OK;
    }

    HRESULT __stdcall get_ResponseData(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ResponseData());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession>
{
    HRESULT __stdcall SendQueryCommandAsync(uint32_t commandId, ::IUnknown* data, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SendQueryCommandAsync(commandId, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendSetCommandAsync(uint32_t commandId, ::IUnknown* data, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SendSetCommandAsync(commandId, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CloseSession() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseSession();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs>
{
    HRESULT __stdcall get_ReceivedData(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReceivedData());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession>
{
    HRESULT __stdcall WriteDataAsync(::IUnknown* value, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().WriteDataAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CloseSession() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseSession();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataReceived(::IUnknown* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().DataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession, Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataReceived(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation>
{
    HRESULT __stdcall get_DeviceServiceId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_IsDataReadSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDataReadSupported());
        return S_OK;
    }

    HRESULT __stdcall get_IsDataWriteSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDataWriteSupported());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceServiceId(GUID* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceServiceId());
        return S_OK;
    }

    HRESULT __stdcall get_ReceivedData(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReceivedData());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem>
{
    HRESULT __stdcall get_CurrentAccount(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CurrentAccount());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformation());
        return S_OK;
    }

    HRESULT __stdcall get_MaxDeviceServiceCommandSizeInBytes(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxDeviceServiceCommandSizeInBytes());
        return S_OK;
    }

    HRESULT __stdcall get_MaxDeviceServiceDataSizeInBytes(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxDeviceServiceDataSizeInBytes());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceServices(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceServices());
        return S_OK;
    }

    HRESULT __stdcall GetDeviceService(GUID deviceServiceId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceService(*reinterpret_cast<GUID const*>(&deviceServiceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResetSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsResetSupported());
        return S_OK;
    }

    HRESULT __stdcall ResetAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ResetAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentConfigurationAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetCurrentConfigurationAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentNetwork(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CurrentNetwork());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModem2>
{
    HRESULT __stdcall GetIsPassthroughEnabledAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetIsPassthroughEnabledAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsPassthroughEnabledAsync(bool value, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetIsPassthroughEnabledAsync(value));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration>
{
    HRESULT __stdcall get_Uicc(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Uicc());
        return S_OK;
    }

    HRESULT __stdcall get_HomeProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HomeProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_HomeProviderName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HomeProviderName());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2>
{
    HRESULT __stdcall get_SarManager(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SarManager());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork>
{
    HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAdapter());
        return S_OK;
    }

    HRESULT __stdcall get_NetworkRegistrationState(Windows::Networking::NetworkOperators::NetworkRegistrationState* registrationState) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *registrationState = detach_abi(this->shim().NetworkRegistrationState());
        return S_OK;
    }

    HRESULT __stdcall get_RegistrationNetworkError(uint32_t* networkError) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *networkError = detach_abi(this->shim().RegistrationNetworkError());
        return S_OK;
    }

    HRESULT __stdcall get_PacketAttachNetworkError(uint32_t* networkError) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *networkError = detach_abi(this->shim().PacketAttachNetworkError());
        return S_OK;
    }

    HRESULT __stdcall get_ActivationNetworkError(uint32_t* networkError) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *networkError = detach_abi(this->shim().ActivationNetworkError());
        return S_OK;
    }

    HRESULT __stdcall get_AccessPointName(HSTRING* apn) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *apn = detach_abi(this->shim().AccessPointName());
        return S_OK;
    }

    HRESULT __stdcall get_RegisteredDataClass(Windows::Networking::NetworkOperators::DataClasses* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RegisteredDataClass());
        return S_OK;
    }

    HRESULT __stdcall get_RegisteredProviderId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RegisteredProviderId());
        return S_OK;
    }

    HRESULT __stdcall get_RegisteredProviderName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RegisteredProviderName());
        return S_OK;
    }

    HRESULT __stdcall ShowConnectionUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowConnectionUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2>
{
    HRESULT __stdcall GetVoiceCallSupportAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetVoiceCallSupportAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegistrationUiccApps(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RegistrationUiccApps());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3>
{
    HRESULT __stdcall GetCellsInfoAsync(::IUnknown** asyncOperation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_abi(this->shim().GetCellsInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_Network(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Network());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails>
{
    HRESULT __stdcall get_NetworkRegistrationStateChanges(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkRegistrationStateChanges());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPin> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPin>
{
    HRESULT __stdcall get_Type(Windows::Networking::NetworkOperators::MobileBroadbandPinType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Type());
        return S_OK;
    }

    HRESULT __stdcall get_LockState(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LockState());
        return S_OK;
    }

    HRESULT __stdcall get_Format(Windows::Networking::NetworkOperators::MobileBroadbandPinFormat* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Format());
        return S_OK;
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Enabled());
        return S_OK;
    }

    HRESULT __stdcall get_MaxLength(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxLength());
        return S_OK;
    }

    HRESULT __stdcall get_MinLength(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinLength());
        return S_OK;
    }

    HRESULT __stdcall get_AttemptsRemaining(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AttemptsRemaining());
        return S_OK;
    }

    HRESULT __stdcall EnableAsync(HSTRING currentPin, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().EnableAsync(*reinterpret_cast<hstring const*>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableAsync(HSTRING currentPin, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().DisableAsync(*reinterpret_cast<hstring const*>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnterAsync(HSTRING currentPin, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().EnterAsync(*reinterpret_cast<hstring const*>(&currentPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeAsync(HSTRING currentPin, HSTRING newPin, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ChangeAsync(*reinterpret_cast<hstring const*>(&currentPin), *reinterpret_cast<hstring const*>(&newPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnblockAsync(HSTRING pinUnblockKey, HSTRING newPin, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().UnblockAsync(*reinterpret_cast<hstring const*>(&pinUnblockKey), *reinterpret_cast<hstring const*>(&newPin)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_PinType(Windows::Networking::NetworkOperators::MobileBroadbandPinType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PinType());
        return S_OK;
    }

    HRESULT __stdcall get_PinLockState(Windows::Networking::NetworkOperators::MobileBroadbandPinLockState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PinLockState());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails>
{
    HRESULT __stdcall get_PinLockStateChanges(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PinLockStateChanges());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinManager>
{
    HRESULT __stdcall get_SupportedPins(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportedPins());
        return S_OK;
    }

    HRESULT __stdcall GetPin(Windows::Networking::NetworkOperators::MobileBroadbandPinType pinType, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPin(*reinterpret_cast<Windows::Networking::NetworkOperators::MobileBroadbandPinType const*>(&pinType)));
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
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult>
{
    HRESULT __stdcall get_IsSuccessful(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsSuccessful());
        return S_OK;
    }

    HRESULT __stdcall get_AttemptsRemaining(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AttemptsRemaining());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_RadioState(Windows::Networking::NetworkOperators::MobileBroadbandRadioState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RadioState());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails>
{
    HRESULT __stdcall get_RadioStateChanges(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RadioStateChanges());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandSarManager> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandSarManager>
{
    HRESULT __stdcall get_IsBackoffEnabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsBackoffEnabled());
        return S_OK;
    }

    HRESULT __stdcall get_IsWiFiHardwareIntegrated(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsWiFiHardwareIntegrated());
        return S_OK;
    }

    HRESULT __stdcall get_IsSarControlledByHardware(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsSarControlledByHardware());
        return S_OK;
    }

    HRESULT __stdcall get_Antennas(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Antennas());
        return S_OK;
    }

    HRESULT __stdcall get_HysteresisTimerPeriod(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HysteresisTimerPeriod());
        return S_OK;
    }

    HRESULT __stdcall add_TransmissionStateChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TransmissionStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::NetworkOperators::MobileBroadbandSarManager, Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TransmissionStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransmissionStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableBackoffAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().EnableBackoffAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableBackoffAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DisableBackoffAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetConfigurationAsync(::IUnknown* antennas, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetConfigurationAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> const*>(&antennas)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RevertSarToHardwareControlAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RevertSarToHardwareControlAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTransmissionStateChangedHysteresisAsync(Windows::Foundation::TimeSpan timerPeriod, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetTransmissionStateChangedHysteresisAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timerPeriod)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsTransmittingAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIsTransmittingAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartTransmissionStateMonitoring() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTransmissionStateMonitoring();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopTransmissionStateMonitoring() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopTransmissionStateMonitoring();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs>
{
    HRESULT __stdcall get_IsTransmitting(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsTransmitting());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUicc> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUicc>
{
    HRESULT __stdcall get_SimIccId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SimIccId());
        return S_OK;
    }

    HRESULT __stdcall GetUiccAppsAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetUiccAppsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp>
{
    HRESULT __stdcall get_Id(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_Kind(Windows::Networking::NetworkOperators::UiccAppKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Kind());
        return S_OK;
    }

    HRESULT __stdcall GetRecordDetailsAsync(::IUnknown* uiccFilePath, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetRecordDetailsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<uint32_t> const*>(&uiccFilePath)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadRecordAsync(::IUnknown* uiccFilePath, int32_t recordIndex, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ReadRecordAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<uint32_t> const*>(&uiccFilePath), recordIndex));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Data());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_Kind(Windows::Networking::NetworkOperators::UiccAppRecordKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Kind());
        return S_OK;
    }

    HRESULT __stdcall get_RecordCount(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RecordCount());
        return S_OK;
    }

    HRESULT __stdcall get_RecordSize(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RecordSize());
        return S_OK;
    }

    HRESULT __stdcall get_ReadAccessCondition(Windows::Networking::NetworkOperators::UiccAccessCondition* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadAccessCondition());
        return S_OK;
    }

    HRESULT __stdcall get_WriteAccessCondition(Windows::Networking::NetworkOperators::UiccAccessCondition* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().WriteAccessCondition());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> : produce_base<D, Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::MobileBroadbandUiccAppOperationStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_UiccApps(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UiccApps());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails>
{
    HRESULT __stdcall get_NotificationType(Windows::Networking::NetworkOperators::NetworkOperatorEventMessageType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NotificationType());
        return S_OK;
    }

    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().NetworkAccountId());
        return S_OK;
    }

    HRESULT __stdcall get_EncodingType(uint8_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EncodingType());
        return S_OK;
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Message());
        return S_OK;
    }

    HRESULT __stdcall get_RuleId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RuleId());
        return S_OK;
    }

    HRESULT __stdcall get_SmsMessage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SmsMessage());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration>
{
    HRESULT __stdcall get_Ssid(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Ssid());
        return S_OK;
    }

    HRESULT __stdcall put_Ssid(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Ssid(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_Passphrase(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Passphrase());
        return S_OK;
    }

    HRESULT __stdcall put_Passphrase(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Passphrase(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient>
{
    HRESULT __stdcall get_MacAddress(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MacAddress());
        return S_OK;
    }

    HRESULT __stdcall get_HostNames(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HostNames());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager>
{
    HRESULT __stdcall GetTetheringClients(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTetheringClients());
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
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck>
{
    HRESULT __stdcall AuthorizeTethering(bool allow, HSTRING entitlementFailureReason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthorizeTethering(allow, *reinterpret_cast<hstring const*>(&entitlementFailureReason));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager>
{
    HRESULT __stdcall get_MaxClientCount(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxClientCount());
        return S_OK;
    }

    HRESULT __stdcall get_ClientCount(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ClientCount());
        return S_OK;
    }

    HRESULT __stdcall get_TetheringOperationalState(Windows::Networking::NetworkOperators::TetheringOperationalState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TetheringOperationalState());
        return S_OK;
    }

    HRESULT __stdcall GetCurrentAccessPointConfiguration(::IUnknown** configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *configuration = detach_abi(this->shim().GetCurrentAccessPointConfiguration());
            return S_OK;
        }
        catch (...)
        {
            *configuration = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ConfigureAccessPointAsync(::IUnknown* configuration, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ConfigureAccessPointAsync(*reinterpret_cast<Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration const*>(&configuration)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartTetheringAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StartTetheringAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopTetheringAsync(::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().StopTetheringAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>
{
    HRESULT __stdcall GetTetheringCapability(HSTRING networkAccountId, Windows::Networking::NetworkOperators::TetheringCapability* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTetheringCapability(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ppManager) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppManager = detach_abi(this->shim().CreateFromNetworkAccountId(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>
{
    HRESULT __stdcall GetTetheringCapabilityFromConnectionProfile(::IUnknown* profile, Windows::Networking::NetworkOperators::TetheringCapability* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTetheringCapabilityFromConnectionProfile(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromConnectionProfile(::IUnknown* profile, ::IUnknown** ppManager) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppManager = detach_abi(this->shim().CreateFromConnectionProfile(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>
{
    HRESULT __stdcall CreateFromConnectionProfileWithTargetAdapter(::IUnknown* profile, ::IUnknown* adapter, ::IUnknown** ppManager) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppManager = detach_abi(this->shim().CreateFromConnectionProfile(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfile const*>(&profile), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            *ppManager = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> : produce_base<D, Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::NetworkOperators::TetheringOperationStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_AdditionalErrorMessage(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AdditionalErrorMessage());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> : produce_base<D, Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults>
{
    HRESULT __stdcall get_AllElementsProvisioned(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AllElementsProvisioned());
        return S_OK;
    }

    HRESULT __stdcall get_ProvisionResultsXml(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ProvisionResultsXml());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisionedProfile> : produce_base<D, Windows::Networking::NetworkOperators::IProvisionedProfile>
{
    HRESULT __stdcall UpdateCost(Windows::Networking::Connectivity::NetworkCostType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateCost(*reinterpret_cast<Windows::Networking::Connectivity::NetworkCostType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateUsage(struct_of<16> value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateUsage(*reinterpret_cast<Windows::Networking::NetworkOperators::ProfileUsage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisioningAgent> : produce_base<D, Windows::Networking::NetworkOperators::IProvisioningAgent>
{
    HRESULT __stdcall ProvisionFromXmlDocumentAsync(HSTRING provisioningXmlDocument, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ProvisionFromXmlDocumentAsync(*reinterpret_cast<hstring const*>(&provisioningXmlDocument)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetProvisionedProfile(Windows::Networking::NetworkOperators::ProfileMediaType mediaType, HSTRING profileName, ::IUnknown** provisionedProfile) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *provisionedProfile = detach_abi(this->shim().GetProvisionedProfile(*reinterpret_cast<Windows::Networking::NetworkOperators::ProfileMediaType const*>(&mediaType), *reinterpret_cast<hstring const*>(&profileName)));
            return S_OK;
        }
        catch (...)
        {
            *provisionedProfile = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> : produce_base<D, Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>
{
    HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** provisioningAgent) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *provisioningAgent = detach_abi(this->shim().CreateFromNetworkAccountId(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *provisioningAgent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdMessage> : produce_base<D, Windows::Networking::NetworkOperators::IUssdMessage>
{
    HRESULT __stdcall get_DataCodingScheme(uint8_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DataCodingScheme());
        return S_OK;
    }

    HRESULT __stdcall put_DataCodingScheme(uint8_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DataCodingScheme(value);
        return S_OK;
    }

    HRESULT __stdcall GetPayload(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetPayload());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPayload(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPayload(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PayloadAsText(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PayloadAsText());
        return S_OK;
    }

    HRESULT __stdcall put_PayloadAsText(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().PayloadAsText(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdMessageFactory> : produce_base<D, Windows::Networking::NetworkOperators::IUssdMessageFactory>
{
    HRESULT __stdcall CreateMessage(HSTRING messageText, ::IUnknown** ussdMessage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ussdMessage = detach_abi(this->shim().CreateMessage(*reinterpret_cast<hstring const*>(&messageText)));
            return S_OK;
        }
        catch (...)
        {
            *ussdMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdReply> : produce_base<D, Windows::Networking::NetworkOperators::IUssdReply>
{
    HRESULT __stdcall get_ResultCode(Windows::Networking::NetworkOperators::UssdResultCode* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ResultCode());
        return S_OK;
    }

    HRESULT __stdcall get_Message(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Message());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdSession> : produce_base<D, Windows::Networking::NetworkOperators::IUssdSession>
{
    HRESULT __stdcall SendMessageAndGetReplyAsync(::IUnknown* message, ::IUnknown** asyncInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SendMessageAndGetReplyAsync(*reinterpret_cast<Windows::Networking::NetworkOperators::UssdMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::NetworkOperators::IUssdSessionStatics> : produce_base<D, Windows::Networking::NetworkOperators::IUssdSessionStatics>
{
    HRESULT __stdcall CreateFromNetworkAccountId(HSTRING networkAccountId, ::IUnknown** ussdSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ussdSession = detach_abi(this->shim().CreateFromNetworkAccountId(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *ussdSession = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNetworkInterfaceId(HSTRING networkInterfaceId, ::IUnknown** ussdSession) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ussdSession = detach_abi(this->shim().CreateFromNetworkInterfaceId(*reinterpret_cast<hstring const*>(&networkInterfaceId)));
            return S_OK;
        }
        catch (...)
        {
            *ussdSession = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::NetworkOperators {

inline Windows::Foundation::IAsyncOperation<bool> FdnAccessManager::RequestUnlockAsync(param::hstring const& contactListId)
{
    return get_activation_factory<FdnAccessManager, Windows::Networking::NetworkOperators::IFdnAccessManagerStatics>().RequestUnlockAsync(contactListId);
}

inline bool HotspotAuthenticationContext::TryGetAuthenticationContext(param::hstring const& evenToken, Windows::Networking::NetworkOperators::HotspotAuthenticationContext& context)
{
    return get_activation_factory<HotspotAuthenticationContext, Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics>().TryGetAuthenticationContext(evenToken, context);
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownCSimFilePaths, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::Gid1()
{
    return get_activation_factory<KnownCSimFilePaths, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownCSimFilePaths::Gid2()
{
    return get_activation_factory<KnownCSimFilePaths, Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::EFSpn()
{
    return get_activation_factory<KnownRuimFilePaths, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::Gid1()
{
    return get_activation_factory<KnownRuimFilePaths, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownRuimFilePaths::Gid2()
{
    return get_activation_factory<KnownRuimFilePaths, Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::EFOns()
{
    return get_activation_factory<KnownSimFilePaths, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>().EFOns();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownSimFilePaths, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::Gid1()
{
    return get_activation_factory<KnownSimFilePaths, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownSimFilePaths::Gid2()
{
    return get_activation_factory<KnownSimFilePaths, Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFSpn()
{
    return get_activation_factory<KnownUSimFilePaths, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>().EFSpn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFOpl()
{
    return get_activation_factory<KnownUSimFilePaths, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>().EFOpl();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::EFPnn()
{
    return get_activation_factory<KnownUSimFilePaths, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>().EFPnn();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::Gid1()
{
    return get_activation_factory<KnownUSimFilePaths, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>().Gid1();
}

inline Windows::Foundation::Collections::IVectorView<uint32_t> KnownUSimFilePaths::Gid2()
{
    return get_activation_factory<KnownUSimFilePaths, Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics>().Gid2();
}

inline Windows::Foundation::Collections::IVectorView<hstring> MobileBroadbandAccount::AvailableNetworkAccountIds()
{
    return get_activation_factory<MobileBroadbandAccount, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>().AvailableNetworkAccountIds();
}

inline Windows::Networking::NetworkOperators::MobileBroadbandAccount MobileBroadbandAccount::CreateFromNetworkAccountId(param::hstring const& networkAccountId)
{
    return get_activation_factory<MobileBroadbandAccount, Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline MobileBroadbandAccountWatcher::MobileBroadbandAccountWatcher() :
    MobileBroadbandAccountWatcher(activate_instance<MobileBroadbandAccountWatcher>())
{}

inline hstring MobileBroadbandModem::GetDeviceSelector()
{
    return get_activation_factory<MobileBroadbandModem, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>().GetDeviceSelector();
}

inline Windows::Networking::NetworkOperators::MobileBroadbandModem MobileBroadbandModem::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<MobileBroadbandModem, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>().FromId(deviceId);
}

inline Windows::Networking::NetworkOperators::MobileBroadbandModem MobileBroadbandModem::GetDefault()
{
    return get_activation_factory<MobileBroadbandModem, Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics>().GetDefault();
}

inline NetworkOperatorTetheringAccessPointConfiguration::NetworkOperatorTetheringAccessPointConfiguration() :
    NetworkOperatorTetheringAccessPointConfiguration(activate_instance<NetworkOperatorTetheringAccessPointConfiguration>())
{}

inline Windows::Networking::NetworkOperators::TetheringCapability NetworkOperatorTetheringManager::GetTetheringCapability(param::hstring const& networkAccountId)
{
    return get_activation_factory<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>().GetTetheringCapability(networkAccountId);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromNetworkAccountId(param::hstring const& networkAccountId)
{
    return get_activation_factory<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline Windows::Networking::NetworkOperators::TetheringCapability NetworkOperatorTetheringManager::GetTetheringCapabilityFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile)
{
    return get_activation_factory<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>().GetTetheringCapabilityFromConnectionProfile(profile);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile)
{
    return get_activation_factory<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2>().CreateFromConnectionProfile(profile);
}

inline Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager NetworkOperatorTetheringManager::CreateFromConnectionProfile(Windows::Networking::Connectivity::ConnectionProfile const& profile, Windows::Networking::Connectivity::NetworkAdapter const& adapter)
{
    return get_activation_factory<NetworkOperatorTetheringManager, Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3>().CreateFromConnectionProfile(profile, adapter);
}

inline ProvisioningAgent::ProvisioningAgent() :
    ProvisioningAgent(activate_instance<ProvisioningAgent>())
{}

inline Windows::Networking::NetworkOperators::ProvisioningAgent ProvisioningAgent::CreateFromNetworkAccountId(param::hstring const& networkAccountId)
{
    return get_activation_factory<ProvisioningAgent, Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods>().CreateFromNetworkAccountId(networkAccountId);
}

inline UssdMessage::UssdMessage(param::hstring const& messageText) :
    UssdMessage(get_activation_factory<UssdMessage, Windows::Networking::NetworkOperators::IUssdMessageFactory>().CreateMessage(messageText))
{}

inline Windows::Networking::NetworkOperators::UssdSession UssdSession::CreateFromNetworkAccountId(param::hstring const& networkAccountId)
{
    return get_activation_factory<UssdSession, Windows::Networking::NetworkOperators::IUssdSessionStatics>().CreateFromNetworkAccountId(networkAccountId);
}

inline Windows::Networking::NetworkOperators::UssdSession UssdSession::CreateFromNetworkInterfaceId(param::hstring const& networkInterfaceId)
{
    return get_activation_factory<UssdSession, Windows::Networking::NetworkOperators::IUssdSessionStatics>().CreateFromNetworkInterfaceId(networkInterfaceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IFdnAccessManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IFdnAccessManagerStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContext2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationContextStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IHotspotAuthenticationEventDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IHotspotCredentialsAuthenticationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IKnownCSimFilePathsStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IKnownRuimFilePathsStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IKnownSimFilePathsStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IKnownUSimFilePathsStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccount3> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAccountWatcher> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandAntennaSar> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellCdma> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellGsm> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellLte> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellLte> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellTdscdma> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellUmts> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandCellsInfo> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceInformation3> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceService> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceCommandSession> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceDataSession> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceInformation> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandDeviceServiceTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModem> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModem2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModem2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemConfiguration2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandModemStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetwork3> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandNetworkRegistrationStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPin> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinLockStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandPinOperationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandRadioStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandSarManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandSarManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandTransmissionStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUicc> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUicc> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccApp> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppReadRecordResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppRecordDetailsResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IMobileBroadbandUiccAppsResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorNotificationEventDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringAccessPointConfiguration> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClient> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringClientManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringEntitlementCheck> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics2> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringManagerStatics3> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::INetworkOperatorTetheringOperationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IProvisionFromXmlDocumentResults> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IProvisionedProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IProvisionedProfile> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IProvisioningAgent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IProvisioningAgent> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IProvisioningAgentStaticMethods> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IUssdMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IUssdMessage> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IUssdMessageFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IUssdMessageFactory> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IUssdReply> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IUssdReply> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IUssdSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IUssdSession> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::IUssdSessionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::IUssdSessionStatics> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::FdnAccessManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::FdnAccessManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationContext> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::HotspotAuthenticationEventDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::HotspotCredentialsAuthenticationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::KnownCSimFilePaths> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::KnownCSimFilePaths> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::KnownRuimFilePaths> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::KnownRuimFilePaths> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::KnownSimFilePaths> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::KnownSimFilePaths> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::KnownUSimFilePaths> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::KnownUSimFilePaths> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccount> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAccountWatcher> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandAntennaSar> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellCdma> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellGsm> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellLte> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellLte> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellTdscdma> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellUmts> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandCellsInfo> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceInformation> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceService> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceCommandSession> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceDataSession> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceInformation> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandDeviceServiceTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModem> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandModemConfiguration> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetwork> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetwork> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandNetworkRegistrationStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPin> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinLockStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandPinOperationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChange> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandRadioStateChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSarManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandSarManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandTransmissionStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUicc> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUicc> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccApp> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppReadRecordResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppRecordDetailsResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::MobileBroadbandUiccAppsResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::NetworkOperatorNotificationEventDetails> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringAccessPointConfiguration> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringClient> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringManager> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::NetworkOperatorTetheringOperationResult> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::ProvisionFromXmlDocumentResults> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::ProvisionedProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::ProvisionedProfile> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::ProvisioningAgent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::ProvisioningAgent> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::UssdMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::UssdMessage> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::UssdReply> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::UssdReply> {};

template<> struct hash<winrt::Windows::Networking::NetworkOperators::UssdSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::NetworkOperators::UssdSession> {};

}

WINRT_WARNING_POP
