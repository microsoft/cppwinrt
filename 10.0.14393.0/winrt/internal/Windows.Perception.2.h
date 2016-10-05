// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception {

template <typename D>
struct WINRT_EBO impl_IPerceptionTimestamp
{
    Windows::Foundation::DateTime TargetTime() const;
    Windows::Foundation::TimeSpan PredictionAmount() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionTimestampHelperStatics
{
    Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(const Windows::Foundation::DateTime & targetTime) const;
};

struct IPerceptionTimestamp :
    Windows::IInspectable,
    impl::consume<IPerceptionTimestamp>
{
    IPerceptionTimestamp(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionTimestamp>(m_ptr); }
};

struct IPerceptionTimestampHelperStatics :
    Windows::IInspectable,
    impl::consume<IPerceptionTimestampHelperStatics>
{
    IPerceptionTimestampHelperStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionTimestampHelperStatics>(m_ptr); }
};

}

}
