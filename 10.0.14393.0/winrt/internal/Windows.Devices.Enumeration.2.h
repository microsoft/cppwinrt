// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Enumeration.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Storage.Streams.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
#define WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
template <> struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20")) __declspec(novtable) IKeyValuePair<hstring, Windows::IInspectable> : impl_IKeyValuePair<hstring, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
#define WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
template <> struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e")) __declspec(novtable) IMapView<hstring, Windows::IInspectable> : impl_IMapView<hstring, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_ee662d37_b0eb_5729_9832_156fd2889d48
#define WINRT_GENERIC_ee662d37_b0eb_5729_9832_156fd2889d48
template <> struct __declspec(uuid("ee662d37-b0eb-5729-9832-156fd2889d48")) __declspec(novtable) IVector<winrt::Windows::Devices::Enumeration::DeviceClass> : impl_IVector<winrt::Windows::Devices::Enumeration::DeviceClass> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_47e48c88_1c56_5b58_96a2_8e813d25077a
#define WINRT_GENERIC_47e48c88_1c56_5b58_96a2_8e813d25077a
template <> struct __declspec(uuid("47e48c88-1c56-5b58-96a2-8e813d25077a")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> : impl_TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_35dd0319_5723_506c_8896_1a28b82be798
#define WINRT_GENERIC_35dd0319_5723_506c_8896_1a28b82be798
template <> struct __declspec(uuid("35dd0319-5723-506c-8896-1a28b82be798")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> : impl_TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_62c6d98c_57ee_5bb8_a41c_958d20c3f3e8
#define WINRT_GENERIC_62c6d98c_57ee_5bb8_a41c_958d20c3f3e8
template <> struct __declspec(uuid("62c6d98c-57ee-5bb8-a41c-958d20c3f3e8")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_07faa053_eb2f_5cba_b25b_d9d57be6715f
#define WINRT_GENERIC_07faa053_eb2f_5cba_b25b_d9d57be6715f
template <> struct __declspec(uuid("07faa053-eb2f-5cba-b25b-d9d57be6715f")) __declspec(novtable) IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> : impl_IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e170688f_3495_5bf6_aab5_9cac17e0f10f
#define WINRT_GENERIC_e170688f_3495_5bf6_aab5_9cac17e0f10f
template <> struct __declspec(uuid("e170688f-3495-5bf6-aab5-9cac17e0f10f")) __declspec(novtable) IVectorView<Windows::Devices::Enumeration::DeviceInformation> : impl_IVectorView<Windows::Devices::Enumeration::DeviceInformation> {};
#endif

#ifndef WINRT_GENERIC_dd9f8a5d_ec98_5f4b_a3ea_9c8b5ad53c4b
#define WINRT_GENERIC_dd9f8a5d_ec98_5f4b_a3ea_9c8b5ad53c4b
template <> struct __declspec(uuid("dd9f8a5d-ec98-5f4b-a3ea-9c8b5ad53c4b")) __declspec(novtable) IIterable<Windows::Devices::Enumeration::DeviceInformation> : impl_IIterable<Windows::Devices::Enumeration::DeviceInformation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_03c5a07b_990c_5d09_b0b8_5734eaa38222
#define WINRT_GENERIC_03c5a07b_990c_5d09_b0b8_5734eaa38222
template <> struct __declspec(uuid("03c5a07b-990c-5d09-b0b8-5734eaa38222")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> : impl_TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> {};
#endif

#ifndef WINRT_GENERIC_906f1254_79ad_54fc_93c4_cdb99b437899
#define WINRT_GENERIC_906f1254_79ad_54fc_93c4_cdb99b437899
template <> struct __declspec(uuid("906f1254-79ad-54fc-93c4-cdb99b437899")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> : impl_TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> {};
#endif

#ifndef WINRT_GENERIC_9234630f_1ff4_54f6_9e3f_ac20369b7725
#define WINRT_GENERIC_9234630f_1ff4_54f6_9e3f_ac20369b7725
template <> struct __declspec(uuid("9234630f-1ff4-54f6-9e3f-ac20369b7725")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f04365ab_d3f3_5f85_a7da_dc19cff73d86
#define WINRT_GENERIC_f04365ab_d3f3_5f85_a7da_dc19cff73d86
template <> struct __declspec(uuid("f04365ab-d3f3-5f85-a7da-dc19cff73d86")) __declspec(novtable) IIterable<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> : impl_IIterable<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_45180254_082e_5274_b2e7_ac0517f44d07
#define WINRT_GENERIC_45180254_082e_5274_b2e7_ac0517f44d07
template <> struct __declspec(uuid("45180254-082e-5274-b2e7-ac0517f44d07")) __declspec(novtable) IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> : impl_IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> {};
#endif

#ifndef WINRT_GENERIC_bac083a3_3a19_5072_9d90_133323a049ba
#define WINRT_GENERIC_bac083a3_3a19_5072_9d90_133323a049ba
template <> struct __declspec(uuid("bac083a3-3a19-5072-9d90-133323a049ba")) __declspec(novtable) IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> : impl_IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> {};
#endif

#ifndef WINRT_GENERIC_1002db74_8948_591e_815d_e40b667599a3
#define WINRT_GENERIC_1002db74_8948_591e_815d_e40b667599a3
template <> struct __declspec(uuid("1002db74-8948-591e-815d-e40b667599a3")) __declspec(novtable) IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> : impl_IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> {};
#endif

#ifndef WINRT_GENERIC_fa65231f_4178_5de1_b2cc_03e22d7702b4
#define WINRT_GENERIC_fa65231f_4178_5de1_b2cc_03e22d7702b4
template <> struct __declspec(uuid("fa65231f-4178-5de1-b2cc-03e22d7702b4")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> : impl_TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2bb4df3d_bd7e_5fe0_9020_56dc0d30b935
#define WINRT_GENERIC_2bb4df3d_bd7e_5fe0_9020_56dc0d30b935
template <> struct __declspec(uuid("2bb4df3d-bd7e-5fe0-9020-56dc0d30b935")) __declspec(novtable) IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> : impl_IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> {};
#endif

#ifndef WINRT_GENERIC_4c71d028_b793_5bce_ae59_fa77f45a40d8
#define WINRT_GENERIC_4c71d028_b793_5bce_ae59_fa77f45a40d8
template <> struct __declspec(uuid("4c71d028-b793-5bce-ae59-fa77f45a40d8")) __declspec(novtable) TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8f994d37_8fab_51c6_a1e0_c93f68a20ef0
#define WINRT_GENERIC_8f994d37_8fab_51c6_a1e0_c93f68a20ef0
template <> struct __declspec(uuid("8f994d37-8fab-51c6-a1e0-c93f68a20ef0")) __declspec(novtable) IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> : impl_IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_c3807283_1416_593c_955c_0b4a286ff7bb
#define WINRT_GENERIC_c3807283_1416_593c_955c_0b4a286ff7bb
template <> struct __declspec(uuid("c3807283-1416-593c-955c-0b4a286ff7bb")) __declspec(novtable) IIterator<winrt::Windows::Devices::Enumeration::DeviceClass> : impl_IIterator<winrt::Windows::Devices::Enumeration::DeviceClass> {};
#endif

#ifndef WINRT_GENERIC_47d4be05_58f1_522e_81c6_975eb4131bb9
#define WINRT_GENERIC_47d4be05_58f1_522e_81c6_975eb4131bb9
template <> struct __declspec(uuid("47d4be05-58f1-522e-81c6-975eb4131bb9")) __declspec(novtable) IIterable<winrt::Windows::Devices::Enumeration::DeviceClass> : impl_IIterable<winrt::Windows::Devices::Enumeration::DeviceClass> {};
#endif

#ifndef WINRT_GENERIC_01a80a97_bd87_5c8a_97fd_d449c98bdac6
#define WINRT_GENERIC_01a80a97_bd87_5c8a_97fd_d449c98bdac6
template <> struct __declspec(uuid("01a80a97-bd87-5c8a-97fd-d449c98bdac6")) __declspec(novtable) IVectorView<winrt::Windows::Devices::Enumeration::DeviceClass> : impl_IVectorView<winrt::Windows::Devices::Enumeration::DeviceClass> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bb483df2_7bb6_5923_a28d_8342ec30046b
#define WINRT_GENERIC_bb483df2_7bb6_5923_a28d_8342ec30046b
template <> struct __declspec(uuid("bb483df2-7bb6-5923-a28d-8342ec30046b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformation> : impl_AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformation> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_6f85d843_e8ab_5b46_85d7_327c58d18712
#define WINRT_GENERIC_6f85d843_e8ab_5b46_85d7_327c58d18712
template <> struct __declspec(uuid("6f85d843-e8ab-5b46-85d7-327c58d18712")) __declspec(novtable) IIterator<Windows::Devices::Enumeration::DeviceInformation> : impl_IIterator<Windows::Devices::Enumeration::DeviceInformation> {};
#endif

#ifndef WINRT_GENERIC_cb5ca9db_ccd6_5103_a93d_c925c908838d
#define WINRT_GENERIC_cb5ca9db_ccd6_5103_a93d_c925c908838d
template <> struct __declspec(uuid("cb5ca9db-ccd6-5103-a93d-c925c908838d")) __declspec(novtable) IIterator<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> : impl_IIterator<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_4a458732_527e_5c73_9a68_a73da370f782
#define WINRT_GENERIC_4a458732_527e_5c73_9a68_a73da370f782
template <> struct __declspec(uuid("4a458732-527e-5c73-9a68-a73da370f782")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection> : impl_AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection> {};
#endif

#ifndef WINRT_GENERIC_86d455b2_d795_554c_9c31_bf6539349c19
#define WINRT_GENERIC_86d455b2_d795_554c_9c31_bf6539349c19
template <> struct __declspec(uuid("86d455b2-d795-554c-9c31-bf6539349c19")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceThumbnail> : impl_AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceThumbnail> {};
#endif

#ifndef WINRT_GENERIC_7ee0247f_5f57_5cb2_b40e_18b5a211d6c3
#define WINRT_GENERIC_7ee0247f_5f57_5cb2_b40e_18b5a211d6c3
template <> struct __declspec(uuid("7ee0247f-5f57-5cb2-b40e-18b5a211d6c3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DevicePairingResult> : impl_AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DevicePairingResult> {};
#endif

#ifndef WINRT_GENERIC_9bbe6eb9_db2d_5160_a20c_f0c265f20d8e
#define WINRT_GENERIC_9bbe6eb9_db2d_5160_a20c_f0c265f20d8e
template <> struct __declspec(uuid("9bbe6eb9-db2d-5160-a20c-f0c265f20d8e")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceUnpairingResult> : impl_AsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceUnpairingResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_74f7d6cc_9c20_5bb9_bace_b2ffa38687f9
#define WINRT_GENERIC_74f7d6cc_9c20_5bb9_bace_b2ffa38687f9
template <> struct __declspec(uuid("74f7d6cc-9c20-5bb9-bace-b2ffa38687f9")) __declspec(novtable) IIterator<Windows::Devices::Enumeration::DeviceWatcherEvent> : impl_IIterator<Windows::Devices::Enumeration::DeviceWatcherEvent> {};
#endif

#ifndef WINRT_GENERIC_b48fd051_eafa_523f_a66e_9d4151c5d522
#define WINRT_GENERIC_b48fd051_eafa_523f_a66e_9d4151c5d522
template <> struct __declspec(uuid("b48fd051-eafa-523f-a66e-9d4151c5d522")) __declspec(novtable) IIterable<Windows::Devices::Enumeration::DeviceWatcherEvent> : impl_IIterable<Windows::Devices::Enumeration::DeviceWatcherEvent> {};
#endif

#ifndef WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
#define WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
template <> struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif

#ifndef WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
#define WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
template <> struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif


}

namespace Windows::Devices::Enumeration {

template <typename D>
struct WINRT_EBO impl_IDeviceAccessChangedEventArgs
{
    Windows::Devices::Enumeration::DeviceAccessStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceAccessChangedEventArgs2
{
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceAccessInformation
{
    event_token AccessChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> & handler) const;
    using AccessChanged_revoker = event_revoker<IDeviceAccessInformation>;
    AccessChanged_revoker AccessChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> & handler) const;
    void AccessChanged(event_token cookie) const;
    Windows::Devices::Enumeration::DeviceAccessStatus CurrentStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceAccessInformationStatics
{
    Windows::Devices::Enumeration::DeviceAccessInformation CreateFromId(hstring_ref deviceId) const;
    Windows::Devices::Enumeration::DeviceAccessInformation CreateFromDeviceClassId(GUID deviceClassId) const;
    Windows::Devices::Enumeration::DeviceAccessInformation CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass deviceClass) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceConnectionChangeTriggerDetails
{
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceDisconnectButtonClickedEventArgs
{
    Windows::Devices::Enumeration::DeviceInformation Device() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformation
{
    hstring Id() const;
    hstring Name() const;
    bool IsEnabled() const;
    bool IsDefault() const;
    Windows::Devices::Enumeration::EnclosureLocation EnclosureLocation() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> Properties() const;
    void Update(const Windows::Devices::Enumeration::DeviceInformationUpdate & updateInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> GetThumbnailAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> GetGlyphThumbnailAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformation2
{
    Windows::Devices::Enumeration::DeviceInformationKind Kind() const;
    Windows::Devices::Enumeration::DeviceInformationPairing Pairing() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationCustomPairing
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync(Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync(Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync(Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, const Windows::Devices::Enumeration::IDevicePairingSettings & devicePairingSettings) const;
    event_token PairingRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> & handler) const;
    using PairingRequested_revoker = event_revoker<IDeviceInformationCustomPairing>;
    PairingRequested_revoker PairingRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> & handler) const;
    void PairingRequested(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationPairing
{
    bool IsPaired() const;
    bool CanPair() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationPairing2
{
    Windows::Devices::Enumeration::DevicePairingProtectionLevel ProtectionLevel() const;
    Windows::Devices::Enumeration::DeviceInformationCustomPairing Custom() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, const Windows::Devices::Enumeration::IDevicePairingSettings & devicePairingSettings) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> UnpairAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationPairingStatics
{
    bool TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(hstring_ref deviceId, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(Windows::Devices::Enumeration::DeviceClass deviceClass) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(hstring_ref aqsFilter) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(hstring_ref aqsFilter, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties) const;
    Windows::Devices::Enumeration::DeviceWatcher CreateWatcher() const;
    Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(Windows::Devices::Enumeration::DeviceClass deviceClass) const;
    Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(hstring_ref aqsFilter) const;
    Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(hstring_ref aqsFilter, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationStatics2
{
    hstring GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass deviceClass) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(hstring_ref deviceId, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind kind) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(hstring_ref aqsFilter, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind kind) const;
    Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(hstring_ref aqsFilter, const Windows::Foundation::Collections::IIterable<hstring> & additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind kind) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationUpdate
{
    hstring Id() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceInformationUpdate2
{
    Windows::Devices::Enumeration::DeviceInformationKind Kind() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePairingRequestedEventArgs
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::Enumeration::DevicePairingKinds PairingKind() const;
    hstring Pin() const;
    void Accept() const;
    void Accept(hstring_ref pin) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePairingResult
{
    Windows::Devices::Enumeration::DevicePairingResultStatus Status() const;
    Windows::Devices::Enumeration::DevicePairingProtectionLevel ProtectionLevelUsed() const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePairingSettings
{
};

template <typename D>
struct WINRT_EBO impl_IDevicePicker
{
    Windows::Devices::Enumeration::DevicePickerFilter Filter() const;
    Windows::Devices::Enumeration::DevicePickerAppearance Appearance() const;
    Windows::Foundation::Collections::IVector<hstring> RequestedProperties() const;
    event_token DeviceSelected(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> & handler) const;
    using DeviceSelected_revoker = event_revoker<IDevicePicker>;
    DeviceSelected_revoker DeviceSelected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> & handler) const;
    void DeviceSelected(event_token token) const;
    event_token DisconnectButtonClicked(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> & handler) const;
    using DisconnectButtonClicked_revoker = event_revoker<IDevicePicker>;
    DisconnectButtonClicked_revoker DisconnectButtonClicked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> & handler) const;
    void DisconnectButtonClicked(event_token token) const;
    event_token DevicePickerDismissed(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::IInspectable> & handler) const;
    using DevicePickerDismissed_revoker = event_revoker<IDevicePicker>;
    DevicePickerDismissed_revoker DevicePickerDismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::IInspectable> & handler) const;
    void DevicePickerDismissed(event_token token) const;
    void Show(const Windows::Foundation::Rect & selection) const;
    void Show(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement placement) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> PickSingleDeviceAsync(const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> PickSingleDeviceAsync(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement placement) const;
    void Hide() const;
    void SetDisplayStatus(const Windows::Devices::Enumeration::DeviceInformation & device, hstring_ref status, Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions options) const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePickerAppearance
{
    hstring Title() const;
    void Title(hstring_ref value) const;
    Windows::UI::Color ForegroundColor() const;
    void ForegroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Color AccentColor() const;
    void AccentColor(const Windows::UI::Color & value) const;
    Windows::UI::Color SelectedForegroundColor() const;
    void SelectedForegroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Color SelectedBackgroundColor() const;
    void SelectedBackgroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Color SelectedAccentColor() const;
    void SelectedAccentColor(const Windows::UI::Color & value) const;
};

template <typename D>
struct WINRT_EBO impl_IDevicePickerFilter
{
    Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Enumeration::DeviceClass> SupportedDeviceClasses() const;
    Windows::Foundation::Collections::IVector<hstring> SupportedDeviceSelectors() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceSelectedEventArgs
{
    Windows::Devices::Enumeration::DeviceInformation SelectedDevice() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceUnpairingResult
{
    Windows::Devices::Enumeration::DeviceUnpairingResultStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceWatcher
{
    event_token Added(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> & handler) const;
    using Added_revoker = event_revoker<IDeviceWatcher>;
    Added_revoker Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> & handler) const;
    void Added(event_token token) const;
    event_token Updated(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> & handler) const;
    using Updated_revoker = event_revoker<IDeviceWatcher>;
    Updated_revoker Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> & handler) const;
    void Updated(event_token token) const;
    event_token Removed(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> & handler) const;
    using Removed_revoker = event_revoker<IDeviceWatcher>;
    Removed_revoker Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> & handler) const;
    void Removed(event_token token) const;
    event_token EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> & handler) const;
    using EnumerationCompleted_revoker = event_revoker<IDeviceWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> & handler) const;
    void EnumerationCompleted(event_token token) const;
    event_token Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> & handler) const;
    using Stopped_revoker = event_revoker<IDeviceWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> & handler) const;
    void Stopped(event_token token) const;
    Windows::Devices::Enumeration::DeviceWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceWatcher2
{
    Windows::ApplicationModel::Background::DeviceWatcherTrigger GetBackgroundTrigger(const Windows::Foundation::Collections::IIterable<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> & requestedEventKinds) const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceWatcherEvent
{
    Windows::Devices::Enumeration::DeviceWatcherEventKind Kind() const;
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::Enumeration::DeviceInformationUpdate DeviceInformationUpdate() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceWatcherTriggerDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> DeviceWatcherEvents() const;
};

template <typename D>
struct WINRT_EBO impl_IEnclosureLocation
{
    bool InDock() const;
    bool InLid() const;
    Windows::Devices::Enumeration::Panel Panel() const;
};

template <typename D>
struct WINRT_EBO impl_IEnclosureLocation2
{
    uint32_t RotationAngleInDegreesClockwise() const;
};

struct IDeviceAccessChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceAccessChangedEventArgs>(m_ptr); }
};

struct IDeviceAccessChangedEventArgs2 :
    Windows::IInspectable,
    impl::consume<IDeviceAccessChangedEventArgs2>,
    impl::require<IDeviceAccessChangedEventArgs2, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceAccessChangedEventArgs2>(m_ptr); }
};

struct IDeviceAccessInformation :
    Windows::IInspectable,
    impl::consume<IDeviceAccessInformation>
{
    IDeviceAccessInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceAccessInformation>(m_ptr); }
};

struct IDeviceAccessInformationStatics :
    Windows::IInspectable,
    impl::consume<IDeviceAccessInformationStatics>
{
    IDeviceAccessInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceAccessInformationStatics>(m_ptr); }
};

struct IDeviceConnectionChangeTriggerDetails :
    Windows::IInspectable,
    impl::consume<IDeviceConnectionChangeTriggerDetails>
{
    IDeviceConnectionChangeTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceConnectionChangeTriggerDetails>(m_ptr); }
};

struct IDeviceDisconnectButtonClickedEventArgs :
    Windows::IInspectable,
    impl::consume<IDeviceDisconnectButtonClickedEventArgs>
{
    IDeviceDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceDisconnectButtonClickedEventArgs>(m_ptr); }
};

struct IDeviceInformation :
    Windows::IInspectable,
    impl::consume<IDeviceInformation>
{
    IDeviceInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformation>(m_ptr); }
};

struct IDeviceInformation2 :
    Windows::IInspectable,
    impl::consume<IDeviceInformation2>
{
    IDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformation2>(m_ptr); }
};

struct IDeviceInformationCustomPairing :
    Windows::IInspectable,
    impl::consume<IDeviceInformationCustomPairing>
{
    IDeviceInformationCustomPairing(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationCustomPairing>(m_ptr); }
};

struct IDeviceInformationPairing :
    Windows::IInspectable,
    impl::consume<IDeviceInformationPairing>
{
    IDeviceInformationPairing(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationPairing>(m_ptr); }
};

struct IDeviceInformationPairing2 :
    Windows::IInspectable,
    impl::consume<IDeviceInformationPairing2>
{
    IDeviceInformationPairing2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationPairing2>(m_ptr); }
};

struct IDeviceInformationPairingStatics :
    Windows::IInspectable,
    impl::consume<IDeviceInformationPairingStatics>
{
    IDeviceInformationPairingStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationPairingStatics>(m_ptr); }
};

struct IDeviceInformationStatics :
    Windows::IInspectable,
    impl::consume<IDeviceInformationStatics>
{
    IDeviceInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationStatics>(m_ptr); }
};

struct IDeviceInformationStatics2 :
    Windows::IInspectable,
    impl::consume<IDeviceInformationStatics2>
{
    IDeviceInformationStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationStatics2>(m_ptr); }
};

struct IDeviceInformationUpdate :
    Windows::IInspectable,
    impl::consume<IDeviceInformationUpdate>
{
    IDeviceInformationUpdate(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationUpdate>(m_ptr); }
};

struct IDeviceInformationUpdate2 :
    Windows::IInspectable,
    impl::consume<IDeviceInformationUpdate2>
{
    IDeviceInformationUpdate2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceInformationUpdate2>(m_ptr); }
};

struct IDevicePairingRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IDevicePairingRequestedEventArgs>
{
    IDevicePairingRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePairingRequestedEventArgs>(m_ptr); }
};

struct IDevicePairingResult :
    Windows::IInspectable,
    impl::consume<IDevicePairingResult>
{
    IDevicePairingResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePairingResult>(m_ptr); }
};

struct IDevicePairingSettings :
    Windows::IInspectable,
    impl::consume<IDevicePairingSettings>
{
    IDevicePairingSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePairingSettings>(m_ptr); }
};

struct IDevicePicker :
    Windows::IInspectable,
    impl::consume<IDevicePicker>
{
    IDevicePicker(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePicker>(m_ptr); }
};

struct IDevicePickerAppearance :
    Windows::IInspectable,
    impl::consume<IDevicePickerAppearance>
{
    IDevicePickerAppearance(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePickerAppearance>(m_ptr); }
};

struct IDevicePickerFilter :
    Windows::IInspectable,
    impl::consume<IDevicePickerFilter>
{
    IDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDevicePickerFilter>(m_ptr); }
};

struct IDeviceSelectedEventArgs :
    Windows::IInspectable,
    impl::consume<IDeviceSelectedEventArgs>
{
    IDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceSelectedEventArgs>(m_ptr); }
};

struct IDeviceUnpairingResult :
    Windows::IInspectable,
    impl::consume<IDeviceUnpairingResult>
{
    IDeviceUnpairingResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceUnpairingResult>(m_ptr); }
};

struct IDeviceWatcher :
    Windows::IInspectable,
    impl::consume<IDeviceWatcher>
{
    IDeviceWatcher(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceWatcher>(m_ptr); }
};

struct IDeviceWatcher2 :
    Windows::IInspectable,
    impl::consume<IDeviceWatcher2>
{
    IDeviceWatcher2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceWatcher2>(m_ptr); }
};

struct IDeviceWatcherEvent :
    Windows::IInspectable,
    impl::consume<IDeviceWatcherEvent>
{
    IDeviceWatcherEvent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceWatcherEvent>(m_ptr); }
};

struct IDeviceWatcherTriggerDetails :
    Windows::IInspectable,
    impl::consume<IDeviceWatcherTriggerDetails>
{
    IDeviceWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceWatcherTriggerDetails>(m_ptr); }
};

struct IEnclosureLocation :
    Windows::IInspectable,
    impl::consume<IEnclosureLocation>
{
    IEnclosureLocation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnclosureLocation>(m_ptr); }
};

struct IEnclosureLocation2 :
    Windows::IInspectable,
    impl::consume<IEnclosureLocation2>,
    impl::require<IEnclosureLocation2, Windows::Devices::Enumeration::IEnclosureLocation>
{
    IEnclosureLocation2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEnclosureLocation2>(m_ptr); }
};

}

}
