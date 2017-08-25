// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Chat.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>::IsOnline() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilities)->get_IsOnline(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>::IsChatCapable() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilities)->get_IsChatCapable(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>::IsFileTransferCapable() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilities)->get_IsFileTransferCapable(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>::IsGeoLocationPushCapable() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilities)->get_IsGeoLocationPushCapable(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>::IsIntegratedMessagingCapable() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilities)->get_IsIntegratedMessagingCapable(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics<D>::GetCachedCapabilitiesAsync(param::hstring const& address) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics)->GetCachedCapabilitiesAsync(get_abi(address), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics<D>::GetCapabilitiesFromNetworkAsync(param::hstring const& address) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics)->GetCapabilitiesFromNetworkAsync(get_abi(address), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatConversation<D>::HasUnreadMessages() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_HasUnreadMessages(&result));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversation<D>::Id() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_Id(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversation<D>::Subject() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_Subject(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->put_Subject(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatConversation<D>::IsConversationMuted() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_IsConversationMuted(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation<D>::IsConversationMuted(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->put_IsConversationMuted(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversation<D>::MostRecentMessageId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_MostRecentMessageId(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Chat_IChatConversation<D>::Participants() const
{
    Windows::Foundation::Collections::IVector<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_Participants(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingInfo consume_Windows_ApplicationModel_Chat_IChatConversation<D>::ThreadingInfo() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->get_ThreadingInfo(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatConversation<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader consume_Windows_ApplicationModel_Chat_IChatConversation<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->GetMessageReader(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatConversation<D>::MarkMessagesAsReadAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->MarkAllMessagesAsReadAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatConversation<D>::MarkMessagesAsReadAsync(Windows::Foundation::DateTime const& value) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->MarkMessagesAsReadAsync(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatConversation<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation<D>::NotifyLocalParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->NotifyLocalParticipantComposing(get_abi(transportId), get_abi(participantAddress), isComposing));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation<D>::NotifyRemoteParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->NotifyRemoteParticipantComposing(get_abi(transportId), get_abi(participantAddress), isComposing));
}

template <typename D> event_token consume_Windows_ApplicationModel_Chat_IChatConversation<D>::RemoteParticipantComposingChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->add_RemoteParticipantComposingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Chat::IChatConversation> consume_Windows_ApplicationModel_Chat_IChatConversation<D>::RemoteParticipantComposingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Chat::IChatConversation>(this, &abi_t<Windows::ApplicationModel::Chat::IChatConversation>::remove_RemoteParticipantComposingChanged, RemoteParticipantComposingChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation<D>::RemoteParticipantComposingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation)->remove_RemoteParticipantComposingChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatConversation2<D>::CanModifyParticipants() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation2)->get_CanModifyParticipants(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversation2<D>::CanModifyParticipants(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversation2)->put_CanModifyParticipants(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> consume_Windows_ApplicationModel_Chat_IChatConversationReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> consume_Windows_ApplicationModel_Chat_IChatConversationReader<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationReader)->ReadBatchWithCountAsync(count, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::ContactId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->get_ContactId(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::ContactId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->put_ContactId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::Custom() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->get_Custom(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::Custom(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->put_Custom(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::ConversationId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->get_ConversationId(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::ConversationId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->put_ConversationId(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::Participants() const
{
    Windows::Foundation::Collections::IVector<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->get_Participants(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingKind consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::Kind() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->get_Kind(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>::Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatConversationThreadingInfo)->put_Kind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatItemKind consume_Windows_ApplicationModel_Chat_IChatItem<D>::ItemKind() const
{
    Windows::ApplicationModel::Chat::ChatItemKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatItem)->get_ItemKind(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment> consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Attachments() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Attachments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Body(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->put_Body(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_From(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Id(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage<D>::IsForwardingDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_IsForwardingDisabled(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage<D>::IsIncoming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_IsIncoming(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage<D>::IsRead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_IsRead(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Chat_IChatMessage<D>::LocalTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_LocalTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Chat_IChatMessage<D>::NetworkTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_NetworkTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Recipients() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Recipients(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Chat::ChatMessageStatus> consume_Windows_ApplicationModel_Chat_IChatMessage<D>::RecipientSendStatuses() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Chat::ChatMessageStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_RecipientSendStatuses(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageStatus consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::TransportFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_TransportFriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage<D>::TransportId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->get_TransportId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage<D>::TransportId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage)->put_TransportId(get_abi(value)));
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::EstimatedDownloadSize() const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_EstimatedDownloadSize(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::EstimatedDownloadSize(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_EstimatedDownloadSize(value));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::From(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_From(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsAutoReply() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_IsAutoReply(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsAutoReply(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsAutoReply(value));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsForwardingDisabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsForwardingDisabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsReplyDisabled() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_IsReplyDisabled(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsIncoming(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsIncoming(value));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsRead(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsRead(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsSeen() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_IsSeen(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsSeen(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsSeen(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsSimMessage() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_IsSimMessage(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::LocalTimestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_LocalTimestamp(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageKind consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::MessageKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_MessageKind(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_MessageKind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageOperatorKind consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::MessageOperatorKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageOperatorKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_MessageOperatorKind(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_MessageOperatorKind(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::NetworkTimestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_NetworkTimestamp(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsReceivedDuringQuietHours() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_IsReceivedDuringQuietHours(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::IsReceivedDuringQuietHours(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_IsReceivedDuringQuietHours(value));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_RemoteId(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::Status(Windows::ApplicationModel::Chat::ChatMessageStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_Status(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_Subject(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::ShouldSuppressNotification() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_ShouldSuppressNotification(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::ShouldSuppressNotification(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_ShouldSuppressNotification(value));
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingInfo consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::ThreadingInfo() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_ThreadingInfo(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::ThreadingInfo(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->put_ThreadingInfo(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> consume_Windows_ApplicationModel_Chat_IChatMessage2<D>::RecipientsDeliveryInfos() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage2)->get_RecipientsDeliveryInfos(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage3<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage3)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessage4<D>::SyncId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage4)->get_SyncId(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessage4<D>::SyncId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessage4)->put_SyncId(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::DataStreamReference() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->get_DataStreamReference(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::DataStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->put_DataStreamReference(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::GroupId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->get_GroupId(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::GroupId(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->put_GroupId(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::MimeType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->get_MimeType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::MimeType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->put_MimeType(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment)->put_Text(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->get_Thumbnail(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->put_Thumbnail(get_abi(value)));
}

template <typename D> double consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::TransferProgress() const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->get_TransferProgress(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::TransferProgress(double value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->put_TransferProgress(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::OriginalFileName() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->get_OriginalFileName(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>::OriginalFileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachment2)->put_OriginalFileName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageAttachment consume_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory<D>::CreateChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference) const
{
    Windows::ApplicationModel::Chat::ChatMessageAttachment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory)->CreateChatMessageAttachment(get_abi(mimeType), get_abi(dataStreamReference), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic<D>::MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageBlockingStatic)->MarkMessageAsBlockedAsync(get_abi(localChatMessageId), blocked, put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeType consume_Windows_ApplicationModel_Chat_IChatMessageChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChange)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessage consume_Windows_ApplicationModel_Chat_IChatMessageChange<D>::Message() const
{
    Windows::ApplicationModel::Chat::ChatMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChange)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader<D>::AcceptChanges() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeReader)->AcceptChanges());
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader<D>::AcceptChangesThrough(Windows::ApplicationModel::Chat::ChatMessageChange const& lastChangeToAcknowledge) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeReader)->AcceptChangesThrough(get_abi(lastChangeToAcknowledge)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>> consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeReader)->ReadBatchAsync(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeTracker)->Enable());
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeReader consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeTracker)->GetChangeReader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangeTracker)->Reset());
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangedDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangedDeferral consume_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangedDeferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics<D>::RegisterTransportAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManager2Statics)->RegisterTransportAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics<D>::GetTransportAsync(param::hstring const& transportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManager2Statics)->GetTransportAsync(get_abi(transportId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>::GetTransportsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManagerStatic)->GetTransportsAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManagerStatic)->RequestStoreAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>::ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManagerStatic)->ShowComposeSmsMessageAsync(get_abi(message), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>::ShowSmsSettings() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManagerStatic)->ShowSmsSettings());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3<D>::RequestSyncManagerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageManagerStatics3)->RequestSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessage consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails<D>::ChatMessage() const
{
    Windows::ApplicationModel::Chat::ChatMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails)->get_ChatMessage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>::ShouldDisplayToast() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2)->get_ShouldDisplayToast(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateDetailText() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2)->get_ShouldUpdateDetailText(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateBadge() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2)->get_ShouldUpdateBadge(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateActionCenter() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2)->get_ShouldUpdateActionCenter(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> consume_Windows_ApplicationModel_Chat_IChatMessageReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageReader)->ReadBatchAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> consume_Windows_ApplicationModel_Chat_IChatMessageReader2<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageReader2)->ReadBatchWithCountAsync(count, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeTracker consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::DeleteMessageAsync(param::hstring const& localMessageId) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->DeleteMessageAsync(get_abi(localMessageId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::DownloadMessageAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->DownloadMessageAsync(get_abi(localChatMessageId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::GetMessageAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->GetMessageAsync(get_abi(localChatMessageId), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->GetMessageReader1(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::GetMessageReader(Windows::Foundation::TimeSpan const& recentTimeLimit) const
{
    Windows::ApplicationModel::Chat::ChatMessageReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->GetMessageReader2(get_abi(recentTimeLimit), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::MarkMessageReadAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->MarkMessageReadAsync(get_abi(localChatMessageId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::RetrySendMessageAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->RetrySendMessageAsync(get_abi(localChatMessageId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::SendMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->SendMessageAsync(get_abi(chatMessage), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageValidationResult consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::ValidateMessage(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const
{
    Windows::ApplicationModel::Chat::ChatMessageValidationResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->ValidateMessage(get_abi(chatMessage), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::MessageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const
{
    event_token returnValue{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->add_MessageChanged(get_abi(value), put_abi(returnValue)));
    return returnValue;
}

template <typename D> event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore> consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::MessageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Chat::IChatMessageStore>(this, &abi_t<Windows::ApplicationModel::Chat::IChatMessageStore>::remove_MessageChanged, MessageChanged(value));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>::MessageChanged(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore)->remove_MessageChanged(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::ForwardMessageAsync(param::hstring const& localChatMessageId, param::async_iterable<hstring> const& addresses) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->ForwardMessageAsync(get_abi(localChatMessageId), get_abi(addresses), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetConversationAsync(param::hstring const& conversationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetConversationAsync(get_abi(conversationId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetConversationAsync(param::hstring const& conversationId, param::async_iterable<hstring> const& transportIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetConversationForTransportsAsync(get_abi(conversationId), get_abi(transportIds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetConversationFromThreadingInfoAsync(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& threadingInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetConversationFromThreadingInfoAsync(get_abi(threadingInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationReader consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Chat::ChatConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetConversationReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationReader consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetConversationReader(param::iterable<hstring> const& transportIds) const
{
    Windows::ApplicationModel::Chat::ChatConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetConversationForTransportsReader(get_abi(transportIds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetMessageByRemoteIdAsync(param::hstring const& transportId, param::hstring const& remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetMessageByRemoteIdAsync(get_abi(transportId), get_abi(remoteId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetUnseenCountAsync() const
{
    Windows::Foundation::IAsyncOperation<int32_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetUnseenCountAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetUnseenCountAsync(param::async_iterable<hstring> const& transportIds) const
{
    Windows::Foundation::IAsyncOperation<int32_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetUnseenCountForTransportsReaderAsync(get_abi(transportIds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::MarkAsSeenAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->MarkAsSeenAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::MarkAsSeenAsync(param::async_iterable<hstring> const& transportIds) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->MarkAsSeenForTransportsAsync(get_abi(transportIds), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatSearchReader consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::GetSearchReader(Windows::ApplicationModel::Chat::ChatQueryOptions const& value) const
{
    Windows::ApplicationModel::Chat::ChatSearchReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->GetSearchReader(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::SaveMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->SaveMessageAsync(get_abi(chatMessage), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::TryCancelDownloadMessageAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->TryCancelDownloadMessageAsync(get_abi(localChatMessageId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::TryCancelSendMessageAsync(param::hstring const& localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->TryCancelSendMessageAsync(get_abi(localChatMessageId), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->add_StoreChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore2> consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Chat::IChatMessageStore2>(this, &abi_t<Windows::ApplicationModel::Chat::IChatMessageStore2>::remove_StoreChanged, StoreChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>::StoreChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore2)->remove_StoreChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> consume_Windows_ApplicationModel_Chat_IChatMessageStore3<D>::GetMessageBySyncIdAsync(param::hstring const& syncId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStore3)->GetMessageBySyncIdAsync(get_abi(syncId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs<D>::Id() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs)->get_Id(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatStoreChangedEventKind consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs<D>::Kind() const
{
    Windows::ApplicationModel::Chat::ChatStoreChangedEventKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs)->get_Kind(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>::IsAppSetAsNotificationProvider() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport)->get_IsAppSetAsNotificationProvider(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport)->get_IsActive(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>::TransportFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport)->get_TransportFriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>::TransportId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport)->get_TransportId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>::RequestSetAsNotificationProviderAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport)->RequestSetAsNotificationProviderAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration consume_Windows_ApplicationModel_Chat_IChatMessageTransport2<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport2)->get_Configuration(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageTransportKind consume_Windows_ApplicationModel_Chat_IChatMessageTransport2<D>::TransportKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageTransportKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransport2)->get_TransportKind(put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>::MaxAttachmentCount() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration)->get_MaxAttachmentCount(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>::MaxMessageSizeInKilobytes() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration)->get_MaxMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>::MaxRecipientCount() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration)->get_MaxRecipientCount(&result));
    return result;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>::SupportedVideoFormat() const
{
    Windows::Media::MediaProperties::MediaEncodingProfile result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration)->get_SupportedVideoFormat(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration)->get_ExtendedProperties(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>::MaxPartCount() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageValidationResult)->get_MaxPartCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>::PartCount() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageValidationResult)->get_PartCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>::RemainingCharacterCountInPart() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageValidationResult)->get_RemainingCharacterCountInPart(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageValidationStatus consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageValidationStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatMessageValidationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatQueryOptions<D>::SearchString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatQueryOptions)->get_SearchString(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatQueryOptions<D>::SearchString(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatQueryOptions)->put_SearchString(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::TransportAddress() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_TransportAddress(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::TransportAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->put_TransportAddress(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::DeliveryTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_DeliveryTime(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::DeliveryTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->put_DeliveryTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::ReadTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_ReadTime(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::ReadTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->put_ReadTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::TransportErrorCodeCategory() const
{
    Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_TransportErrorCodeCategory(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::TransportInterpretedErrorCode() const
{
    Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_TransportInterpretedErrorCode(put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::TransportErrorCode() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_TransportErrorCode(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::IsErrorPermanent() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_IsErrorPermanent(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageStatus consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageStatus result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo)->get_Status(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> consume_Windows_ApplicationModel_Chat_IChatSearchReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSearchReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> consume_Windows_ApplicationModel_Chat_IChatSearchReader<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSearchReader)->ReadBatchWithCountAsync(count, put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>::IsSyncEnabled() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncConfiguration)->get_IsSyncEnabled(&result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>::IsSyncEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncConfiguration)->put_IsSyncEnabled(value));
}

template <typename D> Windows::ApplicationModel::Chat::ChatRestoreHistorySpan consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>::RestoreHistorySpan() const
{
    Windows::ApplicationModel::Chat::ChatRestoreHistorySpan result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncConfiguration)->get_RestoreHistorySpan(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>::RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncConfiguration)->put_RestoreHistorySpan(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatSyncConfiguration consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::ChatSyncConfiguration result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->get_Configuration(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::AssociateAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->AssociateAccountAsync(get_abi(webAccount), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::UnassociateAccountAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->UnassociateAccountAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::IsAccountAssociated(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->IsAccountAssociated(get_abi(webAccount), &result));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::StartSync() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->StartSync());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>::SetConfigurationAsync(Windows::ApplicationModel::Chat::ChatSyncConfiguration const& configuration) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IChatSyncManager)->SetConfigurationAsync(get_abi(configuration), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::TransportId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->get_TransportId(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::Title() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->get_Title(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::Text() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->get_Text(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::IsPinRequired() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->get_IsPinRequired(&result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::Actions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->get_Actions(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::SendResponseAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->SendResponseAsync(get_abi(action), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>::SendResponseWithPinAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action, param::hstring const& pin) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessage)->SendResponseWithPinAsync(get_abi(action), get_abi(pin), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction<D>::Label() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageAction)->get_Label(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs<D>::IsMessageAvailable() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs)->get_IsMessageAvailable(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::RcsEndUserMessage consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs<D>::Message() const
{
    Windows::ApplicationModel::Chat::RcsEndUserMessage result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs)->get_Message(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails)->get_Text(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager<D>::MessageAvailableChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageManager)->add_MessageAvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager<D>::MessageAvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>(this, &abi_t<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>::remove_MessageAvailableChanged, MessageAvailableChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager<D>::MessageAvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsEndUserMessageManager)->remove_MessageAvailableChanged(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::Chat::RcsEndUserMessageManager consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>::GetEndUserMessageManager() const
{
    Windows::ApplicationModel::Chat::RcsEndUserMessageManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsManagerStatics)->GetEndUserMessageManager(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>::GetTransportsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsManagerStatics)->GetTransportsAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>::GetTransportAsync(param::hstring const& transportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsManagerStatics)->GetTransportAsync(get_abi(transportId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>::LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsManagerStatics)->LeaveConversationAsync(get_abi(conversation), put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::RcsServiceKind consume_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs<D>::ServiceKind() const
{
    Windows::ApplicationModel::Chat::RcsServiceKind result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs)->get_ServiceKind(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->get_ExtendedProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->get_IsActive(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::TransportFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->get_TransportFriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::TransportId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->get_TransportId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::RcsTransportConfiguration consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::RcsTransportConfiguration result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->get_Configuration(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::IsStoreAndForwardEnabled(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->IsStoreAndForwardEnabled(get_abi(serviceKind), &result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::IsServiceKindSupported(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->IsServiceKindSupported(get_abi(serviceKind), &result));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::ServiceKindSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->add_ServiceKindSupportedChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Chat::IRcsTransport> consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::ServiceKindSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Chat::IRcsTransport>(this, &abi_t<Windows::ApplicationModel::Chat::IRcsTransport>::remove_ServiceKindSupportedChanged, ServiceKindSupportedChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Chat_IRcsTransport<D>::ServiceKindSupportedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransport)->remove_ServiceKindSupportedChanged(get_abi(token)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::MaxAttachmentCount() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_MaxAttachmentCount(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::MaxMessageSizeInKilobytes() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_MaxMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::MaxGroupMessageSizeInKilobytes() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_MaxGroupMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::MaxRecipientCount() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_MaxRecipientCount(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::MaxFileSizeInKilobytes() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_MaxFileSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>::WarningFileSizeInKilobytes() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRcsTransportConfiguration)->get_WarningFileSizeInKilobytes(&result));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs<D>::TransportId() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs)->get_TransportId(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs<D>::ParticipantAddress() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs)->get_ParticipantAddress(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs<D>::IsComposing() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs)->get_IsComposing(&result));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatCapabilities> : produce_base<D, Windows::ApplicationModel::Chat::IChatCapabilities>
{
    HRESULT __stdcall get_IsOnline(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsOnline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsChatCapable(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsChatCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFileTransferCapable(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsFileTransferCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGeoLocationPushCapable(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsGeoLocationPushCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIntegratedMessagingCapable(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsIntegratedMessagingCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics> : produce_base<D, Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>
{
    HRESULT __stdcall GetCachedCapabilitiesAsync(HSTRING address, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCachedCapabilitiesAsync(*reinterpret_cast<hstring const*>(&address)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapabilitiesFromNetworkAsync(HSTRING address, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCapabilitiesFromNetworkAsync(*reinterpret_cast<hstring const*>(&address)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatConversation> : produce_base<D, Windows::ApplicationModel::Chat::IChatConversation>
{
    HRESULT __stdcall get_HasUnreadMessages(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().HasUnreadMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConversationMuted(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsConversationMuted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsConversationMuted(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsConversationMuted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MostRecentMessageId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Participants(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Participants());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadingInfo(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ThreadingInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkAllMessagesAsReadAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkMessagesAsReadAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkMessagesAsReadAsync(abi_t<Windows::Foundation::DateTime> value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkMessagesAsReadAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyLocalParticipantComposing(HSTRING transportId, HSTRING participantAddress, bool isComposing) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyLocalParticipantComposing(*reinterpret_cast<hstring const*>(&transportId), *reinterpret_cast<hstring const*>(&participantAddress), isComposing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyRemoteParticipantComposing(HSTRING transportId, HSTRING participantAddress, bool isComposing) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyRemoteParticipantComposing(*reinterpret_cast<hstring const*>(&transportId), *reinterpret_cast<hstring const*>(&participantAddress), isComposing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteParticipantComposingChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteParticipantComposingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteParticipantComposingChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteParticipantComposingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatConversation2> : produce_base<D, Windows::ApplicationModel::Chat::IChatConversation2>
{
    HRESULT __stdcall get_CanModifyParticipants(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanModifyParticipants());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanModifyParticipants(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanModifyParticipants(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatConversationReader> : produce_base<D, Windows::ApplicationModel::Chat::IChatConversationReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> : produce_base<D, Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>
{
    HRESULT __stdcall get_ContactId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ContactId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Custom(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Custom());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Custom(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Custom(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConversationId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ConversationId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConversationId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConversationId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Participants(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Participants());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Chat::ChatConversationThreadingKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Chat::ChatConversationThreadingKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatConversationThreadingKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatItem> : produce_base<D, Windows::ApplicationModel::Chat::IChatItem>
{
    HRESULT __stdcall get_ItemKind(abi_t<Windows::ApplicationModel::Chat::ChatItemKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ItemKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessage> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessage>
{
    HRESULT __stdcall get_Attachments(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Attachments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Body(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Body(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsForwardingDisabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsForwardingDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIncoming(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIncoming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRead(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalTimestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkTimestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipients(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Recipients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecipientSendStatuses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecipientSendStatuses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransportId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessage2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessage2>
{
    HRESULT __stdcall get_EstimatedDownloadSize(uint64_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().EstimatedDownloadSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EstimatedDownloadSize(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EstimatedDownloadSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAutoReply(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsAutoReply());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAutoReply(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAutoReply(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsForwardingDisabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsForwardingDisabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReplyDisabled(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsReplyDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsIncoming(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsIncoming(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRead(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRead(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSeen(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSeen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSeen(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSeen(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSimMessage(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSimMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalTimestamp(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MessageKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageKind(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessageKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageOperatorKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageOperatorKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MessageOperatorKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageOperatorKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageOperatorKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageOperatorKind(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessageOperatorKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkTimestamp(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReceivedDuringQuietHours(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsReceivedDuringQuietHours());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsReceivedDuringQuietHours(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsReceivedDuringQuietHours(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessageStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldSuppressNotification(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldSuppressNotification());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldSuppressNotification(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldSuppressNotification(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadingInfo(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ThreadingInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThreadingInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThreadingInfo(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecipientsDeliveryInfos(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RecipientsDeliveryInfos());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessage3> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessage3>
{
    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteId());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessage4> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessage4>
{
    HRESULT __stdcall get_SyncId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SyncId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SyncId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageAttachment> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageAttachment>
{
    HRESULT __stdcall get_DataStreamReference(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataStreamReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataStreamReference(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataStreamReference(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GroupId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GroupId(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GroupId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MimeType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MimeType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MimeType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MimeType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageAttachment2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageAttachment2>
{
    HRESULT __stdcall get_Thumbnail(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferProgress(double* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransferProgress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransferProgress(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferProgress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalFileName(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OriginalFileName());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginalFileName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginalFileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>
{
    HRESULT __stdcall CreateChatMessageAttachment(HSTRING mimeType, ::IUnknown* dataStreamReference, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateChatMessageAttachment(*reinterpret_cast<hstring const*>(&mimeType), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&dataStreamReference)));
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageBlockingStatic> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>
{
    HRESULT __stdcall MarkMessageAsBlockedAsync(HSTRING localChatMessageId, bool blocked, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MarkMessageAsBlockedAsync(*reinterpret_cast<hstring const*>(&localChatMessageId), blocked));
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageChange> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageChange>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Chat::ChatMessageChangeType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageChangeReader> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageChangeReader>
{
    HRESULT __stdcall AcceptChanges() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptChangesThrough(::IUnknown* lastChangeToAcknowledge) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChangesThrough(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessageChange const*>(&lastChangeToAcknowledge));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBatchAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBatchAsync());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageChangeTracker> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageChangeTracker>
{
    HRESULT __stdcall Enable() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChangeReader(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageManager2Statics> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageManager2Statics>
{
    HRESULT __stdcall RegisterTransportAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterTransportAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTransportAsync(HSTRING transportId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTransportAsync(*reinterpret_cast<hstring const*>(&transportId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageManagerStatic> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>
{
    HRESULT __stdcall GetTransportsAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTransportsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestStoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowComposeSmsMessageAsync(::IUnknown* message, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowComposeSmsMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowSmsSettings() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowSmsSettings();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageManagerStatics3> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>
{
    HRESULT __stdcall RequestSyncManagerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestSyncManagerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>
{
    HRESULT __stdcall get_ChatMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChatMessage());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
{
    HRESULT __stdcall get_ShouldDisplayToast(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldDisplayToast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateDetailText(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldUpdateDetailText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateBadge(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldUpdateBadge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateActionCenter(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShouldUpdateActionCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageReader> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBatchAsync());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageReader2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageReader2>
{
    HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageStore> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageStore>
{
    HRESULT __stdcall get_ChangeTracker(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteMessageAsync(HSTRING localMessageId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeleteMessageAsync(*reinterpret_cast<hstring const*>(&localMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DownloadMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DownloadMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageReader1(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMessageReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageReader2(abi_t<Windows::Foundation::TimeSpan> recentTimeLimit, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMessageReader(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&recentTimeLimit)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkMessageReadAsync(HSTRING localChatMessageId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MarkMessageReadAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RetrySendMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetrySendMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendMessageAsync(::IUnknown* chatMessage, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SendMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessage const*>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValidateMessage(::IUnknown* chatMessage, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValidateMessage(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessage const*>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageChanged(::IUnknown* value, abi_t<event_token>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().MessageChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageChanged(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageChanged(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageStore2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageStore2>
{
    HRESULT __stdcall ForwardMessageAsync(HSTRING localChatMessageId, ::IUnknown* addresses, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ForwardMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&addresses)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationAsync(HSTRING conversationId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationAsync(*reinterpret_cast<hstring const*>(&conversationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationForTransportsAsync(HSTRING conversationId, ::IUnknown* transportIds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationAsync(*reinterpret_cast<hstring const*>(&conversationId), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationFromThreadingInfoAsync(::IUnknown* threadingInfo, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationFromThreadingInfoAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const*>(&threadingInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationForTransportsReader(::IUnknown* transportIds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationReader(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageByRemoteIdAsync(HSTRING transportId, HSTRING remoteId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageByRemoteIdAsync(*reinterpret_cast<hstring const*>(&transportId), *reinterpret_cast<hstring const*>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnseenCountAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetUnseenCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUnseenCountForTransportsReaderAsync(::IUnknown* transportIds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetUnseenCountAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkAsSeenAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkAsSeenAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkAsSeenForTransportsAsync(::IUnknown* transportIds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkAsSeenAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSearchReader(::IUnknown* value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSearchReader(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatQueryOptions const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveMessageAsync(::IUnknown* chatMessage, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatMessage const*>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCancelDownloadMessageAsync(HSTRING localChatMessageId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCancelDownloadMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCancelSendMessageAsync(HSTRING localChatMessageId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCancelSendMessageAsync(*reinterpret_cast<hstring const*>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StoreChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StoreChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageStore3> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageStore3>
{
    HRESULT __stdcall GetMessageBySyncIdAsync(HSTRING syncId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageBySyncIdAsync(*reinterpret_cast<hstring const*>(&syncId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>
{
    HRESULT __stdcall get_Id(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageTransport> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageTransport>
{
    HRESULT __stdcall get_IsAppSetAsNotificationProvider(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAppSetAsNotificationProvider());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestSetAsNotificationProviderAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestSetAsNotificationProviderAsync());
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
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageTransport2> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageTransport2>
{
    HRESULT __stdcall get_Configuration(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageTransportKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>
{
    HRESULT __stdcall get_MaxAttachmentCount(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxAttachmentCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRecipientCount(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxRecipientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoFormat(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SupportedVideoFormat());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedProperties(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatMessageValidationResult> : produce_base<D, Windows::ApplicationModel::Chat::IChatMessageValidationResult>
{
    HRESULT __stdcall get_MaxPartCount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPartCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartCount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingCharacterCountInPart(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemainingCharacterCountInPart());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageValidationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatQueryOptions> : produce_base<D, Windows::ApplicationModel::Chat::IChatQueryOptions>
{
    HRESULT __stdcall get_SearchString(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SearchString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchString(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchString(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo> : produce_base<D, Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>
{
    HRESULT __stdcall get_TransportAddress(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportAddress());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransportAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeliveryTime(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeliveryTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeliveryTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadTime(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadTime());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportErrorCodeCategory(abi_t<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportErrorCodeCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportInterpretedErrorCode(abi_t<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportInterpretedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportErrorCode(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsErrorPermanent(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsErrorPermanent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatSearchReader> : produce_base<D, Windows::ApplicationModel::Chat::IChatSearchReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatSyncConfiguration> : produce_base<D, Windows::ApplicationModel::Chat::IChatSyncConfiguration>
{
    HRESULT __stdcall get_IsSyncEnabled(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSyncEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSyncEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RestoreHistorySpan(abi_t<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RestoreHistorySpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RestoreHistorySpan(abi_t<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestoreHistorySpan(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatSyncManager> : produce_base<D, Windows::ApplicationModel::Chat::IChatSyncManager>
{
    HRESULT __stdcall get_Configuration(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AssociateAccountAsync(::IUnknown* webAccount, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AssociateAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnassociateAccountAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnassociateAccountAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsAccountAssociated(::IUnknown* webAccount, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsAccountAssociated(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartSync() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartSync();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetConfigurationAsync(::IUnknown* configuration, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SetConfigurationAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatSyncConfiguration const*>(&configuration)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsEndUserMessage> : produce_base<D, Windows::ApplicationModel::Chat::IRcsEndUserMessage>
{
    HRESULT __stdcall get_TransportId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPinRequired(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsPinRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Actions());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendResponseAsync(::IUnknown* action, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SendResponseAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::RcsEndUserMessageAction const*>(&action)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendResponseWithPinAsync(::IUnknown* action, HSTRING pin, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SendResponseWithPinAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::RcsEndUserMessageAction const*>(&action), *reinterpret_cast<hstring const*>(&pin)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> : produce_base<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>
{
    HRESULT __stdcall get_Label(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs> : produce_base<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>
{
    HRESULT __stdcall get_IsMessageAvailable(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsMessageAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails> : produce_base<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
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
struct produce<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> : produce_base<D, Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>
{
    HRESULT __stdcall add_MessageAvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MessageAvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageAvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageAvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsManagerStatics> : produce_base<D, Windows::ApplicationModel::Chat::IRcsManagerStatics>
{
    HRESULT __stdcall GetEndUserMessageManager(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetEndUserMessageManager());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTransportsAsync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTransportsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTransportAsync(HSTRING transportId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTransportAsync(*reinterpret_cast<hstring const*>(&transportId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LeaveConversationAsync(::IUnknown* conversation, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeaveConversationAsync(*reinterpret_cast<Windows::ApplicationModel::Chat::ChatConversation const*>(&conversation)));
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
struct produce<D, Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>
{
    HRESULT __stdcall get_ServiceKind(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ServiceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsTransport> : produce_base<D, Windows::ApplicationModel::Chat::IRcsTransport>
{
    HRESULT __stdcall get_ExtendedProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsStoreAndForwardEnabled(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind> serviceKind, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsStoreAndForwardEnabled(*reinterpret_cast<Windows::ApplicationModel::Chat::RcsServiceKind const*>(&serviceKind)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsServiceKindSupported(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind> serviceKind, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsServiceKindSupported(*reinterpret_cast<Windows::ApplicationModel::Chat::RcsServiceKind const*>(&serviceKind)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServiceKindSupportedChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ServiceKindSupportedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceKindSupportedChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceKindSupportedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRcsTransportConfiguration> : produce_base<D, Windows::ApplicationModel::Chat::IRcsTransportConfiguration>
{
    HRESULT __stdcall get_MaxAttachmentCount(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxAttachmentCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxGroupMessageSizeInKilobytes(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxGroupMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRecipientCount(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxRecipientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxFileSizeInKilobytes(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MaxFileSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WarningFileSizeInKilobytes(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().WarningFileSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>
{
    HRESULT __stdcall get_TransportId(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParticipantAddress(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ParticipantAddress());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComposing(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsComposing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat {

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> ChatCapabilitiesManager::GetCachedCapabilitiesAsync(param::hstring const& address)
{
    return get_activation_factory<ChatCapabilitiesManager, Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>().GetCachedCapabilitiesAsync(address);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> ChatCapabilitiesManager::GetCapabilitiesFromNetworkAsync(param::hstring const& address)
{
    return get_activation_factory<ChatCapabilitiesManager, Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>().GetCapabilitiesFromNetworkAsync(address);
}

inline ChatConversationThreadingInfo::ChatConversationThreadingInfo() :
    ChatConversationThreadingInfo(activate_instance<ChatConversationThreadingInfo>())
{}

inline ChatMessage::ChatMessage() :
    ChatMessage(activate_instance<ChatMessage>())
{}

inline ChatMessageAttachment::ChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference) :
    ChatMessageAttachment(get_activation_factory<ChatMessageAttachment, Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>().CreateChatMessageAttachment(mimeType, dataStreamReference))
{}

inline Windows::Foundation::IAsyncAction ChatMessageBlocking::MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked)
{
    return get_activation_factory<ChatMessageBlocking, Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>().MarkMessageAsBlockedAsync(localChatMessageId, blocked);
}

inline Windows::Foundation::IAsyncOperation<hstring> ChatMessageManager::RegisterTransportAsync()
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManager2Statics>().RegisterTransportAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> ChatMessageManager::GetTransportAsync(param::hstring const& transportId)
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManager2Statics>().GetTransportAsync(transportId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> ChatMessageManager::GetTransportsAsync()
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>().GetTransportsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> ChatMessageManager::RequestStoreAsync()
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncAction ChatMessageManager::ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message)
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>().ShowComposeSmsMessageAsync(message);
}

inline void ChatMessageManager::ShowSmsSettings()
{
    get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManagerStatic>().ShowSmsSettings();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> ChatMessageManager::RequestSyncManagerAsync()
{
    return get_activation_factory<ChatMessageManager, Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>().RequestSyncManagerAsync();
}

inline ChatQueryOptions::ChatQueryOptions() :
    ChatQueryOptions(activate_instance<ChatQueryOptions>())
{}

inline ChatRecipientDeliveryInfo::ChatRecipientDeliveryInfo() :
    ChatRecipientDeliveryInfo(activate_instance<ChatRecipientDeliveryInfo>())
{}

inline Windows::ApplicationModel::Chat::RcsEndUserMessageManager RcsManager::GetEndUserMessageManager()
{
    return get_activation_factory<RcsManager, Windows::ApplicationModel::Chat::IRcsManagerStatics>().GetEndUserMessageManager();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> RcsManager::GetTransportsAsync()
{
    return get_activation_factory<RcsManager, Windows::ApplicationModel::Chat::IRcsManagerStatics>().GetTransportsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> RcsManager::GetTransportAsync(param::hstring const& transportId)
{
    return get_activation_factory<RcsManager, Windows::ApplicationModel::Chat::IRcsManagerStatics>().GetTransportAsync(transportId);
}

inline Windows::Foundation::IAsyncAction RcsManager::LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation)
{
    return get_activation_factory<RcsManager, Windows::ApplicationModel::Chat::IRcsManagerStatics>().LeaveConversationAsync(conversation);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatCapabilities> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatConversation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatConversation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatConversation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatConversation2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatConversationReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatConversationReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatItem> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessage2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessage3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessage3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessage4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessage4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageBlockingStatic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageBlockingStatic> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageManager2Statics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageManager2Statics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageManagerStatic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageManagerStatic> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageManagerStatics3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageReader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageReader2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageStore3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageStore3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageTransport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageTransport> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageTransport2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageTransport2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatMessageValidationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatMessageValidationResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatSearchReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatSearchReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatSyncConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatSyncConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IChatSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IChatSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsTransport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsTransport> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRcsTransportConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRcsTransportConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatCapabilities> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatCapabilitiesManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatCapabilitiesManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatConversation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatConversation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatConversationReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatConversationReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatConversationThreadingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatConversationThreadingInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageAttachment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageAttachment> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageBlocking> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageBlocking> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageTransport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageTransport> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatMessageValidationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatMessageValidationResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatSearchReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatSearchReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatSyncConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatSyncConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::ChatSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::ChatSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsEndUserMessageManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsTransport> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsTransport> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RcsTransportConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RcsTransportConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> {};

}

WINRT_WARNING_POP
