// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.PushNotifications.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
#define WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
template <> struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede")) __declspec(novtable) IMapView<hstring, hstring> : impl_IMapView<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
#define WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
template <> struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c")) __declspec(novtable) IMap<hstring, hstring> : impl_IMap<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
#define WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
template <> struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716")) __declspec(novtable) IKeyValuePair<hstring, hstring> : impl_IKeyValuePair<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_70945a09_331a_5e40_b854_66b7a3233bab
#define WINRT_GENERIC_70945a09_331a_5e40_b854_66b7a3233bab
template <> struct __declspec(uuid("70945a09-331a-5e40-b854-66b7a3233bab")) __declspec(novtable) IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> : impl_IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> {};
#endif

#ifndef WINRT_GENERIC_55fa217d_1fc3_5863_b980_7094d4379694
#define WINRT_GENERIC_55fa217d_1fc3_5863_b980_7094d4379694
template <> struct __declspec(uuid("55fa217d-1fc3-5863-b980-7094d4379694")) __declspec(novtable) TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> : impl_TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_cf7c902f_0f0d_5b22_90b1_85141b5816cd
#define WINRT_GENERIC_cf7c902f_0f0d_5b22_90b1_85141b5816cd
template <> struct __declspec(uuid("cf7c902f-0f0d-5b22-90b1-85141b5816cd")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::PushNotifications::PushNotificationChannel> : impl_AsyncOperationCompletedHandler<Windows::Networking::PushNotifications::PushNotificationChannel> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace Windows::Networking::PushNotifications {

struct IPushNotificationChannel :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannel>
{
    IPushNotificationChannel(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannelManagerForUser>
{
    IPushNotificationChannelManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerForUser2 :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannelManagerForUser2>
{
    IPushNotificationChannelManagerForUser2(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannelManagerStatics>
{
    IPushNotificationChannelManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannelManagerStatics2>
{
    IPushNotificationChannelManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationChannelManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationChannelManagerStatics3>
{
    IPushNotificationChannelManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct IPushNotificationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IPushNotificationReceivedEventArgs>
{
    IPushNotificationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IRawNotification :
    Windows::Foundation::IInspectable,
    impl::consume<IRawNotification>
{
    IRawNotification(std::nullptr_t = nullptr) noexcept {}
};

struct IRawNotification2 :
    Windows::Foundation::IInspectable,
    impl::consume<IRawNotification2>
{
    IRawNotification2(std::nullptr_t = nullptr) noexcept {}
};

}

}
