// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Perception.1.h"

WINRT_EXPORT namespace winrt::Windows::Perception {

struct WINRT_EBO PerceptionTimestamp :
    Windows::Perception::IPerceptionTimestamp
{
    PerceptionTimestamp(std::nullptr_t) noexcept {}
};

struct PerceptionTimestampHelper
{
    PerceptionTimestampHelper() = delete;
    static Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime);
};

}
