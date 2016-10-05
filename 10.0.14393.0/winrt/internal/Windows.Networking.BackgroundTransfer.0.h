// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::BackgroundTransfer {

struct BackgroundDownloadProgress;
struct BackgroundUploadProgress;

}

namespace Windows::Networking::BackgroundTransfer {

using BackgroundDownloadProgress = ABI::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress;
using BackgroundUploadProgress = ABI::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress;

}

namespace ABI::Windows::Networking::BackgroundTransfer {

struct IBackgroundDownloader;
struct IBackgroundDownloader2;
struct IBackgroundDownloader3;
struct IBackgroundDownloaderFactory;
struct IBackgroundDownloaderStaticMethods;
struct IBackgroundDownloaderStaticMethods2;
struct IBackgroundDownloaderUserConsent;
struct IBackgroundTransferBase;
struct IBackgroundTransferCompletionGroup;
struct IBackgroundTransferCompletionGroupTriggerDetails;
struct IBackgroundTransferContentPart;
struct IBackgroundTransferContentPartFactory;
struct IBackgroundTransferErrorStaticMethods;
struct IBackgroundTransferGroup;
struct IBackgroundTransferGroupStatics;
struct IBackgroundTransferOperation;
struct IBackgroundTransferOperationPriority;
struct IBackgroundUploader;
struct IBackgroundUploader2;
struct IBackgroundUploader3;
struct IBackgroundUploaderFactory;
struct IBackgroundUploaderStaticMethods;
struct IBackgroundUploaderStaticMethods2;
struct IBackgroundUploaderUserConsent;
struct IContentPrefetcher;
struct IContentPrefetcherTime;
struct IDownloadOperation;
struct IDownloadOperation2;
struct IResponseInformation;
struct IUnconstrainedTransferRequestResult;
struct IUploadOperation;
struct IUploadOperation2;
struct BackgroundDownloader;
struct BackgroundTransferCompletionGroup;
struct BackgroundTransferCompletionGroupTriggerDetails;
struct BackgroundTransferContentPart;
struct BackgroundTransferGroup;
struct BackgroundUploader;
struct DownloadOperation;
struct ResponseInformation;
struct UnconstrainedTransferRequestResult;
struct UploadOperation;

}

namespace Windows::Networking::BackgroundTransfer {

struct IBackgroundDownloader;
struct IBackgroundDownloader2;
struct IBackgroundDownloader3;
struct IBackgroundDownloaderFactory;
struct IBackgroundDownloaderStaticMethods;
struct IBackgroundDownloaderStaticMethods2;
struct IBackgroundDownloaderUserConsent;
struct IBackgroundTransferBase;
struct IBackgroundTransferCompletionGroup;
struct IBackgroundTransferCompletionGroupTriggerDetails;
struct IBackgroundTransferContentPart;
struct IBackgroundTransferContentPartFactory;
struct IBackgroundTransferErrorStaticMethods;
struct IBackgroundTransferGroup;
struct IBackgroundTransferGroupStatics;
struct IBackgroundTransferOperation;
struct IBackgroundTransferOperationPriority;
struct IBackgroundUploader;
struct IBackgroundUploader2;
struct IBackgroundUploader3;
struct IBackgroundUploaderFactory;
struct IBackgroundUploaderStaticMethods;
struct IBackgroundUploaderStaticMethods2;
struct IBackgroundUploaderUserConsent;
struct IContentPrefetcher;
struct IContentPrefetcherTime;
struct IDownloadOperation;
struct IDownloadOperation2;
struct IResponseInformation;
struct IUnconstrainedTransferRequestResult;
struct IUploadOperation;
struct IUploadOperation2;
struct BackgroundDownloader;
struct BackgroundTransferCompletionGroup;
struct BackgroundTransferCompletionGroupTriggerDetails;
struct BackgroundTransferContentPart;
struct BackgroundTransferError;
struct BackgroundTransferGroup;
struct BackgroundUploader;
struct ContentPrefetcher;
struct DownloadOperation;
struct ResponseInformation;
struct UnconstrainedTransferRequestResult;
struct UploadOperation;

}

namespace Windows::Networking::BackgroundTransfer {

enum class BackgroundTransferBehavior
{
    Parallel = 0,
    Serialized = 1,
};

enum class BackgroundTransferCostPolicy
{
    Default = 0,
    UnrestrictedOnly = 1,
    Always = 2,
};

enum class BackgroundTransferPriority
{
    Default = 0,
    High = 1,
};

enum class BackgroundTransferStatus
{
    Idle = 0,
    Running = 1,
    PausedByApplication = 2,
    PausedCostedNetwork = 3,
    PausedNoNetwork = 4,
    Completed = 5,
    Canceled = 6,
    Error = 7,
    PausedSystemPolicy = 32,
};

}

}
