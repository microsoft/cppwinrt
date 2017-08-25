// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct IBackgroundTrigger;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

struct TileNotification;
struct ToastNotification;

}

WINRT_EXPORT namespace winrt::Windows::Web {

enum class WebErrorStatus;

}

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

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
struct BackgroundDownloadProgress;
struct BackgroundUploadProgress;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IContentPrefetcher>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IDownloadOperation2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IResponseInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::IUploadOperation2>{ using type = interface_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundDownloader>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferError>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundUploader>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::ContentPrefetcher>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::DownloadOperation>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::ResponseInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::UploadOperation>{ using type = class_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>{ using type = enum_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>{ using type = enum_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>{ using type = enum_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundTransferStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>{ using type = struct_category<uint64_t,uint64_t,Windows::Networking::BackgroundTransfer::BackgroundTransferStatus,bool,bool>; };
template <> struct category<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>{ using type = struct_category<uint64_t,uint64_t,uint64_t,uint64_t,Windows::Networking::BackgroundTransfer::BackgroundTransferStatus,bool,bool>; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader3" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferBase" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploader3" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IContentPrefetcher>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IContentPrefetcher" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IContentPrefetcherTime" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IDownloadOperation2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IDownloadOperation2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IResponseInformation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IResponseInformation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::IUploadOperation2>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.IUploadOperation2" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundDownloader>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundDownloader" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferError>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferError" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundUploader>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundUploader" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::ContentPrefetcher>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.ContentPrefetcher" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::DownloadOperation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.DownloadOperation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::ResponseInformation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.ResponseInformation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::UploadOperation>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.UploadOperation" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferBehavior" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferCostPolicy" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferPriority" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundTransferStatus>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundTransferStatus" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundDownloadProgress" }; };
template <> struct name<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>{ static constexpr auto & value{ L"Windows.Networking.BackgroundTransfer.BackgroundUploadProgress" }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>{ static constexpr GUID value{ 0xC1C79333,0x6649,0x4B1D,{ 0xA8,0x26,0xA4,0xB3,0xDD,0x23,0x4D,0x0B } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>{ static constexpr GUID value{ 0xA94A5847,0x348D,0x4A35,{ 0x89,0x0E,0x8A,0x1E,0xF3,0x79,0x84,0x79 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>{ static constexpr GUID value{ 0xD11A8C48,0x86E8,0x48E2,{ 0xB6,0x15,0x69,0x76,0xAA,0xBF,0x86,0x1D } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>{ static constexpr GUID value{ 0x26836C24,0xD89E,0x46F4,{ 0xA2,0x9A,0x4F,0x4D,0x4F,0x14,0x41,0x55 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>{ static constexpr GUID value{ 0x52A65A35,0xC64E,0x426C,{ 0x99,0x19,0x54,0x0D,0x0D,0x21,0xA6,0x50 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>{ static constexpr GUID value{ 0x2FAA1327,0x1AD4,0x4CA5,{ 0xB2,0xCD,0x08,0xDB,0xF0,0x74,0x6A,0xFE } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>{ static constexpr GUID value{ 0x5D14E906,0x9266,0x4808,{ 0xBD,0x71,0x59,0x25,0xF2,0xA3,0x13,0x0A } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>{ static constexpr GUID value{ 0x2A9DA250,0xC769,0x458C,{ 0xAF,0xE8,0xFE,0xB8,0xD4,0xD3,0xB2,0xEF } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>{ static constexpr GUID value{ 0x2D930225,0x986B,0x574D,{ 0x79,0x50,0x0A,0xDD,0x47,0xF5,0xD7,0x06 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>{ static constexpr GUID value{ 0x7B6BE286,0x6E47,0x5136,{ 0x7F,0xCB,0xFA,0x43,0x89,0xF4,0x6F,0x5B } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>{ static constexpr GUID value{ 0xE8E15657,0xD7D1,0x4ED8,{ 0x83,0x8E,0x67,0x4A,0xC2,0x17,0xAC,0xE6 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>{ static constexpr GUID value{ 0x90EF98A9,0x7A01,0x4A0B,{ 0x9F,0x80,0xA0,0xB0,0xBB,0x37,0x0F,0x8D } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>{ static constexpr GUID value{ 0xAAD33B04,0x1192,0x4BF4,{ 0x8B,0x68,0x39,0xC5,0xAD,0xD2,0x44,0xE2 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>{ static constexpr GUID value{ 0xD8C3E3E4,0x6459,0x4540,{ 0x85,0xEB,0xAA,0xA1,0xC8,0x90,0x36,0x77 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>{ static constexpr GUID value{ 0x02EC50B2,0x7D18,0x495B,{ 0xAA,0x22,0x32,0xA9,0x7D,0x45,0xD3,0xE2 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>{ static constexpr GUID value{ 0xDED06846,0x90CA,0x44FB,{ 0x8F,0xB1,0x12,0x41,0x54,0xC0,0xD5,0x39 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>{ static constexpr GUID value{ 0x04854327,0x5254,0x4B3A,{ 0x91,0x5E,0x0A,0xA4,0x92,0x75,0xC0,0xF9 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploader>{ static constexpr GUID value{ 0xC595C9AE,0xCEAD,0x465B,{ 0x88,0x01,0xC5,0x5A,0xC9,0x0A,0x01,0xCE } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>{ static constexpr GUID value{ 0x8E0612CE,0x0C34,0x4463,{ 0x80,0x7F,0x19,0x8A,0x1B,0x8B,0xD4,0xAD } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>{ static constexpr GUID value{ 0xB95E9439,0x5BF0,0x4B3A,{ 0x8C,0x47,0x2C,0x61,0x99,0xA8,0x54,0xB9 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>{ static constexpr GUID value{ 0x736203C7,0x10E7,0x48A0,{ 0xAC,0x3C,0x1A,0xC7,0x10,0x95,0xEC,0x57 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>{ static constexpr GUID value{ 0xF2875CFB,0x9B05,0x4741,{ 0x91,0x21,0x74,0x0A,0x83,0xE2,0x47,0xDF } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>{ static constexpr GUID value{ 0xE919AC62,0xEA08,0x42F0,{ 0xA2,0xAC,0x07,0xE4,0x67,0x54,0x90,0x80 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>{ static constexpr GUID value{ 0x3BB384CB,0x0760,0x461D,{ 0x90,0x7F,0x51,0x38,0xF8,0x4D,0x44,0xC1 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IContentPrefetcher>{ static constexpr GUID value{ 0xA8D6F754,0x7DC1,0x4CD9,{ 0x88,0x10,0x2A,0x6A,0xA9,0x41,0x7E,0x11 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>{ static constexpr GUID value{ 0xE361FD08,0x132A,0x4FDE,{ 0xA7,0xCC,0xFC,0xB0,0xE6,0x65,0x23,0xAF } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IDownloadOperation>{ static constexpr GUID value{ 0xBD87EBB0,0x5714,0x4E09,{ 0xBA,0x68,0xBE,0xF7,0x39,0x03,0xB0,0xD7 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IDownloadOperation2>{ static constexpr GUID value{ 0xA3CCED40,0x8F9C,0x4353,{ 0x9C,0xD4,0x29,0x0D,0xEE,0x38,0x7C,0x38 } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IResponseInformation>{ static constexpr GUID value{ 0xF8BB9A12,0xF713,0x4792,{ 0x8B,0x68,0xD9,0xD2,0x97,0xF9,0x1D,0x2E } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>{ static constexpr GUID value{ 0x4C24B81F,0xD944,0x4112,{ 0xA9,0x8E,0x6A,0x69,0x52,0x2B,0x7E,0xBB } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IUploadOperation>{ static constexpr GUID value{ 0x3E5624E0,0x7389,0x434C,{ 0x8B,0x35,0x42,0x7F,0xD3,0x6B,0xBD,0xAE } }; };
template <> struct guid<Windows::Networking::BackgroundTransfer::IUploadOperation2>{ static constexpr GUID value{ 0x556189F2,0x2774,0x4DF6,{ 0x9F,0xA5,0x20,0x9F,0x2B,0xFB,0x12,0xF7 } }; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundDownloader>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundDownloader; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::BackgroundUploader>{ using type = Windows::Networking::BackgroundTransfer::IBackgroundUploader; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::DownloadOperation>{ using type = Windows::Networking::BackgroundTransfer::IDownloadOperation; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::ResponseInformation>{ using type = Windows::Networking::BackgroundTransfer::IResponseInformation; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>{ using type = Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult; };
template <> struct default_interface<Windows::Networking::BackgroundTransfer::UploadOperation>{ using type = Windows::Networking::BackgroundTransfer::IUploadOperation; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader
{
    Windows::Networking::BackgroundTransfer::DownloadOperation CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile) const;
    Windows::Networking::BackgroundTransfer::DownloadOperation CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::IStorageFile const& requestBodyFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> CreateDownloadAsync(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::Streams::IInputStream const& requestBodyStream) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
    void TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const;
    Windows::UI::Notifications::ToastNotification SuccessToastNotification() const;
    void SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
    Windows::UI::Notifications::ToastNotification FailureToastNotification() const;
    void FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
    Windows::UI::Notifications::TileNotification SuccessTileNotification() const;
    void SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
    Windows::UI::Notifications::TileNotification FailureTileNotification() const;
    void FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup CompletionGroup() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloader CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync() const;
    [[deprecated("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync(param::hstring const& group) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent
{
    [[deprecated("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase
{
    void SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
    Windows::Security::Credentials::PasswordCredential ServerCredential() const;
    void ServerCredential(Windows::Security::Credentials::PasswordCredential const& credential) const;
    Windows::Security::Credentials::PasswordCredential ProxyCredential() const;
    void ProxyCredential(Windows::Security::Credentials::PasswordCredential const& credential) const;
    hstring Method() const;
    void Method(param::hstring const& value) const;
    [[deprecated("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")]] hstring Group() const;
    [[deprecated("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")]] void Group(param::hstring const& value) const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy CostPolicy() const;
    void CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup
{
    Windows::ApplicationModel::Background::IBackgroundTrigger Trigger() const;
    bool IsEnabled() const;
    void Enable() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> Downloads() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> Uploads() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart
{
    void SetHeader(param::hstring const& headerName, param::hstring const& headerValue) const;
    void SetText(param::hstring const& value) const;
    void SetFile(Windows::Storage::IStorageFile const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart CreateWithName(param::hstring const& name) const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart CreateWithNameAndFileName(param::hstring const& name, param::hstring const& fileName) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods
{
    Windows::Web::WebErrorStatus GetStatus(int32_t hresult) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup
{
    hstring Name() const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior TransferBehavior() const;
    void TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup CreateGroup(param::hstring const& name) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation
{
    GUID Guid() const;
    Windows::Foundation::Uri RequestedUri() const;
    hstring Method() const;
    [[deprecated("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")]] hstring Group() const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy CostPolicy() const;
    void CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const;
    Windows::Storage::Streams::IInputStream GetResultStreamAt(uint64_t position) const;
    Windows::Networking::BackgroundTransfer::ResponseInformation GetResponseInformation() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferPriority Priority() const;
    void Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader
{
    Windows::Networking::BackgroundTransfer::UploadOperation CreateUpload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& sourceFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadFromStreamAsync(Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IInputStream const& sourceStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType, param::hstring const& boundary) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
    void TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const;
    Windows::UI::Notifications::ToastNotification SuccessToastNotification() const;
    void SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
    Windows::UI::Notifications::ToastNotification FailureToastNotification() const;
    void FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const;
    Windows::UI::Notifications::TileNotification SuccessTileNotification() const;
    void SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
    Windows::UI::Notifications::TileNotification FailureTileNotification() const;
    void FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup CompletionGroup() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploader3> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundUploader CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync() const;
    [[deprecated("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync(param::hstring const& group) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent
{
    [[deprecated("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations) const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ContentUris() const;
    void IndirectContentUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri IndirectContentUri() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IContentPrefetcher> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> LastSuccessfulPrefetchTime() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation
{
    Windows::Storage::IStorageFile ResultFile() const;
    Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress Progress() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> StartAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> AttachAsync() const;
    void Pause() const;
    void Resume() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IDownloadOperation2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IResponseInformation
{
    bool IsResumable() const;
    Windows::Foundation::Uri ActualUri() const;
    uint32_t StatusCode() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> Headers() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IResponseInformation> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult
{
    [[deprecated("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")]] bool IsUnconstrained() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation
{
    Windows::Storage::IStorageFile SourceFile() const;
    Windows::Networking::BackgroundTransfer::BackgroundUploadProgress Progress() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> StartAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> AttachAsync() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>; };

template <typename D>
struct consume_Windows_Networking_BackgroundTransfer_IUploadOperation2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
};
template <> struct consume<Windows::Networking::BackgroundTransfer::IUploadOperation2> { template <typename D> using type = consume_Windows_Networking_BackgroundTransfer_IUploadOperation2<D>; };

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDownload(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateDownloadFromFile(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown* requestBodyFile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateDownloadAsync(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown* requestBodyStream, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TransferGroup(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SuccessToastNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuccessToastNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FailureToastNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FailureToastNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SuccessTileNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuccessTileNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FailureTileNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FailureTileNotification(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompletionGroup(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithCompletionGroup(::IUnknown* completionGroup, ::IUnknown** backgroundDownloader) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentDownloadsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCurrentDownloadsForGroupAsync(HSTRING group, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentDownloadsForTransferGroupAsync(::IUnknown* group, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestUnconstrainedDownloadsAsync(::IUnknown* operations, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetRequestHeader(HSTRING headerName, HSTRING headerValue) = 0;
    virtual HRESULT __stdcall get_ServerCredential(::IUnknown** credential) = 0;
    virtual HRESULT __stdcall put_ServerCredential(::IUnknown* credential) = 0;
    virtual HRESULT __stdcall get_ProxyCredential(::IUnknown** credential) = 0;
    virtual HRESULT __stdcall put_ProxyCredential(::IUnknown* credential) = 0;
    virtual HRESULT __stdcall get_Method(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Method(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Group(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Group(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>* value) = 0;
    virtual HRESULT __stdcall put_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy> value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Trigger(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall Enable() = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Downloads(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Uploads(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetHeader(HSTRING headerName, HSTRING headerValue) = 0;
    virtual HRESULT __stdcall SetText(HSTRING value) = 0;
    virtual HRESULT __stdcall SetFile(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithName(HSTRING name, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateWithNameAndFileName(HSTRING name, HSTRING fileName, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::WebErrorStatus>* status) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TransferBehavior(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>* value) = 0;
    virtual HRESULT __stdcall put_TransferBehavior(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior> value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateGroup(HSTRING name, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Guid(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_RequestedUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Method(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Group(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>* value) = 0;
    virtual HRESULT __stdcall put_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy> value) = 0;
    virtual HRESULT __stdcall GetResultStreamAt(uint64_t position, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetResponseInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Priority(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>* value) = 0;
    virtual HRESULT __stdcall put_Priority(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority> value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateUpload(::IUnknown* uri, ::IUnknown* sourceFile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateUploadFromStreamAsync(::IUnknown* uri, ::IUnknown* sourceStream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateUploadWithFormDataAndAutoBoundaryAsync(::IUnknown* uri, ::IUnknown* parts, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateUploadWithSubTypeAsync(::IUnknown* uri, ::IUnknown* parts, HSTRING subType, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateUploadWithSubTypeAndBoundaryAsync(::IUnknown* uri, ::IUnknown* parts, HSTRING subType, HSTRING boundary, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TransferGroup(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SuccessToastNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuccessToastNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FailureToastNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FailureToastNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SuccessTileNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuccessTileNotification(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FailureTileNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FailureTileNotification(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompletionGroup(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithCompletionGroup(::IUnknown* completionGroup, ::IUnknown** backgroundUploader) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentUploadsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCurrentUploadsForGroupAsync(HSTRING group, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentUploadsForTransferGroupAsync(::IUnknown* group, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestUnconstrainedUploadsAsync(::IUnknown* operations, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IContentPrefetcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentUris(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IndirectContentUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IndirectContentUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastSuccessfulPrefetchTime(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResultFile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Progress(abi_t<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>* value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AttachAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall Resume() = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IDownloadOperation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IResponseInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsResumable(bool* value) = 0;
    virtual HRESULT __stdcall get_ActualUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StatusCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Headers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsUnconstrained(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourceFile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Progress(abi_t<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>* value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AttachAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::BackgroundTransfer::IUploadOperation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(::IUnknown** value) = 0;
};};

}
