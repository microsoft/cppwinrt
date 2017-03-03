// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception {

struct WINRT_EBO PerceptionTimestamp :
    Windows::Perception::IPerceptionTimestamp
{
    PerceptionTimestamp(std::nullptr_t) noexcept {}
};

struct PerceptionTimestampHelper
{
    PerceptionTimestampHelper() = delete;
    static Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(const Windows::Foundation::DateTime & targetTime);
};

}

}
