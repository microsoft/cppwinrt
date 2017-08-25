// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.Input.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Core {

struct WINRT_EBO RadialControllerIndependentInputSource :
    Windows::UI::Input::Core::IRadialControllerIndependentInputSource
{
    RadialControllerIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Core::RadialControllerIndependentInputSource CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view);
};

}
