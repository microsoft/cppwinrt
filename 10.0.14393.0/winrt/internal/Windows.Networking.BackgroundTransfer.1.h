// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Networking.BackgroundTransfer.0.h"
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.Notifications.0.h"
#include "Windows.Web.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking::BackgroundTransfer {

struct BackgroundDownloadProgress
{
    uint64_t BytesReceived;
    uint64_t TotalBytesToReceive;
    winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
    bool HasResponseChanged;
    bool HasRestarted;
};

struct BackgroundUploadProgress
{
    uint64_t BytesReceived;
    uint64_t BytesSent;
    uint64_t TotalBytesToReceive;
    uint64_t TotalBytesToSend;
    winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
    bool HasResponseChanged;
    bool HasRestarted;
};

}

namespace Windows::Networking::BackgroundTransfer {

using BackgroundDownloadProgress = ABI::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress;
using BackgroundUploadProgress = ABI::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress;

}

namespace ABI::Windows::Networking::BackgroundTransfer {

struct __declspec(uuid("c1c79333-6649-4b1d-a826-a4b3dd234d0b")) __declspec(novtable) IBackgroundDownloader : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateDownload(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::IStorageFile * resultFile, Windows::Networking::BackgroundTransfer::IDownloadOperation ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateDownloadFromFile(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::IStorageFile * resultFile, Windows::Storage::IStorageFile * requestBodyFile, Windows::Networking::BackgroundTransfer::IDownloadOperation ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateDownloadAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::IStorageFile * resultFile, Windows::Storage::Streams::IInputStream * requestBodyStream, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> ** operation) = 0;
};

struct __declspec(uuid("a94a5847-348d-4a35-890e-8a1ef3798479")) __declspec(novtable) IBackgroundDownloader2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup ** value) = 0;
    virtual HRESULT __stdcall put_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * value) = 0;
    virtual HRESULT __stdcall get_SuccessToastNotification(Windows::UI::Notifications::IToastNotification ** value) = 0;
    virtual HRESULT __stdcall put_SuccessToastNotification(Windows::UI::Notifications::IToastNotification * value) = 0;
    virtual HRESULT __stdcall get_FailureToastNotification(Windows::UI::Notifications::IToastNotification ** value) = 0;
    virtual HRESULT __stdcall put_FailureToastNotification(Windows::UI::Notifications::IToastNotification * value) = 0;
    virtual HRESULT __stdcall get_SuccessTileNotification(Windows::UI::Notifications::ITileNotification ** value) = 0;
    virtual HRESULT __stdcall put_SuccessTileNotification(Windows::UI::Notifications::ITileNotification * value) = 0;
    virtual HRESULT __stdcall get_FailureTileNotification(Windows::UI::Notifications::ITileNotification ** value) = 0;
    virtual HRESULT __stdcall put_FailureTileNotification(Windows::UI::Notifications::ITileNotification * value) = 0;
};

struct __declspec(uuid("d11a8c48-86e8-48e2-b615-6976aabf861d")) __declspec(novtable) IBackgroundDownloader3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CompletionGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup ** value) = 0;
};

struct __declspec(uuid("26836c24-d89e-46f4-a29a-4f4d4f144155")) __declspec(novtable) IBackgroundDownloaderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * completionGroup, Windows::Networking::BackgroundTransfer::IBackgroundDownloader ** backgroundDownloader) = 0;
};

struct __declspec(uuid("52a65a35-c64e-426c-9919-540d0d21a650")) __declspec(novtable) IBackgroundDownloaderStaticMethods : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentDownloadsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCurrentDownloadsForGroupAsync(hstring group, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> ** operation) = 0;
};

struct __declspec(uuid("2faa1327-1ad4-4ca5-b2cd-08dbf0746afe")) __declspec(novtable) IBackgroundDownloaderStaticMethods2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * group, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> ** operation) = 0;
};

struct __declspec(uuid("5d14e906-9266-4808-bd71-5925f2a3130a")) __declspec(novtable) IBackgroundDownloaderUserConsent : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestUnconstrainedDownloadsAsync(Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> * operations, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> ** operation) = 0;
};

