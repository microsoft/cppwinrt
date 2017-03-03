// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Preview.Holographic.0.h"
#include "Windows.ApplicationModel.Activation.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Preview::Holographic {

struct __declspec(uuid("fe038691-2a3a-45a9-a208-7bed691919f3")) __declspec(novtable) IHolographicApplicationPreviewStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsCurrentViewPresentedOnHolographicDisplay(bool * result) = 0;
    virtual HRESULT __stdcall abi_IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs * activatedEventArgs, bool * result) = 0;
};

}

namespace ABI {


}

namespace Windows::ApplicationModel::Preview::Holographic {

template <typename D>
struct WINRT_EBO impl_IHolographicApplicationPreviewStatics
{
    bool IsCurrentViewPresentedOnHolographicDisplay() const;
    bool IsHolographicActivation(const Windows::ApplicationModel::Activation::IActivatedEventArgs & activatedEventArgs) const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics;
    template <typename D> using consume = Windows::ApplicationModel::Preview::Holographic::impl_IHolographicApplicationPreviewStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Preview.Holographic.HolographicApplicationPreview"; }
};

}

}
