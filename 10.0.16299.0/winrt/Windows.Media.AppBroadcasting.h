// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Media.AppBroadcasting.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor<D>::IsCurrentAppBroadcasting() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingMonitor)->get_IsCurrentAppBroadcasting(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor<D>::IsCurrentAppBroadcastingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::AppBroadcasting::AppBroadcastingMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingMonitor)->add_IsCurrentAppBroadcastingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor> consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor<D>::IsCurrentAppBroadcastingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::AppBroadcasting::AppBroadcastingMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>(this, &abi_t<Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>::remove_IsCurrentAppBroadcastingChanged, IsCurrentAppBroadcastingChanged(handler));
}

template <typename D> void consume_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor<D>::IsCurrentAppBroadcastingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingMonitor)->remove_IsCurrentAppBroadcastingChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatus<D>::CanStartBroadcast() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatus)->get_CanStartBroadcast(&value));
    return value;
}

template <typename D> Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatus<D>::Details() const noexcept
{
    Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatus)->get_Details(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsAnyAppBroadcasting() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsAnyAppBroadcasting(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsCaptureResourceUnavailable() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsCaptureResourceUnavailable(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsGameStreamInProgress() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsGameStreamInProgress(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsGpuConstrained() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsAppInactive() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsAppInactive(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsBlockedForApp() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsBlockedForApp(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsDisabledByUser() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsDisabledByUser(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails<D>::IsDisabledBySystem() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails)->get_IsDisabledBySystem(&value));
    return value;
}

template <typename D> Windows::Media::AppBroadcasting::AppBroadcastingStatus consume_Windows_Media_AppBroadcasting_IAppBroadcastingUI<D>::GetStatus() const
{
    Windows::Media::AppBroadcasting::AppBroadcastingStatus result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingUI)->GetStatus(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Media_AppBroadcasting_IAppBroadcastingUI<D>::ShowBroadcastUI() const
{
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingUI)->ShowBroadcastUI());
}

template <typename D> Windows::Media::AppBroadcasting::AppBroadcastingUI consume_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics<D>::GetDefault() const
{
    Windows::Media::AppBroadcasting::AppBroadcastingUI result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::AppBroadcasting::AppBroadcastingUI consume_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::Media::AppBroadcasting::AppBroadcastingUI result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Media::AppBroadcasting::IAppBroadcastingMonitor> : produce_base<D, Windows::Media::AppBroadcasting::IAppBroadcastingMonitor>
{
    HRESULT __stdcall get_IsCurrentAppBroadcasting(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsCurrentAppBroadcasting());
        return S_OK;
    }

    HRESULT __stdcall add_IsCurrentAppBroadcastingChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsCurrentAppBroadcastingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::AppBroadcasting::AppBroadcastingMonitor, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsCurrentAppBroadcastingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCurrentAppBroadcastingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::AppBroadcasting::IAppBroadcastingStatus> : produce_base<D, Windows::Media::AppBroadcasting::IAppBroadcastingStatus>
{
    HRESULT __stdcall get_CanStartBroadcast(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CanStartBroadcast());
        return S_OK;
    }

    HRESULT __stdcall get_Details(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Details());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails> : produce_base<D, Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails>
{
    HRESULT __stdcall get_IsAnyAppBroadcasting(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsAnyAppBroadcasting());
        return S_OK;
    }

    HRESULT __stdcall get_IsCaptureResourceUnavailable(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsCaptureResourceUnavailable());
        return S_OK;
    }

    HRESULT __stdcall get_IsGameStreamInProgress(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsGameStreamInProgress());
        return S_OK;
    }

    HRESULT __stdcall get_IsGpuConstrained(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsGpuConstrained());
        return S_OK;
    }

    HRESULT __stdcall get_IsAppInactive(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsAppInactive());
        return S_OK;
    }

    HRESULT __stdcall get_IsBlockedForApp(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsBlockedForApp());
        return S_OK;
    }

    HRESULT __stdcall get_IsDisabledByUser(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDisabledByUser());
        return S_OK;
    }

    HRESULT __stdcall get_IsDisabledBySystem(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDisabledBySystem());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::AppBroadcasting::IAppBroadcastingUI> : produce_base<D, Windows::Media::AppBroadcasting::IAppBroadcastingUI>
{
    HRESULT __stdcall GetStatus(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetStatus());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowBroadcastUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowBroadcastUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics> : produce_base<D, Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting {

inline AppBroadcastingMonitor::AppBroadcastingMonitor() :
    AppBroadcastingMonitor(activate_instance<AppBroadcastingMonitor>())
{}

inline Windows::Media::AppBroadcasting::AppBroadcastingUI AppBroadcastingUI::GetDefault()
{
    return get_activation_factory<AppBroadcastingUI, Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>().GetDefault();
}

inline Windows::Media::AppBroadcasting::AppBroadcastingUI AppBroadcastingUI::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<AppBroadcastingUI, Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics>().GetForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingStatus> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingUI> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::AppBroadcastingMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::AppBroadcastingMonitor> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::AppBroadcastingStatus> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::AppBroadcastingStatus> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::AppBroadcastingStatusDetails> {};

template<> struct hash<winrt::Windows::Media::AppBroadcasting::AppBroadcastingUI> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::AppBroadcasting::AppBroadcastingUI> {};

}

WINRT_WARNING_POP
