// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Email {

struct IEmailAttachment;
struct IEmailAttachment2;
struct IEmailAttachmentFactory;
struct IEmailAttachmentFactory2;
struct IEmailConversation;
struct IEmailConversationBatch;
struct IEmailConversationReader;
struct IEmailFolder;
struct IEmailIrmInfo;
struct IEmailIrmInfoFactory;
struct IEmailIrmTemplate;
struct IEmailIrmTemplateFactory;
struct IEmailItemCounts;
struct IEmailMailbox;
struct IEmailMailbox2;
struct IEmailMailbox3;
struct IEmailMailbox4;
struct IEmailMailboxAction;
struct IEmailMailboxAutoReply;
struct IEmailMailboxAutoReplySettings;
struct IEmailMailboxCapabilities;
struct IEmailMailboxCapabilities2;
struct IEmailMailboxCapabilities3;
struct IEmailMailboxChange;
struct IEmailMailboxChangeReader;
struct IEmailMailboxChangeTracker;
struct IEmailMailboxChangedDeferral;
struct IEmailMailboxChangedEventArgs;
struct IEmailMailboxCreateFolderResult;
struct IEmailMailboxPolicies;
struct IEmailMailboxPolicies2;
struct IEmailMailboxPolicies3;
struct IEmailMailboxSyncManager;
struct IEmailMailboxSyncManager2;
struct IEmailManagerForUser;
struct IEmailManagerStatics;
struct IEmailManagerStatics2;
struct IEmailManagerStatics3;
struct IEmailMeetingInfo;
struct IEmailMeetingInfo2;
struct IEmailMessage;
struct IEmailMessage2;
struct IEmailMessage3;
struct IEmailMessageBatch;
struct IEmailMessageReader;
struct IEmailQueryOptions;
struct IEmailQueryOptionsFactory;
struct IEmailQueryTextSearch;
struct IEmailRecipient;
struct IEmailRecipientFactory;
struct IEmailRecipientResolutionResult;
struct IEmailRecipientResolutionResult2;
struct IEmailStore;
struct IEmailStoreNotificationTriggerDetails;
struct EmailAttachment;
struct EmailConversation;
struct EmailConversationBatch;
struct EmailConversationReader;
struct EmailFolder;
struct EmailIrmInfo;
struct EmailIrmTemplate;
struct EmailItemCounts;
struct EmailMailbox;
struct EmailMailboxAction;
struct EmailMailboxAutoReply;
struct EmailMailboxAutoReplySettings;
struct EmailMailboxCapabilities;
struct EmailMailboxChange;
struct EmailMailboxChangeReader;
struct EmailMailboxChangeTracker;
struct EmailMailboxChangedDeferral;
struct EmailMailboxChangedEventArgs;
struct EmailMailboxCreateFolderResult;
struct EmailMailboxPolicies;
struct EmailMailboxSyncManager;
struct EmailManagerForUser;
struct EmailMeetingInfo;
struct EmailMessage;
struct EmailMessageBatch;
struct EmailMessageReader;
struct EmailQueryOptions;
struct EmailQueryTextSearch;
struct EmailRecipient;
struct EmailRecipientResolutionResult;
struct EmailStore;
struct EmailStoreNotificationTriggerDetails;

}

