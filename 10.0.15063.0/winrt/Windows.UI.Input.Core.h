// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Input.Core.2.h"
#include "winrt/Windows.UI.Input.h"

namespace winrt::impl {

template <typename D> Windows::UI::Input::RadialController consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource<D>::Controller() const
{
    Windows::UI::Input::RadialController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Core::IRadialControllerIndependentInputSource)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Core::IRadialControllerIndependentInputSource)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Core::RadialControllerIndependentInputSource consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics<D>::CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view) const
{
    Windows::UI::Input::Core::RadialControllerIndependentInputSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics)->CreateForView(get_abi(view), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSource> : produce_base<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
{
    HRESULT __stdcall get_Controller(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dispatcher());
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
struct produce<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics> : produce_base<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
{
    HRESULT __stdcall CreateForView(::IUnknown* view, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateForView(*reinterpret_cast<Windows::ApplicationModel::Core::CoreApplicationView const*>(&view)));
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

WINRT_EXPORT namespace winrt::Windows::UI::Input::Core {

inline Windows::UI::Input::Core::RadialControllerIndependentInputSource RadialControllerIndependentInputSource::CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view)
{
    return get_activation_factory<RadialControllerIndependentInputSource, Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>().CreateForView(view);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSource> {};

template<> struct hash<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource> {};

}

WINRT_WARNING_POP
