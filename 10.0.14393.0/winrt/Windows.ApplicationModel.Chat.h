// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.ApplicationModel.Chat.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Chat::IChatCapabilities> : produce_base<D, Windows::ApplicationModel::Chat::IChatCapabilities>
{
    HRESULT __stdcall get_IsOnline(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsOnline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsChatCapable(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsChatCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFileTransferCapable(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsFileTransferCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGeoLocationPushCapable(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsGeoLocationPushCapable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIntegratedMessagingCapable(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsIntegratedMessagingCapable());
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
    HRESULT __stdcall abi_GetCachedCapabilitiesAsync(abi_arg_in<hstring> address, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCachedCapabilitiesAsync(*reinterpret_cast<const hstring *>(&address)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCapabilitiesFromNetworkAsync(abi_arg_in<hstring> address, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCapabilitiesFromNetworkAsync(*reinterpret_cast<const hstring *>(&address)));
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
    HRESULT __stdcall get_HasUnreadMessages(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().HasUnreadMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subject(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConversationMuted(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsConversationMuted());
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
            this->shim().IsConversationMuted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MostRecentMessageId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Participants(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Participants());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadingInfo(abi_arg_out<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ThreadingInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkAllMessagesAsReadAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkMessagesAsReadAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkMessagesAsReadAsync(abi_arg_in<Windows::Foundation::DateTime> value, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkMessagesAsReadAsync(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyLocalParticipantComposing(abi_arg_in<hstring> transportId, abi_arg_in<hstring> participantAddress, bool isComposing) noexcept override
    {
        try
        {
            this->shim().NotifyLocalParticipantComposing(*reinterpret_cast<const hstring *>(&transportId), *reinterpret_cast<const hstring *>(&participantAddress), isComposing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyRemoteParticipantComposing(abi_arg_in<hstring> transportId, abi_arg_in<hstring> participantAddress, bool isComposing) noexcept override
    {
        try
        {
            this->shim().NotifyRemoteParticipantComposing(*reinterpret_cast<const hstring *>(&transportId), *reinterpret_cast<const hstring *>(&participantAddress), isComposing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteParticipantComposingChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RemoteParticipantComposingChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteParticipantComposingChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().RemoteParticipantComposingChanged(token);
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
    HRESULT __stdcall get_CanModifyParticipants(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CanModifyParticipants());
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
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBatchWithCountAsync(int32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadBatchAsync(count));
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
    HRESULT __stdcall get_ContactId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ContactId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContactId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Custom(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Custom());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Custom(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Custom(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConversationId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ConversationId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConversationId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ConversationId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Participants(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Participants());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind value) noexcept override
    {
        try
        {
            this->shim().Kind(value);
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
    HRESULT __stdcall get_ItemKind(Windows::ApplicationModel::Chat::ChatItemKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ItemKind());
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
    HRESULT __stdcall get_Attachments(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Attachments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Body(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Body(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsForwardingDisabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsForwardingDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIncoming(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIncoming());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRead(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRead());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalTimestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkTimestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipients(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Recipients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecipientSendStatuses(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Chat::ChatMessageStatus>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecipientSendStatuses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Chat::ChatMessageStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransportId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TransportId(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_EstimatedDownloadSize(uint64_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().EstimatedDownloadSize());
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
            this->shim().EstimatedDownloadSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAutoReply(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsAutoReply());
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
            this->shim().IsForwardingDisabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReplyDisabled(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsReplyDisabled());
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
            this->shim().IsRead(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSeen(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSeen());
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
            this->shim().IsSeen(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSimMessage(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSimMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalTimestamp(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LocalTimestamp(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MessageKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind value) noexcept override
    {
        try
        {
            this->shim().MessageKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MessageOperatorKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind value) noexcept override
    {
        try
        {
            this->shim().MessageOperatorKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkTimestamp(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().NetworkTimestamp(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsReceivedDuringQuietHours(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsReceivedDuringQuietHours());
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
            this->shim().IsReceivedDuringQuietHours(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::ApplicationModel::Chat::ChatMessageStatus value) noexcept override
    {
        try
        {
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subject(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldSuppressNotification(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShouldSuppressNotification());
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
            this->shim().ShouldSuppressNotification(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadingInfo(abi_arg_out<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ThreadingInfo());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThreadingInfo(abi_arg_in<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> value) noexcept override
    {
        try
        {
            this->shim().ThreadingInfo(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatConversationThreadingInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecipientsDeliveryInfos(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RecipientsDeliveryInfos());
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
    HRESULT __stdcall get_RemoteId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteId());
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
    HRESULT __stdcall get_SyncId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SyncId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SyncId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SyncId(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_DataStreamReference(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataStreamReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataStreamReference(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().DataStreamReference(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GroupId());
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
            this->shim().GroupId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MimeType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MimeType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MimeType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MimeType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Text(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransferProgress(double * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransferProgress());
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
            this->shim().TransferProgress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalFileName(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().OriginalFileName());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginalFileName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OriginalFileName(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_CreateChatMessageAttachment(abi_arg_in<hstring> mimeType, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> dataStreamReference, abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageAttachment> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateChatMessageAttachment(*reinterpret_cast<const hstring *>(&mimeType), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&dataStreamReference)));
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
    HRESULT __stdcall abi_MarkMessageAsBlockedAsync(abi_arg_in<hstring> localChatMessageId, bool blocked, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MarkMessageAsBlockedAsync(*reinterpret_cast<const hstring *>(&localChatMessageId), blocked));
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
    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Chat::ChatMessageChangeType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
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
    HRESULT __stdcall abi_AcceptChanges() noexcept override
    {
        try
        {
            this->shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptChangesThrough(abi_arg_in<Windows::ApplicationModel::Chat::IChatMessageChange> lastChangeToAcknowledge) noexcept override
    {
        try
        {
            this->shim().AcceptChangesThrough(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatMessageChange *>(&lastChangeToAcknowledge));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadBatchAsync());
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
    HRESULT __stdcall abi_Enable() noexcept override
    {
        try
        {
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChangeReader(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageChangeReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reset() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall abi_RegisterTransportAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterTransportAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTransportAsync(abi_arg_in<hstring> transportId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTransportAsync(*reinterpret_cast<const hstring *>(&transportId)));
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
    HRESULT __stdcall abi_GetTransportsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTransportsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestStoreAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowComposeSmsMessageAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowComposeSmsMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowSmsSettings() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_RequestSyncManagerAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestSyncManagerAsync());
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
    HRESULT __stdcall get_ChatMessage(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChatMessage());
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
    HRESULT __stdcall get_ShouldDisplayToast(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShouldDisplayToast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateDetailText(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShouldUpdateDetailText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateBadge(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShouldUpdateBadge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldUpdateActionCenter(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShouldUpdateActionCenter());
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
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadBatchAsync());
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
    HRESULT __stdcall abi_ReadBatchWithCountAsync(int32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadBatchAsync(count));
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
    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageChangeTracker> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteMessageAsync(abi_arg_in<hstring> localMessageId, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeleteMessageAsync(*reinterpret_cast<const hstring *>(&localMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DownloadMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DownloadMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader1(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetMessageReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader2(abi_arg_in<Windows::Foundation::TimeSpan> recentTimeLimit, abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetMessageReader(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&recentTimeLimit)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkMessageReadAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MarkMessageReadAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RetrySendMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RetrySendMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendMessageAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatMessage> chatMessage, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SendMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatMessage *>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ValidateMessage(abi_arg_in<Windows::ApplicationModel::Chat::IChatMessage> chatMessage, abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageValidationResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValidateMessage(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatMessage *>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>> value, event_token * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MessageChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageChanged(event_token value) noexcept override
    {
        try
        {
            this->shim().MessageChanged(value);
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
    HRESULT __stdcall abi_ForwardMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> addresses, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ForwardMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&addresses)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationAsync(abi_arg_in<hstring> conversationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationAsync(*reinterpret_cast<const hstring *>(&conversationId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationForTransportsAsync(abi_arg_in<hstring> conversationId, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> transportIds, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationAsync(*reinterpret_cast<const hstring *>(&conversationId), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationFromThreadingInfoAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> threadingInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationFromThreadingInfoAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatConversationThreadingInfo *>(&threadingInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationReader(abi_arg_out<Windows::ApplicationModel::Chat::IChatConversationReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationForTransportsReader(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> transportIds, abi_arg_out<Windows::ApplicationModel::Chat::IChatConversationReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationReader(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageByRemoteIdAsync(abi_arg_in<hstring> transportId, abi_arg_in<hstring> remoteId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageByRemoteIdAsync(*reinterpret_cast<const hstring *>(&transportId), *reinterpret_cast<const hstring *>(&remoteId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUnseenCountAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<int32_t>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetUnseenCountAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUnseenCountForTransportsReaderAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> transportIds, abi_arg_out<Windows::Foundation::IAsyncOperation<int32_t>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetUnseenCountAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkAsSeenAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkAsSeenAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkAsSeenForTransportsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> transportIds, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkAsSeenAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&transportIds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSearchReader(abi_arg_in<Windows::ApplicationModel::Chat::IChatQueryOptions> value, abi_arg_out<Windows::ApplicationModel::Chat::IChatSearchReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetSearchReader(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatQueryOptions *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveMessageAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatMessage> chatMessage, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatMessage *>(&chatMessage)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCancelDownloadMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryCancelDownloadMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCancelSendMessageAsync(abi_arg_in<hstring> localChatMessageId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryCancelSendMessageAsync(*reinterpret_cast<const hstring *>(&localChatMessageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StoreChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StoreChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().StoreChanged(token);
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
    HRESULT __stdcall abi_GetMessageBySyncIdAsync(abi_arg_in<hstring> syncId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageBySyncIdAsync(*reinterpret_cast<const hstring *>(&syncId)));
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Chat::ChatStoreChangedEventKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Kind());
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
    HRESULT __stdcall get_IsAppSetAsNotificationProvider(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAppSetAsNotificationProvider());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestSetAsNotificationProviderAsync(abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestSetAsNotificationProviderAsync());
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
    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportKind(Windows::ApplicationModel::Chat::ChatMessageTransportKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportKind());
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
    HRESULT __stdcall get_MaxAttachmentCount(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxAttachmentCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRecipientCount(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxRecipientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoFormat(abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SupportedVideoFormat());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ExtendedProperties());
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
    HRESULT __stdcall get_MaxPartCount(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPartCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartCount(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PartCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingCharacterCountInPart(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemainingCharacterCountInPart());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Chat::ChatMessageValidationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall get_SearchString(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SearchString());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchString(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SearchString(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_TransportAddress(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportAddress());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransportAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TransportAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeliveryTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeliveryTime());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeliveryTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().DeliveryTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadTime());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().ReadTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportErrorCodeCategory(Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportErrorCodeCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportInterpretedErrorCode(Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportInterpretedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportErrorCode(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsErrorPermanent(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsErrorPermanent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Chat::ChatMessageStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Status());
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
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBatchWithCountAsync(int32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReadBatchAsync(count));
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
    HRESULT __stdcall get_IsSyncEnabled(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSyncEnabled());
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
            this->shim().IsSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RestoreHistorySpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan value) noexcept override
    {
        try
        {
            this->shim().RestoreHistorySpan(value);
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
    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::ApplicationModel::Chat::IChatSyncConfiguration> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AssociateAccountAsync(abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AssociateAccountAsync(*reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnassociateAccountAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnassociateAccountAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsAccountAssociated(abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsAccountAssociated(*reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartSync() noexcept override
    {
        try
        {
            this->shim().StartSync();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetConfigurationAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatSyncConfiguration> configuration, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SetConfigurationAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatSyncConfiguration *>(&configuration)));
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
    HRESULT __stdcall get_TransportId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPinRequired(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsPinRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Actions());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendResponseAsync(abi_arg_in<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> action, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendResponseAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::RcsEndUserMessageAction *>(&action)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendResponseWithPinAsync(abi_arg_in<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> action, abi_arg_in<hstring> pin, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendResponseWithPinAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::RcsEndUserMessageAction *>(&action), *reinterpret_cast<const hstring *>(&pin)));
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
    HRESULT __stdcall get_Label(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Label());
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
    HRESULT __stdcall get_IsMessageAvailable(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsMessageAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::ApplicationModel::Chat::IRcsEndUserMessage> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Message());
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
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
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
    HRESULT __stdcall add_MessageAvailableChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().MessageAvailableChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageAvailableChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().MessageAvailableChanged(token);
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
    HRESULT __stdcall abi_GetEndUserMessageManager(abi_arg_out<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetEndUserMessageManager());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTransportsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTransportsAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTransportAsync(abi_arg_in<hstring> transportId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetTransportAsync(*reinterpret_cast<const hstring *>(&transportId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LeaveConversationAsync(abi_arg_in<Windows::ApplicationModel::Chat::IChatConversation> conversation, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LeaveConversationAsync(*reinterpret_cast<const Windows::ApplicationModel::Chat::ChatConversation *>(&conversation)));
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
    HRESULT __stdcall get_ServiceKind(Windows::ApplicationModel::Chat::RcsServiceKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ServiceKind());
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
    HRESULT __stdcall get_ExtendedProperties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFriendlyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::ApplicationModel::Chat::IRcsTransportConfiguration> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsStoreAndForwardEnabled(Windows::ApplicationModel::Chat::RcsServiceKind serviceKind, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsStoreAndForwardEnabled(serviceKind));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsServiceKindSupported(Windows::ApplicationModel::Chat::RcsServiceKind serviceKind, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsServiceKindSupported(serviceKind));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServiceKindSupportedChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ServiceKindSupportedChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServiceKindSupportedChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ServiceKindSupportedChanged(token);
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
    HRESULT __stdcall get_MaxAttachmentCount(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxAttachmentCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxGroupMessageSizeInKilobytes(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxGroupMessageSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxRecipientCount(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxRecipientCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxFileSizeInKilobytes(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MaxFileSizeInKilobytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WarningFileSizeInKilobytes(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().WarningFileSizeInKilobytes());
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
    HRESULT __stdcall get_TransportId(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TransportId());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParticipantAddress(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ParticipantAddress());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsComposing(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsComposing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Chat {

template <typename D> bool impl_IChatMessageTransport<D>::IsAppSetAsNotificationProvider() const
{
    bool value {};
    check_hresult(static_cast<const IChatMessageTransport &>(static_cast<const D &>(*this))->get_IsAppSetAsNotificationProvider(&value));
    return value;
}

template <typename D> bool impl_IChatMessageTransport<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IChatMessageTransport &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> hstring impl_IChatMessageTransport<D>::TransportFriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessageTransport &>(static_cast<const D &>(*this))->get_TransportFriendlyName(put(value)));
    return value;
}

template <typename D> hstring impl_IChatMessageTransport<D>::TransportId() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessageTransport &>(static_cast<const D &>(*this))->get_TransportId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageTransport<D>::RequestSetAsNotificationProviderAsync() const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageTransport &>(static_cast<const D &>(*this))->abi_RequestSetAsNotificationProviderAsync(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration impl_IChatMessageTransport2<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration result { nullptr };
    check_hresult(static_cast<const IChatMessageTransport2 &>(static_cast<const D &>(*this))->get_Configuration(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageTransportKind impl_IChatMessageTransport2<D>::TransportKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageTransportKind result {};
    check_hresult(static_cast<const IChatMessageTransport2 &>(static_cast<const D &>(*this))->get_TransportKind(&result));
    return result;
}

template <typename D> int32_t impl_IChatMessageTransportConfiguration<D>::MaxAttachmentCount() const
{
    int32_t result {};
    check_hresult(static_cast<const IChatMessageTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxAttachmentCount(&result));
    return result;
}

template <typename D> int32_t impl_IChatMessageTransportConfiguration<D>::MaxMessageSizeInKilobytes() const
{
    int32_t result {};
    check_hresult(static_cast<const IChatMessageTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t impl_IChatMessageTransportConfiguration<D>::MaxRecipientCount() const
{
    int32_t result {};
    check_hresult(static_cast<const IChatMessageTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxRecipientCount(&result));
    return result;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IChatMessageTransportConfiguration<D>::SupportedVideoFormat() const
{
    Windows::Media::MediaProperties::MediaEncodingProfile result { nullptr };
    check_hresult(static_cast<const IChatMessageTransportConfiguration &>(static_cast<const D &>(*this))->get_SupportedVideoFormat(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IChatMessageTransportConfiguration<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> result;
    check_hresult(static_cast<const IChatMessageTransportConfiguration &>(static_cast<const D &>(*this))->get_ExtendedProperties(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeType impl_IChatMessageChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeType value {};
    check_hresult(static_cast<const IChatMessageChange &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessage impl_IChatMessageChange<D>::Message() const
{
    Windows::ApplicationModel::Chat::ChatMessage value { nullptr };
    check_hresult(static_cast<const IChatMessageChange &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageChangeReader<D>::AcceptChanges() const
{
    check_hresult(static_cast<const IChatMessageChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChanges());
}

template <typename D> void impl_IChatMessageChangeReader<D>::AcceptChangesThrough(const Windows::ApplicationModel::Chat::ChatMessageChange & lastChangeToAcknowledge) const
{
    check_hresult(static_cast<const IChatMessageChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChangesThrough(get(lastChangeToAcknowledge)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>> impl_IChatMessageChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>> value;
    check_hresult(static_cast<const IChatMessageChangeReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageChangeTracker<D>::Enable() const
{
    check_hresult(static_cast<const IChatMessageChangeTracker &>(static_cast<const D &>(*this))->abi_Enable());
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeReader impl_IChatMessageChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeReader value { nullptr };
    check_hresult(static_cast<const IChatMessageChangeTracker &>(static_cast<const D &>(*this))->abi_GetChangeReader(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageChangeTracker<D>::Reset() const
{
    check_hresult(static_cast<const IChatMessageChangeTracker &>(static_cast<const D &>(*this))->abi_Reset());
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IChatMessageValidationResult<D>::MaxPartCount() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IChatMessageValidationResult &>(static_cast<const D &>(*this))->get_MaxPartCount(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IChatMessageValidationResult<D>::PartCount() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IChatMessageValidationResult &>(static_cast<const D &>(*this))->get_PartCount(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IChatMessageValidationResult<D>::RemainingCharacterCountInPart() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IChatMessageValidationResult &>(static_cast<const D &>(*this))->get_RemainingCharacterCountInPart(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageValidationStatus impl_IChatMessageValidationResult<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageValidationStatus value {};
    check_hresult(static_cast<const IChatMessageValidationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment> impl_IChatMessage<D>::Attachments() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment> value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Attachments(put(value)));
    return value;
}

template <typename D> hstring impl_IChatMessage<D>::Body() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Body(put(value)));
    return value;
}

template <typename D> void impl_IChatMessage<D>::Body(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->put_Body(get(value)));
}

template <typename D> hstring impl_IChatMessage<D>::From() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> hstring impl_IChatMessage<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> bool impl_IChatMessage<D>::IsForwardingDisabled() const
{
    bool value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_IsForwardingDisabled(&value));
    return value;
}

template <typename D> bool impl_IChatMessage<D>::IsIncoming() const
{
    bool value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_IsIncoming(&value));
    return value;
}

template <typename D> bool impl_IChatMessage<D>::IsRead() const
{
    bool value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_IsRead(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IChatMessage<D>::LocalTimestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_LocalTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IChatMessage<D>::NetworkTimestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_NetworkTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IChatMessage<D>::Recipients() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Recipients(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Chat::ChatMessageStatus> impl_IChatMessage<D>::RecipientSendStatuses() const
{
    Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Chat::ChatMessageStatus> value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_RecipientSendStatuses(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageStatus impl_IChatMessage<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageStatus value {};
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> hstring impl_IChatMessage<D>::Subject() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_Subject(put(value)));
    return value;
}

template <typename D> hstring impl_IChatMessage<D>::TransportFriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_TransportFriendlyName(put(value)));
    return value;
}

template <typename D> hstring impl_IChatMessage<D>::TransportId() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->get_TransportId(put(value)));
    return value;
}

template <typename D> void impl_IChatMessage<D>::TransportId(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage &>(static_cast<const D &>(*this))->put_TransportId(get(value)));
}

template <typename D> hstring impl_IChatMessage3<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessage3 &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> uint64_t impl_IChatMessage2<D>::EstimatedDownloadSize() const
{
    uint64_t result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_EstimatedDownloadSize(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::EstimatedDownloadSize(uint64_t value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_EstimatedDownloadSize(value));
}

template <typename D> void impl_IChatMessage2<D>::From(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> bool impl_IChatMessage2<D>::IsAutoReply() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_IsAutoReply(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::IsAutoReply(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsAutoReply(value));
}

template <typename D> void impl_IChatMessage2<D>::IsForwardingDisabled(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsForwardingDisabled(value));
}

template <typename D> bool impl_IChatMessage2<D>::IsReplyDisabled() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_IsReplyDisabled(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::IsIncoming(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsIncoming(value));
}

template <typename D> void impl_IChatMessage2<D>::IsRead(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsRead(value));
}

template <typename D> bool impl_IChatMessage2<D>::IsSeen() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_IsSeen(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::IsSeen(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsSeen(value));
}

template <typename D> bool impl_IChatMessage2<D>::IsSimMessage() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_IsSimMessage(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::LocalTimestamp(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_LocalTimestamp(get(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageKind impl_IChatMessage2<D>::MessageKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageKind result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_MessageKind(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_MessageKind(value));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageOperatorKind impl_IChatMessage2<D>::MessageOperatorKind() const
{
    Windows::ApplicationModel::Chat::ChatMessageOperatorKind result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_MessageOperatorKind(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_MessageOperatorKind(value));
}

template <typename D> void impl_IChatMessage2<D>::NetworkTimestamp(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_NetworkTimestamp(get(value)));
}

template <typename D> bool impl_IChatMessage2<D>::IsReceivedDuringQuietHours() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_IsReceivedDuringQuietHours(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::IsReceivedDuringQuietHours(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_IsReceivedDuringQuietHours(value));
}

template <typename D> void impl_IChatMessage2<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> void impl_IChatMessage2<D>::Status(Windows::ApplicationModel::Chat::ChatMessageStatus value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> void impl_IChatMessage2<D>::Subject(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_Subject(get(value)));
}

template <typename D> bool impl_IChatMessage2<D>::ShouldSuppressNotification() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_ShouldSuppressNotification(&result));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::ShouldSuppressNotification(bool value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_ShouldSuppressNotification(value));
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingInfo impl_IChatMessage2<D>::ThreadingInfo() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo result { nullptr };
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_ThreadingInfo(put(result)));
    return result;
}

template <typename D> void impl_IChatMessage2<D>::ThreadingInfo(const Windows::ApplicationModel::Chat::ChatConversationThreadingInfo & value) const
{
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->put_ThreadingInfo(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> impl_IChatMessage2<D>::RecipientsDeliveryInfos() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> result;
    check_hresult(static_cast<const IChatMessage2 &>(static_cast<const D &>(*this))->get_RecipientsDeliveryInfos(put(result)));
    return result;
}

template <typename D> hstring impl_IChatMessage4<D>::SyncId() const
{
    hstring result;
    check_hresult(static_cast<const IChatMessage4 &>(static_cast<const D &>(*this))->get_SyncId(put(result)));
    return result;
}

template <typename D> void impl_IChatMessage4<D>::SyncId(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessage4 &>(static_cast<const D &>(*this))->put_SyncId(get(value)));
}

template <typename D> hstring impl_IChatQueryOptions<D>::SearchString() const
{
    hstring result;
    check_hresult(static_cast<const IChatQueryOptions &>(static_cast<const D &>(*this))->get_SearchString(put(result)));
    return result;
}

template <typename D> void impl_IChatQueryOptions<D>::SearchString(hstring_ref value) const
{
    check_hresult(static_cast<const IChatQueryOptions &>(static_cast<const D &>(*this))->put_SearchString(get(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangeTracker impl_IChatMessageStore<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangeTracker value { nullptr };
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore<D>::DeleteMessageAsync(hstring_ref localMessageId) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_DeleteMessageAsync(get(localMessageId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore<D>::DownloadMessageAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_DownloadMessageAsync(get(localChatMessageId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> impl_IChatMessageStore<D>::GetMessageAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_GetMessageAsync(get(localChatMessageId), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader impl_IChatMessageStore<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageReader value { nullptr };
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_GetMessageReader1(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader impl_IChatMessageStore<D>::GetMessageReader(const Windows::Foundation::TimeSpan & recentTimeLimit) const
{
    Windows::ApplicationModel::Chat::ChatMessageReader value { nullptr };
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_GetMessageReader2(get(recentTimeLimit), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore<D>::MarkMessageReadAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_MarkMessageReadAsync(get(localChatMessageId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore<D>::RetrySendMessageAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_RetrySendMessageAsync(get(localChatMessageId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore<D>::SendMessageAsync(const Windows::ApplicationModel::Chat::ChatMessage & chatMessage) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_SendMessageAsync(get(chatMessage), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageValidationResult impl_IChatMessageStore<D>::ValidateMessage(const Windows::ApplicationModel::Chat::ChatMessage & chatMessage) const
{
    Windows::ApplicationModel::Chat::ChatMessageValidationResult value { nullptr };
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->abi_ValidateMessage(get(chatMessage), put(value)));
    return value;
}

template <typename D> event_token impl_IChatMessageStore<D>::MessageChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> & value) const
{
    event_token returnValue {};
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->add_MessageChanged(get(value), &returnValue));
    return returnValue;
}

template <typename D> event_revoker<IChatMessageStore> impl_IChatMessageStore<D>::MessageChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IChatMessageStore>(this, &ABI::Windows::ApplicationModel::Chat::IChatMessageStore::remove_MessageChanged, MessageChanged(value));
}

template <typename D> void impl_IChatMessageStore<D>::MessageChanged(event_token value) const
{
    check_hresult(static_cast<const IChatMessageStore &>(static_cast<const D &>(*this))->remove_MessageChanged(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> impl_IChatMessageStore2<D>::ForwardMessageAsync(hstring_ref localChatMessageId, const Windows::Foundation::Collections::IIterable<hstring> & addresses) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_ForwardMessageAsync(get(localChatMessageId), get(addresses), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> impl_IChatMessageStore2<D>::GetConversationAsync(hstring_ref conversationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetConversationAsync(get(conversationId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> impl_IChatMessageStore2<D>::GetConversationAsync(hstring_ref conversationId, const Windows::Foundation::Collections::IIterable<hstring> & transportIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetConversationForTransportsAsync(get(conversationId), get(transportIds), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> impl_IChatMessageStore2<D>::GetConversationFromThreadingInfoAsync(const Windows::ApplicationModel::Chat::ChatConversationThreadingInfo & threadingInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetConversationFromThreadingInfoAsync(get(threadingInfo), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationReader impl_IChatMessageStore2<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Chat::ChatConversationReader result { nullptr };
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetConversationReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationReader impl_IChatMessageStore2<D>::GetConversationReader(const Windows::Foundation::Collections::IIterable<hstring> & transportIds) const
{
    Windows::ApplicationModel::Chat::ChatConversationReader result { nullptr };
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetConversationForTransportsReader(get(transportIds), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> impl_IChatMessageStore2<D>::GetMessageByRemoteIdAsync(hstring_ref transportId, hstring_ref remoteId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetMessageByRemoteIdAsync(get(transportId), get(remoteId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> impl_IChatMessageStore2<D>::GetUnseenCountAsync() const
{
    Windows::Foundation::IAsyncOperation<int32_t> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetUnseenCountAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> impl_IChatMessageStore2<D>::GetUnseenCountAsync(const Windows::Foundation::Collections::IIterable<hstring> & transportIds) const
{
    Windows::Foundation::IAsyncOperation<int32_t> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetUnseenCountForTransportsReaderAsync(get(transportIds), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore2<D>::MarkAsSeenAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_MarkAsSeenAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore2<D>::MarkAsSeenAsync(const Windows::Foundation::Collections::IIterable<hstring> & transportIds) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_MarkAsSeenForTransportsAsync(get(transportIds), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatSearchReader impl_IChatMessageStore2<D>::GetSearchReader(const Windows::ApplicationModel::Chat::ChatQueryOptions & value) const
{
    Windows::ApplicationModel::Chat::ChatSearchReader result { nullptr };
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_GetSearchReader(get(value), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageStore2<D>::SaveMessageAsync(const Windows::ApplicationModel::Chat::ChatMessage & chatMessage) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_SaveMessageAsync(get(chatMessage), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IChatMessageStore2<D>::TryCancelDownloadMessageAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_TryCancelDownloadMessageAsync(get(localChatMessageId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IChatMessageStore2<D>::TryCancelSendMessageAsync(hstring_ref localChatMessageId) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->abi_TryCancelSendMessageAsync(get(localChatMessageId), put(result)));
    return result;
}

template <typename D> event_token impl_IChatMessageStore2<D>::StoreChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->add_StoreChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IChatMessageStore2> impl_IChatMessageStore2<D>::StoreChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IChatMessageStore2>(this, &ABI::Windows::ApplicationModel::Chat::IChatMessageStore2::remove_StoreChanged, StoreChanged(handler));
}

template <typename D> void impl_IChatMessageStore2<D>::StoreChanged(event_token token) const
{
    check_hresult(static_cast<const IChatMessageStore2 &>(static_cast<const D &>(*this))->remove_StoreChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> impl_IChatMessageStore3<D>::GetMessageBySyncIdAsync(hstring_ref syncId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> result;
    check_hresult(static_cast<const IChatMessageStore3 &>(static_cast<const D &>(*this))->abi_GetMessageBySyncIdAsync(get(syncId), put(result)));
    return result;
}

template <typename D> hstring impl_IChatMessageStoreChangedEventArgs<D>::Id() const
{
    hstring result;
    check_hresult(static_cast<const IChatMessageStoreChangedEventArgs &>(static_cast<const D &>(*this))->get_Id(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatStoreChangedEventKind impl_IChatMessageStoreChangedEventArgs<D>::Kind() const
{
    Windows::ApplicationModel::Chat::ChatStoreChangedEventKind result {};
    check_hresult(static_cast<const IChatMessageStoreChangedEventArgs &>(static_cast<const D &>(*this))->get_Kind(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageChangedDeferral impl_IChatMessageChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Chat::ChatMessageChangedDeferral result { nullptr };
    check_hresult(static_cast<const IChatMessageChangedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> void impl_IChatMessageChangedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IChatMessageChangedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageBlockingStatic<D>::MarkMessageAsBlockedAsync(hstring_ref localChatMessageId, bool blocked) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageBlockingStatic &>(static_cast<const D &>(*this))->abi_MarkMessageAsBlockedAsync(get(localChatMessageId), blocked, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> impl_IChatMessageManagerStatic<D>::GetTransportsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> value;
    check_hresult(static_cast<const IChatMessageManagerStatic &>(static_cast<const D &>(*this))->abi_GetTransportsAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> impl_IChatMessageManagerStatic<D>::RequestStoreAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> value;
    check_hresult(static_cast<const IChatMessageManagerStatic &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatMessageManagerStatic<D>::ShowComposeSmsMessageAsync(const Windows::ApplicationModel::Chat::ChatMessage & message) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IChatMessageManagerStatic &>(static_cast<const D &>(*this))->abi_ShowComposeSmsMessageAsync(get(message), put(value)));
    return value;
}

template <typename D> void impl_IChatMessageManagerStatic<D>::ShowSmsSettings() const
{
    check_hresult(static_cast<const IChatMessageManagerStatic &>(static_cast<const D &>(*this))->abi_ShowSmsSettings());
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IChatMessageManager2Statics<D>::RegisterTransportAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(static_cast<const IChatMessageManager2Statics &>(static_cast<const D &>(*this))->abi_RegisterTransportAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> impl_IChatMessageManager2Statics<D>::GetTransportAsync(hstring_ref transportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> result;
    check_hresult(static_cast<const IChatMessageManager2Statics &>(static_cast<const D &>(*this))->abi_GetTransportAsync(get(transportId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> impl_IChatMessageManagerStatics3<D>::RequestSyncManagerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> result;
    check_hresult(static_cast<const IChatMessageManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestSyncManagerAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> impl_IChatMessageReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> value;
    check_hresult(static_cast<const IChatMessageReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> impl_IChatMessageReader2<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> result;
    check_hresult(static_cast<const IChatMessageReader2 &>(static_cast<const D &>(*this))->abi_ReadBatchWithCountAsync(count, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> impl_IChatSearchReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> result;
    check_hresult(static_cast<const IChatSearchReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> impl_IChatSearchReader<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> result;
    check_hresult(static_cast<const IChatSearchReader &>(static_cast<const D &>(*this))->abi_ReadBatchWithCountAsync(count, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatItemKind impl_IChatItem<D>::ItemKind() const
{
    Windows::ApplicationModel::Chat::ChatItemKind result {};
    check_hresult(static_cast<const IChatItem &>(static_cast<const D &>(*this))->get_ItemKind(&result));
    return result;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IChatMessageAttachment<D>::DataStreamReference() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->get_DataStreamReference(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageAttachment<D>::DataStreamReference(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->put_DataStreamReference(get(value)));
}

template <typename D> uint32_t impl_IChatMessageAttachment<D>::GroupId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->get_GroupId(&value));
    return value;
}

template <typename D> void impl_IChatMessageAttachment<D>::GroupId(uint32_t value) const
{
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->put_GroupId(value));
}

template <typename D> hstring impl_IChatMessageAttachment<D>::MimeType() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->get_MimeType(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageAttachment<D>::MimeType(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->put_MimeType(get(value)));
}

template <typename D> hstring impl_IChatMessageAttachment<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_IChatMessageAttachment<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessageAttachment &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IChatMessageAttachment2<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference result;
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->get_Thumbnail(put(result)));
    return result;
}

template <typename D> void impl_IChatMessageAttachment2<D>::Thumbnail(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> double impl_IChatMessageAttachment2<D>::TransferProgress() const
{
    double result {};
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->get_TransferProgress(&result));
    return result;
}

template <typename D> void impl_IChatMessageAttachment2<D>::TransferProgress(double value) const
{
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->put_TransferProgress(value));
}

template <typename D> hstring impl_IChatMessageAttachment2<D>::OriginalFileName() const
{
    hstring result;
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->get_OriginalFileName(put(result)));
    return result;
}

template <typename D> void impl_IChatMessageAttachment2<D>::OriginalFileName(hstring_ref value) const
{
    check_hresult(static_cast<const IChatMessageAttachment2 &>(static_cast<const D &>(*this))->put_OriginalFileName(get(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageAttachment impl_IChatMessageAttachmentFactory<D>::CreateChatMessageAttachment(hstring_ref mimeType, const Windows::Storage::Streams::IRandomAccessStreamReference & dataStreamReference) const
{
    Windows::ApplicationModel::Chat::ChatMessageAttachment value { nullptr };
    check_hresult(static_cast<const IChatMessageAttachmentFactory &>(static_cast<const D &>(*this))->abi_CreateChatMessageAttachment(get(mimeType), get(dataStreamReference), put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessage impl_IChatMessageNotificationTriggerDetails<D>::ChatMessage() const
{
    Windows::ApplicationModel::Chat::ChatMessage value { nullptr };
    check_hresult(static_cast<const IChatMessageNotificationTriggerDetails &>(static_cast<const D &>(*this))->get_ChatMessage(put(value)));
    return value;
}

template <typename D> bool impl_IChatMessageNotificationTriggerDetails2<D>::ShouldDisplayToast() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessageNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_ShouldDisplayToast(&result));
    return result;
}

template <typename D> bool impl_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateDetailText() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessageNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_ShouldUpdateDetailText(&result));
    return result;
}

template <typename D> bool impl_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateBadge() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessageNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_ShouldUpdateBadge(&result));
    return result;
}

template <typename D> bool impl_IChatMessageNotificationTriggerDetails2<D>::ShouldUpdateActionCenter() const
{
    bool result {};
    check_hresult(static_cast<const IChatMessageNotificationTriggerDetails2 &>(static_cast<const D &>(*this))->get_ShouldUpdateActionCenter(&result));
    return result;
}

template <typename D> bool impl_IChatCapabilities<D>::IsOnline() const
{
    bool result {};
    check_hresult(static_cast<const IChatCapabilities &>(static_cast<const D &>(*this))->get_IsOnline(&result));
    return result;
}

template <typename D> bool impl_IChatCapabilities<D>::IsChatCapable() const
{
    bool result {};
    check_hresult(static_cast<const IChatCapabilities &>(static_cast<const D &>(*this))->get_IsChatCapable(&result));
    return result;
}

template <typename D> bool impl_IChatCapabilities<D>::IsFileTransferCapable() const
{
    bool result {};
    check_hresult(static_cast<const IChatCapabilities &>(static_cast<const D &>(*this))->get_IsFileTransferCapable(&result));
    return result;
}

template <typename D> bool impl_IChatCapabilities<D>::IsGeoLocationPushCapable() const
{
    bool result {};
    check_hresult(static_cast<const IChatCapabilities &>(static_cast<const D &>(*this))->get_IsGeoLocationPushCapable(&result));
    return result;
}

template <typename D> bool impl_IChatCapabilities<D>::IsIntegratedMessagingCapable() const
{
    bool result {};
    check_hresult(static_cast<const IChatCapabilities &>(static_cast<const D &>(*this))->get_IsIntegratedMessagingCapable(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> impl_IChatCapabilitiesManagerStatics<D>::GetCachedCapabilitiesAsync(hstring_ref address) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> result;
    check_hresult(static_cast<const IChatCapabilitiesManagerStatics &>(static_cast<const D &>(*this))->abi_GetCachedCapabilitiesAsync(get(address), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> impl_IChatCapabilitiesManagerStatics<D>::GetCapabilitiesFromNetworkAsync(hstring_ref address) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> result;
    check_hresult(static_cast<const IChatCapabilitiesManagerStatics &>(static_cast<const D &>(*this))->abi_GetCapabilitiesFromNetworkAsync(get(address), put(result)));
    return result;
}

template <typename D> hstring impl_IChatRecipientDeliveryInfo<D>::TransportAddress() const
{
    hstring result;
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_TransportAddress(put(result)));
    return result;
}

template <typename D> void impl_IChatRecipientDeliveryInfo<D>::TransportAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->put_TransportAddress(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IChatRecipientDeliveryInfo<D>::DeliveryTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> result;
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_DeliveryTime(put(result)));
    return result;
}

template <typename D> void impl_IChatRecipientDeliveryInfo<D>::DeliveryTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->put_DeliveryTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IChatRecipientDeliveryInfo<D>::ReadTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> result;
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_ReadTime(put(result)));
    return result;
}

template <typename D> void impl_IChatRecipientDeliveryInfo<D>::ReadTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->put_ReadTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory impl_IChatRecipientDeliveryInfo<D>::TransportErrorCodeCategory() const
{
    Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory result {};
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_TransportErrorCodeCategory(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode impl_IChatRecipientDeliveryInfo<D>::TransportInterpretedErrorCode() const
{
    Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode result {};
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_TransportInterpretedErrorCode(&result));
    return result;
}

template <typename D> int32_t impl_IChatRecipientDeliveryInfo<D>::TransportErrorCode() const
{
    int32_t result {};
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_TransportErrorCode(&result));
    return result;
}

template <typename D> bool impl_IChatRecipientDeliveryInfo<D>::IsErrorPermanent() const
{
    bool result {};
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_IsErrorPermanent(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageStatus impl_IChatRecipientDeliveryInfo<D>::Status() const
{
    Windows::ApplicationModel::Chat::ChatMessageStatus result {};
    check_hresult(static_cast<const IChatRecipientDeliveryInfo &>(static_cast<const D &>(*this))->get_Status(&result));
    return result;
}

template <typename D> hstring impl_IChatConversationThreadingInfo<D>::ContactId() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->get_ContactId(put(result)));
    return result;
}

template <typename D> void impl_IChatConversationThreadingInfo<D>::ContactId(hstring_ref value) const
{
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->put_ContactId(get(value)));
}

template <typename D> hstring impl_IChatConversationThreadingInfo<D>::Custom() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->get_Custom(put(result)));
    return result;
}

template <typename D> void impl_IChatConversationThreadingInfo<D>::Custom(hstring_ref value) const
{
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->put_Custom(get(value)));
}

template <typename D> hstring impl_IChatConversationThreadingInfo<D>::ConversationId() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->get_ConversationId(put(result)));
    return result;
}

template <typename D> void impl_IChatConversationThreadingInfo<D>::ConversationId(hstring_ref value) const
{
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->put_ConversationId(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IChatConversationThreadingInfo<D>::Participants() const
{
    Windows::Foundation::Collections::IVector<hstring> result;
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->get_Participants(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingKind impl_IChatConversationThreadingInfo<D>::Kind() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingKind result {};
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->get_Kind(&result));
    return result;
}

template <typename D> void impl_IChatConversationThreadingInfo<D>::Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind value) const
{
    check_hresult(static_cast<const IChatConversationThreadingInfo &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> impl_IChatConversationReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> result;
    check_hresult(static_cast<const IChatConversationReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> impl_IChatConversationReader<D>::ReadBatchAsync(int32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> result;
    check_hresult(static_cast<const IChatConversationReader &>(static_cast<const D &>(*this))->abi_ReadBatchWithCountAsync(count, put(result)));
    return result;
}

template <typename D> bool impl_IChatConversation<D>::HasUnreadMessages() const
{
    bool result {};
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_HasUnreadMessages(&result));
    return result;
}

template <typename D> hstring impl_IChatConversation<D>::Id() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_Id(put(result)));
    return result;
}

template <typename D> hstring impl_IChatConversation<D>::Subject() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_Subject(put(result)));
    return result;
}

template <typename D> void impl_IChatConversation<D>::Subject(hstring_ref value) const
{
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->put_Subject(get(value)));
}

template <typename D> bool impl_IChatConversation<D>::IsConversationMuted() const
{
    bool result {};
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_IsConversationMuted(&result));
    return result;
}

template <typename D> void impl_IChatConversation<D>::IsConversationMuted(bool value) const
{
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->put_IsConversationMuted(value));
}

template <typename D> hstring impl_IChatConversation<D>::MostRecentMessageId() const
{
    hstring result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_MostRecentMessageId(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IChatConversation<D>::Participants() const
{
    Windows::Foundation::Collections::IVector<hstring> result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_Participants(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatConversationThreadingInfo impl_IChatConversation<D>::ThreadingInfo() const
{
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo result { nullptr };
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->get_ThreadingInfo(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatConversation<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatMessageReader impl_IChatConversation<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Chat::ChatMessageReader result { nullptr };
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_GetMessageReader(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatConversation<D>::MarkMessagesAsReadAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_MarkAllMessagesAsReadAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatConversation<D>::MarkMessagesAsReadAsync(const Windows::Foundation::DateTime & value) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_MarkMessagesAsReadAsync(get(value), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatConversation<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_SaveAsync(put(result)));
    return result;
}

template <typename D> void impl_IChatConversation<D>::NotifyLocalParticipantComposing(hstring_ref transportId, hstring_ref participantAddress, bool isComposing) const
{
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_NotifyLocalParticipantComposing(get(transportId), get(participantAddress), isComposing));
}

template <typename D> void impl_IChatConversation<D>::NotifyRemoteParticipantComposing(hstring_ref transportId, hstring_ref participantAddress, bool isComposing) const
{
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->abi_NotifyRemoteParticipantComposing(get(transportId), get(participantAddress), isComposing));
}

template <typename D> event_token impl_IChatConversation<D>::RemoteParticipantComposingChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->add_RemoteParticipantComposingChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IChatConversation> impl_IChatConversation<D>::RemoteParticipantComposingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IChatConversation>(this, &ABI::Windows::ApplicationModel::Chat::IChatConversation::remove_RemoteParticipantComposingChanged, RemoteParticipantComposingChanged(handler));
}

template <typename D> void impl_IChatConversation<D>::RemoteParticipantComposingChanged(event_token token) const
{
    check_hresult(static_cast<const IChatConversation &>(static_cast<const D &>(*this))->remove_RemoteParticipantComposingChanged(token));
}

template <typename D> bool impl_IChatConversation2<D>::CanModifyParticipants() const
{
    bool result {};
    check_hresult(static_cast<const IChatConversation2 &>(static_cast<const D &>(*this))->get_CanModifyParticipants(&result));
    return result;
}

template <typename D> void impl_IChatConversation2<D>::CanModifyParticipants(bool value) const
{
    check_hresult(static_cast<const IChatConversation2 &>(static_cast<const D &>(*this))->put_CanModifyParticipants(value));
}

template <typename D> hstring impl_IRemoteParticipantComposingChangedEventArgs<D>::TransportId() const
{
    hstring result;
    check_hresult(static_cast<const IRemoteParticipantComposingChangedEventArgs &>(static_cast<const D &>(*this))->get_TransportId(put(result)));
    return result;
}

template <typename D> hstring impl_IRemoteParticipantComposingChangedEventArgs<D>::ParticipantAddress() const
{
    hstring result;
    check_hresult(static_cast<const IRemoteParticipantComposingChangedEventArgs &>(static_cast<const D &>(*this))->get_ParticipantAddress(put(result)));
    return result;
}

template <typename D> bool impl_IRemoteParticipantComposingChangedEventArgs<D>::IsComposing() const
{
    bool result {};
    check_hresult(static_cast<const IRemoteParticipantComposingChangedEventArgs &>(static_cast<const D &>(*this))->get_IsComposing(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::ChatSyncConfiguration impl_IChatSyncManager<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::ChatSyncConfiguration result { nullptr };
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->get_Configuration(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatSyncManager<D>::AssociateAccountAsync(const Windows::Security::Credentials::WebAccount & webAccount) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->abi_AssociateAccountAsync(get(webAccount), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatSyncManager<D>::UnassociateAccountAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->abi_UnassociateAccountAsync(put(result)));
    return result;
}

template <typename D> bool impl_IChatSyncManager<D>::IsAccountAssociated(const Windows::Security::Credentials::WebAccount & webAccount) const
{
    bool result {};
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->abi_IsAccountAssociated(get(webAccount), &result));
    return result;
}

template <typename D> void impl_IChatSyncManager<D>::StartSync() const
{
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->abi_StartSync());
}

template <typename D> Windows::Foundation::IAsyncAction impl_IChatSyncManager<D>::SetConfigurationAsync(const Windows::ApplicationModel::Chat::ChatSyncConfiguration & configuration) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IChatSyncManager &>(static_cast<const D &>(*this))->abi_SetConfigurationAsync(get(configuration), put(result)));
    return result;
}

template <typename D> bool impl_IChatSyncConfiguration<D>::IsSyncEnabled() const
{
    bool result {};
    check_hresult(static_cast<const IChatSyncConfiguration &>(static_cast<const D &>(*this))->get_IsSyncEnabled(&result));
    return result;
}

template <typename D> void impl_IChatSyncConfiguration<D>::IsSyncEnabled(bool value) const
{
    check_hresult(static_cast<const IChatSyncConfiguration &>(static_cast<const D &>(*this))->put_IsSyncEnabled(value));
}

template <typename D> Windows::ApplicationModel::Chat::ChatRestoreHistorySpan impl_IChatSyncConfiguration<D>::RestoreHistorySpan() const
{
    Windows::ApplicationModel::Chat::ChatRestoreHistorySpan result {};
    check_hresult(static_cast<const IChatSyncConfiguration &>(static_cast<const D &>(*this))->get_RestoreHistorySpan(&result));
    return result;
}

template <typename D> void impl_IChatSyncConfiguration<D>::RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan value) const
{
    check_hresult(static_cast<const IChatSyncConfiguration &>(static_cast<const D &>(*this))->put_RestoreHistorySpan(value));
}

template <typename D> Windows::ApplicationModel::Chat::RcsServiceKind impl_IRcsServiceKindSupportedChangedEventArgs<D>::ServiceKind() const
{
    Windows::ApplicationModel::Chat::RcsServiceKind result {};
    check_hresult(static_cast<const IRcsServiceKindSupportedChangedEventArgs &>(static_cast<const D &>(*this))->get_ServiceKind(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::RcsEndUserMessageManager impl_IRcsManagerStatics<D>::GetEndUserMessageManager() const
{
    Windows::ApplicationModel::Chat::RcsEndUserMessageManager result { nullptr };
    check_hresult(static_cast<const IRcsManagerStatics &>(static_cast<const D &>(*this))->abi_GetEndUserMessageManager(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> impl_IRcsManagerStatics<D>::GetTransportsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> value;
    check_hresult(static_cast<const IRcsManagerStatics &>(static_cast<const D &>(*this))->abi_GetTransportsAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> impl_IRcsManagerStatics<D>::GetTransportAsync(hstring_ref transportId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> result;
    check_hresult(static_cast<const IRcsManagerStatics &>(static_cast<const D &>(*this))->abi_GetTransportAsync(get(transportId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRcsManagerStatics<D>::LeaveConversationAsync(const Windows::ApplicationModel::Chat::ChatConversation & conversation) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IRcsManagerStatics &>(static_cast<const D &>(*this))->abi_LeaveConversationAsync(get(conversation), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IRcsTransport<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->get_ExtendedProperties(put(value)));
    return value;
}

template <typename D> bool impl_IRcsTransport<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> hstring impl_IRcsTransport<D>::TransportFriendlyName() const
{
    hstring value;
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->get_TransportFriendlyName(put(value)));
    return value;
}

template <typename D> hstring impl_IRcsTransport<D>::TransportId() const
{
    hstring value;
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->get_TransportId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Chat::RcsTransportConfiguration impl_IRcsTransport<D>::Configuration() const
{
    Windows::ApplicationModel::Chat::RcsTransportConfiguration result { nullptr };
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->get_Configuration(put(result)));
    return result;
}

template <typename D> bool impl_IRcsTransport<D>::IsStoreAndForwardEnabled(Windows::ApplicationModel::Chat::RcsServiceKind serviceKind) const
{
    bool result {};
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->abi_IsStoreAndForwardEnabled(serviceKind, &result));
    return result;
}

template <typename D> bool impl_IRcsTransport<D>::IsServiceKindSupported(Windows::ApplicationModel::Chat::RcsServiceKind serviceKind) const
{
    bool result {};
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->abi_IsServiceKindSupported(serviceKind, &result));
    return result;
}

template <typename D> event_token impl_IRcsTransport<D>::ServiceKindSupportedChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->add_ServiceKindSupportedChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRcsTransport> impl_IRcsTransport<D>::ServiceKindSupportedChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRcsTransport>(this, &ABI::Windows::ApplicationModel::Chat::IRcsTransport::remove_ServiceKindSupportedChanged, ServiceKindSupportedChanged(handler));
}

template <typename D> void impl_IRcsTransport<D>::ServiceKindSupportedChanged(event_token token) const
{
    check_hresult(static_cast<const IRcsTransport &>(static_cast<const D &>(*this))->remove_ServiceKindSupportedChanged(token));
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::MaxAttachmentCount() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxAttachmentCount(&result));
    return result;
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::MaxMessageSizeInKilobytes() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::MaxGroupMessageSizeInKilobytes() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxGroupMessageSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::MaxRecipientCount() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxRecipientCount(&result));
    return result;
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::MaxFileSizeInKilobytes() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_MaxFileSizeInKilobytes(&result));
    return result;
}

template <typename D> int32_t impl_IRcsTransportConfiguration<D>::WarningFileSizeInKilobytes() const
{
    int32_t result {};
    check_hresult(static_cast<const IRcsTransportConfiguration &>(static_cast<const D &>(*this))->get_WarningFileSizeInKilobytes(&result));
    return result;
}

template <typename D> event_token impl_IRcsEndUserMessageManager<D>::MessageAvailableChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IRcsEndUserMessageManager &>(static_cast<const D &>(*this))->add_MessageAvailableChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IRcsEndUserMessageManager> impl_IRcsEndUserMessageManager<D>::MessageAvailableChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRcsEndUserMessageManager>(this, &ABI::Windows::ApplicationModel::Chat::IRcsEndUserMessageManager::remove_MessageAvailableChanged, MessageAvailableChanged(handler));
}

template <typename D> void impl_IRcsEndUserMessageManager<D>::MessageAvailableChanged(event_token token) const
{
    check_hresult(static_cast<const IRcsEndUserMessageManager &>(static_cast<const D &>(*this))->remove_MessageAvailableChanged(token));
}

template <typename D> hstring impl_IRcsEndUserMessageAction<D>::Label() const
{
    hstring result;
    check_hresult(static_cast<const IRcsEndUserMessageAction &>(static_cast<const D &>(*this))->get_Label(put(result)));
    return result;
}

template <typename D> hstring impl_IRcsEndUserMessage<D>::TransportId() const
{
    hstring result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->get_TransportId(put(result)));
    return result;
}

template <typename D> hstring impl_IRcsEndUserMessage<D>::Title() const
{
    hstring result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->get_Title(put(result)));
    return result;
}

template <typename D> hstring impl_IRcsEndUserMessage<D>::Text() const
{
    hstring result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->get_Text(put(result)));
    return result;
}

template <typename D> bool impl_IRcsEndUserMessage<D>::IsPinRequired() const
{
    bool result {};
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->get_IsPinRequired(&result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> impl_IRcsEndUserMessage<D>::Actions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->get_Actions(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRcsEndUserMessage<D>::SendResponseAsync(const Windows::ApplicationModel::Chat::RcsEndUserMessageAction & action) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->abi_SendResponseAsync(get(action), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IRcsEndUserMessage<D>::SendResponseWithPinAsync(const Windows::ApplicationModel::Chat::RcsEndUserMessageAction & action, hstring_ref pin) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IRcsEndUserMessage &>(static_cast<const D &>(*this))->abi_SendResponseWithPinAsync(get(action), get(pin), put(result)));
    return result;
}

template <typename D> bool impl_IRcsEndUserMessageAvailableEventArgs<D>::IsMessageAvailable() const
{
    bool result {};
    check_hresult(static_cast<const IRcsEndUserMessageAvailableEventArgs &>(static_cast<const D &>(*this))->get_IsMessageAvailable(&result));
    return result;
}

template <typename D> Windows::ApplicationModel::Chat::RcsEndUserMessage impl_IRcsEndUserMessageAvailableEventArgs<D>::Message() const
{
    Windows::ApplicationModel::Chat::RcsEndUserMessage result { nullptr };
    check_hresult(static_cast<const IRcsEndUserMessageAvailableEventArgs &>(static_cast<const D &>(*this))->get_Message(put(result)));
    return result;
}

template <typename D> hstring impl_IRcsEndUserMessageAvailableTriggerDetails<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IRcsEndUserMessageAvailableTriggerDetails &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IRcsEndUserMessageAvailableTriggerDetails<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IRcsEndUserMessageAvailableTriggerDetails &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> ChatCapabilitiesManager::GetCachedCapabilitiesAsync(hstring_ref address)
{
    return get_activation_factory<ChatCapabilitiesManager, IChatCapabilitiesManagerStatics>().GetCachedCapabilitiesAsync(address);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> ChatCapabilitiesManager::GetCapabilitiesFromNetworkAsync(hstring_ref address)
{
    return get_activation_factory<ChatCapabilitiesManager, IChatCapabilitiesManagerStatics>().GetCapabilitiesFromNetworkAsync(address);
}

inline ChatConversationThreadingInfo::ChatConversationThreadingInfo() :
    ChatConversationThreadingInfo(activate_instance<ChatConversationThreadingInfo>())
{}

inline ChatMessage::ChatMessage() :
    ChatMessage(activate_instance<ChatMessage>())
{}

inline ChatMessageAttachment::ChatMessageAttachment(hstring_ref mimeType, const Windows::Storage::Streams::IRandomAccessStreamReference & dataStreamReference) :
    ChatMessageAttachment(get_activation_factory<ChatMessageAttachment, IChatMessageAttachmentFactory>().CreateChatMessageAttachment(mimeType, dataStreamReference))
{}

inline Windows::Foundation::IAsyncAction ChatMessageBlocking::MarkMessageAsBlockedAsync(hstring_ref localChatMessageId, bool blocked)
{
    return get_activation_factory<ChatMessageBlocking, IChatMessageBlockingStatic>().MarkMessageAsBlockedAsync(localChatMessageId, blocked);
}

inline Windows::Foundation::IAsyncOperation<hstring> ChatMessageManager::RegisterTransportAsync()
{
    return get_activation_factory<ChatMessageManager, IChatMessageManager2Statics>().RegisterTransportAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> ChatMessageManager::GetTransportAsync(hstring_ref transportId)
{
    return get_activation_factory<ChatMessageManager, IChatMessageManager2Statics>().GetTransportAsync(transportId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> ChatMessageManager::GetTransportsAsync()
{
    return get_activation_factory<ChatMessageManager, IChatMessageManagerStatic>().GetTransportsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> ChatMessageManager::RequestStoreAsync()
{
    return get_activation_factory<ChatMessageManager, IChatMessageManagerStatic>().RequestStoreAsync();
}

inline Windows::Foundation::IAsyncAction ChatMessageManager::ShowComposeSmsMessageAsync(const Windows::ApplicationModel::Chat::ChatMessage & message)
{
    return get_activation_factory<ChatMessageManager, IChatMessageManagerStatic>().ShowComposeSmsMessageAsync(message);
}

inline void ChatMessageManager::ShowSmsSettings()
{
    get_activation_factory<ChatMessageManager, IChatMessageManagerStatic>().ShowSmsSettings();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> ChatMessageManager::RequestSyncManagerAsync()
{
    return get_activation_factory<ChatMessageManager, IChatMessageManagerStatics3>().RequestSyncManagerAsync();
}

inline ChatQueryOptions::ChatQueryOptions() :
    ChatQueryOptions(activate_instance<ChatQueryOptions>())
{}

inline ChatRecipientDeliveryInfo::ChatRecipientDeliveryInfo() :
    ChatRecipientDeliveryInfo(activate_instance<ChatRecipientDeliveryInfo>())
{}

inline Windows::ApplicationModel::Chat::RcsEndUserMessageManager RcsManager::GetEndUserMessageManager()
{
    return get_activation_factory<RcsManager, IRcsManagerStatics>().GetEndUserMessageManager();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> RcsManager::GetTransportsAsync()
{
    return get_activation_factory<RcsManager, IRcsManagerStatics>().GetTransportsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> RcsManager::GetTransportAsync(hstring_ref transportId)
{
    return get_activation_factory<RcsManager, IRcsManagerStatics>().GetTransportAsync(transportId);
}

inline Windows::Foundation::IAsyncAction RcsManager::LeaveConversationAsync(const Windows::ApplicationModel::Chat::ChatConversation & conversation)
{
    return get_activation_factory<RcsManager, IRcsManagerStatics>().LeaveConversationAsync(conversation);
}

}

}
