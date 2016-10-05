// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Playback.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Media.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_deeccfe9_6c01_576f_95f2_93515ae40ebf
#define WINRT_GENERIC_deeccfe9_6c01_576f_95f2_93515ae40ebf
template <> struct __declspec(uuid("deeccfe9-6c01-576f-95f2-93515ae40ebf")) __declspec(novtable) IIterable<Windows::Media::Playback::PlaybackMediaMarker> : impl_IIterable<Windows::Media::Playback::PlaybackMediaMarker> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f1a6a51e_d078_5c40_ba3f_348870ba5c87
#define WINRT_GENERIC_f1a6a51e_d078_5c40_ba3f_348870ba5c87
template <> struct __declspec(uuid("f1a6a51e-d078-5c40-ba3f-348870ba5c87")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_362c45a7_3a0a_5e27_99ce_cff6d1b770e1
#define WINRT_GENERIC_362c45a7_3a0a_5e27_99ce_cff6d1b770e1
template <> struct __declspec(uuid("362c45a7-3a0a-5e27-99ce-cff6d1b770e1")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_67a4f43c_c254_57f0_a39d_a475a342d21d
#define WINRT_GENERIC_67a4f43c_c254_57f0_a39d_a475a342d21d
template <> struct __declspec(uuid("67a4f43c-c254-57f0-a39d-a475a342d21d")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_ba51d31a_5688_5d4d_af42_122070b1eefa
#define WINRT_GENERIC_ba51d31a_5688_5d4d_af42_122070b1eefa
template <> struct __declspec(uuid("ba51d31a-5688-5d4d-af42-122070b1eefa")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_7c70f38d_2aa1_5522_a6d6_34b52b988ae7
#define WINRT_GENERIC_7c70f38d_2aa1_5522_a6d6_34b52b988ae7
template <> struct __declspec(uuid("7c70f38d-2aa1-5522-a6d6-34b52b988ae7")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_c296f3f9_1268_59a2_b7c3_2f588ed4a017
#define WINRT_GENERIC_c296f3f9_1268_59a2_b7c3_2f588ed4a017
template <> struct __declspec(uuid("c296f3f9-1268-59a2-b7c3-2f588ed4a017")) __declspec(novtable) IVectorView<Windows::Media::Playback::MediaBreak> : impl_IVectorView<Windows::Media::Playback::MediaBreak> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a6954c30_99dc_5f84_b482_7d0692c0277b
#define WINRT_GENERIC_a6954c30_99dc_5f84_b482_7d0692c0277b
template <> struct __declspec(uuid("a6954c30-99dc-5f84-b482-7d0692c0277b")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> {};
#endif

#ifndef WINRT_GENERIC_4bf2cca1_cd9d_5d88_9e47_1881201bb72d
#define WINRT_GENERIC_4bf2cca1_cd9d_5d88_9e47_1881201bb72d
template <> struct __declspec(uuid("4bf2cca1-cd9d-5d88-9e47-1881201bb72d")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_04afafa9_d83a_5ccb_8cab_82c9d92a19ab
#define WINRT_GENERIC_04afafa9_d83a_5ccb_8cab_82c9d92a19ab
template <> struct __declspec(uuid("04afafa9-d83a-5ccb-8cab-82c9d92a19ab")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c530fa5d_1a56_582a_a254_1b1ae17b8d2d
#define WINRT_GENERIC_c530fa5d_1a56_582a_a254_1b1ae17b8d2d
template <> struct __declspec(uuid("c530fa5d-1a56-582a-a254-1b1ae17b8d2d")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_078fc818_19f5_5b8a_ac82_25193bea56ee
#define WINRT_GENERIC_078fc818_19f5_5b8a_ac82_25193bea56ee
template <> struct __declspec(uuid("078fc818-19f5-5b8a-ac82-25193bea56ee")) __declspec(novtable) EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> : impl_EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2675973a_eb2d_56a1_82a0_340b0ff041e6
#define WINRT_GENERIC_2675973a_eb2d_56a1_82a0_340b0ff041e6
template <> struct __declspec(uuid("2675973a-eb2d-56a1-82a0-340b0ff041e6")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_76d59f7c_edf3_5dde_9529_6f806bdb1fcb
#define WINRT_GENERIC_76d59f7c_edf3_5dde_9529_6f806bdb1fcb
template <> struct __declspec(uuid("76d59f7c-edf3-5dde-9529-6f806bdb1fcb")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_79eb2ad3_0781_5f64_b0cd_31e1145d109f
#define WINRT_GENERIC_79eb2ad3_0781_5f64_b0cd_31e1145d109f
template <> struct __declspec(uuid("79eb2ad3-0781-5f64-b0cd-31e1145d109f")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_ce41af40_93a6_52bf_9cad_4d5fffd10ee0
#define WINRT_GENERIC_ce41af40_93a6_52bf_9cad_4d5fffd10ee0
template <> struct __declspec(uuid("ce41af40-93a6-52bf-9cad-4d5fffd10ee0")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_25726db4_8913_5967_90eb_10f09f30dd33
#define WINRT_GENERIC_25726db4_8913_5967_90eb_10f09f30dd33
template <> struct __declspec(uuid("25726db4-8913-5967-90eb-10f09f30dd33")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d7cd6ce3_516f_5b34_beaf_3ee90b622872
#define WINRT_GENERIC_d7cd6ce3_516f_5b34_beaf_3ee90b622872
template <> struct __declspec(uuid("d7cd6ce3-516f-5b34-beaf-3ee90b622872")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3c37e026_8d0b_5d73_a650_9f18abbc353d
#define WINRT_GENERIC_3c37e026_8d0b_5d73_a650_9f18abbc353d
template <> struct __declspec(uuid("3c37e026-8d0b-5d73-a650-9f18abbc353d")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6c972f91_f626_5799_ba86_5e941f0202c8
#define WINRT_GENERIC_6c972f91_f626_5799_ba86_5e941f0202c8
template <> struct __declspec(uuid("6c972f91-f626-5799-ba86-5e941f0202c8")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_824845b8_c5df_560b_a722_c15b25d4463a
#define WINRT_GENERIC_824845b8_c5df_560b_a722_c15b25d4463a
template <> struct __declspec(uuid("824845b8-c5df-560b-a722-c15b25d4463a")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d863b1c4_7442_53c4_94d2_20d8973df585
#define WINRT_GENERIC_d863b1c4_7442_53c4_94d2_20d8973df585
template <> struct __declspec(uuid("d863b1c4-7442-53c4-94d2-20d8973df585")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_3f8a8ea1_ff9a_5613_9846_33799f6b8c8a
#define WINRT_GENERIC_3f8a8ea1_ff9a_5613_9846_33799f6b8c8a
template <> struct __declspec(uuid("3f8a8ea1-ff9a-5613-9846-33799f6b8c8a")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_0313ae7a_2803_5d45_b5a1_a0fc5cd55e7c
#define WINRT_GENERIC_0313ae7a_2803_5d45_b5a1_a0fc5cd55e7c
template <> struct __declspec(uuid("0313ae7a-2803-5d45-b5a1-a0fc5cd55e7c")) __declspec(novtable) IVectorView<Windows::Media::Core::TimedMetadataTrack> : impl_IVectorView<Windows::Media::Core::TimedMetadataTrack> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2dd51918_4525_5be5_a6c1_409bc72863a6
#define WINRT_GENERIC_2dd51918_4525_5be5_a6c1_409bc72863a6
template <> struct __declspec(uuid("2dd51918-4525-5be5-a6c1-409bc72863a6")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e71ffa4a_14a7_5068_891c_6e717af8bf8d
#define WINRT_GENERIC_e71ffa4a_14a7_5068_891c_6e717af8bf8d
template <> struct __declspec(uuid("e71ffa4a-14a7-5068-891c-6e717af8bf8d")) __declspec(novtable) IVectorView<Windows::Media::Core::AudioTrack> : impl_IVectorView<Windows::Media::Core::AudioTrack> {};
#endif

#ifndef WINRT_GENERIC_b3be50a8_9856_5656_ab6d_cd58f9de0a4f
#define WINRT_GENERIC_b3be50a8_9856_5656_ab6d_cd58f9de0a4f
template <> struct __declspec(uuid("b3be50a8-9856-5656-ab6d-cd58f9de0a4f")) __declspec(novtable) IIterable<Windows::Media::Core::AudioTrack> : impl_IIterable<Windows::Media::Core::AudioTrack> {};
#endif

#ifndef WINRT_GENERIC_200c6224_0b43_54fb_995f_fd8688bf24de
#define WINRT_GENERIC_200c6224_0b43_54fb_995f_fd8688bf24de
template <> struct __declspec(uuid("200c6224-0b43-54fb-995f-fd8688bf24de")) __declspec(novtable) IVectorView<Windows::Media::Core::VideoTrack> : impl_IVectorView<Windows::Media::Core::VideoTrack> {};
#endif

#ifndef WINRT_GENERIC_84413442_a2e3_5e0f_936d_bc40b0fb2dcd
#define WINRT_GENERIC_84413442_a2e3_5e0f_936d_bc40b0fb2dcd
template <> struct __declspec(uuid("84413442-a2e3-5e0f-936d-bc40b0fb2dcd")) __declspec(novtable) IIterable<Windows::Media::Core::VideoTrack> : impl_IIterable<Windows::Media::Core::VideoTrack> {};
#endif

#ifndef WINRT_GENERIC_150a4454_03bb_5dd1_8153_6a600e851f71
#define WINRT_GENERIC_150a4454_03bb_5dd1_8153_6a600e851f71
template <> struct __declspec(uuid("150a4454-03bb-5dd1-8153-6a600e851f71")) __declspec(novtable) IIterable<Windows::Media::Core::TimedMetadataTrack> : impl_IIterable<Windows::Media::Core::TimedMetadataTrack> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3c57acbf_ca07_586a_8adb_8047dc9165a6
#define WINRT_GENERIC_3c57acbf_ca07_586a_8adb_8047dc9165a6
template <> struct __declspec(uuid("3c57acbf-ca07-586a-8adb-8047dc9165a6")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_23319e7d_34b1_57b7_97e5_844948ba4719
#define WINRT_GENERIC_23319e7d_34b1_57b7_97e5_844948ba4719
template <> struct __declspec(uuid("23319e7d-34b1-57b7-97e5-844948ba4719")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_404c5f9d_250d_5f8c_9627_6b4105c32d09
#define WINRT_GENERIC_404c5f9d_250d_5f8c_9627_6b4105c32d09
template <> struct __declspec(uuid("404c5f9d-250d-5f8c-9627-6b4105c32d09")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6732bbef_3311_5f83_9c9d_82a5cf3cd82a
#define WINRT_GENERIC_6732bbef_3311_5f83_9c9d_82a5cf3cd82a
template <> struct __declspec(uuid("6732bbef-3311-5f83-9c9d-82a5cf3cd82a")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fabf4843_39eb_5c3d_a12b_fca189b46e8e
#define WINRT_GENERIC_fabf4843_39eb_5c3d_a12b_fca189b46e8e
template <> struct __declspec(uuid("fabf4843-39eb-5c3d-a12b-fca189b46e8e")) __declspec(novtable) IObservableVector<Windows::Media::Playback::MediaPlaybackItem> : impl_IObservableVector<Windows::Media::Playback::MediaPlaybackItem> {};
#endif

#ifndef WINRT_GENERIC_b6a4c9fe_c73d_5eba_b5ab_6f8deaca30b9
#define WINRT_GENERIC_b6a4c9fe_c73d_5eba_b5ab_6f8deaca30b9
template <> struct __declspec(uuid("b6a4c9fe-c73d-5eba-b5ab-6f8deaca30b9")) __declspec(novtable) IVectorView<Windows::Media::Playback::MediaPlaybackItem> : impl_IVectorView<Windows::Media::Playback::MediaPlaybackItem> {};
#endif

#ifndef WINRT_GENERIC_8b8ab4a4_0253_56e9_a232_94e335aefa8f
#define WINRT_GENERIC_8b8ab4a4_0253_56e9_a232_94e335aefa8f
template <> struct __declspec(uuid("8b8ab4a4-0253-56e9-a232-94e335aefa8f")) __declspec(novtable) IIterable<Windows::Media::Playback::MediaPlaybackItem> : impl_IIterable<Windows::Media::Playback::MediaPlaybackItem> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_40213c85_bf23_5f78_b9c4_e03f3be2b41c
#define WINRT_GENERIC_40213c85_bf23_5f78_b9c4_e03f3be2b41c
template <> struct __declspec(uuid("40213c85-bf23-5f78-b9c4-e03f3be2b41c")) __declspec(novtable) TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> : impl_TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_28607d6b_daa4_5eef_9f81_cc08a8297182
#define WINRT_GENERIC_28607d6b_daa4_5eef_9f81_cc08a8297182
template <> struct __declspec(uuid("28607d6b-daa4-5eef-9f81-cc08a8297182")) __declspec(novtable) IIterator<Windows::Media::Playback::PlaybackMediaMarker> : impl_IIterator<Windows::Media::Playback::PlaybackMediaMarker> {};
#endif

#ifndef WINRT_GENERIC_9efd8746_f93c_524f_9f95_4b598acf8d25
#define WINRT_GENERIC_9efd8746_f93c_524f_9f95_4b598acf8d25
template <> struct __declspec(uuid("9efd8746-f93c-524f-9f95-4b598acf8d25")) __declspec(novtable) IIterator<Windows::Media::Playback::MediaBreak> : impl_IIterator<Windows::Media::Playback::MediaBreak> {};
#endif

#ifndef WINRT_GENERIC_04f000ec_c727_5dc0_9f7c_245c75c92f2f
#define WINRT_GENERIC_04f000ec_c727_5dc0_9f7c_245c75c92f2f
template <> struct __declspec(uuid("04f000ec-c727-5dc0-9f7c-245c75c92f2f")) __declspec(novtable) IIterable<Windows::Media::Playback::MediaBreak> : impl_IIterable<Windows::Media::Playback::MediaBreak> {};
#endif

#ifndef WINRT_GENERIC_859354e5_077b_5d53_b297_1a07b97f09c3
#define WINRT_GENERIC_859354e5_077b_5d53_b297_1a07b97f09c3
template <> struct __declspec(uuid("859354e5-077b-5d53-b297-1a07b97f09c3")) __declspec(novtable) IIterator<Windows::Media::Core::TimedMetadataTrack> : impl_IIterator<Windows::Media::Core::TimedMetadataTrack> {};
#endif

#ifndef WINRT_GENERIC_138064ef_8693_5303_8a75_eba494d06342
#define WINRT_GENERIC_138064ef_8693_5303_8a75_eba494d06342
template <> struct __declspec(uuid("138064ef-8693-5303-8a75-eba494d06342")) __declspec(novtable) IIterator<Windows::Media::Core::AudioTrack> : impl_IIterator<Windows::Media::Core::AudioTrack> {};
#endif

#ifndef WINRT_GENERIC_a7c8d22c_b59d_5d7a_8d70_67f898a0b877
#define WINRT_GENERIC_a7c8d22c_b59d_5d7a_8d70_67f898a0b877
template <> struct __declspec(uuid("a7c8d22c-b59d-5d7a-8d70-67f898a0b877")) __declspec(novtable) IIterator<Windows::Media::Core::VideoTrack> : impl_IIterator<Windows::Media::Core::VideoTrack> {};
#endif

#ifndef WINRT_GENERIC_891bddde_6bf3_5d1f_80ab_5a342a16a0bb
#define WINRT_GENERIC_891bddde_6bf3_5d1f_80ab_5a342a16a0bb
template <> struct __declspec(uuid("891bddde-6bf3-5d1f-80ab-5a342a16a0bb")) __declspec(novtable) VectorChangedEventHandler<Windows::Media::Playback::MediaPlaybackItem> : impl_VectorChangedEventHandler<Windows::Media::Playback::MediaPlaybackItem> {};
#endif

#ifndef WINRT_GENERIC_ab074059_8c08_53e7_9654_02d2598fff55
#define WINRT_GENERIC_ab074059_8c08_53e7_9654_02d2598fff55
template <> struct __declspec(uuid("ab074059-8c08-53e7-9654-02d2598fff55")) __declspec(novtable) IIterator<Windows::Media::Playback::MediaPlaybackItem> : impl_IIterator<Windows::Media::Playback::MediaPlaybackItem> {};
#endif

#ifndef WINRT_GENERIC_e1504f46_c4a6_5a29_8fc9_a934d12d7242
#define WINRT_GENERIC_e1504f46_c4a6_5a29_8fc9_a934d12d7242
template <> struct __declspec(uuid("e1504f46-c4a6-5a29-8fc9-a934d12d7242")) __declspec(novtable) IVector<Windows::Media::Playback::MediaPlaybackItem> : impl_IVector<Windows::Media::Playback::MediaPlaybackItem> {};
#endif


}

namespace Windows::Media::Playback {

template <typename D>
struct WINRT_EBO impl_IBackgroundMediaPlayerStatics
{
    Windows::Media::Playback::MediaPlayer Current() const;
    event_token MessageReceivedFromBackground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const;
    using MessageReceivedFromBackground_revoker = event_revoker<IBackgroundMediaPlayerStatics>;
    MessageReceivedFromBackground_revoker MessageReceivedFromBackground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const;
    void MessageReceivedFromBackground(event_token token) const;
    event_token MessageReceivedFromForeground(const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const;
    using MessageReceivedFromForeground_revoker = event_revoker<IBackgroundMediaPlayerStatics>;
    MessageReceivedFromForeground_revoker MessageReceivedFromForeground(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Media::Playback::MediaPlayerDataReceivedEventArgs> & value) const;
    void MessageReceivedFromForeground(event_token token) const;
    void SendMessageToBackground(const Windows::Foundation::Collections::ValueSet & value) const;
    void SendMessageToForeground(const Windows::Foundation::Collections::ValueSet & value) const;
    bool IsMediaPlaying() const;
    void Shutdown() const;
};

template <typename D>
struct WINRT_EBO impl_ICurrentMediaPlaybackItemChangedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem NewItem() const;
    Windows::Media::Playback::MediaPlaybackItem OldItem() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreak
{
    Windows::Media::Playback::MediaPlaybackList PlaybackList() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> PresentationPosition() const;
    Windows::Media::Playback::MediaBreakInsertionMethod InsertionMethod() const;
    Windows::Foundation::Collections::ValueSet CustomProperties() const;
    bool CanStart() const;
    void CanStart(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakEndedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakFactory
{
    Windows::Media::Playback::MediaBreak Create(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod) const;
    Windows::Media::Playback::MediaBreak CreateWithPresentationPosition(Windows::Media::Playback::MediaBreakInsertionMethod insertionMethod, const Windows::Foundation::TimeSpan & presentationPosition) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakManager
{
    event_token BreaksSeekedOver(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> & handler) const;
    using BreaksSeekedOver_revoker = event_revoker<IMediaBreakManager>;
    BreaksSeekedOver_revoker BreaksSeekedOver(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSeekedOverEventArgs> & handler) const;
    void BreaksSeekedOver(event_token token) const;
    event_token BreakStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> & handler) const;
    using BreakStarted_revoker = event_revoker<IMediaBreakManager>;
    BreakStarted_revoker BreakStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakStartedEventArgs> & handler) const;
    void BreakStarted(event_token token) const;
    event_token BreakEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> & handler) const;
    using BreakEnded_revoker = event_revoker<IMediaBreakManager>;
    BreakEnded_revoker BreakEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakEndedEventArgs> & handler) const;
    void BreakEnded(event_token token) const;
    event_token BreakSkipped(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> & handler) const;
    using BreakSkipped_revoker = event_revoker<IMediaBreakManager>;
    BreakSkipped_revoker BreakSkipped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakManager, Windows::Media::Playback::MediaBreakSkippedEventArgs> & handler) const;
    void BreakSkipped(event_token token) const;
    Windows::Media::Playback::MediaBreak CurrentBreak() const;
    Windows::Media::Playback::MediaPlaybackSession PlaybackSession() const;
    void PlayBreak(const Windows::Media::Playback::MediaBreak & value) const;
    void SkipCurrentBreak() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakSchedule
{
    event_token ScheduleChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> & handler) const;
    using ScheduleChanged_revoker = event_revoker<IMediaBreakSchedule>;
    ScheduleChanged_revoker ScheduleChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaBreakSchedule, Windows::IInspectable> & handler) const;
    void ScheduleChanged(event_token token) const;
    void InsertMidrollBreak(const Windows::Media::Playback::MediaBreak & mediaBreak) const;
    void RemoveMidrollBreak(const Windows::Media::Playback::MediaBreak & mediaBreak) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> MidrollBreaks() const;
    void PrerollBreak(const Windows::Media::Playback::MediaBreak & value) const;
    Windows::Media::Playback::MediaBreak PrerollBreak() const;
    void PostrollBreak(const Windows::Media::Playback::MediaBreak & value) const;
    Windows::Media::Playback::MediaBreak PostrollBreak() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakSeekedOverEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaBreak> SeekedOverBreaks() const;
    Windows::Foundation::TimeSpan OldPosition() const;
    Windows::Foundation::TimeSpan NewPosition() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakSkippedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaBreakStartedEventArgs
{
    Windows::Media::Playback::MediaBreak MediaBreak() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEnginePlaybackSource
{
    Windows::Media::Playback::MediaPlaybackItem CurrentItem() const;
    void SetPlaybackSource(const Windows::Media::Playback::IMediaPlaybackSource & source) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaItemDisplayProperties
{
    Windows::Media::MediaPlaybackType Type() const;
    void Type(Windows::Media::MediaPlaybackType value) const;
    Windows::Media::MusicDisplayProperties MusicProperties() const;
    Windows::Media::VideoDisplayProperties VideoProperties() const;
    Windows::Storage::Streams::RandomAccessStreamReference Thumbnail() const;
    void Thumbnail(const Windows::Storage::Streams::RandomAccessStreamReference & value) const;
    void ClearAll() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManager
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PlayBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PauseBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior NextBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PreviousBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior FastForwardBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior RewindBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior ShuffleBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior AutoRepeatModeBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior PositionBehavior() const;
    Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior RateBehavior() const;
    event_token PlayReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> & handler) const;
    using PlayReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    PlayReceived_revoker PlayReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPlayReceivedEventArgs> & handler) const;
    void PlayReceived(event_token token) const;
    event_token PauseReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> & handler) const;
    using PauseReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    PauseReceived_revoker PauseReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPauseReceivedEventArgs> & handler) const;
    void PauseReceived(event_token token) const;
    event_token NextReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> & handler) const;
    using NextReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    NextReceived_revoker NextReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerNextReceivedEventArgs> & handler) const;
    void NextReceived(event_token token) const;
    event_token PreviousReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> & handler) const;
    using PreviousReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    PreviousReceived_revoker PreviousReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPreviousReceivedEventArgs> & handler) const;
    void PreviousReceived(event_token token) const;
    event_token FastForwardReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> & handler) const;
    using FastForwardReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    FastForwardReceived_revoker FastForwardReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerFastForwardReceivedEventArgs> & handler) const;
    void FastForwardReceived(event_token token) const;
    event_token RewindReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> & handler) const;
    using RewindReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    RewindReceived_revoker RewindReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRewindReceivedEventArgs> & handler) const;
    void RewindReceived(event_token token) const;
    event_token ShuffleReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> & handler) const;
    using ShuffleReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    ShuffleReceived_revoker ShuffleReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerShuffleReceivedEventArgs> & handler) const;
    void ShuffleReceived(event_token token) const;
    event_token AutoRepeatModeReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> & handler) const;
    using AutoRepeatModeReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    AutoRepeatModeReceived_revoker AutoRepeatModeReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs> & handler) const;
    void AutoRepeatModeReceived(event_token token) const;
    event_token PositionReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> & handler) const;
    using PositionReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    PositionReceived_revoker PositionReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerPositionReceivedEventArgs> & handler) const;
    void PositionReceived(event_token token) const;
    event_token RateReceived(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> & handler) const;
    using RateReceived_revoker = event_revoker<IMediaPlaybackCommandManager>;
    RateReceived_revoker RateReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManager, Windows::Media::Playback::MediaPlaybackCommandManagerRateReceivedEventArgs> & handler) const;
    void RateReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Media::MediaPlaybackAutoRepeatMode AutoRepeatMode() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerCommandBehavior
{
    Windows::Media::Playback::MediaPlaybackCommandManager CommandManager() const;
    bool IsEnabled() const;
    Windows::Media::Playback::MediaCommandEnablingRule EnablingRule() const;
    void EnablingRule(Windows::Media::Playback::MediaCommandEnablingRule value) const;
    event_token IsEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> & handler) const;
    using IsEnabledChanged_revoker = event_revoker<IMediaPlaybackCommandManagerCommandBehavior>;
    IsEnabledChanged_revoker IsEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackCommandManagerCommandBehavior, Windows::IInspectable> & handler) const;
    void IsEnabledChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerNextReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::TimeSpan Position() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerRateReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    double PlaybackRate() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    bool IsShuffleRequested() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItem
{
    event_token AudioTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    using AudioTracksChanged_revoker = event_revoker<IMediaPlaybackItem>;
    AudioTracksChanged_revoker AudioTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    void AudioTracksChanged(event_token token) const;
    event_token VideoTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    using VideoTracksChanged_revoker = event_revoker<IMediaPlaybackItem>;
    VideoTracksChanged_revoker VideoTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    void VideoTracksChanged(event_token token) const;
    event_token TimedMetadataTracksChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    using TimedMetadataTracksChanged_revoker = event_revoker<IMediaPlaybackItem>;
    TimedMetadataTracksChanged_revoker TimedMetadataTracksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackItem, Windows::Foundation::Collections::IVectorChangedEventArgs> & handler) const;
    void TimedMetadataTracksChanged(event_token token) const;
    Windows::Media::Core::MediaSource Source() const;
    Windows::Media::Playback::MediaPlaybackAudioTrackList AudioTracks() const;
    Windows::Media::Playback::MediaPlaybackVideoTrackList VideoTracks() const;
    Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList TimedMetadataTracks() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItem2
{
    Windows::Media::Playback::MediaBreakSchedule BreakSchedule() const;
    Windows::Foundation::TimeSpan StartTime() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> DurationLimit() const;
    bool CanSkip() const;
    void CanSkip(bool value) const;
    Windows::Media::Playback::MediaItemDisplayProperties GetDisplayProperties() const;
    void ApplyDisplayProperties(const Windows::Media::Playback::MediaItemDisplayProperties & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemError
{
    Windows::Media::Playback::MediaPlaybackItemErrorCode ErrorCode() const;
    HRESULT ExtendedError() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemFactory
{
    Windows::Media::Playback::MediaPlaybackItem Create(const Windows::Media::Core::MediaSource & source) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemFactory2
{
    Windows::Media::Playback::MediaPlaybackItem CreateWithStartTime(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime) const;
    Windows::Media::Playback::MediaPlaybackItem CreateWithStartTimeAndDurationLimit(const Windows::Media::Core::MediaSource & source, const Windows::Foundation::TimeSpan & startTime, const Windows::Foundation::TimeSpan & durationLimit) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemFailedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem Item() const;
    Windows::Media::Playback::MediaPlaybackItemError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemOpenedEventArgs
{
    Windows::Media::Playback::MediaPlaybackItem Item() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackItemStatics
{
    Windows::Media::Playback::MediaPlaybackItem FindFromMediaSource(const Windows::Media::Core::MediaSource & source) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackList
{
    event_token ItemFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> & handler) const;
    using ItemFailed_revoker = event_revoker<IMediaPlaybackList>;
    ItemFailed_revoker ItemFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemFailedEventArgs> & handler) const;
    void ItemFailed(event_token token) const;
    event_token CurrentItemChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> & handler) const;
    using CurrentItemChanged_revoker = event_revoker<IMediaPlaybackList>;
    CurrentItemChanged_revoker CurrentItemChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::CurrentMediaPlaybackItemChangedEventArgs> & handler) const;
    void CurrentItemChanged(event_token token) const;
    event_token ItemOpened(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> & handler) const;
    using ItemOpened_revoker = event_revoker<IMediaPlaybackList>;
    ItemOpened_revoker ItemOpened(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackList, Windows::Media::Playback::MediaPlaybackItemOpenedEventArgs> & handler) const;
    void ItemOpened(event_token token) const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Playback::MediaPlaybackItem> Items() const;
    bool AutoRepeatEnabled() const;
    void AutoRepeatEnabled(bool value) const;
    bool ShuffleEnabled() const;
    void ShuffleEnabled(bool value) const;
    Windows::Media::Playback::MediaPlaybackItem CurrentItem() const;
    uint32_t CurrentItemIndex() const;
    Windows::Media::Playback::MediaPlaybackItem MoveNext() const;
    Windows::Media::Playback::MediaPlaybackItem MovePrevious() const;
    Windows::Media::Playback::MediaPlaybackItem MoveTo(uint32_t itemIndex) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackList2
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> MaxPrefetchTime() const;
    void MaxPrefetchTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::Media::Playback::MediaPlaybackItem StartingItem() const;
    void StartingItem(const Windows::Media::Playback::MediaPlaybackItem & value) const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Playback::MediaPlaybackItem> ShuffledItems() const;
    void SetShuffledItems(const Windows::Foundation::Collections::IIterable<Windows::Media::Playback::MediaPlaybackItem> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackSession
{
    event_token PlaybackStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using PlaybackStateChanged_revoker = event_revoker<IMediaPlaybackSession>;
    PlaybackStateChanged_revoker PlaybackStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void PlaybackStateChanged(event_token token) const;
    event_token PlaybackRateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using PlaybackRateChanged_revoker = event_revoker<IMediaPlaybackSession>;
    PlaybackRateChanged_revoker PlaybackRateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void PlaybackRateChanged(event_token token) const;
    event_token SeekCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using SeekCompleted_revoker = event_revoker<IMediaPlaybackSession>;
    SeekCompleted_revoker SeekCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void SeekCompleted(event_token token) const;
    event_token BufferingStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using BufferingStarted_revoker = event_revoker<IMediaPlaybackSession>;
    BufferingStarted_revoker BufferingStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void BufferingStarted(event_token token) const;
    event_token BufferingEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using BufferingEnded_revoker = event_revoker<IMediaPlaybackSession>;
    BufferingEnded_revoker BufferingEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void BufferingEnded(event_token token) const;
    event_token BufferingProgressChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using BufferingProgressChanged_revoker = event_revoker<IMediaPlaybackSession>;
    BufferingProgressChanged_revoker BufferingProgressChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void BufferingProgressChanged(event_token token) const;
    event_token DownloadProgressChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using DownloadProgressChanged_revoker = event_revoker<IMediaPlaybackSession>;
    DownloadProgressChanged_revoker DownloadProgressChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void DownloadProgressChanged(event_token token) const;
    event_token NaturalDurationChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using NaturalDurationChanged_revoker = event_revoker<IMediaPlaybackSession>;
    NaturalDurationChanged_revoker NaturalDurationChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void NaturalDurationChanged(event_token token) const;
    event_token PositionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using PositionChanged_revoker = event_revoker<IMediaPlaybackSession>;
    PositionChanged_revoker PositionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void PositionChanged(event_token token) const;
    event_token NaturalVideoSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    using NaturalVideoSizeChanged_revoker = event_revoker<IMediaPlaybackSession>;
    NaturalVideoSizeChanged_revoker NaturalVideoSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackSession, Windows::IInspectable> & value) const;
    void NaturalVideoSizeChanged(event_token token) const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
    Windows::Foundation::TimeSpan NaturalDuration() const;
    Windows::Foundation::TimeSpan Position() const;
    void Position(const Windows::Foundation::TimeSpan & value) const;
    Windows::Media::Playback::MediaPlaybackState PlaybackState() const;
    bool CanSeek() const;
    bool CanPause() const;
    bool IsProtected() const;
    double PlaybackRate() const;
    void PlaybackRate(double value) const;
    double BufferingProgress() const;
    double DownloadProgress() const;
    uint32_t NaturalVideoHeight() const;
    uint32_t NaturalVideoWidth() const;
    Windows::Foundation::Rect NormalizedSourceRect() const;
    void NormalizedSourceRect(const Windows::Foundation::Rect & value) const;
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode StereoscopicVideoPackingMode() const;
    void StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackSource
{
};

template <typename D>
struct WINRT_EBO impl_IMediaPlaybackTimedMetadataTrackList
{
    event_token PresentationModeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> & handler) const;
    using PresentationModeChanged_revoker = event_revoker<IMediaPlaybackTimedMetadataTrackList>;
    PresentationModeChanged_revoker PresentationModeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlaybackTimedMetadataTrackList, Windows::Media::Playback::TimedMetadataPresentationModeChangedEventArgs> & handler) const;
    void PresentationModeChanged(event_token token) const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode GetPresentationMode(uint32_t index) const;
    void SetPresentationMode(uint32_t index, Windows::Media::Playback::TimedMetadataTrackPresentationMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayer
{
    bool AutoPlay() const;
    void AutoPlay(bool value) const;
    Windows::Foundation::TimeSpan NaturalDuration() const;
    Windows::Foundation::TimeSpan Position() const;
    void Position(const Windows::Foundation::TimeSpan & value) const;
    double BufferingProgress() const;
    Windows::Media::Playback::MediaPlayerState CurrentState() const;
    bool CanSeek() const;
    bool CanPause() const;
    bool IsLoopingEnabled() const;
    void IsLoopingEnabled(bool value) const;
    bool IsProtected() const;
    bool IsMuted() const;
    void IsMuted(bool value) const;
    double PlaybackRate() const;
    void PlaybackRate(double value) const;
    double Volume() const;
    void Volume(double value) const;
    Windows::Media::Playback::PlaybackMediaMarkerSequence PlaybackMediaMarkers() const;
    event_token MediaOpened(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using MediaOpened_revoker = event_revoker<IMediaPlayer>;
    MediaOpened_revoker MediaOpened(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void MediaOpened(event_token token) const;
    event_token MediaEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using MediaEnded_revoker = event_revoker<IMediaPlayer>;
    MediaEnded_revoker MediaEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void MediaEnded(event_token token) const;
    event_token MediaFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> & value) const;
    using MediaFailed_revoker = event_revoker<IMediaPlayer>;
    MediaFailed_revoker MediaFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerFailedEventArgs> & value) const;
    void MediaFailed(event_token token) const;
    event_token CurrentStateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using CurrentStateChanged_revoker = event_revoker<IMediaPlayer>;
    CurrentStateChanged_revoker CurrentStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void CurrentStateChanged(event_token token) const;
    event_token PlaybackMediaMarkerReached(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> & value) const;
    using PlaybackMediaMarkerReached_revoker = event_revoker<IMediaPlayer>;
    PlaybackMediaMarkerReached_revoker PlaybackMediaMarkerReached(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::PlaybackMediaMarkerReachedEventArgs> & value) const;
    void PlaybackMediaMarkerReached(event_token token) const;
    event_token MediaPlayerRateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> & value) const;
    using MediaPlayerRateChanged_revoker = event_revoker<IMediaPlayer>;
    MediaPlayerRateChanged_revoker MediaPlayerRateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::Media::Playback::MediaPlayerRateChangedEventArgs> & value) const;
    void MediaPlayerRateChanged(event_token token) const;
    event_token VolumeChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using VolumeChanged_revoker = event_revoker<IMediaPlayer>;
    VolumeChanged_revoker VolumeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void VolumeChanged(event_token token) const;
    event_token SeekCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using SeekCompleted_revoker = event_revoker<IMediaPlayer>;
    SeekCompleted_revoker SeekCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void SeekCompleted(event_token token) const;
    event_token BufferingStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using BufferingStarted_revoker = event_revoker<IMediaPlayer>;
    BufferingStarted_revoker BufferingStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void BufferingStarted(event_token token) const;
    event_token BufferingEnded(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using BufferingEnded_revoker = event_revoker<IMediaPlayer>;
    BufferingEnded_revoker BufferingEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void BufferingEnded(event_token token) const;
    void Play() const;
    void Pause() const;
    void SetUriSource(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayer2
{
    Windows::Media::SystemMediaTransportControls SystemMediaTransportControls() const;
    Windows::Media::Playback::MediaPlayerAudioCategory AudioCategory() const;
    void AudioCategory(Windows::Media::Playback::MediaPlayerAudioCategory value) const;
    Windows::Media::Playback::MediaPlayerAudioDeviceType AudioDeviceType() const;
    void AudioDeviceType(Windows::Media::Playback::MediaPlayerAudioDeviceType value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayer3
{
    event_token IsMutedChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using IsMutedChanged_revoker = event_revoker<IMediaPlayer3>;
    IsMutedChanged_revoker IsMutedChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void IsMutedChanged(event_token token) const;
    event_token SourceChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    using SourceChanged_revoker = event_revoker<IMediaPlayer3>;
    SourceChanged_revoker SourceChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Playback::MediaPlayer, Windows::IInspectable> & value) const;
    void SourceChanged(event_token token) const;
    double AudioBalance() const;
    void AudioBalance(double value) const;
    bool RealTimePlayback() const;
    void RealTimePlayback(bool value) const;
    Windows::Media::Playback::StereoscopicVideoRenderMode StereoscopicVideoRenderMode() const;
    void StereoscopicVideoRenderMode(Windows::Media::Playback::StereoscopicVideoRenderMode value) const;
    Windows::Media::Playback::MediaBreakManager BreakManager() const;
    Windows::Media::Playback::MediaPlaybackCommandManager CommandManager() const;
    Windows::Devices::Enumeration::DeviceInformation AudioDevice() const;
    void AudioDevice(const Windows::Devices::Enumeration::DeviceInformation & value) const;
    Windows::Media::MediaTimelineController TimelineController() const;
    void TimelineController(const Windows::Media::MediaTimelineController & value) const;
    Windows::Foundation::TimeSpan TimelineControllerPositionOffset() const;
    void TimelineControllerPositionOffset(const Windows::Foundation::TimeSpan & value) const;
    Windows::Media::Playback::MediaPlaybackSession PlaybackSession() const;
    void StepForwardOneFrame() const;
    void StepBackwardOneFrame() const;
    Windows::Media::Casting::CastingSource GetAsCastingSource() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayer4
{
    void SetSurfaceSize(const Windows::Foundation::Size & size) const;
    Windows::Media::Playback::MediaPlayerSurface GetSurface(const Windows::UI::Composition::Compositor & compositor) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerDataReceivedEventArgs
{
    Windows::Foundation::Collections::ValueSet Data() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerEffects
{
    void AddAudioEffect(hstring_ref activatableClassId, bool effectOptional, const Windows::Foundation::Collections::IPropertySet & configuration) const;
    void RemoveAllEffects() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerEffects2
{
    void AddVideoEffect(hstring_ref activatableClassId, bool effectOptional, const Windows::Foundation::Collections::IPropertySet & effectConfiguration) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerFailedEventArgs
{
    Windows::Media::Playback::MediaPlayerError Error() const;
    HRESULT ExtendedErrorCode() const;
    hstring ErrorMessage() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerRateChangedEventArgs
{
    double NewRate() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerSource
{
    Windows::Media::Protection::MediaProtectionManager ProtectionManager() const;
    void ProtectionManager(const Windows::Media::Protection::MediaProtectionManager & value) const;
    void SetFileSource(const Windows::Storage::IStorageFile & file) const;
    void SetStreamSource(const Windows::Storage::Streams::IRandomAccessStream & stream) const;
    void SetMediaSource(const Windows::Media::Core::IMediaSource & source) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerSource2
{
    Windows::Media::Playback::IMediaPlaybackSource Source() const;
    void Source(const Windows::Media::Playback::IMediaPlaybackSource & value) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaPlayerSurface
{
    Windows::UI::Composition::ICompositionSurface CompositionSurface() const;
    Windows::UI::Composition::Compositor Compositor() const;
    Windows::Media::Playback::MediaPlayer MediaPlayer() const;
};

template <typename D>
struct WINRT_EBO impl_IPlaybackMediaMarker
{
    Windows::Foundation::TimeSpan Time() const;
    hstring MediaMarkerType() const;
    hstring Text() const;
};

template <typename D>
struct WINRT_EBO impl_IPlaybackMediaMarkerFactory
{
    Windows::Media::Playback::PlaybackMediaMarker CreateFromTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Media::Playback::PlaybackMediaMarker Create(const Windows::Foundation::TimeSpan & value, hstring_ref mediaMarketType, hstring_ref text) const;
};

template <typename D>
struct WINRT_EBO impl_IPlaybackMediaMarkerReachedEventArgs
{
    Windows::Media::Playback::PlaybackMediaMarker PlaybackMediaMarker() const;
};

template <typename D>
struct WINRT_EBO impl_IPlaybackMediaMarkerSequence
{
    uint32_t Size() const;
    void Insert(const Windows::Media::Playback::PlaybackMediaMarker & value) const;
    void Clear() const;
};

template <typename D>
struct WINRT_EBO impl_ITimedMetadataPresentationModeChangedEventArgs
{
    Windows::Media::Core::TimedMetadataTrack Track() const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode OldPresentationMode() const;
    Windows::Media::Playback::TimedMetadataTrackPresentationMode NewPresentationMode() const;
};

struct IBackgroundMediaPlayerStatics :
    Windows::IInspectable,
    impl::consume<IBackgroundMediaPlayerStatics>
{
    IBackgroundMediaPlayerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackgroundMediaPlayerStatics>(m_ptr); }
};

struct ICurrentMediaPlaybackItemChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ICurrentMediaPlaybackItemChangedEventArgs>
{
    ICurrentMediaPlaybackItemChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentMediaPlaybackItemChangedEventArgs>(m_ptr); }
};

struct IMediaBreak :
    Windows::IInspectable,
    impl::consume<IMediaBreak>
{
    IMediaBreak(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreak>(m_ptr); }
};

struct IMediaBreakEndedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaBreakEndedEventArgs>
{
    IMediaBreakEndedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakEndedEventArgs>(m_ptr); }
};

struct IMediaBreakFactory :
    Windows::IInspectable,
    impl::consume<IMediaBreakFactory>
{
    IMediaBreakFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakFactory>(m_ptr); }
};

struct IMediaBreakManager :
    Windows::IInspectable,
    impl::consume<IMediaBreakManager>
{
    IMediaBreakManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakManager>(m_ptr); }
};

struct IMediaBreakSchedule :
    Windows::IInspectable,
    impl::consume<IMediaBreakSchedule>
{
    IMediaBreakSchedule(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakSchedule>(m_ptr); }
};

struct IMediaBreakSeekedOverEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaBreakSeekedOverEventArgs>
{
    IMediaBreakSeekedOverEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakSeekedOverEventArgs>(m_ptr); }
};

struct IMediaBreakSkippedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaBreakSkippedEventArgs>
{
    IMediaBreakSkippedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakSkippedEventArgs>(m_ptr); }
};

struct IMediaBreakStartedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaBreakStartedEventArgs>
{
    IMediaBreakStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaBreakStartedEventArgs>(m_ptr); }
};

struct IMediaEnginePlaybackSource :
    Windows::IInspectable,
    impl::consume<IMediaEnginePlaybackSource>
{
    IMediaEnginePlaybackSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEnginePlaybackSource>(m_ptr); }
};

struct IMediaItemDisplayProperties :
    Windows::IInspectable,
    impl::consume<IMediaItemDisplayProperties>
{
    IMediaItemDisplayProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaItemDisplayProperties>(m_ptr); }
};

struct IMediaPlaybackCommandManager :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManager>
{
    IMediaPlaybackCommandManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManager>(m_ptr); }
};

struct IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>
{
    IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerCommandBehavior :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerCommandBehavior>
{
    IMediaPlaybackCommandManagerCommandBehavior(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerCommandBehavior>(m_ptr); }
};

struct IMediaPlaybackCommandManagerFastForwardReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>
{
    IMediaPlaybackCommandManagerFastForwardReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerFastForwardReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerNextReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerNextReceivedEventArgs>
{
    IMediaPlaybackCommandManagerNextReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerNextReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerPauseReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerPauseReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPauseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerPauseReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerPlayReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerPlayReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPlayReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerPlayReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerPositionReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerPositionReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPositionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerPositionReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerPreviousReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerPreviousReceivedEventArgs>
{
    IMediaPlaybackCommandManagerPreviousReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerPreviousReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerRateReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerRateReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRateReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerRateReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerRewindReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerRewindReceivedEventArgs>
{
    IMediaPlaybackCommandManagerRewindReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerRewindReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackCommandManagerShuffleReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackCommandManagerShuffleReceivedEventArgs>
{
    IMediaPlaybackCommandManagerShuffleReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackCommandManagerShuffleReceivedEventArgs>(m_ptr); }
};

struct IMediaPlaybackItem :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItem>,
    impl::require<IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItem>(m_ptr); }
};

struct IMediaPlaybackItem2 :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItem2>,
    impl::require<IMediaPlaybackItem2, Windows::Media::Playback::IMediaPlaybackItem, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackItem2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItem2>(m_ptr); }
};

struct IMediaPlaybackItemError :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemError>
{
    IMediaPlaybackItemError(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemError>(m_ptr); }
};

struct IMediaPlaybackItemFactory :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemFactory>(m_ptr); }
};

struct IMediaPlaybackItemFactory2 :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemFactory2>,
    impl::require<IMediaPlaybackItemFactory2, Windows::Media::Playback::IMediaPlaybackItemFactory>
{
    IMediaPlaybackItemFactory2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemFactory2>(m_ptr); }
};

struct IMediaPlaybackItemFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemFailedEventArgs>
{
    IMediaPlaybackItemFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemFailedEventArgs>(m_ptr); }
};

struct IMediaPlaybackItemOpenedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemOpenedEventArgs>
{
    IMediaPlaybackItemOpenedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemOpenedEventArgs>(m_ptr); }
};

struct IMediaPlaybackItemStatics :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackItemStatics>
{
    IMediaPlaybackItemStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackItemStatics>(m_ptr); }
};

struct IMediaPlaybackList :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackList>,
    impl::require<IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackList>(m_ptr); }
};

struct IMediaPlaybackList2 :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackList2>,
    impl::require<IMediaPlaybackList2, Windows::Media::Playback::IMediaPlaybackList, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaPlaybackList2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackList2>(m_ptr); }
};

struct IMediaPlaybackSession :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackSession>
{
    IMediaPlaybackSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackSession>(m_ptr); }
};

struct IMediaPlaybackSource :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackSource>
{
    IMediaPlaybackSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackSource>(m_ptr); }
};

