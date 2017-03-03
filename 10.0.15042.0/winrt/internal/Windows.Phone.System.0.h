// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::System {

struct ISystemProtectionStatics;
struct ISystemProtectionUnlockStatics;

}

namespace Windows::Phone::System {

struct ISystemProtectionStatics;
struct ISystemProtectionUnlockStatics;
struct SystemProtection;

}

namespace Windows::Phone::System {

template <typename T> struct impl_ISystemProtectionStatics;
template <typename T> struct impl_ISystemProtectionUnlockStatics;

}

}
