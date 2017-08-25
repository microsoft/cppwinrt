// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Chat.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat {

struct WINRT_EBO ChatCapabilities :
    Windows::ApplicationModel::Chat::IChatCapabilities
{
    ChatCapabilities(std::nullptr_t) noexcept {}
};

struct ChatCapabilitiesManager
{
    ChatCapabilitiesManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCachedCapabilitiesAsync(param::hstring const& address);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCapabilitiesFromNetworkAsync(param::hstring const& address);
};

struct WINRT_EBO ChatConversation :
    Windows::ApplicationModel::Chat::IChatConversation,
    impl::require<ChatConversation, Windows::ApplicationModel::Chat::IChatConversation2, Windows::ApplicationModel::Chat::IChatItem>
{
    ChatConversation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatConversationReader :
    Windows::ApplicationModel::Chat::IChatConversationReader
{
    ChatConversationReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatConversationThreadingInfo :
    Windows::ApplicationModel::Chat::IChatConversationThreadingInfo
{
    ChatConversationThreadingInfo(std::nullptr_t) noexcept {}
    ChatConversationThreadingInfo();
};

struct WINRT_EBO ChatMessage :
    Windows::ApplicationModel::Chat::IChatMessage,
    impl::require<ChatMessage, Windows::ApplicationModel::Chat::IChatItem, Windows::ApplicationModel::Chat::IChatMessage2, Windows::ApplicationModel::Chat::IChatMessage3, Windows::ApplicationModel::Chat::IChatMessage4>
{
    ChatMessage(std::nullptr_t) noexcept {}
    ChatMessage();
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::From;
    using Windows::ApplicationModel::Chat::IChatMessage::From;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsForwardingDisabled;
    using Windows::ApplicationModel::Chat::IChatMessage::IsForwardingDisabled;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsIncoming;
    using Windows::ApplicationModel::Chat::IChatMessage::IsIncoming;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::IsRead;
    using Windows::ApplicationModel::Chat::IChatMessage::IsRead;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::LocalTimestamp;
    using Windows::ApplicationModel::Chat::IChatMessage::LocalTimestamp;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::NetworkTimestamp;
    using Windows::ApplicationModel::Chat::IChatMessage::NetworkTimestamp;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::RemoteId;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Status;
    using Windows::ApplicationModel::Chat::IChatMessage::Status;
    using impl::consume_t<ChatMessage, Windows::ApplicationModel::Chat::IChatMessage2>::Subject;
    using Windows::ApplicationModel::Chat::IChatMessage::Subject;
};

struct WINRT_EBO ChatMessageAttachment :
    Windows::ApplicationModel::Chat::IChatMessageAttachment,
    impl::require<ChatMessageAttachment, Windows::ApplicationModel::Chat::IChatMessageAttachment2>
{
    ChatMessageAttachment(std::nullptr_t) noexcept {}
    ChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference);
};

struct ChatMessageBlocking
{
    ChatMessageBlocking() = delete;
    static Windows::Foundation::IAsyncAction MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked);
};