struct IMediaPlaybackTimedMetadataTrackList :
    Windows::IInspectable,
    impl::consume<IMediaPlaybackTimedMetadataTrackList>
{
    IMediaPlaybackTimedMetadataTrackList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlaybackTimedMetadataTrackList>(m_ptr); }
};

struct IMediaPlayer :
    Windows::IInspectable,
    impl::consume<IMediaPlayer>
{
    IMediaPlayer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayer>(m_ptr); }
};

struct IMediaPlayer2 :
    Windows::IInspectable,
    impl::consume<IMediaPlayer2>
{
    IMediaPlayer2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayer2>(m_ptr); }
};

struct IMediaPlayer3 :
    Windows::IInspectable,
    impl::consume<IMediaPlayer3>
{
    IMediaPlayer3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayer3>(m_ptr); }
};

struct IMediaPlayer4 :
    Windows::IInspectable,
    impl::consume<IMediaPlayer4>
{
    IMediaPlayer4(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayer4>(m_ptr); }
};

struct IMediaPlayerDataReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlayerDataReceivedEventArgs>
{
    IMediaPlayerDataReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerDataReceivedEventArgs>(m_ptr); }
};

struct IMediaPlayerEffects :
    Windows::IInspectable,
    impl::consume<IMediaPlayerEffects>
{
    IMediaPlayerEffects(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerEffects>(m_ptr); }
};

