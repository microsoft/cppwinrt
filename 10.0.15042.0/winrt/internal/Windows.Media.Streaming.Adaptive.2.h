// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Streaming.Adaptive.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif

#ifndef WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
#define WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
template <> struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4")) __declspec(novtable) IReference<int32_t> : impl_IReference<int32_t> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif

#ifndef WINRT_GENERIC_6755e376_53bb_568b_a11d_17239868309e
#define WINRT_GENERIC_6755e376_53bb_568b_a11d_17239868309e
template <> struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e")) __declspec(novtable) IReference<uint64_t> : impl_IReference<uint64_t> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e5ce1a07_8d33_5007_ba64_7d2508ccf85c
#define WINRT_GENERIC_e5ce1a07_8d33_5007_ba64_7d2508ccf85c
template <> struct __declspec(uuid("e5ce1a07-8d33-5007-ba64-7d2508ccf85c")) __declspec(novtable) IVectorView<uint32_t> : impl_IVectorView<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_421d4b91_b13b_5f37_ae54_b5249bd80539
#define WINRT_GENERIC_421d4b91_b13b_5f37_ae54_b5249bd80539
template <> struct __declspec(uuid("421d4b91-b13b-5f37-ae54-b5249bd80539")) __declspec(novtable) IIterable<uint32_t> : impl_IIterable<uint32_t> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_be0bcc1d_d606_59d2_b2f9_ff204543da12
#define WINRT_GENERIC_be0bcc1d_d606_59d2_b2f9_ff204543da12
template <> struct __declspec(uuid("be0bcc1d-d606-59d2-b2f9-ff204543da12")) __declspec(novtable) IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> : impl_IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> {};
#endif

#ifndef WINRT_GENERIC_ad268caf_7da0_5ad4_8585_ceeb903dbd50
#define WINRT_GENERIC_ad268caf_7da0_5ad4_8585_ceeb903dbd50
template <> struct __declspec(uuid("ad268caf-7da0-5ad4-8585-ceeb903dbd50")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_df4f4e89_6173_539b_94d8_69b7cb7578a7
#define WINRT_GENERIC_df4f4e89_6173_539b_94d8_69b7cb7578a7
template <> struct __declspec(uuid("df4f4e89-6173-539b-94d8-69b7cb7578a7")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d3b7dbf1_fd8e_589e_9c7f_ba67397e50cd
#define WINRT_GENERIC_d3b7dbf1_fd8e_589e_9c7f_ba67397e50cd
template <> struct __declspec(uuid("d3b7dbf1-fd8e-589e-9c7f-ba67397e50cd")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_cef775dd_25b2_5588_8d51_dacdea660a7d
#define WINRT_GENERIC_cef775dd_25b2_5588_8d51_dacdea660a7d
template <> struct __declspec(uuid("cef775dd-25b2-5588-8d51-dacdea660a7d")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6ee5cc44_49ad_5138_ab47_f5c075a2bc34
#define WINRT_GENERIC_6ee5cc44_49ad_5138_ab47_f5c075a2bc34
template <> struct __declspec(uuid("6ee5cc44-49ad-5138-ab47-f5c075a2bc34")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_74c8c3aa_de03_5bf0_aae8_aa8b692066b3
#define WINRT_GENERIC_74c8c3aa_de03_5bf0_aae8_aa8b692066b3
template <> struct __declspec(uuid("74c8c3aa-de03-5bf0-aae8-aa8b692066b3")) __declspec(novtable) IReference<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> : impl_IReference<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> {};
#endif

#ifndef WINRT_GENERIC_fd4ce6b5_7c3b_58f4_9efc_1d9ee6a09d21
#define WINRT_GENERIC_fd4ce6b5_7c3b_58f4_9efc_1d9ee6a09d21
template <> struct __declspec(uuid("fd4ce6b5-7c3b-58f4-9efc-1d9ee6a09d21")) __declspec(novtable) TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> : impl_TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_534832ed_2a03_5604_890d_5a928cd427b9
#define WINRT_GENERIC_534832ed_2a03_5604_890d_5a928cd427b9
template <> struct __declspec(uuid("534832ed-2a03-5604-890d-5a928cd427b9")) __declspec(novtable) IVector<uint32_t> : impl_IVector<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_f06a2739_9443_5ef0_b284_dc5aff3e7d10
#define WINRT_GENERIC_f06a2739_9443_5ef0_b284_dc5aff3e7d10
template <> struct __declspec(uuid("f06a2739-9443-5ef0-b284-dc5aff3e7d10")) __declspec(novtable) IIterator<uint32_t> : impl_IIterator<uint32_t> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bd68cc00_724c_5a76_a437_1464ebdda4ac
#define WINRT_GENERIC_bd68cc00_724c_5a76_a437_1464ebdda4ac
template <> struct __declspec(uuid("bd68cc00-724c-5a76-a437-1464ebdda4ac")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> {};
#endif


}

namespace Windows::Media::Streaming::Adaptive {

struct IAdaptiveMediaSource :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSource>,
    impl::require<IAdaptiveMediaSource, Windows::Media::Core::IMediaSource>
{
    IAdaptiveMediaSource(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSource2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSource2>
{
    IAdaptiveMediaSource2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSource3 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSource3>
{
    IAdaptiveMediaSource3(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceAdvancedSettings :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceAdvancedSettings>
{
    IAdaptiveMediaSourceAdvancedSettings(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCorrelatedTimes :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceCorrelatedTimes>
{
    IAdaptiveMediaSourceCorrelatedTimes(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceCreationResult>
{
    IAdaptiveMediaSourceCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceCreationResult2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceCreationResult2>
{
    IAdaptiveMediaSourceCreationResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDiagnosticAvailableEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDiagnosticAvailableEventArgs>
{
    IAdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDiagnostics :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDiagnostics>
{
    IAdaptiveMediaSourceDiagnostics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadCompletedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadFailedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadRequestedDeferral>
{
    IAdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadRequestedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadResult>
{
    IAdaptiveMediaSourceDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadResult2 :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadResult2>
{
    IAdaptiveMediaSourceDownloadResult2(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceDownloadStatistics :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceDownloadStatistics>
{
    IAdaptiveMediaSourceDownloadStatistics(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IAdaptiveMediaSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IAdaptiveMediaSourceStatics>
{
    IAdaptiveMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
