// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Gaming.UI.2.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_VisibilityChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::UI::IGameBarStatics> consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::UI::IGameBarStatics>(this, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void consume_Windows_Gaming_UI_IGameBarStatics<D>::VisibilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_VisibilityChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->add_IsInputRedirectedChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::UI::IGameBarStatics> consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::UI::IGameBarStatics>(this, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged, IsInputRedirectedChanged(handler));
}

template <typename D> void consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirectedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->remove_IsInputRedirectedChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Gaming_UI_IGameBarStatics<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_Visible(&value));
    return value;
}

template <typename D> bool consume_Windows_Gaming_UI_IGameBarStatics<D>::IsInputRedirected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameBarStatics)->get_IsInputRedirected(&value));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::AppDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_AppDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::SenderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_SenderName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatMessageOrigin consume_Windows_Gaming_UI_IGameChatMessageReceivedEventArgs<D>::Origin() const
{
    Windows::Gaming::UI::GameChatMessageOrigin value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatMessageReceivedEventArgs)->get_Origin(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatOverlayPosition consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition() const
{
    Windows::Gaming::UI::GameChatOverlayPosition value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->get_DesiredPosition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlay<D>::DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->put_DesiredPosition(get_abi(value)));
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlay<D>::AddMessage(param::hstring const& sender, param::hstring const& message, Windows::Gaming::UI::GameChatMessageOrigin const& origin) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlay)->AddMessage(get_abi(sender), get_abi(message), get_abi(origin)));
}

template <typename D> event_token consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->add_MessageReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Gaming::UI::IGameChatOverlayMessageSource> consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Gaming::UI::IGameChatOverlayMessageSource>(this, &abi_t<Windows::Gaming::UI::IGameChatOverlayMessageSource>::remove_MessageReceived, MessageReceived(handler));
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::MessageReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->remove_MessageReceived(get_abi(token)));
}

template <typename D> void consume_Windows_Gaming_UI_IGameChatOverlayMessageSource<D>::SetDelayBeforeClosingAfterMessageReceived(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlayMessageSource)->SetDelayBeforeClosingAfterMessageReceived(get_abi(value)));
}

template <typename D> Windows::Gaming::UI::GameChatOverlay consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>::GetDefault() const
{
    Windows::Gaming::UI::GameChatOverlay value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::UI::IGameChatOverlayStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameBarStatics> : produce_base<D, Windows::Gaming::UI::IGameBarStatics>
{
    HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisibilityChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsInputRedirectedChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsInputRedirectedChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsInputRedirectedChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputRedirectedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInputRedirected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInputRedirected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> : produce_base<D, Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>
{
    HRESULT __stdcall get_AppId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SenderName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Origin(abi_t<Windows::Gaming::UI::GameChatMessageOrigin>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Origin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatOverlay> : produce_base<D, Windows::Gaming::UI::IGameChatOverlay>
{
    HRESULT __stdcall get_DesiredPosition(abi_t<Windows::Gaming::UI::GameChatOverlayPosition>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredPosition(abi_t<Windows::Gaming::UI::GameChatOverlayPosition> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPosition(*reinterpret_cast<Windows::Gaming::UI::GameChatOverlayPosition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddMessage(HSTRING sender, HSTRING message, abi_t<Windows::Gaming::UI::GameChatMessageOrigin> origin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMessage(*reinterpret_cast<hstring const*>(&sender), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<Windows::Gaming::UI::GameChatMessageOrigin const*>(&origin));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatOverlayMessageSource> : produce_base<D, Windows::Gaming::UI::IGameChatOverlayMessageSource>
{
    HRESULT __stdcall add_MessageReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDelayBeforeClosingAfterMessageReceived(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDelayBeforeClosingAfterMessageReceived(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameChatOverlayStatics> : produce_base<D, Windows::Gaming::UI::IGameChatOverlayStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::UI {

inline event_token GameBar::VisibilityChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().VisibilityChanged(handler);
}

inline factory_event_revoker<Windows::Gaming::UI::IGameBarStatics> GameBar::VisibilityChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
    return { factory, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged, factory.VisibilityChanged(handler) };
}

inline void GameBar::VisibilityChanged(event_token const& token)
{
    get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().VisibilityChanged(token);
}

inline event_token GameBar::IsInputRedirectedChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirectedChanged(handler);
}

inline factory_event_revoker<Windows::Gaming::UI::IGameBarStatics> GameBar::IsInputRedirectedChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>();
    return { factory, &abi_t<Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged, factory.IsInputRedirectedChanged(handler) };
}

inline void GameBar::IsInputRedirectedChanged(event_token const& token)
{
    get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirectedChanged(token);
}

inline bool GameBar::Visible()
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().Visible();
}

inline bool GameBar::IsInputRedirected()
{
    return get_activation_factory<GameBar, Windows::Gaming::UI::IGameBarStatics>().IsInputRedirected();
}

inline Windows::Gaming::UI::GameChatOverlay GameChatOverlay::GetDefault()
{
    return get_activation_factory<GameChatOverlay, Windows::Gaming::UI::IGameChatOverlayStatics>().GetDefault();
}

inline GameChatOverlayMessageSource::GameChatOverlayMessageSource() :
    GameChatOverlayMessageSource(activate_instance<GameChatOverlayMessageSource>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::UI::IGameBarStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameBarStatics> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatOverlay> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource> {};

template<> struct hash<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameBar> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameChatOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameChatOverlay> {};

template<> struct hash<winrt::Windows::Gaming::UI::GameChatOverlayMessageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::UI::GameChatOverlayMessageSource> {};

}

WINRT_WARNING_POP