struct WINRT_EBO ChatMessageChange :
    Windows::ApplicationModel::Chat::IChatMessageChange
{
    ChatMessageChange(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageChangeReader :
    Windows::ApplicationModel::Chat::IChatMessageChangeReader
{
    ChatMessageChangeReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageChangeTracker :
    Windows::ApplicationModel::Chat::IChatMessageChangeTracker
{
    ChatMessageChangeTracker(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageChangedDeferral :
    Windows::ApplicationModel::Chat::IChatMessageChangedDeferral
{
    ChatMessageChangedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageChangedEventArgs :
    Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs
{
    ChatMessageChangedEventArgs(std::nullptr_t) noexcept {}
};

struct ChatMessageManager
{
    ChatMessageManager() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> RegisterTransportAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> GetTransportAsync(param::hstring const& transportId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> GetTransportsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> RequestStoreAsync();
    static Windows::Foundation::IAsyncAction ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message);
    static void ShowSmsSettings();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> RequestSyncManagerAsync();
};

struct WINRT_EBO ChatMessageNotificationTriggerDetails :
    Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails,
    impl::require<ChatMessageNotificationTriggerDetails, Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
{
    ChatMessageNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageReader :
    Windows::ApplicationModel::Chat::IChatMessageReader,
    impl::require<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>
{
    ChatMessageReader(std::nullptr_t) noexcept {}
    using impl::consume_t<ChatMessageReader, Windows::ApplicationModel::Chat::IChatMessageReader2>::ReadBatchAsync;
    using Windows::ApplicationModel::Chat::IChatMessageReader::ReadBatchAsync;
};

struct WINRT_EBO ChatMessageStore :
    Windows::ApplicationModel::Chat::IChatMessageStore,
    impl::require<ChatMessageStore, Windows::ApplicationModel::Chat::IChatMessageStore2, Windows::ApplicationModel::Chat::IChatMessageStore3>
{
    ChatMessageStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageStoreChangedEventArgs :
    Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs
{
    ChatMessageStoreChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageTransport :
    Windows::ApplicationModel::Chat::IChatMessageTransport,
    impl::require<ChatMessageTransport, Windows::ApplicationModel::Chat::IChatMessageTransport2>
{
    ChatMessageTransport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageTransportConfiguration :
    Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration
{
    ChatMessageTransportConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatMessageValidationResult :
    Windows::ApplicationModel::Chat::IChatMessageValidationResult
{
    ChatMessageValidationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatQueryOptions :
    Windows::ApplicationModel::Chat::IChatQueryOptions
{
    ChatQueryOptions(std::nullptr_t) noexcept {}
    ChatQueryOptions();
};

struct WINRT_EBO ChatRecipientDeliveryInfo :
    Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo
{
    ChatRecipientDeliveryInfo(std::nullptr_t) noexcept {}
    ChatRecipientDeliveryInfo();
};

struct WINRT_EBO ChatSearchReader :
    Windows::ApplicationModel::Chat::IChatSearchReader
{
    ChatSearchReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatSyncConfiguration :
    Windows::ApplicationModel::Chat::IChatSyncConfiguration
{
    ChatSyncConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChatSyncManager :
    Windows::ApplicationModel::Chat::IChatSyncManager
{
    ChatSyncManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsEndUserMessage :
    Windows::ApplicationModel::Chat::IRcsEndUserMessage
{
    RcsEndUserMessage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsEndUserMessageAction :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAction
{
    RcsEndUserMessageAction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsEndUserMessageAvailableEventArgs :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs
{
    RcsEndUserMessageAvailableEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsEndUserMessageAvailableTriggerDetails :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails
{
    RcsEndUserMessageAvailableTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsEndUserMessageManager :
    Windows::ApplicationModel::Chat::IRcsEndUserMessageManager
{
    RcsEndUserMessageManager(std::nullptr_t) noexcept {}
};

struct RcsManager
{
    RcsManager() = delete;
    static Windows::ApplicationModel::Chat::RcsEndUserMessageManager GetEndUserMessageManager();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> GetTransportsAsync();
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> GetTransportAsync(param::hstring const& transportId);
    static Windows::Foundation::IAsyncAction LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation);
};

struct WINRT_EBO RcsServiceKindSupportedChangedEventArgs :
    Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs
{
    RcsServiceKindSupportedChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsTransport :
    Windows::ApplicationModel::Chat::IRcsTransport
{
    RcsTransport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RcsTransportConfiguration :
    Windows::ApplicationModel::Chat::IRcsTransportConfiguration
{
    RcsTransportConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RemoteParticipantComposingChangedEventArgs :
    Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs
{
    RemoteParticipantComposingChangedEventArgs(std::nullptr_t) noexcept {}
};

}
