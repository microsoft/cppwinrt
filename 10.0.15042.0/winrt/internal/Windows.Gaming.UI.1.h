// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Gaming.UI.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Gaming::UI {

struct __declspec(uuid("1db9a292-cc78-4173-be45-b61e67283ea7")) __declspec(novtable) IGameBarStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
    virtual HRESULT __stdcall get_IsInputRedirected(bool * value) = 0;
};

struct __declspec(uuid("a28201f1-3fb9-4e42-a403-7afce2023b1e")) __declspec(novtable) IGameChatMessageReceivedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AppId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AppDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SenderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall get_Origin(winrt::Windows::Gaming::UI::GameChatMessageOrigin * value) = 0;
};

struct __declspec(uuid("fbc64865-f6fc-4a48-ae07-03ac6ed43704")) __declspec(novtable) IGameChatOverlay : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DesiredPosition(winrt::Windows::Gaming::UI::GameChatOverlayPosition * value) = 0;
    virtual HRESULT __stdcall put_DesiredPosition(winrt::Windows::Gaming::UI::GameChatOverlayPosition value) = 0;
    virtual HRESULT __stdcall abi_AddMessage(hstring sender, hstring message, winrt::Windows::Gaming::UI::GameChatMessageOrigin origin) = 0;
};

struct __declspec(uuid("1e177397-59fb-4f4f-8e9a-80acf817743c")) __declspec(novtable) IGameChatOverlayMessageSource : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MessageReceived(event_token token) = 0;
    virtual HRESULT __stdcall abi_SetDelayBeforeClosingAfterMessageReceived(Windows::Foundation::TimeSpan value) = 0;
};

struct __declspec(uuid("89acf614-7867-49f7-9687-25d9dbf444d1")) __declspec(novtable) IGameChatOverlayStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Gaming::UI::IGameChatOverlay ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Gaming::UI::GameChatMessageReceivedEventArgs> { using default_interface = Windows::Gaming::UI::IGameChatMessageReceivedEventArgs; };
template <> struct traits<Windows::Gaming::UI::GameChatOverlay> { using default_interface = Windows::Gaming::UI::IGameChatOverlay; };
template <> struct traits<Windows::Gaming::UI::GameChatOverlayMessageSource> { using default_interface = Windows::Gaming::UI::IGameChatOverlayMessageSource; };

}

namespace Windows::Gaming::UI {

template <typename D>
struct WINRT_EBO impl_IGameBarStatics
{
    event_token VisibilityChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    using VisibilityChanged_revoker = event_revoker<IGameBarStatics>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    void VisibilityChanged(event_token token) const;
    event_token IsInputRedirectedChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    using IsInputRedirectedChanged_revoker = event_revoker<IGameBarStatics>;
    IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const;
    void IsInputRedirectedChanged(event_token token) const;
    bool Visible() const;
    bool IsInputRedirected() const;
};

template <typename D>
struct WINRT_EBO impl_IGameChatMessageReceivedEventArgs
{
    hstring AppId() const;
    hstring AppDisplayName() const;
    hstring SenderName() const;
    hstring Message() const;
    Windows::Gaming::UI::GameChatMessageOrigin Origin() const;
};

template <typename D>
struct WINRT_EBO impl_IGameChatOverlay
{
    Windows::Gaming::UI::GameChatOverlayPosition DesiredPosition() const;
    void DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) const;
    void AddMessage(hstring_view sender, hstring_view message, Windows::Gaming::UI::GameChatMessageOrigin origin) const;
};

template <typename D>
struct WINRT_EBO impl_IGameChatOverlayMessageSource
{
    event_token MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> & handler) const;
    using MessageReceived_revoker = event_revoker<IGameChatOverlayMessageSource>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> & handler) const;
    void MessageReceived(event_token token) const;
    void SetDelayBeforeClosingAfterMessageReceived(const Windows::Foundation::TimeSpan & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGameChatOverlayStatics
{
    Windows::Gaming::UI::GameChatOverlay GetDefault() const;
};

}

namespace impl {

template <> struct traits<Windows::Gaming::UI::IGameBarStatics>
{
    using abi = ABI::Windows::Gaming::UI::IGameBarStatics;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameBarStatics<D>;
};

template <> struct traits<Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>
{
    using abi = ABI::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameChatMessageReceivedEventArgs<D>;
};

template <> struct traits<Windows::Gaming::UI::IGameChatOverlay>
{
    using abi = ABI::Windows::Gaming::UI::IGameChatOverlay;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameChatOverlay<D>;
};

template <> struct traits<Windows::Gaming::UI::IGameChatOverlayMessageSource>
{
    using abi = ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameChatOverlayMessageSource<D>;
};

template <> struct traits<Windows::Gaming::UI::IGameChatOverlayStatics>
{
    using abi = ABI::Windows::Gaming::UI::IGameChatOverlayStatics;
    template <typename D> using consume = Windows::Gaming::UI::impl_IGameChatOverlayStatics<D>;
};

template <> struct traits<Windows::Gaming::UI::GameBar>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.UI.GameBar"; }
};

template <> struct traits<Windows::Gaming::UI::GameChatMessageReceivedEventArgs>
{
    using abi = ABI::Windows::Gaming::UI::GameChatMessageReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.UI.GameChatMessageReceivedEventArgs"; }
};

template <> struct traits<Windows::Gaming::UI::GameChatOverlay>
{
    using abi = ABI::Windows::Gaming::UI::GameChatOverlay;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.UI.GameChatOverlay"; }
};

template <> struct traits<Windows::Gaming::UI::GameChatOverlayMessageSource>
{
    using abi = ABI::Windows::Gaming::UI::GameChatOverlayMessageSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Gaming.UI.GameChatOverlayMessageSource"; }
};

}

}
