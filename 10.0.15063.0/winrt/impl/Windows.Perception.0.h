// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Perception {

struct IPerceptionTimestamp;
struct IPerceptionTimestampHelperStatics;
struct PerceptionTimestamp;
struct PerceptionTimestampHelper;

}

namespace winrt::impl {

template <> struct category<Windows::Perception::IPerceptionTimestamp>{ using type = interface_category; };
template <> struct category<Windows::Perception::IPerceptionTimestampHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::PerceptionTimestamp>{ using type = class_category; };
template <> struct category<Windows::Perception::PerceptionTimestampHelper>{ using type = class_category; };
template <> struct name<Windows::Perception::IPerceptionTimestamp>{ static constexpr auto & value{ L"Windows.Perception.IPerceptionTimestamp" }; };
template <> struct name<Windows::Perception::IPerceptionTimestampHelperStatics>{ static constexpr auto & value{ L"Windows.Perception.IPerceptionTimestampHelperStatics" }; };
template <> struct name<Windows::Perception::PerceptionTimestamp>{ static constexpr auto & value{ L"Windows.Perception.PerceptionTimestamp" }; };
template <> struct name<Windows::Perception::PerceptionTimestampHelper>{ static constexpr auto & value{ L"Windows.Perception.PerceptionTimestampHelper" }; };
template <> struct guid<Windows::Perception::IPerceptionTimestamp>{ static constexpr GUID value{ 0x87C24804,0xA22E,0x4ADB,{ 0xBA,0x26,0xD7,0x8E,0xF6,0x39,0xBC,0xF4 } }; };
template <> struct guid<Windows::Perception::IPerceptionTimestampHelperStatics>{ static constexpr GUID value{ 0x47A611D4,0xA9DF,0x4EDC,{ 0x85,0x5D,0xF4,0xD3,0x39,0xD9,0x67,0xAC } }; };
template <> struct default_interface<Windows::Perception::PerceptionTimestamp>{ using type = Windows::Perception::IPerceptionTimestamp; };

template <typename D>
struct consume_Windows_Perception_IPerceptionTimestamp
{
    Windows::Foundation::DateTime TargetTime() const;
    Windows::Foundation::TimeSpan PredictionAmount() const;
};
template <> struct consume<Windows::Perception::IPerceptionTimestamp> { template <typename D> using type = consume_Windows_Perception_IPerceptionTimestamp<D>; };

template <typename D>
struct consume_Windows_Perception_IPerceptionTimestampHelperStatics
{
    Windows::Perception::PerceptionTimestamp FromHistoricalTargetTime(Windows::Foundation::DateTime const& targetTime) const;
};
template <> struct consume<Windows::Perception::IPerceptionTimestampHelperStatics> { template <typename D> using type = consume_Windows_Perception_IPerceptionTimestampHelperStatics<D>; };

template <> struct abi<Windows::Perception::IPerceptionTimestamp>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_PredictionAmount(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::Perception::IPerceptionTimestampHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromHistoricalTargetTime(abi_t<Windows::Foundation::DateTime> targetTime, ::IUnknown** value) = 0;
};};

}
