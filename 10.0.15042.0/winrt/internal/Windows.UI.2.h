// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI {

struct IColorHelper :
    Windows::Foundation::IInspectable,
    impl::consume<IColorHelper>
{
    IColorHelper(std::nullptr_t = nullptr) noexcept {}
};

struct IColorHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IColorHelperStatics>
{
    IColorHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IColorHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume<IColorHelperStatics2>
{
    IColorHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct IColors :
    Windows::Foundation::IInspectable,
    impl::consume<IColors>
{
    IColors(std::nullptr_t = nullptr) noexcept {}
};

struct IColorsStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IColorsStatics>
{
    IColorsStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
