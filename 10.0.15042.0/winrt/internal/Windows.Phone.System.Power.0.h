// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::System::Power {

struct IPowerManagerStatics;
struct IPowerManagerStatics2;

}

namespace Windows::Phone::System::Power {

struct IPowerManagerStatics;
struct IPowerManagerStatics2;
struct PowerManager;

}

namespace Windows::Phone::System::Power {

template <typename T> struct impl_IPowerManagerStatics;
template <typename T> struct impl_IPowerManagerStatics2;

}

namespace Windows::Phone::System::Power {

enum class PowerSavingMode
{
    Off = 0,
    On = 1,
};

}

}
