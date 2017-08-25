// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct MediaEncodingProfile;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WebAccount;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat {

enum class ChatConversationThreadingKind
{
    Participants = 0,
    ContactId = 1,
    ConversationId = 2,
    Custom = 3,
};

enum class ChatItemKind
{
    Message = 0,
    Conversation = 1,
};

enum class ChatMessageChangeType
{
    MessageCreated = 0,
    MessageModified = 1,
    MessageDeleted = 2,
    ChangeTrackingLost = 3,
};

enum class ChatMessageKind
{
    Standard = 0,
    FileTransferRequest = 1,
    TransportCustom = 2,
    JoinedConversation = 3,
    LeftConversation = 4,
    OtherParticipantJoinedConversation = 5,
    OtherParticipantLeftConversation = 6,
};

enum class ChatMessageOperatorKind
{
    Unspecified = 0,
    Sms = 1,
    Mms = 2,
    Rcs = 3,
};

enum class ChatMessageStatus
{
    Draft = 0,
    Sending = 1,
    Sent = 2,
    SendRetryNeeded = 3,
    SendFailed = 4,
    Received = 5,
    ReceiveDownloadNeeded = 6,
    ReceiveDownloadFailed = 7,
    ReceiveDownloading = 8,
    Deleted = 9,
    Declined = 10,
    Cancelled = 11,
    Recalled = 12,
    ReceiveRetryNeeded = 13,
};

enum class ChatMessageTransportKind
{
    Text = 0,
    Untriaged = 1,
    Blocked = 2,
    Custom = 3,
};

enum class ChatMessageValidationStatus
{
    Valid = 0,
    NoRecipients = 1,
    InvalidData = 2,
    MessageTooLarge = 3,
    TooManyRecipients = 4,
    TransportInactive = 5,
    TransportNotFound = 6,
    TooManyAttachments = 7,
    InvalidRecipients = 8,
    InvalidBody = 9,
    InvalidOther = 10,
    ValidWithLargeMessage = 11,
    VoiceRoamingRestriction = 12,
    DataRoamingRestriction = 13,
};

enum class ChatRestoreHistorySpan
{
    LastMonth = 0,
    LastYear = 1,
    AnyTime = 2,
};

enum class ChatStoreChangedEventKind
{
    NotificationsMissed = 0,
    StoreModified = 1,
    MessageCreated = 2,
    MessageModified = 3,
    MessageDeleted = 4,
    ConversationModified = 5,
    ConversationDeleted = 6,
    ConversationTransportDeleted = 7,
};

enum class ChatTransportErrorCodeCategory
{
    None = 0,
    Http = 1,
    Network = 2,
    MmsServer = 3,
};

enum class ChatTransportInterpretedErrorCode
{
    None = 0,
    Unknown = 1,
    InvalidRecipientAddress = 2,
    NetworkConnectivity = 3,
    ServiceDenied = 4,
    Timeout = 5,
};

enum class RcsServiceKind
{
    Chat = 0,
    GroupChat = 1,
    FileTransfer = 2,
    Capability = 3,
};

