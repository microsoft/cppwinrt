// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Perception.Automation.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core {

struct WINRT_EBO ICorePerceptionAutomationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICorePerceptionAutomationStatics>
{
    ICorePerceptionAutomationStatics(std::nullptr_t = nullptr) noexcept {}
};

}
