// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.People.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::People {

struct IHeadPose :
    Windows::Foundation::IInspectable,
    impl::consume<IHeadPose>
{
    IHeadPose(std::nullptr_t = nullptr) noexcept {}
};

}

}
