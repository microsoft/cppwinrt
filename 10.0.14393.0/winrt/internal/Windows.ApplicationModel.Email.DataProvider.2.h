// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Email.DataProvider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_5f18cab2_236d_5ec5_bc64_e3e63d29e774
#define WINRT_GENERIC_5f18cab2_236d_5ec5_bc64_e3e63d29e774
template <> struct __declspec(uuid("5f18cab2-236d-5ec5-bc64-e3e63d29e774")) __declspec(novtable) IIterable<Windows::ApplicationModel::Email::EmailRecipient> : impl_IIterable<Windows::ApplicationModel::Email::EmailRecipient> {};
#endif

#ifndef WINRT_GENERIC_0c7d1423_e8fd_5a91_b55c_8bfbe7ac2d40
#define WINRT_GENERIC_0c7d1423_e8fd_5a91_b55c_8bfbe7ac2d40
template <> struct __declspec(uuid("0c7d1423-e8fd-5a91-b55c-8bfbe7ac2d40")) __declspec(novtable) IIterable<Windows::Security::Cryptography::Certificates::Certificate> : impl_IIterable<Windows::Security::Cryptography::Certificates::Certificate> {};
#endif

#ifndef WINRT_GENERIC_963f7013_77c2_51c5_8038_b5bcef633edb
#define WINRT_GENERIC_963f7013_77c2_51c5_8038_b5bcef633edb
template <> struct __declspec(uuid("963f7013-77c2-51c5-8038-b5bcef633edb")) __declspec(novtable) IVectorView<Windows::Security::Cryptography::Certificates::Certificate> : impl_IVectorView<Windows::Security::Cryptography::Certificates::Certificate> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b65fc3ec_9476_51c4_ba70_1505d79826b9
#define WINRT_GENERIC_b65fc3ec_9476_51c4_ba70_1505d79826b9
template <> struct __declspec(uuid("b65fc3ec-9476-51c4-ba70-1505d79826b9")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e1b59b2f_ddd5_5159_ae9a_14a866912095
#define WINRT_GENERIC_e1b59b2f_ddd5_5159_ae9a_14a866912095
template <> struct __declspec(uuid("e1b59b2f-ddd5-5159-ae9a-14a866912095")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d2e92019_b997_5cd6_8f88_4dbc6f969f15
#define WINRT_GENERIC_d2e92019_b997_5cd6_8f88_4dbc6f969f15
template <> struct __declspec(uuid("d2e92019-b997-5cd6-8f88-4dbc6f969f15")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_8c7db52d_496e_5419_bd78_b8b657cf4e66
#define WINRT_GENERIC_8c7db52d_496e_5419_bd78_b8b657cf4e66
template <> struct __declspec(uuid("8c7db52d-496e-5419-bd78-b8b657cf4e66")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d962a9b6_bbb4_5d82_84b4_8f703bf3086f
#define WINRT_GENERIC_d962a9b6_bbb4_5d82_84b4_8f703bf3086f
template <> struct __declspec(uuid("d962a9b6-bbb4-5d82-84b4-8f703bf3086f")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_9a851b84_bcb1_5121_ab61_3efe568f683d
#define WINRT_GENERIC_9a851b84_bcb1_5121_ab61_3efe568f683d
template <> struct __declspec(uuid("9a851b84-bcb1-5121-ab61-3efe568f683d")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2c6bf2c8_42f3_523d_80db_170e4fb1567f
#define WINRT_GENERIC_2c6bf2c8_42f3_523d_80db_170e4fb1567f
template <> struct __declspec(uuid("2c6bf2c8-42f3-523d-80db-170e4fb1567f")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3274fbfd_c10a_5b30_adea_2b4b860b4a0d
#define WINRT_GENERIC_3274fbfd_c10a_5b30_adea_2b4b860b4a0d
template <> struct __declspec(uuid("3274fbfd-c10a-5b30-adea-2b4b860b4a0d")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_9d6a017f_5a70_5d83_a680_d2806748ca0b
#define WINRT_GENERIC_9d6a017f_5a70_5d83_a680_d2806748ca0b
template <> struct __declspec(uuid("9d6a017f-5a70-5d83-a680-d2806748ca0b")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_309d8bde_1e60_524b_828c_5a3d64a672aa
#define WINRT_GENERIC_309d8bde_1e60_524b_828c_5a3d64a672aa
template <> struct __declspec(uuid("309d8bde-1e60-524b-828c-5a3d64a672aa")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_aa4f8fb3_05e0_54e6_afac_a28e853e756e
#define WINRT_GENERIC_aa4f8fb3_05e0_54e6_afac_a28e853e756e
template <> struct __declspec(uuid("aa4f8fb3-05e0-54e6-afac-a28e853e756e")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_587c6f92_a969_57b3_895f_9a06b3650d3a
#define WINRT_GENERIC_587c6f92_a969_57b3_895f_9a06b3650d3a
template <> struct __declspec(uuid("587c6f92-a969-57b3-895f-9a06b3650d3a")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_ec14e586_e4fb_5fc0_91fc_931ce17a3fc3
#define WINRT_GENERIC_ec14e586_e4fb_5fc0_91fc_931ce17a3fc3
template <> struct __declspec(uuid("ec14e586-e4fb-5fc0-91fc-931ce17a3fc3")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_de2625f7_e16f_512e_a8c6_b7445532bcc6
#define WINRT_GENERIC_de2625f7_e16f_512e_a8c6_b7445532bcc6
template <> struct __declspec(uuid("de2625f7-e16f-512e-a8c6-b7445532bcc6")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_f8bf9067_7d11_56a0_a303_163435c14016
#define WINRT_GENERIC_f8bf9067_7d11_56a0_a303_163435c14016
template <> struct __declspec(uuid("f8bf9067-7d11-56a0-a303-163435c14016")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f6d6af60_f11a_5c03_80cc_473407a5aabf
#define WINRT_GENERIC_f6d6af60_f11a_5c03_80cc_473407a5aabf
template <> struct __declspec(uuid("f6d6af60-f11a-5c03-80cc-473407a5aabf")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Email::EmailRecipient> : impl_IVectorView<Windows::ApplicationModel::Email::EmailRecipient> {};
#endif

#ifndef WINRT_GENERIC_cae3c1c4_c689_5787_976f_1a158ffdd16b
#define WINRT_GENERIC_cae3c1c4_c689_5787_976f_1a158ffdd16b
template <> struct __declspec(uuid("cae3c1c4-c689-5787-976f-1a158ffdd16b")) __declspec(novtable) IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> : impl_IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> {};
#endif

#ifndef WINRT_GENERIC_7e326530_7449_51a7_b1bc_c43533a78e06
#define WINRT_GENERIC_7e326530_7449_51a7_b1bc_c43533a78e06
template <> struct __declspec(uuid("7e326530-7449-51a7-b1bc-c43533a78e06")) __declspec(novtable) IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> : impl_IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_12238d88_1a2f_5e7a_89b1_8dc140536bac
#define WINRT_GENERIC_12238d88_1a2f_5e7a_89b1_8dc140536bac
template <> struct __declspec(uuid("12238d88-1a2f-5e7a-89b1-8dc140536bac")) __declspec(novtable) IIterator<Windows::ApplicationModel::Email::EmailRecipient> : impl_IIterator<Windows::ApplicationModel::Email::EmailRecipient> {};
#endif

#ifndef WINRT_GENERIC_5c040cd6_9593_5e74_9a5e_7284cd1b7200
#define WINRT_GENERIC_5c040cd6_9593_5e74_9a5e_7284cd1b7200
template <> struct __declspec(uuid("5c040cd6-9593-5e74-9a5e-7284cd1b7200")) __declspec(novtable) IIterator<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> : impl_IIterator<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> {};
#endif

#ifndef WINRT_GENERIC_1cfe3d41_16a5_5026_a6fe_2cb0a303a605
#define WINRT_GENERIC_1cfe3d41_16a5_5026_a6fe_2cb0a303a605
template <> struct __declspec(uuid("1cfe3d41-16a5-5026-a6fe-2cb0a303a605")) __declspec(novtable) IIterator<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> : impl_IIterator<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> {};
#endif

#ifndef WINRT_GENERIC_676fc159_f15c_58bd_91a7_28f7e795c756
#define WINRT_GENERIC_676fc159_f15c_58bd_91a7_28f7e795c756
template <> struct __declspec(uuid("676fc159-f15c-58bd-91a7-28f7e795c756")) __declspec(novtable) IIterator<Windows::Security::Cryptography::Certificates::Certificate> : impl_IIterator<Windows::Security::Cryptography::Certificates::Certificate> {};
#endif


}

namespace Windows::ApplicationModel::Email::DataProvider {

template <typename D>
struct WINRT_EBO impl_IEmailDataProviderConnection
{
    event_token MailboxSyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> & handler) const;
    using MailboxSyncRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    MailboxSyncRequested_revoker MailboxSyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs> & handler) const;
    void MailboxSyncRequested(event_token token) const;
    event_token DownloadMessageRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> & handler) const;
    using DownloadMessageRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    DownloadMessageRequested_revoker DownloadMessageRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs> & handler) const;
    void DownloadMessageRequested(event_token token) const;
    event_token DownloadAttachmentRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> & handler) const;
    using DownloadAttachmentRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    DownloadAttachmentRequested_revoker DownloadAttachmentRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs> & handler) const;
    void DownloadAttachmentRequested(event_token token) const;
    event_token CreateFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> & handler) const;
    using CreateFolderRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    CreateFolderRequested_revoker CreateFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs> & handler) const;
    void CreateFolderRequested(event_token token) const;
    event_token DeleteFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> & handler) const;
    using DeleteFolderRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    DeleteFolderRequested_revoker DeleteFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs> & handler) const;
    void DeleteFolderRequested(event_token token) const;
    event_token EmptyFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> & handler) const;
    using EmptyFolderRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    EmptyFolderRequested_revoker EmptyFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs> & handler) const;
    void EmptyFolderRequested(event_token token) const;
    event_token MoveFolderRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> & handler) const;
    using MoveFolderRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    MoveFolderRequested_revoker MoveFolderRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs> & handler) const;
    void MoveFolderRequested(event_token token) const;
    event_token UpdateMeetingResponseRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> & handler) const;
    using UpdateMeetingResponseRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    UpdateMeetingResponseRequested_revoker UpdateMeetingResponseRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs> & handler) const;
    void UpdateMeetingResponseRequested(event_token token) const;
    event_token ForwardMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> & handler) const;
    using ForwardMeetingRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    ForwardMeetingRequested_revoker ForwardMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs> & handler) const;
    void ForwardMeetingRequested(event_token token) const;
    event_token ProposeNewTimeForMeetingRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> & handler) const;
    using ProposeNewTimeForMeetingRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    ProposeNewTimeForMeetingRequested_revoker ProposeNewTimeForMeetingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs> & handler) const;
    void ProposeNewTimeForMeetingRequested(event_token token) const;
    event_token SetAutoReplySettingsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> & handler) const;
    using SetAutoReplySettingsRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    SetAutoReplySettingsRequested_revoker SetAutoReplySettingsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs> & handler) const;
    void SetAutoReplySettingsRequested(event_token token) const;
    event_token GetAutoReplySettingsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> & handler) const;
    using GetAutoReplySettingsRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    GetAutoReplySettingsRequested_revoker GetAutoReplySettingsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs> & handler) const;
    void GetAutoReplySettingsRequested(event_token token) const;
    event_token ResolveRecipientsRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> & handler) const;
    using ResolveRecipientsRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    ResolveRecipientsRequested_revoker ResolveRecipientsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs> & handler) const;
    void ResolveRecipientsRequested(event_token token) const;
    event_token ValidateCertificatesRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> & handler) const;
    using ValidateCertificatesRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    ValidateCertificatesRequested_revoker ValidateCertificatesRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs> & handler) const;
    void ValidateCertificatesRequested(event_token token) const;
    event_token ServerSearchReadBatchRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> & handler) const;
    using ServerSearchReadBatchRequested_revoker = event_revoker<IEmailDataProviderConnection>;
    ServerSearchReadBatchRequested_revoker ServerSearchReadBatchRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection, Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs> & handler) const;
    void ServerSearchReadBatchRequested(event_token token) const;
    void Start() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailDataProviderTriggerDetails
{
    Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection Connection() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxCreateFolderRequest
{
    hstring EmailMailboxId() const;
    hstring ParentFolderId() const;
    hstring Name() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(const Windows::ApplicationModel::Email::EmailFolder & folder) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus status) const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxCreateFolderRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDeleteFolderRequest
{
    hstring EmailMailboxId() const;
    hstring EmailFolderId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus status) const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDeleteFolderRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDownloadAttachmentRequest
{
    hstring EmailMailboxId() const;
    hstring EmailMessageId() const;
    hstring EmailAttachmentId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDownloadAttachmentRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDownloadMessageRequest
{
    hstring EmailMailboxId() const;
    hstring EmailMessageId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxDownloadMessageRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxEmptyFolderRequest
{
    hstring EmailMailboxId() const;
    hstring EmailFolderId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus status) const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxEmptyFolderRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxForwardMeetingRequest
{
    hstring EmailMailboxId() const;
    hstring EmailMessageId() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient> Recipients() const;
    hstring Subject() const;
    Windows::ApplicationModel::Email::EmailMessageBodyKind ForwardHeaderType() const;
    hstring ForwardHeader() const;
    hstring Comment() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxForwardMeetingRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxGetAutoReplySettingsRequest
{
    hstring EmailMailboxId() const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind RequestedFormat() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(const Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings & autoReplySettings) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxGetAutoReplySettingsRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxMoveFolderRequest
{
    hstring EmailMailboxId() const;
    hstring EmailFolderId() const;
    hstring NewParentFolderId() const;
    hstring NewFolderName() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxMoveFolderRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxProposeNewTimeForMeetingRequest
{
    hstring EmailMailboxId() const;
    hstring EmailMessageId() const;
    Windows::Foundation::DateTime NewStartTime() const;
    Windows::Foundation::TimeSpan NewDuration() const;
    hstring Subject() const;
    hstring Comment() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxResolveRecipientsRequest
{
    hstring EmailMailboxId() const;
    Windows::Foundation::Collections::IVectorView<hstring> Recipients() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult> & resolutionResults) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxResolveRecipientsRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxServerSearchReadBatchRequest
{
    hstring SessionId() const;
    hstring EmailMailboxId() const;
    hstring EmailFolderId() const;
    Windows::ApplicationModel::Email::EmailQueryOptions Options() const;
    uint32_t SuggestedBatchSize() const;
    Windows::Foundation::IAsyncAction SaveMessageAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus batchStatus) const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxServerSearchReadBatchRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxSetAutoReplySettingsRequest
{
    hstring EmailMailboxId() const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings AutoReplySettings() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxSetAutoReplySettingsRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxSyncManagerSyncRequest
{
    hstring EmailMailboxId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxSyncManagerSyncRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxUpdateMeetingResponseRequest
{
    hstring EmailMailboxId() const;
    hstring EmailMessageId() const;
    Windows::ApplicationModel::Email::EmailMeetingResponseType Response() const;
    hstring Subject() const;
    hstring Comment() const;
    bool SendUpdate() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxUpdateMeetingResponseRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxValidateCertificatesRequest
{
    hstring EmailMailboxId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> Certificates() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(const Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> & validationStatuses) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IEmailMailboxValidateCertificatesRequestEventArgs
{
    Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

struct IEmailDataProviderConnection :
    Windows::IInspectable,
    impl::consume<IEmailDataProviderConnection>
{
    IEmailDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailDataProviderConnection>(m_ptr); }
};

struct IEmailDataProviderTriggerDetails :
    Windows::IInspectable,
    impl::consume<IEmailDataProviderTriggerDetails>
{
    IEmailDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailDataProviderTriggerDetails>(m_ptr); }
};

struct IEmailMailboxCreateFolderRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxCreateFolderRequest>
{
    IEmailMailboxCreateFolderRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxCreateFolderRequest>(m_ptr); }
};

struct IEmailMailboxCreateFolderRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxCreateFolderRequestEventArgs>
{
    IEmailMailboxCreateFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxCreateFolderRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxDeleteFolderRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDeleteFolderRequest>
{
    IEmailMailboxDeleteFolderRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDeleteFolderRequest>(m_ptr); }
};

struct IEmailMailboxDeleteFolderRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDeleteFolderRequestEventArgs>
{
    IEmailMailboxDeleteFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDeleteFolderRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxDownloadAttachmentRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDownloadAttachmentRequest>
{
    IEmailMailboxDownloadAttachmentRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDownloadAttachmentRequest>(m_ptr); }
};

struct IEmailMailboxDownloadAttachmentRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDownloadAttachmentRequestEventArgs>
{
    IEmailMailboxDownloadAttachmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDownloadAttachmentRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxDownloadMessageRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDownloadMessageRequest>
{
    IEmailMailboxDownloadMessageRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDownloadMessageRequest>(m_ptr); }
};

struct IEmailMailboxDownloadMessageRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxDownloadMessageRequestEventArgs>
{
    IEmailMailboxDownloadMessageRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxDownloadMessageRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxEmptyFolderRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxEmptyFolderRequest>
{
    IEmailMailboxEmptyFolderRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxEmptyFolderRequest>(m_ptr); }
};

struct IEmailMailboxEmptyFolderRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxEmptyFolderRequestEventArgs>
{
    IEmailMailboxEmptyFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxEmptyFolderRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxForwardMeetingRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxForwardMeetingRequest>
{
    IEmailMailboxForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxForwardMeetingRequest>(m_ptr); }
};

struct IEmailMailboxForwardMeetingRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxForwardMeetingRequestEventArgs>
{
    IEmailMailboxForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxForwardMeetingRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxGetAutoReplySettingsRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxGetAutoReplySettingsRequest>
{
    IEmailMailboxGetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxGetAutoReplySettingsRequest>(m_ptr); }
};

struct IEmailMailboxGetAutoReplySettingsRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxGetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxGetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxGetAutoReplySettingsRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxMoveFolderRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxMoveFolderRequest>
{
    IEmailMailboxMoveFolderRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxMoveFolderRequest>(m_ptr); }
};

struct IEmailMailboxMoveFolderRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxMoveFolderRequestEventArgs>
{
    IEmailMailboxMoveFolderRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxMoveFolderRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxProposeNewTimeForMeetingRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxProposeNewTimeForMeetingRequest>
{
    IEmailMailboxProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxProposeNewTimeForMeetingRequest>(m_ptr); }
};

struct IEmailMailboxProposeNewTimeForMeetingRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>
{
    IEmailMailboxProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxProposeNewTimeForMeetingRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxResolveRecipientsRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxResolveRecipientsRequest>
{
    IEmailMailboxResolveRecipientsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxResolveRecipientsRequest>(m_ptr); }
};

struct IEmailMailboxResolveRecipientsRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxResolveRecipientsRequestEventArgs>
{
    IEmailMailboxResolveRecipientsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxResolveRecipientsRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxServerSearchReadBatchRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxServerSearchReadBatchRequest>
{
    IEmailMailboxServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxServerSearchReadBatchRequest>(m_ptr); }
};

struct IEmailMailboxServerSearchReadBatchRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxServerSearchReadBatchRequestEventArgs>
{
    IEmailMailboxServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxServerSearchReadBatchRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxSetAutoReplySettingsRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxSetAutoReplySettingsRequest>
{
    IEmailMailboxSetAutoReplySettingsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxSetAutoReplySettingsRequest>(m_ptr); }
};

struct IEmailMailboxSetAutoReplySettingsRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxSetAutoReplySettingsRequestEventArgs>
{
    IEmailMailboxSetAutoReplySettingsRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxSetAutoReplySettingsRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxSyncManagerSyncRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxSyncManagerSyncRequest>
{
    IEmailMailboxSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxSyncManagerSyncRequest>(m_ptr); }
};

struct IEmailMailboxSyncManagerSyncRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxSyncManagerSyncRequestEventArgs>
{
    IEmailMailboxSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxSyncManagerSyncRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxUpdateMeetingResponseRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxUpdateMeetingResponseRequest>
{
    IEmailMailboxUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxUpdateMeetingResponseRequest>(m_ptr); }
};

struct IEmailMailboxUpdateMeetingResponseRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxUpdateMeetingResponseRequestEventArgs>
{
    IEmailMailboxUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxUpdateMeetingResponseRequestEventArgs>(m_ptr); }
};

struct IEmailMailboxValidateCertificatesRequest :
    Windows::IInspectable,
    impl::consume<IEmailMailboxValidateCertificatesRequest>
{
    IEmailMailboxValidateCertificatesRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxValidateCertificatesRequest>(m_ptr); }
};

struct IEmailMailboxValidateCertificatesRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IEmailMailboxValidateCertificatesRequestEventArgs>
{
    IEmailMailboxValidateCertificatesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEmailMailboxValidateCertificatesRequestEventArgs>(m_ptr); }
};

}

}
