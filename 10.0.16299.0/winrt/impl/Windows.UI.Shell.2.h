// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"
#include "winrt/impl/Windows.UI.Shell.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

struct AdaptiveCardBuilder
{
    AdaptiveCardBuilder() = delete;
    static Windows::UI::Shell::IAdaptiveCard CreateAdaptiveCardFromJson(param::hstring const& value);
};

struct WINRT_EBO TaskbarManager :
    Windows::UI::Shell::ITaskbarManager
{
    TaskbarManager(std::nullptr_t) noexcept {}
    static Windows::UI::Shell::TaskbarManager GetDefault();
};

}
