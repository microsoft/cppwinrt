// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.BackgroundTransfer.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
#define WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
template <> struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716")) __declspec(novtable) IKeyValuePair<hstring, hstring> : impl_IKeyValuePair<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
#define WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
template <> struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447")) __declspec(novtable) IIterable<Windows::Foundation::Uri> : impl_IIterable<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
#define WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
template <> struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede")) __declspec(novtable) IMapView<hstring, hstring> : impl_IMapView<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a8dc2a04_3f44_5046_8182_cd0ec147e17d
#define WINRT_GENERIC_a8dc2a04_3f44_5046_8182_cd0ec147e17d
template <> struct __declspec(uuid("a8dc2a04-3f44-5046-8182-cd0ec147e17d")) __declspec(novtable) IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> : impl_IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f6fd69cb_e6e7_56d5_9be6_e0dc4683fa80
#define WINRT_GENERIC_f6fd69cb_e6e7_56d5_9be6_e0dc4683fa80
template <> struct __declspec(uuid("f6fd69cb-e6e7-56d5-9be6-e0dc4683fa80")) __declspec(novtable) IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_79778799_38cc_5b67_9cd0_043fc47a9ef7
#define WINRT_GENERIC_79778799_38cc_5b67_9cd0_043fc47a9ef7
template <> struct __declspec(uuid("79778799-38cc-5b67-9cd0-043fc47a9ef7")) __declspec(novtable) IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> : impl_IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_43ef3a5f_cc7d_566d_a92a_4caa76b92a1f
#define WINRT_GENERIC_43ef3a5f_cc7d_566d_a92a_4caa76b92a1f
template <> struct __declspec(uuid("43ef3a5f-cc7d-566d-a92a-4caa76b92a1f")) __declspec(novtable) IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_44212ea1_b524_5aee_a320_7199225381d1
#define WINRT_GENERIC_44212ea1_b524_5aee_a320_7199225381d1
template <> struct __declspec(uuid("44212ea1-b524-5aee-a320-7199225381d1")) __declspec(novtable) IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> : impl_IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_cf303199_de3b_5dac_a703_6c57d80821c4
#define WINRT_GENERIC_cf303199_de3b_5dac_a703_6c57d80821c4
template <> struct __declspec(uuid("cf303199-de3b-5dac-a703-6c57d80821c4")) __declspec(novtable) IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> : impl_IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_e86a4f5d_743a_5f18_9d4c_bc8ed5942659
#define WINRT_GENERIC_e86a4f5d_743a_5f18_9d4c_bc8ed5942659
template <> struct __declspec(uuid("e86a4f5d-743a-5f18-9d4c-bc8ed5942659")) __declspec(novtable) IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_35ddaefa_db6a_5d0d_ba54_a0728401171e
#define WINRT_GENERIC_35ddaefa_db6a_5d0d_ba54_a0728401171e
template <> struct __declspec(uuid("35ddaefa-db6a-5d0d-ba54-a0728401171e")) __declspec(novtable) IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> : impl_IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f87d9755_2a7d_59fc_bc92_b48636f4d955
#define WINRT_GENERIC_f87d9755_2a7d_59fc_bc92_b48636f4d955
template <> struct __declspec(uuid("f87d9755-2a7d-59fc-bc92-b48636f4d955")) __declspec(novtable) IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_8e96d4b0_f0ae_51cb_b7c4_024251bd16d8
#define WINRT_GENERIC_8e96d4b0_f0ae_51cb_b7c4_024251bd16d8
template <> struct __declspec(uuid("8e96d4b0-f0ae-51cb-b7c4-024251bd16d8")) __declspec(novtable) IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> : impl_IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif

