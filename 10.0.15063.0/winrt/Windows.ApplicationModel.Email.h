// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.Email.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailAttachment<D>::FileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment)->get_FileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment<D>::FileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment)->put_FileName(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Email_IEmailAttachment<D>::Data() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment<D>::Data(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment)->put_Data(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::ContentId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_ContentId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::ContentId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_ContentId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::ContentLocation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_ContentLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::ContentLocation(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_ContentLocation(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachmentDownloadState consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::DownloadState() const
{
    Windows::ApplicationModel::Email::EmailAttachmentDownloadState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_DownloadState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_DownloadState(get_abi(value)));
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::EstimatedDownloadSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_EstimatedDownloadSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::EstimatedDownloadSizeInBytes(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_EstimatedDownloadSizeInBytes(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::IsFromBaseMessage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_IsFromBaseMessage(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::IsInline() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_IsInline(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::IsInline(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_IsInline(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::MimeType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->get_MimeType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>::MimeType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachment2)->put_MimeType(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachment consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory<D>::Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data) const
{
    Windows::ApplicationModel::Email::EmailAttachment result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachmentFactory)->Create(get_abi(fileName), get_abi(data), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachment consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory2<D>::Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType) const
{
    Windows::ApplicationModel::Email::EmailAttachment result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailAttachmentFactory2)->Create(get_abi(fileName), get_abi(data), get_abi(mimeType), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailConversation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailConversation<D>::MailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_MailboxId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFlagState consume_Windows_ApplicationModel_Email_IEmailConversation<D>::FlagState() const
{
    Windows::ApplicationModel::Email::EmailFlagState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_FlagState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailConversation<D>::HasAttachment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_HasAttachment(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailImportance consume_Windows_ApplicationModel_Email_IEmailConversation<D>::Importance() const
{
    Windows::ApplicationModel::Email::EmailImportance value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_Importance(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageResponseKind consume_Windows_ApplicationModel_Email_IEmailConversation<D>::LastEmailResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMessageResponseKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_LastEmailResponseKind(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailConversation<D>::MessageCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_MessageCount(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailConversation<D>::MostRecentMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_MostRecentMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailConversation<D>::MostRecentMessageTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_MostRecentMessageTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailConversation<D>::Preview() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_Preview(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient consume_Windows_ApplicationModel_Email_IEmailConversation<D>::LatestSender() const
{
    Windows::ApplicationModel::Email::EmailRecipient value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_LatestSender(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailConversation<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailConversation<D>::UnreadMessageCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->get_UnreadMessageCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> consume_Windows_ApplicationModel_Email_IEmailConversation<D>::FindMessagesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->FindMessagesAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> consume_Windows_ApplicationModel_Email_IEmailConversation<D>::FindMessagesAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversation)->FindMessagesWithCountAsync(count, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation> consume_Windows_ApplicationModel_Email_IEmailConversationBatch<D>::Conversations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversationBatch)->get_Conversations(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailBatchStatus consume_Windows_ApplicationModel_Email_IEmailConversationBatch<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailBatchStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversationBatch)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch> consume_Windows_ApplicationModel_Email_IEmailConversationReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailConversationReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailFolder<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailFolder<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailFolder<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->put_RemoteId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailFolder<D>::MailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_MailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailFolder<D>::ParentFolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_ParentFolderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailFolder<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailFolder<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->put_DisplayName(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailFolder<D>::IsSyncEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_IsSyncEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailFolder<D>::IsSyncEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->put_IsSyncEnabled(value));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailFolder<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailFolder<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailSpecialFolderKind consume_Windows_ApplicationModel_Email_IEmailFolder<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailSpecialFolderKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::CreateFolderAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->CreateFolderAsync(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailFolder<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::FindChildFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->FindChildFoldersAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetConversationReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetConversationReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetMessageAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetMessageAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetMessageReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetMessageReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::GetMessageCountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->GetMessageCountsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->TryMoveAsync(get_abi(newParentFolder), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder, param::hstring const& newFolderName) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->TryMoveWithNewNameAsync(get_abi(newParentFolder), get_abi(newFolderName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailFolder<D>::TrySaveAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->TrySaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailFolder<D>::SaveMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailFolder)->SaveMessageAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanEdit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanEdit(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanEdit(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanEdit(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanExtractData() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanExtractData(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanExtractData(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanExtractData(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanForward() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanForward(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanForward(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanForward(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanModifyRecipientsOnResponse() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanModifyRecipientsOnResponse(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanModifyRecipientsOnResponse(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanModifyRecipientsOnResponse(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanPrintData() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanPrintData(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanPrintData(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanPrintData(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanRemoveIrmOnResponse() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanRemoveIrmOnResponse(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanRemoveIrmOnResponse(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanRemoveIrmOnResponse(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanReply() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanReply(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanReply(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanReply(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanReplyAll() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_CanReplyAll(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::CanReplyAll(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_CanReplyAll(value));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::ExpirationDate(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_ExpirationDate(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::IsIrmOriginator() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_IsIrmOriginator(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::IsIrmOriginator(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_IsIrmOriginator(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::IsProgramaticAccessAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_IsProgramaticAccessAllowed(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::IsProgramaticAccessAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_IsProgramaticAccessAllowed(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmTemplate consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::Template() const
{
    Windows::ApplicationModel::Email::EmailIrmTemplate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->get_Template(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>::Template(Windows::ApplicationModel::Email::EmailIrmTemplate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfo)->put_Template(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmInfo consume_Windows_ApplicationModel_Email_IEmailIrmInfoFactory<D>::Create(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate) const
{
    Windows::ApplicationModel::Email::EmailIrmInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmInfoFactory)->Create(get_abi(expiration), get_abi(irmTemplate), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplate)->put_Name(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmTemplate consume_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory<D>::Create(param::hstring const& id, param::hstring const& name, param::hstring const& description) const
{
    Windows::ApplicationModel::Email::EmailIrmTemplate result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailIrmTemplateFactory)->Create(get_abi(id), get_abi(name), get_abi(description), put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>::Flagged() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailItemCounts)->get_Flagged(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>::Important() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailItemCounts)->get_Important(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>::Total() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailItemCounts)->get_Total(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>::Unread() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailItemCounts)->get_Unread(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxCapabilities consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::Capabilities() const
{
    Windows::ApplicationModel::Email::EmailMailboxCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeTracker consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_Id(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::IsOwnedByCurrentApp() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_IsOwnedByCurrentApp(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::IsDataEncryptedUnderLock() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_IsDataEncryptedUnderLock(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_MailAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->put_MailAddress(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailAddressAliases() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_MailAddressAliases(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_OtherAppReadAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->put_OtherAppReadAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_OtherAppWriteAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->put_OtherAppWriteAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxPolicies consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::Policies() const
{
    Windows::ApplicationModel::Email::EmailMailboxPolicies value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_Policies(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SourceDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_SourceDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxSyncManager consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SyncManager() const
{
    Windows::ApplicationModel::Email::EmailMailboxSyncManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_SyncManager(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetConversationReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetConversationReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetMessageReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetMessageReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetConversationAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetConversationAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetFolderAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetFolderAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetMessageAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetMessageAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind const& folderType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->GetSpecialFolderAsync(get_abi(folderType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MarkMessageAsSeenAsync(param::hstring const& messageId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->MarkMessageAsSeenAsync(get_abi(messageId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MarkFolderAsSeenAsync(param::hstring const& folderId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->MarkFolderAsSeenAsync(get_abi(folderId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MarkMessageReadAsync(param::hstring const& messageId, bool isRead) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->MarkMessageReadAsync(get_abi(messageId), isRead, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::ChangeMessageFlagStateAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailFlagState const& flagState) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->ChangeMessageFlagStateAsync(get_abi(messageId), get_abi(flagState), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryMoveMessageAsync(param::hstring const& messageId, param::hstring const& newParentFolderId) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryMoveMessageAsync(get_abi(messageId), get_abi(newParentFolderId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryMoveFolderAsync(get_abi(folderId), get_abi(newParentFolderId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId, param::hstring const& newFolderName) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryMoveFolderWithNewNameAsync(get_abi(folderId), get_abi(newParentFolderId), get_abi(newFolderName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DeleteMessageAsync(param::hstring const& messageId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->DeleteMessageAsync(get_abi(messageId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MarkFolderSyncEnabledAsync(param::hstring const& folderId, bool isSyncEnabled) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->MarkFolderSyncEnabledAsync(get_abi(folderId), isSyncEnabled, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->SendMessageAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SaveDraftAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->SaveDraftAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DownloadMessageAsync(param::hstring const& messageId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->DownloadMessageAsync(get_abi(messageId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::DownloadAttachmentAsync(param::hstring const& attachmentId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->DownloadAttachmentAsync(get_abi(attachmentId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::CreateResponseMessageAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind const& responseType, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& responseHeaderType, param::hstring const& responseHeader) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->CreateResponseMessageAsync(get_abi(messageId), get_abi(responseType), get_abi(subject), get_abi(responseHeaderType), get_abi(responseHeader), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryUpdateMeetingResponseAsync(get_abi(meeting), get_abi(response), get_abi(subject), get_abi(comment), sendUpdate, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryForwardMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, param::async_iterable<Windows::ApplicationModel::Email::EmailRecipient> const& recipients, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& forwardHeaderType, param::hstring const& forwardHeader, param::hstring const& comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryForwardMeetingAsync(get_abi(meeting), get_abi(recipients), get_abi(subject), get_abi(forwardHeaderType), get_abi(forwardHeader), get_abi(comment), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryProposeNewTimeForMeetingAsync(get_abi(meeting), get_abi(newStartTime), get_abi(newDuration), get_abi(subject), get_abi(comment), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailboxChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const
{
    event_token pToken{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->add_MailboxChanged(get_abi(pHandler), put_abi(pToken)));
    return pToken;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::IEmailMailbox> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailboxChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::IEmailMailbox>(this, &abi_t<Windows::ApplicationModel::Email::IEmailMailbox>::remove_MailboxChanged, MailboxChanged(pHandler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::MailboxChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->remove_MailboxChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message, bool smartSend) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->SmartSendMessageAsync(get_abi(message), smartSend, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TrySetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const& autoReplySettings) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TrySetAutoReplySettingsAsync(get_abi(autoReplySettings), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> consume_Windows_ApplicationModel_Email_IEmailMailbox<D>::TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& requestedFormat) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> autoReplySettings{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox)->TryGetAutoReplySettingsAsync(get_abi(requestedFormat), put_abi(autoReplySettings)));
    return autoReplySettings;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox2<D>::LinkedMailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox2)->get_LinkedMailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox2<D>::NetworkAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox2)->get_NetworkAccountId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailbox2<D>::NetworkId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox2)->get_NetworkId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>::ResolveRecipientsAsync(param::async_iterable<hstring> const& recipients) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox3)->ResolveRecipientsAsync(get_abi(recipients), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>::ValidateCertificatesAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox3)->ValidateCertificatesAsync(get_abi(certificates), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>::TryEmptyFolderAsync(param::hstring const& folderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox3)->TryEmptyFolderAsync(get_abi(folderId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>::TryCreateFolderAsync(param::hstring const& parentFolderId, param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox3)->TryCreateFolderAsync(get_abi(parentFolderId), get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>::TryDeleteFolderAsync(param::hstring const& folderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox3)->TryDeleteFolderAsync(get_abi(folderId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailMailbox4<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailbox4)->RegisterSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxActionKind consume_Windows_ApplicationModel_Email_IEmailMailboxAction<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailMailboxActionKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAction)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Email_IEmailMailboxAction<D>::ChangeNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAction)->get_ChangeNumber(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReply)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReply)->put_IsEnabled(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>::Response() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReply)->get_Response(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>::Response(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReply)->put_Response(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->put_IsEnabled(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::ResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_ResponseKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->put_ResponseKind(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::StartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::StartTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::EndTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::EndTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->put_EndTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::InternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_InternalReply(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::KnownExternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_KnownExternalReply(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>::UnknownExternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings)->get_UnknownExternalReply(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanForwardMeetings() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanForwardMeetings(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanGetAndSetExternalAutoReplies() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanGetAndSetExternalAutoReplies(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanGetAndSetInternalAutoReplies() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanGetAndSetInternalAutoReplies(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanUpdateMeetingResponses() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanUpdateMeetingResponses(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanServerSearchFolders() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanServerSearchFolders(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanServerSearchMailbox() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanServerSearchMailbox(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanProposeNewTimeForMeetings() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanProposeNewTimeForMeetings(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>::CanSmartSend() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities)->get_CanSmartSend(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanResolveRecipients() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanResolveRecipients(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanValidateCertificates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanValidateCertificates(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanEmptyFolder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanEmptyFolder(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanCreateFolder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanCreateFolder(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanDeleteFolder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanDeleteFolder(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>::CanMoveFolder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities2)->get_CanMoveFolder(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanForwardMeetings(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanForwardMeetings(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanGetAndSetExternalAutoReplies(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanGetAndSetExternalAutoReplies(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanGetAndSetInternalAutoReplies(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanGetAndSetInternalAutoReplies(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanUpdateMeetingResponses(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanUpdateMeetingResponses(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanServerSearchFolders(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanServerSearchFolders(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanServerSearchMailbox(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanServerSearchMailbox(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanProposeNewTimeForMeetings(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanProposeNewTimeForMeetings(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanSmartSend(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanSmartSend(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanResolveRecipients(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanResolveRecipients(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanValidateCertificates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanValidateCertificates(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanEmptyFolder(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanEmptyFolder(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanCreateFolder(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanCreateFolder(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanDeleteFolder(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanDeleteFolder(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>::CanMoveFolder(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCapabilities3)->put_CanMoveFolder(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeType consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChange)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction> consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>::MailboxActions() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChange)->get_MailboxActions(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessage consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>::Message() const
{
    Windows::ApplicationModel::Email::EmailMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChange)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFolder consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>::Folder() const
{
    Windows::ApplicationModel::Email::EmailFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChange)->get_Folder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader<D>::AcceptChanges() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeReader)->AcceptChanges());
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader<D>::AcceptChangesThrough(Windows::ApplicationModel::Email::EmailMailboxChange const& lastChangeToAcknowledge) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeReader)->AcceptChangesThrough(get_abi(lastChangeToAcknowledge)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>> consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeReader)->ReadBatchAsync(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>::IsTracking() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeTracker)->get_IsTracking(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeTracker)->Enable());
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeReader consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeTracker)->GetChangeReader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangeTracker)->Reset());
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangedDeferral consume_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangedDeferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFolder consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult<D>::Folder() const
{
    Windows::ApplicationModel::Email::EmailFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult)->get_Folder(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>::AllowedSmimeEncryptionAlgorithmNegotiation() const
{
    Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies)->get_AllowedSmimeEncryptionAlgorithmNegotiation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>::AllowSmimeSoftCertificates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies)->get_AllowSmimeSoftCertificates(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>::RequiredSmimeEncryptionAlgorithm() const
{
    Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies)->get_RequiredSmimeEncryptionAlgorithm(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>::RequiredSmimeSigningAlgorithm() const
{
    Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies)->get_RequiredSmimeSigningAlgorithm(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2<D>::MustEncryptSmimeMessages() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies2)->get_MustEncryptSmimeMessages(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2<D>::MustSignSmimeMessages() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies2)->get_MustSignSmimeMessages(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_AllowedSmimeEncryptionAlgorithmNegotiation(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::AllowSmimeSoftCertificates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_AllowSmimeSoftCertificates(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::RequiredSmimeEncryptionAlgorithm(optional<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_RequiredSmimeEncryptionAlgorithm(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::RequiredSmimeSigningAlgorithm(optional<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_RequiredSmimeSigningAlgorithm(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::MustEncryptSmimeMessages(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_MustEncryptSmimeMessages(value));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>::MustSignSmimeMessages(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxPolicies3)->put_MustSignSmimeMessages(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxSyncStatus consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailMailboxSyncStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->SyncAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->add_SyncStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Email::IEmailMailboxSyncManager> consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Email::IEmailMailboxSyncManager>(this, &abi_t<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>::SyncStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager)->remove_SyncStatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2<D>::Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager2)->put_Status(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager2)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2<D>::LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMailboxSyncManager2)->put_LastAttemptedSyncTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailManagerForUser<D>::ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerForUser)->ShowComposeNewEmailAsync(get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> consume_Windows_ApplicationModel_Email_IEmailManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerForUser)->RequestStoreAsync(get_abi(accessType), put_abi(result)));
    return result;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Email_IEmailManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Email_IEmailManagerStatics<D>::ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerStatics)->ShowComposeNewEmailAsync(get_abi(message), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> consume_Windows_ApplicationModel_Email_IEmailManagerStatics2<D>::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerStatics2)->RequestStoreAsync(get_abi(accessType), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailManagerForUser consume_Windows_ApplicationModel_Email_IEmailManagerStatics3<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::Email::EmailManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailManagerStatics3)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AllowNewTimeProposal() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_AllowNewTimeProposal(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AllowNewTimeProposal(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_AllowNewTimeProposal(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AppointmentRoamingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_AppointmentRoamingId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AppointmentRoamingId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_AppointmentRoamingId(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_AppointmentOriginalStartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::AppointmentOriginalStartTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_AppointmentOriginalStartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_Duration(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::IsAllDay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_IsAllDay(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::IsAllDay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_IsAllDay(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::IsResponseRequested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_IsResponseRequested(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::IsResponseRequested(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_IsResponseRequested(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Location() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Location(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_Location(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::ProposedStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> proposedStartTime{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_ProposedStartTime(put_abi(proposedStartTime)));
    return proposedStartTime;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::ProposedStartTime(optional<Windows::Foundation::DateTime> const& proposedStartTime) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_ProposedStartTime(get_abi(proposedStartTime)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::ProposedDuration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> duration{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_ProposedDuration(put_abi(duration)));
    return duration;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::ProposedDuration(optional<Windows::Foundation::TimeSpan> const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_ProposedDuration(get_abi(duration)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::RecurrenceStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_RecurrenceStartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::RecurrenceStartTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_RecurrenceStartTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrence consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Recurrence() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrence value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_Recurrence(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_Recurrence(get_abi(value)));
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::RemoteChangeNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_RemoteChangeNumber(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::RemoteChangeNumber(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_RemoteChangeNumber(value));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::StartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>::StartTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo)->put_StartTime(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMeetingInfo2<D>::IsReportedOutOfDateByServer() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMeetingInfo2)->get_IsReportedOutOfDateByServer(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->put_Subject(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Body(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->put_Body(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> consume_Windows_ApplicationModel_Email_IEmailMessage<D>::To() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> consume_Windows_ApplicationModel_Email_IEmailMessage<D>::CC() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_CC(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Bcc() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_Bcc(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment> consume_Windows_ApplicationModel_Email_IEmailMessage<D>::Attachments() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage)->get_Attachments(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_RemoteId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::MailboxId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_MailboxId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::ConversationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_ConversationId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::FolderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_FolderId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::AllowInternetImages() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_AllowInternetImages(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::AllowInternetImages(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_AllowInternetImages(value));
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::ChangeNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_ChangeNumber(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageDownloadState consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::DownloadState() const
{
    Windows::ApplicationModel::Email::EmailMessageDownloadState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_DownloadState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_DownloadState(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::EstimatedDownloadSizeInBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_EstimatedDownloadSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::EstimatedDownloadSizeInBytes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_EstimatedDownloadSizeInBytes(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailFlagState consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::FlagState() const
{
    Windows::ApplicationModel::Email::EmailFlagState value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_FlagState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::FlagState(Windows::ApplicationModel::Email::EmailFlagState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_FlagState(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::HasPartialBodies() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_HasPartialBodies(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailImportance consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Importance() const
{
    Windows::ApplicationModel::Email::EmailImportance value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_Importance(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Importance(Windows::ApplicationModel::Email::EmailImportance const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_Importance(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::InResponseToMessageId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_InResponseToMessageId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmInfo consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IrmInfo() const
{
    Windows::ApplicationModel::Email::EmailIrmInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IrmInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IrmInfo(Windows::ApplicationModel::Email::EmailIrmInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_IrmInfo(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsDraftMessage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IsDraftMessage(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsRead() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IsRead(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsRead(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_IsRead(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsSeen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IsSeen(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsSeen(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_IsSeen(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsServerSearchMessage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IsServerSearchMessage(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::IsSmartSendable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_IsSmartSendable(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::MessageClass() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_MessageClass(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::MessageClass(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_MessageClass(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::NormalizedSubject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_NormalizedSubject(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::OriginalCodePage() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_OriginalCodePage(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::OriginalCodePage(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_OriginalCodePage(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Preview() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_Preview(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Preview(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_Preview(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageResponseKind consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::LastResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMessageResponseKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_LastResponseKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_LastResponseKind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Sender() const
{
    Windows::ApplicationModel::Email::EmailRecipient value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_Sender(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::Sender(Windows::ApplicationModel::Email::EmailRecipient const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_Sender(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::SentTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_SentTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::SentTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_SentTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMeetingInfo consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::MeetingInfo() const
{
    Windows::ApplicationModel::Email::EmailMeetingInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->get_MeetingInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::MeetingInfo(Windows::ApplicationModel::Email::EmailMeetingInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->put_MeetingInfo(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type) const
{
    Windows::Storage::Streams::IRandomAccessStreamReference result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->GetBodyStream(get_abi(type), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage2<D>::SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type, Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage2)->SetBodyStream(get_abi(type), get_abi(stream)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_Email_IEmailMessage3<D>::SmimeData() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage3)->get_SmimeData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage3<D>::SmimeData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage3)->put_SmimeData(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageSmimeKind consume_Windows_ApplicationModel_Email_IEmailMessage3<D>::SmimeKind() const
{
    Windows::ApplicationModel::Email::EmailMessageSmimeKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage3)->get_SmimeKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage3<D>::SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage3)->put_SmimeKind(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> consume_Windows_ApplicationModel_Email_IEmailMessage4<D>::ReplyTo() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage4)->get_ReplyTo(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient consume_Windows_ApplicationModel_Email_IEmailMessage4<D>::SentRepresenting() const
{
    Windows::ApplicationModel::Email::EmailRecipient value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage4)->get_SentRepresenting(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailMessage4<D>::SentRepresenting(Windows::ApplicationModel::Email::EmailRecipient const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessage4)->put_SentRepresenting(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage> consume_Windows_ApplicationModel_Email_IEmailMessageBatch<D>::Messages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessageBatch)->get_Messages(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailBatchStatus consume_Windows_ApplicationModel_Email_IEmailMessageBatch<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailBatchStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessageBatch)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch> consume_Windows_ApplicationModel_Email_IEmailMessageReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailMessageReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryTextSearch consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::TextSearch() const
{
    Windows::ApplicationModel::Email::EmailQueryTextSearch value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->get_TextSearch(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySortDirection consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::SortDirection() const
{
    Windows::ApplicationModel::Email::EmailQuerySortDirection value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->get_SortDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->put_SortDirection(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySortProperty consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::SortProperty() const
{
    Windows::ApplicationModel::Email::EmailQuerySortProperty value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->get_SortProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->put_SortProperty(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryKind consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailQueryKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::Kind(Windows::ApplicationModel::Email::EmailQueryKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->put_Kind(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>::FolderIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptions)->get_FolderIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory<D>::CreateWithText(param::hstring const& text) const
{
    Windows::ApplicationModel::Email::EmailQueryOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptionsFactory)->CreateWithText(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory<D>::CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields) const
{
    Windows::ApplicationModel::Email::EmailQueryOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryOptionsFactory)->CreateWithTextAndFields(get_abi(text), get_abi(fields), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySearchFields consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::Fields() const
{
    Windows::ApplicationModel::Email::EmailQuerySearchFields value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->get_Fields(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->put_Fields(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySearchScope consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::SearchScope() const
{
    Windows::ApplicationModel::Email::EmailQuerySearchScope value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->get_SearchScope(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->put_SearchScope(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailQueryTextSearch)->put_Text(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailRecipient<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipient)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailRecipient<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipient)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Email_IEmailRecipient<D>::Address() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipient)->get_Address(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailRecipient<D>::Address(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipient)->put_Address(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient consume_Windows_ApplicationModel_Email_IEmailRecipientFactory<D>::Create(param::hstring const& address) const
{
    Windows::ApplicationModel::Email::EmailRecipient result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientFactory)->Create(get_abi(address), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient consume_Windows_ApplicationModel_Email_IEmailRecipientFactory<D>::CreateWithName(param::hstring const& address, param::hstring const& name) const
{
    Windows::ApplicationModel::Email::EmailRecipient result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientFactory)->CreateWithName(get_abi(address), get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipientResolutionStatus consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailRecipientResolutionStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientResolutionResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult<D>::PublicKeys() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientResolutionResult)->get_PublicKeys(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2<D>::Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2)->put_Status(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2<D>::SetPublicKeys(param::iterable<Windows::Security::Cryptography::Certificates::Certificate> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2)->SetPublicKeys(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> consume_Windows_ApplicationModel_Email_IEmailStore<D>::FindMailboxesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->FindMailboxesAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetConversationReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetConversationReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetMessageReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetMessageReaderWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetMailboxAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetMailboxAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetConversationAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetConversationAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetFolderAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetFolderAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> consume_Windows_ApplicationModel_Email_IEmailStore<D>::GetMessageAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->GetMessageAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> consume_Windows_ApplicationModel_Email_IEmailStore<D>::CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->CreateMailboxAsync(get_abi(accountName), get_abi(accountAddress), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> consume_Windows_ApplicationModel_Email_IEmailStore<D>::CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress, param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Email::IEmailStore)->CreateMailboxInAccountAsync(get_abi(accountName), get_abi(accountAddress), get_abi(userDataAccountId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachment> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachment>
{
    HRESULT __stdcall get_FileName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachment2> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachment2>
{
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

    HRESULT __stdcall get_ContentId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLocation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLocation(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLocation(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadState(abi_t<Windows::ApplicationModel::Email::EmailAttachmentDownloadState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DownloadState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DownloadState(abi_t<Windows::ApplicationModel::Email::EmailAttachmentDownloadState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadState(*reinterpret_cast<Windows::ApplicationModel::Email::EmailAttachmentDownloadState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDownloadSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EstimatedDownloadSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EstimatedDownloadSizeInBytes(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EstimatedDownloadSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFromBaseMessage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFromBaseMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInline(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInline(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInline(value);
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory>
{
    HRESULT __stdcall Create(HSTRING fileName, ::IUnknown* data, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&data)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory2> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory2>
{
    HRESULT __stdcall Create(HSTRING fileName, ::IUnknown* data, HSTRING mimeType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&fileName), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&data), *reinterpret_cast<hstring const*>(&mimeType)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailConversation> : produce_base<D, Windows::ApplicationModel::Email::IEmailConversation>
{
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

    HRESULT __stdcall get_MailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlagState(abi_t<Windows::ApplicationModel::Email::EmailFlagState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlagState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasAttachment(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasAttachment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Importance(abi_t<Windows::ApplicationModel::Email::EmailImportance>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Importance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastEmailResponseKind(abi_t<Windows::ApplicationModel::Email::EmailMessageResponseKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastEmailResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MostRecentMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MostRecentMessageTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preview(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Preview());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LatestSender(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LatestSender());
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

    HRESULT __stdcall get_UnreadMessageCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnreadMessageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindMessagesAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindMessagesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindMessagesWithCountAsync(uint32_t count, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindMessagesAsync(count));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailConversationBatch> : produce_base<D, Windows::ApplicationModel::Email::IEmailConversationBatch>
{
    HRESULT __stdcall get_Conversations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Conversations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Email::EmailBatchStatus>* value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailConversationReader> : produce_base<D, Windows::ApplicationModel::Email::IEmailConversationReader>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailFolder> : produce_base<D, Windows::ApplicationModel::Email::IEmailFolder>
{
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

    HRESULT __stdcall get_MailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailboxId());
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

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSyncEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSyncEnabled());
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

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Email::EmailSpecialFolderKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderAsync(HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFolderAsync(*reinterpret_cast<hstring const*>(&name)));
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

    HRESULT __stdcall FindChildFoldersAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindChildFoldersAsync());
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

    HRESULT __stdcall GetConversationReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageAsync(*reinterpret_cast<hstring const*>(&id)));
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

    HRESULT __stdcall GetMessageReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageCountsAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageCountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryMoveAsync(::IUnknown* newParentFolder, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryMoveAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailFolder const*>(&newParentFolder)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryMoveWithNewNameAsync(::IUnknown* newParentFolder, HSTRING newFolderName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryMoveAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailFolder const*>(&newParentFolder), *reinterpret_cast<hstring const*>(&newFolderName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySaveAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailIrmInfo> : produce_base<D, Windows::ApplicationModel::Email::IEmailIrmInfo>
{
    HRESULT __stdcall get_CanEdit(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanEdit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanEdit(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanEdit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanExtractData(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanExtractData());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanExtractData(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanExtractData(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanForward(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanForward());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanForward(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanForward(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanModifyRecipientsOnResponse(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanModifyRecipientsOnResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanModifyRecipientsOnResponse(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanModifyRecipientsOnResponse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPrintData(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanPrintData());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanPrintData(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanPrintData(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRemoveIrmOnResponse(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRemoveIrmOnResponse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanRemoveIrmOnResponse(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanRemoveIrmOnResponse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReply(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanReply());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanReply(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanReply(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReplyAll(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanReplyAll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanReplyAll(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanReplyAll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationDate(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExpirationDate(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIrmOriginator(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIrmOriginator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsIrmOriginator(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsIrmOriginator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProgramaticAccessAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsProgramaticAccessAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsProgramaticAccessAllowed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsProgramaticAccessAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Template(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Template(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Template(*reinterpret_cast<Windows::ApplicationModel::Email::EmailIrmTemplate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailIrmInfoFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailIrmInfoFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Foundation::DateTime> expiration, ::IUnknown* irmTemplate, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::DateTime const*>(&expiration), *reinterpret_cast<Windows::ApplicationModel::Email::EmailIrmTemplate const*>(&irmTemplate)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailIrmTemplate> : produce_base<D, Windows::ApplicationModel::Email::IEmailIrmTemplate>
{
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

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailIrmTemplateFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>
{
    HRESULT __stdcall Create(HSTRING id, HSTRING name, HSTRING description, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&description)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailItemCounts> : produce_base<D, Windows::ApplicationModel::Email::IEmailItemCounts>
{
    HRESULT __stdcall get_Flagged(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flagged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Important(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Important());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Total(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unread(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unread());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailbox> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailbox>
{
    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_IsOwnedByCurrentApp(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOwnedByCurrentApp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataEncryptedUnderLock(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDataEncryptedUnderLock());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MailAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MailAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAddressAliases(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailAddressAliases());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Policies(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Policies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall GetConversationReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
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

    HRESULT __stdcall GetMessageReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
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

    HRESULT __stdcall GetConversationAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolderAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetFolderAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSpecialFolderAsync(abi_t<Windows::ApplicationModel::Email::EmailSpecialFolderKind> folderType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSpecialFolderAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailSpecialFolderKind const*>(&folderType)));
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

    HRESULT __stdcall MarkMessageAsSeenAsync(HSTRING messageId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkMessageAsSeenAsync(*reinterpret_cast<hstring const*>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkFolderAsSeenAsync(HSTRING folderId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkFolderAsSeenAsync(*reinterpret_cast<hstring const*>(&folderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkMessageReadAsync(HSTRING messageId, bool isRead, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkMessageReadAsync(*reinterpret_cast<hstring const*>(&messageId), isRead));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeMessageFlagStateAsync(HSTRING messageId, abi_t<Windows::ApplicationModel::Email::EmailFlagState> flagState, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ChangeMessageFlagStateAsync(*reinterpret_cast<hstring const*>(&messageId), *reinterpret_cast<Windows::ApplicationModel::Email::EmailFlagState const*>(&flagState)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryMoveMessageAsync(HSTRING messageId, HSTRING newParentFolderId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryMoveMessageAsync(*reinterpret_cast<hstring const*>(&messageId), *reinterpret_cast<hstring const*>(&newParentFolderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryMoveFolderAsync(HSTRING folderId, HSTRING newParentFolderId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryMoveFolderAsync(*reinterpret_cast<hstring const*>(&folderId), *reinterpret_cast<hstring const*>(&newParentFolderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryMoveFolderWithNewNameAsync(HSTRING folderId, HSTRING newParentFolderId, HSTRING newFolderName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryMoveFolderAsync(*reinterpret_cast<hstring const*>(&folderId), *reinterpret_cast<hstring const*>(&newParentFolderId), *reinterpret_cast<hstring const*>(&newFolderName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteMessageAsync(HSTRING messageId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteMessageAsync(*reinterpret_cast<hstring const*>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MarkFolderSyncEnabledAsync(HSTRING folderId, bool isSyncEnabled, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MarkFolderSyncEnabledAsync(*reinterpret_cast<hstring const*>(&folderId), isSyncEnabled));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendMessageAsync(::IUnknown* message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SendMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveDraftAsync(::IUnknown* message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveDraftAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DownloadMessageAsync(HSTRING messageId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DownloadMessageAsync(*reinterpret_cast<hstring const*>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DownloadAttachmentAsync(HSTRING attachmentId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DownloadAttachmentAsync(*reinterpret_cast<hstring const*>(&attachmentId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateResponseMessageAsync(HSTRING messageId, abi_t<Windows::ApplicationModel::Email::EmailMessageResponseKind> responseType, HSTRING subject, abi_t<Windows::ApplicationModel::Email::EmailMessageBodyKind> responseHeaderType, HSTRING responseHeader, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateResponseMessageAsync(*reinterpret_cast<hstring const*>(&messageId), *reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageResponseKind const*>(&responseType), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageBodyKind const*>(&responseHeaderType), *reinterpret_cast<hstring const*>(&responseHeader)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUpdateMeetingResponseAsync(::IUnknown* meeting, abi_t<Windows::ApplicationModel::Email::EmailMeetingResponseType> response, HSTRING subject, HSTRING comment, bool sendUpdate, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryUpdateMeetingResponseAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&meeting), *reinterpret_cast<Windows::ApplicationModel::Email::EmailMeetingResponseType const*>(&response), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment), sendUpdate));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryForwardMeetingAsync(::IUnknown* meeting, ::IUnknown* recipients, HSTRING subject, abi_t<Windows::ApplicationModel::Email::EmailMessageBodyKind> forwardHeaderType, HSTRING forwardHeader, HSTRING comment, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryForwardMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&meeting), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient> const*>(&recipients), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageBodyKind const*>(&forwardHeaderType), *reinterpret_cast<hstring const*>(&forwardHeader), *reinterpret_cast<hstring const*>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryProposeNewTimeForMeetingAsync(::IUnknown* meeting, abi_t<Windows::Foundation::DateTime> newStartTime, abi_t<Windows::Foundation::TimeSpan> newDuration, HSTRING subject, HSTRING comment, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryProposeNewTimeForMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&meeting), *reinterpret_cast<Windows::Foundation::DateTime const*>(&newStartTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&newDuration), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MailboxChanged(::IUnknown* pHandler, abi_t<event_token>* pToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pToken = detach_abi(this->shim().MailboxChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const*>(&pHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MailboxChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MailboxChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SmartSendMessageAsync(::IUnknown* message, bool smartSend, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SendMessageAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message), smartSend));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetAutoReplySettingsAsync(::IUnknown* autoReplySettings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetAutoReplySettingsAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const*>(&autoReplySettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetAutoReplySettingsAsync(abi_t<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind> requestedFormat, ::IUnknown** autoReplySettings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *autoReplySettings = detach_abi(this->shim().TryGetAutoReplySettingsAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const*>(&requestedFormat)));
            return S_OK;
        }
        catch (...)
        {
            *autoReplySettings = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailbox2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailbox2>
{
    HRESULT __stdcall get_LinkedMailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinkedMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkId());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailbox3> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailbox3>
{
    HRESULT __stdcall ResolveRecipientsAsync(::IUnknown* recipients, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ResolveRecipientsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&recipients)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ValidateCertificatesAsync(::IUnknown* certificates, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ValidateCertificatesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEmptyFolderAsync(HSTRING folderId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryEmptyFolderAsync(*reinterpret_cast<hstring const*>(&folderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateFolderAsync(HSTRING parentFolderId, HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCreateFolderAsync(*reinterpret_cast<hstring const*>(&parentFolderId), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDeleteFolderAsync(HSTRING folderId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryDeleteFolderAsync(*reinterpret_cast<hstring const*>(&folderId)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailbox4> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailbox4>
{
    HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterSyncManagerAsync());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxAction> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxAction>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Email::EmailMailboxActionKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxAutoReply> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxAutoReply>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Response(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Response(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseKind(abi_t<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResponseKind(abi_t<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResponseKind(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InternalReply(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InternalReply());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KnownExternalReply(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KnownExternalReply());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnknownExternalReply(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnknownExternalReply());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities>
{
    HRESULT __stdcall get_CanForwardMeetings(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanForwardMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanGetAndSetExternalAutoReplies(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanGetAndSetExternalAutoReplies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanGetAndSetInternalAutoReplies(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanGetAndSetInternalAutoReplies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanUpdateMeetingResponses(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanUpdateMeetingResponses());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanServerSearchFolders(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanServerSearchFolders());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanServerSearchMailbox(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanServerSearchMailbox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanProposeNewTimeForMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSmartSend(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanSmartSend());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>
{
    HRESULT __stdcall get_CanResolveRecipients(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanResolveRecipients());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanValidateCertificates(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanValidateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanEmptyFolder(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanEmptyFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCreateFolder(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanCreateFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDeleteFolder(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanDeleteFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMoveFolder(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMoveFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>
{
    HRESULT __stdcall put_CanForwardMeetings(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanForwardMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanGetAndSetExternalAutoReplies(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanGetAndSetExternalAutoReplies(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanGetAndSetInternalAutoReplies(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanGetAndSetInternalAutoReplies(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanUpdateMeetingResponses(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanUpdateMeetingResponses(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanServerSearchFolders(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanServerSearchFolders(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanServerSearchMailbox(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanServerSearchMailbox(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanProposeNewTimeForMeetings(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanProposeNewTimeForMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanSmartSend(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanSmartSend(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanResolveRecipients(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanResolveRecipients(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanValidateCertificates(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanValidateCertificates(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanEmptyFolder(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanEmptyFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanCreateFolder(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanCreateFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanDeleteFolder(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanDeleteFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanMoveFolder(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanMoveFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChange> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChange>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Email::EmailMailboxChangeType>* value) noexcept override
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

    HRESULT __stdcall get_MailboxActions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailboxActions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Folder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Folder());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangeReader> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangeReader>
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
            this->shim().AcceptChangesThrough(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxChange const*>(&lastChangeToAcknowledge));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>
{
    HRESULT __stdcall get_IsTracking(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTracking());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>* value) noexcept override
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

    HRESULT __stdcall get_Folder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Folder());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies>
{
    HRESULT __stdcall get_AllowedSmimeEncryptionAlgorithmNegotiation(abi_t<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowedSmimeEncryptionAlgorithmNegotiation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowSmimeSoftCertificates(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowSmimeSoftCertificates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredSmimeEncryptionAlgorithm(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredSmimeEncryptionAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredSmimeSigningAlgorithm(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredSmimeSigningAlgorithm());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies2>
{
    HRESULT __stdcall get_MustEncryptSmimeMessages(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MustEncryptSmimeMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MustSignSmimeMessages(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MustSignSmimeMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies3> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxPolicies3>
{
    HRESULT __stdcall put_AllowedSmimeEncryptionAlgorithmNegotiation(abi_t<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowedSmimeEncryptionAlgorithmNegotiation(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowSmimeSoftCertificates(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowSmimeSoftCertificates(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequiredSmimeEncryptionAlgorithm(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequiredSmimeEncryptionAlgorithm(*reinterpret_cast<Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequiredSmimeSigningAlgorithm(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequiredSmimeSigningAlgorithm(*reinterpret_cast<Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MustEncryptSmimeMessages(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MustEncryptSmimeMessages(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MustSignSmimeMessages(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MustSignSmimeMessages(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxSyncManager> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxSyncManager>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Email::EmailMailboxSyncStatus>* value) noexcept override
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

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SyncAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>
{
    HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Email::EmailMailboxSyncStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMailboxSyncStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailManagerForUser> : produce_base<D, Windows::ApplicationModel::Email::IEmailManagerForUser>
{
    HRESULT __stdcall ShowComposeNewEmailAsync(::IUnknown* message, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowComposeNewEmailAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Email::EmailStoreAccessType> accessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailManagerStatics> : produce_base<D, Windows::ApplicationModel::Email::IEmailManagerStatics>
{
    HRESULT __stdcall ShowComposeNewEmailAsync(::IUnknown* message, ::IUnknown** asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().ShowComposeNewEmailAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailManagerStatics2> : produce_base<D, Windows::ApplicationModel::Email::IEmailManagerStatics2>
{
    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Email::EmailStoreAccessType> accessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Email::EmailStoreAccessType const*>(&accessType)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailManagerStatics3> : produce_base<D, Windows::ApplicationModel::Email::IEmailManagerStatics3>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMeetingInfo> : produce_base<D, Windows::ApplicationModel::Email::IEmailMeetingInfo>
{
    HRESULT __stdcall get_AllowNewTimeProposal(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowNewTimeProposal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowNewTimeProposal(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowNewTimeProposal(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentRoamingId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppointmentRoamingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppointmentRoamingId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppointmentRoamingId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppointmentOriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppointmentOriginalStartTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppointmentOriginalStartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAllDay(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAllDay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAllDay(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAllDay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsResponseRequested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsResponseRequested(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsResponseRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProposedStartTime(::IUnknown** proposedStartTime) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *proposedStartTime = detach_abi(this->shim().ProposedStartTime());
            return S_OK;
        }
        catch (...)
        {
            *proposedStartTime = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProposedStartTime(::IUnknown* proposedStartTime) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProposedStartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&proposedStartTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProposedDuration(::IUnknown** duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *duration = detach_abi(this->shim().ProposedDuration());
            return S_OK;
        }
        catch (...)
        {
            *duration = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProposedDuration(::IUnknown* duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProposedDuration(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecurrenceStartTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecurrenceStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecurrenceStartTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecurrenceStartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recurrence(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recurrence(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentRecurrence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteChangeNumber(uint64_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteChangeNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMeetingInfo2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMeetingInfo2>
{
    HRESULT __stdcall get_IsReportedOutOfDateByServer(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReportedOutOfDateByServer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessage> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessage>
{
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

    HRESULT __stdcall get_To(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CC(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CC());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bcc(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bcc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessage2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessage2>
{
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

    HRESULT __stdcall get_MailboxId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConversationId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConversationId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInternetImages(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowInternetImages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowInternetImages(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowInternetImages(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadState(abi_t<Windows::ApplicationModel::Email::EmailMessageDownloadState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DownloadState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DownloadState(abi_t<Windows::ApplicationModel::Email::EmailMessageDownloadState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadState(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageDownloadState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDownloadSizeInBytes(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EstimatedDownloadSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EstimatedDownloadSizeInBytes(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EstimatedDownloadSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlagState(abi_t<Windows::ApplicationModel::Email::EmailFlagState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlagState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlagState(abi_t<Windows::ApplicationModel::Email::EmailFlagState> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlagState(*reinterpret_cast<Windows::ApplicationModel::Email::EmailFlagState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasPartialBodies(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasPartialBodies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Importance(abi_t<Windows::ApplicationModel::Email::EmailImportance>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Importance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Importance(abi_t<Windows::ApplicationModel::Email::EmailImportance> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Importance(*reinterpret_cast<Windows::ApplicationModel::Email::EmailImportance const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InResponseToMessageId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InResponseToMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IrmInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IrmInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IrmInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IrmInfo(*reinterpret_cast<Windows::ApplicationModel::Email::EmailIrmInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDraftMessage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDraftMessage());
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

    HRESULT __stdcall get_IsSeen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSeen());
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

    HRESULT __stdcall get_IsServerSearchMessage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsServerSearchMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSmartSendable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSmartSendable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageClass(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageClass());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageClass(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageClass(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedSubject(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NormalizedSubject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalCodePage(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalCodePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginalCodePage(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginalCodePage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preview(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Preview());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Preview(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Preview(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastResponseKind(abi_t<Windows::ApplicationModel::Email::EmailMessageResponseKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastResponseKind(abi_t<Windows::ApplicationModel::Email::EmailMessageResponseKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastResponseKind(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageResponseKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sender(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sender(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sender(*reinterpret_cast<Windows::ApplicationModel::Email::EmailRecipient const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SentTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SentTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SentTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SentTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MeetingInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MeetingInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MeetingInfo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MeetingInfo(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMeetingInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBodyStream(abi_t<Windows::ApplicationModel::Email::EmailMessageBodyKind> type, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetBodyStream(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageBodyKind const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBodyStream(abi_t<Windows::ApplicationModel::Email::EmailMessageBodyKind> type, ::IUnknown* stream) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBodyStream(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageBodyKind const*>(&type), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&stream));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessage3> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessage3>
{
    HRESULT __stdcall get_SmimeData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmimeData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmimeData(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmimeData(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmimeKind(abi_t<Windows::ApplicationModel::Email::EmailMessageSmimeKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmimeKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmimeKind(abi_t<Windows::ApplicationModel::Email::EmailMessageSmimeKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmimeKind(*reinterpret_cast<Windows::ApplicationModel::Email::EmailMessageSmimeKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessage4> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessage4>
{
    HRESULT __stdcall get_ReplyTo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReplyTo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SentRepresenting(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SentRepresenting());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SentRepresenting(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SentRepresenting(*reinterpret_cast<Windows::ApplicationModel::Email::EmailRecipient const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessageBatch> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessageBatch>
{
    HRESULT __stdcall get_Messages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Messages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Email::EmailBatchStatus>* value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMessageReader> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessageReader>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailQueryOptions> : produce_base<D, Windows::ApplicationModel::Email::IEmailQueryOptions>
{
    HRESULT __stdcall get_TextSearch(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextSearch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortDirection(abi_t<Windows::ApplicationModel::Email::EmailQuerySortDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortDirection(abi_t<Windows::ApplicationModel::Email::EmailQuerySortDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortDirection(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQuerySortDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortProperty(abi_t<Windows::ApplicationModel::Email::EmailQuerySortProperty>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortProperty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortProperty(abi_t<Windows::ApplicationModel::Email::EmailQuerySortProperty> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortProperty(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQuerySortProperty const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::Email::EmailQueryKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::Email::EmailQueryKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FolderIds());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailQueryOptionsFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>
{
    HRESULT __stdcall CreateWithText(HSTRING text, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithText(*reinterpret_cast<hstring const*>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTextAndFields(HSTRING text, abi_t<Windows::ApplicationModel::Email::EmailQuerySearchFields> fields, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithTextAndFields(*reinterpret_cast<hstring const*>(&text), *reinterpret_cast<Windows::ApplicationModel::Email::EmailQuerySearchFields const*>(&fields)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailQueryTextSearch> : produce_base<D, Windows::ApplicationModel::Email::IEmailQueryTextSearch>
{
    HRESULT __stdcall get_Fields(abi_t<Windows::ApplicationModel::Email::EmailQuerySearchFields>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fields(abi_t<Windows::ApplicationModel::Email::EmailQuerySearchFields> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Fields(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQuerySearchFields const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchScope(abi_t<Windows::ApplicationModel::Email::EmailQuerySearchScope>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SearchScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchScope(abi_t<Windows::ApplicationModel::Email::EmailQuerySearchScope> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SearchScope(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQuerySearchScope const*>(&value));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailRecipient> : produce_base<D, Windows::ApplicationModel::Email::IEmailRecipient>
{
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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Address(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailRecipientFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailRecipientFactory>
{
    HRESULT __stdcall Create(HSTRING address, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&address)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithName(HSTRING address, HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&address), *reinterpret_cast<hstring const*>(&name)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> : produce_base<D, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>* value) noexcept override
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

    HRESULT __stdcall get_PublicKeys(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublicKeys());
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
struct produce<D, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2> : produce_base<D, Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>
{
    HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPublicKeys(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPublicKeys(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailStore> : produce_base<D, Windows::ApplicationModel::Email::IEmailStore>
{
    HRESULT __stdcall FindMailboxesAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindMailboxesAsync());
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

    HRESULT __stdcall GetConversationReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
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

    HRESULT __stdcall GetMessageReaderWithOptions(::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageReader(*reinterpret_cast<Windows::ApplicationModel::Email::EmailQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMailboxAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMailboxAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetConversationAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetConversationAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolderAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetFolderAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetMessageAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMailboxAsync(HSTRING accountName, HSTRING accountAddress, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateMailboxAsync(*reinterpret_cast<hstring const*>(&accountName), *reinterpret_cast<hstring const*>(&accountAddress)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMailboxInAccountAsync(HSTRING accountName, HSTRING accountAddress, HSTRING userDataAccountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateMailboxAsync(*reinterpret_cast<hstring const*>(&accountName), *reinterpret_cast<hstring const*>(&accountAddress), *reinterpret_cast<hstring const*>(&userDataAccountId)));
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
struct produce<D, Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>
{};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

inline EmailAttachment::EmailAttachment() :
    EmailAttachment(activate_instance<EmailAttachment>())
{}

inline EmailAttachment::EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data) :
    EmailAttachment(get_activation_factory<EmailAttachment, Windows::ApplicationModel::Email::IEmailAttachmentFactory>().Create(fileName, data))
{}

inline EmailAttachment::EmailAttachment(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType) :
    EmailAttachment(get_activation_factory<EmailAttachment, Windows::ApplicationModel::Email::IEmailAttachmentFactory2>().Create(fileName, data, mimeType))
{}

inline EmailIrmInfo::EmailIrmInfo() :
    EmailIrmInfo(activate_instance<EmailIrmInfo>())
{}

inline EmailIrmInfo::EmailIrmInfo(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate) :
    EmailIrmInfo(get_activation_factory<EmailIrmInfo, Windows::ApplicationModel::Email::IEmailIrmInfoFactory>().Create(expiration, irmTemplate))
{}

inline EmailIrmTemplate::EmailIrmTemplate() :
    EmailIrmTemplate(activate_instance<EmailIrmTemplate>())
{}

inline EmailIrmTemplate::EmailIrmTemplate(param::hstring const& id, param::hstring const& name, param::hstring const& description) :
    EmailIrmTemplate(get_activation_factory<EmailIrmTemplate, Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>().Create(id, name, description))
{}

inline EmailMailboxAutoReplySettings::EmailMailboxAutoReplySettings() :
    EmailMailboxAutoReplySettings(activate_instance<EmailMailboxAutoReplySettings>())
{}

inline Windows::Foundation::IAsyncAction EmailManager::ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message)
{
    return get_activation_factory<EmailManager, Windows::ApplicationModel::Email::IEmailManagerStatics>().ShowComposeNewEmailAsync(message);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> EmailManager::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType)
{
    return get_activation_factory<EmailManager, Windows::ApplicationModel::Email::IEmailManagerStatics2>().RequestStoreAsync(accessType);
}

inline Windows::ApplicationModel::Email::EmailManagerForUser EmailManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<EmailManager, Windows::ApplicationModel::Email::IEmailManagerStatics3>().GetForUser(user);
}

inline EmailMeetingInfo::EmailMeetingInfo() :
    EmailMeetingInfo(activate_instance<EmailMeetingInfo>())
{}

inline EmailMessage::EmailMessage() :
    EmailMessage(activate_instance<EmailMessage>())
{}

inline EmailQueryOptions::EmailQueryOptions() :
    EmailQueryOptions(activate_instance<EmailQueryOptions>())
{}

inline EmailQueryOptions::EmailQueryOptions(param::hstring const& text) :
    EmailQueryOptions(get_activation_factory<EmailQueryOptions, Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>().CreateWithText(text))
{}

inline EmailQueryOptions::EmailQueryOptions(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields) :
    EmailQueryOptions(get_activation_factory<EmailQueryOptions, Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>().CreateWithTextAndFields(text, fields))
{}

inline EmailRecipient::EmailRecipient() :
    EmailRecipient(activate_instance<EmailRecipient>())
{}

inline EmailRecipient::EmailRecipient(param::hstring const& address) :
    EmailRecipient(get_activation_factory<EmailRecipient, Windows::ApplicationModel::Email::IEmailRecipientFactory>().Create(address))
{}

inline EmailRecipient::EmailRecipient(param::hstring const& address, param::hstring const& name) :
    EmailRecipient(get_activation_factory<EmailRecipient, Windows::ApplicationModel::Email::IEmailRecipientFactory>().CreateWithName(address, name))
{}

inline EmailRecipientResolutionResult::EmailRecipientResolutionResult() :
    EmailRecipientResolutionResult(activate_instance<EmailRecipientResolutionResult>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailAttachment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailAttachment> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailAttachment2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailAttachment2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailAttachmentFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailAttachmentFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailAttachmentFactory2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailAttachmentFactory2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailConversation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailConversation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailConversationBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailConversationBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailConversationReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailConversationReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailFolder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailFolder> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailIrmInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailIrmInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailIrmInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailIrmInfoFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailIrmTemplate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailIrmTemplate> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailIrmTemplateFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailIrmTemplateFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailItemCounts> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailItemCounts> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailbox> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailbox> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailbox2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailbox2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailbox3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailbox3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailbox4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailbox4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxAction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxAction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxAutoReply> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxAutoReply> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxCapabilities3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxPolicies3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMailboxSyncManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMailboxSyncManager2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailManagerStatics3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMeetingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMeetingInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMeetingInfo2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMeetingInfo2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessage2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessage3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessage3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessage4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessage4> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessageBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessageBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailMessageReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailMessageReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailQueryOptionsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailQueryOptionsFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailQueryTextSearch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailQueryTextSearch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailRecipient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailRecipient> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailRecipientFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailRecipientFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailAttachment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailAttachment> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailConversation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailConversation> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailConversationBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailConversationBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailConversationReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailConversationReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailFolder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailFolder> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailIrmInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailIrmInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailIrmTemplate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailIrmTemplate> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailItemCounts> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailItemCounts> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailbox> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailbox> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxAction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxAction> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReply> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReply> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxCapabilities> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxChange> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeTracker> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxPolicies> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxPolicies> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMeetingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMeetingInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMessage> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMessageBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMessageBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailMessageReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailMessageReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailQueryTextSearch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailQueryTextSearch> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailRecipient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailRecipient> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionResult> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails> {};

}

WINRT_WARNING_POP