namespace Windows::ApplicationModel::Email {

struct IEmailAttachment;
struct IEmailAttachment2;
struct IEmailAttachmentFactory;
struct IEmailAttachmentFactory2;
struct IEmailConversation;
struct IEmailConversationBatch;
struct IEmailConversationReader;
struct IEmailFolder;
struct IEmailIrmInfo;
struct IEmailIrmInfoFactory;
struct IEmailIrmTemplate;
struct IEmailIrmTemplateFactory;
struct IEmailItemCounts;
struct IEmailMailbox;
struct IEmailMailbox2;
struct IEmailMailbox3;
struct IEmailMailbox4;
struct IEmailMailboxAction;
struct IEmailMailboxAutoReply;
struct IEmailMailboxAutoReplySettings;
struct IEmailMailboxCapabilities;
struct IEmailMailboxCapabilities2;
struct IEmailMailboxCapabilities3;
struct IEmailMailboxChange;
struct IEmailMailboxChangeReader;
struct IEmailMailboxChangeTracker;
struct IEmailMailboxChangedDeferral;
struct IEmailMailboxChangedEventArgs;
struct IEmailMailboxCreateFolderResult;
struct IEmailMailboxPolicies;
struct IEmailMailboxPolicies2;
struct IEmailMailboxPolicies3;
struct IEmailMailboxSyncManager;
struct IEmailMailboxSyncManager2;
struct IEmailManagerForUser;
struct IEmailManagerStatics;
struct IEmailManagerStatics2;
struct IEmailManagerStatics3;
struct IEmailMeetingInfo;
struct IEmailMeetingInfo2;
struct IEmailMessage;
struct IEmailMessage2;
struct IEmailMessage3;
struct IEmailMessageBatch;
struct IEmailMessageReader;
struct IEmailQueryOptions;
struct IEmailQueryOptionsFactory;
struct IEmailQueryTextSearch;
struct IEmailRecipient;
struct IEmailRecipientFactory;
struct IEmailRecipientResolutionResult;
struct IEmailRecipientResolutionResult2;
struct IEmailStore;
struct IEmailStoreNotificationTriggerDetails;
struct EmailAttachment;
struct EmailConversation;
struct EmailConversationBatch;
struct EmailConversationReader;
struct EmailFolder;
struct EmailIrmInfo;
struct EmailIrmTemplate;
struct EmailItemCounts;
struct EmailMailbox;
struct EmailMailboxAction;
struct EmailMailboxAutoReply;
struct EmailMailboxAutoReplySettings;
struct EmailMailboxCapabilities;
struct EmailMailboxChange;
struct EmailMailboxChangeReader;
struct EmailMailboxChangeTracker;
struct EmailMailboxChangedDeferral;
struct EmailMailboxChangedEventArgs;
struct EmailMailboxCreateFolderResult;
struct EmailMailboxPolicies;
struct EmailMailboxSyncManager;
struct EmailManager;
struct EmailManagerForUser;
struct EmailMeetingInfo;
struct EmailMessage;
struct EmailMessageBatch;
struct EmailMessageReader;
struct EmailQueryOptions;
struct EmailQueryTextSearch;
struct EmailRecipient;
struct EmailRecipientResolutionResult;
struct EmailStore;
struct EmailStoreNotificationTriggerDetails;

}

namespace Windows::ApplicationModel::Email {

enum class EmailAttachmentDownloadState
{
    NotDownloaded = 0,
    Downloading = 1,
    Downloaded = 2,
    Failed = 3,
};

enum class EmailBatchStatus
{
    Success = 0,
    ServerSearchSyncManagerError = 1,
    ServerSearchUnknownError = 2,
};

enum class EmailCertificateValidationStatus
{
    Success = 0,
    NoMatch = 1,
    InvalidUsage = 2,
    InvalidCertificate = 3,
    Revoked = 4,
    ChainRevoked = 5,
    RevocationServerFailure = 6,
    Expired = 7,
    Untrusted = 8,
    ServerError = 9,
    UnknownFailure = 10,
};

enum class EmailFlagState
{
    Unflagged = 0,
    Flagged = 1,
    Completed = 2,
    Cleared = 3,
};

enum class EmailImportance
{
    Normal = 0,
    High = 1,
    Low = 2,
};

enum class EmailMailboxActionKind
{
    MarkMessageAsSeen = 0,
    MarkMessageRead = 1,
    ChangeMessageFlagState = 2,
    MoveMessage = 3,
    SaveDraft = 4,
    SendMessage = 5,
    CreateResponseReplyMessage = 6,
    CreateResponseReplyAllMessage = 7,
    CreateResponseForwardMessage = 8,
    MoveFolder = 9,
    MarkFolderForSyncEnabled = 10,
};

enum class EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation
{
    None = 0,
    StrongAlgorithm = 1,
    AnyAlgorithm = 2,
};

enum class EmailMailboxAutoReplyMessageResponseKind
{
    Html = 0,
    PlainText = 1,
};

enum class EmailMailboxChangeType
{
    MessageCreated = 0,
    MessageModified = 1,
    MessageDeleted = 2,
    FolderCreated = 3,
    FolderModified = 4,
    FolderDeleted = 5,
    ChangeTrackingLost = 6,
};

enum class EmailMailboxCreateFolderStatus
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    NameCollision = 5,
    ServerRejected = 6,
};

