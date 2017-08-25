// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.0.h"

WINRT_EXPORT namespace winrt::Windows::UI {

struct WINRT_EBO IColorHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelper>
{
    IColorHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelperStatics>
{
    IColorHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorHelperStatics2>
{
    IColorHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColors :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColors>
{
    IColors(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorsStatics>
{
    IColorsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
