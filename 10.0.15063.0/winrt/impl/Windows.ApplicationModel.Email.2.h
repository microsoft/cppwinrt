// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.1.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Email.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

struct WINRT_EBO EmailAttachment :
    Windows::ApplicationModel::Email::IEmailAttachment,
    impl::require<EmailAttachment, Windows::ApplicationModel::Email::IEmailAttachment2>
{
    EmailAttachment(std::nullptr_t) noexcept {}
    EmailAttachment();
    EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data);
    EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType);
};

struct WINRT_EBO EmailConversation :
    Windows::ApplicationModel::Email::IEmailConversation
{
    EmailConversation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailConversationBatch :
    Windows::ApplicationModel::Email::IEmailConversationBatch
{
    EmailConversationBatch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailConversationReader :
    Windows::ApplicationModel::Email::IEmailConversationReader
{
    EmailConversationReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailFolder :
    Windows::ApplicationModel::Email::IEmailFolder
{
    EmailFolder(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailIrmInfo :
    Windows::ApplicationModel::Email::IEmailIrmInfo
{
    EmailIrmInfo(std::nullptr_t) noexcept {}
    EmailIrmInfo();
    EmailIrmInfo(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate);
};

struct WINRT_EBO EmailIrmTemplate :
    Windows::ApplicationModel::Email::IEmailIrmTemplate
{
    EmailIrmTemplate(std::nullptr_t) noexcept {}
    EmailIrmTemplate();
    EmailIrmTemplate(param::hstring const& id, param::hstring const& name, param::hstring const& description);
};

struct WINRT_EBO EmailItemCounts :
    Windows::ApplicationModel::Email::IEmailItemCounts
{
    EmailItemCounts(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailbox :
    Windows::ApplicationModel::Email::IEmailMailbox,
    impl::require<EmailMailbox, Windows::ApplicationModel::Email::IEmailMailbox2, Windows::ApplicationModel::Email::IEmailMailbox3, Windows::ApplicationModel::Email::IEmailMailbox4>
{
    EmailMailbox(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxAction :
    Windows::ApplicationModel::Email::IEmailMailboxAction
{
    EmailMailboxAction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxAutoReply :
    Windows::ApplicationModel::Email::IEmailMailboxAutoReply
{
    EmailMailboxAutoReply(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxAutoReplySettings :
    Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings
{
    EmailMailboxAutoReplySettings(std::nullptr_t) noexcept {}
    EmailMailboxAutoReplySettings();
};

struct WINRT_EBO EmailMailboxCapabilities :
    Windows::ApplicationModel::Email::IEmailMailboxCapabilities,
    impl::require<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>
{
    EmailMailboxCapabilities(std::nullptr_t) noexcept {}
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanCreateFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanCreateFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanDeleteFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanDeleteFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanEmptyFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanEmptyFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanForwardMeetings;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanForwardMeetings;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanGetAndSetExternalAutoReplies;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanGetAndSetExternalAutoReplies;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanGetAndSetInternalAutoReplies;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanGetAndSetInternalAutoReplies;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanMoveFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanMoveFolder;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanProposeNewTimeForMeetings;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanProposeNewTimeForMeetings;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanResolveRecipients;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanResolveRecipients;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanServerSearchFolders;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanServerSearchFolders;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanServerSearchMailbox;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanServerSearchMailbox;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanSmartSend;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanSmartSend;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanUpdateMeetingResponses;
    using Windows::ApplicationModel::Email::IEmailMailboxCapabilities::CanUpdateMeetingResponses;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>::CanValidateCertificates;
    using impl::consume_t<EmailMailboxCapabilities, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>::CanValidateCertificates;
};

struct WINRT_EBO EmailMailboxChange :
    Windows::ApplicationModel::Email::IEmailMailboxChange
{
    EmailMailboxChange(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxChangeReader :
    Windows::ApplicationModel::Email::IEmailMailboxChangeReader
{
    EmailMailboxChangeReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxChangeTracker :
    Windows::ApplicationModel::Email::IEmailMailboxChangeTracker
{
    EmailMailboxChangeTracker(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxChangedDeferral :
    Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral
{
    EmailMailboxChangedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxChangedEventArgs :
    Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs
{
    EmailMailboxChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxCreateFolderResult :
    Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult
{
    EmailMailboxCreateFolderResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMailboxPolicies :
    Windows::ApplicationModel::Email::IEmailMailboxPolicies,
    impl::require<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>
{
    EmailMailboxPolicies(std::nullptr_t) noexcept {}
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::AllowSmimeSoftCertificates;
    using Windows::ApplicationModel::Email::IEmailMailboxPolicies::AllowSmimeSoftCertificates;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::AllowedSmimeEncryptionAlgorithmNegotiation;
    using Windows::ApplicationModel::Email::IEmailMailboxPolicies::AllowedSmimeEncryptionAlgorithmNegotiation;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2>::MustEncryptSmimeMessages;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::MustEncryptSmimeMessages;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies2>::MustSignSmimeMessages;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::MustSignSmimeMessages;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::RequiredSmimeEncryptionAlgorithm;
    using Windows::ApplicationModel::Email::IEmailMailboxPolicies::RequiredSmimeEncryptionAlgorithm;
    using impl::consume_t<EmailMailboxPolicies, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>::RequiredSmimeSigningAlgorithm;
    using Windows::ApplicationModel::Email::IEmailMailboxPolicies::RequiredSmimeSigningAlgorithm;
};

struct WINRT_EBO EmailMailboxSyncManager :
    Windows::ApplicationModel::Email::IEmailMailboxSyncManager,
    impl::require<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>
{
    EmailMailboxSyncManager(std::nullptr_t) noexcept {}
    using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::LastAttemptedSyncTime;
    using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::LastAttemptedSyncTime;
    using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::LastSuccessfulSyncTime;
    using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::LastSuccessfulSyncTime;
    using impl::consume_t<EmailMailboxSyncManager, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>::Status;
    using Windows::ApplicationModel::Email::IEmailMailboxSyncManager::Status;
};

struct EmailManager
{
    EmailManager() = delete;
    static Windows::Foundation::IAsyncAction ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType);
    static Windows::ApplicationModel::Email::EmailManagerForUser GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO EmailManagerForUser :
    Windows::ApplicationModel::Email::IEmailManagerForUser
{
    EmailManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMeetingInfo :
    Windows::ApplicationModel::Email::IEmailMeetingInfo,
    impl::require<EmailMeetingInfo, Windows::ApplicationModel::Email::IEmailMeetingInfo2>
{
    EmailMeetingInfo(std::nullptr_t) noexcept {}
    EmailMeetingInfo();
};

struct WINRT_EBO EmailMessage :
    Windows::ApplicationModel::Email::IEmailMessage,
    impl::require<EmailMessage, Windows::ApplicationModel::Email::IEmailMessage2, Windows::ApplicationModel::Email::IEmailMessage3, Windows::ApplicationModel::Email::IEmailMessage4>
{
    EmailMessage(std::nullptr_t) noexcept {}
    EmailMessage();
};

struct WINRT_EBO EmailMessageBatch :
    Windows::ApplicationModel::Email::IEmailMessageBatch
{
    EmailMessageBatch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailMessageReader :
    Windows::ApplicationModel::Email::IEmailMessageReader
{
    EmailMessageReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailQueryOptions :
    Windows::ApplicationModel::Email::IEmailQueryOptions
{
    EmailQueryOptions(std::nullptr_t) noexcept {}
    EmailQueryOptions();
    EmailQueryOptions(param::hstring const& text);
    EmailQueryOptions(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields);
};

struct WINRT_EBO EmailQueryTextSearch :
    Windows::ApplicationModel::Email::IEmailQueryTextSearch
{
    EmailQueryTextSearch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailRecipient :
    Windows::ApplicationModel::Email::IEmailRecipient
{
    EmailRecipient(std::nullptr_t) noexcept {}
    EmailRecipient();
    EmailRecipient(param::hstring const& address);
    EmailRecipient(param::hstring const& address, param::hstring const& name);
};

struct WINRT_EBO EmailRecipientResolutionResult :
    Windows::ApplicationModel::Email::IEmailRecipientResolutionResult,
    impl::require<EmailRecipientResolutionResult, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>
{
    EmailRecipientResolutionResult(std::nullptr_t) noexcept {}
    EmailRecipientResolutionResult();
    using impl::consume_t<EmailRecipientResolutionResult, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>::Status;
    using Windows::ApplicationModel::Email::IEmailRecipientResolutionResult::Status;
};

struct WINRT_EBO EmailStore :
    Windows::ApplicationModel::Email::IEmailStore
{
    EmailStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EmailStoreNotificationTriggerDetails :
    Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails
{
    EmailStoreNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

}
