// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.Notifications.0.h"
#include "winrt/impl/Windows.Web.0.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

struct WINRT_EBO IBackgroundDownloader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader>,
    impl::require<IBackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundDownloader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundDownloader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader2>
{
    IBackgroundDownloader2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundDownloader3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloader3>
{
    IBackgroundDownloader3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundDownloaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderFactory>
{
    IBackgroundDownloaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundDownloaderStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderStaticMethods>
{
    IBackgroundDownloaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundDownloaderStaticMethods2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderStaticMethods2>
{
    IBackgroundDownloaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IBackgroundDownloaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")]] IBackgroundDownloaderUserConsent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundDownloaderUserConsent>
{
    IBackgroundDownloaderUserConsent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferBase>
{
    IBackgroundTransferBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferCompletionGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferCompletionGroup>
{
    IBackgroundTransferCompletionGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferCompletionGroupTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferCompletionGroupTriggerDetails>
{
    IBackgroundTransferCompletionGroupTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferContentPart :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferContentPart>
{
    IBackgroundTransferContentPart(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferContentPartFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferContentPartFactory>
{
    IBackgroundTransferContentPartFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferErrorStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferErrorStaticMethods>
{
    IBackgroundTransferErrorStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferGroup>
{
    IBackgroundTransferGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferGroupStatics>
{
    IBackgroundTransferGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferOperation>
{
    IBackgroundTransferOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundTransferOperationPriority :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundTransferOperationPriority>
{
    IBackgroundTransferOperationPriority(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader>,
    impl::require<IBackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundUploader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader2>
{
    IBackgroundUploader2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploader3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploader3>
{
    IBackgroundUploader3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderFactory>
{
    IBackgroundUploaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploaderStaticMethods :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderStaticMethods>
{
    IBackgroundUploaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBackgroundUploaderStaticMethods2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderStaticMethods2>
{
    IBackgroundUploaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IBackgroundUploaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")]] IBackgroundUploaderUserConsent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundUploaderUserConsent>
{
    IBackgroundUploaderUserConsent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentPrefetcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetcher>
{
    IContentPrefetcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContentPrefetcherTime :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentPrefetcherTime>
{
    IContentPrefetcherTime(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDownloadOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadOperation>,
    impl::require<IDownloadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IDownloadOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDownloadOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadOperation2>
{
    IDownloadOperation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResponseInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResponseInformation>
{
    IResponseInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IUnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")]] IUnconstrainedTransferRequestResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUnconstrainedTransferRequestResult>
{
    IUnconstrainedTransferRequestResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUploadOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUploadOperation>,
    impl::require<IUploadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IUploadOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUploadOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUploadOperation2>
{
    IUploadOperation2(std::nullptr_t = nullptr) noexcept {}
};

}