struct __declspec(uuid("2a9da250-c769-458c-afe8-feb8d4d3b2ef")) __declspec(novtable) IBackgroundTransferBase : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetRequestHeader(hstring headerName, hstring headerValue) = 0;
    virtual HRESULT __stdcall get_ServerCredential(Windows::Security::Credentials::IPasswordCredential ** credential) = 0;
    virtual HRESULT __stdcall put_ServerCredential(Windows::Security::Credentials::IPasswordCredential * credential) = 0;
    virtual HRESULT __stdcall get_ProxyCredential(Windows::Security::Credentials::IPasswordCredential ** credential) = 0;
    virtual HRESULT __stdcall put_ProxyCredential(Windows::Security::Credentials::IPasswordCredential * credential) = 0;
    virtual HRESULT __stdcall get_Method(hstring * value) = 0;
    virtual HRESULT __stdcall put_Method(hstring value) = 0;
    virtual HRESULT __stdcall get_Group(hstring * value) = 0;
    virtual HRESULT __stdcall put_Group(hstring value) = 0;
    virtual HRESULT __stdcall get_CostPolicy(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy * value) = 0;
    virtual HRESULT __stdcall put_CostPolicy(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) = 0;
};

struct __declspec(uuid("2d930225-986b-574d-7950-0add47f5d706")) __declspec(novtable) IBackgroundTransferCompletionGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Trigger(Windows::ApplicationModel::Background::IBackgroundTrigger ** value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall abi_Enable() = 0;
};

struct __declspec(uuid("7b6be286-6e47-5136-7fcb-fa4389f46f5b")) __declspec(novtable) IBackgroundTransferCompletionGroupTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Downloads(Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> ** value) = 0;
    virtual HRESULT __stdcall get_Uploads(Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> ** value) = 0;
};

struct __declspec(uuid("e8e15657-d7d1-4ed8-838e-674ac217ace6")) __declspec(novtable) IBackgroundTransferContentPart : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetHeader(hstring headerName, hstring headerValue) = 0;
    virtual HRESULT __stdcall abi_SetText(hstring value) = 0;
    virtual HRESULT __stdcall abi_SetFile(Windows::Storage::IStorageFile * value) = 0;
};

struct __declspec(uuid("90ef98a9-7a01-4a0b-9f80-a0b0bb370f8d")) __declspec(novtable) IBackgroundTransferContentPartFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithName(hstring name, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithNameAndFileName(hstring name, hstring fileName, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart ** value) = 0;
};

struct __declspec(uuid("aad33b04-1192-4bf4-8b68-39c5add244e2")) __declspec(novtable) IBackgroundTransferErrorStaticMethods : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetStatus(int32_t hresult, winrt::Windows::Web::WebErrorStatus * status) = 0;
};

struct __declspec(uuid("d8c3e3e4-6459-4540-85eb-aaa1c8903677")) __declspec(novtable) IBackgroundTransferGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_TransferBehavior(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior * value) = 0;
    virtual HRESULT __stdcall put_TransferBehavior(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value) = 0;
};

struct __declspec(uuid("02ec50b2-7d18-495b-aa22-32a97d45d3e2")) __declspec(novtable) IBackgroundTransferGroupStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateGroup(hstring name, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup ** value) = 0;
};

struct __declspec(uuid("ded06846-90ca-44fb-8fb1-124154c0d539")) __declspec(novtable) IBackgroundTransferOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Guid(GUID * value) = 0;
    virtual HRESULT __stdcall get_RequestedUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_Method(hstring * value) = 0;
    virtual HRESULT __stdcall get_Group(hstring * value) = 0;
    virtual HRESULT __stdcall get_CostPolicy(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy * value) = 0;
    virtual HRESULT __stdcall put_CostPolicy(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) = 0;
    virtual HRESULT __stdcall abi_GetResultStreamAt(uint64_t position, Windows::Storage::Streams::IInputStream ** value) = 0;
    virtual HRESULT __stdcall abi_GetResponseInformation(Windows::Networking::BackgroundTransfer::IResponseInformation ** value) = 0;
};

struct __declspec(uuid("04854327-5254-4b3a-915e-0aa49275c0f9")) __declspec(novtable) IBackgroundTransferOperationPriority : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Priority(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferPriority * value) = 0;
    virtual HRESULT __stdcall put_Priority(winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value) = 0;
};

struct __declspec(uuid("c595c9ae-cead-465b-8801-c55ac90a01ce")) __declspec(novtable) IBackgroundUploader : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateUpload(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::IStorageFile * sourceFile, Windows::Networking::BackgroundTransfer::IUploadOperation ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateUploadFromStreamAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::Streams::IInputStream * sourceStream, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateUploadWithFormDataAndAutoBoundaryAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> * parts, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateUploadWithSubTypeAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> * parts, hstring subType, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateUploadWithSubTypeAndBoundaryAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> * parts, hstring subType, hstring boundary, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
};

