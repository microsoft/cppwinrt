// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception {

struct IPerceptionTimestamp :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionTimestamp>
{
    IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
};

struct IPerceptionTimestampHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionTimestampHelperStatics>
{
    IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
