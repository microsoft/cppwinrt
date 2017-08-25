// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsCurrentViewPresentedOnHolographicDisplay() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsCurrentViewPresentedOnHolographicDisplay(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsHolographicActivation(get_abi(activatedEventArgs), &result));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
{
    HRESULT __stdcall IsCurrentViewPresentedOnHolographicDisplay(bool* result) noexcept override
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

    HRESULT __stdcall IsHolographicActivation(::IUnknown* activatedEventArgs, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsHolographicActivation(*reinterpret_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&activatedEventArgs)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic {

inline bool HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay()
{
    return get_activation_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>().IsCurrentViewPresentedOnHolographicDisplay();
}

inline bool HolographicApplicationPreview::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs)
{
    return get_activation_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>().IsHolographicActivation(activatedEventArgs);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> {};

}

WINRT_WARNING_POP
