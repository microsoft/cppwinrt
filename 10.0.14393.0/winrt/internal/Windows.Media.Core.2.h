// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Core.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Media.2.h"
#include "Windows.Media.Effects.2.h"
#include "Windows.Media.Playback.2.h"

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


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_5ee3189c_7dbf_5998_ad07_5414fb82567c
#define WINRT_GENERIC_5ee3189c_7dbf_5998_ad07_5414fb82567c
template <> struct __declspec(uuid("5ee3189c-7dbf-5998-ad07-5414fb82567c")) __declspec(novtable) IMap<GUID, Windows::IInspectable> : impl_IMap<GUID, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_3bda1540_d089_5a1a_8f0d_94eba8068e58
#define WINRT_GENERIC_3bda1540_d089_5a1a_8f0d_94eba8068e58
template <> struct __declspec(uuid("3bda1540-d089-5a1a-8f0d-94eba8068e58")) __declspec(novtable) IKeyValuePair<GUID, Windows::IInspectable> : impl_IKeyValuePair<GUID, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_e4d2c732_bbc1_5ef4_869f_5007ceb55f6e
#define WINRT_GENERIC_e4d2c732_bbc1_5ef4_869f_5007ceb55f6e
template <> struct __declspec(uuid("e4d2c732-bbc1-5ef4-869f-5007ceb55f6e")) __declspec(novtable) IMapView<GUID, Windows::IInspectable> : impl_IMapView<GUID, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_238cc251_d0b8_5a34_81d4_0dd1f936a20d
#define WINRT_GENERIC_238cc251_d0b8_5a34_81d4_0dd1f936a20d
template <> struct __declspec(uuid("238cc251-d0b8-5a34-81d4-0dd1f936a20d")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_a93d5846_c660_586e_b6b5_a52fb81f9240
#define WINRT_GENERIC_a93d5846_c660_586e_b6b5_a52fb81f9240
template <> struct __declspec(uuid("a93d5846-c660-586e-b6b5-a52fb81f9240")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6fd6ded7_421b_5ef5_8bf5_edea45401665
#define WINRT_GENERIC_6fd6ded7_421b_5ef5_8bf5_edea45401665
template <> struct __declspec(uuid("6fd6ded7-421b-5ef5-8bf5-edea45401665")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_4f1a3ae3_b8b7_5689_901d_b0b623f5a172
#define WINRT_GENERIC_4f1a3ae3_b8b7_5689_901d_b0b623f5a172
template <> struct __declspec(uuid("4f1a3ae3-b8b7-5689-901d-b0b623f5a172")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_452b2e4a_5511_5b3c_8a8e_ee659576a4c1
#define WINRT_GENERIC_452b2e4a_5511_5b3c_8a8e_ee659576a4c1
template <> struct __declspec(uuid("452b2e4a-5511-5b3c-8a8e-ee659576a4c1")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_9d812c70_9f0d_5ad5_8274_f760c9ca0c38
#define WINRT_GENERIC_9d812c70_9f0d_5ad5_8274_f760c9ca0c38
template <> struct __declspec(uuid("9d812c70-9f0d-5ad5-8274-f760c9ca0c38")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d4dc5ef1_c1cb_5c32_803d_f2f9a7ad9916
#define WINRT_GENERIC_d4dc5ef1_c1cb_5c32_803d_f2f9a7ad9916
template <> struct __declspec(uuid("d4dc5ef1-c1cb-5c32-803d-f2f9a7ad9916")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_3cdc5e86_4ada_5ef7_967a_e137a4621907
#define WINRT_GENERIC_3cdc5e86_4ada_5ef7_967a_e137a4621907
template <> struct __declspec(uuid("3cdc5e86-4ada-5ef7-967a-e137a4621907")) __declspec(novtable) IAsyncOperation<Windows::Media::Core::MediaStreamSample> : impl_IAsyncOperation<Windows::Media::Core::MediaStreamSample> {};
#endif

#ifndef WINRT_GENERIC_724bf4ef_de7a_5dbd_815e_522a87bc3344
#define WINRT_GENERIC_724bf4ef_de7a_5dbd_815e_522a87bc3344
template <> struct __declspec(uuid("724bf4ef-de7a-5dbd-815e-522a87bc3344")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_187fd3d7_bb9d_541a_94fd_43c31dd84a67
#define WINRT_GENERIC_187fd3d7_bb9d_541a_94fd_43c31dd84a67
template <> struct __declspec(uuid("187fd3d7-bb9d-541a-94fd-43c31dd84a67")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_87ff1dd1_7ec3_5bc5_b558_0425d806bf4b
#define WINRT_GENERIC_87ff1dd1_7ec3_5bc5_b558_0425d806bf4b
template <> struct __declspec(uuid("87ff1dd1-7ec3-5bc5-b558-0425d806bf4b")) __declspec(novtable) IVectorView<Windows::Media::Core::MseTimeRange> : impl_IVectorView<Windows::Media::Core::MseTimeRange> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0ff01695_fbb2_5e95_8ec7_da17d8e99f16
#define WINRT_GENERIC_0ff01695_fbb2_5e95_8ec7_da17d8e99f16
template <> struct __declspec(uuid("0ff01695-fbb2-5e95-8ec7-da17d8e99f16")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_85318263_1360_5c78_b0ad_52d6b45b19f3
#define WINRT_GENERIC_85318263_1360_5c78_b0ad_52d6b45b19f3
template <> struct __declspec(uuid("85318263-1360-5c78-b0ad-52d6b45b19f3")) __declspec(novtable) IVectorView<Windows::Media::Core::MseSourceBuffer> : impl_IVectorView<Windows::Media::Core::MseSourceBuffer> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_48630f8c_dbde_569e_a0c8_7588d1d2bd03
#define WINRT_GENERIC_48630f8c_dbde_569e_a0c8_7588d1d2bd03
template <> struct __declspec(uuid("48630f8c-dbde-569e-a0c8-7588d1d2bd03")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fcd6a2a3_b6ff_5572_912b_99ebaf95165d
#define WINRT_GENERIC_fcd6a2a3_b6ff_5572_912b_99ebaf95165d
template <> struct __declspec(uuid("fcd6a2a3-b6ff-5572-912b-99ebaf95165d")) __declspec(novtable) IVectorView<Windows::Media::Devices::Core::FrameController> : impl_IVectorView<Windows::Media::Devices::Core::FrameController> {};
#endif

#ifndef WINRT_GENERIC_39ef4411_0618_5b8d_8ea2_81c637f823f8
#define WINRT_GENERIC_39ef4411_0618_5b8d_8ea2_81c637f823f8
template <> struct __declspec(uuid("39ef4411-0618-5b8d-8ea2-81c637f823f8")) __declspec(novtable) IVectorView<Windows::Media::FaceAnalysis::DetectedFace> : impl_IVectorView<Windows::Media::FaceAnalysis::DetectedFace> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_01f0d7a6_f9bd_5bc1_aaa9_dff396f72f87
#define WINRT_GENERIC_01f0d7a6_f9bd_5bc1_aaa9_dff396f72f87
template <> struct __declspec(uuid("01f0d7a6-f9bd-5bc1-aaa9-dff396f72f87")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_897592e2_bfcc_5f16_8834_2c9c4f20559b
#define WINRT_GENERIC_897592e2_bfcc_5f16_8834_2c9c4f20559b
template <> struct __declspec(uuid("897592e2-bfcc-5f16-8834-2c9c4f20559b")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_5b133719_ee98_59b2_b432_1c9a5a56ab05
#define WINRT_GENERIC_5b133719_ee98_59b2_b432_1c9a5a56ab05
template <> struct __declspec(uuid("5b133719-ee98-59b2-b432-1c9a5a56ab05")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3f3b10e2_b2e9_55c6_abb3_4a258072ebb9
#define WINRT_GENERIC_3f3b10e2_b2e9_55c6_abb3_4a258072ebb9
template <> struct __declspec(uuid("3f3b10e2-b2e9-55c6-abb3-4a258072ebb9")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_425d53e3_fba6_5ea3_b713_db4d70787436
#define WINRT_GENERIC_425d53e3_fba6_5ea3_b713_db4d70787436
template <> struct __declspec(uuid("425d53e3-fba6-5ea3-b713-db4d70787436")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_95e6c852_6e9c_50a9_8935_054320242945
#define WINRT_GENERIC_95e6c852_6e9c_50a9_8935_054320242945
template <> struct __declspec(uuid("95e6c852-6e9c-50a9-8935-054320242945")) __declspec(novtable) IObservableVector<Windows::Media::Core::TimedTextSource> : impl_IObservableVector<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_98ebeba8_6659_5af2_be4f_32fdeede3b77
#define WINRT_GENERIC_98ebeba8_6659_5af2_be4f_32fdeede3b77
template <> struct __declspec(uuid("98ebeba8-6659-5af2-be4f-32fdeede3b77")) __declspec(novtable) IObservableVector<Windows::Media::Core::TimedMetadataTrack> : impl_IObservableVector<Windows::Media::Core::TimedMetadataTrack> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2274d3a6_1ba0_5230_bb86_de90058b6403
#define WINRT_GENERIC_2274d3a6_1ba0_5230_bb86_de90058b6403
template <> struct __declspec(uuid("2274d3a6-1ba0-5230-bb86-de90058b6403")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_284f0441_e96d_58ad_9188_7bf46514dfcc
#define WINRT_GENERIC_284f0441_e96d_58ad_9188_7bf46514dfcc
template <> struct __declspec(uuid("284f0441-e96d-58ad-9188-7bf46514dfcc")) __declspec(novtable) IVector<Windows::Media::Core::TimedTextLine> : impl_IVector<Windows::Media::Core::TimedTextLine> {};
#endif

#ifndef WINRT_GENERIC_8786f392_f369_57ea_a16e_75870246a8c9
#define WINRT_GENERIC_8786f392_f369_57ea_a16e_75870246a8c9
template <> struct __declspec(uuid("8786f392-f369-57ea-a16e-75870246a8c9")) __declspec(novtable) IVector<Windows::Media::Core::TimedTextSubformat> : impl_IVector<Windows::Media::Core::TimedTextSubformat> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_21eb6e39_728a_56a9_8dce_062ba4c81bf5
#define WINRT_GENERIC_21eb6e39_728a_56a9_8dce_062ba4c81bf5
template <> struct __declspec(uuid("21eb6e39-728a-56a9-8dce-062ba4c81bf5")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_4aac9411_c355_5c95_8c78_5a0f5ca1a54d
#define WINRT_GENERIC_4aac9411_c355_5c95_8c78_5a0f5ca1a54d
template <> struct __declspec(uuid("4aac9411-c355-5c95-8c78-5a0f5ca1a54d")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> : impl_TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> {};
#endif

#ifndef WINRT_GENERIC_8dc73162_255b_532e_b0c7_9a6d70b4bb9e
#define WINRT_GENERIC_8dc73162_255b_532e_b0c7_9a6d70b4bb9e
template <> struct __declspec(uuid("8dc73162-255b-532e-b0c7-9a6d70b4bb9e")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_996421a1_625c_5d92_ad68_8b3911d294b0
#define WINRT_GENERIC_996421a1_625c_5d92_ad68_8b3911d294b0
template <> struct __declspec(uuid("996421a1-625c-5d92-ad68-8b3911d294b0")) __declspec(novtable) IVectorView<Windows::Media::Core::IMediaCue> : impl_IVectorView<Windows::Media::Core::IMediaCue> {};
#endif

#ifndef WINRT_GENERIC_0313ae7a_2803_5d45_b5a1_a0fc5cd55e7c
#define WINRT_GENERIC_0313ae7a_2803_5d45_b5a1_a0fc5cd55e7c
template <> struct __declspec(uuid("0313ae7a-2803-5d45-b5a1-a0fc5cd55e7c")) __declspec(novtable) IVectorView<Windows::Media::Core::TimedMetadataTrack> : impl_IVectorView<Windows::Media::Core::TimedMetadataTrack> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0220562a_5de4_5ad2_ac20_6cd26f111745
#define WINRT_GENERIC_0220562a_5de4_5ad2_ac20_6cd26f111745
template <> struct __declspec(uuid("0220562a-5de4-5ad2-ac20-6cd26f111745")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> : impl_TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> {};
#endif

#ifndef WINRT_GENERIC_b1e4bd43_541b_53f3_ad6c_ddaac4813023
#define WINRT_GENERIC_b1e4bd43_541b_53f3_ad6c_ddaac4813023
template <> struct __declspec(uuid("b1e4bd43-541b-53f3-ad6c-ddaac4813023")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_b5b7e554_2476_5667_9c9a_1c7a7d09ace2
#define WINRT_GENERIC_b5b7e554_2476_5667_9c9a_1c7a7d09ace2
template <> struct __declspec(uuid("b5b7e554-2476-5667-9c9a-1c7a7d09ace2")) __declspec(novtable) TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_150a4454_03bb_5dd1_8153_6a600e851f71
#define WINRT_GENERIC_150a4454_03bb_5dd1_8153_6a600e851f71
template <> struct __declspec(uuid("150a4454-03bb-5dd1-8153-6a600e851f71")) __declspec(novtable) IIterable<Windows::Media::Core::TimedMetadataTrack> : impl_IIterable<Windows::Media::Core::TimedMetadataTrack> {};
#endif

#ifndef WINRT_GENERIC_a0cf090e_0340_531f_898b_c21eafb9f4ae
#define WINRT_GENERIC_a0cf090e_0340_531f_898b_c21eafb9f4ae
template <> struct __declspec(uuid("a0cf090e-0340-531f-898b-c21eafb9f4ae")) __declspec(novtable) IIterator<Windows::Media::FaceAnalysis::DetectedFace> : impl_IIterator<Windows::Media::FaceAnalysis::DetectedFace> {};
#endif

#ifndef WINRT_GENERIC_25347323_3556_5cbb_9855_2b5856437f4d
#define WINRT_GENERIC_25347323_3556_5cbb_9855_2b5856437f4d
template <> struct __declspec(uuid("25347323-3556-5cbb-9855-2b5856437f4d")) __declspec(novtable) IIterable<Windows::Media::FaceAnalysis::DetectedFace> : impl_IIterable<Windows::Media::FaceAnalysis::DetectedFace> {};
#endif

#ifndef WINRT_GENERIC_1440dc88_63ff_5a01_bb93_390c76742488
#define WINRT_GENERIC_1440dc88_63ff_5a01_bb93_390c76742488
template <> struct __declspec(uuid("1440dc88-63ff-5a01-bb93-390c76742488")) __declspec(novtable) IIterator<Windows::Media::Devices::Core::FrameController> : impl_IIterator<Windows::Media::Devices::Core::FrameController> {};
#endif

#ifndef WINRT_GENERIC_bd8eeadc_2dd9_5ad8_ac5d_f3b13b94b9c2
#define WINRT_GENERIC_bd8eeadc_2dd9_5ad8_ac5d_f3b13b94b9c2
template <> struct __declspec(uuid("bd8eeadc-2dd9-5ad8-ac5d-f3b13b94b9c2")) __declspec(novtable) IIterable<Windows::Media::Devices::Core::FrameController> : impl_IIterable<Windows::Media::Devices::Core::FrameController> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_df7aacc9_a86c_5c7d_bf98_cc371c97c67b
#define WINRT_GENERIC_df7aacc9_a86c_5c7d_bf98_cc371c97c67b
template <> struct __declspec(uuid("df7aacc9-a86c-5c7d-bf98-cc371c97c67b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Core::MediaStreamSample> : impl_AsyncOperationCompletedHandler<Windows::Media::Core::MediaStreamSample> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_92a36852_fbb3_5b48_b4ec_01dda0972a5c
#define WINRT_GENERIC_92a36852_fbb3_5b48_b4ec_01dda0972a5c
template <> struct __declspec(uuid("92a36852-fbb3-5b48-b4ec-01dda0972a5c")) __declspec(novtable) IIterator<Windows::Media::Core::MseTimeRange> : impl_IIterator<Windows::Media::Core::MseTimeRange> {};
#endif

#ifndef WINRT_GENERIC_ed0c6e08_e22f_5ac2_ba14_e0ff1df3467f
#define WINRT_GENERIC_ed0c6e08_e22f_5ac2_ba14_e0ff1df3467f
template <> struct __declspec(uuid("ed0c6e08-e22f-5ac2-ba14-e0ff1df3467f")) __declspec(novtable) IIterable<Windows::Media::Core::MseTimeRange> : impl_IIterable<Windows::Media::Core::MseTimeRange> {};
#endif

#ifndef WINRT_GENERIC_53076581_01a9_51b9_98cc_5265504cd352
#define WINRT_GENERIC_53076581_01a9_51b9_98cc_5265504cd352
template <> struct __declspec(uuid("53076581-01a9-51b9-98cc-5265504cd352")) __declspec(novtable) IIterator<Windows::Media::Core::MseSourceBuffer> : impl_IIterator<Windows::Media::Core::MseSourceBuffer> {};
#endif

#ifndef WINRT_GENERIC_5ca0da86_6307_558a_865f_3a1ef9fe56b3
#define WINRT_GENERIC_5ca0da86_6307_558a_865f_3a1ef9fe56b3
template <> struct __declspec(uuid("5ca0da86-6307-558a-865f-3a1ef9fe56b3")) __declspec(novtable) IIterable<Windows::Media::Core::MseSourceBuffer> : impl_IIterable<Windows::Media::Core::MseSourceBuffer> {};
#endif

#ifndef WINRT_GENERIC_e12e6261_b198_56e0_9822_ba2d3bb6f8fe
#define WINRT_GENERIC_e12e6261_b198_56e0_9822_ba2d3bb6f8fe
template <> struct __declspec(uuid("e12e6261-b198-56e0-9822-ba2d3bb6f8fe")) __declspec(novtable) VectorChangedEventHandler<Windows::Media::Core::TimedTextSource> : impl_VectorChangedEventHandler<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_bdded7c0_5c73_57f5_9b08_652933586dd5
#define WINRT_GENERIC_bdded7c0_5c73_57f5_9b08_652933586dd5
template <> struct __declspec(uuid("bdded7c0-5c73-57f5-9b08-652933586dd5")) __declspec(novtable) IIterator<Windows::Media::Core::TimedTextSource> : impl_IIterator<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_4fc57282_0edf_5d85_9d89_ddc2a5692c13
#define WINRT_GENERIC_4fc57282_0edf_5d85_9d89_ddc2a5692c13
template <> struct __declspec(uuid("4fc57282-0edf-5d85-9d89-ddc2a5692c13")) __declspec(novtable) IIterable<Windows::Media::Core::TimedTextSource> : impl_IIterable<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_edcd634e_b7e4_5ff8_b8c2_8493849b2c0d
#define WINRT_GENERIC_edcd634e_b7e4_5ff8_b8c2_8493849b2c0d
template <> struct __declspec(uuid("edcd634e-b7e4-5ff8-b8c2-8493849b2c0d")) __declspec(novtable) IVectorView<Windows::Media::Core::TimedTextSource> : impl_IVectorView<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_d0a72378_5432_50bf_93c3_c5f35fc93517
#define WINRT_GENERIC_d0a72378_5432_50bf_93c3_c5f35fc93517
template <> struct __declspec(uuid("d0a72378-5432-50bf-93c3-c5f35fc93517")) __declspec(novtable) IVector<Windows::Media::Core::TimedTextSource> : impl_IVector<Windows::Media::Core::TimedTextSource> {};
#endif

#ifndef WINRT_GENERIC_bd1dc81c_23c4_5b4b_ac38_c5d34cdf34e4
#define WINRT_GENERIC_bd1dc81c_23c4_5b4b_ac38_c5d34cdf34e4
template <> struct __declspec(uuid("bd1dc81c-23c4-5b4b-ac38-c5d34cdf34e4")) __declspec(novtable) VectorChangedEventHandler<Windows::Media::Core::TimedMetadataTrack> : impl_VectorChangedEventHandler<Windows::Media::Core::TimedMetadataTrack> {};
#endif

#ifndef WINRT_GENERIC_859354e5_077b_5d53_b297_1a07b97f09c3
#define WINRT_GENERIC_859354e5_077b_5d53_b297_1a07b97f09c3
template <> struct __declspec(uuid("859354e5-077b-5d53-b297-1a07b97f09c3")) __declspec(novtable) IIterator<Windows::Media::Core::TimedMetadataTrack> : impl_IIterator<Windows::Media::Core::TimedMetadataTrack> {};
#endif

#ifndef WINRT_GENERIC_c46d9e34_ea11_5bb2_9744_1617417ef016
#define WINRT_GENERIC_c46d9e34_ea11_5bb2_9744_1617417ef016
template <> struct __declspec(uuid("c46d9e34-ea11-5bb2-9744-1617417ef016")) __declspec(novtable) IVector<Windows::Media::Core::TimedMetadataTrack> : impl_IVector<Windows::Media::Core::TimedMetadataTrack> {};
#endif

#ifndef WINRT_GENERIC_84c4fcac_86d8_5c74_a138_d9bf37b749ec
#define WINRT_GENERIC_84c4fcac_86d8_5c74_a138_d9bf37b749ec
template <> struct __declspec(uuid("84c4fcac-86d8-5c74-a138-d9bf37b749ec")) __declspec(novtable) IIterator<Windows::Media::Core::TimedTextLine> : impl_IIterator<Windows::Media::Core::TimedTextLine> {};
#endif

#ifndef WINRT_GENERIC_aec710ad_3bd8_5a59_ae77_e7fc46fb105b
#define WINRT_GENERIC_aec710ad_3bd8_5a59_ae77_e7fc46fb105b
template <> struct __declspec(uuid("aec710ad-3bd8-5a59-ae77-e7fc46fb105b")) __declspec(novtable) IIterable<Windows::Media::Core::TimedTextLine> : impl_IIterable<Windows::Media::Core::TimedTextLine> {};
#endif

#ifndef WINRT_GENERIC_9532b5cc_73fc_5e3a_8531_794c30d7a1ae
#define WINRT_GENERIC_9532b5cc_73fc_5e3a_8531_794c30d7a1ae
template <> struct __declspec(uuid("9532b5cc-73fc-5e3a-8531-794c30d7a1ae")) __declspec(novtable) IVectorView<Windows::Media::Core::TimedTextLine> : impl_IVectorView<Windows::Media::Core::TimedTextLine> {};
#endif

#ifndef WINRT_GENERIC_65105e50_865c_591d_9bf4_96237de2533f
#define WINRT_GENERIC_65105e50_865c_591d_9bf4_96237de2533f
template <> struct __declspec(uuid("65105e50-865c-591d-9bf4-96237de2533f")) __declspec(novtable) IIterator<Windows::Media::Core::TimedTextSubformat> : impl_IIterator<Windows::Media::Core::TimedTextSubformat> {};
#endif

#ifndef WINRT_GENERIC_cee3ae43_c93c_56f7_8c55_9024ded72c76
#define WINRT_GENERIC_cee3ae43_c93c_56f7_8c55_9024ded72c76
template <> struct __declspec(uuid("cee3ae43-c93c-56f7-8c55-9024ded72c76")) __declspec(novtable) IIterable<Windows::Media::Core::TimedTextSubformat> : impl_IIterable<Windows::Media::Core::TimedTextSubformat> {};
#endif

#ifndef WINRT_GENERIC_411a0e26_42e2_5e65_b9c4_980c4c3f31f7
#define WINRT_GENERIC_411a0e26_42e2_5e65_b9c4_980c4c3f31f7
template <> struct __declspec(uuid("411a0e26-42e2-5e65-b9c4-980c4c3f31f7")) __declspec(novtable) IVectorView<Windows::Media::Core::TimedTextSubformat> : impl_IVectorView<Windows::Media::Core::TimedTextSubformat> {};
#endif

#ifndef WINRT_GENERIC_1a594dc8_a64b_55ed_9b34_7b274e1d5c70
#define WINRT_GENERIC_1a594dc8_a64b_55ed_9b34_7b274e1d5c70
template <> struct __declspec(uuid("1a594dc8-a64b-55ed-9b34-7b274e1d5c70")) __declspec(novtable) IIterator<Windows::Media::Core::IMediaCue> : impl_IIterator<Windows::Media::Core::IMediaCue> {};
#endif

#ifndef WINRT_GENERIC_737a2098_41bf_5d9f_a1d2_2f171c578b3c
#define WINRT_GENERIC_737a2098_41bf_5d9f_a1d2_2f171c578b3c
template <> struct __declspec(uuid("737a2098-41bf-5d9f-a1d2-2f171c578b3c")) __declspec(novtable) IIterable<Windows::Media::Core::IMediaCue> : impl_IIterable<Windows::Media::Core::IMediaCue> {};
#endif

#ifndef WINRT_GENERIC_f3b20528_e3b3_5331_b2d0_0c2623aee785
#define WINRT_GENERIC_f3b20528_e3b3_5331_b2d0_0c2623aee785
template <> struct __declspec(uuid("f3b20528-e3b3-5331-b2d0-0c2623aee785")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> {};
#endif

#ifndef WINRT_GENERIC_4f25059a_0b9a_5f25_9b9e_4b9f1d22ff65
#define WINRT_GENERIC_4f25059a_0b9a_5f25_9b9e_4b9f1d22ff65
template <> struct __declspec(uuid("4f25059a-0b9a-5f25-9b9e-4b9f1d22ff65")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> {};
#endif


}

namespace Windows::Media::Core {

template <typename D>
struct WINRT_EBO impl_IAudioStreamDescriptor
{
    Windows::Media::MediaProperties::AudioEncodingProperties EncodingProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioStreamDescriptor2
{
    void LeadingEncoderPadding(const Windows::Foundation::IReference<uint32_t> & value) const;
    Windows::Foundation::IReference<uint32_t> LeadingEncoderPadding() const;
    void TrailingEncoderPadding(const Windows::Foundation::IReference<uint32_t> & value) const;
    Windows::Foundation::IReference<uint32_t> TrailingEncoderPadding() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioStreamDescriptorFactory
{
    Windows::Media::Core::AudioStreamDescriptor Create(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioTrack
{
    event_token OpenFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> & handler) const;
    using OpenFailed_revoker = event_revoker<IAudioTrack>;
    OpenFailed_revoker OpenFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> & handler) const;
    void OpenFailed(event_token token) const;
    Windows::Media::MediaProperties::AudioEncodingProperties GetEncodingProperties() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
    Windows::Media::Core::AudioTrackSupportInfo SupportInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioTrackOpenFailedEventArgs
{
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioTrackSupportInfo
{
    Windows::Media::Core::MediaDecoderStatus DecoderStatus() const;
    Windows::Media::Core::AudioDecoderDegradation Degradation() const;
    Windows::Media::Core::AudioDecoderDegradationReason DegradationReason() const;
    Windows::Media::Core::MediaSourceStatus MediaSourceStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IDataCue
{
    void Data(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Storage::Streams::IBuffer Data() const;
};

template <typename D>
struct WINRT_EBO impl_IFaceDetectedEventArgs
{
    Windows::Media::Core::FaceDetectionEffectFrame ResultFrame() const;
};

template <typename D>
struct WINRT_EBO impl_IFaceDetectionEffect
{
    void Enabled(bool value) const;
    bool Enabled() const;
    void DesiredDetectionInterval(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan DesiredDetectionInterval() const;
    event_token FaceDetected(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> & handler) const;
    using FaceDetected_revoker = event_revoker<IFaceDetectionEffect>;
    FaceDetected_revoker FaceDetected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> & handler) const;
    void FaceDetected(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IFaceDetectionEffectDefinition
{
    void DetectionMode(Windows::Media::Core::FaceDetectionMode value) const;
    Windows::Media::Core::FaceDetectionMode DetectionMode() const;
    void SynchronousDetectionEnabled(bool value) const;
    bool SynchronousDetectionEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IFaceDetectionEffectFrame
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace> DetectedFaces() const;
};

template <typename D>
struct WINRT_EBO impl_IHighDynamicRangeControl
{
    void Enabled(bool value) const;
    bool Enabled() const;
};

template <typename D>
struct WINRT_EBO impl_IHighDynamicRangeOutput
{
    double Certainty() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController> FrameControllers() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBinder
{
    event_token Binding(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> & handler) const;
    using Binding_revoker = event_revoker<IMediaBinder>;
    Binding_revoker Binding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> & handler) const;
    void Binding(event_token token) const;
    hstring Token() const;
    void Token(hstring_ref value) const;
    Windows::Media::Core::MediaSource Source() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBindingEventArgs
{
    event_token Canceled(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::IInspectable> & handler) const;
    using Canceled_revoker = event_revoker<IMediaBindingEventArgs>;
    Canceled_revoker Canceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::IInspectable> & handler) const;
    void Canceled(event_token token) const;
    Windows::Media::Core::MediaBinder MediaBinder() const;
    Windows::Foundation::Deferral GetDeferral() const;
    void SetUri(const Windows::Foundation::Uri & uri) const;
    void SetStream(const Windows::Storage::Streams::IRandomAccessStream & stream, hstring_ref contentType) const;
    void SetStreamReference(const Windows::Storage::Streams::IRandomAccessStreamReference & stream, hstring_ref contentType) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCue
{
    void StartTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan StartTime() const;
    void Duration(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Id(hstring_ref value) const;
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaCueEventArgs
{
    Windows::Media::Core::IMediaCue Cue() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSource
{
};

template <typename D>
struct WINRT_EBO impl_IMediaSource2
{
    event_token OpenOperationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> & handler) const;
    using OpenOperationCompleted_revoker = event_revoker<IMediaSource2>;
    OpenOperationCompleted_revoker OpenOperationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> & handler) const;
    void OpenOperationCompleted(event_token token) const;
    Windows::Foundation::Collections::ValueSet CustomProperties() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    bool IsOpen() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource> ExternalTimedTextSources() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack> ExternalTimedMetadataTracks() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSource3
{
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> & handler) const;
    using StateChanged_revoker = event_revoker<IMediaSource3>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> & handler) const;
    void StateChanged(event_token token) const;
    Windows::Media::Core::MediaSourceState State() const;
    void Reset() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSourceError
{
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSourceOpenOperationCompletedEventArgs
{
    Windows::Media::Core::MediaSourceError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSourceStateChangedEventArgs
{
    Windows::Media::Core::MediaSourceState OldState() const;
    Windows::Media::Core::MediaSourceState NewState() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSourceStatics
{
    Windows::Media::Core::MediaSource CreateFromAdaptiveMediaSource(const Windows::Media::Streaming::Adaptive::AdaptiveMediaSource & mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromMediaStreamSource(const Windows::Media::Core::MediaStreamSource & mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromMseStreamSource(const Windows::Media::Core::MseStreamSource & mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromIMediaSource(const Windows::Media::Core::IMediaSource & mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromStorageFile(const Windows::Storage::IStorageFile & file) const;
    Windows::Media::Core::MediaSource CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream, hstring_ref contentType) const;
    Windows::Media::Core::MediaSource CreateFromStreamReference(const Windows::Storage::Streams::IRandomAccessStreamReference & stream, hstring_ref contentType) const;
    Windows::Media::Core::MediaSource CreateFromUri(const Windows::Foundation::Uri & uri) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaSourceStatics2
{
    Windows::Media::Core::MediaSource CreateFromMediaBinder(const Windows::Media::Core::MediaBinder & binder) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamDescriptor
{
    bool IsSelected() const;
    void Name(hstring_ref value) const;
    hstring Name() const;
    void Language(hstring_ref value) const;
    hstring Language() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSample
{
    event_token Processed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::IInspectable> & handler) const;
    using Processed_revoker = event_revoker<IMediaStreamSample>;
    Processed_revoker Processed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::IInspectable> & handler) const;
    void Processed(event_token token) const;
    Windows::Storage::Streams::Buffer Buffer() const;
    Windows::Foundation::TimeSpan Timestamp() const;
    Windows::Media::Core::MediaStreamSamplePropertySet ExtendedProperties() const;
    Windows::Media::Core::MediaStreamSampleProtectionProperties Protection() const;
    void DecodeTimestamp(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan DecodeTimestamp() const;
    void Duration(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void KeyFrame(bool value) const;
    bool KeyFrame() const;
    void Discontinuous(bool value) const;
    bool Discontinuous() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSampleProtectionProperties
{
    void SetKeyIdentifier(array_ref<const uint8_t> value) const;
    void GetKeyIdentifier(com_array<uint8_t> & value) const;
    void SetInitializationVector(array_ref<const uint8_t> value) const;
    void GetInitializationVector(com_array<uint8_t> & value) const;
    void SetSubSampleMapping(array_ref<const uint8_t> value) const;
    void GetSubSampleMapping(com_array<uint8_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSampleStatics
{
    Windows::Media::Core::MediaStreamSample CreateFromBuffer(const Windows::Storage::Streams::IBuffer & buffer, const Windows::Foundation::TimeSpan & timestamp) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> CreateFromStreamAsync(const Windows::Storage::Streams::IInputStream & stream, uint32_t count, const Windows::Foundation::TimeSpan & timestamp) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSource
{
    event_token Closed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> & handler) const;
    using Closed_revoker = event_revoker<IMediaStreamSource>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> & handler) const;
    void Closed(event_token token) const;
    event_token Starting(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> & handler) const;
    using Starting_revoker = event_revoker<IMediaStreamSource>;
    Starting_revoker Starting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> & handler) const;
    void Starting(event_token token) const;
    event_token Paused(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::IInspectable> & handler) const;
    using Paused_revoker = event_revoker<IMediaStreamSource>;
    Paused_revoker Paused(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::IInspectable> & handler) const;
    void Paused(event_token token) const;
    event_token SampleRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> & handler) const;
    using SampleRequested_revoker = event_revoker<IMediaStreamSource>;
    SampleRequested_revoker SampleRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> & handler) const;
    void SampleRequested(event_token token) const;
    event_token SwitchStreamsRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> & handler) const;
    using SwitchStreamsRequested_revoker = event_revoker<IMediaStreamSource>;
    SwitchStreamsRequested_revoker SwitchStreamsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> & handler) const;
    void SwitchStreamsRequested(event_token token) const;
    void NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus errorStatus) const;
    void AddStreamDescriptor(const Windows::Media::Core::IMediaStreamDescriptor & descriptor) const;
    void MediaProtectionManager(const Windows::Media::Protection::MediaProtectionManager & value) const;
    Windows::Media::Protection::MediaProtectionManager MediaProtectionManager() const;
    void Duration(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void CanSeek(bool value) const;
    bool CanSeek() const;
    void BufferTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan BufferTime() const;
    void SetBufferedRange(const Windows::Foundation::TimeSpan & startOffset, const Windows::Foundation::TimeSpan & endOffset) const;
    Windows::Storage::FileProperties::MusicProperties MusicProperties() const;
    Windows::Storage::FileProperties::VideoProperties VideoProperties() const;
    void Thumbnail(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    void AddProtectionKey(const Windows::Media::Core::IMediaStreamDescriptor & streamDescriptor, array_ref<const uint8_t> keyIdentifier, array_ref<const uint8_t> licenseData) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSource2
{
    event_token SampleRendered(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> & handler) const;
    using SampleRendered_revoker = event_revoker<IMediaStreamSource2>;
    SampleRendered_revoker SampleRendered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> & handler) const;
    void SampleRendered(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceClosedEventArgs
{
    Windows::Media::Core::MediaStreamSourceClosedRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceClosedRequest
{
    Windows::Media::Core::MediaStreamSourceClosedReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceFactory
{
    Windows::Media::Core::MediaStreamSource CreateFromDescriptor(const Windows::Media::Core::IMediaStreamDescriptor & descriptor) const;
    Windows::Media::Core::MediaStreamSource CreateFromDescriptors(const Windows::Media::Core::IMediaStreamDescriptor & descriptor, const Windows::Media::Core::IMediaStreamDescriptor & descriptor2) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSampleRenderedEventArgs
{
    Windows::Foundation::TimeSpan SampleLag() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSampleRequest
{
    Windows::Media::Core::IMediaStreamDescriptor StreamDescriptor() const;
    Windows::Media::Core::MediaStreamSourceSampleRequestDeferral GetDeferral() const;
    void Sample(const Windows::Media::Core::MediaStreamSample & value) const;
    Windows::Media::Core::MediaStreamSample Sample() const;
    void ReportSampleProgress(uint32_t progress) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSampleRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSampleRequestedEventArgs
{
    Windows::Media::Core::MediaStreamSourceSampleRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceStartingEventArgs
{
    Windows::Media::Core::MediaStreamSourceStartingRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceStartingRequest
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> StartPosition() const;
    Windows::Media::Core::MediaStreamSourceStartingRequestDeferral GetDeferral() const;
    void SetActualStartPosition(const Windows::Foundation::TimeSpan & position) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceStartingRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSwitchStreamsRequest
{
    Windows::Media::Core::IMediaStreamDescriptor OldStreamDescriptor() const;
    Windows::Media::Core::IMediaStreamDescriptor NewStreamDescriptor() const;
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSwitchStreamsRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaStreamSourceSwitchStreamsRequestedEventArgs
{
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaTrack
{
    hstring Id() const;
    hstring Language() const;
    Windows::Media::Core::MediaTrackKind TrackKind() const;
    void Label(hstring_ref value) const;
    hstring Label() const;
};

template <typename D>
struct WINRT_EBO impl_IMseSourceBuffer
{
    event_token UpdateStarting(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    using UpdateStarting_revoker = event_revoker<IMseSourceBuffer>;
    UpdateStarting_revoker UpdateStarting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    void UpdateStarting(event_token token) const;
    event_token Updated(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    using Updated_revoker = event_revoker<IMseSourceBuffer>;
    Updated_revoker Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    void Updated(event_token token) const;
    event_token UpdateEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    using UpdateEnded_revoker = event_revoker<IMseSourceBuffer>;
    UpdateEnded_revoker UpdateEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    void UpdateEnded(event_token token) const;
    event_token ErrorOccurred(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    using ErrorOccurred_revoker = event_revoker<IMseSourceBuffer>;
    ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    void ErrorOccurred(event_token token) const;
    event_token Aborted(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    using Aborted_revoker = event_revoker<IMseSourceBuffer>;
    Aborted_revoker Aborted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::IInspectable> & handler) const;
    void Aborted(event_token token) const;
    Windows::Media::Core::MseAppendMode Mode() const;
    void Mode(Windows::Media::Core::MseAppendMode value) const;
    bool IsUpdating() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange> Buffered() const;
    Windows::Foundation::TimeSpan TimestampOffset() const;
    void TimestampOffset(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan AppendWindowStart() const;
    void AppendWindowStart(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> AppendWindowEnd() const;
    void AppendWindowEnd(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    void AppendBuffer(const Windows::Storage::Streams::IBuffer & buffer) const;
    void AppendStream(const Windows::Storage::Streams::IInputStream & stream) const;
    void AppendStream(const Windows::Storage::Streams::IInputStream & stream, uint64_t maxSize) const;
    void Abort() const;
    void Remove(const Windows::Foundation::TimeSpan & start, const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & end) const;
};

template <typename D>
struct WINRT_EBO impl_IMseSourceBufferList
{
    event_token SourceBufferAdded(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> & handler) const;
    using SourceBufferAdded_revoker = event_revoker<IMseSourceBufferList>;
    SourceBufferAdded_revoker SourceBufferAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> & handler) const;
    void SourceBufferAdded(event_token token) const;
    event_token SourceBufferRemoved(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> & handler) const;
    using SourceBufferRemoved_revoker = event_revoker<IMseSourceBufferList>;
    SourceBufferRemoved_revoker SourceBufferRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::IInspectable> & handler) const;
    void SourceBufferRemoved(event_token token) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer> Buffers() const;
};

template <typename D>
struct WINRT_EBO impl_IMseStreamSource
{
    event_token Opened(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    using Opened_revoker = event_revoker<IMseStreamSource>;
    Opened_revoker Opened(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    void Opened(event_token token) const;
    event_token Ended(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    using Ended_revoker = event_revoker<IMseStreamSource>;
    Ended_revoker Ended(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    void Ended(event_token token) const;
    event_token Closed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    using Closed_revoker = event_revoker<IMseStreamSource>;
    Closed_revoker Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::IInspectable> & handler) const;
    void Closed(event_token token) const;
    Windows::Media::Core::MseSourceBufferList SourceBuffers() const;
    Windows::Media::Core::MseSourceBufferList ActiveSourceBuffers() const;
    Windows::Media::Core::MseReadyState ReadyState() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void Duration(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::Media::Core::MseSourceBuffer AddSourceBuffer(hstring_ref mimeType) const;
    void RemoveSourceBuffer(const Windows::Media::Core::MseSourceBuffer & buffer) const;
    void EndOfStream(Windows::Media::Core::MseEndOfStreamStatus status) const;
};

template <typename D>
struct WINRT_EBO impl_IMseStreamSourceStatics
{
    bool IsContentTypeSupported(hstring_ref contentType) const;
};

template <typename D>
struct WINRT_EBO impl_ISceneAnalysisEffect
{
    Windows::Media::Core::HighDynamicRangeControl HighDynamicRangeAnalyzer() const;
    void DesiredAnalysisInterval(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan DesiredAnalysisInterval() const;
    event_token SceneAnalyzed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> & handler) const;
    using SceneAnalyzed_revoker = event_revoker<ISceneAnalysisEffect>;
    SceneAnalyzed_revoker SceneAnalyzed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> & handler) const;
    void SceneAnalyzed(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_ISceneAnalysisEffectFrame
{
    Windows::Media::Capture::CapturedFrameControlValues FrameControlValues() const;
    Windows::Media::Core::HighDynamicRangeOutput HighDynamicRange() const;
};

template <typename D>
struct WINRT_EBO impl_ISceneAnalyzedEventArgs
{
    Windows::Media::Core::SceneAnalysisEffectFrame ResultFrame() const;
};

template <typename D>
struct WINRT_EBO impl_ISingleSelectMediaTrackList
{
    event_token SelectedIndexChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::IInspectable> & handler) const;
    using SelectedIndexChanged_revoker = event_revoker<ISingleSelectMediaTrackList>;
    SelectedIndexChanged_revoker SelectedIndexChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::IInspectable> & handler) const;
    void SelectedIndexChanged(event_token token) const;
    void SelectedIndex(int32_t value) const;
    int32_t SelectedIndex() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataTrack
{
    event_token CueEntered(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> & handler) const;
    using CueEntered_revoker = event_revoker<ITimedMetadataTrack>;
    CueEntered_revoker CueEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> & handler) const;
    void CueEntered(event_token token) const;
    event_token CueExited(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> & handler) const;
    using CueExited_revoker = event_revoker<ITimedMetadataTrack>;
    CueExited_revoker CueExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> & handler) const;
    void CueExited(event_token token) const;
    event_token TrackFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> & handler) const;
    using TrackFailed_revoker = event_revoker<ITimedMetadataTrack>;
    TrackFailed_revoker TrackFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> & handler) const;
    void TrackFailed(event_token token) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> Cues() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> ActiveCues() const;
    Windows::Media::Core::TimedMetadataKind TimedMetadataKind() const;
    hstring DispatchType() const;
    void AddCue(const Windows::Media::Core::IMediaCue & cue) const;
    void RemoveCue(const Windows::Media::Core::IMediaCue & cue) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataTrack2
{
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataTrackError
{
    Windows::Media::Core::TimedMetadataTrackErrorCode ErrorCode() const;
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataTrackFactory
{
    Windows::Media::Core::TimedMetadataTrack Create(hstring_ref id, hstring_ref language, Windows::Media::Core::TimedMetadataKind kind) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataTrackFailedEventArgs
{
    Windows::Media::Core::TimedMetadataTrackError Error() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextCue
{
    Windows::Media::Core::TimedTextRegion CueRegion() const;
    void CueRegion(const Windows::Media::Core::TimedTextRegion & value) const;
    Windows::Media::Core::TimedTextStyle CueStyle() const;
    void CueStyle(const Windows::Media::Core::TimedTextStyle & value) const;
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine> Lines() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextLine
{
    hstring Text() const;
    void Text(hstring_ref value) const;
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat> Subformats() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextRegion
{
    hstring Name() const;
    void Name(hstring_ref value) const;
    Windows::Media::Core::TimedTextPoint Position() const;
    void Position(const Windows::Media::Core::TimedTextPoint & value) const;
    Windows::Media::Core::TimedTextSize Extent() const;
    void Extent(const Windows::Media::Core::TimedTextSize & value) const;
    Windows::UI::Color Background() const;
    void Background(const Windows::UI::Color & value) const;
    Windows::Media::Core::TimedTextWritingMode WritingMode() const;
    void WritingMode(Windows::Media::Core::TimedTextWritingMode value) const;
    Windows::Media::Core::TimedTextDisplayAlignment DisplayAlignment() const;
    void DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment value) const;
    Windows::Media::Core::TimedTextDouble LineHeight() const;
    void LineHeight(const Windows::Media::Core::TimedTextDouble & value) const;
    bool IsOverflowClipped() const;
    void IsOverflowClipped(bool value) const;
    Windows::Media::Core::TimedTextPadding Padding() const;
    void Padding(const Windows::Media::Core::TimedTextPadding & value) const;
    Windows::Media::Core::TimedTextWrapping TextWrapping() const;
    void TextWrapping(Windows::Media::Core::TimedTextWrapping value) const;
    int32_t ZIndex() const;
    void ZIndex(int32_t value) const;
    Windows::Media::Core::TimedTextScrollMode ScrollMode() const;
    void ScrollMode(Windows::Media::Core::TimedTextScrollMode value) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextSource
{
    event_token Resolved(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> & handler) const;
    using Resolved_revoker = event_revoker<ITimedTextSource>;
    Resolved_revoker Resolved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> & handler) const;
    void Resolved(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextSourceResolveResultEventArgs
{
    Windows::Media::Core::TimedMetadataTrackError Error() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> Tracks() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextSourceStatics
{
    Windows::Media::Core::TimedTextSource CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    Windows::Media::Core::TimedTextSource CreateFromUri(const Windows::Foundation::Uri & uri) const;
    Windows::Media::Core::TimedTextSource CreateFromStream(const Windows::Storage::Streams::IRandomAccessStream & stream, hstring_ref defaultLanguage) const;
    Windows::Media::Core::TimedTextSource CreateFromUri(const Windows::Foundation::Uri & uri, hstring_ref defaultLanguage) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextStyle
{
    hstring Name() const;
    void Name(hstring_ref value) const;
    hstring FontFamily() const;
    void FontFamily(hstring_ref value) const;
    Windows::Media::Core::TimedTextDouble FontSize() const;
    void FontSize(const Windows::Media::Core::TimedTextDouble & value) const;
    Windows::Media::Core::TimedTextWeight FontWeight() const;
    void FontWeight(Windows::Media::Core::TimedTextWeight value) const;
    Windows::UI::Color Foreground() const;
    void Foreground(const Windows::UI::Color & value) const;
    Windows::UI::Color Background() const;
    void Background(const Windows::UI::Color & value) const;
    bool IsBackgroundAlwaysShown() const;
    void IsBackgroundAlwaysShown(bool value) const;
    Windows::Media::Core::TimedTextFlowDirection FlowDirection() const;
    void FlowDirection(Windows::Media::Core::TimedTextFlowDirection value) const;
    Windows::Media::Core::TimedTextLineAlignment LineAlignment() const;
    void LineAlignment(Windows::Media::Core::TimedTextLineAlignment value) const;
    Windows::UI::Color OutlineColor() const;
    void OutlineColor(const Windows::UI::Color & value) const;
    Windows::Media::Core::TimedTextDouble OutlineThickness() const;
    void OutlineThickness(const Windows::Media::Core::TimedTextDouble & value) const;
    Windows::Media::Core::TimedTextDouble OutlineRadius() const;
    void OutlineRadius(const Windows::Media::Core::TimedTextDouble & value) const;
};

template <typename D>
struct WINRT_EBO impl_ITimedTextSubformat
{
    int32_t StartIndex() const;
    void StartIndex(int32_t value) const;
    int32_t Length() const;
    void Length(int32_t value) const;
    Windows::Media::Core::TimedTextStyle SubformatStyle() const;
    void SubformatStyle(const Windows::Media::Core::TimedTextStyle & value) const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStabilizationEffect
{
    void Enabled(bool value) const;
    bool Enabled() const;
    event_token EnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> & handler) const;
    using EnabledChanged_revoker = event_revoker<IVideoStabilizationEffect>;
    EnabledChanged_revoker EnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> & handler) const;
    void EnabledChanged(event_token cookie) const;
    Windows::Media::Capture::VideoStreamConfiguration GetRecommendedStreamConfiguration(const Windows::Media::Devices::VideoDeviceController & controller, const Windows::Media::MediaProperties::VideoEncodingProperties & desiredProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStabilizationEffectEnabledChangedEventArgs
{
    Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStreamDescriptor
{
    Windows::Media::MediaProperties::VideoEncodingProperties EncodingProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoStreamDescriptorFactory
{
    Windows::Media::Core::VideoStreamDescriptor Create(const Windows::Media::MediaProperties::VideoEncodingProperties & encodingProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IVideoTrack
{
    event_token OpenFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> & handler) const;
    using OpenFailed_revoker = event_revoker<IVideoTrack>;
    OpenFailed_revoker OpenFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> & handler) const;
    void OpenFailed(event_token token) const;
    Windows::Media::MediaProperties::VideoEncodingProperties GetEncodingProperties() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
    Windows::Media::Core::VideoTrackSupportInfo SupportInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoTrackOpenFailedEventArgs
{
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoTrackSupportInfo
{
    Windows::Media::Core::MediaDecoderStatus DecoderStatus() const;
    Windows::Media::Core::MediaSourceStatus MediaSourceStatus() const;
};

struct IAudioStreamDescriptor :
    Windows::IInspectable,
    impl::consume<IAudioStreamDescriptor>,
    impl::require<IAudioStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioStreamDescriptor>(m_ptr); }
};

struct IAudioStreamDescriptor2 :
    Windows::IInspectable,
    impl::consume<IAudioStreamDescriptor2>,
    impl::require<IAudioStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioStreamDescriptor2>(m_ptr); }
};

struct IAudioStreamDescriptorFactory :
    Windows::IInspectable,
    impl::consume<IAudioStreamDescriptorFactory>
{
    IAudioStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioStreamDescriptorFactory>(m_ptr); }
};

struct IAudioTrack :
    Windows::IInspectable,
    impl::consume<IAudioTrack>
{
    IAudioTrack(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioTrack>(m_ptr); }
};

struct IAudioTrackOpenFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IAudioTrackOpenFailedEventArgs>
{
    IAudioTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioTrackOpenFailedEventArgs>(m_ptr); }
};

struct IAudioTrackSupportInfo :
    Windows::IInspectable,
    impl::consume<IAudioTrackSupportInfo>
{
    IAudioTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioTrackSupportInfo>(m_ptr); }
};

struct IDataCue :
    Windows::IInspectable,
    impl::consume<IDataCue>,
    impl::require<IDataCue, Windows::Media::Core::IMediaCue>
{
    IDataCue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataCue>(m_ptr); }
};

struct IFaceDetectedEventArgs :
    Windows::IInspectable,
    impl::consume<IFaceDetectedEventArgs>
{
    IFaceDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFaceDetectedEventArgs>(m_ptr); }
};

struct IFaceDetectionEffect :
    Windows::IInspectable,
    impl::consume<IFaceDetectionEffect>,
    impl::require<IFaceDetectionEffect, Windows::Media::IMediaExtension>
{
    IFaceDetectionEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFaceDetectionEffect>(m_ptr); }
};

struct IFaceDetectionEffectDefinition :
    Windows::IInspectable,
    impl::consume<IFaceDetectionEffectDefinition>,
    impl::require<IFaceDetectionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    IFaceDetectionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFaceDetectionEffectDefinition>(m_ptr); }
};

struct IFaceDetectionEffectFrame :
    Windows::IInspectable,
    impl::consume<IFaceDetectionEffectFrame>,
    impl::require<IFaceDetectionEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IFaceDetectionEffectFrame(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFaceDetectionEffectFrame>(m_ptr); }
};

struct IHighDynamicRangeControl :
    Windows::IInspectable,
    impl::consume<IHighDynamicRangeControl>
{
    IHighDynamicRangeControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHighDynamicRangeControl>(m_ptr); }
};

struct IHighDynamicRangeOutput :
    Windows::IInspectable,
    impl::consume<IHighDynamicRangeOutput>
{
    IHighDynamicRangeOutput(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHighDynamicRangeOutput>(m_ptr); }
};

struct IMediaBinder :
    Windows::IInspectable,
    impl::consume<IMediaBinder>
{
    IMediaBinder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBinder>(m_ptr); }
};

struct IMediaBindingEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaBindingEventArgs>
{
    IMediaBindingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBindingEventArgs>(m_ptr); }
};

struct IMediaCue :
    Windows::IInspectable,
    impl::consume<IMediaCue>
{
    IMediaCue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCue>(m_ptr); }
};

struct IMediaCueEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaCueEventArgs>
{
    IMediaCueEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaCueEventArgs>(m_ptr); }
};

struct IMediaSource :
    Windows::IInspectable,
    impl::consume<IMediaSource>
{
    IMediaSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSource>(m_ptr); }
};

struct IMediaSource2 :
    Windows::IInspectable,
    impl::consume<IMediaSource2>,
    impl::require<IMediaSource2, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSource2>(m_ptr); }
};

struct IMediaSource3 :
    Windows::IInspectable,
    impl::consume<IMediaSource3>,
    impl::require<IMediaSource3, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSource3>(m_ptr); }
};

struct IMediaSourceError :
    Windows::IInspectable,
    impl::consume<IMediaSourceError>
{
    IMediaSourceError(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSourceError>(m_ptr); }
};

struct IMediaSourceOpenOperationCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaSourceOpenOperationCompletedEventArgs>
{
    IMediaSourceOpenOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSourceOpenOperationCompletedEventArgs>(m_ptr); }
};

struct IMediaSourceStateChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaSourceStateChangedEventArgs>
{
    IMediaSourceStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSourceStateChangedEventArgs>(m_ptr); }
};

struct IMediaSourceStatics :
    Windows::IInspectable,
    impl::consume<IMediaSourceStatics>
{
    IMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSourceStatics>(m_ptr); }
};

struct IMediaSourceStatics2 :
    Windows::IInspectable,
    impl::consume<IMediaSourceStatics2>
{
    IMediaSourceStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaSourceStatics2>(m_ptr); }
};

struct IMediaStreamDescriptor :
    Windows::IInspectable,
    impl::consume<IMediaStreamDescriptor>
{
    IMediaStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamDescriptor>(m_ptr); }
};

struct IMediaStreamSample :
    Windows::IInspectable,
    impl::consume<IMediaStreamSample>
{
    IMediaStreamSample(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSample>(m_ptr); }
};

struct IMediaStreamSampleProtectionProperties :
    Windows::IInspectable,
    impl::consume<IMediaStreamSampleProtectionProperties>
{
    IMediaStreamSampleProtectionProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSampleProtectionProperties>(m_ptr); }
};

struct IMediaStreamSampleStatics :
    Windows::IInspectable,
    impl::consume<IMediaStreamSampleStatics>
{
    IMediaStreamSampleStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSampleStatics>(m_ptr); }
};

struct IMediaStreamSource :
    Windows::IInspectable,
    impl::consume<IMediaStreamSource>,
    impl::require<IMediaStreamSource, Windows::Media::Core::IMediaSource>
{
    IMediaStreamSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSource>(m_ptr); }
};

struct IMediaStreamSource2 :
    Windows::IInspectable,
    impl::consume<IMediaStreamSource2>,
    impl::require<IMediaStreamSource2, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
{
    IMediaStreamSource2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSource2>(m_ptr); }
};

struct IMediaStreamSourceClosedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceClosedEventArgs>
{
    IMediaStreamSourceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceClosedEventArgs>(m_ptr); }
};

struct IMediaStreamSourceClosedRequest :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceClosedRequest>
{
    IMediaStreamSourceClosedRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceClosedRequest>(m_ptr); }
};

struct IMediaStreamSourceFactory :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceFactory>
{
    IMediaStreamSourceFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceFactory>(m_ptr); }
};

struct IMediaStreamSourceSampleRenderedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSampleRenderedEventArgs>
{
    IMediaStreamSourceSampleRenderedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSampleRenderedEventArgs>(m_ptr); }
};

struct IMediaStreamSourceSampleRequest :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSampleRequest>
{
    IMediaStreamSourceSampleRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSampleRequest>(m_ptr); }
};

struct IMediaStreamSourceSampleRequestDeferral :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSampleRequestDeferral>
{
    IMediaStreamSourceSampleRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSampleRequestDeferral>(m_ptr); }
};

struct IMediaStreamSourceSampleRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSampleRequestedEventArgs>
{
    IMediaStreamSourceSampleRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSampleRequestedEventArgs>(m_ptr); }
};

struct IMediaStreamSourceStartingEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceStartingEventArgs>
{
    IMediaStreamSourceStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceStartingEventArgs>(m_ptr); }
};

struct IMediaStreamSourceStartingRequest :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceStartingRequest>
{
    IMediaStreamSourceStartingRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceStartingRequest>(m_ptr); }
};

struct IMediaStreamSourceStartingRequestDeferral :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceStartingRequestDeferral>
{
    IMediaStreamSourceStartingRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceStartingRequestDeferral>(m_ptr); }
};

struct IMediaStreamSourceSwitchStreamsRequest :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSwitchStreamsRequest>
{
    IMediaStreamSourceSwitchStreamsRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSwitchStreamsRequest>(m_ptr); }
};

struct IMediaStreamSourceSwitchStreamsRequestDeferral :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSwitchStreamsRequestDeferral>
{
    IMediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSwitchStreamsRequestDeferral>(m_ptr); }
};

struct IMediaStreamSourceSwitchStreamsRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    IMediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaStreamSourceSwitchStreamsRequestedEventArgs>(m_ptr); }
};

struct IMediaTrack :
    Windows::IInspectable,
    impl::consume<IMediaTrack>
{
    IMediaTrack(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaTrack>(m_ptr); }
};

struct IMseSourceBuffer :
    Windows::IInspectable,
    impl::consume<IMseSourceBuffer>
{
    IMseSourceBuffer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMseSourceBuffer>(m_ptr); }
};

struct IMseSourceBufferList :
    Windows::IInspectable,
    impl::consume<IMseSourceBufferList>
{
    IMseSourceBufferList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMseSourceBufferList>(m_ptr); }
};

struct IMseStreamSource :
    Windows::IInspectable,
    impl::consume<IMseStreamSource>,
    impl::require<IMseStreamSource, Windows::Media::Core::IMediaSource>
{
    IMseStreamSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMseStreamSource>(m_ptr); }
};

struct IMseStreamSourceStatics :
    Windows::IInspectable,
    impl::consume<IMseStreamSourceStatics>
{
    IMseStreamSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMseStreamSourceStatics>(m_ptr); }
};

struct ISceneAnalysisEffect :
    Windows::IInspectable,
    impl::consume<ISceneAnalysisEffect>,
    impl::require<ISceneAnalysisEffect, Windows::Media::IMediaExtension>
{
    ISceneAnalysisEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISceneAnalysisEffect>(m_ptr); }
};

struct ISceneAnalysisEffectFrame :
    Windows::IInspectable,
    impl::consume<ISceneAnalysisEffectFrame>,
    impl::require<ISceneAnalysisEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    ISceneAnalysisEffectFrame(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISceneAnalysisEffectFrame>(m_ptr); }
};

struct ISceneAnalyzedEventArgs :
    Windows::IInspectable,
    impl::consume<ISceneAnalyzedEventArgs>
{
    ISceneAnalyzedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISceneAnalyzedEventArgs>(m_ptr); }
};

struct ISingleSelectMediaTrackList :
    Windows::IInspectable,
    impl::consume<ISingleSelectMediaTrackList>
{
    ISingleSelectMediaTrackList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISingleSelectMediaTrackList>(m_ptr); }
};

struct ITimedMetadataTrack :
    Windows::IInspectable,
    impl::consume<ITimedMetadataTrack>,
    impl::require<ITimedMetadataTrack, Windows::Media::Core::IMediaTrack>
{
    ITimedMetadataTrack(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataTrack>(m_ptr); }
};

struct ITimedMetadataTrack2 :
    Windows::IInspectable,
    impl::consume<ITimedMetadataTrack2>,
    impl::require<ITimedMetadataTrack2, Windows::Media::Core::IMediaTrack, Windows::Media::Core::ITimedMetadataTrack>
{
    ITimedMetadataTrack2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataTrack2>(m_ptr); }
};

struct ITimedMetadataTrackError :
    Windows::IInspectable,
    impl::consume<ITimedMetadataTrackError>
{
    ITimedMetadataTrackError(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataTrackError>(m_ptr); }
};

struct ITimedMetadataTrackFactory :
    Windows::IInspectable,
    impl::consume<ITimedMetadataTrackFactory>
{
    ITimedMetadataTrackFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataTrackFactory>(m_ptr); }
};

struct ITimedMetadataTrackFailedEventArgs :
    Windows::IInspectable,
    impl::consume<ITimedMetadataTrackFailedEventArgs>
{
    ITimedMetadataTrackFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataTrackFailedEventArgs>(m_ptr); }
};

struct ITimedTextCue :
    Windows::IInspectable,
    impl::consume<ITimedTextCue>,
    impl::require<ITimedTextCue, Windows::Media::Core::IMediaCue>
{
    ITimedTextCue(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextCue>(m_ptr); }
};

struct ITimedTextLine :
    Windows::IInspectable,
    impl::consume<ITimedTextLine>
{
    ITimedTextLine(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextLine>(m_ptr); }
};

struct ITimedTextRegion :
    Windows::IInspectable,
    impl::consume<ITimedTextRegion>
{
    ITimedTextRegion(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextRegion>(m_ptr); }
};

struct ITimedTextSource :
    Windows::IInspectable,
    impl::consume<ITimedTextSource>
{
    ITimedTextSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextSource>(m_ptr); }
};

struct ITimedTextSourceResolveResultEventArgs :
    Windows::IInspectable,
    impl::consume<ITimedTextSourceResolveResultEventArgs>
{
    ITimedTextSourceResolveResultEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextSourceResolveResultEventArgs>(m_ptr); }
};

struct ITimedTextSourceStatics :
    Windows::IInspectable,
    impl::consume<ITimedTextSourceStatics>
{
    ITimedTextSourceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextSourceStatics>(m_ptr); }
};

struct ITimedTextStyle :
    Windows::IInspectable,
    impl::consume<ITimedTextStyle>
{
    ITimedTextStyle(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextStyle>(m_ptr); }
};

struct ITimedTextSubformat :
    Windows::IInspectable,
    impl::consume<ITimedTextSubformat>
{
    ITimedTextSubformat(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedTextSubformat>(m_ptr); }
};

struct IVideoStabilizationEffect :
    Windows::IInspectable,
    impl::consume<IVideoStabilizationEffect>,
    impl::require<IVideoStabilizationEffect, Windows::Media::IMediaExtension>
{
    IVideoStabilizationEffect(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoStabilizationEffect>(m_ptr); }
};

struct IVideoStabilizationEffectEnabledChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IVideoStabilizationEffectEnabledChangedEventArgs>
{
    IVideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoStabilizationEffectEnabledChangedEventArgs>(m_ptr); }
};

struct IVideoStreamDescriptor :
    Windows::IInspectable,
    impl::consume<IVideoStreamDescriptor>,
    impl::require<IVideoStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IVideoStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoStreamDescriptor>(m_ptr); }
};

struct IVideoStreamDescriptorFactory :
    Windows::IInspectable,
    impl::consume<IVideoStreamDescriptorFactory>
{
    IVideoStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoStreamDescriptorFactory>(m_ptr); }
};

struct IVideoTrack :
    Windows::IInspectable,
    impl::consume<IVideoTrack>
{
    IVideoTrack(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoTrack>(m_ptr); }
};

struct IVideoTrackOpenFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IVideoTrackOpenFailedEventArgs>
{
    IVideoTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoTrackOpenFailedEventArgs>(m_ptr); }
};

struct IVideoTrackSupportInfo :
    Windows::IInspectable,
    impl::consume<IVideoTrackSupportInfo>
{
    IVideoTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoTrackSupportInfo>(m_ptr); }
};

}

}
