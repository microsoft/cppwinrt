// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

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

enum class PowerSavingMode
{
    Off = 0,
    On = 1,
};

}

}
