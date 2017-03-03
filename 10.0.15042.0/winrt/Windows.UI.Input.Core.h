// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.ApplicationModel.Core.3.h"
#include "internal/Windows.UI.Input.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.UI.Input.Core.3.h"
#include "Windows.UI.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSource> : produce_base<D, Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
{
    HRESULT __stdcall get_Controller(impl::abi_arg_out<Windows::UI::Input::IRadialController> value) noexcept override
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

    HRESULT __stdcall get_Dispatcher(impl::abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
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
    HRESULT __stdcall abi_CreateForView(impl::abi_arg_in<Windows::ApplicationModel::Core::ICoreApplicationView> view, impl::abi_arg_out<Windows::UI::Input::Core::IRadialControllerIndependentInputSource> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateForView(*reinterpret_cast<const Windows::ApplicationModel::Core::CoreApplicationView *>(&view)));
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

namespace Windows::UI::Input::Core {

template <typename D> Windows::UI::Input::Core::RadialControllerIndependentInputSource impl_IRadialControllerIndependentInputSourceStatics<D>::CreateForView(const Windows::ApplicationModel::Core::CoreApplicationView & view) const
{
    Windows::UI::Input::Core::RadialControllerIndependentInputSource result { nullptr };
    check_hresult(WINRT_SHIM(IRadialControllerIndependentInputSourceStatics)->abi_CreateForView(get_abi(view), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::RadialController impl_IRadialControllerIndependentInputSource<D>::Controller() const
{
    Windows::UI::Input::RadialController value { nullptr };
    check_hresult(WINRT_SHIM(IRadialControllerIndependentInputSource)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_IRadialControllerIndependentInputSource<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(WINRT_SHIM(IRadialControllerIndependentInputSource)->get_Dispatcher(put_abi(value)));
    return value;
}

inline Windows::UI::Input::Core::RadialControllerIndependentInputSource RadialControllerIndependentInputSource::CreateForView(const Windows::ApplicationModel::Core::CoreApplicationView & view)
{
    return get_activation_factory<RadialControllerIndependentInputSource, IRadialControllerIndependentInputSourceStatics>().CreateForView(view);
}

}

}

template<>
struct std::hash<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSource>
{
    size_t operator()(const winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSource & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>
{
    size_t operator()(const winrt::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource>
{
    size_t operator()(const winrt::Windows::UI::Input::Core::RadialControllerIndependentInputSource & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
