// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.Automation.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::Automation::Core {

template <typename D>
struct WINRT_EBO impl_ICorePerceptionAutomationStatics
{
    void SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider) const;
};

struct ICorePerceptionAutomationStatics :
    Windows::IInspectable,
    impl::consume<ICorePerceptionAutomationStatics>
{
    ICorePerceptionAutomationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICorePerceptionAutomationStatics>(m_ptr); }
};

}

}