struct __declspec(uuid("8e0612ce-0c34-4463-807f-198a1b8bd4ad")) __declspec(novtable) IBackgroundUploader2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup ** value) = 0;
    virtual HRESULT __stdcall put_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * value) = 0;
    virtual HRESULT __stdcall get_SuccessToastNotification(Windows::UI::Notifications::IToastNotification ** value) = 0;
    virtual HRESULT __stdcall put_SuccessToastNotification(Windows::UI::Notifications::IToastNotification * value) = 0;
    virtual HRESULT __stdcall get_FailureToastNotification(Windows::UI::Notifications::IToastNotification ** value) = 0;
    virtual HRESULT __stdcall put_FailureToastNotification(Windows::UI::Notifications::IToastNotification * value) = 0;
    virtual HRESULT __stdcall get_SuccessTileNotification(Windows::UI::Notifications::ITileNotification ** value) = 0;
    virtual HRESULT __stdcall put_SuccessTileNotification(Windows::UI::Notifications::ITileNotification * value) = 0;
    virtual HRESULT __stdcall get_FailureTileNotification(Windows::UI::Notifications::ITileNotification ** value) = 0;
    virtual HRESULT __stdcall put_FailureTileNotification(Windows::UI::Notifications::ITileNotification * value) = 0;
};

struct __declspec(uuid("b95e9439-5bf0-4b3a-8c47-2c6199a854b9")) __declspec(novtable) IBackgroundUploader3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CompletionGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup ** value) = 0;
};

struct __declspec(uuid("736203c7-10e7-48a0-ac3c-1ac71095ec57")) __declspec(novtable) IBackgroundUploaderFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * completionGroup, Windows::Networking::BackgroundTransfer::IBackgroundUploader ** backgroundUploader) = 0;
};

struct __declspec(uuid("f2875cfb-9b05-4741-9121-740a83e247df")) __declspec(novtable) IBackgroundUploaderStaticMethods : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentUploadsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCurrentUploadsForGroupAsync(hstring group, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> ** operation) = 0;
};

struct __declspec(uuid("e919ac62-ea08-42f0-a2ac-07e467549080")) __declspec(novtable) IBackgroundUploaderStaticMethods2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * group, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> ** operation) = 0;
};

struct __declspec(uuid("3bb384cb-0760-461d-907f-5138f84d44c1")) __declspec(novtable) IBackgroundUploaderUserConsent : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestUnconstrainedUploadsAsync(Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> * operations, Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> ** operation) = 0;
};

struct __declspec(uuid("a8d6f754-7dc1-4cd9-8810-2a6aa9417e11")) __declspec(novtable) IContentPrefetcher : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContentUris(Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ** value) = 0;
    virtual HRESULT __stdcall put_IndirectContentUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_IndirectContentUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("e361fd08-132a-4fde-a7cc-fcb0e66523af")) __declspec(novtable) IContentPrefetcherTime : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LastSuccessfulPrefetchTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
};

struct __declspec(uuid("bd87ebb0-5714-4e09-ba68-bef73903b0d7")) __declspec(novtable) IDownloadOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResultFile(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall get_Progress(Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress * value) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_AttachAsync(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
};

struct __declspec(uuid("a3cced40-8f9c-4353-9cd4-290dee387c38")) __declspec(novtable) IDownloadOperation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup ** value) = 0;
};

struct __declspec(uuid("f8bb9a12-f713-4792-8b68-d9d297f91d2e")) __declspec(novtable) IResponseInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsResumable(bool * value) = 0;
    virtual HRESULT __stdcall get_ActualUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_StatusCode(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Headers(Windows::Foundation::Collections::IMapView<hstring, hstring> ** value) = 0;
};

struct __declspec(uuid("4c24b81f-d944-4112-a98e-6a69522b7ebb")) __declspec(novtable) IUnconstrainedTransferRequestResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsUnconstrained(bool * value) = 0;
};

struct __declspec(uuid("3e5624e0-7389-434c-8b35-427fd36bbdae")) __declspec(novtable) IUploadOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SourceFile(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall get_Progress(Windows::Networking::BackgroundTransfer::BackgroundUploadProgress * value) = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
    virtual HRESULT __stdcall abi_AttachAsync(Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> ** operation) = 0;
};

