// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct IGetActivationFactory;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core {

struct ICorePerceptionAutomationStatics;
struct CorePerceptionAutomation;

}

namespace winrt::impl {

template <> struct category<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Automation::Core::CorePerceptionAutomation>{ using type = class_category; };
template <> struct name<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ static constexpr auto & value{ L"Windows.Perception.Automation.Core.ICorePerceptionAutomationStatics" }; };
template <> struct name<Windows::Perception::Automation::Core::CorePerceptionAutomation>{ static constexpr auto & value{ L"Windows.Perception.Automation.Core.CorePerceptionAutomation" }; };
template <> struct guid<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ static constexpr GUID value{ 0x0BB04541,0x4CE2,0x4923,{ 0x9A,0x76,0x81,0x87,0xEC,0xC5,0x91,0x12 } }; };

template <typename D>
struct consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics
{
    void SetActivationFactoryProvider(Windows::Foundation::IGetActivationFactory const& provider) const;
};
template <> struct consume<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics> { template <typename D> using type = consume_Windows_Perception_Automation_Core_ICorePerceptionAutomationStatics<D>; };

template <> struct abi<Windows::Perception::Automation::Core::ICorePerceptionAutomationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetActivationFactoryProvider(::IUnknown* provider) = 0;
};};

}
