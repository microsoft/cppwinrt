// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.LockScreen.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::RequestUnlock() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockApplicationHost)->RequestUnlock());
}

template <typename D> event_token consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockApplicationHost)->add_Unlocking(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::LockScreen::ILockApplicationHost> consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::LockScreen::ILockApplicationHost>(this, &abi_t<Windows::ApplicationModel::LockScreen::ILockApplicationHost>::remove_Unlocking, Unlocking(handler));
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockApplicationHost)->remove_Unlocking(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::LockScreen::LockApplicationHost consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::LockScreen::LockApplicationHost result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Logo() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Glyph() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Glyph(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Number() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Number(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::AutomationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_AutomationName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::LaunchApp() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenBadge)->LaunchApp());
}

template <typename D> event_token consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_LockScreenImageChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo>(this, &abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_LockScreenImageChanged, LockScreenImageChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_LockScreenImageChanged(get_abi(token)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImage() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_LockScreenImage(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_BadgesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo>(this, &abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_BadgesChanged, BadgesChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_BadgesChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::Badges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_Badges(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_DetailTextChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo>(this, &abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_DetailTextChanged, DetailTextChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_DetailTextChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailText() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_DetailText(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_AlarmIconChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::LockScreen::ILockScreenInfo> consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo>(this, &abi_t<Windows::ApplicationModel::LockScreen::ILockScreenInfo>::remove_AlarmIconChanged, AlarmIconChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_AlarmIconChanged(get_abi(token)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIcon() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_AlarmIcon(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockApplicationHost> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockApplicationHost>
{
    HRESULT __stdcall RequestUnlock() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestUnlock();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Unlocking(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Unlocking(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Unlocking(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unlocking(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockScreenBadge> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockScreenBadge>
{
    HRESULT __stdcall get_Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Glyph(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Glyph());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Number(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchApp() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LaunchApp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockScreenInfo>
{
    HRESULT __stdcall add_LockScreenImageChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LockScreenImageChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LockScreenImageChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenImageChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenImage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LockScreenImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BadgesChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BadgesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BadgesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Badges(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Badges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DetailTextChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DetailTextChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DetailTextChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailTextChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailText(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DetailText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AlarmIconChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AlarmIconChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AlarmIconChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlarmIconChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlarmIcon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlarmIcon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen {

inline Windows::ApplicationModel::LockScreen::LockApplicationHost LockApplicationHost::GetForCurrentView()
{
    return get_activation_factory<LockApplicationHost, Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> {};

}

WINRT_WARNING_POP
