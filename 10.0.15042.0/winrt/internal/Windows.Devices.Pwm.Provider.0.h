// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Pwm::Provider {

struct IPwmControllerProvider;
struct IPwmProvider;

}

namespace Windows::Devices::Pwm::Provider {

struct IPwmControllerProvider;
struct IPwmProvider;

}

namespace Windows::Devices::Pwm::Provider {

template <typename T> struct impl_IPwmControllerProvider;
template <typename T> struct impl_IPwmProvider;

}

}
