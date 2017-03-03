// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.Holographic.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Preview::Holographic {

struct IHolographicApplicationPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IHolographicApplicationPreviewStatics>
{
    IHolographicApplicationPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
