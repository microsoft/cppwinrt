// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics {

struct PointInt32
{
    int32_t X;
    int32_t Y;
};

struct RectInt32
{
    int32_t X;
    int32_t Y;
    int32_t Width;
    int32_t Height;
};

struct SizeInt32
{
    int32_t Width;
    int32_t Height;
};

}

namespace winrt::impl {

template <> struct is_struct<Windows::Graphics::PointInt32>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Windows::Graphics::RectInt32>
{
    static constexpr bool value{ true };
};

template <> struct is_struct<Windows::Graphics::SizeInt32>
{
    static constexpr bool value{ true };
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics {

}
