// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

enum class ActivationKind;
enum class ApplicationExecutionState;
struct SplashScreen;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

enum class GameChatMessageOrigin : int32_t
{
    Voice = 0,
    Text = 1,
};

enum class GameChatOverlayPosition : int32_t
{
    BottomCenter = 0,
    BottomLeft = 1,
    BottomRight = 2,
    MiddleRight = 3,
    MiddleLeft = 4,
    TopCenter = 5,
    TopLeft = 6,
    TopRight = 7,
};

enum class GameMonitoringPermission : int32_t
{
    Allowed = 0,
    DeniedByUser = 1,
    DeniedBySystem = 2,
};

struct IGameBarStatics;
struct IGameChatMessageReceivedEventArgs;
struct IGameChatOverlay;
struct IGameChatOverlayMessageSource;
struct IGameChatOverlayStatics;
struct IGameMonitor;
struct IGameMonitorStatics;
struct IGameUIProviderActivatedEventArgs;
struct GameBar;
struct GameChatMessageReceivedEventArgs;
struct GameChatOverlay;
struct GameChatOverlayMessageSource;
struct GameMonitor;
struct GameUIProviderActivatedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::UI::IGameBarStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatOverlay>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatOverlayMessageSource>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameChatOverlayStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameMonitor>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameMonitorStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Gaming::UI::GameBar>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatMessageReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatOverlay>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatOverlayMessageSource>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameMonitor>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameUIProviderActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Gaming::UI::GameChatMessageOrigin>{ using type = enum_category; };
template <> struct category<Windows::Gaming::UI::GameChatOverlayPosition>{ using type = enum_category; };
template <> struct category<Windows::Gaming::UI::GameMonitoringPermission>{ using type = enum_category; };
template <> struct name<Windows::Gaming::UI::IGameBarStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameBarStatics" }; };
template <> struct name<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatMessageReceivedEventArgs" }; };
template <> struct name<Windows::Gaming::UI::IGameChatOverlay>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatOverlay" }; };
template <> struct name<Windows::Gaming::UI::IGameChatOverlayMessageSource>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatOverlayMessageSource" }; };
template <> struct name<Windows::Gaming::UI::IGameChatOverlayStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameChatOverlayStatics" }; };
template <> struct name<Windows::Gaming::UI::IGameMonitor>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameMonitor" }; };
template <> struct name<Windows::Gaming::UI::IGameMonitorStatics>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameMonitorStatics" }; };
template <> struct name<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.Gaming.UI.IGameUIProviderActivatedEventArgs" }; };
template <> struct name<Windows::Gaming::UI::GameBar>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameBar" }; };
template <> struct name<Windows::Gaming::UI::GameChatMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatMessageReceivedEventArgs" }; };
template <> struct name<Windows::Gaming::UI::GameChatOverlay>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatOverlay" }; };
template <> struct name<Windows::Gaming::UI::GameChatOverlayMessageSource>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatOverlayMessageSource" }; };
template <> struct name<Windows::Gaming::UI::GameMonitor>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameMonitor" }; };
template <> struct name<Windows::Gaming::UI::GameUIProviderActivatedEventArgs>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameUIProviderActivatedEventArgs" }; };
template <> struct name<Windows::Gaming::UI::GameChatMessageOrigin>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatMessageOrigin" }; };
template <> struct name<Windows::Gaming::UI::GameChatOverlayPosition>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameChatOverlayPosition" }; };
template <> struct name<Windows::Gaming::UI::GameMonitoringPermission>{ static constexpr auto & value{ L"Windows.Gaming.UI.GameMonitoringPermission" }; };
template <> struct guid<Windows::Gaming::UI::IGameBarStatics>{ static constexpr GUID value{ 0x1DB9A292,0xCC78,0x4173,{ 0xBE,0x45,0xB6,0x1E,0x67,0x28,0x3E,0xA7 } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>{ static constexpr GUID value{ 0xA28201F1,0x3FB9,0x4E42,{ 0xA4,0x03,0x7A,0xFC,0xE2,0x02,0x3B,0x1E } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatOverlay>{ static constexpr GUID value{ 0xFBC64865,0xF6FC,0x4A48,{ 0xAE,0x07,0x03,0xAC,0x6E,0xD4,0x37,0x04 } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatOverlayMessageSource>{ static constexpr GUID value{ 0x1E177397,0x59FB,0x4F4F,{ 0x8E,0x9A,0x80,0xAC,0xF8,0x17,0x74,0x3C } }; };
template <> struct guid<Windows::Gaming::UI::IGameChatOverlayStatics>{ static constexpr GUID value{ 0x89ACF614,0x7867,0x49F7,{ 0x96,0x87,0x25,0xD9,0xDB,0xF4,0x44,0xD1 } }; };
template <> struct guid<Windows::Gaming::UI::IGameMonitor>{ static constexpr GUID value{ 0x12234358,0xDD09,0x4511,{ 0xAD,0xCD,0x8D,0x59,0x75,0xD8,0x10,0x28 } }; };
template <> struct guid<Windows::Gaming::UI::IGameMonitorStatics>{ static constexpr GUID value{ 0x11674B34,0x5AE0,0x4BB4,{ 0xB9,0x1F,0x8A,0xCB,0x48,0x15,0x9A,0x71 } }; };
template <> struct guid<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs>{ static constexpr GUID value{ 0xA7B3203E,0xCAF7,0x4DED,{ 0xBB,0xD2,0x47,0xDE,0x43,0xBB,0x6D,0xD5 } }; };
template <> struct default_interface<Windows::Gaming::UI::GameChatMessageReceivedEventArgs>{ using type = Windows::Gaming::UI::IGameChatMessageReceivedEventArgs; };
template <> struct default_interface<Windows::Gaming::UI::GameChatOverlay>{ using type = Windows::Gaming::UI::IGameChatOverlay; };
template <> struct default_interface<Windows::Gaming::UI::GameChatOverlayMessageSource>{ using type = Windows::Gaming::UI::IGameChatOverlayMessageSource; };
template <> struct default_interface<Windows::Gaming::UI::GameMonitor>{ using type = Windows::Gaming::UI::IGameMonitor; };
template <> struct default_interface<Windows::Gaming::UI::GameUIProviderActivatedEventArgs>{ using type = Windows::Gaming::UI::IGameUIProviderActivatedEventArgs; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameBarStatics
{
    event_token VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using VisibilityChanged_revoker = event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void VisibilityChanged(event_token const& token) const;
    event_token IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using IsInputRedirectedChanged_revoker = event_revoker<Windows::Gaming::UI::IGameBarStatics>;
    IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void IsInputRedirectedChanged(event_token const& token) const;
    bool Visible() const noexcept;
    bool IsInputRedirected() const noexcept;
};
template <> struct consume<Windows::Gaming::UI::IGameBarStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameBarStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs
{
    hstring AppId() const noexcept;
    hstring AppDisplayName() const noexcept;
    hstring SenderName() const noexcept;
    hstring Message() const noexcept;
    Windows::Gaming::UI::GameChatMessageOrigin Origin() const noexcept;
};
template <> struct consume<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatOverlay
{
    Windows::Gaming::UI::GameChatOverlayPosition DesiredPosition() const noexcept;
    void DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition const& value) const noexcept;
    void AddMessage(param::hstring const& sender, param::hstring const& message, Windows::Gaming::UI::GameChatMessageOrigin const& origin) const;
};
template <> struct consume<Windows::Gaming::UI::IGameChatOverlay> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlay<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatOverlayMessageSource
{
    event_token MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const;
    using MessageReceived_revoker = event_revoker<Windows::Gaming::UI::IGameChatOverlayMessageSource>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const;
    void MessageReceived(event_token const& token) const;
    void SetDelayBeforeClosingAfterMessageReceived(Windows::Foundation::TimeSpan const& value) const;
};
template <> struct consume<Windows::Gaming::UI::IGameChatOverlayMessageSource> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameChatOverlayStatics
{
    Windows::Gaming::UI::GameChatOverlay GetDefault() const;
};
template <> struct consume<Windows::Gaming::UI::IGameChatOverlayStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameMonitor
{
    Windows::Foundation::IAsyncOperation<Windows::Gaming::UI::GameMonitoringPermission> RequestPermissionAsync() const;
};
template <> struct consume<Windows::Gaming::UI::IGameMonitor> { template <typename D> using type = consume_Windows_Gaming_UI_IGameMonitor<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameMonitorStatics
{
    Windows::Gaming::UI::GameMonitor GetDefault() const;
};
template <> struct consume<Windows::Gaming::UI::IGameMonitorStatics> { template <typename D> using type = consume_Windows_Gaming_UI_IGameMonitorStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs
{
    Windows::Foundation::Collections::ValueSet GameUIArgs() const noexcept;
    void ReportCompleted(Windows::Foundation::Collections::ValueSet const& results) const;
};
template <> struct consume<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs> { template <typename D> using type = consume_Windows_Gaming_UI_IGameUIProviderActivatedEventArgs<D>; };

template <> struct abi<Windows::Gaming::UI::IGameBarStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_IsInputRedirectedChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall get_IsInputRedirected(bool* value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SenderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Origin(Windows::Gaming::UI::GameChatMessageOrigin* value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatOverlay>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition* value) = 0;
    virtual HRESULT __stdcall put_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) = 0;
    virtual HRESULT __stdcall AddMessage(HSTRING sender, HSTRING message, Windows::Gaming::UI::GameChatMessageOrigin origin) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatOverlayMessageSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_MessageReceived(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(event_token token) = 0;
    virtual HRESULT __stdcall SetDelayBeforeClosingAfterMessageReceived(Windows::Foundation::TimeSpan value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameChatOverlayStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameMonitor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestPermissionAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameMonitorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** gameMonitor) = 0;
};};

template <> struct abi<Windows::Gaming::UI::IGameUIProviderActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GameUIArgs(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReportCompleted(::IUnknown* results) = 0;
};};

}
