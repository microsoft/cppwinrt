// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.RemoteSystems.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_f4706ab1_55a3_5270_afb2_732988fe8227
#define WINRT_GENERIC_f4706ab1_55a3_5270_afb2_732988fe8227
template <> struct __declspec(uuid("f4706ab1-55a3-5270-afb2-732988fe8227")) __declspec(novtable) IVectorView<Windows::Networking::HostName> : impl_IVectorView<Windows::Networking::HostName> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0d39f546_0eca_5236_a5ca_7e3660658462
#define WINRT_GENERIC_0d39f546_0eca_5236_a5ca_7e3660658462
template <> struct __declspec(uuid("0d39f546-0eca-5236-a5ca-7e3660658462")) __declspec(novtable) IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> : impl_IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_13966c92_a8de_50c0_b16b_00c2c48f5f37
#define WINRT_GENERIC_13966c92_a8de_50c0_b16b_00c2c48f5f37
template <> struct __declspec(uuid("13966c92-a8de-50c0-b16b-00c2c48f5f37")) __declspec(novtable) IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> : impl_IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d76da678_dd76_5460_8745_915b4410c905
#define WINRT_GENERIC_d76da678_dd76_5460_8745_915b4410c905
template <> struct __declspec(uuid("d76da678-dd76-5460-8745-915b4410c905")) __declspec(novtable) IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> : impl_IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_a9b98f4a_b63d_5d07_92bb_e2acb39455d1
#define WINRT_GENERIC_a9b98f4a_b63d_5d07_92bb_e2acb39455d1
template <> struct __declspec(uuid("a9b98f4a-b63d-5d07-92bb-e2acb39455d1")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_88f9d23f_8946_5a1e_8da1_82c66982a6d2
#define WINRT_GENERIC_88f9d23f_8946_5a1e_8da1_82c66982a6d2
template <> struct __declspec(uuid("88f9d23f-8946-5a1e-8da1-82c66982a6d2")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c290fb5a_3ed0_5858_af19_f85553cb96b8
#define WINRT_GENERIC_c290fb5a_3ed0_5858_af19_f85553cb96b8
template <> struct __declspec(uuid("c290fb5a-3ed0-5858-af19-f85553cb96b8")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c58dbd1e_e300_55a8_ada5_e25aaaa86667
#define WINRT_GENERIC_c58dbd1e_e300_55a8_ada5_e25aaaa86667
template <> struct __declspec(uuid("c58dbd1e-e300-55a8-ada5-e25aaaa86667")) __declspec(novtable) IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> : impl_IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> {};
#endif

#ifndef WINRT_GENERIC_1b036c4f_6b8f_55d6_b6df_45e46a823b1d
#define WINRT_GENERIC_1b036c4f_6b8f_55d6_b6df_45e46a823b1d
template <> struct __declspec(uuid("1b036c4f-6b8f-55d6-b6df-45e46a823b1d")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_040f48b7_0d41_5aa2_85e8_6311666f0324
#define WINRT_GENERIC_040f48b7_0d41_5aa2_85e8_6311666f0324
template <> struct __declspec(uuid("040f48b7-0d41-5aa2-85e8-6311666f0324")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_1cbc54f0_0c9d_59cc_8055_5e017a317812
#define WINRT_GENERIC_1cbc54f0_0c9d_59cc_8055_5e017a317812
template <> struct __declspec(uuid("1cbc54f0-0c9d-59cc-8055-5e017a317812")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_18a242bb_d338_56c4_9559_568d5c2c3e93
#define WINRT_GENERIC_18a242bb_d338_56c4_9559_568d5c2c3e93
template <> struct __declspec(uuid("18a242bb-d338-56c4-9559-568d5c2c3e93")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_7d42fff3_fd21_5e15_b21a_75e1bbcd13c7
#define WINRT_GENERIC_7d42fff3_fd21_5e15_b21a_75e1bbcd13c7
template <> struct __declspec(uuid("7d42fff3-fd21-5e15-b21a-75e1bbcd13c7")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_73d7e8b3_7d44_50c8_afad_450de59fd0ae
#define WINRT_GENERIC_73d7e8b3_7d44_50c8_afad_450de59fd0ae
template <> struct __declspec(uuid("73d7e8b3-7d44-50c8-afad-450de59fd0ae")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_d4cf5bda_cc7a_52ef_a256_c4b36163beec
#define WINRT_GENERIC_d4cf5bda_cc7a_52ef_a256_c4b36163beec
template <> struct __declspec(uuid("d4cf5bda-cc7a-52ef-a256-c4b36163beec")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_d8e04916_b452_5322_aec9_e3d4d581c772
#define WINRT_GENERIC_d8e04916_b452_5322_aec9_e3d4d581c772
template <> struct __declspec(uuid("d8e04916-b452-5322-aec9-e3d4d581c772")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_90364bf5_d084_5f50_9729_82025326abef
#define WINRT_GENERIC_90364bf5_d084_5f50_9729_82025326abef
template <> struct __declspec(uuid("90364bf5-d084-5f50-9729-82025326abef")) __declspec(novtable) IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> : impl_IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> {};
#endif

#ifndef WINRT_GENERIC_fba14773_5038_511a_95a3_4ba45349100a
#define WINRT_GENERIC_fba14773_5038_511a_95a3_4ba45349100a
template <> struct __declspec(uuid("fba14773-5038-511a-95a3-4ba45349100a")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_00189d10_16ec_5d1a_8369_4870c69e52b3
#define WINRT_GENERIC_00189d10_16ec_5d1a_8369_4870c69e52b3
template <> struct __declspec(uuid("00189d10-16ec-5d1a-8369-4870c69e52b3")) __declspec(novtable) IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> : impl_IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c476232d_8c76_5ba6_99f5_14557484c20d
#define WINRT_GENERIC_c476232d_8c76_5ba6_99f5_14557484c20d
template <> struct __declspec(uuid("c476232d-8c76-5ba6-99f5-14557484c20d")) __declspec(novtable) TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> : impl_TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_90c71c29_a9b5_5267_a5ad_8b756736317c
#define WINRT_GENERIC_90c71c29_a9b5_5267_a5ad_8b756736317c
template <> struct __declspec(uuid("90c71c29-a9b5-5267-a5ad-8b756736317c")) __declspec(novtable) IVector<Windows::Networking::HostName> : impl_IVector<Windows::Networking::HostName> {};
#endif

#ifndef WINRT_GENERIC_9e5f3ed0_cf1c_5d38_832c_acea6164bf5c
#define WINRT_GENERIC_9e5f3ed0_cf1c_5d38_832c_acea6164bf5c
template <> struct __declspec(uuid("9e5f3ed0-cf1c-5d38-832c-acea6164bf5c")) __declspec(novtable) IIterable<Windows::Networking::HostName> : impl_IIterable<Windows::Networking::HostName> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_557bf83c_a428_5dbd_a0fe_05f6ee543d45
#define WINRT_GENERIC_557bf83c_a428_5dbd_a0fe_05f6ee543d45
template <> struct __declspec(uuid("557bf83c-a428-5dbd-a0fe-05f6ee543d45")) __declspec(novtable) IIterator<Windows::Networking::HostName> : impl_IIterator<Windows::Networking::HostName> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3a0b522d_98d0_5d34_ace6_2c7346613f1d
#define WINRT_GENERIC_3a0b522d_98d0_5d34_ace6_2c7346613f1d
template <> struct __declspec(uuid("3a0b522d-98d0-5d34-ace6-2c7346613f1d")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystem> : impl_AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystem> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_6874a925_e651_5eae_88a7_63df5b999205
#define WINRT_GENERIC_6874a925_e651_5eae_88a7_63df5b999205
template <> struct __declspec(uuid("6874a925-e651-5eae-88a7-63df5b999205")) __declspec(novtable) IVector<Windows::System::RemoteSystems::IRemoteSystemFilter> : impl_IVector<Windows::System::RemoteSystems::IRemoteSystemFilter> {};
#endif

#ifndef WINRT_GENERIC_d2810ae1_cff2_5636_8feb_054c5d3a1ae2
#define WINRT_GENERIC_d2810ae1_cff2_5636_8feb_054c5d3a1ae2
template <> struct __declspec(uuid("d2810ae1-cff2-5636-8feb-054c5d3a1ae2")) __declspec(novtable) IVectorView<Windows::System::RemoteSystems::IRemoteSystemFilter> : impl_IVectorView<Windows::System::RemoteSystems::IRemoteSystemFilter> {};
#endif

#ifndef WINRT_GENERIC_6a2c5aef_9f30_58ae_a6cb_9ac9c8092a41
#define WINRT_GENERIC_6a2c5aef_9f30_58ae_a6cb_9ac9c8092a41
template <> struct __declspec(uuid("6a2c5aef-9f30-58ae-a6cb-9ac9c8092a41")) __declspec(novtable) IIterator<Windows::System::RemoteSystems::IRemoteSystemFilter> : impl_IIterator<Windows::System::RemoteSystems::IRemoteSystemFilter> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_543a221d_ef39_57f5_9741_b052dbc29249
#define WINRT_GENERIC_543a221d_ef39_57f5_9741_b052dbc29249
template <> struct __declspec(uuid("543a221d-ef39-57f5-9741-b052dbc29249")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_379adf35_4cb4_522f_91be_913b5690568f
#define WINRT_GENERIC_379adf35_4cb4_522f_91be_913b5690568f
template <> struct __declspec(uuid("379adf35-4cb4-522f-91be-913b5690568f")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> : impl_AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> {};
#endif

#ifndef WINRT_GENERIC_6e72c549_73aa_5168_8560_c7236493b504
#define WINRT_GENERIC_6e72c549_73aa_5168_8560_c7236493b504
template <> struct __declspec(uuid("6e72c549-73aa-5168-8560-c7236493b504")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> : impl_AsyncOperationCompletedHandler<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b84cfcef_70a7_53d7_a24f_f8f25c079690
#define WINRT_GENERIC_b84cfcef_70a7_53d7_a24f_f8f25c079690
template <> struct __declspec(uuid("b84cfcef-70a7-53d7-a24f-f8f25c079690")) __declspec(novtable) IVector<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> : impl_IVector<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> {};
#endif

#ifndef WINRT_GENERIC_9eeb2c2d_1ab6_59e8_b209_b60b6e43a672
#define WINRT_GENERIC_9eeb2c2d_1ab6_59e8_b209_b60b6e43a672
template <> struct __declspec(uuid("9eeb2c2d-1ab6-59e8-b209-b60b6e43a672")) __declspec(novtable) IVectorView<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> : impl_IVectorView<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> {};
#endif

#ifndef WINRT_GENERIC_05fec44b_3dd9_5cf1_a100_bedc9233292d
#define WINRT_GENERIC_05fec44b_3dd9_5cf1_a100_bedc9233292d
template <> struct __declspec(uuid("05fec44b-3dd9-5cf1-a100-bedc9233292d")) __declspec(novtable) IIterator<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> : impl_IIterator<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> {};
#endif


}

namespace Windows::System::RemoteSystems {

struct IKnownRemoteSystemCapabilitiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IKnownRemoteSystemCapabilitiesStatics>
{
    IKnownRemoteSystemCapabilitiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystem :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystem>
{
    IRemoteSystem(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystem2 :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystem2>
{
    IRemoteSystem2(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemAddedEventArgs>
{
    IRemoteSystemAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAuthorizationKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemAuthorizationKindFilter>
{
    IRemoteSystemAuthorizationKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemAuthorizationKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemAuthorizationKindFilterFactory>
{
    IRemoteSystemAuthorizationKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemConnectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemConnectionRequest>
{
    IRemoteSystemConnectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemConnectionRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemConnectionRequestFactory>
{
    IRemoteSystemConnectionRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemDiscoveryTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemDiscoveryTypeFilter>
{
    IRemoteSystemDiscoveryTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemDiscoveryTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemDiscoveryTypeFilterFactory>
{
    IRemoteSystemDiscoveryTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemFilter :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemFilter>
{
    IRemoteSystemFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemKindFilter>
{
    IRemoteSystemKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemKindFilterFactory>
{
    IRemoteSystemKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemKindStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemKindStatics>
{
    IRemoteSystemKindStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemRemovedEventArgs>
{
    IRemoteSystemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSession :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSession>,
    impl::require<IRemoteSystemSession, Windows::Foundation::IClosable>
{
    IRemoteSystemSession(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionAddedEventArgs>
{
    IRemoteSystemSessionAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionController :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionController>
{
    IRemoteSystemSessionController(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionControllerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionControllerFactory>
{
    IRemoteSystemSessionControllerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionCreationResult>
{
    IRemoteSystemSessionCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionDisconnectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionDisconnectedEventArgs>
{
    IRemoteSystemSessionDisconnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionInfo>
{
    IRemoteSystemSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitation :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionInvitation>
{
    IRemoteSystemSessionInvitation(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitationListener :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionInvitationListener>
{
    IRemoteSystemSessionInvitationListener(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionInvitationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionInvitationReceivedEventArgs>
{
    IRemoteSystemSessionInvitationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionJoinRequest>
{
    IRemoteSystemSessionJoinRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionJoinRequestedEventArgs>
{
    IRemoteSystemSessionJoinRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionJoinResult :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionJoinResult>
{
    IRemoteSystemSessionJoinResult(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionMessageChannel :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionMessageChannel>
{
    IRemoteSystemSessionMessageChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionMessageChannelFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionMessageChannelFactory>
{
    IRemoteSystemSessionMessageChannelFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionOptions :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionOptions>
{
    IRemoteSystemSessionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipant :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionParticipant>
{
    IRemoteSystemSessionParticipant(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionParticipantAddedEventArgs>
{
    IRemoteSystemSessionParticipantAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionParticipantRemovedEventArgs>
{
    IRemoteSystemSessionParticipantRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionParticipantWatcher :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionParticipantWatcher>
{
    IRemoteSystemSessionParticipantWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionRemovedEventArgs>
{
    IRemoteSystemSessionRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionStatics>
{
    IRemoteSystemSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionUpdatedEventArgs>
{
    IRemoteSystemSessionUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionValueSetReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionValueSetReceivedEventArgs>
{
    IRemoteSystemSessionValueSetReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemSessionWatcher :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemSessionWatcher>
{
    IRemoteSystemSessionWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemStatics>
{
    IRemoteSystemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemStatics2>
{
    IRemoteSystemStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatusTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemStatusTypeFilter>
{
    IRemoteSystemStatusTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemStatusTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemStatusTypeFilterFactory>
{
    IRemoteSystemStatusTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemUpdatedEventArgs>
{
    IRemoteSystemUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRemoteSystemWatcher :
    Windows::Foundation::IInspectable,
    impl::consume<IRemoteSystemWatcher>
{
    IRemoteSystemWatcher(std::nullptr_t = nullptr) noexcept {}
};

}

}
