// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.ApplicationModel.Activation.3.h"
#include "internal/Windows.ApplicationModel.Preview.Holographic.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
{
    HRESULT __stdcall abi_IsCurrentViewPresentedOnHolographicDisplay(bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsCurrentViewPresentedOnHolographicDisplay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsHolographicActivation(impl::abi_arg_in<Windows::ApplicationModel::Activation::IActivatedEventArgs> activatedEventArgs, bool * result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsHolographicActivation(*reinterpret_cast<const Windows::ApplicationModel::Activation::IActivatedEventArgs *>(&activatedEventArgs)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Preview::Holographic {

template <typename D> bool impl_IHolographicApplicationPreviewStatics<D>::IsCurrentViewPresentedOnHolographicDisplay() const
{
    bool result {};
    check_hresult(WINRT_SHIM(IHolographicApplicationPreviewStatics)->abi_IsCurrentViewPresentedOnHolographicDisplay(&result));
    return result;
}

template <typename D> bool impl_IHolographicApplicationPreviewStatics<D>::IsHolographicActivation(const Windows::ApplicationModel::Activation::IActivatedEventArgs & activatedEventArgs) const
{
    bool result {};
    check_hresult(WINRT_SHIM(IHolographicApplicationPreviewStatics)->abi_IsHolographicActivation(get_abi(activatedEventArgs), &result));
    return result;
}

inline bool HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay()
{
    return get_activation_factory<HolographicApplicationPreview, IHolographicApplicationPreviewStatics>().IsCurrentViewPresentedOnHolographicDisplay();
}

inline bool HolographicApplicationPreview::IsHolographicActivation(const Windows::ApplicationModel::Activation::IActivatedEventArgs & activatedEventArgs)
{
    return get_activation_factory<HolographicApplicationPreview, IHolographicApplicationPreviewStatics>().IsHolographicActivation(activatedEventArgs);
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
