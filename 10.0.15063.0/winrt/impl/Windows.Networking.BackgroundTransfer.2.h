// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Notifications.1.h"
#include "winrt/impl/Windows.Web.1.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.1.h"

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

struct BackgroundDownloadProgress
{
    uint64_t BytesReceived;
    uint64_t TotalBytesToReceive;
    Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
    bool HasResponseChanged;
    bool HasRestarted;
};

struct BackgroundUploadProgress
{
    uint64_t BytesReceived;
    uint64_t BytesSent;
    uint64_t TotalBytesToReceive;
    uint64_t TotalBytesToSend;
    Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
    bool HasResponseChanged;
    bool HasRestarted;
};

struct WINRT_EBO BackgroundDownloader :
    Windows::Networking::BackgroundTransfer::IBackgroundDownloader,
    impl::require<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
{
    BackgroundDownloader(std::nullptr_t) noexcept {}
    BackgroundDownloader();
    BackgroundDownloader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync();
    [[deprecated("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync(param::hstring const& group);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group);
    [[deprecated("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations);
};

struct WINRT_EBO BackgroundTransferCompletionGroup :
    Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup
{
    BackgroundTransferCompletionGroup(std::nullptr_t) noexcept {}
    BackgroundTransferCompletionGroup();
};

struct WINRT_EBO BackgroundTransferCompletionGroupTriggerDetails :
    Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails
{
    BackgroundTransferCompletionGroupTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BackgroundTransferContentPart :
    Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart
{
    BackgroundTransferContentPart(std::nullptr_t) noexcept {}
    BackgroundTransferContentPart();
    BackgroundTransferContentPart(param::hstring const& name);
    BackgroundTransferContentPart(param::hstring const& name, param::hstring const& fileName);
};

struct BackgroundTransferError
{
    BackgroundTransferError() = delete;
    static Windows::Web::WebErrorStatus GetStatus(int32_t hresult);
};

struct WINRT_EBO BackgroundTransferGroup :
    Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup
{
    BackgroundTransferGroup(std::nullptr_t) noexcept {}
    static Windows::Networking::BackgroundTransfer::BackgroundTransferGroup CreateGroup(param::hstring const& name);
};

struct WINRT_EBO BackgroundUploader :
    Windows::Networking::BackgroundTransfer::IBackgroundUploader,
    impl::require<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploader2, Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
{
    BackgroundUploader(std::nullptr_t) noexcept {}
    BackgroundUploader();
    BackgroundUploader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync();
    [[deprecated("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync(param::hstring const& group);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group);
    [[deprecated("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations);
};

struct ContentPrefetcher
{
    ContentPrefetcher() = delete;
    static Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ContentUris();
    static void IndirectContentUri(Windows::Foundation::Uri const& value);
    static Windows::Foundation::Uri IndirectContentUri();
    static Windows::Foundation::IReference<Windows::Foundation::DateTime> LastSuccessfulPrefetchTime();
};

struct WINRT_EBO DownloadOperation :
    Windows::Networking::BackgroundTransfer::IDownloadOperation,
    impl::require<DownloadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority, Windows::Networking::BackgroundTransfer::IDownloadOperation2>
{
    DownloadOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResponseInformation :
    Windows::Networking::BackgroundTransfer::IResponseInformation
{
    ResponseInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("UnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")]] UnconstrainedTransferRequestResult :
    Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult
{
    UnconstrainedTransferRequestResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UploadOperation :
    Windows::Networking::BackgroundTransfer::IUploadOperation,
    impl::require<UploadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority, Windows::Networking::BackgroundTransfer::IUploadOperation2>
{
    UploadOperation(std::nullptr_t) noexcept {}
};

}
