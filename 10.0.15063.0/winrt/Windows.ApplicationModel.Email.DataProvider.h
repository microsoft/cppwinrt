// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Email.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.ApplicationModel.Email.DataProvider.2.h"
#include "winrt/Windows.ApplicationModel.Email.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MailboxSyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_MailboxSyncRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MailboxSyncRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_MailboxSyncRequested, MailboxSyncRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MailboxSyncRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_MailboxSyncRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadMessageRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_DownloadMessageRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadMessageRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DownloadMessageRequested, DownloadMessageRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadMessageRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_DownloadMessageRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_DownloadAttachmentRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DownloadAttachmentRequested, DownloadAttachmentRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DownloadAttachmentRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_DownloadAttachmentRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::CreateFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_CreateFolderRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::CreateFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_CreateFolderRequested, CreateFolderRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::CreateFolderRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_CreateFolderRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DeleteFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_DeleteFolderRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DeleteFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_DeleteFolderRequested, DeleteFolderRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::DeleteFolderRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_DeleteFolderRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::EmptyFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_EmptyFolderRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::EmptyFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_EmptyFolderRequested, EmptyFolderRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::EmptyFolderRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_EmptyFolderRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MoveFolderRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_MoveFolderRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MoveFolderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_MoveFolderRequested, MoveFolderRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::MoveFolderRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_MoveFolderRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_UpdateMeetingResponseRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_UpdateMeetingResponseRequested, UpdateMeetingResponseRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::UpdateMeetingResponseRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_UpdateMeetingResponseRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ForwardMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_ForwardMeetingRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ForwardMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ForwardMeetingRequested, ForwardMeetingRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ForwardMeetingRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_ForwardMeetingRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_ProposeNewTimeForMeetingRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ProposeNewTimeForMeetingRequested, ProposeNewTimeForMeetingRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ProposeNewTimeForMeetingRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_ProposeNewTimeForMeetingRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_SetAutoReplySettingsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_SetAutoReplySettingsRequested, SetAutoReplySettingsRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::SetAutoReplySettingsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_SetAutoReplySettingsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_GetAutoReplySettingsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_GetAutoReplySettingsRequested, GetAutoReplySettingsRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::GetAutoReplySettingsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_GetAutoReplySettingsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_ResolveRecipientsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ResolveRecipientsRequested, ResolveRecipientsRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ResolveRecipientsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_ResolveRecipientsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_ValidateCertificatesRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ValidateCertificatesRequested, ValidateCertificatesRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ValidateCertificatesRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_ValidateCertificatesRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->add_ServerSearchReadBatchRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>::remove_ServerSearchReadBatchRequested, ServerSearchReadBatchRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::ServerSearchReadBatchRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->remove_ServerSearchReadBatchRequested(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection)->Start());
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection consume_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>::ParentFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest)->get_ParentFolderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>::ReportCompletedAsync(Windows::ApplicationModel::Email::EmailFolder const& folder) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest)->ReportCompletedAsync(get_abi(folder), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus const& status) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest)->ReportFailedAsync(get_abi(status), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest<D>::EmailFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest)->get_EmailFolderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus const& status) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest)->ReportFailedAsync(get_abi(status), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>::EmailMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest)->get_EmailMessageId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>::EmailAttachmentId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest)->get_EmailAttachmentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest<D>::EmailMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest)->get_EmailMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest<D>::EmailFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest)->get_EmailFolderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus const& status) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest)->ReportFailedAsync(get_abi(status), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::EmailMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_EmailMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient> consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::Recipients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_Recipients(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageBodyKind consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::ForwardHeaderType() const
{
    Windows::ApplicationModel::Email::EmailMessageBodyKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_ForwardHeaderType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::ForwardHeader() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_ForwardHeader(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest<D>::RequestedFormat() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest)->get_RequestedFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest<D>::ReportCompletedAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const& autoReplySettings) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest)->ReportCompletedAsync(get_abi(autoReplySettings), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::EmailFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->get_EmailFolderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::NewParentFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->get_NewParentFolderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::NewFolderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->get_NewFolderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::EmailMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_EmailMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::NewStartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_NewStartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::NewDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_NewDuration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest<D>::Recipients() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest)->get_Recipients(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest<D>::ReportCompletedAsync(param::async_iterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> const& resolutionResults) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest)->ReportCompletedAsync(get_abi(resolutionResults), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::SessionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::EmailFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->get_EmailFolderId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::Options() const
{
    Windows::ApplicationModel::Email::EmailQueryOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::SuggestedBatchSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->get_SuggestedBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::SaveMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->SaveMessageAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus const& batchStatus) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest)->ReportFailedAsync(get_abi(batchStatus), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest<D>::AutoReplySettings() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest)->get_AutoReplySettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::EmailMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_EmailMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMeetingResponseType consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::Response() const
{
    Windows::ApplicationModel::Email::EmailMeetingResponseType response{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_Response(put_abi(response)));
    return response;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::SendUpdate() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->get_SendUpdate(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest<D>::EmailMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest)->get_EmailMailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest<D>::ReportCompletedAsync(param::async_iterable<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> const& validationStatuses) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest)->ReportCompletedAsync(get_abi(validationStatuses), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection>
{
    HRESULT __stdcall add_MailboxSyncRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MailboxSyncRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MailboxSyncRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MailboxSyncRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadMessageRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadMessageRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadMessageRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadMessageRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadAttachmentRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadAttachmentRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadAttachmentRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadAttachmentRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CreateFolderRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateFolderRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateFolderRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateFolderRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeleteFolderRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DeleteFolderRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeleteFolderRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteFolderRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EmptyFolderRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EmptyFolderRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EmptyFolderRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EmptyFolderRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MoveFolderRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MoveFolderRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MoveFolderRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveFolderRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UpdateMeetingResponseRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UpdateMeetingResponseRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UpdateMeetingResponseRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateMeetingResponseRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ForwardMeetingRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ForwardMeetingRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ForwardMeetingRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForwardMeetingRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProposeNewTimeForMeetingRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProposeNewTimeForMeetingRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProposeNewTimeForMeetingRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProposeNewTimeForMeetingRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SetAutoReplySettingsRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SetAutoReplySettingsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SetAutoReplySettingsRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAutoReplySettingsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GetAutoReplySettingsRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GetAutoReplySettingsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GetAutoReplySettingsRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetAutoReplySettingsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResolveRecipientsRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ResolveRecipientsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResolveRecipientsRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResolveRecipientsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValidateCertificatesRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ValidateCertificatesRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValidateCertificatesRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValidateCertificatesRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServerSearchReadBatchRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ServerSearchReadBatchRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerSearchReadBatchRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerSearchReadBatchRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown* folder, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailFolder const*>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(abi_t<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus> status, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus const*>(&status)));
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(abi_t<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> status, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus const*>(&status)));
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailAttachmentId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailAttachmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(abi_t<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> status, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus const*>(&status)));
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_ForwardHeaderType(abi_t<Windows::ApplicationModel::Email::EmailMessageBodyKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForwardHeaderType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardHeader(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForwardHeader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedFormat(abi_t<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown* autoReplySettings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const*>(&autoReplySettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewParentFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewParentFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewFolderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewFolderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewStartTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewDuration());
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

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall ReportCompletedAsync(::IUnknown* resolutionResults, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> const*>(&resolutionResults)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest>
{
    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailFolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedBatchSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveMessageAsync(::IUnknown* message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(abi_t<Windows::ApplicationModel::Email::EmailBatchStatus> batchStatus, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailBatchStatus const*>(&batchStatus)));
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoReplySettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoReplySettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(abi_t<Windows::ApplicationModel::Email::EmailMeetingResponseType>* response) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *response = detach_abi(this->shim().Response());
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

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SendUpdate(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SendUpdate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest>
{
    HRESULT __stdcall get_EmailMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Certificates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Certificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown* validationStatuses, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> const*>(&validationStatuses)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email::DataProvider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> {};

}

WINRT_WARNING_POP
