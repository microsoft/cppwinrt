// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.ApplicationModel.Appointments.3.h"
#include "internal/Windows.ApplicationModel.Email.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachment> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachment>
{
    HRESULT __stdcall get_FileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FileName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FileName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
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

    HRESULT __stdcall get_ContentId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentLocation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentLocation(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentLocation(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DownloadState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState value) noexcept override
    {
        try
        {
            this->shim().DownloadState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDownloadSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EstimatedDownloadSizeInBytes());
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
            this->shim().EstimatedDownloadSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFromBaseMessage(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFromBaseMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInline(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInline());
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
            this->shim().IsInline(value);
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory> : produce_base<D, Windows::ApplicationModel::Email::IEmailAttachmentFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> fileName, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> data, abi_arg_out<Windows::ApplicationModel::Email::IEmailAttachment> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&fileName), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&data)));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> fileName, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> data, abi_arg_in<hstring> mimeType, abi_arg_out<Windows::ApplicationModel::Email::IEmailAttachment> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&fileName), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&data), *reinterpret_cast<const hstring *>(&mimeType)));
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

    HRESULT __stdcall get_MailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlagState(Windows::ApplicationModel::Email::EmailFlagState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlagState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasAttachment(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasAttachment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Importance(Windows::ApplicationModel::Email::EmailImportance * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Importance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastEmailResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastEmailResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MostRecentMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MostRecentMessageTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MostRecentMessageTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preview(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Preview());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LatestSender(abi_arg_out<Windows::ApplicationModel::Email::IEmailRecipient> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LatestSender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_UnreadMessageCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnreadMessageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindMessagesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindMessagesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindMessagesWithCountAsync(uint32_t count, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindMessagesAsync(count));
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
    HRESULT __stdcall get_Conversations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Conversations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Email::EmailBatchStatus * value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailConversationReader> : produce_base<D, Windows::ApplicationModel::Email::IEmailConversationReader>
{
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch>> result) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailFolder> : produce_base<D, Windows::ApplicationModel::Email::IEmailFolder>
{
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

    HRESULT __stdcall get_MailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentFolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentFolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSyncEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSyncEnabled());
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

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Email::EmailSpecialFolderKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFolderAsync(*reinterpret_cast<const hstring *>(&name)));
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

    HRESULT __stdcall abi_FindChildFoldersAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindChildFoldersAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
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

    HRESULT __stdcall abi_GetConversationReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
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

    HRESULT __stdcall abi_GetMessageReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageCountsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageCountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryMoveAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailFolder> newParentFolder, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryMoveAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailFolder *>(&newParentFolder)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryMoveWithNewNameAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailFolder> newParentFolder, abi_arg_in<hstring> newFolderName, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryMoveAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailFolder *>(&newParentFolder), *reinterpret_cast<const hstring *>(&newFolderName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySaveAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveMessageAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
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
    HRESULT __stdcall get_CanEdit(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanEdit());
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
            this->shim().CanEdit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanExtractData(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanExtractData());
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
            this->shim().CanExtractData(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanForward(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanForward());
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
            this->shim().CanForward(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanModifyRecipientsOnResponse(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanModifyRecipientsOnResponse());
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
            this->shim().CanModifyRecipientsOnResponse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPrintData(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanPrintData());
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
            this->shim().CanPrintData(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanRemoveIrmOnResponse(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanRemoveIrmOnResponse());
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
            this->shim().CanRemoveIrmOnResponse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReply(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanReply());
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
            this->shim().CanReply(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanReplyAll(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanReplyAll());
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
            this->shim().CanReplyAll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpirationDate(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().ExpirationDate(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIrmOriginator(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIrmOriginator());
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
            this->shim().IsIrmOriginator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProgramaticAccessAllowed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsProgramaticAccessAllowed());
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
            this->shim().IsProgramaticAccessAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Template(abi_arg_out<Windows::ApplicationModel::Email::IEmailIrmTemplate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Template());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Template(abi_arg_in<Windows::ApplicationModel::Email::IEmailIrmTemplate> value) noexcept override
    {
        try
        {
            this->shim().Template(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailIrmTemplate *>(&value));
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
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::DateTime> expiration, abi_arg_in<Windows::ApplicationModel::Email::IEmailIrmTemplate> irmTemplate, abi_arg_out<Windows::ApplicationModel::Email::IEmailIrmInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::DateTime *>(&expiration), *reinterpret_cast<const Windows::ApplicationModel::Email::EmailIrmTemplate *>(&irmTemplate)));
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

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> id, abi_arg_in<hstring> name, abi_arg_in<hstring> description, abi_arg_out<Windows::ApplicationModel::Email::IEmailIrmTemplate> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&description)));
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
    HRESULT __stdcall get_Flagged(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Flagged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Important(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Important());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Total(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unread(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Unread());
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
    HRESULT __stdcall get_Capabilities(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> value) noexcept override
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

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_IsOwnedByCurrentApp(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOwnedByCurrentApp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataEncryptedUnderLock(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDataEncryptedUnderLock());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MailAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MailAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAddressAliases(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailAddressAliases());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess value) noexcept override
    {
        try
        {
            this->shim().OtherAppReadAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess value) noexcept override
    {
        try
        {
            this->shim().OtherAppWriteAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Policies(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxPolicies> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Policies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncManager(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxSyncManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
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

    HRESULT __stdcall abi_GetConversationReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
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

    HRESULT __stdcall abi_GetMessageReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
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

    HRESULT __stdcall abi_GetConversationAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFolderAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetFolderAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind folderType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetSpecialFolderAsync(folderType));
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

    HRESULT __stdcall abi_MarkMessageAsSeenAsync(abi_arg_in<hstring> messageId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkMessageAsSeenAsync(*reinterpret_cast<const hstring *>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkFolderAsSeenAsync(abi_arg_in<hstring> folderId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkFolderAsSeenAsync(*reinterpret_cast<const hstring *>(&folderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkMessageReadAsync(abi_arg_in<hstring> messageId, bool isRead, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkMessageReadAsync(*reinterpret_cast<const hstring *>(&messageId), isRead));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ChangeMessageFlagStateAsync(abi_arg_in<hstring> messageId, Windows::ApplicationModel::Email::EmailFlagState flagState, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ChangeMessageFlagStateAsync(*reinterpret_cast<const hstring *>(&messageId), flagState));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryMoveMessageAsync(abi_arg_in<hstring> messageId, abi_arg_in<hstring> newParentFolderId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryMoveMessageAsync(*reinterpret_cast<const hstring *>(&messageId), *reinterpret_cast<const hstring *>(&newParentFolderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryMoveFolderAsync(abi_arg_in<hstring> folderId, abi_arg_in<hstring> newParentFolderId, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryMoveFolderAsync(*reinterpret_cast<const hstring *>(&folderId), *reinterpret_cast<const hstring *>(&newParentFolderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryMoveFolderWithNewNameAsync(abi_arg_in<hstring> folderId, abi_arg_in<hstring> newParentFolderId, abi_arg_in<hstring> newFolderName, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryMoveFolderAsync(*reinterpret_cast<const hstring *>(&folderId), *reinterpret_cast<const hstring *>(&newParentFolderId), *reinterpret_cast<const hstring *>(&newFolderName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteMessageAsync(abi_arg_in<hstring> messageId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteMessageAsync(*reinterpret_cast<const hstring *>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MarkFolderSyncEnabledAsync(abi_arg_in<hstring> folderId, bool isSyncEnabled, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MarkFolderSyncEnabledAsync(*reinterpret_cast<const hstring *>(&folderId), isSyncEnabled));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendMessageAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveDraftAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveDraftAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DownloadMessageAsync(abi_arg_in<hstring> messageId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DownloadMessageAsync(*reinterpret_cast<const hstring *>(&messageId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DownloadAttachmentAsync(abi_arg_in<hstring> attachmentId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DownloadAttachmentAsync(*reinterpret_cast<const hstring *>(&attachmentId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateResponseMessageAsync(abi_arg_in<hstring> messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind responseType, abi_arg_in<hstring> subject, Windows::ApplicationModel::Email::EmailMessageBodyKind responseHeaderType, abi_arg_in<hstring> responseHeader, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateResponseMessageAsync(*reinterpret_cast<const hstring *>(&messageId), responseType, *reinterpret_cast<const hstring *>(&subject), responseHeaderType, *reinterpret_cast<const hstring *>(&responseHeader)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryUpdateMeetingResponseAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType response, abi_arg_in<hstring> subject, abi_arg_in<hstring> comment, bool sendUpdate, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryUpdateMeetingResponseAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&meeting), response, *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&comment), sendUpdate));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryForwardMeetingAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> meeting, abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient>> recipients, abi_arg_in<hstring> subject, Windows::ApplicationModel::Email::EmailMessageBodyKind forwardHeaderType, abi_arg_in<hstring> forwardHeader, abi_arg_in<hstring> comment, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryForwardMeetingAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&meeting), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient> *>(&recipients), *reinterpret_cast<const hstring *>(&subject), forwardHeaderType, *reinterpret_cast<const hstring *>(&forwardHeader), *reinterpret_cast<const hstring *>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryProposeNewTimeForMeetingAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> meeting, abi_arg_in<Windows::Foundation::DateTime> newStartTime, abi_arg_in<Windows::Foundation::TimeSpan> newDuration, abi_arg_in<hstring> subject, abi_arg_in<hstring> comment, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryProposeNewTimeForMeetingAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&meeting), *reinterpret_cast<const Windows::Foundation::DateTime *>(&newStartTime), *reinterpret_cast<const Windows::Foundation::TimeSpan *>(&newDuration), *reinterpret_cast<const hstring *>(&subject), *reinterpret_cast<const hstring *>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MailboxChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>> pHandler, event_token * pToken) noexcept override
    {
        try
        {
            *pToken = detach(this->shim().MailboxChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> *>(&pHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MailboxChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().MailboxChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SmartSendMessageAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, bool smartSend, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SendMessageAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message), smartSend));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetAutoReplySettingsAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> autoReplySettings, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetAutoReplySettingsAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings *>(&autoReplySettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind requestedFormat, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>> autoReplySettings) noexcept override
    {
        try
        {
            *autoReplySettings = detach(this->shim().TryGetAutoReplySettingsAsync(requestedFormat));
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
    HRESULT __stdcall get_LinkedMailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinkedMailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NetworkId());
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
    HRESULT __stdcall abi_ResolveRecipientsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> recipients, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ResolveRecipientsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&recipients)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ValidateCertificatesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate>> certificates, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ValidateCertificatesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> *>(&certificates)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryEmptyFolderAsync(abi_arg_in<hstring> folderId, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryEmptyFolderAsync(*reinterpret_cast<const hstring *>(&folderId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateFolderAsync(abi_arg_in<hstring> parentFolderId, abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryCreateFolderAsync(*reinterpret_cast<const hstring *>(&parentFolderId), *reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryDeleteFolderAsync(abi_arg_in<hstring> folderId, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryDeleteFolderAsync(*reinterpret_cast<const hstring *>(&folderId)));
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
    HRESULT __stdcall abi_RegisterSyncManagerAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RegisterSyncManagerAsync());
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
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Email::EmailMailboxActionKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeNumber());
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
    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
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
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Response(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Response(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Response(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
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
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value) noexcept override
    {
        try
        {
            this->shim().ResponseKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().StartTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().EndTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InternalReply(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxAutoReply> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InternalReply());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KnownExternalReply(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxAutoReply> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KnownExternalReply());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnknownExternalReply(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxAutoReply> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnknownExternalReply());
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
    HRESULT __stdcall get_CanForwardMeetings(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanForwardMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanGetAndSetExternalAutoReplies(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanGetAndSetExternalAutoReplies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanGetAndSetInternalAutoReplies(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanGetAndSetInternalAutoReplies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanUpdateMeetingResponses(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanUpdateMeetingResponses());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanServerSearchFolders(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanServerSearchFolders());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanServerSearchMailbox(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanServerSearchMailbox());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanProposeNewTimeForMeetings());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanSmartSend(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanSmartSend());
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
    HRESULT __stdcall get_CanResolveRecipients(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanResolveRecipients());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanValidateCertificates(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanValidateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanEmptyFolder(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanEmptyFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanCreateFolder(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanCreateFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDeleteFolder(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanDeleteFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMoveFolder(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanMoveFolder());
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
    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Email::EmailMailboxChangeType * value) noexcept override
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

    HRESULT __stdcall get_MailboxActions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailboxActions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::ApplicationModel::Email::IEmailMessage> value) noexcept override
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

    HRESULT __stdcall get_Folder(abi_arg_out<Windows::ApplicationModel::Email::IEmailFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Folder());
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

    HRESULT __stdcall abi_AcceptChangesThrough(abi_arg_in<Windows::ApplicationModel::Email::IEmailMailboxChange> lastChangeToAcknowledge) noexcept override
    {
        try
        {
            this->shim().AcceptChangesThrough(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMailboxChange *>(&lastChangeToAcknowledge));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>>> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>
{
    HRESULT __stdcall get_IsTracking(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTracking());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall abi_GetChangeReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxChangeReader> value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> result) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult> : produce_base<D, Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus * value) noexcept override
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

    HRESULT __stdcall get_Folder(abi_arg_out<Windows::ApplicationModel::Email::IEmailFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Folder());
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
    HRESULT __stdcall get_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedSmimeEncryptionAlgorithmNegotiation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowSmimeSoftCertificates(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowSmimeSoftCertificates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredSmimeEncryptionAlgorithm(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequiredSmimeEncryptionAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiredSmimeSigningAlgorithm(abi_arg_out<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequiredSmimeSigningAlgorithm());
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
    HRESULT __stdcall get_MustEncryptSmimeMessages(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MustEncryptSmimeMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MustSignSmimeMessages(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MustSignSmimeMessages());
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
    HRESULT __stdcall put_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value) noexcept override
    {
        try
        {
            this->shim().AllowedSmimeEncryptionAlgorithmNegotiation(value);
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
            this->shim().AllowSmimeSoftCertificates(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequiredSmimeEncryptionAlgorithm(abi_arg_in<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>> value) noexcept override
    {
        try
        {
            this->shim().RequiredSmimeEncryptionAlgorithm(*reinterpret_cast<const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequiredSmimeSigningAlgorithm(abi_arg_in<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>> value) noexcept override
    {
        try
        {
            this->shim().RequiredSmimeSigningAlgorithm(*reinterpret_cast<const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> *>(&value));
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
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus * value) noexcept override
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

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SyncAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SyncStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SyncStatusChanged(token);
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
    HRESULT __stdcall put_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus value) noexcept override
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

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
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
    HRESULT __stdcall abi_ShowComposeNewEmailAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShowComposeNewEmailAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
    HRESULT __stdcall abi_ShowComposeNewEmailAsync(abi_arg_in<Windows::ApplicationModel::Email::IEmailMessage> message, abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
    {
        try
        {
            *asyncAction = detach(this->shim().ShowComposeNewEmailAsync(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMessage *>(&message)));
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
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestStoreAsync(accessType));
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
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::ApplicationModel::Email::IEmailManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall get_AllowNewTimeProposal(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowNewTimeProposal());
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
            this->shim().AllowNewTimeProposal(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentRoamingId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentRoamingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppointmentRoamingId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AppointmentRoamingId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppointmentOriginalStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppointmentOriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppointmentOriginalStartTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().AppointmentOriginalStartTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Duration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAllDay(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAllDay());
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
            this->shim().IsAllDay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsResponseRequested());
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
            this->shim().IsResponseRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Location(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Location(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Location(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProposedStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> proposedStartTime) noexcept override
    {
        try
        {
            *proposedStartTime = detach(this->shim().ProposedStartTime());
            return S_OK;
        }
        catch (...)
        {
            *proposedStartTime = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProposedStartTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> proposedStartTime) noexcept override
    {
        try
        {
            this->shim().ProposedStartTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&proposedStartTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProposedDuration(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> duration) noexcept override
    {
        try
        {
            *duration = detach(this->shim().ProposedDuration());
            return S_OK;
        }
        catch (...)
        {
            *duration = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProposedDuration(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> duration) noexcept override
    {
        try
        {
            this->shim().ProposedDuration(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecurrenceStartTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecurrenceStartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecurrenceStartTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().RecurrenceStartTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(abi_arg_out<Windows::ApplicationModel::Appointments::IAppointmentRecurrence> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recurrence(abi_arg_in<Windows::ApplicationModel::Appointments::IAppointmentRecurrence> value) noexcept override
    {
        try
        {
            this->shim().Recurrence(*reinterpret_cast<const Windows::ApplicationModel::Appointments::AppointmentRecurrence *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteChangeNumber());
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
            this->shim().RemoteChangeNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().StartTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
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
    HRESULT __stdcall get_IsReportedOutOfDateByServer(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsReportedOutOfDateByServer());
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

    HRESULT __stdcall get_To(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CC(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CC());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bcc(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bcc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Attachments(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment>> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailMessage2> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessage2>
{
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

    HRESULT __stdcall get_MailboxId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailboxId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConversationId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConversationId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FolderId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInternetImages(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowInternetImages());
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
            this->shim().AllowInternetImages(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DownloadState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState value) noexcept override
    {
        try
        {
            this->shim().DownloadState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedDownloadSizeInBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EstimatedDownloadSizeInBytes());
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
            this->shim().EstimatedDownloadSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlagState(Windows::ApplicationModel::Email::EmailFlagState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlagState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlagState(Windows::ApplicationModel::Email::EmailFlagState value) noexcept override
    {
        try
        {
            this->shim().FlagState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasPartialBodies(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasPartialBodies());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Importance(Windows::ApplicationModel::Email::EmailImportance * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Importance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Importance(Windows::ApplicationModel::Email::EmailImportance value) noexcept override
    {
        try
        {
            this->shim().Importance(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InResponseToMessageId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InResponseToMessageId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IrmInfo(abi_arg_out<Windows::ApplicationModel::Email::IEmailIrmInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IrmInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IrmInfo(abi_arg_in<Windows::ApplicationModel::Email::IEmailIrmInfo> value) noexcept override
    {
        try
        {
            this->shim().IrmInfo(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailIrmInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDraftMessage(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDraftMessage());
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

    HRESULT __stdcall get_IsSeen(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSeen());
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

    HRESULT __stdcall get_IsServerSearchMessage(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsServerSearchMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSmartSendable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSmartSendable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageClass(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MessageClass());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MessageClass(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().MessageClass(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedSubject(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NormalizedSubject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalCodePage(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalCodePage());
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
            this->shim().OriginalCodePage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preview(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Preview());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Preview(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Preview(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LastResponseKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind value) noexcept override
    {
        try
        {
            this->shim().LastResponseKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sender(abi_arg_out<Windows::ApplicationModel::Email::IEmailRecipient> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sender(abi_arg_in<Windows::ApplicationModel::Email::IEmailRecipient> value) noexcept override
    {
        try
        {
            this->shim().Sender(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailRecipient *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SentTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SentTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SentTime(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().SentTime(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MeetingInfo(abi_arg_out<Windows::ApplicationModel::Email::IEmailMeetingInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MeetingInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MeetingInfo(abi_arg_in<Windows::ApplicationModel::Email::IEmailMeetingInfo> value) noexcept override
    {
        try
        {
            this->shim().MeetingInfo(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailMeetingInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type, abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetBodyStream(type));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> stream) noexcept override
    {
        try
        {
            this->shim().SetBodyStream(type, *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&stream));
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
    HRESULT __stdcall get_SmimeData(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmimeData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmimeData(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().SmimeData(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmimeKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind value) noexcept override
    {
        try
        {
            this->shim().SmimeKind(value);
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
    HRESULT __stdcall get_Messages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Messages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::Email::EmailBatchStatus * value) noexcept override
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
struct produce<D, Windows::ApplicationModel::Email::IEmailMessageReader> : produce_base<D, Windows::ApplicationModel::Email::IEmailMessageReader>
{
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch>> result) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Email::IEmailQueryOptions> : produce_base<D, Windows::ApplicationModel::Email::IEmailQueryOptions>
{
    HRESULT __stdcall get_TextSearch(abi_arg_out<Windows::ApplicationModel::Email::IEmailQueryTextSearch> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TextSearch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SortDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection value) noexcept override
    {
        try
        {
            this->shim().SortDirection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SortProperty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty value) noexcept override
    {
        try
        {
            this->shim().SortProperty(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Email::EmailQueryKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::Email::EmailQueryKind value) noexcept override
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

    HRESULT __stdcall get_FolderIds(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FolderIds());
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
    HRESULT __stdcall abi_CreateWithText(abi_arg_in<hstring> text, abi_arg_out<Windows::ApplicationModel::Email::IEmailQueryOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithText(*reinterpret_cast<const hstring *>(&text)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTextAndFields(abi_arg_in<hstring> text, Windows::ApplicationModel::Email::EmailQuerySearchFields fields, abi_arg_out<Windows::ApplicationModel::Email::IEmailQueryOptions> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithTextAndFields(*reinterpret_cast<const hstring *>(&text), fields));
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
    HRESULT __stdcall get_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fields());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields value) noexcept override
    {
        try
        {
            this->shim().Fields(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SearchScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope value) noexcept override
    {
        try
        {
            this->shim().SearchScope(value);
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
struct produce<D, Windows::ApplicationModel::Email::IEmailRecipient> : produce_base<D, Windows::ApplicationModel::Email::IEmailRecipient>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Address(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Address(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Address(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> address, abi_arg_out<Windows::ApplicationModel::Email::IEmailRecipient> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&address)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithName(abi_arg_in<hstring> address, abi_arg_in<hstring> name, abi_arg_out<Windows::ApplicationModel::Email::IEmailRecipient> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithName(*reinterpret_cast<const hstring *>(&address), *reinterpret_cast<const hstring *>(&name)));
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
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus * value) noexcept override
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

    HRESULT __stdcall get_PublicKeys(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PublicKeys());
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
    HRESULT __stdcall put_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus value) noexcept override
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

    HRESULT __stdcall abi_SetPublicKeys(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            this->shim().SetPublicKeys(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> *>(&value));
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
    HRESULT __stdcall abi_FindMailboxesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindMailboxesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
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

    HRESULT __stdcall abi_GetConversationReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailConversationReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageReader(abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
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

    HRESULT __stdcall abi_GetMessageReaderWithOptions(abi_arg_in<Windows::ApplicationModel::Email::IEmailQueryOptions> options, abi_arg_out<Windows::ApplicationModel::Email::IEmailMessageReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageReader(*reinterpret_cast<const Windows::ApplicationModel::Email::EmailQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMailboxAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMailboxAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetConversationAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetConversationAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFolderAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetFolderAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetMessageAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetMessageAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMailboxAsync(abi_arg_in<hstring> accountName, abi_arg_in<hstring> accountAddress, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateMailboxAsync(*reinterpret_cast<const hstring *>(&accountName), *reinterpret_cast<const hstring *>(&accountAddress)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMailboxInAccountAsync(abi_arg_in<hstring> accountName, abi_arg_in<hstring> accountAddress, abi_arg_in<hstring> userDataAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateMailboxAsync(*reinterpret_cast<const hstring *>(&accountName), *reinterpret_cast<const hstring *>(&accountAddress), *reinterpret_cast<const hstring *>(&userDataAccountId)));
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

namespace Windows::ApplicationModel::Email {

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailManagerStatics<D>::ShowComposeNewEmailAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(static_cast<const IEmailManagerStatics &>(static_cast<const D &>(*this))->abi_ShowComposeNewEmailAsync(get(message), put(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> impl_IEmailManagerStatics2<D>::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> result;
    check_hresult(static_cast<const IEmailManagerStatics2 &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(accessType, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailManagerForUser impl_IEmailManagerStatics3<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::Email::EmailManagerForUser result { nullptr };
    check_hresult(static_cast<const IEmailManagerStatics3 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailManagerForUser<D>::ShowComposeNewEmailAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailManagerForUser &>(static_cast<const D &>(*this))->abi_ShowComposeNewEmailAsync(get(message), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> impl_IEmailManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> result;
    check_hresult(static_cast<const IEmailManagerForUser &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(accessType, put(result)));
    return result;
}

template <typename D> Windows::System::User impl_IEmailManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IEmailManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> impl_IEmailStore<D>::FindMailboxesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_FindMailboxesAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailStore<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetConversationReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailStore<D>::GetConversationReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetConversationReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailStore<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetMessageReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailStore<D>::GetMessageReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetMessageReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> impl_IEmailStore<D>::GetMailboxAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetMailboxAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> impl_IEmailStore<D>::GetConversationAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetConversationAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> impl_IEmailStore<D>::GetFolderAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetFolderAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> impl_IEmailStore<D>::GetMessageAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_GetMessageAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> impl_IEmailStore<D>::CreateMailboxAsync(hstring_ref accountName, hstring_ref accountAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_CreateMailboxAsync(get(accountName), get(accountAddress), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> impl_IEmailStore<D>::CreateMailboxAsync(hstring_ref accountName, hstring_ref accountAddress, hstring_ref userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> result;
    check_hresult(static_cast<const IEmailStore &>(static_cast<const D &>(*this))->abi_CreateMailboxInAccountAsync(get(accountName), get(accountAddress), get(userDataAccountId), put(result)));
    return result;
}

template <typename D> hstring impl_IEmailRecipient<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IEmailRecipient &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IEmailRecipient<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailRecipient &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> hstring impl_IEmailRecipient<D>::Address() const
{
    hstring value;
    check_hresult(static_cast<const IEmailRecipient &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> void impl_IEmailRecipient<D>::Address(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailRecipient &>(static_cast<const D &>(*this))->put_Address(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient impl_IEmailRecipientFactory<D>::Create(hstring_ref address) const
{
    Windows::ApplicationModel::Email::EmailRecipient result { nullptr };
    check_hresult(static_cast<const IEmailRecipientFactory &>(static_cast<const D &>(*this))->abi_Create(get(address), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient impl_IEmailRecipientFactory<D>::CreateWithName(hstring_ref address, hstring_ref name) const
{
    Windows::ApplicationModel::Email::EmailRecipient result { nullptr };
    check_hresult(static_cast<const IEmailRecipientFactory &>(static_cast<const D &>(*this))->abi_CreateWithName(get(address), get(name), put(result)));
    return result;
}

template <typename D> hstring impl_IEmailIrmTemplate<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IEmailIrmTemplate<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> hstring impl_IEmailIrmTemplate<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IEmailIrmTemplate<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IEmailIrmTemplate<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IEmailIrmTemplate<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailIrmTemplate &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmTemplate impl_IEmailIrmTemplateFactory<D>::Create(hstring_ref id, hstring_ref name, hstring_ref description) const
{
    Windows::ApplicationModel::Email::EmailIrmTemplate result { nullptr };
    check_hresult(static_cast<const IEmailIrmTemplateFactory &>(static_cast<const D &>(*this))->abi_Create(get(id), get(name), get(description), put(result)));
    return result;
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanEdit() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanEdit(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanEdit(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanEdit(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanExtractData() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanExtractData(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanExtractData(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanExtractData(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanForward() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanForward(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanForward(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanForward(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanModifyRecipientsOnResponse() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanModifyRecipientsOnResponse(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanModifyRecipientsOnResponse(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanModifyRecipientsOnResponse(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanPrintData() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanPrintData(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanPrintData(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanPrintData(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanRemoveIrmOnResponse() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanRemoveIrmOnResponse(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanRemoveIrmOnResponse(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanRemoveIrmOnResponse(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanReply() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanReply(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanReply(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanReply(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::CanReplyAll() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_CanReplyAll(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::CanReplyAll(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_CanReplyAll(value));
}

template <typename D> Windows::Foundation::DateTime impl_IEmailIrmInfo<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_ExpirationDate(put(value)));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::ExpirationDate(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_ExpirationDate(get(value)));
}

template <typename D> bool impl_IEmailIrmInfo<D>::IsIrmOriginator() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_IsIrmOriginator(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::IsIrmOriginator(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_IsIrmOriginator(value));
}

template <typename D> bool impl_IEmailIrmInfo<D>::IsProgramaticAccessAllowed() const
{
    bool value {};
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_IsProgramaticAccessAllowed(&value));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::IsProgramaticAccessAllowed(bool value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_IsProgramaticAccessAllowed(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmTemplate impl_IEmailIrmInfo<D>::Template() const
{
    Windows::ApplicationModel::Email::EmailIrmTemplate value { nullptr };
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->get_Template(put(value)));
    return value;
}

template <typename D> void impl_IEmailIrmInfo<D>::Template(const Windows::ApplicationModel::Email::EmailIrmTemplate & value) const
{
    check_hresult(static_cast<const IEmailIrmInfo &>(static_cast<const D &>(*this))->put_Template(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmInfo impl_IEmailIrmInfoFactory<D>::Create(const Windows::Foundation::DateTime & expiration, const Windows::ApplicationModel::Email::EmailIrmTemplate & irmTemplate) const
{
    Windows::ApplicationModel::Email::EmailIrmInfo result { nullptr };
    check_hresult(static_cast<const IEmailIrmInfoFactory &>(static_cast<const D &>(*this))->abi_Create(get(expiration), get(irmTemplate), put(result)));
    return result;
}

template <typename D> hstring impl_IEmailMessage<D>::Subject() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_Subject(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage<D>::Subject(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->put_Subject(get(value)));
}

template <typename D> hstring impl_IEmailMessage<D>::Body() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_Body(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage<D>::Body(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->put_Body(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> impl_IEmailMessage<D>::To() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_To(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> impl_IEmailMessage<D>::CC() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_CC(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> impl_IEmailMessage<D>::Bcc() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_Bcc(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment> impl_IEmailMessage<D>::Attachments() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment> value;
    check_hresult(static_cast<const IEmailMessage &>(static_cast<const D &>(*this))->get_Attachments(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMessage2<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMessage2<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> hstring impl_IEmailMessage2<D>::MailboxId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_MailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMessage2<D>::ConversationId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_ConversationId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMessage2<D>::FolderId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_FolderId(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMessage2<D>::AllowInternetImages() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_AllowInternetImages(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::AllowInternetImages(bool value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_AllowInternetImages(value));
}

template <typename D> uint64_t impl_IEmailMessage2<D>::ChangeNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_ChangeNumber(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageDownloadState impl_IEmailMessage2<D>::DownloadState() const
{
    Windows::ApplicationModel::Email::EmailMessageDownloadState value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_DownloadState(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_DownloadState(value));
}

template <typename D> uint32_t impl_IEmailMessage2<D>::EstimatedDownloadSizeInBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_EstimatedDownloadSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::EstimatedDownloadSizeInBytes(uint32_t value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_EstimatedDownloadSizeInBytes(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailFlagState impl_IEmailMessage2<D>::FlagState() const
{
    Windows::ApplicationModel::Email::EmailFlagState value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_FlagState(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::FlagState(Windows::ApplicationModel::Email::EmailFlagState value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_FlagState(value));
}

template <typename D> bool impl_IEmailMessage2<D>::HasPartialBodies() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_HasPartialBodies(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailImportance impl_IEmailMessage2<D>::Importance() const
{
    Windows::ApplicationModel::Email::EmailImportance value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_Importance(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::Importance(Windows::ApplicationModel::Email::EmailImportance value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_Importance(value));
}

template <typename D> hstring impl_IEmailMessage2<D>::InResponseToMessageId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_InResponseToMessageId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailIrmInfo impl_IEmailMessage2<D>::IrmInfo() const
{
    Windows::ApplicationModel::Email::EmailIrmInfo value { nullptr };
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IrmInfo(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::IrmInfo(const Windows::ApplicationModel::Email::EmailIrmInfo & value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_IrmInfo(get(value)));
}

template <typename D> bool impl_IEmailMessage2<D>::IsDraftMessage() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IsDraftMessage(&value));
    return value;
}

template <typename D> bool impl_IEmailMessage2<D>::IsRead() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IsRead(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::IsRead(bool value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_IsRead(value));
}

template <typename D> bool impl_IEmailMessage2<D>::IsSeen() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IsSeen(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::IsSeen(bool value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_IsSeen(value));
}

template <typename D> bool impl_IEmailMessage2<D>::IsServerSearchMessage() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IsServerSearchMessage(&value));
    return value;
}

template <typename D> bool impl_IEmailMessage2<D>::IsSmartSendable() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_IsSmartSendable(&value));
    return value;
}

template <typename D> hstring impl_IEmailMessage2<D>::MessageClass() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_MessageClass(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::MessageClass(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_MessageClass(get(value)));
}

template <typename D> hstring impl_IEmailMessage2<D>::NormalizedSubject() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_NormalizedSubject(put(value)));
    return value;
}

template <typename D> int32_t impl_IEmailMessage2<D>::OriginalCodePage() const
{
    int32_t value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_OriginalCodePage(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::OriginalCodePage(int32_t value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_OriginalCodePage(value));
}

template <typename D> hstring impl_IEmailMessage2<D>::Preview() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_Preview(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::Preview(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_Preview(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageResponseKind impl_IEmailMessage2<D>::LastResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMessageResponseKind value {};
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_LastResponseKind(&value));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_LastResponseKind(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient impl_IEmailMessage2<D>::Sender() const
{
    Windows::ApplicationModel::Email::EmailRecipient value { nullptr };
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_Sender(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::Sender(const Windows::ApplicationModel::Email::EmailRecipient & value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_Sender(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMessage2<D>::SentTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_SentTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::SentTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_SentTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMeetingInfo impl_IEmailMessage2<D>::MeetingInfo() const
{
    Windows::ApplicationModel::Email::EmailMeetingInfo value { nullptr };
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->get_MeetingInfo(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage2<D>::MeetingInfo(const Windows::ApplicationModel::Email::EmailMeetingInfo & value) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->put_MeetingInfo(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IEmailMessage2<D>::GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type) const
{
    Windows::Storage::Streams::IRandomAccessStreamReference result;
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->abi_GetBodyStream(type, put(result)));
    return result;
}

template <typename D> void impl_IEmailMessage2<D>::SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type, const Windows::Storage::Streams::IRandomAccessStreamReference & stream) const
{
    check_hresult(static_cast<const IEmailMessage2 &>(static_cast<const D &>(*this))->abi_SetBodyStream(type, get(stream)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IEmailMessage3<D>::SmimeData() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IEmailMessage3 &>(static_cast<const D &>(*this))->get_SmimeData(put(value)));
    return value;
}

template <typename D> void impl_IEmailMessage3<D>::SmimeData(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IEmailMessage3 &>(static_cast<const D &>(*this))->put_SmimeData(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageSmimeKind impl_IEmailMessage3<D>::SmimeKind() const
{
    Windows::ApplicationModel::Email::EmailMessageSmimeKind value {};
    check_hresult(static_cast<const IEmailMessage3 &>(static_cast<const D &>(*this))->get_SmimeKind(&value));
    return value;
}

template <typename D> void impl_IEmailMessage3<D>::SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind value) const
{
    check_hresult(static_cast<const IEmailMessage3 &>(static_cast<const D &>(*this))->put_SmimeKind(value));
}

template <typename D> hstring impl_IEmailAttachment<D>::FileName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAttachment &>(static_cast<const D &>(*this))->get_FileName(put(value)));
    return value;
}

template <typename D> void impl_IEmailAttachment<D>::FileName(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailAttachment &>(static_cast<const D &>(*this))->put_FileName(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IEmailAttachment<D>::Data() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IEmailAttachment &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IEmailAttachment<D>::Data(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IEmailAttachment &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> hstring impl_IEmailAttachment2<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailAttachment2<D>::ContentId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_ContentId(put(value)));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::ContentId(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_ContentId(get(value)));
}

template <typename D> hstring impl_IEmailAttachment2<D>::ContentLocation() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_ContentLocation(put(value)));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::ContentLocation(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_ContentLocation(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachmentDownloadState impl_IEmailAttachment2<D>::DownloadState() const
{
    Windows::ApplicationModel::Email::EmailAttachmentDownloadState value {};
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_DownloadState(&value));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_DownloadState(value));
}

template <typename D> uint64_t impl_IEmailAttachment2<D>::EstimatedDownloadSizeInBytes() const
{
    uint64_t value {};
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_EstimatedDownloadSizeInBytes(&value));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::EstimatedDownloadSizeInBytes(uint64_t value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_EstimatedDownloadSizeInBytes(value));
}

template <typename D> bool impl_IEmailAttachment2<D>::IsFromBaseMessage() const
{
    bool value {};
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_IsFromBaseMessage(&value));
    return value;
}

template <typename D> bool impl_IEmailAttachment2<D>::IsInline() const
{
    bool value {};
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_IsInline(&value));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::IsInline(bool value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_IsInline(value));
}

template <typename D> hstring impl_IEmailAttachment2<D>::MimeType() const
{
    hstring value;
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->get_MimeType(put(value)));
    return value;
}

template <typename D> void impl_IEmailAttachment2<D>::MimeType(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailAttachment2 &>(static_cast<const D &>(*this))->put_MimeType(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachment impl_IEmailAttachmentFactory<D>::Create(hstring_ref fileName, const Windows::Storage::Streams::IRandomAccessStreamReference & data) const
{
    Windows::ApplicationModel::Email::EmailAttachment result { nullptr };
    check_hresult(static_cast<const IEmailAttachmentFactory &>(static_cast<const D &>(*this))->abi_Create(get(fileName), get(data), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailAttachment impl_IEmailAttachmentFactory2<D>::Create(hstring_ref fileName, const Windows::Storage::Streams::IRandomAccessStreamReference & data, hstring_ref mimeType) const
{
    Windows::ApplicationModel::Email::EmailAttachment result { nullptr };
    check_hresult(static_cast<const IEmailAttachmentFactory2 &>(static_cast<const D &>(*this))->abi_Create(get(fileName), get(data), get(mimeType), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangedDeferral impl_IEmailMailboxChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangedDeferral result { nullptr };
    check_hresult(static_cast<const IEmailMailboxChangedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> void impl_IEmailMailboxChangedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IEmailMailboxChangedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation impl_IEmailMailboxPolicies<D>::AllowedSmimeEncryptionAlgorithmNegotiation() const
{
    Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value {};
    check_hresult(static_cast<const IEmailMailboxPolicies &>(static_cast<const D &>(*this))->get_AllowedSmimeEncryptionAlgorithmNegotiation(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxPolicies<D>::AllowSmimeSoftCertificates() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxPolicies &>(static_cast<const D &>(*this))->get_AllowSmimeSoftCertificates(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> impl_IEmailMailboxPolicies<D>::RequiredSmimeEncryptionAlgorithm() const
{
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> value;
    check_hresult(static_cast<const IEmailMailboxPolicies &>(static_cast<const D &>(*this))->get_RequiredSmimeEncryptionAlgorithm(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> impl_IEmailMailboxPolicies<D>::RequiredSmimeSigningAlgorithm() const
{
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> value;
    check_hresult(static_cast<const IEmailMailboxPolicies &>(static_cast<const D &>(*this))->get_RequiredSmimeSigningAlgorithm(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailboxPolicies2<D>::MustEncryptSmimeMessages() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxPolicies2 &>(static_cast<const D &>(*this))->get_MustEncryptSmimeMessages(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxPolicies2<D>::MustSignSmimeMessages() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxPolicies2 &>(static_cast<const D &>(*this))->get_MustSignSmimeMessages(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_AllowedSmimeEncryptionAlgorithmNegotiation(value));
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::AllowSmimeSoftCertificates(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_AllowSmimeSoftCertificates(value));
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::RequiredSmimeEncryptionAlgorithm(const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> & value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_RequiredSmimeEncryptionAlgorithm(get(value)));
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::RequiredSmimeSigningAlgorithm(const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> & value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_RequiredSmimeSigningAlgorithm(get(value)));
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::MustEncryptSmimeMessages(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_MustEncryptSmimeMessages(value));
}

template <typename D> void impl_IEmailMailboxPolicies3<D>::MustSignSmimeMessages(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxPolicies3 &>(static_cast<const D &>(*this))->put_MustSignSmimeMessages(value));
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanForwardMeetings() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanForwardMeetings(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanGetAndSetExternalAutoReplies() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanGetAndSetExternalAutoReplies(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanGetAndSetInternalAutoReplies() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanGetAndSetInternalAutoReplies(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanUpdateMeetingResponses() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanUpdateMeetingResponses(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanServerSearchFolders() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanServerSearchFolders(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanServerSearchMailbox() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanServerSearchMailbox(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanProposeNewTimeForMeetings() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanProposeNewTimeForMeetings(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities<D>::CanSmartSend() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities &>(static_cast<const D &>(*this))->get_CanSmartSend(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanResolveRecipients() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanResolveRecipients(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanValidateCertificates() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanValidateCertificates(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanEmptyFolder() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanEmptyFolder(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanCreateFolder() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanCreateFolder(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanDeleteFolder() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanDeleteFolder(&value));
    return value;
}

template <typename D> bool impl_IEmailMailboxCapabilities2<D>::CanMoveFolder() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxCapabilities2 &>(static_cast<const D &>(*this))->get_CanMoveFolder(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanForwardMeetings(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanForwardMeetings(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanGetAndSetExternalAutoReplies(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanGetAndSetExternalAutoReplies(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanGetAndSetInternalAutoReplies(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanGetAndSetInternalAutoReplies(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanUpdateMeetingResponses(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanUpdateMeetingResponses(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanServerSearchFolders(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanServerSearchFolders(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanServerSearchMailbox(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanServerSearchMailbox(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanProposeNewTimeForMeetings(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanProposeNewTimeForMeetings(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanSmartSend(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanSmartSend(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanResolveRecipients(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanResolveRecipients(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanValidateCertificates(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanValidateCertificates(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanEmptyFolder(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanEmptyFolder(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanCreateFolder(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanCreateFolder(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanDeleteFolder(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanDeleteFolder(value));
}

template <typename D> void impl_IEmailMailboxCapabilities3<D>::CanMoveFolder(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxCapabilities3 &>(static_cast<const D &>(*this))->put_CanMoveFolder(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxCapabilities impl_IEmailMailbox<D>::Capabilities() const
{
    Windows::ApplicationModel::Email::EmailMailboxCapabilities value { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_Capabilities(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeTracker impl_IEmailMailbox<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeTracker value { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailbox<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailbox<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IEmailMailbox<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailbox<D>::IsOwnedByCurrentApp() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_IsOwnedByCurrentApp(&value));
    return value;
}

template <typename D> bool impl_IEmailMailbox<D>::IsDataEncryptedUnderLock() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_IsDataEncryptedUnderLock(&value));
    return value;
}

template <typename D> hstring impl_IEmailMailbox<D>::MailAddress() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_MailAddress(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailbox<D>::MailAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->put_MailAddress(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IEmailMailbox<D>::MailAddressAliases() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_MailAddressAliases(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess impl_IEmailMailbox<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess value {};
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IEmailMailbox<D>::OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess value) const
{
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->put_OtherAppReadAccess(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess impl_IEmailMailbox<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess value {};
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_OtherAppWriteAccess(&value));
    return value;
}

template <typename D> void impl_IEmailMailbox<D>::OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess value) const
{
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->put_OtherAppWriteAccess(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxPolicies impl_IEmailMailbox<D>::Policies() const
{
    Windows::ApplicationModel::Email::EmailMailboxPolicies value { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_Policies(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailbox<D>::SourceDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_SourceDisplayName(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxSyncManager impl_IEmailMailbox<D>::SyncManager() const
{
    Windows::ApplicationModel::Email::EmailMailboxSyncManager value { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_SyncManager(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailbox<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailMailbox<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetConversationReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailMailbox<D>::GetConversationReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetConversationReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailMailbox<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetMessageReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailMailbox<D>::GetMessageReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetMessageReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> impl_IEmailMailbox<D>::GetConversationAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetConversationAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> impl_IEmailMailbox<D>::GetFolderAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetFolderAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> impl_IEmailMailbox<D>::GetMessageAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetMessageAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> impl_IEmailMailbox<D>::GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind folderType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_GetSpecialFolderAsync(folderType, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_SaveAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::MarkMessageAsSeenAsync(hstring_ref messageId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_MarkMessageAsSeenAsync(get(messageId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::MarkFolderAsSeenAsync(hstring_ref folderId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_MarkFolderAsSeenAsync(get(folderId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::MarkMessageReadAsync(hstring_ref messageId, bool isRead) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_MarkMessageReadAsync(get(messageId), isRead, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::ChangeMessageFlagStateAsync(hstring_ref messageId, Windows::ApplicationModel::Email::EmailFlagState flagState) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_ChangeMessageFlagStateAsync(get(messageId), flagState, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryMoveMessageAsync(hstring_ref messageId, hstring_ref newParentFolderId) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryMoveMessageAsync(get(messageId), get(newParentFolderId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryMoveFolderAsync(hstring_ref folderId, hstring_ref newParentFolderId) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryMoveFolderAsync(get(folderId), get(newParentFolderId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryMoveFolderAsync(hstring_ref folderId, hstring_ref newParentFolderId, hstring_ref newFolderName) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryMoveFolderWithNewNameAsync(get(folderId), get(newParentFolderId), get(newFolderName), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::DeleteMessageAsync(hstring_ref messageId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_DeleteMessageAsync(get(messageId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::MarkFolderSyncEnabledAsync(hstring_ref folderId, bool isSyncEnabled) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_MarkFolderSyncEnabledAsync(get(folderId), isSyncEnabled, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::SendMessageAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_SendMessageAsync(get(message), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::SaveDraftAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_SaveDraftAsync(get(message), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::DownloadMessageAsync(hstring_ref messageId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_DownloadMessageAsync(get(messageId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::DownloadAttachmentAsync(hstring_ref attachmentId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_DownloadAttachmentAsync(get(attachmentId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> impl_IEmailMailbox<D>::CreateResponseMessageAsync(hstring_ref messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind responseType, hstring_ref subject, Windows::ApplicationModel::Email::EmailMessageBodyKind responseHeaderType, hstring_ref responseHeader) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_CreateResponseMessageAsync(get(messageId), responseType, get(subject), responseHeaderType, get(responseHeader), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryUpdateMeetingResponseAsync(const Windows::ApplicationModel::Email::EmailMessage & meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType response, hstring_ref subject, hstring_ref comment, bool sendUpdate) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryUpdateMeetingResponseAsync(get(meeting), response, get(subject), get(comment), sendUpdate, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryForwardMeetingAsync(const Windows::ApplicationModel::Email::EmailMessage & meeting, const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient> & recipients, hstring_ref subject, Windows::ApplicationModel::Email::EmailMessageBodyKind forwardHeaderType, hstring_ref forwardHeader, hstring_ref comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryForwardMeetingAsync(get(meeting), get(recipients), get(subject), forwardHeaderType, get(forwardHeader), get(comment), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TryProposeNewTimeForMeetingAsync(const Windows::ApplicationModel::Email::EmailMessage & meeting, const Windows::Foundation::DateTime & newStartTime, const Windows::Foundation::TimeSpan & newDuration, hstring_ref subject, hstring_ref comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryProposeNewTimeForMeetingAsync(get(meeting), get(newStartTime), get(newDuration), get(subject), get(comment), put(result)));
    return result;
}

template <typename D> event_token impl_IEmailMailbox<D>::MailboxChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> & pHandler) const
{
    event_token pToken {};
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->add_MailboxChanged(get(pHandler), &pToken));
    return pToken;
}

template <typename D> event_revoker<IEmailMailbox> impl_IEmailMailbox<D>::MailboxChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> & pHandler) const
{
    return impl::make_event_revoker<D, IEmailMailbox>(this, &ABI::Windows::ApplicationModel::Email::IEmailMailbox::remove_MailboxChanged, MailboxChanged(pHandler));
}

template <typename D> void impl_IEmailMailbox<D>::MailboxChanged(event_token token) const
{
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->remove_MailboxChanged(token));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox<D>::SendMessageAsync(const Windows::ApplicationModel::Email::EmailMessage & message, bool smartSend) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_SmartSendMessageAsync(get(message), smartSend, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailbox<D>::TrySetAutoReplySettingsAsync(const Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings & autoReplySettings) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TrySetAutoReplySettingsAsync(get(autoReplySettings), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> impl_IEmailMailbox<D>::TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind requestedFormat) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> autoReplySettings;
    check_hresult(static_cast<const IEmailMailbox &>(static_cast<const D &>(*this))->abi_TryGetAutoReplySettingsAsync(requestedFormat, put(autoReplySettings)));
    return autoReplySettings;
}

template <typename D> hstring impl_IEmailMailbox2<D>::LinkedMailboxId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox2 &>(static_cast<const D &>(*this))->get_LinkedMailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailbox2<D>::NetworkAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox2 &>(static_cast<const D &>(*this))->get_NetworkAccountId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailMailbox2<D>::NetworkId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailbox2 &>(static_cast<const D &>(*this))->get_NetworkId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> impl_IEmailMailbox3<D>::ResolveRecipientsAsync(const Windows::Foundation::Collections::IIterable<hstring> & recipients) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> result;
    check_hresult(static_cast<const IEmailMailbox3 &>(static_cast<const D &>(*this))->abi_ResolveRecipientsAsync(get(recipients), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> impl_IEmailMailbox3<D>::ValidateCertificatesAsync(const Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> & certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> result;
    check_hresult(static_cast<const IEmailMailbox3 &>(static_cast<const D &>(*this))->abi_ValidateCertificatesAsync(get(certificates), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> impl_IEmailMailbox3<D>::TryEmptyFolderAsync(hstring_ref folderId) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> result;
    check_hresult(static_cast<const IEmailMailbox3 &>(static_cast<const D &>(*this))->abi_TryEmptyFolderAsync(get(folderId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> impl_IEmailMailbox3<D>::TryCreateFolderAsync(hstring_ref parentFolderId, hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> result;
    check_hresult(static_cast<const IEmailMailbox3 &>(static_cast<const D &>(*this))->abi_TryCreateFolderAsync(get(parentFolderId), get(name), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> impl_IEmailMailbox3<D>::TryDeleteFolderAsync(hstring_ref folderId) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> result;
    check_hresult(static_cast<const IEmailMailbox3 &>(static_cast<const D &>(*this))->abi_TryDeleteFolderAsync(get(folderId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailMailbox4<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailMailbox4 &>(static_cast<const D &>(*this))->abi_RegisterSyncManagerAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipientResolutionStatus impl_IEmailRecipientResolutionResult<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailRecipientResolutionStatus value {};
    check_hresult(static_cast<const IEmailRecipientResolutionResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IEmailRecipientResolutionResult<D>::PublicKeys() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IEmailRecipientResolutionResult &>(static_cast<const D &>(*this))->get_PublicKeys(put(value)));
    return value;
}

template <typename D> void impl_IEmailRecipientResolutionResult2<D>::Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus value) const
{
    check_hresult(static_cast<const IEmailRecipientResolutionResult2 &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> void impl_IEmailRecipientResolutionResult2<D>::SetPublicKeys(const Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> & value) const
{
    check_hresult(static_cast<const IEmailRecipientResolutionResult2 &>(static_cast<const D &>(*this))->abi_SetPublicKeys(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus impl_IEmailMailboxCreateFolderResult<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus value {};
    check_hresult(static_cast<const IEmailMailboxCreateFolderResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFolder impl_IEmailMailboxCreateFolderResult<D>::Folder() const
{
    Windows::ApplicationModel::Email::EmailFolder value { nullptr };
    check_hresult(static_cast<const IEmailMailboxCreateFolderResult &>(static_cast<const D &>(*this))->get_Folder(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailboxAutoReplySettings<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReplySettings<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind impl_IEmailMailboxAutoReplySettings<D>::ResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value {};
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_ResponseKind(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReplySettings<D>::ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->put_ResponseKind(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMailboxAutoReplySettings<D>::StartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReplySettings<D>::StartTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->put_StartTime(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMailboxAutoReplySettings<D>::EndTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_EndTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReplySettings<D>::EndTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->put_EndTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply impl_IEmailMailboxAutoReplySettings<D>::InternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value { nullptr };
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_InternalReply(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply impl_IEmailMailboxAutoReplySettings<D>::KnownExternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value { nullptr };
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_KnownExternalReply(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxAutoReply impl_IEmailMailboxAutoReplySettings<D>::UnknownExternalReply() const
{
    Windows::ApplicationModel::Email::EmailMailboxAutoReply value { nullptr };
    check_hresult(static_cast<const IEmailMailboxAutoReplySettings &>(static_cast<const D &>(*this))->get_UnknownExternalReply(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailboxAutoReply<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxAutoReply &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReply<D>::IsEnabled(bool value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReply &>(static_cast<const D &>(*this))->put_IsEnabled(value));
}

template <typename D> hstring impl_IEmailMailboxAutoReply<D>::Response() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMailboxAutoReply &>(static_cast<const D &>(*this))->get_Response(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailboxAutoReply<D>::Response(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMailboxAutoReply &>(static_cast<const D &>(*this))->put_Response(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxSyncStatus impl_IEmailMailboxSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailMailboxSyncStatus value {};
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEmailMailboxSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->get_LastSuccessfulSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEmailMailboxSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->get_LastAttemptedSyncTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailMailboxSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->abi_SyncAsync(put(result)));
    return result;
}

template <typename D> event_token impl_IEmailMailboxSyncManager<D>::SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->add_SyncStatusChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IEmailMailboxSyncManager> impl_IEmailMailboxSyncManager<D>::SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IEmailMailboxSyncManager>(this, &ABI::Windows::ApplicationModel::Email::IEmailMailboxSyncManager::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void impl_IEmailMailboxSyncManager<D>::SyncStatusChanged(event_token token) const
{
    check_hresult(static_cast<const IEmailMailboxSyncManager &>(static_cast<const D &>(*this))->remove_SyncStatusChanged(token));
}

template <typename D> void impl_IEmailMailboxSyncManager2<D>::Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus value) const
{
    check_hresult(static_cast<const IEmailMailboxSyncManager2 &>(static_cast<const D &>(*this))->put_Status(value));
}

template <typename D> void impl_IEmailMailboxSyncManager2<D>::LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IEmailMailboxSyncManager2 &>(static_cast<const D &>(*this))->put_LastSuccessfulSyncTime(get(value)));
}

template <typename D> void impl_IEmailMailboxSyncManager2<D>::LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IEmailMailboxSyncManager2 &>(static_cast<const D &>(*this))->put_LastAttemptedSyncTime(get(value)));
}

template <typename D> hstring impl_IEmailFolder<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailFolder<D>::RemoteId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_RemoteId(put(value)));
    return value;
}

template <typename D> void impl_IEmailFolder<D>::RemoteId(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->put_RemoteId(get(value)));
}

template <typename D> hstring impl_IEmailFolder<D>::MailboxId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_MailboxId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailFolder<D>::ParentFolderId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_ParentFolderId(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailFolder<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IEmailFolder<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> bool impl_IEmailFolder<D>::IsSyncEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_IsSyncEnabled(&value));
    return value;
}

template <typename D> void impl_IEmailFolder<D>::IsSyncEnabled(bool value) const
{
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->put_IsSyncEnabled(value));
}

template <typename D> Windows::Foundation::DateTime impl_IEmailFolder<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_LastSuccessfulSyncTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailFolder<D>::LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->put_LastSuccessfulSyncTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailSpecialFolderKind impl_IEmailFolder<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailSpecialFolderKind value {};
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> impl_IEmailFolder<D>::CreateFolderAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_CreateFolderAsync(get(name), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailFolder<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>> impl_IEmailFolder<D>::FindChildFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_FindChildFoldersAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailFolder<D>::GetConversationReader() const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetConversationReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailConversationReader impl_IEmailFolder<D>::GetConversationReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailConversationReader result { nullptr };
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetConversationReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> impl_IEmailFolder<D>::GetMessageAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetMessageAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailFolder<D>::GetMessageReader() const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetMessageReader(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageReader impl_IEmailFolder<D>::GetMessageReader(const Windows::ApplicationModel::Email::EmailQueryOptions & options) const
{
    Windows::ApplicationModel::Email::EmailMessageReader result { nullptr };
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetMessageReaderWithOptions(get(options), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts> impl_IEmailFolder<D>::GetMessageCountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_GetMessageCountsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailFolder<D>::TryMoveAsync(const Windows::ApplicationModel::Email::EmailFolder & newParentFolder) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_TryMoveAsync(get(newParentFolder), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailFolder<D>::TryMoveAsync(const Windows::ApplicationModel::Email::EmailFolder & newParentFolder, hstring_ref newFolderName) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_TryMoveWithNewNameAsync(get(newParentFolder), get(newFolderName), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IEmailFolder<D>::TrySaveAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_TrySaveAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IEmailFolder<D>::SaveMessageAsync(const Windows::ApplicationModel::Email::EmailMessage & message) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IEmailFolder &>(static_cast<const D &>(*this))->abi_SaveMessageAsync(get(message), put(result)));
    return result;
}

template <typename D> hstring impl_IEmailConversation<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailConversation<D>::MailboxId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_MailboxId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFlagState impl_IEmailConversation<D>::FlagState() const
{
    Windows::ApplicationModel::Email::EmailFlagState value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_FlagState(&value));
    return value;
}

template <typename D> bool impl_IEmailConversation<D>::HasAttachment() const
{
    bool value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_HasAttachment(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailImportance impl_IEmailConversation<D>::Importance() const
{
    Windows::ApplicationModel::Email::EmailImportance value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_Importance(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessageResponseKind impl_IEmailConversation<D>::LastEmailResponseKind() const
{
    Windows::ApplicationModel::Email::EmailMessageResponseKind value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_LastEmailResponseKind(&value));
    return value;
}

template <typename D> uint32_t impl_IEmailConversation<D>::MessageCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_MessageCount(&value));
    return value;
}

template <typename D> hstring impl_IEmailConversation<D>::MostRecentMessageId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_MostRecentMessageId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IEmailConversation<D>::MostRecentMessageTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_MostRecentMessageTime(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailConversation<D>::Preview() const
{
    hstring value;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_Preview(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailRecipient impl_IEmailConversation<D>::LatestSender() const
{
    Windows::ApplicationModel::Email::EmailRecipient value { nullptr };
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_LatestSender(put(value)));
    return value;
}

template <typename D> hstring impl_IEmailConversation<D>::Subject() const
{
    hstring value;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_Subject(put(value)));
    return value;
}

template <typename D> uint32_t impl_IEmailConversation<D>::UnreadMessageCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->get_UnreadMessageCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> impl_IEmailConversation<D>::FindMessagesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> result;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->abi_FindMessagesAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> impl_IEmailConversation<D>::FindMessagesAsync(uint32_t count) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> result;
    check_hresult(static_cast<const IEmailConversation &>(static_cast<const D &>(*this))->abi_FindMessagesWithCountAsync(count, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxActionKind impl_IEmailMailboxAction<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailMailboxActionKind value {};
    check_hresult(static_cast<const IEmailMailboxAction &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> uint64_t impl_IEmailMailboxAction<D>::ChangeNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IEmailMailboxAction &>(static_cast<const D &>(*this))->get_ChangeNumber(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySearchFields impl_IEmailQueryTextSearch<D>::Fields() const
{
    Windows::ApplicationModel::Email::EmailQuerySearchFields value {};
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->get_Fields(&value));
    return value;
}

template <typename D> void impl_IEmailQueryTextSearch<D>::Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields value) const
{
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->put_Fields(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySearchScope impl_IEmailQueryTextSearch<D>::SearchScope() const
{
    Windows::ApplicationModel::Email::EmailQuerySearchScope value {};
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->get_SearchScope(&value));
    return value;
}

template <typename D> void impl_IEmailQueryTextSearch<D>::SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope value) const
{
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->put_SearchScope(value));
}

template <typename D> hstring impl_IEmailQueryTextSearch<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> void impl_IEmailQueryTextSearch<D>::Text(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailQueryTextSearch &>(static_cast<const D &>(*this))->put_Text(get(value)));
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions impl_IEmailQueryOptionsFactory<D>::CreateWithText(hstring_ref text) const
{
    Windows::ApplicationModel::Email::EmailQueryOptions result { nullptr };
    check_hresult(static_cast<const IEmailQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithText(get(text), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryOptions impl_IEmailQueryOptionsFactory<D>::CreateWithTextAndFields(hstring_ref text, Windows::ApplicationModel::Email::EmailQuerySearchFields fields) const
{
    Windows::ApplicationModel::Email::EmailQueryOptions result { nullptr };
    check_hresult(static_cast<const IEmailQueryOptionsFactory &>(static_cast<const D &>(*this))->abi_CreateWithTextAndFields(get(text), fields, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryTextSearch impl_IEmailQueryOptions<D>::TextSearch() const
{
    Windows::ApplicationModel::Email::EmailQueryTextSearch value { nullptr };
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->get_TextSearch(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySortDirection impl_IEmailQueryOptions<D>::SortDirection() const
{
    Windows::ApplicationModel::Email::EmailQuerySortDirection value {};
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->get_SortDirection(&value));
    return value;
}

template <typename D> void impl_IEmailQueryOptions<D>::SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection value) const
{
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->put_SortDirection(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailQuerySortProperty impl_IEmailQueryOptions<D>::SortProperty() const
{
    Windows::ApplicationModel::Email::EmailQuerySortProperty value {};
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->get_SortProperty(&value));
    return value;
}

template <typename D> void impl_IEmailQueryOptions<D>::SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty value) const
{
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->put_SortProperty(value));
}

template <typename D> Windows::ApplicationModel::Email::EmailQueryKind impl_IEmailQueryOptions<D>::Kind() const
{
    Windows::ApplicationModel::Email::EmailQueryKind value {};
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> void impl_IEmailQueryOptions<D>::Kind(Windows::ApplicationModel::Email::EmailQueryKind value) const
{
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->put_Kind(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IEmailQueryOptions<D>::FolderIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IEmailQueryOptions &>(static_cast<const D &>(*this))->get_FolderIds(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation> impl_IEmailConversationBatch<D>::Conversations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation> value;
    check_hresult(static_cast<const IEmailConversationBatch &>(static_cast<const D &>(*this))->get_Conversations(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailBatchStatus impl_IEmailConversationBatch<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailBatchStatus value {};
    check_hresult(static_cast<const IEmailConversationBatch &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch> impl_IEmailConversationReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch> result;
    check_hresult(static_cast<const IEmailConversationReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage> impl_IEmailMessageBatch<D>::Messages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage> value;
    check_hresult(static_cast<const IEmailMessageBatch &>(static_cast<const D &>(*this))->get_Messages(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailBatchStatus impl_IEmailMessageBatch<D>::Status() const
{
    Windows::ApplicationModel::Email::EmailBatchStatus value {};
    check_hresult(static_cast<const IEmailMessageBatch &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch> impl_IEmailMessageReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch> result;
    check_hresult(static_cast<const IEmailMessageReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeType impl_IEmailMailboxChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeType value {};
    check_hresult(static_cast<const IEmailMailboxChange &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction> impl_IEmailMailboxChange<D>::MailboxActions() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction> value;
    check_hresult(static_cast<const IEmailMailboxChange &>(static_cast<const D &>(*this))->get_MailboxActions(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailMessage impl_IEmailMailboxChange<D>::Message() const
{
    Windows::ApplicationModel::Email::EmailMessage value { nullptr };
    check_hresult(static_cast<const IEmailMailboxChange &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Email::EmailFolder impl_IEmailMailboxChange<D>::Folder() const
{
    Windows::ApplicationModel::Email::EmailFolder value { nullptr };
    check_hresult(static_cast<const IEmailMailboxChange &>(static_cast<const D &>(*this))->get_Folder(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailboxChangeReader<D>::AcceptChanges() const
{
    check_hresult(static_cast<const IEmailMailboxChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChanges());
}

template <typename D> void impl_IEmailMailboxChangeReader<D>::AcceptChangesThrough(const Windows::ApplicationModel::Email::EmailMailboxChange & lastChangeToAcknowledge) const
{
    check_hresult(static_cast<const IEmailMailboxChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChangesThrough(get(lastChangeToAcknowledge)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>> impl_IEmailMailboxChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>> value;
    check_hresult(static_cast<const IEmailMailboxChangeReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(value)));
    return value;
}

template <typename D> bool impl_IEmailMailboxChangeTracker<D>::IsTracking() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMailboxChangeTracker &>(static_cast<const D &>(*this))->get_IsTracking(&value));
    return value;
}

template <typename D> void impl_IEmailMailboxChangeTracker<D>::Enable() const
{
    check_hresult(static_cast<const IEmailMailboxChangeTracker &>(static_cast<const D &>(*this))->abi_Enable());
}

template <typename D> Windows::ApplicationModel::Email::EmailMailboxChangeReader impl_IEmailMailboxChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Email::EmailMailboxChangeReader value { nullptr };
    check_hresult(static_cast<const IEmailMailboxChangeTracker &>(static_cast<const D &>(*this))->abi_GetChangeReader(put(value)));
    return value;
}

template <typename D> void impl_IEmailMailboxChangeTracker<D>::Reset() const
{
    check_hresult(static_cast<const IEmailMailboxChangeTracker &>(static_cast<const D &>(*this))->abi_Reset());
}

template <typename D> bool impl_IEmailMeetingInfo<D>::AllowNewTimeProposal() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_AllowNewTimeProposal(&value));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::AllowNewTimeProposal(bool value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_AllowNewTimeProposal(value));
}

template <typename D> hstring impl_IEmailMeetingInfo<D>::AppointmentRoamingId() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_AppointmentRoamingId(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::AppointmentRoamingId(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_AppointmentRoamingId(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMeetingInfo<D>::AppointmentOriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_AppointmentOriginalStartTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::AppointmentOriginalStartTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_AppointmentOriginalStartTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IEmailMeetingInfo<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::Duration(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_Duration(get(value)));
}

template <typename D> bool impl_IEmailMeetingInfo<D>::IsAllDay() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_IsAllDay(&value));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::IsAllDay(bool value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_IsAllDay(value));
}

template <typename D> bool impl_IEmailMeetingInfo<D>::IsResponseRequested() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_IsResponseRequested(&value));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::IsResponseRequested(bool value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_IsResponseRequested(value));
}

template <typename D> hstring impl_IEmailMeetingInfo<D>::Location() const
{
    hstring value;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_Location(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::Location(hstring_ref value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_Location(get(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMeetingInfo<D>::ProposedStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> proposedStartTime;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_ProposedStartTime(put(proposedStartTime)));
    return proposedStartTime;
}

template <typename D> void impl_IEmailMeetingInfo<D>::ProposedStartTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & proposedStartTime) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_ProposedStartTime(get(proposedStartTime)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IEmailMeetingInfo<D>::ProposedDuration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> duration;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_ProposedDuration(put(duration)));
    return duration;
}

template <typename D> void impl_IEmailMeetingInfo<D>::ProposedDuration(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & duration) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_ProposedDuration(get(duration)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IEmailMeetingInfo<D>::RecurrenceStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_RecurrenceStartTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::RecurrenceStartTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_RecurrenceStartTime(get(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrence impl_IEmailMeetingInfo<D>::Recurrence() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrence value { nullptr };
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_Recurrence(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::Recurrence(const Windows::ApplicationModel::Appointments::AppointmentRecurrence & value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_Recurrence(get(value)));
}

template <typename D> uint64_t impl_IEmailMeetingInfo<D>::RemoteChangeNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_RemoteChangeNumber(&value));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::RemoteChangeNumber(uint64_t value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_RemoteChangeNumber(value));
}

template <typename D> Windows::Foundation::DateTime impl_IEmailMeetingInfo<D>::StartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->get_StartTime(put(value)));
    return value;
}

template <typename D> void impl_IEmailMeetingInfo<D>::StartTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IEmailMeetingInfo &>(static_cast<const D &>(*this))->put_StartTime(get(value)));
}

template <typename D> bool impl_IEmailMeetingInfo2<D>::IsReportedOutOfDateByServer() const
{
    bool value {};
    check_hresult(static_cast<const IEmailMeetingInfo2 &>(static_cast<const D &>(*this))->get_IsReportedOutOfDateByServer(&value));
    return value;
}

template <typename D> uint32_t impl_IEmailItemCounts<D>::Flagged() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailItemCounts &>(static_cast<const D &>(*this))->get_Flagged(&value));
    return value;
}

template <typename D> uint32_t impl_IEmailItemCounts<D>::Important() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailItemCounts &>(static_cast<const D &>(*this))->get_Important(&value));
    return value;
}

template <typename D> uint32_t impl_IEmailItemCounts<D>::Total() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailItemCounts &>(static_cast<const D &>(*this))->get_Total(&value));
    return value;
}

template <typename D> uint32_t impl_IEmailItemCounts<D>::Unread() const
{
    uint32_t value {};
    check_hresult(static_cast<const IEmailItemCounts &>(static_cast<const D &>(*this))->get_Unread(&value));
    return value;
}

inline EmailAttachment::EmailAttachment() :
    EmailAttachment(activate_instance<EmailAttachment>())
{}

inline EmailAttachment::EmailAttachment(hstring_ref fileName, const Windows::Storage::Streams::IRandomAccessStreamReference & data) :
    EmailAttachment(get_activation_factory<EmailAttachment, IEmailAttachmentFactory>().Create(fileName, data))
{}

inline EmailAttachment::EmailAttachment(hstring_ref fileName, const Windows::Storage::Streams::IRandomAccessStreamReference & data, hstring_ref mimeType) :
    EmailAttachment(get_activation_factory<EmailAttachment, IEmailAttachmentFactory2>().Create(fileName, data, mimeType))
{}

inline EmailIrmInfo::EmailIrmInfo() :
    EmailIrmInfo(activate_instance<EmailIrmInfo>())
{}

inline EmailIrmInfo::EmailIrmInfo(const Windows::Foundation::DateTime & expiration, const Windows::ApplicationModel::Email::EmailIrmTemplate & irmTemplate) :
    EmailIrmInfo(get_activation_factory<EmailIrmInfo, IEmailIrmInfoFactory>().Create(expiration, irmTemplate))
{}

inline EmailIrmTemplate::EmailIrmTemplate() :
    EmailIrmTemplate(activate_instance<EmailIrmTemplate>())
{}

inline EmailIrmTemplate::EmailIrmTemplate(hstring_ref id, hstring_ref name, hstring_ref description) :
    EmailIrmTemplate(get_activation_factory<EmailIrmTemplate, IEmailIrmTemplateFactory>().Create(id, name, description))
{}

inline EmailMailboxAutoReplySettings::EmailMailboxAutoReplySettings() :
    EmailMailboxAutoReplySettings(activate_instance<EmailMailboxAutoReplySettings>())
{}

inline Windows::Foundation::IAsyncAction EmailManager::ShowComposeNewEmailAsync(const Windows::ApplicationModel::Email::EmailMessage & message)
{
    return get_activation_factory<EmailManager, IEmailManagerStatics>().ShowComposeNewEmailAsync(message);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> EmailManager::RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType)
{
    return get_activation_factory<EmailManager, IEmailManagerStatics2>().RequestStoreAsync(accessType);
}

inline Windows::ApplicationModel::Email::EmailManagerForUser EmailManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<EmailManager, IEmailManagerStatics3>().GetForUser(user);
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

inline EmailQueryOptions::EmailQueryOptions(hstring_ref text) :
    EmailQueryOptions(get_activation_factory<EmailQueryOptions, IEmailQueryOptionsFactory>().CreateWithText(text))
{}

inline EmailQueryOptions::EmailQueryOptions(hstring_ref text, Windows::ApplicationModel::Email::EmailQuerySearchFields fields) :
    EmailQueryOptions(get_activation_factory<EmailQueryOptions, IEmailQueryOptionsFactory>().CreateWithTextAndFields(text, fields))
{}

inline EmailRecipient::EmailRecipient() :
    EmailRecipient(activate_instance<EmailRecipient>())
{}

inline EmailRecipient::EmailRecipient(hstring_ref address) :
    EmailRecipient(get_activation_factory<EmailRecipient, IEmailRecipientFactory>().Create(address))
{}

inline EmailRecipient::EmailRecipient(hstring_ref address, hstring_ref name) :
    EmailRecipient(get_activation_factory<EmailRecipient, IEmailRecipientFactory>().CreateWithName(address, name))
{}

inline EmailRecipientResolutionResult::EmailRecipientResolutionResult() :
    EmailRecipientResolutionResult(activate_instance<EmailRecipientResolutionResult>())
{}

}

}
