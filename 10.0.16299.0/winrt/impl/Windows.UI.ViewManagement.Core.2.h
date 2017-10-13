// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.ViewManagement.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

struct WINRT_EBO CoreInputView :
    Windows::UI::ViewManagement::Core::ICoreInputView
{
    CoreInputView(std::nullptr_t) noexcept {}
    static Windows::UI::ViewManagement::Core::CoreInputView GetForCurrentView();
};

struct WINRT_EBO CoreInputViewOcclusion :
    Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion
{
    CoreInputViewOcclusion(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreInputViewOcclusionsChangedEventArgs :
    Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs
{
    CoreInputViewOcclusionsChangedEventArgs(std::nullptr_t) noexcept {}
};

}
