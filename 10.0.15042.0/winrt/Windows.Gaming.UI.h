// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Gaming.UI.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Gaming::UI::IGameBarStatics> : produce_base<D, Windows::Gaming::UI::IGameBarStatics>
{
    HRESULT __stdcall add_VisibilityChanged(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisibilityChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibilityChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsInputRedirectedChanged(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsInputRedirectedChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsInputRedirectedChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputRedirectedChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool * value) noexcept override
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

    HRESULT __stdcall get_IsInputRedirected(bool * value) noexcept override
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
    HRESULT __stdcall get_AppId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_AppDisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SenderName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Message(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Origin(Windows::Gaming::UI::GameChatMessageOrigin * value) noexcept override
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
    HRESULT __stdcall get_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition * value) noexcept override
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

    HRESULT __stdcall put_DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredPosition(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddMessage(impl::abi_arg_in<hstring> sender, impl::abi_arg_in<hstring> message, Windows::Gaming::UI::GameChatMessageOrigin origin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddMessage(*reinterpret_cast<const hstring *>(&sender), *reinterpret_cast<const hstring *>(&message), origin);
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
    HRESULT __stdcall add_MessageReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MessageReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDelayBeforeClosingAfterMessageReceived(impl::abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDelayBeforeClosingAfterMessageReceived(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
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
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::Gaming::UI::IGameChatOverlay> value) noexcept override
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

namespace Windows::Gaming::UI {

template <typename D> event_token impl_IGameChatOverlayMessageSource<D>::MessageReceived(const Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameChatOverlayMessageSource)->add_MessageReceived(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGameChatOverlayMessageSource> impl_IGameChatOverlayMessageSource<D>::MessageReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Gaming::UI::GameChatOverlayMessageSource, Windows::Gaming::UI::GameChatMessageReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGameChatOverlayMessageSource>(this, &ABI::Windows::Gaming::UI::IGameChatOverlayMessageSource::remove_MessageReceived, MessageReceived(handler));
}

template <typename D> void impl_IGameChatOverlayMessageSource<D>::MessageReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameChatOverlayMessageSource)->remove_MessageReceived(token));
}

template <typename D> void impl_IGameChatOverlayMessageSource<D>::SetDelayBeforeClosingAfterMessageReceived(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(WINRT_SHIM(IGameChatOverlayMessageSource)->abi_SetDelayBeforeClosingAfterMessageReceived(get_abi(value)));
}

template <typename D> hstring impl_IGameChatMessageReceivedEventArgs<D>::AppId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameChatMessageReceivedEventArgs)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameChatMessageReceivedEventArgs<D>::AppDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameChatMessageReceivedEventArgs)->get_AppDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameChatMessageReceivedEventArgs<D>::SenderName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameChatMessageReceivedEventArgs)->get_SenderName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGameChatMessageReceivedEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGameChatMessageReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatMessageOrigin impl_IGameChatMessageReceivedEventArgs<D>::Origin() const
{
    Windows::Gaming::UI::GameChatMessageOrigin value {};
    check_hresult(WINRT_SHIM(IGameChatMessageReceivedEventArgs)->get_Origin(&value));
    return value;
}

template <typename D> event_token impl_IGameBarStatics<D>::VisibilityChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameBarStatics)->add_VisibilityChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGameBarStatics> impl_IGameBarStatics<D>::VisibilityChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGameBarStatics>(this, &ABI::Windows::Gaming::UI::IGameBarStatics::remove_VisibilityChanged, VisibilityChanged(handler));
}

template <typename D> void impl_IGameBarStatics<D>::VisibilityChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameBarStatics)->remove_VisibilityChanged(token));
}

template <typename D> event_token impl_IGameBarStatics<D>::IsInputRedirectedChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGameBarStatics)->add_IsInputRedirectedChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGameBarStatics> impl_IGameBarStatics<D>::IsInputRedirectedChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGameBarStatics>(this, &ABI::Windows::Gaming::UI::IGameBarStatics::remove_IsInputRedirectedChanged, IsInputRedirectedChanged(handler));
}

template <typename D> void impl_IGameBarStatics<D>::IsInputRedirectedChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGameBarStatics)->remove_IsInputRedirectedChanged(token));
}

