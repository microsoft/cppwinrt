// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a55a747d_59f6_5cb6_b439_c8aad670905c
#define WINRT_GENERIC_a55a747d_59f6_5cb6_b439_c8aad670905c
template <> struct __declspec(uuid("a55a747d-59f6-5cb6-b439-c8aad670905c")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_7b44e581_cfa9_5763_bed7_6a65739f0dbf
#define WINRT_GENERIC_7b44e581_cfa9_5763_bed7_6a65739f0dbf
template <> struct __declspec(uuid("7b44e581-cfa9-5763-bed7-6a65739f0dbf")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_47cbd985_0f08_5a3d_92cf_b27960506ed6
#define WINRT_GENERIC_47cbd985_0f08_5a3d_92cf_b27960506ed6
template <> struct __declspec(uuid("47cbd985-0f08-5a3d-92cf-b27960506ed6")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_2595482c_1cbf_5691_a30d_2164909c6712
#define WINRT_GENERIC_2595482c_1cbf_5691_a30d_2164909c6712
template <> struct __declspec(uuid("2595482c-1cbf-5691-a30d-2164909c6712")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_78c880f6_a7dc_5172_89da_7749fc82aa82
#define WINRT_GENERIC_78c880f6_a7dc_5172_89da_7749fc82aa82
template <> struct __declspec(uuid("78c880f6-a7dc-5172-89da-7749fc82aa82")) __declspec(novtable) IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : impl_IMapView<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_f6a9dc12_01f7_54f0_a257_c404815b9c1c
#define WINRT_GENERIC_f6a9dc12_01f7_54f0_a257_c404815b9c1c
template <> struct __declspec(uuid("f6a9dc12-01f7-54f0-a257-c404815b9c1c")) __declspec(novtable) IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> : impl_IMapView<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d4f89768_688f_59ec_bf24_c2af6a310fa4
#define WINRT_GENERIC_d4f89768_688f_59ec_bf24_c2af6a310fa4
template <> struct __declspec(uuid("d4f89768-688f-59ec-bf24-c2af6a310fa4")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2c08602f_40b1_5e97_ae21_5c04d7fb829c
#define WINRT_GENERIC_2c08602f_40b1_5e97_ae21_5c04d7fb829c
template <> struct __declspec(uuid("2c08602f-40b1-5e97-ae21-5c04d7fb829c")) __declspec(novtable) IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> : impl_IMapView<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_851e3cfd_306b_5c8e_ae3c_a8d83c623604
#define WINRT_GENERIC_851e3cfd_306b_5c8e_ae3c_a8d83c623604
template <> struct __declspec(uuid("851e3cfd-306b-5c8e-ae3c-a8d83c623604")) __declspec(novtable) IIterable<Windows::Storage::StorageLibrary> : impl_IIterable<Windows::Storage::StorageLibrary> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b5136c46_2f2e_511d_9e8e_5ef4decb1da7
#define WINRT_GENERIC_b5136c46_2f2e_511d_9e8e_5ef4decb1da7
template <> struct __declspec(uuid("b5136c46-2f2e-511d-9e8e-5ef4decb1da7")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_9d01424d_5653_59f8_ba6b_d0c077346d2d
#define WINRT_GENERIC_9d01424d_5653_59f8_ba6b_d0c077346d2d
template <> struct __declspec(uuid("9d01424d-5653-59f8-ba6b-d0c077346d2d")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : impl_IAsyncOperation<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> {};
#endif

#ifndef WINRT_GENERIC_f402ec9f_84b2_57c3_9543_01fbda05219b
#define WINRT_GENERIC_f402ec9f_84b2_57c3_9543_01fbda05219b
template <> struct __declspec(uuid("f402ec9f-84b2-57c3-9543-01fbda05219b")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> : impl_IAsyncOperation<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e3e660d6_d041_5ecd_b18b_fa254e4a860f
#define WINRT_GENERIC_e3e660d6_d041_5ecd_b18b_fa254e4a860f
template <> struct __declspec(uuid("e3e660d6-d041-5ecd-b18b-fa254e4a860f")) __declspec(novtable) IVector<winrt::Windows::Devices::Sensors::ActivityType> : impl_IVector<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif

#ifndef WINRT_GENERIC_fc7a0488_2803_505c_9e62_9200afe416c6
#define WINRT_GENERIC_fc7a0488_2803_505c_9e62_9200afe416c6
template <> struct __declspec(uuid("fc7a0488-2803-505c-9e62-9200afe416c6")) __declspec(novtable) IVectorView<winrt::Windows::Devices::Sensors::ActivityType> : impl_IVectorView<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_84108017_a8e7_5449_b713_df48503a953e
#define WINRT_GENERIC_84108017_a8e7_5449_b713_df48503a953e
template <> struct __declspec(uuid("84108017-a8e7-5449-b713-df48503a953e")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_26dd26e3_3f47_5709_b2f2_d6d0ad3288f0
#define WINRT_GENERIC_26dd26e3_3f47_5709_b2f2_d6d0ad3288f0
template <> struct __declspec(uuid("26dd26e3-3f47-5709-b2f2-d6d0ad3288f0")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_d0065ef6_ee9d_55f8_ac2b_53a91ff96d2e
#define WINRT_GENERIC_d0065ef6_ee9d_55f8_ac2b_53a91ff96d2e
template <> struct __declspec(uuid("d0065ef6-ee9d-55f8-ac2b-53a91ff96d2e")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_3814c6a5_2ad1_5875_bed5_5031cd1f50a2
#define WINRT_GENERIC_3814c6a5_2ad1_5875_bed5_5031cd1f50a2
template <> struct __declspec(uuid("3814c6a5-2ad1-5875-bed5-5031cd1f50a2")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_5a1f6d75_8678_547c_8fd7_fbceb6ebf968
#define WINRT_GENERIC_5a1f6d75_8678_547c_8fd7_fbceb6ebf968
template <> struct __declspec(uuid("5a1f6d75-8678-547c-8fd7-fbceb6ebf968")) __declspec(novtable) IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : impl_IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_6fe872bd_1090_50ef_aa1a_82b7f9bce2b8
#define WINRT_GENERIC_6fe872bd_1090_50ef_aa1a_82b7f9bce2b8
template <> struct __declspec(uuid("6fe872bd-1090-50ef-aa1a-82b7f9bce2b8")) __declspec(novtable) IMap<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : impl_IMap<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_67a07f76_20b0_573b_9d74_ed0fc4f653c7
#define WINRT_GENERIC_67a07f76_20b0_573b_9d74_ed0fc4f653c7
template <> struct __declspec(uuid("67a07f76-20b0-573b-9d74-ed0fc4f653c7")) __declspec(novtable) IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> : impl_IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> {};
#endif

#ifndef WINRT_GENERIC_f451776c_7fde_5cd0_a068_68884c99d37c
#define WINRT_GENERIC_f451776c_7fde_5cd0_a068_68884c99d37c
template <> struct __declspec(uuid("f451776c-7fde-5cd0-a068-68884c99d37c")) __declspec(novtable) IMap<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> : impl_IMap<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> {};
#endif

#ifndef WINRT_GENERIC_9bcb843b_221b_5fbe_9b20_7028bc4e8653
#define WINRT_GENERIC_9bcb843b_221b_5fbe_9b20_7028bc4e8653
template <> struct __declspec(uuid("9bcb843b-221b-5fbe-9b20-7028bc4e8653")) __declspec(novtable) IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> : impl_IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_aaca6f20_2990_5c73_8c6a_ce9224bb0170
#define WINRT_GENERIC_aaca6f20_2990_5c73_8c6a_ce9224bb0170
template <> struct __declspec(uuid("aaca6f20-2990-5c73-8c6a-ce9224bb0170")) __declspec(novtable) IMap<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> : impl_IMap<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration> {};
#endif

#ifndef WINRT_GENERIC_753d0623_9a04_54a0_b3e2_8f5c15313194
#define WINRT_GENERIC_753d0623_9a04_54a0_b3e2_8f5c15313194
template <> struct __declspec(uuid("753d0623-9a04-54a0-b3e2-8f5c15313194")) __declspec(novtable) IVector<Windows::Storage::StorageLibrary> : impl_IVector<Windows::Storage::StorageLibrary> {};
#endif

#ifndef WINRT_GENERIC_4fcf1b1d_d3a7_577a_bdf9_060443bb7956
#define WINRT_GENERIC_4fcf1b1d_d3a7_577a_bdf9_060443bb7956
template <> struct __declspec(uuid("4fcf1b1d-d3a7-577a-bdf9-060443bb7956")) __declspec(novtable) IVectorView<Windows::Storage::StorageLibrary> : impl_IVectorView<Windows::Storage::StorageLibrary> {};
#endif

#ifndef WINRT_GENERIC_0a1c6409_fbd3_58c8_9af3_6262cc56e5b3
#define WINRT_GENERIC_0a1c6409_fbd3_58c8_9af3_6262cc56e5b3
template <> struct __declspec(uuid("0a1c6409-fbd3-58c8-9af3-6262cc56e5b3")) __declspec(novtable) IIterator<Windows::Storage::StorageLibrary> : impl_IIterator<Windows::Storage::StorageLibrary> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d5aa9506_1464_57d4_859d_7ee9b26cb1f9
#define WINRT_GENERIC_d5aa9506_1464_57d4_859d_7ee9b26cb1f9
template <> struct __declspec(uuid("d5aa9506-1464-57d4-859d-7ee9b26cb1f9")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult> {};
#endif

#ifndef WINRT_GENERIC_3fd5a57e_47e4_5921_b148_5cb586166ca8
#define WINRT_GENERIC_3fd5a57e_47e4_5921_b148_5cb586166ca8
template <> struct __declspec(uuid("3fd5a57e-47e4-5921-b148-5cb586166ca8")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> {};
#endif

#ifndef WINRT_GENERIC_39d8105f_a505_5f88_91a9_b0fc6d628699
#define WINRT_GENERIC_39d8105f_a505_5f88_91a9_b0fc6d628699
template <> struct __declspec(uuid("39d8105f-a505-5f88-91a9-b0fc6d628699")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_40524281_a7c6_50b1_b6f5_0baa95d902c2
#define WINRT_GENERIC_40524281_a7c6_50b1_b6f5_0baa95d902c2
template <> struct __declspec(uuid("40524281-a7c6-50b1-b6f5-0baa95d902c2")) __declspec(novtable) IIterator<winrt::Windows::Devices::Sensors::ActivityType> : impl_IIterator<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif

#ifndef WINRT_GENERIC_2a04cdfa_5dfd_5178_8731_ade998e4a7f6
#define WINRT_GENERIC_2a04cdfa_5dfd_5178_8731_ade998e4a7f6
template <> struct __declspec(uuid("2a04cdfa-5dfd-5178-8731-ade998e4a7f6")) __declspec(novtable) IIterable<winrt::Windows::Devices::Sensors::ActivityType> : impl_IIterable<winrt::Windows::Devices::Sensors::ActivityType> {};
#endif

#ifndef WINRT_GENERIC_2001aea5_1a86_517e_8be5_11d7fb5935b2
#define WINRT_GENERIC_2001aea5_1a86_517e_8be5_11d7fb5935b2
template <> struct __declspec(uuid("2001aea5-1a86-517e-8be5-11d7fb5935b2")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> {};
#endif

#ifndef WINRT_GENERIC_80fb0327_5a00_55cc_85db_a852719981b9
#define WINRT_GENERIC_80fb0327_5a00_55cc_85db_a852719981b9
template <> struct __declspec(uuid("80fb0327-5a00-55cc-85db-a852719981b9")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>> {};
#endif

#ifndef WINRT_GENERIC_4c21744b_b583_559d_89f7_d4138cffffbc
#define WINRT_GENERIC_4c21744b_b583_559d_89f7_d4138cffffbc
template <> struct __declspec(uuid("4c21744b-b583-559d-89f7-d4138cffffbc")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>> {};
#endif

#ifndef WINRT_GENERIC_04428524_7d54_59b4_bf17_ac57c4ce6b40
#define WINRT_GENERIC_04428524_7d54_59b4_bf17_ac57c4ce6b40
template <> struct __declspec(uuid("04428524-7d54-59b4-bf17-ac57c4ce6b40")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>> {};
#endif

#ifndef WINRT_GENERIC_8445d2ae_dd03_5b98_95e4_82b43a3f0d64
#define WINRT_GENERIC_8445d2ae_dd03_5b98_95e4_82b43a3f0d64
template <> struct __declspec(uuid("8445d2ae-dd03-5b98-95e4-82b43a3f0d64")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration>> {};
#endif

#ifndef WINRT_GENERIC_62ae0fda_b238_554f_a275_1dc16d6ca03a
#define WINRT_GENERIC_62ae0fda_b238_554f_a275_1dc16d6ca03a
template <> struct __declspec(uuid("62ae0fda-b238-554f-a275-1dc16d6ca03a")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::ApplicationModel::Background::BackgroundTaskRegistration>> {};
#endif


}

namespace Windows::ApplicationModel::Background {

struct BackgroundTaskCanceledEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskCanceledEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskCanceledEventHandler(L lambda);
    template <typename F> BackgroundTaskCanceledEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskCanceledEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::IBackgroundTaskInstance & sender, Windows::ApplicationModel::Background::BackgroundTaskCancellationReason reason) const;
};

struct BackgroundTaskCompletedEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskCompletedEventHandler(L lambda);
    template <typename F> BackgroundTaskCompletedEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskCompletedEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::BackgroundTaskRegistration & sender, const Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs & args) const;
};

struct BackgroundTaskProgressEventHandler : Windows::Foundation::IUnknown
{
    BackgroundTaskProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BackgroundTaskProgressEventHandler(L lambda);
    template <typename F> BackgroundTaskProgressEventHandler (F * function);
    template <typename O, typename M> BackgroundTaskProgressEventHandler(O * object, M method);
    void operator()(const Windows::ApplicationModel::Background::BackgroundTaskRegistration & sender, const Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs & args) const;
};

struct IActivitySensorTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IActivitySensorTrigger>,
    impl::require<IActivitySensorTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IActivitySensorTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IActivitySensorTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IActivitySensorTriggerFactory>
{
    IActivitySensorTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAlarmApplicationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IAlarmApplicationManagerStatics>
{
    IAlarmApplicationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IAppBroadcastTrigger>,
    impl::require<IAppBroadcastTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppBroadcastTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IAppBroadcastTriggerFactory>
{
    IAppBroadcastTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IAppBroadcastTriggerProviderInfo :
    Windows::Foundation::IInspectable,
    impl::consume<IAppBroadcastTriggerProviderInfo>
{
    IAppBroadcastTriggerProviderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IApplicationTrigger>,
    impl::require<IApplicationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IApplicationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume<IApplicationTriggerDetails>
{
    IApplicationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IAppointmentStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IAppointmentStoreNotificationTrigger>,
    impl::require<IAppointmentStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IAppointmentStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundCondition :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundCondition>
{
    IBackgroundCondition(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundExecutionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundExecutionManagerStatics>
{
    IBackgroundExecutionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTask :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTask>
{
    IBackgroundTask(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder2 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskBuilder2>,
    impl::require<IBackgroundTaskBuilder2, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder3 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskBuilder3>,
    impl::require<IBackgroundTaskBuilder3, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskBuilder4 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskBuilder4>,
    impl::require<IBackgroundTaskBuilder4, Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
{
    IBackgroundTaskBuilder4(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskCompletedEventArgs>
{
    IBackgroundTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskDeferral :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskDeferral>
{
    IBackgroundTaskDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskInstance>
{
    IBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance2 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskInstance2>,
    impl::require<IBackgroundTaskInstance2, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskInstance4 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskInstance4>,
    impl::require<IBackgroundTaskInstance4, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    IBackgroundTaskInstance4(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskProgressEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskProgressEventArgs>
{
    IBackgroundTaskProgressEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration2 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistration2>,
    impl::require<IBackgroundTaskRegistration2, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistration3 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistration3>,
    impl::require<IBackgroundTaskRegistration3, Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
{
    IBackgroundTaskRegistration3(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationGroup :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistrationGroup>
{
    IBackgroundTaskRegistrationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistrationGroupFactory>
{
    IBackgroundTaskRegistrationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistrationStatics>
{
    IBackgroundTaskRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTaskRegistrationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTaskRegistrationStatics2>
{
    IBackgroundTaskRegistrationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundTrigger>
{
    IBackgroundTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBackgroundWorkCostStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IBackgroundWorkCostStatics>
{
    IBackgroundWorkCostStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementPublisherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IBluetoothLEAdvertisementPublisherTrigger>,
    impl::require<IBluetoothLEAdvertisementPublisherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementPublisherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IBluetoothLEAdvertisementWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IBluetoothLEAdvertisementWatcherTrigger>,
    impl::require<IBluetoothLEAdvertisementWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IBluetoothLEAdvertisementWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ICachedFileUpdaterTrigger>,
    impl::require<ICachedFileUpdaterTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICachedFileUpdaterTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICachedFileUpdaterTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume<ICachedFileUpdaterTriggerDetails>
{
    ICachedFileUpdaterTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IChatMessageNotificationTrigger>,
    impl::require<IChatMessageNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IChatMessageReceivedNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IChatMessageReceivedNotificationTrigger>,
    impl::require<IChatMessageReceivedNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IChatMessageReceivedNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ICommunicationBlockingAppSetAsActiveTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ICommunicationBlockingAppSetAsActiveTrigger>,
    impl::require<ICommunicationBlockingAppSetAsActiveTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ICommunicationBlockingAppSetAsActiveTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContactStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IContactStoreNotificationTrigger>,
    impl::require<IContactStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContactStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetchTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IContentPrefetchTrigger>,
    impl::require<IContentPrefetchTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IContentPrefetchTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IContentPrefetchTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IContentPrefetchTriggerFactory>
{
    IContentPrefetchTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceConnectionChangeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceConnectionChangeTrigger>,
    impl::require<IDeviceConnectionChangeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceConnectionChangeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceConnectionChangeTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceConnectionChangeTriggerStatics>
{
    IDeviceConnectionChangeTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceManufacturerNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceManufacturerNotificationTrigger>,
    impl::require<IDeviceManufacturerNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceManufacturerNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceManufacturerNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceManufacturerNotificationTriggerFactory>
{
    IDeviceManufacturerNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceServicingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceServicingTrigger>,
    impl::require<IDeviceServicingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceServicingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceUseTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceUseTrigger>,
    impl::require<IDeviceUseTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceUseTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceWatcherTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceWatcherTrigger>,
    impl::require<IDeviceWatcherTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IDeviceWatcherTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IEmailStoreNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IEmailStoreNotificationTrigger>,
    impl::require<IEmailStoreNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IEmailStoreNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IGattCharacteristicNotificationTrigger>,
    impl::require<IGattCharacteristicNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IGattCharacteristicNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTrigger2 :
    Windows::Foundation::IInspectable,
    impl::consume<IGattCharacteristicNotificationTrigger2>
{
    IGattCharacteristicNotificationTrigger2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IGattCharacteristicNotificationTriggerFactory>
{
    IGattCharacteristicNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IGattCharacteristicNotificationTriggerFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume<IGattCharacteristicNotificationTriggerFactory2>
{
    IGattCharacteristicNotificationTriggerFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IGattServiceProviderTrigger>
{
    IGattServiceProviderTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTriggerResult :
    Windows::Foundation::IInspectable,
    impl::consume<IGattServiceProviderTriggerResult>
{
    IGattServiceProviderTriggerResult(std::nullptr_t = nullptr) noexcept {}
};

struct IGattServiceProviderTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IGattServiceProviderTriggerStatics>
{
    IGattServiceProviderTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ILocationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ILocationTrigger>,
    impl::require<ILocationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ILocationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ILocationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ILocationTriggerFactory>
{
    ILocationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMaintenanceTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IMaintenanceTrigger>,
    impl::require<IMaintenanceTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMaintenanceTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IMaintenanceTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IMaintenanceTriggerFactory>
{
    IMaintenanceTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IMediaProcessingTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IMediaProcessingTrigger>,
    impl::require<IMediaProcessingTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IMediaProcessingTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorHotspotAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<INetworkOperatorHotspotAuthenticationTrigger>,
    impl::require<INetworkOperatorHotspotAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorHotspotAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorNotificationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<INetworkOperatorNotificationTrigger>,
    impl::require<INetworkOperatorNotificationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    INetworkOperatorNotificationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct INetworkOperatorNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<INetworkOperatorNotificationTriggerFactory>
{
    INetworkOperatorNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IPhoneTrigger>,
    impl::require<IPhoneTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IPhoneTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IPhoneTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPhoneTriggerFactory>
{
    IPhoneTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationTriggerFactory>
{
    IPushNotificationTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IRcsEndUserMessageAvailableTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IRcsEndUserMessageAvailableTrigger>,
    impl::require<IRcsEndUserMessageAvailableTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRcsEndUserMessageAvailableTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IRfcommConnectionTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IRfcommConnectionTrigger>,
    impl::require<IRfcommConnectionTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IRfcommConnectionTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISecondaryAuthenticationFactorAuthenticationTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ISecondaryAuthenticationFactorAuthenticationTrigger>,
    impl::require<ISecondaryAuthenticationFactorAuthenticationTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISecondaryAuthenticationFactorAuthenticationTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThresholdTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ISensorDataThresholdTrigger>,
    impl::require<ISensorDataThresholdTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISensorDataThresholdTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISensorDataThresholdTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ISensorDataThresholdTriggerFactory>
{
    ISensorDataThresholdTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ISmartCardTrigger>,
    impl::require<ISmartCardTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISmartCardTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISmartCardTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ISmartCardTriggerFactory>
{
    ISmartCardTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISmsMessageReceivedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ISmsMessageReceivedTriggerFactory>
{
    ISmsMessageReceivedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISocketActivityTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ISocketActivityTrigger>
{
    ISocketActivityTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryContentChangedTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<IStorageLibraryContentChangedTrigger>,
    impl::require<IStorageLibraryContentChangedTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    IStorageLibraryContentChangedTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct IStorageLibraryContentChangedTriggerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IStorageLibraryContentChangedTriggerStatics>
{
    IStorageLibraryContentChangedTriggerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemCondition :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemCondition>,
    impl::require<ISystemCondition, Windows::ApplicationModel::Background::IBackgroundCondition>
{
    ISystemCondition(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemConditionFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemConditionFactory>
{
    ISystemConditionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemTrigger>,
    impl::require<ISystemTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ISystemTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemTriggerFactory>
{
    ISystemTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct ITimeTrigger :
    Windows::Foundation::IInspectable,
    impl::consume<ITimeTrigger>,
    impl::require<ITimeTrigger, Windows::ApplicationModel::Background::IBackgroundTrigger>
{
    ITimeTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct ITimeTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<ITimeTriggerFactory>
{
    ITimeTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationActionTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IToastNotificationActionTriggerFactory>
{
    IToastNotificationActionTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IToastNotificationHistoryChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IToastNotificationHistoryChangedTriggerFactory>
{
    IToastNotificationHistoryChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct IUserNotificationChangedTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IUserNotificationChangedTriggerFactory>
{
    IUserNotificationChangedTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

}

}
