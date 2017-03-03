// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI {

struct Color;

}

namespace Windows::UI {

using Color = ABI::Windows::UI::Color;

}

namespace ABI::Windows::UI {

struct IColorHelper;
struct IColorHelperStatics;
struct IColorHelperStatics2;
struct IColors;
struct IColorsStatics;
struct ColorHelper;
struct Colors;

}

namespace Windows::UI {

struct IColorHelper;
struct IColorHelperStatics;
struct IColorHelperStatics2;
struct IColors;
struct IColorsStatics;
struct ColorHelper;
struct Colors;

}

namespace Windows::UI {

template <typename T> struct impl_IColorHelper;
template <typename T> struct impl_IColorHelperStatics;
template <typename T> struct impl_IColorHelperStatics2;
template <typename T> struct impl_IColors;
template <typename T> struct impl_IColorsStatics;

}

}
