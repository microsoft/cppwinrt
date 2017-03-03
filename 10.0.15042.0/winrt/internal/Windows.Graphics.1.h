// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Graphics.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics {

struct PointInt32
{
    int32_t X;
    int32_t Y;
};

struct SizeInt32
{
    int32_t Width;
    int32_t Height;
};

struct RectInt32
{
    int32_t X;
    int32_t Y;
    int32_t Width;
    int32_t Height;
};

}

namespace Windows::Graphics {

using PointInt32 = ABI::Windows::Graphics::PointInt32;
using SizeInt32 = ABI::Windows::Graphics::SizeInt32;
using RectInt32 = ABI::Windows::Graphics::RectInt32;

}

namespace ABI {


}

namespace impl {

}

}
