// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.Profile.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::System::Profile {

template <typename D>
struct WINRT_EBO impl_IRetailModeStatics
{
    bool RetailModeEnabled() const;
};

struct IRetailModeStatics :
    Windows::IInspectable,
    impl::consume<IRetailModeStatics>
{
    IRetailModeStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRetailModeStatics>(m_ptr); }
};

}

}
