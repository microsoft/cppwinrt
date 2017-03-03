// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Input::Core {

struct IRadialControllerIndependentInputSource :
    Windows::Foundation::IInspectable,
    impl::consume<IRadialControllerIndependentInputSource>
{
    IRadialControllerIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct IRadialControllerIndependentInputSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IRadialControllerIndependentInputSourceStatics>
{
    IRadialControllerIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
