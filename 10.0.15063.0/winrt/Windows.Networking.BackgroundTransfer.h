// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Notifications.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> Windows::Networking::BackgroundTransfer::DownloadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile) const
{
    Windows::Networking::BackgroundTransfer::DownloadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownload(get_abi(uri), get_abi(resultFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::DownloadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::IStorageFile const& requestBodyFile) const
{
    Windows::Networking::BackgroundTransfer::DownloadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadFromFile(get_abi(uri), get_abi(resultFile), get_abi(requestBodyFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader<D>::CreateDownloadAsync(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& resultFile, Windows::Storage::Streams::IInputStream const& requestBodyStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader)->CreateDownloadAsync(get_abi(uri), get_abi(resultFile), get_abi(requestBodyStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_TransferGroup(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_SuccessTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_SuccessTileNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->get_FailureTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader2)->put_FailureTileNotification(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3<D>::CompletionGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloader3)->get_CompletionGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundDownloader consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloader backgroundDownloader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory)->CreateWithCompletionGroup(get_abi(completionGroup), put_abi(backgroundDownloader)));
    return backgroundDownloader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods<D>::GetCurrentDownloadsAsync(param::hstring const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods)->GetCurrentDownloadsForGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2<D>::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2)->GetCurrentDownloadsForTransferGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> consume_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent<D>::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent)->RequestUnconstrainedDownloadsAsync(get_abi(operations), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->SetRequestHeader(get_abi(headerName), get_abi(headerValue)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ServerCredential(put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ServerCredential(get_abi(credential)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_ProxyCredential(put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& credential) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_ProxyCredential(get_abi(credential)));
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Method(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Method(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Method(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::Group(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_Group(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->get_CostPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferBase)->put_CostPolicy(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Trigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_Trigger(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup)->Enable());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Downloads() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Downloads(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails<D>::Uploads() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails)->get_Uploads(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetHeader(param::hstring const& headerName, param::hstring const& headerValue) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetHeader(get_abi(headerName), get_abi(headerValue)));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetText(get_abi(value)));
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart<D>::SetFile(Windows::Storage::IStorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart)->SetFile(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithName(param::hstring const& name) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithName(get_abi(name), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory<D>::CreateWithNameAndFileName(param::hstring const& name, param::hstring const& fileName) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory)->CreateWithNameAndFileName(get_abi(name), get_abi(fileName), put_abi(value)));
    return value;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->get_TransferBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup<D>::TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup)->put_TransferBehavior(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics<D>::CreateGroup(param::hstring const& name) const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics)->CreateGroup(get_abi(name), put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Guid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Guid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::RequestedUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_RequestedUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Method() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Method(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::Group() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_Group(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->get_CostPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->put_CostPolicy(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResultStreamAt(uint64_t position) const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResultStreamAt(position, put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::ResponseInformation consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation<D>::GetResponseInformation() const
{
    Windows::Networking::BackgroundTransfer::ResponseInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation)->GetResponseInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferPriority consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->get_Priority(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority<D>::Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority)->put_Priority(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::UploadOperation consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUpload(Windows::Foundation::Uri const& uri, Windows::Storage::IStorageFile const& sourceFile) const
{
    Windows::Networking::BackgroundTransfer::UploadOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUpload(get_abi(uri), get_abi(sourceFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadFromStreamAsync(Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IInputStream const& sourceStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadFromStreamAsync(get_abi(uri), get_abi(sourceStream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithFormDataAndAutoBoundaryAsync(get_abi(uri), get_abi(parts), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAsync(get_abi(uri), get_abi(parts), get_abi(subType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader<D>::CreateUploadAsync(Windows::Foundation::Uri const& uri, param::async_iterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const& parts, param::hstring const& subType, param::hstring const& boundary) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader)->CreateUploadWithSubTypeAndBoundaryAsync(get_abi(uri), get_abi(parts), get_abi(subType), get_abi(boundary), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::TransferGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_TransferGroup(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::ToastNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification() const
{
    Windows::UI::Notifications::ToastNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureToastNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureToastNotification(Windows::UI::Notifications::ToastNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureToastNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_SuccessTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::SuccessTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_SuccessTileNotification(get_abi(value)));
}

template <typename D> Windows::UI::Notifications::TileNotification consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification() const
{
    Windows::UI::Notifications::TileNotification value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->get_FailureTileNotification(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader2<D>::FailureTileNotification(Windows::UI::Notifications::TileNotification const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader2)->put_FailureTileNotification(get_abi(value)));
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup consume_Windows_Networking_BackgroundTransfer_IBackgroundUploader3<D>::CompletionGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploader3)->get_CompletionGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundUploader consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory<D>::CreateWithCompletionGroup(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) const
{
    Windows::Networking::BackgroundTransfer::BackgroundUploader backgroundUploader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory)->CreateWithCompletionGroup(get_abi(completionGroup), put_abi(backgroundUploader)));
    return backgroundUploader;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods<D>::GetCurrentUploadsAsync(param::hstring const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods)->GetCurrentUploadsForGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2<D>::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2)->GetCurrentUploadsForTransferGroupAsync(get_abi(group), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> consume_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent<D>::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent)->RequestUnconstrainedUploadsAsync(get_abi(operations), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::ContentUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_ContentUris(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->put_IndirectContentUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IContentPrefetcher<D>::IndirectContentUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcher)->get_IndirectContentUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime<D>::LastSuccessfulPrefetchTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IContentPrefetcherTime)->get_LastSuccessfulPrefetchTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::ResultFile() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_ResultFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Progress() const
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->get_Progress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->AttachAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Pause());
}

template <typename D> void consume_Windows_Networking_BackgroundTransfer_IDownloadOperation<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation)->Resume());
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IDownloadOperation2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IDownloadOperation2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::IsResumable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_IsResumable(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::ActualUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_ActualUri(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::StatusCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_StatusCode(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, hstring> consume_Windows_Networking_BackgroundTransfer_IResponseInformation<D>::Headers() const
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IResponseInformation)->get_Headers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult<D>::IsUnconstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult)->get_IsUnconstrained(&value));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::SourceFile() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_SourceFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundUploadProgress consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::Progress() const
{
    Windows::Networking::BackgroundTransfer::BackgroundUploadProgress value{};
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->get_Progress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> consume_Windows_Networking_BackgroundTransfer_IUploadOperation<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation)->AttachAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::BackgroundTransferGroup consume_Windows_Networking_BackgroundTransfer_IUploadOperation2<D>::TransferGroup() const
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::BackgroundTransfer::IUploadOperation2)->get_TransferGroup(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader>
{
    HRESULT __stdcall CreateDownload(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDownloadFromFile(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown* requestBodyFile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateDownload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&requestBodyFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDownloadAsync(::IUnknown* uri, ::IUnknown* resultFile, ::IUnknown* requestBodyStream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateDownloadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&resultFile), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&requestBodyStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader2>
{
    HRESULT __stdcall get_TransferGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransferGroup(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessToastNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuccessToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessToastNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureToastNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FailureToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FailureToastNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessTileNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuccessTileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessTileNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureTileNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FailureTileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FailureTileNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloader3>
{
    HRESULT __stdcall get_CompletionGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompletionGroup());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>
{
    HRESULT __stdcall CreateWithCompletionGroup(::IUnknown* completionGroup, ::IUnknown** backgroundDownloader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *backgroundDownloader = detach_abi(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return S_OK;
        }
        catch (...)
        {
            *backgroundDownloader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>
{
    HRESULT __stdcall GetCurrentDownloadsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentDownloadsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentDownloadsForGroupAsync(HSTRING group, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentDownloadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>
{
    HRESULT __stdcall GetCurrentDownloadsForTransferGroupAsync(::IUnknown* group, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentDownloadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>
{
    HRESULT __stdcall RequestUnconstrainedDownloadsAsync(::IUnknown* operations, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestUnconstrainedDownloadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const*>(&operations)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    HRESULT __stdcall SetRequestHeader(HSTRING headerName, HSTRING headerValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCredential(::IUnknown** credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credential = detach_abi(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(::IUnknown* credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(::IUnknown** credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *credential = detach_abi(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            *credential = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(::IUnknown* credential) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&credential));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Method(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Method(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Method(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Group(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CostPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup>
{
    HRESULT __stdcall get_Trigger(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Trigger());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails>
{
    HRESULT __stdcall get_Downloads(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Downloads());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uploads(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uploads());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart>
{
    HRESULT __stdcall SetHeader(HSTRING headerName, HSTRING headerValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFile(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>
{
    HRESULT __stdcall CreateWithName(HSTRING name, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithNameAndFileName(HSTRING name, HSTRING fileName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithNameAndFileName(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&fileName)));
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>
{
    HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::WebErrorStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup>
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

    HRESULT __stdcall get_TransferBehavior(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransferBehavior(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferBehavior(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>
{
    HRESULT __stdcall CreateGroup(HSTRING name, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateGroup(*reinterpret_cast<hstring const*>(&name)));
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    HRESULT __stdcall get_Guid(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Guid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Method(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Group(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Group());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CostPolicy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CostPolicy(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CostPolicy(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetResultStreamAt(uint64_t position, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetResultStreamAt(position));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetResponseInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetResponseInformation());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority>
{
    HRESULT __stdcall get_Priority(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Priority(abi_t<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferPriority const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader>
{
    HRESULT __stdcall CreateUpload(::IUnknown* uri, ::IUnknown* sourceFile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateUpload(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&sourceFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadFromStreamAsync(::IUnknown* uri, ::IUnknown* sourceStream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateUploadFromStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&sourceStream)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithFormDataAndAutoBoundaryAsync(::IUnknown* uri, ::IUnknown* parts, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithSubTypeAsync(::IUnknown* uri, ::IUnknown* parts, HSTRING subType, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUploadWithSubTypeAndBoundaryAsync(::IUnknown* uri, ::IUnknown* parts, HSTRING subType, HSTRING boundary, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateUploadAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> const*>(&parts), *reinterpret_cast<hstring const*>(&subType), *reinterpret_cast<hstring const*>(&boundary)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader2>
{
    HRESULT __stdcall get_TransferGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransferGroup(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessToastNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuccessToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessToastNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureToastNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FailureToastNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FailureToastNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureToastNotification(*reinterpret_cast<Windows::UI::Notifications::ToastNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuccessTileNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuccessTileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuccessTileNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuccessTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureTileNotification(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FailureTileNotification());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FailureTileNotification(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailureTileNotification(*reinterpret_cast<Windows::UI::Notifications::TileNotification const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploader3>
{
    HRESULT __stdcall get_CompletionGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompletionGroup());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>
{
    HRESULT __stdcall CreateWithCompletionGroup(::IUnknown* completionGroup, ::IUnknown** backgroundUploader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *backgroundUploader = detach_abi(this->shim().CreateWithCompletionGroup(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const*>(&completionGroup)));
            return S_OK;
        }
        catch (...)
        {
            *backgroundUploader = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>
{
    HRESULT __stdcall GetCurrentUploadsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentUploadsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentUploadsForGroupAsync(HSTRING group, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentUploadsAsync(*reinterpret_cast<hstring const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>
{
    HRESULT __stdcall GetCurrentUploadsForTransferGroupAsync(::IUnknown* group, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCurrentUploadsForTransferGroupAsync(*reinterpret_cast<Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const*>(&group)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : produce_base<D, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>
{
    HRESULT __stdcall RequestUnconstrainedUploadsAsync(::IUnknown* operations, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestUnconstrainedUploadsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> const*>(&operations)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcher>
{
    HRESULT __stdcall get_ContentUris(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentUris());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IndirectContentUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndirectContentUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndirectContentUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndirectContentUri());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : produce_base<D, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>
{
    HRESULT __stdcall get_LastSuccessfulPrefetchTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSuccessfulPrefetchTime());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation>
{
    HRESULT __stdcall get_ResultFile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResultFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(abi_t<Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AttachAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IDownloadOperation2>
{
    HRESULT __stdcall get_TransferGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferGroup());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IResponseInformation> : produce_base<D, Windows::Networking::BackgroundTransfer::IResponseInformation>
{
    HRESULT __stdcall get_IsResumable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsResumable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActualUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StatusCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
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
struct produce<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : produce_base<D, Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult>
{
    HRESULT __stdcall get_IsUnconstrained(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUnconstrained());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation>
{
    HRESULT __stdcall get_SourceFile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Progress(abi_t<Windows::Networking::BackgroundTransfer::BackgroundUploadProgress>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AttachAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::BackgroundTransfer::IUploadOperation2> : produce_base<D, Windows::Networking::BackgroundTransfer::IUploadOperation2>
{
    HRESULT __stdcall get_TransferGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransferGroup());
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

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

inline BackgroundDownloader::BackgroundDownloader() :
    BackgroundDownloader(activate_instance<BackgroundDownloader>())
{}

inline BackgroundDownloader::BackgroundDownloader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
    BackgroundDownloader(get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory>().CreateWithCompletionGroup(completionGroup))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsAsync()
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>().GetCurrentDownloadsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsAsync(param::hstring const& group)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods>().GetCurrentDownloadsAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> BackgroundDownloader::GetCurrentDownloadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2>().GetCurrentDownloadsForTransferGroupAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> BackgroundDownloader::RequestUnconstrainedDownloadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::DownloadOperation> const& operations)
{
    return get_activation_factory<BackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent>().RequestUnconstrainedDownloadsAsync(operations);
}

inline BackgroundTransferCompletionGroup::BackgroundTransferCompletionGroup() :
    BackgroundTransferCompletionGroup(activate_instance<BackgroundTransferCompletionGroup>())
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart() :
    BackgroundTransferContentPart(activate_instance<BackgroundTransferContentPart>())
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name) :
    BackgroundTransferContentPart(get_activation_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>().CreateWithName(name))
{}

inline BackgroundTransferContentPart::BackgroundTransferContentPart(param::hstring const& name, param::hstring const& fileName) :
    BackgroundTransferContentPart(get_activation_factory<BackgroundTransferContentPart, Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory>().CreateWithNameAndFileName(name, fileName))
{}

inline Windows::Web::WebErrorStatus BackgroundTransferError::GetStatus(int32_t hresult)
{
    return get_activation_factory<BackgroundTransferError, Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods>().GetStatus(hresult);
}

inline Windows::Networking::BackgroundTransfer::BackgroundTransferGroup BackgroundTransferGroup::CreateGroup(param::hstring const& name)
{
    return get_activation_factory<BackgroundTransferGroup, Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics>().CreateGroup(name);
}

inline BackgroundUploader::BackgroundUploader() :
    BackgroundUploader(activate_instance<BackgroundUploader>())
{}

inline BackgroundUploader::BackgroundUploader(Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup const& completionGroup) :
    BackgroundUploader(get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory>().CreateWithCompletionGroup(completionGroup))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsAsync()
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>().GetCurrentUploadsAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsAsync(param::hstring const& group)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods>().GetCurrentUploadsAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> BackgroundUploader::GetCurrentUploadsForTransferGroupAsync(Windows::Networking::BackgroundTransfer::BackgroundTransferGroup const& group)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2>().GetCurrentUploadsForTransferGroupAsync(group);
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> BackgroundUploader::RequestUnconstrainedUploadsAsync(param::async_iterable<Windows::Networking::BackgroundTransfer::UploadOperation> const& operations)
{
    return get_activation_factory<BackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent>().RequestUnconstrainedUploadsAsync(operations);
}

inline Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ContentPrefetcher::ContentUris()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().ContentUris();
}

inline void ContentPrefetcher::IndirectContentUri(Windows::Foundation::Uri const& value)
{
    get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().IndirectContentUri(value);
}

inline Windows::Foundation::Uri ContentPrefetcher::IndirectContentUri()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcher>().IndirectContentUri();
}

inline Windows::Foundation::IReference<Windows::Foundation::DateTime> ContentPrefetcher::LastSuccessfulPrefetchTime()
{
    return get_activation_factory<ContentPrefetcher, Windows::Networking::BackgroundTransfer::IContentPrefetcherTime>().LastSuccessfulPrefetchTime();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploader3> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcher> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IDownloadOperation2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IResponseInformation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::IUploadOperation2> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundDownloader> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroupTriggerDetails> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferError> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundTransferGroup> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::BackgroundUploader> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::ContentPrefetcher> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::DownloadOperation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::ResponseInformation> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> {};

template<> struct hash<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Networking::BackgroundTransfer::UploadOperation> {};

}

WINRT_WARNING_POP
