// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Capture.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Storage.Streams.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif

#ifndef WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
#define WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
template <> struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4")) __declspec(novtable) IReference<int32_t> : impl_IReference<int32_t> {};
#endif

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif

#ifndef WINRT_GENERIC_5e52f8ce_aced_5a42_95b4_f674dd84885e
#define WINRT_GENERIC_5e52f8ce_aced_5a42_95b4_f674dd84885e
template <> struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e")) __declspec(novtable) IAsyncOperation<Windows::Storage::StorageFile> : impl_IAsyncOperation<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_f5cb24b5_ff00_58df_b460_17bbf2cd64d3
#define WINRT_GENERIC_f5cb24b5_ff00_58df_b460_17bbf2cd64d3
template <> struct __declspec(uuid("f5cb24b5-ff00-58df-b460-17bbf2cd64d3")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
#define WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
template <> struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a")) __declspec(novtable) IReference<bool> : impl_IReference<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_726c7c8c_789e_5fcb_b31f_f9d9d4a3ac42
#define WINRT_GENERIC_726c7c8c_789e_5fcb_b31f_f9d9d4a3ac42
template <> struct __declspec(uuid("726c7c8c-789e-5fcb-b31f-f9d9d4a3ac42")) __declspec(novtable) IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> : impl_IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> {};
#endif

#ifndef WINRT_GENERIC_75626cf9_1f99_5e10_bd03_f2961e85af1f
#define WINRT_GENERIC_75626cf9_1f99_5e10_bd03_f2961e85af1f
template <> struct __declspec(uuid("75626cf9-1f99-5e10-bd03-f2961e85af1f")) __declspec(novtable) IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> : impl_IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_4febefcc_bec0_5433_a7ba_7603d1edc7b9
#define WINRT_GENERIC_4febefcc_bec0_5433_a7ba_7603d1edc7b9
template <> struct __declspec(uuid("4febefcc-bec0-5433-a7ba-7603d1edc7b9")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> : impl_IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> {};
#endif

#ifndef WINRT_GENERIC_af24404b_7e0d_5ffe_bbc8_aaf6ffe208fc
#define WINRT_GENERIC_af24404b_7e0d_5ffe_bbc8_aaf6ffe208fc
template <> struct __declspec(uuid("af24404b-7e0d-5ffe-bbc8-aaf6ffe208fc")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> : impl_IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> {};
#endif

#ifndef WINRT_GENERIC_ac9f0460_9d14_5af0_b17b_37ea2d76a80d
#define WINRT_GENERIC_ac9f0460_9d14_5af0_b17b_37ea2d76a80d
template <> struct __declspec(uuid("ac9f0460-9d14-5af0-b17b-37ea2d76a80d")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> : impl_IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> {};
#endif

#ifndef WINRT_GENERIC_0327c8bc_3148_53f3_8a3d_cdb12e49e132
#define WINRT_GENERIC_0327c8bc_3148_53f3_8a3d_cdb12e49e132
template <> struct __declspec(uuid("0327c8bc-3148-53f3-8a3d-cdb12e49e132")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> : impl_IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> {};
#endif

#ifndef WINRT_GENERIC_0561d9e8_0290_5332_b15e_b0d51abe737c
#define WINRT_GENERIC_0561d9e8_0290_5332_b15e_b0d51abe737c
template <> struct __declspec(uuid("0561d9e8-0290-5332-b15e-b0d51abe737c")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_37dc3b13_b096_5f43_8104_f0dc4302e2b5
#define WINRT_GENERIC_37dc3b13_b096_5f43_8104_f0dc4302e2b5
template <> struct __declspec(uuid("37dc3b13-b096-5f43-8104-f0dc4302e2b5")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_f5cb3303_1c1f_5d30_b402_efa192e80c49
#define WINRT_GENERIC_f5cb3303_1c1f_5d30_b402_efa192e80c49
template <> struct __declspec(uuid("f5cb3303-1c1f-5d30-b402-efa192e80c49")) __declspec(novtable) IAsyncOperation<Windows::Media::IMediaExtension> : impl_IAsyncOperation<Windows::Media::IMediaExtension> {};
#endif

#ifndef WINRT_GENERIC_44c588f1_1bb7_5e12_8413_3cf0373c0bc8
#define WINRT_GENERIC_44c588f1_1bb7_5e12_8413_3cf0373c0bc8
template <> struct __declspec(uuid("44c588f1-1bb7-5e12-8413-3cf0373c0bc8")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_f12e515d_ac45_5153_96b2_ce53ab594a57
#define WINRT_GENERIC_f12e515d_ac45_5153_96b2_ce53ab594a57
template <> struct __declspec(uuid("f12e515d-ac45-5153-96b2-ce53ab594a57")) __declspec(novtable) IAsyncOperation<Windows::Media::VideoFrame> : impl_IAsyncOperation<Windows::Media::VideoFrame> {};
#endif

#ifndef WINRT_GENERIC_8eb156d9_2ce4_5ecd_81f4_a08731fb74cf
#define WINRT_GENERIC_8eb156d9_2ce4_5ecd_81f4_a08731fb74cf
template <> struct __declspec(uuid("8eb156d9-2ce4-5ecd-81f4-a08731fb74cf")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> : impl_IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> {};
#endif

#ifndef WINRT_GENERIC_202a2618_5478_5eba_9bd3_9d83f462747e
#define WINRT_GENERIC_202a2618_5478_5eba_9bd3_9d83f462747e
template <> struct __declspec(uuid("202a2618-5478-5eba-9bd3-9d83f462747e")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> : impl_IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> {};
#endif

#ifndef WINRT_GENERIC_eb798827_a4a9_533a_9e83_0fb085b2ad36
#define WINRT_GENERIC_eb798827_a4a9_533a_9e83_0fb085b2ad36
template <> struct __declspec(uuid("eb798827-a4a9-533a-9e83-0fb085b2ad36")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> : impl_IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_534ea61f_8be7_5e93_b01b_ae1f9dd242a4
#define WINRT_GENERIC_534ea61f_8be7_5e93_b01b_ae1f9dd242a4
template <> struct __declspec(uuid("534ea61f-8be7-5e93-b01b-ae1f9dd242a4")) __declspec(novtable) IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> : impl_IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a10cb14d_7935_5c87_9026_8abe792a3be5
#define WINRT_GENERIC_a10cb14d_7935_5c87_9026_8abe792a3be5
template <> struct __declspec(uuid("a10cb14d-7935-5c87-9026-8abe792a3be5")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> : impl_IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> {};
#endif

#ifndef WINRT_GENERIC_af5235b1_4778_55e1_b49f_608048ea9bd9
#define WINRT_GENERIC_af5235b1_4778_55e1_b49f_608048ea9bd9
template <> struct __declspec(uuid("af5235b1-4778-55e1-b49f-608048ea9bd9")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::CapturedPhoto> : impl_IAsyncOperation<Windows::Media::Capture::CapturedPhoto> {};
#endif

#ifndef WINRT_GENERIC_8f71b217_61ec_58ab_a646_eede0142d568
#define WINRT_GENERIC_8f71b217_61ec_58ab_a646_eede0142d568
template <> struct __declspec(uuid("8f71b217-61ec-58ab-a646-eede0142d568")) __declspec(novtable) IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> : impl_IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> {};
#endif

#ifndef WINRT_GENERIC_843e69ba_5702_5d97_ab81_ef078de3f9b1
#define WINRT_GENERIC_843e69ba_5702_5d97_ab81_ef078de3f9b1
template <> struct __declspec(uuid("843e69ba-5702-5d97-ab81-ef078de3f9b1")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_5cb4a98f_abf1_5518_9094_26db326a5f4e
#define WINRT_GENERIC_5cb4a98f_abf1_5518_9094_26db326a5f4e
template <> struct __declspec(uuid("5cb4a98f-abf1-5518-9094-26db326a5f4e")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_80423f11_054f_5eac_afd3_63b6ce15e77b
#define WINRT_GENERIC_80423f11_054f_5eac_afd3_63b6ce15e77b
template <> struct __declspec(uuid("80423f11-054f-5eac-afd3-63b6ce15e77b")) __declspec(novtable) IReference<Windows::Foundation::Rect> : impl_IReference<Windows::Foundation::Rect> {};
#endif

#ifndef WINRT_GENERIC_b98aab3a_fe80_5b27_88c3_e77ff585a96b
#define WINRT_GENERIC_b98aab3a_fe80_5b27_88c3_e77ff585a96b
template <> struct __declspec(uuid("b98aab3a-fe80-5b27-88c3-e77ff585a96b")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
#define WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
template <> struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8")) __declspec(novtable) IReference<float> : impl_IReference<float> {};
#endif

#ifndef WINRT_GENERIC_e20596aa_0bbe_5203_be6b_6b71ff5b0843
#define WINRT_GENERIC_e20596aa_0bbe_5203_be6b_6b71ff5b0843
template <> struct __declspec(uuid("e20596aa-0bbe-5203-be6b-6b71ff5b0843")) __declspec(novtable) IReference<winrt::Windows::Media::Devices::CaptureSceneMode> : impl_IReference<winrt::Windows::Media::Devices::CaptureSceneMode> {};
#endif

#ifndef WINRT_GENERIC_58820185_5da0_5faa_86da_9bd9f03974fa
#define WINRT_GENERIC_58820185_5da0_5faa_86da_9bd9f03974fa
template <> struct __declspec(uuid("58820185-5da0-5faa-86da-9bd9f03974fa")) __declspec(novtable) IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> : impl_IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> {};
#endif

#ifndef WINRT_GENERIC_79c7838a_39e2_5287_ac3b_b118db251002
#define WINRT_GENERIC_79c7838a_39e2_5287_ac3b_b118db251002
template <> struct __declspec(uuid("79c7838a-39e2-5287-ac3b-b118db251002")) __declspec(novtable) IReference<Windows::Media::Capture::WhiteBalanceGain> : impl_IReference<Windows::Media::Capture::WhiteBalanceGain> {};
#endif

#ifndef WINRT_GENERIC_83dc154d_bb6f_598e_a887_41ba1801f019
#define WINRT_GENERIC_83dc154d_bb6f_598e_a887_41ba1801f019
template <> struct __declspec(uuid("83dc154d-bb6f-598e-a887-41ba1801f019")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e521c894_2c26_5946_9e61_2b5e188d01ed
#define WINRT_GENERIC_e521c894_2c26_5946_9e61_2b5e188d01ed
template <> struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::StorageFile> : impl_AsyncOperationCompletedHandler<Windows::Storage::StorageFile> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b3e8378f_710c_5126_a6c9_8f489f63e15e
#define WINRT_GENERIC_b3e8378f_710c_5126_a6c9_8f489f63e15e
template <> struct __declspec(uuid("b3e8378f-710c-5126-a6c9-8f489f63e15e")) __declspec(novtable) IIterator<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> : impl_IIterator<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> {};
#endif

#ifndef WINRT_GENERIC_0895e56d_fe1f_5364_ab67_c597d8970b89
#define WINRT_GENERIC_0895e56d_fe1f_5364_ab67_c597d8970b89
template <> struct __declspec(uuid("0895e56d-fe1f-5364-ab67-c597d8970b89")) __declspec(novtable) IIterable<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> : impl_IIterable<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> {};
#endif

#ifndef WINRT_GENERIC_a9bc95f8_b5c0_5108_b9ed_a902339366e9
#define WINRT_GENERIC_a9bc95f8_b5c0_5108_b9ed_a902339366e9
template <> struct __declspec(uuid("a9bc95f8-b5c0-5108-b9ed-a902339366e9")) __declspec(novtable) IIterator<Windows::Media::Capture::MediaCaptureVideoProfile> : impl_IIterator<Windows::Media::Capture::MediaCaptureVideoProfile> {};
#endif

#ifndef WINRT_GENERIC_dbd49d71_e07b_5e11_824a_62ace8bdfc3e
#define WINRT_GENERIC_dbd49d71_e07b_5e11_824a_62ace8bdfc3e
template <> struct __declspec(uuid("dbd49d71-e07b-5e11-824a-62ace8bdfc3e")) __declspec(novtable) IIterable<Windows::Media::Capture::MediaCaptureVideoProfile> : impl_IIterable<Windows::Media::Capture::MediaCaptureVideoProfile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_64a8f80c_e646_52bb_8f4b_2a1d6b0b8219
#define WINRT_GENERIC_64a8f80c_e646_52bb_8f4b_2a1d6b0b8219
template <> struct __declspec(uuid("64a8f80c-e646-52bb-8f4b-2a1d6b0b8219")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagMediaRecording> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagMediaRecording> {};
#endif

#ifndef WINRT_GENERIC_6cebb368_4e84_500a_9a5f_7b9a1ade1f44
#define WINRT_GENERIC_6cebb368_4e84_500a_9a5f_7b9a1ade1f44
template <> struct __declspec(uuid("6cebb368-4e84-500a-9a5f-7b9a1ade1f44")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagPhotoCapture> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagPhotoCapture> {};
#endif

#ifndef WINRT_GENERIC_767e0fdc_9563_572d_84e1_9caab0deb63f
#define WINRT_GENERIC_767e0fdc_9563_572d_84e1_9caab0deb63f
template <> struct __declspec(uuid("767e0fdc-9563-572d-84e1-9caab0deb63f")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture> {};
#endif

#ifndef WINRT_GENERIC_18a55dd3_01e3_5ae5_9b5e_c84ad40cf6b7
#define WINRT_GENERIC_18a55dd3_01e3_5ae5_9b5e_c84ad40cf6b7
template <> struct __declspec(uuid("18a55dd3-01e3-5ae5-9b5e-c84ad40cf6b7")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> {};
#endif

#ifndef WINRT_GENERIC_9c1b578e_fb7d_5bab_ba39_86387fe533b6
#define WINRT_GENERIC_9c1b578e_fb7d_5bab_ba39_86387fe533b6
template <> struct __declspec(uuid("9c1b578e-fb7d-5bab-ba39-86387fe533b6")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::IMediaExtension> : impl_AsyncOperationCompletedHandler<Windows::Media::IMediaExtension> {};
#endif

#ifndef WINRT_GENERIC_6086f2fb_4a29_54ca_b6a3_f2391a03bc3b
#define WINRT_GENERIC_6086f2fb_4a29_54ca_b6a3_f2391a03bc3b
template <> struct __declspec(uuid("6086f2fb-4a29-54ca-b6a3-f2391a03bc3b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::VideoFrame> : impl_AsyncOperationCompletedHandler<Windows::Media::VideoFrame> {};
#endif

#ifndef WINRT_GENERIC_d1dfaec8_eed3_5ce3_9832_18344c98fa71
#define WINRT_GENERIC_d1dfaec8_eed3_5ce3_9832_18344c98fa71
template <> struct __declspec(uuid("d1dfaec8-eed3-5ce3-9832-18344c98fa71")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::AdvancedPhotoCapture> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::AdvancedPhotoCapture> {};
#endif

#ifndef WINRT_GENERIC_fe726311_26bf_51cd_bdeb_f40f8f469d0a
#define WINRT_GENERIC_fe726311_26bf_51cd_bdeb_f40f8f469d0a
template <> struct __declspec(uuid("fe726311-26bf-51cd-bdeb-f40f8f469d0a")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::MediaCapturePauseResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::MediaCapturePauseResult> {};
#endif

#ifndef WINRT_GENERIC_5d4e0674_1df4_5326_ba78_72f6655d2a76
#define WINRT_GENERIC_5d4e0674_1df4_5326_ba78_72f6655d2a76
template <> struct __declspec(uuid("5d4e0674-1df4-5326-ba78-72f6655d2a76")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::MediaCaptureStopResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::MediaCaptureStopResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_29f35a95_7eae_55a7_bc19_ed87baed4869
#define WINRT_GENERIC_29f35a95_7eae_55a7_bc19_ed87baed4869
template <> struct __declspec(uuid("29f35a95-7eae-55a7-bc19-ed87baed4869")) __declspec(novtable) IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource> : impl_IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a6214dad_b917_5c89_a068_e32c9a7037d3
#define WINRT_GENERIC_a6214dad_b917_5c89_a068_e32c9a7037d3
template <> struct __declspec(uuid("a6214dad-b917-5c89-a068-e32c9a7037d3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::Frames::MediaFrameReader> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::Frames::MediaFrameReader> {};
#endif

#ifndef WINRT_GENERIC_fdb0aa78_04e1_56b3_b6fc_f4de79cd41a0
#define WINRT_GENERIC_fdb0aa78_04e1_56b3_b6fc_f4de79cd41a0
template <> struct __declspec(uuid("fdb0aa78-04e1-56b3-b6fc-f4de79cd41a0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::CapturedPhoto> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::CapturedPhoto> {};
#endif

#ifndef WINRT_GENERIC_edf3452c_d918_5c95_8e3a_245044dd70df
#define WINRT_GENERIC_edf3452c_d918_5c95_8e3a_245044dd70df
template <> struct __declspec(uuid("edf3452c-d918-5c95-8e3a-245044dd70df")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Capture::AdvancedCapturedPhoto> : impl_AsyncOperationCompletedHandler<Windows::Media::Capture::AdvancedCapturedPhoto> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_d8ec36b7_64eb_5675_ad81_62233e483e17
#define WINRT_GENERIC_d8ec36b7_64eb_5675_ad81_62233e483e17
template <> struct __declspec(uuid("d8ec36b7-64eb-5675-ad81-62233e483e17")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> {};
#endif

#ifndef WINRT_GENERIC_a038e80f_0b3d_5cd4_849d_13036e1f506e
#define WINRT_GENERIC_a038e80f_0b3d_5cd4_849d_13036e1f506e
template <> struct __declspec(uuid("a038e80f-0b3d-5cd4-849d-13036e1f506e")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Media::Capture::Frames::MediaFrameSource>> {};
#endif


}

namespace Windows::Media::Capture {

template <typename D>
struct WINRT_EBO impl_IAdvancedCapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Devices::AdvancedPhotoMode Mode() const;
    Windows::IInspectable Context() const;
};

template <typename D>
struct WINRT_EBO impl_IAdvancedCapturedPhoto2
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> FrameBoundsRelativeToReferencePhoto() const;
};

template <typename D>
struct WINRT_EBO impl_IAdvancedPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> CaptureAsync(const Windows::IInspectable & context) const;
    event_token OptionalReferencePhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const;
    using OptionalReferencePhotoCaptured_revoker = event_revoker<IAdvancedPhotoCapture>;
    OptionalReferencePhotoCaptured_revoker OptionalReferencePhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> & handler) const;
    void OptionalReferencePhotoCaptured(event_token token) const;
    event_token AllPhotosCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> & handler) const;
    using AllPhotosCaptured_revoker = event_revoker<IAdvancedPhotoCapture>;
    AllPhotosCaptured_revoker AllPhotosCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::IInspectable> & handler) const;
    void AllPhotosCaptured(event_token token) const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCapture
{
    bool IsCapturingAudio() const;
    bool IsCapturingVideo() const;
    event_token CapturingChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> & handler) const;
    using CapturingChanged_revoker = event_revoker<IAppCapture>;
    CapturingChanged_revoker CapturingChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::IInspectable> & handler) const;
    void CapturingChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys
{
    void ToggleGameBarKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleGameBarKey() const;
    void ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleGameBarKeyModifiers() const;
    void SaveHistoricalVideoKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey SaveHistoricalVideoKey() const;
    void SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers SaveHistoricalVideoKeyModifiers() const;
    void ToggleRecordingKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleRecordingKey() const;
    void ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingKeyModifiers() const;
    void TakeScreenshotKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey TakeScreenshotKey() const;
    void TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers TakeScreenshotKeyModifiers() const;
    void ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleRecordingIndicatorKey() const;
    void ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleRecordingIndicatorKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys2
{
    void ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleMicrophoneCaptureKey() const;
    void ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleMicrophoneCaptureKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureAlternateShortcutKeys3
{
    void ToggleCameraCaptureKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleCameraCaptureKey() const;
    void ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleCameraCaptureKeyModifiers() const;
    void ToggleBroadcastKey(Windows::System::VirtualKey value) const;
    Windows::System::VirtualKey ToggleBroadcastKey() const;
    void ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) const;
    Windows::System::VirtualKeyModifiers ToggleBroadcastKeyModifiers() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureManagerStatics
{
    Windows::Media::Capture::AppCaptureSettings GetCurrentSettings() const;
    void ApplySettings(const Windows::Media::Capture::AppCaptureSettings & appCaptureSettings) const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings
{
    void AppCaptureDestinationFolder(const Windows::Storage::StorageFolder & value) const;
    Windows::Storage::StorageFolder AppCaptureDestinationFolder() const;
    void AudioEncodingBitrate(uint32_t value) const;
    uint32_t AudioEncodingBitrate() const;
    void IsAudioCaptureEnabled(bool value) const;
    bool IsAudioCaptureEnabled() const;
    void CustomVideoEncodingBitrate(uint32_t value) const;
    uint32_t CustomVideoEncodingBitrate() const;
    void CustomVideoEncodingHeight(uint32_t value) const;
    uint32_t CustomVideoEncodingHeight() const;
    void CustomVideoEncodingWidth(uint32_t value) const;
    uint32_t CustomVideoEncodingWidth() const;
    void HistoricalBufferLength(uint32_t value) const;
    uint32_t HistoricalBufferLength() const;
    void HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) const;
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit HistoricalBufferLengthUnit() const;
    void IsHistoricalCaptureEnabled(bool value) const;
    bool IsHistoricalCaptureEnabled() const;
    void IsHistoricalCaptureOnBatteryAllowed(bool value) const;
    bool IsHistoricalCaptureOnBatteryAllowed() const;
    void IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const;
    bool IsHistoricalCaptureOnWirelessDisplayAllowed() const;
    void MaximumRecordLength(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan MaximumRecordLength() const;
    void ScreenshotDestinationFolder(const Windows::Storage::StorageFolder & value) const;
    Windows::Storage::StorageFolder ScreenshotDestinationFolder() const;
    void VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode VideoEncodingBitrateMode() const;
    void VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode VideoEncodingResolutionMode() const;
    void IsAppCaptureEnabled(bool value) const;
    bool IsAppCaptureEnabled() const;
    bool IsCpuConstrained() const;
    bool IsDisabledByPolicy() const;
    bool IsMemoryConstrained() const;
    bool HasHardwareEncoder() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings2
{
    bool IsGpuConstrained() const;
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys AlternateShortcutKeys() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings3
{
    void IsMicrophoneCaptureEnabled(bool value) const;
    bool IsMicrophoneCaptureEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureSettings4
{
    void IsMicrophoneCaptureEnabledByDefault(bool value) const;
    bool IsMicrophoneCaptureEnabledByDefault() const;
    void SystemAudioGain(double value) const;
    double SystemAudioGain() const;
    void MicrophoneGain(double value) const;
    double MicrophoneGain() const;
    void VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) const;
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode VideoEncodingFrameRateMode() const;
};

template <typename D>
struct WINRT_EBO impl_IAppCaptureStatics
{
    Windows::Media::Capture::AppCapture GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUI
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings PhotoSettings() const;
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings VideoSettings() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUIPhotoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) const;
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) const;
    Windows::Foundation::Size CroppedSizeInPixels() const;
    void CroppedSizeInPixels(const Windows::Foundation::Size & value) const;
    Windows::Foundation::Size CroppedAspectRatio() const;
    void CroppedAspectRatio(const Windows::Foundation::Size & value) const;
    bool AllowCropping() const;
    void AllowCropping(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraCaptureUIVideoCaptureSettings
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat Format() const;
    void Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) const;
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution MaxResolution() const;
    void MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) const;
    float MaxDurationInSeconds() const;
    void MaxDurationInSeconds(float value) const;
    bool AllowTrimming() const;
    void AllowTrimming(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraOptionsUIStatics
{
    void Show(const Windows::Media::Capture::MediaCapture & mediaCapture) const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrame
{
    uint32_t Width() const;
    uint32_t Height() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameControlValues
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Exposure() const;
    Windows::Foundation::IReference<float> ExposureCompensation() const;
    Windows::Foundation::IReference<uint32_t> IsoSpeed() const;
    Windows::Foundation::IReference<uint32_t> Focus() const;
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::CaptureSceneMode> SceneMode() const;
    Windows::Foundation::IReference<bool> Flashed() const;
    Windows::Foundation::IReference<float> FlashPowerPercent() const;
    Windows::Foundation::IReference<uint32_t> WhiteBalance() const;
    Windows::Foundation::IReference<float> ZoomFactor() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameControlValues2
{
    Windows::Foundation::IReference<winrt::Windows::Media::Devices::MediaCaptureFocusState> FocusState() const;
    Windows::Foundation::IReference<double> IsoDigitalGain() const;
    Windows::Foundation::IReference<double> IsoAnalogGain() const;
    Windows::Media::MediaProperties::MediaRatio SensorFrameRate() const;
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> WhiteBalanceGain() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedFrameWithSoftwareBitmap
{
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
};

template <typename D>
struct WINRT_EBO impl_ICapturedPhoto
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording2
{
    Windows::Foundation::IAsyncAction PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncAction ResumeAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagMediaRecording3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopWithResultAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagPhotoCapture
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> CaptureAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
};

template <typename D>
struct WINRT_EBO impl_ILowLagPhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const;
    using PhotoCaptured_revoker = event_revoker<ILowLagPhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> & handler) const;
    void PhotoCaptured(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture
{
    Windows::Foundation::IAsyncAction InitializeAsync() const;
    Windows::Foundation::IAsyncAction InitializeAsync(const Windows::Media::Capture::MediaCaptureInitializationSettings & mediaCaptureInitializationSettings) const;
    Windows::Foundation::IAsyncAction StartRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncAction StartRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncAction StartRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopRecordAsync() const;
    Windows::Foundation::IAsyncAction CapturePhotoToStorageFileAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncAction CapturePhotoToStreamAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncAction AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, hstring_ref effectActivationID, const Windows::Foundation::Collections::IPropertySet & effectSettings) const;
    Windows::Foundation::IAsyncAction ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType) const;
    void SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, const Windows::IInspectable & propertyValue) const;
    Windows::IInspectable GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId) const;
    event_token Failed(const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const;
    using Failed_revoker = event_revoker<IMediaCapture>;
    Failed_revoker Failed(auto_revoke_t, const Windows::Media::Capture::MediaCaptureFailedEventHandler & errorEventHandler) const;
    void Failed(event_token eventCookie) const;
    event_token RecordLimitationExceeded(const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const;
    using RecordLimitationExceeded_revoker = event_revoker<IMediaCapture>;
    RecordLimitationExceeded_revoker RecordLimitationExceeded(auto_revoke_t, const Windows::Media::Capture::RecordLimitationExceededEventHandler & recordLimitationExceededEventHandler) const;
    void RecordLimitationExceeded(event_token eventCookie) const;
    Windows::Media::Capture::MediaCaptureSettings MediaCaptureSettings() const;
    Windows::Media::Devices::AudioDeviceController AudioDeviceController() const;
    Windows::Media::Devices::VideoDeviceController VideoDeviceController() const;
    void SetPreviewMirroring(bool value) const;
    bool GetPreviewMirroring() const;
    void SetPreviewRotation(Windows::Media::Capture::VideoRotation value) const;
    Windows::Media::Capture::VideoRotation GetPreviewRotation() const;
    void SetRecordRotation(Windows::Media::Capture::VideoRotation value) const;
    Windows::Media::Capture::VideoRotation GetRecordRotation() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStorageFileAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToStreamAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> PrepareLowLagRecordToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> PrepareLowLagPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> PrepareLowLagPhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    Windows::Foundation::IAsyncAction SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, const Windows::Media::MediaProperties::IMediaEncodingProperties & mediaEncodingProperties, const Windows::Media::MediaProperties::MediaPropertySet & encoderProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture3
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> PrepareVariablePhotoSequenceCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & type) const;
    event_token FocusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const;
    using FocusChanged_revoker = event_revoker<IMediaCapture3>;
    FocusChanged_revoker FocusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> & handler) const;
    void FocusChanged(event_token token) const;
    event_token PhotoConfirmationCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const;
    using PhotoConfirmationCaptured_revoker = event_revoker<IMediaCapture3>;
    PhotoConfirmationCaptured_revoker PhotoConfirmationCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> & handler) const;
    void PhotoConfirmationCaptured(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture4
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddAudioEffectAsync(const Windows::Media::Effects::IAudioEffectDefinition & definition) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> AddVideoEffectAsync(const Windows::Media::Effects::IVideoEffectDefinition & definition, Windows::Media::Capture::MediaStreamType mediaStreamType) const;
    Windows::Foundation::IAsyncAction PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncAction ResumeRecordAsync() const;
    event_token CameraStreamStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const;
    using CameraStreamStateChanged_revoker = event_revoker<IMediaCapture4>;
    CameraStreamStateChanged_revoker CameraStreamStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const;
    void CameraStreamStateChanged(event_token token) const;
    Windows::Media::Devices::CameraStreamState CameraStreamState() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> GetPreviewFrameAsync(const Windows::Media::VideoFrame & destination) const;
    event_token ThermalStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const;
    using ThermalStatusChanged_revoker = event_revoker<IMediaCapture4>;
    ThermalStatusChanged_revoker ThermalStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::IInspectable> & handler) const;
    void ThermalStatusChanged(event_token token) const;
    Windows::Media::Capture::MediaCaptureThermalStatus ThermalStatus() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> PrepareAdvancedPhotoCaptureAsync(const Windows::Media::MediaProperties::ImageEncodingProperties & encodingProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapture5
{
    Windows::Foundation::IAsyncAction RemoveEffectAsync(const Windows::Media::IMediaExtension & effect) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> StopRecordWithResultAsync() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> FrameSources() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_ref outputSubtype) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> CreateFrameReaderAsync(const Windows::Media::Capture::Frames::MediaFrameSource & inputSource, hstring_ref outputSubtype, const Windows::Graphics::Imaging::BitmapSize & outputSize) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureFailedEventArgs
{
    hstring Message() const;
    uint32_t Code() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureFocusChangedEventArgs
{
    Windows::Media::Devices::MediaCaptureFocusState FocusState() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings
{
    void AudioDeviceId(hstring_ref value) const;
    hstring AudioDeviceId() const;
    void VideoDeviceId(hstring_ref value) const;
    hstring VideoDeviceId() const;
    void StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    void PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings2
{
    void MediaCategory(Windows::Media::Capture::MediaCategory value) const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    void AudioProcessing(Windows::Media::AudioProcessing value) const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings3
{
    void AudioSource(const Windows::Media::Core::IMediaSource & value) const;
    Windows::Media::Core::IMediaSource AudioSource() const;
    void VideoSource(const Windows::Media::Core::IMediaSource & value) const;
    Windows::Media::Core::IMediaSource VideoSource() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings4
{
    Windows::Media::Capture::MediaCaptureVideoProfile VideoProfile() const;
    void VideoProfile(const Windows::Media::Capture::MediaCaptureVideoProfile & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PreviewMediaDescription() const;
    void PreviewMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription RecordMediaDescription() const;
    void RecordMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription PhotoMediaDescription() const;
    void PhotoMediaDescription(const Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureInitializationSettings5
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup SourceGroup() const;
    void SourceGroup(const Windows::Media::Capture::Frames::MediaFrameSourceGroup & value) const;
    Windows::Media::Capture::MediaCaptureSharingMode SharingMode() const;
    void SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) const;
    Windows::Media::Capture::MediaCaptureMemoryPreference MemoryPreference() const;
    void MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCapturePauseResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureSettings
{
    hstring AudioDeviceId() const;
    hstring VideoDeviceId() const;
    Windows::Media::Capture::StreamingCaptureMode StreamingCaptureMode() const;
    Windows::Media::Capture::PhotoCaptureSource PhotoCaptureSource() const;
    Windows::Media::Capture::VideoDeviceCharacteristic VideoDeviceCharacteristic() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureSettings2
{
    bool ConcurrentRecordAndPhotoSupported() const;
    bool ConcurrentRecordAndPhotoSequenceSupported() const;
    bool CameraSoundRequiredForRegion() const;
    Windows::Foundation::IReference<uint32_t> Horizontal35mmEquivalentFocalLength() const;
    Windows::Foundation::IReference<int32_t> PitchOffsetDegrees() const;
    Windows::Foundation::IReference<uint32_t> Vertical35mmEquivalentFocalLength() const;
    Windows::Media::Capture::MediaCategory MediaCategory() const;
    Windows::Media::AudioProcessing AudioProcessing() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureStatics
{
    bool IsVideoProfileSupported(hstring_ref videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindAllVideoProfiles(hstring_ref videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindConcurrentProfiles(hstring_ref videoDeviceId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> FindKnownVideoProfiles(hstring_ref videoDeviceId, Windows::Media::Capture::KnownVideoProfile name) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureStopResult
{
    Windows::Media::VideoFrame LastFrame() const;
    Windows::Foundation::TimeSpan RecordDuration() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoPreview
{
    Windows::Foundation::IAsyncAction StartPreviewAsync() const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, const Windows::Media::IMediaExtension & customMediaSink) const;
    Windows::Foundation::IAsyncAction StartPreviewToCustomSinkAsync(const Windows::Media::MediaProperties::MediaEncodingProfile & encodingProfile, hstring_ref customSinkActivationId, const Windows::Foundation::Collections::IPropertySet & customSinkSettings) const;
    Windows::Foundation::IAsyncAction StopPreviewAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoProfile
{
    hstring Id() const;
    hstring VideoDeviceId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPreviewMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedRecordMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> SupportedPhotoMediaDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> GetConcurrency() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCaptureVideoProfileMediaDescription
{
    uint32_t Width() const;
    uint32_t Height() const;
    double FrameRate() const;
    bool IsVariablePhotoSequenceSupported() const;
    bool IsHdrVideoSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IOptionalReferencePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::IInspectable Context() const;
};

template <typename D>
struct WINRT_EBO impl_IPhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Media::Capture::CapturedFrame Thumbnail() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IPhotoConfirmationCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
};

template <typename D>
struct WINRT_EBO impl_IScreenCapture
{
    Windows::Media::Core::IMediaSource AudioSource() const;
    Windows::Media::Core::IMediaSource VideoSource() const;
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
    event_token SourceSuspensionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const;
    using SourceSuspensionChanged_revoker = event_revoker<IScreenCapture>;
    SourceSuspensionChanged_revoker SourceSuspensionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::ScreenCapture, Windows::Media::Capture::SourceSuspensionChangedEventArgs> & handler) const;
    void SourceSuspensionChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IScreenCaptureStatics
{
    Windows::Media::Capture::ScreenCapture GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ISourceSuspensionChangedEventArgs
{
    bool IsAudioSuspended() const;
    bool IsVideoSuspended() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStreamConfiguration
{
    Windows::Media::MediaProperties::VideoEncodingProperties InputProperties() const;
    Windows::Media::MediaProperties::VideoEncodingProperties OutputProperties() const;
};

struct MediaCaptureFailedEventHandler : Windows::IUnknown
{
    MediaCaptureFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MediaCaptureFailedEventHandler>(m_ptr); }
    template <typename L> MediaCaptureFailedEventHandler(L lambda);
    template <typename F> MediaCaptureFailedEventHandler (F * function);
    template <typename O, typename M> MediaCaptureFailedEventHandler(O * object, M method);
    void operator()(const Windows::Media::Capture::MediaCapture & sender, const Windows::Media::Capture::MediaCaptureFailedEventArgs & errorEventArgs) const;
};

struct RecordLimitationExceededEventHandler : Windows::IUnknown
{
    RecordLimitationExceededEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<RecordLimitationExceededEventHandler>(m_ptr); }
    template <typename L> RecordLimitationExceededEventHandler(L lambda);
    template <typename F> RecordLimitationExceededEventHandler (F * function);
    template <typename O, typename M> RecordLimitationExceededEventHandler(O * object, M method);
    void operator()(const Windows::Media::Capture::MediaCapture & sender) const;
};

struct IAdvancedCapturedPhoto :
    Windows::IInspectable,
    impl::consume<IAdvancedCapturedPhoto>
{
    IAdvancedCapturedPhoto(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdvancedCapturedPhoto>(m_ptr); }
};

struct IAdvancedCapturedPhoto2 :
    Windows::IInspectable,
    impl::consume<IAdvancedCapturedPhoto2>
{
    IAdvancedCapturedPhoto2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdvancedCapturedPhoto2>(m_ptr); }
};

struct IAdvancedPhotoCapture :
    Windows::IInspectable,
    impl::consume<IAdvancedPhotoCapture>
{
    IAdvancedPhotoCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAdvancedPhotoCapture>(m_ptr); }
};

struct IAppCapture :
    Windows::IInspectable,
    impl::consume<IAppCapture>
{
    IAppCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCapture>(m_ptr); }
};

struct IAppCaptureAlternateShortcutKeys :
    Windows::IInspectable,
    impl::consume<IAppCaptureAlternateShortcutKeys>
{
    IAppCaptureAlternateShortcutKeys(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureAlternateShortcutKeys>(m_ptr); }
};

struct IAppCaptureAlternateShortcutKeys2 :
    Windows::IInspectable,
    impl::consume<IAppCaptureAlternateShortcutKeys2>
{
    IAppCaptureAlternateShortcutKeys2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureAlternateShortcutKeys2>(m_ptr); }
};

struct IAppCaptureAlternateShortcutKeys3 :
    Windows::IInspectable,
    impl::consume<IAppCaptureAlternateShortcutKeys3>
{
    IAppCaptureAlternateShortcutKeys3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureAlternateShortcutKeys3>(m_ptr); }
};

struct IAppCaptureManagerStatics :
    Windows::IInspectable,
    impl::consume<IAppCaptureManagerStatics>
{
    IAppCaptureManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureManagerStatics>(m_ptr); }
};

struct IAppCaptureSettings :
    Windows::IInspectable,
    impl::consume<IAppCaptureSettings>
{
    IAppCaptureSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureSettings>(m_ptr); }
};

struct IAppCaptureSettings2 :
    Windows::IInspectable,
    impl::consume<IAppCaptureSettings2>
{
    IAppCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureSettings2>(m_ptr); }
};

struct IAppCaptureSettings3 :
    Windows::IInspectable,
    impl::consume<IAppCaptureSettings3>
{
    IAppCaptureSettings3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureSettings3>(m_ptr); }
};

struct IAppCaptureSettings4 :
    Windows::IInspectable,
    impl::consume<IAppCaptureSettings4>
{
    IAppCaptureSettings4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureSettings4>(m_ptr); }
};

struct IAppCaptureStatics :
    Windows::IInspectable,
    impl::consume<IAppCaptureStatics>
{
    IAppCaptureStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppCaptureStatics>(m_ptr); }
};

struct ICameraCaptureUI :
    Windows::IInspectable,
    impl::consume<ICameraCaptureUI>
{
    ICameraCaptureUI(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraCaptureUI>(m_ptr); }
};

struct ICameraCaptureUIPhotoCaptureSettings :
    Windows::IInspectable,
    impl::consume<ICameraCaptureUIPhotoCaptureSettings>
{
    ICameraCaptureUIPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraCaptureUIPhotoCaptureSettings>(m_ptr); }
};

struct ICameraCaptureUIVideoCaptureSettings :
    Windows::IInspectable,
    impl::consume<ICameraCaptureUIVideoCaptureSettings>
{
    ICameraCaptureUIVideoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraCaptureUIVideoCaptureSettings>(m_ptr); }
};

struct ICameraOptionsUIStatics :
    Windows::IInspectable,
    impl::consume<ICameraOptionsUIStatics>
{
    ICameraOptionsUIStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraOptionsUIStatics>(m_ptr); }
};

struct ICapturedFrame :
    Windows::IInspectable,
    impl::consume<ICapturedFrame>,
    impl::require<ICapturedFrame, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ICapturedFrame(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICapturedFrame>(m_ptr); }
};

struct ICapturedFrameControlValues :
    Windows::IInspectable,
    impl::consume<ICapturedFrameControlValues>
{
    ICapturedFrameControlValues(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICapturedFrameControlValues>(m_ptr); }
};

struct ICapturedFrameControlValues2 :
    Windows::IInspectable,
    impl::consume<ICapturedFrameControlValues2>
{
    ICapturedFrameControlValues2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICapturedFrameControlValues2>(m_ptr); }
};

struct ICapturedFrameWithSoftwareBitmap :
    Windows::IInspectable,
    impl::consume<ICapturedFrameWithSoftwareBitmap>
{
    ICapturedFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICapturedFrameWithSoftwareBitmap>(m_ptr); }
};

struct ICapturedPhoto :
    Windows::IInspectable,
    impl::consume<ICapturedPhoto>
{
    ICapturedPhoto(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICapturedPhoto>(m_ptr); }
};

struct ILowLagMediaRecording :
    Windows::IInspectable,
    impl::consume<ILowLagMediaRecording>
{
    ILowLagMediaRecording(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLagMediaRecording>(m_ptr); }
};

struct ILowLagMediaRecording2 :
    Windows::IInspectable,
    impl::consume<ILowLagMediaRecording2>
{
    ILowLagMediaRecording2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLagMediaRecording2>(m_ptr); }
};

struct ILowLagMediaRecording3 :
    Windows::IInspectable,
    impl::consume<ILowLagMediaRecording3>
{
    ILowLagMediaRecording3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLagMediaRecording3>(m_ptr); }
};

struct ILowLagPhotoCapture :
    Windows::IInspectable,
    impl::consume<ILowLagPhotoCapture>
{
    ILowLagPhotoCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLagPhotoCapture>(m_ptr); }
};

struct ILowLagPhotoSequenceCapture :
    Windows::IInspectable,
    impl::consume<ILowLagPhotoSequenceCapture>
{
    ILowLagPhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILowLagPhotoSequenceCapture>(m_ptr); }
};

struct IMediaCapture :
    Windows::IInspectable,
    impl::consume<IMediaCapture>
{
    IMediaCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapture>(m_ptr); }
};

struct IMediaCapture2 :
    Windows::IInspectable,
    impl::consume<IMediaCapture2>
{
    IMediaCapture2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapture2>(m_ptr); }
};

struct IMediaCapture3 :
    Windows::IInspectable,
    impl::consume<IMediaCapture3>
{
    IMediaCapture3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapture3>(m_ptr); }
};

struct IMediaCapture4 :
    Windows::IInspectable,
    impl::consume<IMediaCapture4>
{
    IMediaCapture4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapture4>(m_ptr); }
};

struct IMediaCapture5 :
    Windows::IInspectable,
    impl::consume<IMediaCapture5>
{
    IMediaCapture5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapture5>(m_ptr); }
};

struct IMediaCaptureFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaCaptureFailedEventArgs>
{
    IMediaCaptureFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureFailedEventArgs>(m_ptr); }
};

struct IMediaCaptureFocusChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaCaptureFocusChangedEventArgs>
{
    IMediaCaptureFocusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureFocusChangedEventArgs>(m_ptr); }
};

struct IMediaCaptureInitializationSettings :
    Windows::IInspectable,
    impl::consume<IMediaCaptureInitializationSettings>
{
    IMediaCaptureInitializationSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureInitializationSettings>(m_ptr); }
};

struct IMediaCaptureInitializationSettings2 :
    Windows::IInspectable,
    impl::consume<IMediaCaptureInitializationSettings2>
{
    IMediaCaptureInitializationSettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureInitializationSettings2>(m_ptr); }
};

struct IMediaCaptureInitializationSettings3 :
    Windows::IInspectable,
    impl::consume<IMediaCaptureInitializationSettings3>
{
    IMediaCaptureInitializationSettings3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureInitializationSettings3>(m_ptr); }
};

struct IMediaCaptureInitializationSettings4 :
    Windows::IInspectable,
    impl::consume<IMediaCaptureInitializationSettings4>
{
    IMediaCaptureInitializationSettings4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureInitializationSettings4>(m_ptr); }
};

struct IMediaCaptureInitializationSettings5 :
    Windows::IInspectable,
    impl::consume<IMediaCaptureInitializationSettings5>
{
    IMediaCaptureInitializationSettings5(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureInitializationSettings5>(m_ptr); }
};

struct IMediaCapturePauseResult :
    Windows::IInspectable,
    impl::consume<IMediaCapturePauseResult>
{
    IMediaCapturePauseResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCapturePauseResult>(m_ptr); }
};

struct IMediaCaptureSettings :
    Windows::IInspectable,
    impl::consume<IMediaCaptureSettings>
{
    IMediaCaptureSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureSettings>(m_ptr); }
};

struct IMediaCaptureSettings2 :
    Windows::IInspectable,
    impl::consume<IMediaCaptureSettings2>
{
    IMediaCaptureSettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureSettings2>(m_ptr); }
};

struct IMediaCaptureStatics :
    Windows::IInspectable,
    impl::consume<IMediaCaptureStatics>
{
    IMediaCaptureStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureStatics>(m_ptr); }
};

struct IMediaCaptureStopResult :
    Windows::IInspectable,
    impl::consume<IMediaCaptureStopResult>
{
    IMediaCaptureStopResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureStopResult>(m_ptr); }
};

struct IMediaCaptureVideoPreview :
    Windows::IInspectable,
    impl::consume<IMediaCaptureVideoPreview>
{
    IMediaCaptureVideoPreview(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureVideoPreview>(m_ptr); }
};

struct IMediaCaptureVideoProfile :
    Windows::IInspectable,
    impl::consume<IMediaCaptureVideoProfile>
{
    IMediaCaptureVideoProfile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureVideoProfile>(m_ptr); }
};

struct IMediaCaptureVideoProfileMediaDescription :
    Windows::IInspectable,
    impl::consume<IMediaCaptureVideoProfileMediaDescription>
{
    IMediaCaptureVideoProfileMediaDescription(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCaptureVideoProfileMediaDescription>(m_ptr); }
};

struct IOptionalReferencePhotoCapturedEventArgs :
    Windows::IInspectable,
    impl::consume<IOptionalReferencePhotoCapturedEventArgs>
{
    IOptionalReferencePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IOptionalReferencePhotoCapturedEventArgs>(m_ptr); }
};

struct IPhotoCapturedEventArgs :
    Windows::IInspectable,
    impl::consume<IPhotoCapturedEventArgs>
{
    IPhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhotoCapturedEventArgs>(m_ptr); }
};

struct IPhotoConfirmationCapturedEventArgs :
    Windows::IInspectable,
    impl::consume<IPhotoConfirmationCapturedEventArgs>
{
    IPhotoConfirmationCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhotoConfirmationCapturedEventArgs>(m_ptr); }
};

struct IScreenCapture :
    Windows::IInspectable,
    impl::consume<IScreenCapture>
{
    IScreenCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScreenCapture>(m_ptr); }
};

struct IScreenCaptureStatics :
    Windows::IInspectable,
    impl::consume<IScreenCaptureStatics>
{
    IScreenCaptureStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IScreenCaptureStatics>(m_ptr); }
};

struct ISourceSuspensionChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ISourceSuspensionChangedEventArgs>
{
    ISourceSuspensionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISourceSuspensionChangedEventArgs>(m_ptr); }
};

struct IVideoStreamConfiguration :
    Windows::IInspectable,
    impl::consume<IVideoStreamConfiguration>
{
    IVideoStreamConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoStreamConfiguration>(m_ptr); }
};

}

}
