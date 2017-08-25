// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI::Notifications {

struct BadgeNotification;
struct TileNotification;
struct ToastNotification;

}

WINRT_EXPORT namespace winrt::Windows::Networking::PushNotifications {

enum class PushNotificationType
{
    Toast = 0,
    Tile = 1,
    Badge = 2,
    Raw = 3,
    TileFlyout = 4,
};

struct IPushNotificationChannel;
struct IPushNotificationChannelManagerForUser;
struct IPushNotificationChannelManagerForUser2;
struct IPushNotificationChannelManagerStatics;
struct IPushNotificationChannelManagerStatics2;
struct IPushNotificationChannelManagerStatics3;
struct IPushNotificationReceivedEventArgs;
struct IRawNotification;
struct IRawNotification2;
struct PushNotificationChannel;
struct PushNotificationChannelManager;
struct PushNotificationChannelManagerForUser;
struct PushNotificationReceivedEventArgs;
struct RawNotification;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannel>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IRawNotification>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::IRawNotification2>{ using type = interface_category; };
template <> struct category<Windows::Networking::PushNotifications::PushNotificationChannel>{ using type = class_category; };
template <> struct category<Windows::Networking::PushNotifications::PushNotificationChannelManager>{ using type = class_category; };
template <> struct category<Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>{ using type = class_category; };
template <> struct category<Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::PushNotifications::RawNotification>{ using type = class_category; };
template <> struct category<Windows::Networking::PushNotifications::PushNotificationType>{ using type = enum_category; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannel>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannel" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerForUser2" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics2" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationChannelManagerStatics3" }; };
template <> struct name<Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IPushNotificationReceivedEventArgs" }; };
template <> struct name<Windows::Networking::PushNotifications::IRawNotification>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IRawNotification" }; };
template <> struct name<Windows::Networking::PushNotifications::IRawNotification2>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.IRawNotification2" }; };
template <> struct name<Windows::Networking::PushNotifications::PushNotificationChannel>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.PushNotificationChannel" }; };
template <> struct name<Windows::Networking::PushNotifications::PushNotificationChannelManager>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.PushNotificationChannelManager" }; };
template <> struct name<Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.PushNotificationChannelManagerForUser" }; };
template <> struct name<Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.PushNotificationReceivedEventArgs" }; };
template <> struct name<Windows::Networking::PushNotifications::RawNotification>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.RawNotification" }; };
template <> struct name<Windows::Networking::PushNotifications::PushNotificationType>{ static constexpr auto & value{ L"Windows.Networking.PushNotifications.PushNotificationType" }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannel>{ static constexpr GUID value{ 0x2B28102E,0xEF0B,0x4F39,{ 0x9B,0x8A,0xA3,0xC1,0x94,0xDE,0x70,0x81 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>{ static constexpr GUID value{ 0xA4C45704,0x1182,0x42C7,{ 0x88,0x90,0xF5,0x63,0xC4,0x89,0x0D,0xC4 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>{ static constexpr GUID value{ 0xC38B066A,0x7CC1,0x4DAC,{ 0x87,0xFD,0xBE,0x6E,0x92,0x04,0x14,0xA4 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>{ static constexpr GUID value{ 0x8BAF9B65,0x77A1,0x4588,{ 0xBD,0x19,0x86,0x15,0x29,0xA9,0xDC,0xF0 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>{ static constexpr GUID value{ 0xB444A65D,0xA7E9,0x4B28,{ 0x95,0x0E,0xF3,0x75,0xA9,0x07,0xF9,0xDF } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>{ static constexpr GUID value{ 0x4701FEFE,0x0EDE,0x4A3F,{ 0xAE,0x78,0xBF,0xA4,0x71,0x49,0x69,0x25 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>{ static constexpr GUID value{ 0xD1065E0C,0x36CD,0x484C,{ 0xB9,0x35,0x0A,0x99,0xB7,0x53,0xCF,0x00 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IRawNotification>{ static constexpr GUID value{ 0x1A227281,0x3B79,0x42AC,{ 0x99,0x63,0x22,0xAB,0x00,0xD4,0xF0,0xB7 } }; };
template <> struct guid<Windows::Networking::PushNotifications::IRawNotification2>{ static constexpr GUID value{ 0xE6D0CF19,0x0C6F,0x4CDD,{ 0x94,0x24,0xEE,0xC5,0xBE,0x01,0x4D,0x26 } }; };
template <> struct default_interface<Windows::Networking::PushNotifications::PushNotificationChannel>{ using type = Windows::Networking::PushNotifications::IPushNotificationChannel; };
template <> struct default_interface<Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser>{ using type = Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser; };
template <> struct default_interface<Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs>{ using type = Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs; };
template <> struct default_interface<Windows::Networking::PushNotifications::RawNotification>{ using type = Windows::Networking::PushNotifications::IRawNotification; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannel
{
    hstring Uri() const;
    Windows::Foundation::DateTime ExpirationTime() const;
    void Close() const;
    event_token PushNotificationReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> const& handler) const;
    using PushNotificationReceived_revoker = event_revoker<Windows::Networking::PushNotifications::IPushNotificationChannel>;
    PushNotificationReceived_revoker PushNotificationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::PushNotifications::PushNotificationChannel, Windows::Networking::PushNotifications::PushNotificationReceivedEventArgs> const& handler) const;
    void PushNotificationReceived(event_token const& token) const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannel> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannel<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(Windows::Storage::Streams::IBuffer const& appServerKey, param::hstring const& channelId) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(Windows::Storage::Streams::IBuffer const& appServerKey, param::hstring const& channelId, param::hstring const& appId) const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerForUser2<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForApplicationAsync(param::hstring const& applicationId) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::PushNotifications::PushNotificationChannel> CreatePushNotificationChannelForSecondaryTileAsync(param::hstring const& tileId) const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3
{
    Windows::Networking::PushNotifications::PushNotificationChannelManagerForUser GetDefault() const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationChannelManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs
{
    void Cancel(bool value) const;
    bool Cancel() const;
    Windows::Networking::PushNotifications::PushNotificationType NotificationType() const;
    Windows::UI::Notifications::ToastNotification ToastNotification() const;
    Windows::UI::Notifications::TileNotification TileNotification() const;
    Windows::UI::Notifications::BadgeNotification BadgeNotification() const;
    Windows::Networking::PushNotifications::RawNotification RawNotification() const;
};
template <> struct consume<Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IPushNotificationReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IRawNotification
{
    hstring Content() const;
};
template <> struct consume<Windows::Networking::PushNotifications::IRawNotification> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IRawNotification<D>; };

template <typename D>
struct consume_Windows_Networking_PushNotifications_IRawNotification2
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> Headers() const;
    hstring ChannelId() const;
};
template <> struct consume<Windows::Networking::PushNotifications::IRawNotification2> { template <typename D> using type = consume_Windows_Networking_PushNotifications_IRawNotification2<D>; };

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExpirationTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall Close() = 0;
    virtual HRESULT __stdcall add_PushNotificationReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PushNotificationReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePushNotificationChannelForApplicationAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreatePushNotificationChannelForApplicationAsyncWithId(HSTRING applicationId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreatePushNotificationChannelForSecondaryTileAsync(HSTRING tileId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannelManagerForUser2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsync(::IUnknown* appServerKey, HSTRING channelId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateRawPushNotificationChannelWithAlternateKeyForApplicationAsyncWithId(::IUnknown* appServerKey, HSTRING channelId, HSTRING appId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePushNotificationChannelForApplicationAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreatePushNotificationChannelForApplicationAsyncWithId(HSTRING applicationId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreatePushNotificationChannelForSecondaryTileAsync(HSTRING tileId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationChannelManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IPushNotificationReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall get_NotificationType(abi_t<Windows::Networking::PushNotifications::PushNotificationType>* value) = 0;
    virtual HRESULT __stdcall get_ToastNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TileNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BadgeNotification(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RawNotification(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IRawNotification>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Content(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::PushNotifications::IRawNotification2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Headers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ChannelId(HSTRING* value) = 0;
};};

}
