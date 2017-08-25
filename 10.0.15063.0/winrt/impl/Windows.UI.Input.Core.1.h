// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Input.0.h"
#include "winrt/impl/Windows.UI.Input.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Core {

struct WINRT_EBO IRadialControllerIndependentInputSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerIndependentInputSource>
{
    IRadialControllerIndependentInputSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRadialControllerIndependentInputSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRadialControllerIndependentInputSourceStatics>
{
    IRadialControllerIndependentInputSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