#ifndef WINRT_GENERIC_0d82bd8d_fe62_5d67_a7b9_7886dd75bc4e
#define WINRT_GENERIC_0d82bd8d_fe62_5d67_a7b9_7886dd75bc4e
template <> struct __declspec(uuid("0d82bd8d-fe62-5d67-a7b9-7886dd75bc4e")) __declspec(novtable) IVector<Windows::Foundation::Uri> : impl_IVector<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_4b8385bd_a2cd_5ff1_bf74_7ea580423e50
#define WINRT_GENERIC_4b8385bd_a2cd_5ff1_bf74_7ea580423e50
template <> struct __declspec(uuid("4b8385bd-a2cd-5ff1-bf74-7ea580423e50")) __declspec(novtable) IVectorView<Windows::Foundation::Uri> : impl_IVectorView<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
#define WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
template <> struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5")) __declspec(novtable) IIterator<Windows::Foundation::Uri> : impl_IIterator<Windows::Foundation::Uri> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_4f52bfe8_9b0e_5b22_916b_834425b4ab97
#define WINRT_GENERIC_4f52bfe8_9b0e_5b22_916b_834425b4ab97
template <> struct __declspec(uuid("4f52bfe8-9b0e-5b22-916b-834425b4ab97")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> : impl_AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2ab61055_2d0a_59cb_8cbd_056f2d7fb454
#define WINRT_GENERIC_2ab61055_2d0a_59cb_8cbd_056f2d7fb454
template <> struct __declspec(uuid("2ab61055-2d0a-59cb-8cbd-056f2d7fb454")) __declspec(novtable) IIterator<Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_IIterator<Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_caa85133_73d7_5f96_ab2d_fbb4fa00f715
#define WINRT_GENERIC_caa85133_73d7_5f96_ab2d_fbb4fa00f715
template <> struct __declspec(uuid("caa85133-73d7-5f96-ab2d-fbb4fa00f715")) __declspec(novtable) IIterator<Windows::Networking::BackgroundTransfer::UploadOperation> : impl_IIterator<Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2aa63857_ffaf_5cf6_9b2c_0dc597b60a60
#define WINRT_GENERIC_2aa63857_ffaf_5cf6_9b2c_0dc597b60a60
template <> struct __declspec(uuid("2aa63857-ffaf-5cf6-9b2c-0dc597b60a60")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_ead68818_0c38_5cde_aec1_c6a7618711f7
#define WINRT_GENERIC_ead68818_0c38_5cde_aec1_c6a7618711f7
template <> struct __declspec(uuid("ead68818-0c38-5cde-aec1-c6a7618711f7")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::UploadOperation> : impl_AsyncOperationCompletedHandler<Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_07fbc351_781d_52c7_9558_a453e5703f29
#define WINRT_GENERIC_07fbc351_781d_52c7_9558_a453e5703f29
template <> struct __declspec(uuid("07fbc351-781d-52c7-9558-a453e5703f29")) __declspec(novtable) IIterator<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> : impl_IIterator<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b2ff13f1_c743_54f4_bccc_f08e16a87890
#define WINRT_GENERIC_b2ff13f1_c743_54f4_bccc_f08e16a87890
template <> struct __declspec(uuid("b2ff13f1-c743-54f4-bccc-f08e16a87890")) __declspec(novtable) AsyncOperationProgressHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_AsyncOperationProgressHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_781b479c_0207_5d15_a4e5_7837d13bf93d
#define WINRT_GENERIC_781b479c_0207_5d15_a4e5_7837d13bf93d
template <> struct __declspec(uuid("781b479c-0207-5d15-a4e5-7837d13bf93d")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> : impl_AsyncOperationWithProgressCompletedHandler<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> {};
#endif

#ifndef WINRT_GENERIC_ccd13730_fed3_54e8_8471_096e4b64cadd
#define WINRT_GENERIC_ccd13730_fed3_54e8_8471_096e4b64cadd
template <> struct __declspec(uuid("ccd13730-fed3-54e8-8471-096e4b64cadd")) __declspec(novtable) AsyncOperationProgressHandler<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> : impl_AsyncOperationProgressHandler<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif

#ifndef WINRT_GENERIC_79fcae93_53ec_5f66_ab34_826af78ec11a
#define WINRT_GENERIC_79fcae93_53ec_5f66_ab34_826af78ec11a
template <> struct __declspec(uuid("79fcae93-53ec-5f66-ab34-826af78ec11a")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> : impl_AsyncOperationWithProgressCompletedHandler<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ae42cddf_3042_5d92_a01e_643c252b8050
#define WINRT_GENERIC_ae42cddf_3042_5d92_a01e_643c252b8050
template <> struct __declspec(uuid("ae42cddf-3042-5d92-a01e-643c252b8050")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> {};
#endif

#ifndef WINRT_GENERIC_3e4c6a3c_48a4_5e22_b29a_3e429469462f
#define WINRT_GENERIC_3e4c6a3c_48a4_5e22_b29a_3e429469462f
template <> struct __declspec(uuid("3e4c6a3c-48a4-5e22-b29a-3e429469462f")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_1986b372_0ddb_520c_b72d_fb2577e99ff5
#define WINRT_GENERIC_1986b372_0ddb_520c_b72d_fb2577e99ff5
template <> struct __declspec(uuid("1986b372-0ddb-520c-b72d-fb2577e99ff5")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> {};
#endif

#ifndef WINRT_GENERIC_608a29a8_bbc5_5ea3_b3f7_87edc4e7bbbc
#define WINRT_GENERIC_608a29a8_bbc5_5ea3_b3f7_87edc4e7bbbc
template <> struct __declspec(uuid("608a29a8-bbc5-5ea3-b3f7-87edc4e7bbbc")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> {};
#endif


}

namespace Windows::Networking::BackgroundTransfer {

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloader
{
    Windows::Networking::BackgroundTransfer::DownloadOperation CreateDownload(const Windows::Foundation::Uri & uri, const Windows::Storage::IStorageFile & resultFile) const;
    Windows::Networking::BackgroundTransfer::DownloadOperation CreateDownload(const Windows::Foundation::Uri & uri, const Windows::Storage::IStorageFile & resultFile, const Windows::Storage::IStorageFile & requestBodyFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::DownloadOperation> CreateDownloadAsync(const Windows::Foundation::Uri & uri, const Windows::Storage::IStorageFile & resultFile, const Windows::Storage::Streams::IInputStream & requestBodyStream) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloader2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
    void TransferGroup(const Windows::Networking::BackgroundTransfer::BackgroundTransferGroup & value) const;
    Windows::UI::Notifications::ToastNotification SuccessToastNotification() const;
    void SuccessToastNotification(const Windows::UI::Notifications::ToastNotification & value) const;
    Windows::UI::Notifications::ToastNotification FailureToastNotification() const;
    void FailureToastNotification(const Windows::UI::Notifications::ToastNotification & value) const;
    Windows::UI::Notifications::TileNotification SuccessTileNotification() const;
    void SuccessTileNotification(const Windows::UI::Notifications::TileNotification & value) const;
    Windows::UI::Notifications::TileNotification FailureTileNotification() const;
    void FailureTileNotification(const Windows::UI::Notifications::TileNotification & value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloader3
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup CompletionGroup() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloaderFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundDownloader CreateWithCompletionGroup(const Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup & completionGroup) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloaderStaticMethods
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsAsync(hstring_ref group) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloaderStaticMethods2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation>> GetCurrentDownloadsForTransferGroupAsync(const Windows::Networking::BackgroundTransfer::BackgroundTransferGroup & group) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundDownloaderUserConsent
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedDownloadsAsync(const Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::DownloadOperation> & operations) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferBase
{
    void SetRequestHeader(hstring_ref headerName, hstring_ref headerValue) const;
    Windows::Security::Credentials::PasswordCredential ServerCredential() const;
    void ServerCredential(const Windows::Security::Credentials::PasswordCredential & credential) const;
    Windows::Security::Credentials::PasswordCredential ProxyCredential() const;
    void ProxyCredential(const Windows::Security::Credentials::PasswordCredential & credential) const;
    hstring Method() const;
    void Method(hstring_ref value) const;
    hstring Group() const;
    void Group(hstring_ref value) const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy CostPolicy() const;
    void CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferCompletionGroup
{
    Windows::ApplicationModel::Background::IBackgroundTrigger Trigger() const;
    bool IsEnabled() const;
    void Enable() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferCompletionGroupTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::DownloadOperation> Downloads() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation> Uploads() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferContentPart
{
    void SetHeader(hstring_ref headerName, hstring_ref headerValue) const;
    void SetText(hstring_ref value) const;
    void SetFile(const Windows::Storage::IStorageFile & value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferContentPartFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart CreateWithName(hstring_ref name) const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart CreateWithNameAndFileName(hstring_ref name, hstring_ref fileName) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferErrorStaticMethods
{
    Windows::Web::WebErrorStatus GetStatus(int32_t hresult) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferGroup
{
    hstring Name() const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior TransferBehavior() const;
    void TransferBehavior(Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferGroupStatics
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup CreateGroup(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferOperation
{
    GUID Guid() const;
    Windows::Foundation::Uri RequestedUri() const;
    hstring Method() const;
    hstring Group() const;
    Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy CostPolicy() const;
    void CostPolicy(Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value) const;
    Windows::Storage::Streams::IInputStream GetResultStreamAt(uint64_t position) const;
    Windows::Networking::BackgroundTransfer::ResponseInformation GetResponseInformation() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundTransferOperationPriority
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferPriority Priority() const;
    void Priority(Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploader
{
    Windows::Networking::BackgroundTransfer::UploadOperation CreateUpload(const Windows::Foundation::Uri & uri, const Windows::Storage::IStorageFile & sourceFile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadFromStreamAsync(const Windows::Foundation::Uri & uri, const Windows::Storage::Streams::IInputStream & sourceStream) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(const Windows::Foundation::Uri & uri, const Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> & parts) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(const Windows::Foundation::Uri & uri, const Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> & parts, hstring_ref subType) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UploadOperation> CreateUploadAsync(const Windows::Foundation::Uri & uri, const Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart> & parts, hstring_ref subType, hstring_ref boundary) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploader2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
    void TransferGroup(const Windows::Networking::BackgroundTransfer::BackgroundTransferGroup & value) const;
    Windows::UI::Notifications::ToastNotification SuccessToastNotification() const;
    void SuccessToastNotification(const Windows::UI::Notifications::ToastNotification & value) const;
    Windows::UI::Notifications::ToastNotification FailureToastNotification() const;
    void FailureToastNotification(const Windows::UI::Notifications::ToastNotification & value) const;
    Windows::UI::Notifications::TileNotification SuccessTileNotification() const;
    void SuccessTileNotification(const Windows::UI::Notifications::TileNotification & value) const;
    Windows::UI::Notifications::TileNotification FailureTileNotification() const;
    void FailureTileNotification(const Windows::UI::Notifications::TileNotification & value) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploader3
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup CompletionGroup() const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploaderFactory
{
    Windows::Networking::BackgroundTransfer::BackgroundUploader CreateWithCompletionGroup(const Windows::Networking::BackgroundTransfer::BackgroundTransferCompletionGroup & completionGroup) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploaderStaticMethods
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsAsync(hstring_ref group) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploaderStaticMethods2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::BackgroundTransfer::UploadOperation>> GetCurrentUploadsForTransferGroupAsync(const Windows::Networking::BackgroundTransfer::BackgroundTransferGroup & group) const;
};

template <typename D>
struct WINRT_EBO impl_IBackgroundUploaderUserConsent
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult> RequestUnconstrainedUploadsAsync(const Windows::Foundation::Collections::IIterable<Windows::Networking::BackgroundTransfer::UploadOperation> & operations) const;
};

template <typename D>
struct WINRT_EBO impl_IContentPrefetcher
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ContentUris() const;
    void IndirectContentUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri IndirectContentUri() const;
};

template <typename D>
struct WINRT_EBO impl_IContentPrefetcherTime
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> LastSuccessfulPrefetchTime() const;
};

template <typename D>
struct WINRT_EBO impl_IDownloadOperation
{
    Windows::Storage::IStorageFile ResultFile() const;
    Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress Progress() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> StartAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::DownloadOperation, Windows::Networking::BackgroundTransfer::DownloadOperation> AttachAsync() const;
    void Pause() const;
    void Resume() const;
};

template <typename D>
struct WINRT_EBO impl_IDownloadOperation2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
};

template <typename D>
struct WINRT_EBO impl_IResponseInformation
{
    bool IsResumable() const;
    Windows::Foundation::Uri ActualUri() const;
    uint32_t StatusCode() const;
    Windows::Foundation::Collections::IMapView<hstring, hstring> Headers() const;
};

template <typename D>
struct WINRT_EBO impl_IUnconstrainedTransferRequestResult
{
    bool IsUnconstrained() const;
};

template <typename D>
struct WINRT_EBO impl_IUploadOperation
{
    Windows::Storage::IStorageFile SourceFile() const;
    Windows::Networking::BackgroundTransfer::BackgroundUploadProgress Progress() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> StartAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Networking::BackgroundTransfer::UploadOperation, Windows::Networking::BackgroundTransfer::UploadOperation> AttachAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUploadOperation2
{
    Windows::Networking::BackgroundTransfer::BackgroundTransferGroup TransferGroup() const;
};

struct IBackgroundDownloader :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloader>,
    impl::require<IBackgroundDownloader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundDownloader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloader>(m_ptr); }
};

struct IBackgroundDownloader2 :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloader2>
{
    IBackgroundDownloader2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloader2>(m_ptr); }
};

struct IBackgroundDownloader3 :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloader3>
{
    IBackgroundDownloader3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloader3>(m_ptr); }
};

struct IBackgroundDownloaderFactory :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloaderFactory>
{
    IBackgroundDownloaderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloaderFactory>(m_ptr); }
};

struct IBackgroundDownloaderStaticMethods :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloaderStaticMethods>
{
    IBackgroundDownloaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloaderStaticMethods>(m_ptr); }
};

struct IBackgroundDownloaderStaticMethods2 :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloaderStaticMethods2>
{
    IBackgroundDownloaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloaderStaticMethods2>(m_ptr); }
};

struct IBackgroundDownloaderUserConsent :
    Windows::IInspectable,
    impl::consume<IBackgroundDownloaderUserConsent>
{
    IBackgroundDownloaderUserConsent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundDownloaderUserConsent>(m_ptr); }
};

struct IBackgroundTransferBase :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferBase>
{
    IBackgroundTransferBase(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferBase>(m_ptr); }
};

struct IBackgroundTransferCompletionGroup :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferCompletionGroup>
{
    IBackgroundTransferCompletionGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferCompletionGroup>(m_ptr); }
};

struct IBackgroundTransferCompletionGroupTriggerDetails :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferCompletionGroupTriggerDetails>
{
    IBackgroundTransferCompletionGroupTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferCompletionGroupTriggerDetails>(m_ptr); }
};

struct IBackgroundTransferContentPart :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferContentPart>
{
    IBackgroundTransferContentPart(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferContentPart>(m_ptr); }
};

struct IBackgroundTransferContentPartFactory :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferContentPartFactory>
{
    IBackgroundTransferContentPartFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferContentPartFactory>(m_ptr); }
};

struct IBackgroundTransferErrorStaticMethods :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferErrorStaticMethods>
{
    IBackgroundTransferErrorStaticMethods(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferErrorStaticMethods>(m_ptr); }
};

struct IBackgroundTransferGroup :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferGroup>
{
    IBackgroundTransferGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferGroup>(m_ptr); }
};

struct IBackgroundTransferGroupStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferGroupStatics>
{
    IBackgroundTransferGroupStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferGroupStatics>(m_ptr); }
};

struct IBackgroundTransferOperation :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferOperation>
{
    IBackgroundTransferOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferOperation>(m_ptr); }
};

struct IBackgroundTransferOperationPriority :
    Windows::IInspectable,
    impl::consume<IBackgroundTransferOperationPriority>
{
    IBackgroundTransferOperationPriority(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundTransferOperationPriority>(m_ptr); }
};

struct IBackgroundUploader :
    Windows::IInspectable,
    impl::consume<IBackgroundUploader>,
    impl::require<IBackgroundUploader, Windows::Networking::BackgroundTransfer::IBackgroundTransferBase>
{
    IBackgroundUploader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploader>(m_ptr); }
};

struct IBackgroundUploader2 :
    Windows::IInspectable,
    impl::consume<IBackgroundUploader2>
{
    IBackgroundUploader2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploader2>(m_ptr); }
};

struct IBackgroundUploader3 :
    Windows::IInspectable,
    impl::consume<IBackgroundUploader3>
{
    IBackgroundUploader3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploader3>(m_ptr); }
};

struct IBackgroundUploaderFactory :
    Windows::IInspectable,
    impl::consume<IBackgroundUploaderFactory>
{
    IBackgroundUploaderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploaderFactory>(m_ptr); }
};

struct IBackgroundUploaderStaticMethods :
    Windows::IInspectable,
    impl::consume<IBackgroundUploaderStaticMethods>
{
    IBackgroundUploaderStaticMethods(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploaderStaticMethods>(m_ptr); }
};

struct IBackgroundUploaderStaticMethods2 :
    Windows::IInspectable,
    impl::consume<IBackgroundUploaderStaticMethods2>
{
    IBackgroundUploaderStaticMethods2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploaderStaticMethods2>(m_ptr); }
};

struct IBackgroundUploaderUserConsent :
    Windows::IInspectable,
    impl::consume<IBackgroundUploaderUserConsent>
{
    IBackgroundUploaderUserConsent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundUploaderUserConsent>(m_ptr); }
};

struct IContentPrefetcher :
    Windows::IInspectable,
    impl::consume<IContentPrefetcher>
{
    IContentPrefetcher(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContentPrefetcher>(m_ptr); }
};

struct IContentPrefetcherTime :
    Windows::IInspectable,
    impl::consume<IContentPrefetcherTime>
{
    IContentPrefetcherTime(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContentPrefetcherTime>(m_ptr); }
};

struct IDownloadOperation :
    Windows::IInspectable,
    impl::consume<IDownloadOperation>,
    impl::require<IDownloadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IDownloadOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDownloadOperation>(m_ptr); }
};

struct IDownloadOperation2 :
    Windows::IInspectable,
    impl::consume<IDownloadOperation2>
{
    IDownloadOperation2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDownloadOperation2>(m_ptr); }
};

struct IResponseInformation :
    Windows::IInspectable,
    impl::consume<IResponseInformation>
{
    IResponseInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResponseInformation>(m_ptr); }
};

struct IUnconstrainedTransferRequestResult :
    Windows::IInspectable,
    impl::consume<IUnconstrainedTransferRequestResult>
{
    IUnconstrainedTransferRequestResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUnconstrainedTransferRequestResult>(m_ptr); }
};

struct IUploadOperation :
    Windows::IInspectable,
    impl::consume<IUploadOperation>,
    impl::require<IUploadOperation, Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation>
{
    IUploadOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUploadOperation>(m_ptr); }
};

struct IUploadOperation2 :
    Windows::IInspectable,
    impl::consume<IUploadOperation2>
{
    IUploadOperation2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUploadOperation2>(m_ptr); }
};

}

}