enum class EmailMailboxDeleteFolderStatus
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    CouldNotDeleteEverything = 5,
};

enum class EmailMailboxEmptyFolderStatus
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    CouldNotDeleteEverything = 5,
};

enum class EmailMailboxOtherAppReadAccess
{
    SystemOnly = 0,
    Full = 1,
    None = 2,
};

enum class EmailMailboxOtherAppWriteAccess
{
    None = 0,
    Limited = 1,
};

enum class EmailMailboxSmimeEncryptionAlgorithm
{
    Any = 0,
    TripleDes = 1,
    Des = 2,
    RC2128Bit = 3,
    RC264Bit = 4,
    RC240Bit = 5,
};

enum class EmailMailboxSmimeSigningAlgorithm
{
    Any = 0,
    Sha1 = 1,
    MD5 = 2,
};

enum class EmailMailboxSyncStatus
{
    Idle = 0,
    Syncing = 1,
    UpToDate = 2,
    AuthenticationError = 3,
    PolicyError = 4,
    UnknownError = 5,
    ManualAccountRemovalRequired = 6,
};

enum class EmailMeetingResponseType
{
    Accept = 0,
    Decline = 1,
    Tentative = 2,
};

enum class EmailMessageBodyKind
{
    Html = 0,
    PlainText = 1,
};

enum class EmailMessageDownloadState
{
    PartiallyDownloaded = 0,
    Downloading = 1,
    Downloaded = 2,
    Failed = 3,
};

enum class EmailMessageResponseKind
{
    None = 0,
    Reply = 1,
    ReplyAll = 2,
    Forward = 3,
};

enum class EmailMessageSmimeKind
{
    None = 0,
    ClearSigned = 1,
    OpaqueSigned = 2,
    Encrypted = 3,
};

enum class EmailQueryKind
{
    All = 0,
    Important = 1,
    Flagged = 2,
    Unread = 3,
    Read = 4,
    Unseen = 5,
};

enum class EmailQuerySearchFields : unsigned
{
    None = 0x0,
    Subject = 0x1,
    Sender = 0x2,
    Preview = 0x4,
    Recipients = 0x8,
    All = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(EmailQuerySearchFields)

enum class EmailQuerySearchScope
{
    Local = 0,
    Server = 1,
};

enum class EmailQuerySortDirection
{
    Descending = 0,
    Ascending = 1,
};

enum class EmailQuerySortProperty
{
    Date = 0,
};

enum class EmailRecipientResolutionStatus
{
    Success = 0,
    RecipientNotFound = 1,
    AmbiguousRecipient = 2,
    NoCertificate = 3,
    CertificateRequestLimitReached = 4,
    CannotResolveDistributionList = 5,
    ServerError = 6,
    UnknownFailure = 7,
};

enum class EmailSpecialFolderKind
{
    None = 0,
    Root = 1,
    Inbox = 2,
    Outbox = 3,
    Drafts = 4,
    DeletedItems = 5,
    Sent = 6,
};

enum class EmailStoreAccessType
{
    AppMailboxesReadWrite = 0,
    AllMailboxesLimitedReadWrite = 1,
};

}

}