struct IChatCapabilities;
struct IChatCapabilitiesManagerStatics;
struct IChatConversation;
struct IChatConversation2;
struct IChatConversationReader;
struct IChatConversationThreadingInfo;
struct IChatItem;
struct IChatMessage;
struct IChatMessage2;
struct IChatMessage3;
struct IChatMessage4;
struct IChatMessageAttachment;
struct IChatMessageAttachment2;
struct IChatMessageAttachmentFactory;
struct IChatMessageBlockingStatic;
struct IChatMessageChange;
struct IChatMessageChangeReader;
struct IChatMessageChangeTracker;
struct IChatMessageChangedDeferral;
struct IChatMessageChangedEventArgs;
struct IChatMessageManager2Statics;
struct IChatMessageManagerStatic;
struct IChatMessageManagerStatics3;
struct IChatMessageNotificationTriggerDetails;
struct IChatMessageNotificationTriggerDetails2;
struct IChatMessageReader;
struct IChatMessageReader2;
struct IChatMessageStore;
struct IChatMessageStore2;
struct IChatMessageStore3;
struct IChatMessageStoreChangedEventArgs;
struct IChatMessageTransport;
struct IChatMessageTransport2;
struct IChatMessageTransportConfiguration;
struct IChatMessageValidationResult;
struct IChatQueryOptions;
struct IChatRecipientDeliveryInfo;
struct IChatSearchReader;
struct IChatSyncConfiguration;
struct IChatSyncManager;
struct IRcsEndUserMessage;
struct IRcsEndUserMessageAction;
struct IRcsEndUserMessageAvailableEventArgs;
struct IRcsEndUserMessageAvailableTriggerDetails;
struct IRcsEndUserMessageManager;
struct IRcsManagerStatics;
struct IRcsServiceKindSupportedChangedEventArgs;
struct IRcsTransport;
struct IRcsTransportConfiguration;
struct IRemoteParticipantComposingChangedEventArgs;
struct ChatCapabilities;
struct ChatCapabilitiesManager;
struct ChatConversation;
struct ChatConversationReader;
struct ChatConversationThreadingInfo;
struct ChatMessage;
struct ChatMessageAttachment;
struct ChatMessageBlocking;
struct ChatMessageChange;
struct ChatMessageChangeReader;
struct ChatMessageChangeTracker;
struct ChatMessageChangedDeferral;
struct ChatMessageChangedEventArgs;
struct ChatMessageManager;
struct ChatMessageNotificationTriggerDetails;
struct ChatMessageReader;
struct ChatMessageStore;
struct ChatMessageStoreChangedEventArgs;
struct ChatMessageTransport;
struct ChatMessageTransportConfiguration;
struct ChatMessageValidationResult;
struct ChatQueryOptions;
struct ChatRecipientDeliveryInfo;
struct ChatSearchReader;
struct ChatSyncConfiguration;
struct ChatSyncManager;
struct RcsEndUserMessage;
struct RcsEndUserMessageAction;
struct RcsEndUserMessageAvailableEventArgs;
struct RcsEndUserMessageAvailableTriggerDetails;
struct RcsEndUserMessageManager;
struct RcsManager;
struct RcsServiceKindSupportedChangedEventArgs;
struct RcsTransport;
struct RcsTransportConfiguration;
struct RemoteParticipantComposingChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Chat::IChatCapabilities>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatConversation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatConversation2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatConversationReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessage>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessage2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessage3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessage4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChange>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageReader2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStore3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransport>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatSearchReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IChatSyncManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsTransport>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatCapabilities>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatCapabilitiesManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatConversation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatConversationReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessage>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageAttachment>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageBlocking>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChange>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeTracker>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransport>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageValidationResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatQueryOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatSearchReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatSyncConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatSyncManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessage>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsEndUserMessageManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsTransport>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsTransportConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatConversationThreadingKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatItemKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageChangeType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageOperatorKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageTransportKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatMessageValidationStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Chat::RcsServiceKind>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Chat::IChatCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatCapabilitiesManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatConversation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatConversation" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatConversation2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatConversation2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatConversationReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatConversationReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatConversationThreadingInfo" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatItem" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessage" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessage2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessage2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessage3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessage3" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessage4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessage4" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageAttachment" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageAttachment2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageAttachmentFactory" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageBlockingStatic" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageChange" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageManager2Statics" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageManagerStatic" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageManagerStatics3" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageNotificationTriggerDetails2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageReader2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageReader2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageStore" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageStore2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageStore3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageStore3" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageTransport>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageTransport" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageTransport2" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageTransportConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatMessageValidationResult" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatRecipientDeliveryInfo" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatSearchReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatSearchReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatSyncConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::IChatSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IChatSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsEndUserMessage" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAction" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsEndUserMessageAvailableTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsEndUserMessageManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsServiceKindSupportedChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsTransport>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsTransport" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRcsTransportConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.IRemoteParticipantComposingChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatCapabilitiesManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatCapabilitiesManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatConversation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatConversation" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatConversationReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatConversationReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatConversationThreadingInfo" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessage" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageAttachment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageAttachment" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageBlocking>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageBlocking" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChange" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageStore" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageTransport>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageTransport" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageTransportConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageValidationResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageValidationResult" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatRecipientDeliveryInfo" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatSearchReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatSearchReader" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatSyncConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatSyncConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsEndUserMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsEndUserMessage" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsEndUserMessageAction" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsEndUserMessageAvailableTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsEndUserMessageManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsEndUserMessageManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsManager" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsServiceKindSupportedChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsTransport>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsTransport" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsTransportConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsTransportConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RemoteParticipantComposingChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatConversationThreadingKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatConversationThreadingKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatItemKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatItemKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageChangeType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageChangeType" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageOperatorKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageOperatorKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageStatus" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageTransportKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageTransportKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatMessageValidationStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatMessageValidationStatus" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatRestoreHistorySpan" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatStoreChangedEventKind" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatTransportErrorCodeCategory" }; };
template <> struct name<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.ChatTransportInterpretedErrorCode" }; };
template <> struct name<Windows::ApplicationModel::Chat::RcsServiceKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Chat.RcsServiceKind" }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatCapabilities>{ static constexpr GUID value{ 0x3AFF77BC,0x39C9,0x4DD1,{ 0xAD,0x2D,0x39,0x64,0xDD,0x9D,0x40,0x3F } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ static constexpr GUID value{ 0xB57A2F30,0x7041,0x458E,{ 0xB0,0xCF,0x7C,0x0D,0x9F,0xEA,0x33,0x3A } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatConversation>{ static constexpr GUID value{ 0xA58C080D,0x1A6F,0x46DC,{ 0x8F,0x3D,0xF5,0x02,0x86,0x60,0xB6,0xEE } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatConversation2>{ static constexpr GUID value{ 0x0A030CD1,0x983A,0x47AA,{ 0x9A,0x90,0xEE,0x48,0xEE,0x99,0x7B,0x59 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatConversationReader>{ static constexpr GUID value{ 0x055136D2,0xDE32,0x4A47,{ 0xA9,0x3A,0xB3,0xDC,0x08,0x33,0x85,0x2B } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ static constexpr GUID value{ 0x331C21DC,0x7A07,0x4422,{ 0xA3,0x2C,0x24,0xBE,0x7C,0x6D,0xAB,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatItem>{ static constexpr GUID value{ 0x8751D000,0xCEB1,0x4243,{ 0xB8,0x03,0x15,0xD4,0x5A,0x1D,0xD4,0x28 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessage>{ static constexpr GUID value{ 0x4B39052A,0x1142,0x5089,{ 0x76,0xDA,0xF2,0xDB,0x3D,0x17,0xCD,0x05 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessage2>{ static constexpr GUID value{ 0x86668332,0x543F,0x49F5,{ 0xAC,0x71,0x6C,0x2A,0xFC,0x65,0x65,0xFD } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessage3>{ static constexpr GUID value{ 0x74EB2FB0,0x3BA7,0x459F,{ 0x8E,0x0B,0xE8,0xAF,0x0F,0xEB,0xD9,0xAD } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessage4>{ static constexpr GUID value{ 0x2D144B0F,0xD2BF,0x460C,{ 0xAA,0x68,0x6D,0x3F,0x84,0x83,0xC9,0xBF } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ static constexpr GUID value{ 0xC7C4FD74,0xBF63,0x58EB,{ 0x50,0x8C,0x8B,0x86,0x3F,0xF1,0x6B,0x67 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ static constexpr GUID value{ 0x5ED99270,0x7DD1,0x4A87,{ 0xA8,0xCE,0xAC,0xDD,0x87,0xD8,0x0D,0xC8 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ static constexpr GUID value{ 0x205852A2,0xA356,0x5B71,{ 0x6C,0xA9,0x66,0xC9,0x85,0xB7,0xD0,0xD5 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ static constexpr GUID value{ 0xF6B9A380,0xCDEA,0x11E4,{ 0x88,0x30,0x08,0x00,0x20,0x0C,0x9A,0x66 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageChange>{ static constexpr GUID value{ 0x1C18C355,0x421E,0x54B8,{ 0x6D,0x38,0x6B,0x3A,0x6C,0x82,0xFC,0xCC } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ static constexpr GUID value{ 0x14267020,0x28CE,0x5F26,{ 0x7B,0x05,0x9A,0x5C,0x7C,0xCE,0x87,0xCA } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ static constexpr GUID value{ 0x60B7F066,0x70A0,0x5224,{ 0x50,0x8C,0x24,0x2E,0xF7,0xC1,0xD0,0x6F } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ static constexpr GUID value{ 0xFBC6B30C,0x788C,0x4DCC,{ 0xAC,0xE7,0x62,0x82,0x38,0x29,0x68,0xCF } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ static constexpr GUID value{ 0xB6B73E2D,0x691C,0x4EDF,{ 0x86,0x60,0x6E,0xB9,0x89,0x68,0x92,0xE3 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ static constexpr GUID value{ 0x1D45390F,0x9F4F,0x4E35,{ 0x96,0x4E,0x1B,0x9C,0xA6,0x1A,0xC0,0x44 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ static constexpr GUID value{ 0xF15C60F7,0xD5E8,0x5E92,{ 0x55,0x6D,0xE0,0x3B,0x60,0x25,0x31,0x04 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ static constexpr GUID value{ 0x208B830D,0x6755,0x48CC,{ 0x9A,0xB3,0xFD,0x03,0xC4,0x63,0xFC,0x92 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ static constexpr GUID value{ 0xFD344DFB,0x3063,0x4E17,{ 0x85,0x86,0xC6,0xC0,0x82,0x62,0xE6,0xC0 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ static constexpr GUID value{ 0x6BB522E0,0xAA07,0x4FD1,{ 0x94,0x71,0x77,0x93,0x4F,0xB7,0x5E,0xE6 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageReader>{ static constexpr GUID value{ 0xB6EA78CE,0x4489,0x56F9,{ 0x76,0xAA,0xE2,0x04,0x68,0x25,0x14,0xCF } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageReader2>{ static constexpr GUID value{ 0x89643683,0x64BB,0x470D,{ 0x9D,0xF4,0x0D,0xE8,0xBE,0x1A,0x05,0xBF } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageStore>{ static constexpr GUID value{ 0x31F2FD01,0xCCF6,0x580B,{ 0x49,0x76,0x0A,0x07,0xDD,0x5D,0x3B,0x47 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageStore2>{ static constexpr GUID value{ 0xAD4DC4EE,0x3AD4,0x491B,{ 0xB3,0x11,0xAB,0xDF,0x9B,0xB2,0x27,0x68 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageStore3>{ static constexpr GUID value{ 0x9ADBBB09,0x4345,0x4EC1,{ 0x8B,0x74,0xB7,0x33,0x82,0x43,0x71,0x9C } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ static constexpr GUID value{ 0x65C66FAC,0xFE8C,0x46D4,{ 0x91,0x19,0x57,0xB8,0x41,0x03,0x11,0xD5 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageTransport>{ static constexpr GUID value{ 0x63A9DBF8,0xE6B3,0x5C9A,{ 0x5F,0x85,0xD4,0x79,0x25,0xB9,0xBD,0x18 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ static constexpr GUID value{ 0x90A75622,0xD84A,0x4C22,{ 0xA9,0x4D,0x54,0x44,0x44,0xED,0xC8,0xA1 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ static constexpr GUID value{ 0x879FF725,0x1A08,0x4ACA,{ 0xA0,0x75,0x33,0x55,0x12,0x63,0x12,0xE6 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ static constexpr GUID value{ 0x25E93A03,0x28EC,0x5889,{ 0x56,0x9B,0x7E,0x48,0x6B,0x12,0x6F,0x18 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatQueryOptions>{ static constexpr GUID value{ 0x2FD364A6,0xBF36,0x42F7,{ 0xB7,0xE7,0x92,0x3C,0x0A,0xAB,0xFE,0x16 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ static constexpr GUID value{ 0xFFC7B2A2,0x283C,0x4C0A,{ 0x8A,0x0E,0x8C,0x33,0xBD,0xBF,0x05,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatSearchReader>{ static constexpr GUID value{ 0x4665FE49,0x9020,0x4752,{ 0x98,0x0D,0x39,0x61,0x23,0x25,0xF5,0x89 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ static constexpr GUID value{ 0x09F869B2,0x69F4,0x4AFF,{ 0x82,0xB6,0x06,0x99,0x2F,0xF4,0x02,0xD2 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IChatSyncManager>{ static constexpr GUID value{ 0x7BA52C63,0x2650,0x486F,{ 0xB4,0xB4,0x6B,0xD9,0xD3,0xD6,0x3C,0x84 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ static constexpr GUID value{ 0xD7CDA5EB,0xCBD7,0x4F3B,{ 0x85,0x26,0xB5,0x06,0xDE,0xC3,0x5C,0x53 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ static constexpr GUID value{ 0x92378737,0x9B42,0x46D3,{ 0x9D,0x5E,0x3C,0x1B,0x2D,0xAE,0x7C,0xB8 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ static constexpr GUID value{ 0x2D45AE01,0x3F89,0x41EA,{ 0x97,0x02,0x9E,0x9E,0xD4,0x11,0xAA,0x98 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ static constexpr GUID value{ 0x5B97742D,0x351F,0x4692,{ 0xB4,0x1E,0x1B,0x03,0x5D,0xC1,0x89,0x86 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ static constexpr GUID value{ 0x3054AE5A,0x4D1F,0x4B59,{ 0x94,0x33,0x12,0x6C,0x73,0x4E,0x86,0xA6 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ static constexpr GUID value{ 0x7D270AC5,0x0ABD,0x4F31,{ 0x9B,0x99,0xA5,0x9E,0x71,0xA7,0xB7,0x31 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ static constexpr GUID value{ 0xF47EA244,0xE783,0x4866,{ 0xB3,0xA7,0x4E,0x5C,0xCF,0x02,0x30,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsTransport>{ static constexpr GUID value{ 0xFEA34759,0xF37C,0x4319,{ 0x85,0x46,0xEC,0x84,0xD2,0x1D,0x30,0xFF } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ static constexpr GUID value{ 0x1FCCB102,0x2472,0x4BB9,{ 0x99,0x88,0xC1,0x21,0x1C,0x83,0xE8,0xA9 } }; };
template <> struct guid<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ static constexpr GUID value{ 0x1EC045A7,0xCFC9,0x45C9,{ 0x98,0x76,0x44,0x9F,0x2B,0xC1,0x80,0xF5 } }; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatCapabilities>{ using type = Windows::ApplicationModel::Chat::IChatCapabilities; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversation>{ using type = Windows::ApplicationModel::Chat::IChatConversation; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversationReader>{ using type = Windows::ApplicationModel::Chat::IChatConversationReader; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatConversationThreadingInfo>{ using type = Windows::ApplicationModel::Chat::IChatConversationThreadingInfo; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessage>{ using type = Windows::ApplicationModel::Chat::IChatMessage; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageAttachment>{ using type = Windows::ApplicationModel::Chat::IChatMessageAttachment; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChange>{ using type = Windows::ApplicationModel::Chat::IChatMessageChange; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangeReader>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangeReader; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangeTracker>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangeTracker; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangedDeferral>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangedDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageReader>{ using type = Windows::ApplicationModel::Chat::IChatMessageReader; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageStore>{ using type = Windows::ApplicationModel::Chat::IChatMessageStore; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageTransport>{ using type = Windows::ApplicationModel::Chat::IChatMessageTransport; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration>{ using type = Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatMessageValidationResult>{ using type = Windows::ApplicationModel::Chat::IChatMessageValidationResult; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatQueryOptions>{ using type = Windows::ApplicationModel::Chat::IChatQueryOptions; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo>{ using type = Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSearchReader>{ using type = Windows::ApplicationModel::Chat::IChatSearchReader; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSyncConfiguration>{ using type = Windows::ApplicationModel::Chat::IChatSyncConfiguration; };
template <> struct default_interface<Windows::ApplicationModel::Chat::ChatSyncManager>{ using type = Windows::ApplicationModel::Chat::IChatSyncManager; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessage>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessage; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAction>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAction; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableTriggerDetails>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsEndUserMessageManager>{ using type = Windows::ApplicationModel::Chat::IRcsEndUserMessageManager; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsTransport>{ using type = Windows::ApplicationModel::Chat::IRcsTransport; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RcsTransportConfiguration>{ using type = Windows::ApplicationModel::Chat::IRcsTransportConfiguration; };
template <> struct default_interface<Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs>{ using type = Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatCapabilities
{
    bool IsOnline() const;
    bool IsChatCapable() const;
    bool IsFileTransferCapable() const;
    bool IsGeoLocationPushCapable() const;
    bool IsIntegratedMessagingCapable() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatCapabilities> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatCapabilities<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCachedCapabilitiesAsync(param::hstring const& address) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatCapabilities> GetCapabilitiesFromNetworkAsync(param::hstring const& address) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatCapabilitiesManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatConversation
{
    bool HasUnreadMessages() const;
    hstring Id() const;
    hstring Subject() const;
    void Subject(param::hstring const& value) const;
    bool IsConversationMuted() const;
    void IsConversationMuted(bool value) const;
    hstring MostRecentMessageId() const;
    Windows::Foundation::Collections::IVector<hstring> Participants() const;
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo ThreadingInfo() const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::ApplicationModel::Chat::ChatMessageReader GetMessageReader() const;
    Windows::Foundation::IAsyncAction MarkMessagesAsReadAsync() const;
    Windows::Foundation::IAsyncAction MarkMessagesAsReadAsync(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    void NotifyLocalParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const;
    void NotifyRemoteParticipantComposing(param::hstring const& transportId, param::hstring const& participantAddress, bool isComposing) const;
    event_token RemoteParticipantComposingChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const;
    using RemoteParticipantComposingChanged_revoker = event_revoker<Windows::ApplicationModel::Chat::IChatConversation>;
    RemoteParticipantComposingChanged_revoker RemoteParticipantComposingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatConversation, Windows::ApplicationModel::Chat::RemoteParticipantComposingChangedEventArgs> const& handler) const;
    void RemoteParticipantComposingChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatConversation> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatConversation2
{
    bool CanModifyParticipants() const;
    void CanModifyParticipants(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatConversation2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversation2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatConversationReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> ReadBatchAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatConversation>> ReadBatchAsync(int32_t count) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatConversationReader> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversationReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo
{
    hstring ContactId() const;
    void ContactId(param::hstring const& value) const;
    hstring Custom() const;
    void Custom(param::hstring const& value) const;
    hstring ConversationId() const;
    void ConversationId(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> Participants() const;
    Windows::ApplicationModel::Chat::ChatConversationThreadingKind Kind() const;
    void Kind(Windows::ApplicationModel::Chat::ChatConversationThreadingKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatConversationThreadingInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatItem
{
    Windows::ApplicationModel::Chat::ChatItemKind ItemKind() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatItem> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessage
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatMessageAttachment> Attachments() const;
    hstring Body() const;
    void Body(param::hstring const& value) const;
    hstring From() const;
    hstring Id() const;
    bool IsForwardingDisabled() const;
    bool IsIncoming() const;
    bool IsRead() const;
    Windows::Foundation::DateTime LocalTimestamp() const;
    Windows::Foundation::DateTime NetworkTimestamp() const;
    Windows::Foundation::Collections::IVector<hstring> Recipients() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Chat::ChatMessageStatus> RecipientSendStatuses() const;
    Windows::ApplicationModel::Chat::ChatMessageStatus Status() const;
    hstring Subject() const;
    hstring TransportFriendlyName() const;
    hstring TransportId() const;
    void TransportId(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessage2
{
    uint64_t EstimatedDownloadSize() const;
    void EstimatedDownloadSize(uint64_t value) const;
    void From(param::hstring const& value) const;
    bool IsAutoReply() const;
    void IsAutoReply(bool value) const;
    void IsForwardingDisabled(bool value) const;
    bool IsReplyDisabled() const;
    void IsIncoming(bool value) const;
    void IsRead(bool value) const;
    bool IsSeen() const;
    void IsSeen(bool value) const;
    bool IsSimMessage() const;
    void LocalTimestamp(Windows::Foundation::DateTime const& value) const;
    Windows::ApplicationModel::Chat::ChatMessageKind MessageKind() const;
    void MessageKind(Windows::ApplicationModel::Chat::ChatMessageKind const& value) const;
    Windows::ApplicationModel::Chat::ChatMessageOperatorKind MessageOperatorKind() const;
    void MessageOperatorKind(Windows::ApplicationModel::Chat::ChatMessageOperatorKind const& value) const;
    void NetworkTimestamp(Windows::Foundation::DateTime const& value) const;
    bool IsReceivedDuringQuietHours() const;
    void IsReceivedDuringQuietHours(bool value) const;
    void RemoteId(param::hstring const& value) const;
    void Status(Windows::ApplicationModel::Chat::ChatMessageStatus const& value) const;
    void Subject(param::hstring const& value) const;
    bool ShouldSuppressNotification() const;
    void ShouldSuppressNotification(bool value) const;
    Windows::ApplicationModel::Chat::ChatConversationThreadingInfo ThreadingInfo() const;
    void ThreadingInfo(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Chat::ChatRecipientDeliveryInfo> RecipientsDeliveryInfos() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessage3
{
    hstring RemoteId() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage3> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessage4
{
    hstring SyncId() const;
    void SyncId(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessage4> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessage4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachment
{
    Windows::Storage::Streams::IRandomAccessStreamReference DataStreamReference() const;
    void DataStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    uint32_t GroupId() const;
    void GroupId(uint32_t value) const;
    hstring MimeType() const;
    void MimeType(param::hstring const& value) const;
    hstring Text() const;
    void Text(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachment> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachment<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2
{
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    double TransferProgress() const;
    void TransferProgress(double value) const;
    hstring OriginalFileName() const;
    void OriginalFileName(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachment2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachment2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory
{
    Windows::ApplicationModel::Chat::ChatMessageAttachment CreateChatMessageAttachment(param::hstring const& mimeType, Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageAttachmentFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic
{
    Windows::Foundation::IAsyncAction MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageBlockingStatic<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageChange
{
    Windows::ApplicationModel::Chat::ChatMessageChangeType ChangeType() const;
    Windows::ApplicationModel::Chat::ChatMessage Message() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChange> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChange<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader
{
    void AcceptChanges() const;
    void AcceptChangesThrough(Windows::ApplicationModel::Chat::ChatMessageChange const& lastChangeToAcknowledge) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageChange>> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangeReader> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangeReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker
{
    void Enable() const;
    Windows::ApplicationModel::Chat::ChatMessageChangeReader GetChangeReader() const;
    void Reset() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangeTracker> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangeTracker<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangedDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs
{
    Windows::ApplicationModel::Chat::ChatMessageChangedDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics
{
    Windows::Foundation::IAsyncOperation<hstring> RegisterTransportAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageTransport> GetTransportAsync(param::hstring const& transportId) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManager2Statics> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManager2Statics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessageTransport>> GetTransportsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessageStore> RequestStoreAsync() const;
    Windows::Foundation::IAsyncAction ShowComposeSmsMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& message) const;
    void ShowSmsSettings() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManagerStatic> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatic<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatSyncManager> RequestSyncManagerAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageManagerStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails
{
    Windows::ApplicationModel::Chat::ChatMessage ChatMessage() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2
{
    bool ShouldDisplayToast() const;
    bool ShouldUpdateDetailText() const;
    bool ShouldUpdateBadge() const;
    bool ShouldUpdateActionCenter() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageReader> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageReader2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::ChatMessage>> ReadBatchAsync(int32_t count) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageReader2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageReader2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageStore
{
    Windows::ApplicationModel::Chat::ChatMessageChangeTracker ChangeTracker() const;
    Windows::Foundation::IAsyncAction DeleteMessageAsync(param::hstring const& localMessageId) const;
    Windows::Foundation::IAsyncAction DownloadMessageAsync(param::hstring const& localChatMessageId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> GetMessageAsync(param::hstring const& localChatMessageId) const;
    Windows::ApplicationModel::Chat::ChatMessageReader GetMessageReader() const;
    Windows::ApplicationModel::Chat::ChatMessageReader GetMessageReader(Windows::Foundation::TimeSpan const& recentTimeLimit) const;
    Windows::Foundation::IAsyncAction MarkMessageReadAsync(param::hstring const& localChatMessageId) const;
    Windows::Foundation::IAsyncAction RetrySendMessageAsync(param::hstring const& localChatMessageId) const;
    Windows::Foundation::IAsyncAction SendMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
    Windows::ApplicationModel::Chat::ChatMessageValidationResult ValidateMessage(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
    event_token MessageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const;
    using MessageChanged_revoker = event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore>;
    MessageChanged_revoker MessageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageChangedEventArgs> const& value) const;
    void MessageChanged(event_token const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageStore2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> ForwardMessageAsync(param::hstring const& localChatMessageId, param::async_iterable<hstring> const& addresses) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> GetConversationAsync(param::hstring const& conversationId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> GetConversationAsync(param::hstring const& conversationId, param::async_iterable<hstring> const& transportIds) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatConversation> GetConversationFromThreadingInfoAsync(Windows::ApplicationModel::Chat::ChatConversationThreadingInfo const& threadingInfo) const;
    Windows::ApplicationModel::Chat::ChatConversationReader GetConversationReader() const;
    Windows::ApplicationModel::Chat::ChatConversationReader GetConversationReader(param::iterable<hstring> const& transportIds) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> GetMessageByRemoteIdAsync(param::hstring const& transportId, param::hstring const& remoteId) const;
    Windows::Foundation::IAsyncOperation<int32_t> GetUnseenCountAsync() const;
    Windows::Foundation::IAsyncOperation<int32_t> GetUnseenCountAsync(param::async_iterable<hstring> const& transportIds) const;
    Windows::Foundation::IAsyncAction MarkAsSeenAsync() const;
    Windows::Foundation::IAsyncAction MarkAsSeenAsync(param::async_iterable<hstring> const& transportIds) const;
    Windows::ApplicationModel::Chat::ChatSearchReader GetSearchReader(Windows::ApplicationModel::Chat::ChatQueryOptions const& value) const;
    Windows::Foundation::IAsyncAction SaveMessageAsync(Windows::ApplicationModel::Chat::ChatMessage const& chatMessage) const;
    Windows::Foundation::IAsyncOperation<bool> TryCancelDownloadMessageAsync(param::hstring const& localChatMessageId) const;
    Windows::Foundation::IAsyncOperation<bool> TryCancelSendMessageAsync(param::hstring const& localChatMessageId) const;
    event_token StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const;
    using StoreChanged_revoker = event_revoker<Windows::ApplicationModel::Chat::IChatMessageStore2>;
    StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::ChatMessageStore, Windows::ApplicationModel::Chat::ChatMessageStoreChangedEventArgs> const& handler) const;
    void StoreChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageStore3
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::ChatMessage> GetMessageBySyncIdAsync(param::hstring const& syncId) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStore3> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStore3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs
{
    hstring Id() const;
    Windows::ApplicationModel::Chat::ChatStoreChangedEventKind Kind() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageStoreChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageTransport
{
    bool IsAppSetAsNotificationProvider() const;
    bool IsActive() const;
    hstring TransportFriendlyName() const;
    hstring TransportId() const;
    Windows::Foundation::IAsyncAction RequestSetAsNotificationProviderAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransport> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransport<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageTransport2
{
    Windows::ApplicationModel::Chat::ChatMessageTransportConfiguration Configuration() const;
    Windows::ApplicationModel::Chat::ChatMessageTransportKind TransportKind() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransport2> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransport2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration
{
    int32_t MaxAttachmentCount() const;
    int32_t MaxMessageSizeInKilobytes() const;
    int32_t MaxRecipientCount() const;
    Windows::Media::MediaProperties::MediaEncodingProfile SupportedVideoFormat() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> ExtendedProperties() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageTransportConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult
{
    Windows::Foundation::IReference<uint32_t> MaxPartCount() const;
    Windows::Foundation::IReference<uint32_t> PartCount() const;
    Windows::Foundation::IReference<uint32_t> RemainingCharacterCountInPart() const;
    Windows::ApplicationModel::Chat::ChatMessageValidationStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatMessageValidationResult> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatMessageValidationResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatQueryOptions
{
    hstring SearchString() const;
    void SearchString(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatQueryOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatQueryOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo
{
    hstring TransportAddress() const;
    void TransportAddress(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> DeliveryTime() const;
    void DeliveryTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ReadTime() const;
    void ReadTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory TransportErrorCodeCategory() const;
    Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode TransportInterpretedErrorCode() const;
    int32_t TransportErrorCode() const;
    bool IsErrorPermanent() const;
    Windows::ApplicationModel::Chat::ChatMessageStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatRecipientDeliveryInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatSearchReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> ReadBatchAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::IChatItem>> ReadBatchAsync(int32_t count) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatSearchReader> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSearchReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration
{
    bool IsSyncEnabled() const;
    void IsSyncEnabled(bool value) const;
    Windows::ApplicationModel::Chat::ChatRestoreHistorySpan RestoreHistorySpan() const;
    void RestoreHistorySpan(Windows::ApplicationModel::Chat::ChatRestoreHistorySpan const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatSyncConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSyncConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IChatSyncManager
{
    Windows::ApplicationModel::Chat::ChatSyncConfiguration Configuration() const;
    Windows::Foundation::IAsyncAction AssociateAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Foundation::IAsyncAction UnassociateAccountAsync() const;
    bool IsAccountAssociated(Windows::Security::Credentials::WebAccount const& webAccount) const;
    void StartSync() const;
    Windows::Foundation::IAsyncAction SetConfigurationAsync(Windows::ApplicationModel::Chat::ChatSyncConfiguration const& configuration) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IChatSyncManager> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IChatSyncManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage
{
    hstring TransportId() const;
    hstring Title() const;
    hstring Text() const;
    bool IsPinRequired() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsEndUserMessageAction> Actions() const;
    Windows::Foundation::IAsyncAction SendResponseAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action) const;
    Windows::Foundation::IAsyncAction SendResponseWithPinAsync(Windows::ApplicationModel::Chat::RcsEndUserMessageAction const& action, param::hstring const& pin) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessage> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessage<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction
{
    hstring Label() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAction<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs
{
    bool IsMessageAvailable() const;
    Windows::ApplicationModel::Chat::RcsEndUserMessage Message() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails
{
    hstring Title() const;
    hstring Text() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageAvailableTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager
{
    event_token MessageAvailableChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const;
    using MessageAvailableChanged_revoker = event_revoker<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>;
    MessageAvailableChanged_revoker MessageAvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsEndUserMessageManager, Windows::ApplicationModel::Chat::RcsEndUserMessageAvailableEventArgs> const& handler) const;
    void MessageAvailableChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsEndUserMessageManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsManagerStatics
{
    Windows::ApplicationModel::Chat::RcsEndUserMessageManager GetEndUserMessageManager() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Chat::RcsTransport>> GetTransportsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Chat::RcsTransport> GetTransportAsync(param::hstring const& transportId) const;
    Windows::Foundation::IAsyncAction LeaveConversationAsync(Windows::ApplicationModel::Chat::ChatConversation const& conversation) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs
{
    Windows::ApplicationModel::Chat::RcsServiceKind ServiceKind() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsServiceKindSupportedChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsTransport
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> ExtendedProperties() const;
    bool IsActive() const;
    hstring TransportFriendlyName() const;
    hstring TransportId() const;
    Windows::ApplicationModel::Chat::RcsTransportConfiguration Configuration() const;
    bool IsStoreAndForwardEnabled(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const;
    bool IsServiceKindSupported(Windows::ApplicationModel::Chat::RcsServiceKind const& serviceKind) const;
    event_token ServiceKindSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const;
    using ServiceKindSupportedChanged_revoker = event_revoker<Windows::ApplicationModel::Chat::IRcsTransport>;
    ServiceKindSupportedChanged_revoker ServiceKindSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Chat::RcsTransport, Windows::ApplicationModel::Chat::RcsServiceKindSupportedChangedEventArgs> const& handler) const;
    void ServiceKindSupportedChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsTransport> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsTransport<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration
{
    int32_t MaxAttachmentCount() const;
    int32_t MaxMessageSizeInKilobytes() const;
    int32_t MaxGroupMessageSizeInKilobytes() const;
    int32_t MaxRecipientCount() const;
    int32_t MaxFileSizeInKilobytes() const;
    int32_t WarningFileSizeInKilobytes() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRcsTransportConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRcsTransportConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs
{
    hstring TransportId() const;
    hstring ParticipantAddress() const;
    bool IsComposing() const;
};
template <> struct consume<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Chat_IRemoteParticipantComposingChangedEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::Chat::IChatCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsOnline(bool* result) = 0;
    virtual HRESULT __stdcall get_IsChatCapable(bool* result) = 0;
    virtual HRESULT __stdcall get_IsFileTransferCapable(bool* result) = 0;
    virtual HRESULT __stdcall get_IsGeoLocationPushCapable(bool* result) = 0;
    virtual HRESULT __stdcall get_IsIntegratedMessagingCapable(bool* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatCapabilitiesManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCachedCapabilitiesAsync(HSTRING address, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetCapabilitiesFromNetworkAsync(HSTRING address, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatConversation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasUnreadMessages(bool* result) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_Subject(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsConversationMuted(bool* result) = 0;
    virtual HRESULT __stdcall put_IsConversationMuted(bool value) = 0;
    virtual HRESULT __stdcall get_MostRecentMessageId(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Participants(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_ThreadingInfo(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetMessageReader(::IUnknown** result) = 0;
    virtual HRESULT __stdcall MarkAllMessagesAsReadAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall MarkMessagesAsReadAsync(abi_t<Windows::Foundation::DateTime> value, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall NotifyLocalParticipantComposing(HSTRING transportId, HSTRING participantAddress, bool isComposing) = 0;
    virtual HRESULT __stdcall NotifyRemoteParticipantComposing(HSTRING transportId, HSTRING participantAddress, bool isComposing) = 0;
    virtual HRESULT __stdcall add_RemoteParticipantComposingChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemoteParticipantComposingChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatConversation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanModifyParticipants(bool* result) = 0;
    virtual HRESULT __stdcall put_CanModifyParticipants(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatConversationReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatConversationThreadingInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContactId(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_ContactId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Custom(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_Custom(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ConversationId(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_ConversationId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Participants(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Chat::ChatConversationThreadingKind>* result) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Chat::ChatConversationThreadingKind> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemKind(abi_t<Windows::ApplicationModel::Chat::ChatItemKind>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Attachments(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Body(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Body(HSTRING value) = 0;
    virtual HRESULT __stdcall get_From(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsForwardingDisabled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsIncoming(bool* value) = 0;
    virtual HRESULT __stdcall get_IsRead(bool* value) = 0;
    virtual HRESULT __stdcall get_LocalTimestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_NetworkTimestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Recipients(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecipientSendStatuses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus>* value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransportId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TransportId(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EstimatedDownloadSize(uint64_t* result) = 0;
    virtual HRESULT __stdcall put_EstimatedDownloadSize(uint64_t value) = 0;
    virtual HRESULT __stdcall put_From(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsAutoReply(bool* result) = 0;
    virtual HRESULT __stdcall put_IsAutoReply(bool value) = 0;
    virtual HRESULT __stdcall put_IsForwardingDisabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsReplyDisabled(bool* result) = 0;
    virtual HRESULT __stdcall put_IsIncoming(bool value) = 0;
    virtual HRESULT __stdcall put_IsRead(bool value) = 0;
    virtual HRESULT __stdcall get_IsSeen(bool* result) = 0;
    virtual HRESULT __stdcall put_IsSeen(bool value) = 0;
    virtual HRESULT __stdcall get_IsSimMessage(bool* result) = 0;
    virtual HRESULT __stdcall put_LocalTimestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_MessageKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageKind>* result) = 0;
    virtual HRESULT __stdcall put_MessageKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageKind> value) = 0;
    virtual HRESULT __stdcall get_MessageOperatorKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageOperatorKind>* result) = 0;
    virtual HRESULT __stdcall put_MessageOperatorKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageOperatorKind> value) = 0;
    virtual HRESULT __stdcall put_NetworkTimestamp(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_IsReceivedDuringQuietHours(bool* result) = 0;
    virtual HRESULT __stdcall put_IsReceivedDuringQuietHours(bool value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus> value) = 0;
    virtual HRESULT __stdcall put_Subject(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ShouldSuppressNotification(bool* result) = 0;
    virtual HRESULT __stdcall put_ShouldSuppressNotification(bool value) = 0;
    virtual HRESULT __stdcall get_ThreadingInfo(::IUnknown** result) = 0;
    virtual HRESULT __stdcall put_ThreadingInfo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RecipientsDeliveryInfos(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessage4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SyncId(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_SyncId(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataStreamReference(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DataStreamReference(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_GroupId(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_GroupId(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MimeType(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_MimeType(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachment2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** result) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TransferProgress(double* result) = 0;
    virtual HRESULT __stdcall put_TransferProgress(double value) = 0;
    virtual HRESULT __stdcall get_OriginalFileName(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_OriginalFileName(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageAttachmentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateChatMessageAttachment(HSTRING mimeType, ::IUnknown* dataStreamReference, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageBlockingStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MarkMessageAsBlockedAsync(HSTRING localChatMessageId, bool blocked, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Chat::ChatMessageChangeType>* value) = 0;
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AcceptChanges() = 0;
    virtual HRESULT __stdcall AcceptChangesThrough(::IUnknown* lastChangeToAcknowledge) = 0;
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangeTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Enable() = 0;
    virtual HRESULT __stdcall GetChangeReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Reset() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangedDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManager2Statics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterTransportAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTransportAsync(HSTRING transportId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManagerStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTransportsAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestStoreAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ShowComposeSmsMessageAsync(::IUnknown* message, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ShowSmsSettings() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestSyncManagerAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChatMessage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShouldDisplayToast(bool* result) = 0;
    virtual HRESULT __stdcall get_ShouldUpdateDetailText(bool* result) = 0;
    virtual HRESULT __stdcall get_ShouldUpdateBadge(bool* result) = 0;
    virtual HRESULT __stdcall get_ShouldUpdateActionCenter(bool* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageReader2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(::IUnknown** value) = 0;
    virtual HRESULT __stdcall DeleteMessageAsync(HSTRING localMessageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall DownloadMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMessageReader1(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMessageReader2(abi_t<Windows::Foundation::TimeSpan> recentTimeLimit, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall MarkMessageReadAsync(HSTRING localChatMessageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall RetrySendMessageAsync(HSTRING localChatMessageId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SendMessageAsync(::IUnknown* chatMessage, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ValidateMessage(::IUnknown* chatMessage, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_MessageChanged(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_MessageChanged(abi_t<event_token> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ForwardMessageAsync(HSTRING localChatMessageId, ::IUnknown* addresses, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetConversationAsync(HSTRING conversationId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetConversationForTransportsAsync(HSTRING conversationId, ::IUnknown* transportIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetConversationFromThreadingInfoAsync(::IUnknown* threadingInfo, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetConversationReader(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetConversationForTransportsReader(::IUnknown* transportIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetMessageByRemoteIdAsync(HSTRING transportId, HSTRING remoteId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetUnseenCountAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetUnseenCountForTransportsReaderAsync(::IUnknown* transportIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall MarkAsSeenAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall MarkAsSeenForTransportsAsync(::IUnknown* transportIds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetSearchReader(::IUnknown* value, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SaveMessageAsync(::IUnknown* chatMessage, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryCancelDownloadMessageAsync(HSTRING localChatMessageId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryCancelSendMessageAsync(HSTRING localChatMessageId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_StoreChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StoreChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStore3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetMessageBySyncIdAsync(HSTRING syncId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Chat::ChatStoreChangedEventKind>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAppSetAsNotificationProvider(bool* value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransportId(HSTRING* value) = 0;
    virtual HRESULT __stdcall RequestSetAsNotificationProviderAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransport2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Configuration(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_TransportKind(abi_t<Windows::ApplicationModel::Chat::ChatMessageTransportKind>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxAttachmentCount(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxRecipientCount(int32_t* result) = 0;
    virtual HRESULT __stdcall get_SupportedVideoFormat(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_ExtendedProperties(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatMessageValidationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPartCount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PartCount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemainingCharacterCountInPart(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageValidationStatus>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatQueryOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SearchString(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_SearchString(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransportAddress(HSTRING* result) = 0;
    virtual HRESULT __stdcall put_TransportAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DeliveryTime(::IUnknown** result) = 0;
    virtual HRESULT __stdcall put_DeliveryTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ReadTime(::IUnknown** result) = 0;
    virtual HRESULT __stdcall put_ReadTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TransportErrorCodeCategory(abi_t<Windows::ApplicationModel::Chat::ChatTransportErrorCodeCategory>* result) = 0;
    virtual HRESULT __stdcall get_TransportInterpretedErrorCode(abi_t<Windows::ApplicationModel::Chat::ChatTransportInterpretedErrorCode>* result) = 0;
    virtual HRESULT __stdcall get_TransportErrorCode(int32_t* result) = 0;
    virtual HRESULT __stdcall get_IsErrorPermanent(bool* result) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Chat::ChatMessageStatus>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatSearchReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReadBatchWithCountAsync(int32_t count, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatSyncConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSyncEnabled(bool* result) = 0;
    virtual HRESULT __stdcall put_IsSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_RestoreHistorySpan(abi_t<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan>* result) = 0;
    virtual HRESULT __stdcall put_RestoreHistorySpan(abi_t<Windows::ApplicationModel::Chat::ChatRestoreHistorySpan> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IChatSyncManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Configuration(::IUnknown** result) = 0;
    virtual HRESULT __stdcall AssociateAccountAsync(::IUnknown* webAccount, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnassociateAccountAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsAccountAssociated(::IUnknown* webAccount, bool* result) = 0;
    virtual HRESULT __stdcall StartSync() = 0;
    virtual HRESULT __stdcall SetConfigurationAsync(::IUnknown* configuration, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransportId(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_IsPinRequired(bool* result) = 0;
    virtual HRESULT __stdcall get_Actions(::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendResponseAsync(::IUnknown* action, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendResponseWithPinAsync(::IUnknown* action, HSTRING pin, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Label(HSTRING* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsMessageAvailable(bool* result) = 0;
    virtual HRESULT __stdcall get_Message(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsEndUserMessageManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_MessageAvailableChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MessageAvailableChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetEndUserMessageManager(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTransportsAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetTransportAsync(HSTRING transportId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall LeaveConversationAsync(::IUnknown* conversation, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceKind(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsTransport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_TransportFriendlyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransportId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Configuration(::IUnknown** result) = 0;
    virtual HRESULT __stdcall IsStoreAndForwardEnabled(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind> serviceKind, bool* result) = 0;
    virtual HRESULT __stdcall IsServiceKindSupported(abi_t<Windows::ApplicationModel::Chat::RcsServiceKind> serviceKind, bool* result) = 0;
    virtual HRESULT __stdcall add_ServiceKindSupportedChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ServiceKindSupportedChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRcsTransportConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxAttachmentCount(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxMessageSizeInKilobytes(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxGroupMessageSizeInKilobytes(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxRecipientCount(int32_t* result) = 0;
    virtual HRESULT __stdcall get_MaxFileSizeInKilobytes(int32_t* result) = 0;
    virtual HRESULT __stdcall get_WarningFileSizeInKilobytes(int32_t* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransportId(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_ParticipantAddress(HSTRING* result) = 0;
    virtual HRESULT __stdcall get_IsComposing(bool* result) = 0;
};};

}
