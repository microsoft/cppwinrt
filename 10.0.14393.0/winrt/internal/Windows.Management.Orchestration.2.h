// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Orchestration.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Orchestration {

template <typename D>
struct WINRT_EBO impl_ICurrentAppOrchestration
{
    Windows::Management::Orchestration::SingleAppModeContext StartSingleAppMode() const;
};

template <typename D>
struct WINRT_EBO impl_ICurrentAppOrchestrationStatics
{
    Windows::Management::Orchestration::CurrentAppOrchestration GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_ISingleAppModeContext
{
};

struct ICurrentAppOrchestration :
    Windows::IInspectable,
    impl::consume<ICurrentAppOrchestration>
{
    ICurrentAppOrchestration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentAppOrchestration>(m_ptr); }
};

struct ICurrentAppOrchestrationStatics :
    Windows::IInspectable,
    impl::consume<ICurrentAppOrchestrationStatics>
{
    ICurrentAppOrchestrationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentAppOrchestrationStatics>(m_ptr); }
};

struct ISingleAppModeContext :
    Windows::IInspectable,
    impl::consume<ISingleAppModeContext>,
    impl::require<ISingleAppModeContext, Windows::Foundation::IClosable>
{
    ISingleAppModeContext(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISingleAppModeContext>(m_ptr); }
};

}

}
