// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Perception.0.h"
#include "Windows.Foundation.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Perception {

struct __declspec(uuid("87c24804-a22e-4adb-ba26-d78ef639bcf4")) __declspec(novtable) IPerceptionTimestamp : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_PredictionAmount(Windows::Foundation::TimeSpan * value) = 0;
};

struct __declspec(uuid("47a611d4-a9df-4edc-855d-f4d339d967ac")) __declspec(novtable) IPerceptionTimestampHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromHistoricalTargetTime(Windows::Foundation::DateTime targetTime, Windows::Perception::IPerceptionTimestamp ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Perception::PerceptionTimestamp> { using default_interface = Windows::Perception::IPerceptionTimestamp; };

}

namespace Windows::Perception {

template <typename T> struct impl_IPerceptionTimestamp;
template <typename T> struct impl_IPerceptionTimestampHelperStatics;

}

namespace impl {

template <> struct traits<Windows::Perception::IPerceptionTimestamp>
{
    using abi = ABI::Windows::Perception::IPerceptionTimestamp;
    template <typename D> using consume = Windows::Perception::impl_IPerceptionTimestamp<D>;
};

template <> struct traits<Windows::Perception::IPerceptionTimestampHelperStatics>
{
    using abi = ABI::Windows::Perception::IPerceptionTimestampHelperStatics;
    template <typename D> using consume = Windows::Perception::impl_IPerceptionTimestampHelperStatics<D>;
};

template <> struct traits<Windows::Perception::PerceptionTimestamp>
{
    using abi = ABI::Windows::Perception::PerceptionTimestamp;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.PerceptionTimestamp"; }
};

template <> struct traits<Windows::Perception::PerceptionTimestampHelper>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Perception.PerceptionTimestampHelper"; }
};

}

}
