// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Email.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.ApplicationModel.Email.DataProvider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email::DataProvider {

struct WINRT_EBO IEmailDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailDataProviderConnection>
{
    IEmailDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailDataProviderTriggerDetails>
{
    IEmailDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCreateFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderRequest>
{
    IEmailMailboxCreateFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxCreateFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxCreateFolderRequestEventArgs>
{
    IEmailMailboxCreateFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDeleteFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDeleteFolderRequest>
{
    IEmailMailboxDeleteFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDeleteFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDeleteFolderRequestEventArgs>
{
    IEmailMailboxDeleteFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDownloadAttachmentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadAttachmentRequest>
{
    IEmailMailboxDownloadAttachmentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDownloadAttachmentRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadAttachmentRequestEventArgs>
{
    IEmailMailboxDownloadAttachmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDownloadMessageRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadMessageRequest>
{
    IEmailMailboxDownloadMessageRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxDownloadMessageRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxDownloadMessageRequestEventArgs>
{
    IEmailMailboxDownloadMessageRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxEmptyFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxEmptyFolderRequest>
{
    IEmailMailboxEmptyFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxEmptyFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxEmptyFolderRequestEventArgs>
{
    IEmailMailboxEmptyFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxForwardMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxForwardMeetingRequest>
{
    IEmailMailboxForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxForwardMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxForwardMeetingRequestEventArgs>
{
    IEmailMailboxForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxGetAutoReplySettingsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxGetAutoReplySettingsRequest>
{
    IEmailMailboxGetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxGetAutoReplySettingsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxGetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxGetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxMoveFolderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxMoveFolderRequest>
{
    IEmailMailboxMoveFolderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxMoveFolderRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxMoveFolderRequestEventArgs>
{
    IEmailMailboxMoveFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxProposeNewTimeForMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequest>
{
    IEmailMailboxProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxProposeNewTimeForMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
{
    IEmailMailboxProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxResolveRecipientsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxResolveRecipientsRequest>
{
    IEmailMailboxResolveRecipientsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxResolveRecipientsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxResolveRecipientsRequestEventArgs>
{
    IEmailMailboxResolveRecipientsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxServerSearchReadBatchRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxServerSearchReadBatchRequest>
{
    IEmailMailboxServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxServerSearchReadBatchRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxServerSearchReadBatchRequestEventArgs>
{
    IEmailMailboxServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSetAutoReplySettingsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSetAutoReplySettingsRequest>
{
    IEmailMailboxSetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSetAutoReplySettingsRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxSetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManagerSyncRequest>
{
    IEmailMailboxSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxSyncManagerSyncRequestEventArgs>
{
    IEmailMailboxSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxUpdateMeetingResponseRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxUpdateMeetingResponseRequest>
{
    IEmailMailboxUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxUpdateMeetingResponseRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxUpdateMeetingResponseRequestEventArgs>
{
    IEmailMailboxUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxValidateCertificatesRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxValidateCertificatesRequest>
{
    IEmailMailboxValidateCertificatesRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailMailboxValidateCertificatesRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailMailboxValidateCertificatesRequestEventArgs>
{
    IEmailMailboxValidateCertificatesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
