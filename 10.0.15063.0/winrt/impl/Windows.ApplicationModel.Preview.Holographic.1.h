// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic {

struct WINRT_EBO IHolographicApplicationPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHolographicApplicationPreviewStatics>
{
    IHolographicApplicationPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}