template <typename D> bool impl_IGameBarStatics<D>::Visible() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGameBarStatics)->get_Visible(&value));
    return value;
}

template <typename D> bool impl_IGameBarStatics<D>::IsInputRedirected() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGameBarStatics)->get_IsInputRedirected(&value));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatOverlay impl_IGameChatOverlayStatics<D>::GetDefault() const
{
    Windows::Gaming::UI::GameChatOverlay value { nullptr };
    check_hresult(WINRT_SHIM(IGameChatOverlayStatics)->abi_GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Gaming::UI::GameChatOverlayPosition impl_IGameChatOverlay<D>::DesiredPosition() const
{
    Windows::Gaming::UI::GameChatOverlayPosition value {};
    check_hresult(WINRT_SHIM(IGameChatOverlay)->get_DesiredPosition(&value));
    return value;
}

template <typename D> void impl_IGameChatOverlay<D>::DesiredPosition(Windows::Gaming::UI::GameChatOverlayPosition value) const
{
    check_hresult(WINRT_SHIM(IGameChatOverlay)->put_DesiredPosition(value));
}

template <typename D> void impl_IGameChatOverlay<D>::AddMessage(hstring_view sender, hstring_view message, Windows::Gaming::UI::GameChatMessageOrigin origin) const
{
    check_hresult(WINRT_SHIM(IGameChatOverlay)->abi_AddMessage(get_abi(sender), get_abi(message), origin));
}

inline event_token GameBar::VisibilityChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    return get_activation_factory<GameBar, IGameBarStatics>().VisibilityChanged(handler);
}

inline factory_event_revoker<IGameBarStatics> GameBar::VisibilityChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    auto factory = get_activation_factory<GameBar, IGameBarStatics>();
    return { factory, &ABI::Windows::Gaming::UI::IGameBarStatics::remove_VisibilityChanged, factory.VisibilityChanged(handler) };
}

inline void GameBar::VisibilityChanged(event_token token)
{
    get_activation_factory<GameBar, IGameBarStatics>().VisibilityChanged(token);
}

inline event_token GameBar::IsInputRedirectedChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    return get_activation_factory<GameBar, IGameBarStatics>().IsInputRedirectedChanged(handler);
}

inline factory_event_revoker<IGameBarStatics> GameBar::IsInputRedirectedChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    auto factory = get_activation_factory<GameBar, IGameBarStatics>();
    return { factory, &ABI::Windows::Gaming::UI::IGameBarStatics::remove_IsInputRedirectedChanged, factory.IsInputRedirectedChanged(handler) };
}

inline void GameBar::IsInputRedirectedChanged(event_token token)
{
    get_activation_factory<GameBar, IGameBarStatics>().IsInputRedirectedChanged(token);
}

inline bool GameBar::Visible()
{
    return get_activation_factory<GameBar, IGameBarStatics>().Visible();
}

inline bool GameBar::IsInputRedirected()
{
    return get_activation_factory<GameBar, IGameBarStatics>().IsInputRedirected();
}

inline Windows::Gaming::UI::GameChatOverlay GameChatOverlay::GetDefault()
{
    return get_activation_factory<GameChatOverlay, IGameChatOverlayStatics>().GetDefault();
}

inline GameChatOverlayMessageSource::GameChatOverlayMessageSource() :
    GameChatOverlayMessageSource(activate_instance<GameChatOverlayMessageSource>())
{}

}

}

template<>
struct std::hash<winrt::Windows::Gaming::UI::IGameBarStatics>
{
    size_t operator()(const winrt::Windows::Gaming::UI::IGameBarStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::Gaming::UI::IGameChatMessageReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::IGameChatOverlay>
{
    size_t operator()(const winrt::Windows::Gaming::UI::IGameChatOverlay & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource>
{
    size_t operator()(const winrt::Windows::Gaming::UI::IGameChatOverlayMessageSource & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::IGameChatOverlayStatics>
{
    size_t operator()(const winrt::Windows::Gaming::UI::IGameChatOverlayStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::Gaming::UI::GameChatMessageReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::GameChatOverlay>
{
    size_t operator()(const winrt::Windows::Gaming::UI::GameChatOverlay & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::UI::GameChatOverlayMessageSource>
{
    size_t operator()(const winrt::Windows::Gaming::UI::GameChatOverlayMessageSource & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
