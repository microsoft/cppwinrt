// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.ApplicationModel.Email.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

struct WINRT_EBO IEmailAttachment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachment>
{
    IEmailAttachment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailAttachment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachment2>
{
    IEmailAttachment2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailAttachmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachmentFactory>
{
    IEmailAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailAttachmentFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAttachmentFactory2>
{
    IEmailAttachmentFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailConversation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversation>
{
    IEmailConversation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailConversationBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversationBatch>
{
    IEmailConversationBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailConversationReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailConversationReader>
{
    IEmailConversationReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailFolder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailFolder>
{
    IEmailFolder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailIrmInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmInfo>
{
    IEmailIrmInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailIrmInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmInfoFactory>
{
    IEmailIrmInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailIrmTemplate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmTemplate>
{
    IEmailIrmTemplate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailIrmTemplateFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailIrmTemplateFactory>
{
    IEmailIrmTemplateFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailItemCounts :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailItemCounts>
{
    IEmailItemCounts(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailbox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox>
{
    IEmailMailbox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailbox2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox2>,
    impl::require<IEmailMailbox2, Windows::ApplicationModel::Email::IEmailMailbox>
{
    IEmailMailbox2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailbox3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox3>,
    impl::require<IEmailMailbox3, Windows::ApplicationModel::Email::IEmailMailbox, Windows::ApplicationModel::Email::IEmailMailbox2>
{
    IEmailMailbox3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailbox4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailbox4>
{
    IEmailMailbox4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxAction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAction>
{
    IEmailMailboxAction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxAutoReply :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAutoReply>
{
    IEmailMailboxAutoReply(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxAutoReplySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxAutoReplySettings>
{
    IEmailMailboxAutoReplySettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities>
{
    IEmailMailboxCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCapabilities2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities2>
{
    IEmailMailboxCapabilities2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCapabilities3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCapabilities3>
{
    IEmailMailboxCapabilities3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChange>
{
    IEmailMailboxChange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangeReader>
{
    IEmailMailboxChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangeTracker>
{
    IEmailMailboxChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangedDeferral>
{
    IEmailMailboxChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxChangedEventArgs>
{
    IEmailMailboxChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCreateFolderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderResult>
{
    IEmailMailboxCreateFolderResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxPolicies :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies>
{
    IEmailMailboxPolicies(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxPolicies2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies2>
{
    IEmailMailboxPolicies2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxPolicies3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxPolicies3>
{
    IEmailMailboxPolicies3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManager>
{
    IEmailMailboxSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManager2>
{
    IEmailMailboxSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerForUser>
{
    IEmailManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics>
{
    IEmailManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics2>
{
    IEmailManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailManagerStatics3>
{
    IEmailManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMeetingInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMeetingInfo>
{
    IEmailMeetingInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMeetingInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMeetingInfo2>
{
    IEmailMeetingInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage>
{
    IEmailMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage2>
{
    IEmailMessage2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage3>
{
    IEmailMessage3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessage4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessage4>
{
    IEmailMessage4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessageBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessageBatch>
{
    IEmailMessageBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMessageReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMessageReader>
{
    IEmailMessageReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryOptions>
{
    IEmailQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailQueryOptionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryOptionsFactory>
{
    IEmailQueryOptionsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailQueryTextSearch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailQueryTextSearch>
{
    IEmailQueryTextSearch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailRecipient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipient>
{
    IEmailRecipient(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailRecipientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientFactory>
{
    IEmailRecipientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailRecipientResolutionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientResolutionResult>
{
    IEmailRecipientResolutionResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailRecipientResolutionResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailRecipientResolutionResult2>
{
    IEmailRecipientResolutionResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStore>
{
    IEmailStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailStoreNotificationTriggerDetails>
{
    IEmailStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}
