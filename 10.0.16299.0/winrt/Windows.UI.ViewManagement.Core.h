// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.ViewManagement.Core.2.h"
#include "winrt/Windows.UI.ViewManagement.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->add_OcclusionsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView> consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::Core::ICoreInputView>(this, &abi_t<Windows::UI::ViewManagement::Core::ICoreInputView>::remove_OcclusionsChanged, OcclusionsChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->remove_OcclusionsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::GetCoreInputViewOcclusions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->GetCoreInputViewOcclusions(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::TryShowPrimaryView() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->TryShowPrimaryView(&result));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::TryHidePrimaryView() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->TryHidePrimaryView(&result));
    return result;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>::OccludingRect() const noexcept
{
    Windows::Foundation::Rect value{};
    check_terminate(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion)->get_OccludingRect(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>::OcclusionKind() const noexcept
{
    Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind value{};
    check_terminate(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion)->get_OcclusionKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Occlusions() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->get_Occlusions(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Handled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Handled(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::ViewManagement::Core::CoreInputView consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::Core::CoreInputView result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputView> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputView>
{
    HRESULT __stdcall add_OcclusionsChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OcclusionsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OcclusionsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OcclusionsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCoreInputViewOcclusions(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCoreInputViewOcclusions());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryShowPrimaryView(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryShowPrimaryView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryHidePrimaryView(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryHidePrimaryView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
{
    HRESULT __stdcall get_OccludingRect(Windows::Foundation::Rect* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OccludingRect());
        return S_OK;
    }

    HRESULT __stdcall get_OcclusionKind(Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OcclusionKind());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
{
    HRESULT __stdcall get_Occlusions(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Occlusions());
        return S_OK;
    }

    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Handled());
        return S_OK;
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Handled(value);
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewStatics> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** result) noexcept final
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

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

inline Windows::UI::ViewManagement::Core::CoreInputView CoreInputView::GetForCurrentView()
{
    return get_activation_factory<CoreInputView, Windows::UI::ViewManagement::Core::ICoreInputViewStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::ICoreInputView> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::CoreInputView> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> {};

}

WINRT_WARNING_POP