struct __declspec(uuid("556189f2-2774-4df6-9fa5-209f2bfb12f7")) __declspec(novtable) IUploadOperation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TransferGroup(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundDownloader> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundDownloader; };
template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup; };
template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails; };
template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart; };
template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup; };
template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundUploader> { using default_interface = Windows::Networking::BackgroundTransfer::IBackgroundUploader; };
template <> struct traits<Windows::Networking::BackgroundTransfer::DownloadOperation> { using default_interface = Windows::Networking::BackgroundTransfer::IDownloadOperation; };
template <> struct traits<Windows::Networking::BackgroundTransfer::ResponseInformation> { using default_interface = Windows::Networking::BackgroundTransfer::IResponseInformation; };
template <> struct traits<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> { using default_interface = Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult; };
template <> struct traits<Windows::Networking::BackgroundTransfer::UploadOperation> { using default_interface = Windows::Networking::BackgroundTransfer::IUploadOperation; };

}

namespace Windows::Networking::BackgroundTransfer {

template <typename T> struct impl_IBackgroundDownloader;
template <typename T> struct impl_IBackgroundDownloader2;
template <typename T> struct impl_IBackgroundDownloader3;
template <typename T> struct impl_IBackgroundDownloaderFactory;
template <typename T> struct impl_IBackgroundDownloaderStaticMethods;
template <typename T> struct impl_IBackgroundDownloaderStaticMethods2;
template <typename T> struct impl_IBackgroundDownloaderUserConsent;
template <typename T> struct impl_IBackgroundTransferBase;
template <typename T> struct impl_IBackgroundTransferCompletionGroup;
template <typename T> struct impl_IBackgroundTransferCompletionGroupTriggerDetails;
template <typename T> struct impl_IBackgroundTransferContentPart;
template <typename T> struct impl_IBackgroundTransferContentPartFactory;
template <typename T> struct impl_IBackgroundTransferErrorStaticMethods;
template <typename T> struct impl_IBackgroundTransferGroup;
template <typename T> struct impl_IBackgroundTransferGroupStatics;
template <typename T> struct impl_IBackgroundTransferOperation;
template <typename T> struct impl_IBackgroundTransferOperationPriority;
template <typename T> struct impl_IBackgroundUploader;
template <typename T> struct impl_IBackgroundUploader2;
template <typename T> struct impl_IBackgroundUploader3;
template <typename T> struct impl_IBackgroundUploaderFactory;
template <typename T> struct impl_IBackgroundUploaderStaticMethods;
template <typename T> struct impl_IBackgroundUploaderStaticMethods2;
template <typename T> struct impl_IBackgroundUploaderUserConsent;
template <typename T> struct impl_IContentPrefetcher;
template <typename T> struct impl_IContentPrefetcherTime;
template <typename T> struct impl_IDownloadOperation;
template <typename T> struct impl_IDownloadOperation2;
template <typename T> struct impl_IResponseInformation;
template <typename T> struct impl_IUnconstrainedTransferRequestResult;
template <typename T> struct impl_IUploadOperation;
template <typename T> struct impl_IUploadOperation2;

}

namespace impl {

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloader<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloader2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloader3<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloaderFactory<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloaderStaticMethods<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloaderStaticMethods2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundDownloaderUserConsent<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferBase<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferCompletionGroup<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferCompletionGroupTriggerDetails<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferContentPart<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferContentPartFactory<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferErrorStaticMethods<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferGroup<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferGroupStatics<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferOperation<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundTransferOperationPriority<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploader>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploader<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploader2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader3;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploader3<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploaderFactory<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploaderStaticMethods<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploaderStaticMethods2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IBackgroundUploaderUserConsent<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IContentPrefetcher>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IContentPrefetcher;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IContentPrefetcher<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IContentPrefetcherTime<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IDownloadOperation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IDownloadOperation<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IDownloadOperation2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IDownloadOperation2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IResponseInformation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IResponseInformation;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IResponseInformation<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IUnconstrainedTransferRequestResult<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IUploadOperation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IUploadOperation;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IUploadOperation<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::IUploadOperation2>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::IUploadOperation2;
    template <typename D> using consume = Windows::Networking::BackgroundTransfer::impl_IUploadOperation2<D>;
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundDownloader>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundDownloader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundDownloader"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferError>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundTransferError"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::BackgroundUploader>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::BackgroundUploader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.BackgroundUploader"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::ContentPrefetcher>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.ContentPrefetcher"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::DownloadOperation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::DownloadOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.DownloadOperation"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::ResponseInformation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::ResponseInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.ResponseInformation"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult"; }
};

template <> struct traits<Windows::Networking::BackgroundTransfer::UploadOperation>
{
    using abi = ABI::Windows::Networking::BackgroundTransfer::UploadOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.BackgroundTransfer.UploadOperation"; }
};

}

}
