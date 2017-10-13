// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.ViewManagement.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

struct WINRT_EBO ICoreInputView :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInputView>
{
    ICoreInputView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreInputViewOcclusion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInputViewOcclusion>
{
    ICoreInputViewOcclusion(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreInputViewOcclusionsChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInputViewOcclusionsChangedEventArgs>
{
    ICoreInputViewOcclusionsChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreInputViewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreInputViewStatics>
{
    ICoreInputViewStatics(std::nullptr_t = nullptr) noexcept {}
};

}