struct IMediaPlayerEffects2 :
    Windows::IInspectable,
    impl::consume<IMediaPlayerEffects2>
{
    IMediaPlayerEffects2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerEffects2>(m_ptr); }
};

struct IMediaPlayerFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlayerFailedEventArgs>
{
    IMediaPlayerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerFailedEventArgs>(m_ptr); }
};

struct IMediaPlayerRateChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IMediaPlayerRateChangedEventArgs>
{
    IMediaPlayerRateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerRateChangedEventArgs>(m_ptr); }
};

struct IMediaPlayerSource :
    Windows::IInspectable,
    impl::consume<IMediaPlayerSource>
{
    IMediaPlayerSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerSource>(m_ptr); }
};

struct IMediaPlayerSource2 :
    Windows::IInspectable,
    impl::consume<IMediaPlayerSource2>
{
    IMediaPlayerSource2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerSource2>(m_ptr); }
};

struct IMediaPlayerSurface :
    Windows::IInspectable,
    impl::consume<IMediaPlayerSurface>
{
    IMediaPlayerSurface(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaPlayerSurface>(m_ptr); }
};

struct IPlaybackMediaMarker :
    Windows::IInspectable,
    impl::consume<IPlaybackMediaMarker>
{
    IPlaybackMediaMarker(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlaybackMediaMarker>(m_ptr); }
};

struct IPlaybackMediaMarkerFactory :
    Windows::IInspectable,
    impl::consume<IPlaybackMediaMarkerFactory>
{
    IPlaybackMediaMarkerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlaybackMediaMarkerFactory>(m_ptr); }
};

struct IPlaybackMediaMarkerReachedEventArgs :
    Windows::IInspectable,
    impl::consume<IPlaybackMediaMarkerReachedEventArgs>
{
    IPlaybackMediaMarkerReachedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlaybackMediaMarkerReachedEventArgs>(m_ptr); }
};

struct IPlaybackMediaMarkerSequence :
    Windows::IInspectable,
    impl::consume<IPlaybackMediaMarkerSequence>,
    impl::require<IPlaybackMediaMarkerSequence, Windows::Foundation::Collections::IIterable<Windows::Media::Playback::PlaybackMediaMarker>>
{
    IPlaybackMediaMarkerSequence(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlaybackMediaMarkerSequence>(m_ptr); }
};

struct ITimedMetadataPresentationModeChangedEventArgs :
    Windows::IInspectable,
    impl::consume<ITimedMetadataPresentationModeChangedEventArgs>
{
    ITimedMetadataPresentationModeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITimedMetadataPresentationModeChangedEventArgs>(m_ptr); }
};

}

}
