// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.LockScreen.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::LockScreen::ILockApplicationHost> : produce_base<D, Windows::ApplicationModel::LockScreen::ILockApplicationHost>
{
    HRESULT __stdcall abi_RequestUnlock() noexcept override
    {
        try
        {
            this->shim().RequestUnlock();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Unlocking(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Unlocking(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Unlocking(event_token token) noexcept override
    {
        try
        {
            this->shim().Unlocking(token);
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::LockScreen::ILockApplicationHost> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_Logo(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Glyph(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Glyph());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Number(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomationName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutomationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LaunchApp() noexcept override
    {
        try
        {
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
    HRESULT __stdcall add_LockScreenImageChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LockScreenImageChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LockScreenImageChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().LockScreenImageChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenImage(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LockScreenImage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BadgesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BadgesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BadgesChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().BadgesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Badges(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Badges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DetailTextChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DetailTextChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DetailTextChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DetailTextChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailText(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DetailText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AlarmIconChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AlarmIconChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AlarmIconChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AlarmIconChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlarmIcon(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlarmIcon());
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::LockScreen {

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_ILockScreenBadge<D>::Logo() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const ILockScreenBadge &>(static_cast<const D &>(*this))->get_Logo(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_ILockScreenBadge<D>::Glyph() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const ILockScreenBadge &>(static_cast<const D &>(*this))->get_Glyph(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_ILockScreenBadge<D>::Number() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const ILockScreenBadge &>(static_cast<const D &>(*this))->get_Number(put(value)));
    return value;
}

template <typename D> hstring impl_ILockScreenBadge<D>::AutomationName() const
{
    hstring value;
    check_hresult(static_cast<const ILockScreenBadge &>(static_cast<const D &>(*this))->get_AutomationName(put(value)));
    return value;
}

template <typename D> void impl_ILockScreenBadge<D>::LaunchApp() const
{
    check_hresult(static_cast<const ILockScreenBadge &>(static_cast<const D &>(*this))->abi_LaunchApp());
}

template <typename D> event_token impl_ILockScreenInfo<D>::LockScreenImageChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->add_LockScreenImageChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILockScreenInfo> impl_ILockScreenInfo<D>::LockScreenImageChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ILockScreenInfo>(this, &ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo::remove_LockScreenImageChanged, LockScreenImageChanged(handler));
}

template <typename D> void impl_ILockScreenInfo<D>::LockScreenImageChanged(event_token token) const
{
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->remove_LockScreenImageChanged(token));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_ILockScreenInfo<D>::LockScreenImage() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->get_LockScreenImage(put(value)));
    return value;
}

template <typename D> event_token impl_ILockScreenInfo<D>::BadgesChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->add_BadgesChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILockScreenInfo> impl_ILockScreenInfo<D>::BadgesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ILockScreenInfo>(this, &ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo::remove_BadgesChanged, BadgesChanged(handler));
}

template <typename D> void impl_ILockScreenInfo<D>::BadgesChanged(event_token token) const
{
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->remove_BadgesChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> impl_ILockScreenInfo<D>::Badges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::LockScreen::LockScreenBadge> value;
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->get_Badges(put(value)));
    return value;
}

template <typename D> event_token impl_ILockScreenInfo<D>::DetailTextChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->add_DetailTextChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILockScreenInfo> impl_ILockScreenInfo<D>::DetailTextChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ILockScreenInfo>(this, &ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo::remove_DetailTextChanged, DetailTextChanged(handler));
}

template <typename D> void impl_ILockScreenInfo<D>::DetailTextChanged(event_token token) const
{
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->remove_DetailTextChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_ILockScreenInfo<D>::DetailText() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->get_DetailText(put(value)));
    return value;
}

template <typename D> event_token impl_ILockScreenInfo<D>::AlarmIconChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->add_AlarmIconChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILockScreenInfo> impl_ILockScreenInfo<D>::AlarmIconChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockScreenInfo, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ILockScreenInfo>(this, &ABI::Windows::ApplicationModel::LockScreen::ILockScreenInfo::remove_AlarmIconChanged, AlarmIconChanged(handler));
}

template <typename D> void impl_ILockScreenInfo<D>::AlarmIconChanged(event_token token) const
{
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->remove_AlarmIconChanged(token));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_ILockScreenInfo<D>::AlarmIcon() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const ILockScreenInfo &>(static_cast<const D &>(*this))->get_AlarmIcon(put(value)));
    return value;
}

template <typename D> void impl_ILockScreenUnlockingDeferral<D>::Complete() const
{
    check_hresult(static_cast<const ILockScreenUnlockingDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral impl_ILockScreenUnlockingEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral deferral { nullptr };
    check_hresult(static_cast<const ILockScreenUnlockingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::DateTime impl_ILockScreenUnlockingEventArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const ILockScreenUnlockingEventArgs &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> void impl_ILockApplicationHost<D>::RequestUnlock() const
{
    check_hresult(static_cast<const ILockApplicationHost &>(static_cast<const D &>(*this))->abi_RequestUnlock());
}

template <typename D> event_token impl_ILockApplicationHost<D>::Unlocking(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ILockApplicationHost &>(static_cast<const D &>(*this))->add_Unlocking(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ILockApplicationHost> impl_ILockApplicationHost<D>::Unlocking(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::LockScreen::LockApplicationHost, Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ILockApplicationHost>(this, &ABI::Windows::ApplicationModel::LockScreen::ILockApplicationHost::remove_Unlocking, Unlocking(handler));
}

template <typename D> void impl_ILockApplicationHost<D>::Unlocking(event_token token) const
{
    check_hresult(static_cast<const ILockApplicationHost &>(static_cast<const D &>(*this))->remove_Unlocking(token));
}

template <typename D> Windows::ApplicationModel::LockScreen::LockApplicationHost impl_ILockApplicationHostStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::LockScreen::LockApplicationHost result { nullptr };
    check_hresult(static_cast<const ILockApplicationHostStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(result)));
    return result;
}

inline Windows::ApplicationModel::LockScreen::LockApplicationHost LockApplicationHost::GetForCurrentView()
{
    return get_activation_factory<LockApplicationHost, ILockApplicationHostStatics>().GetForCurrentView();
}

}

}
