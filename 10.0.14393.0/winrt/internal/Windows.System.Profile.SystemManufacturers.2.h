// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Profile.SystemManufacturers.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

template <typename D>
struct WINRT_EBO impl_ISmbiosInformationStatics
{
    hstring SerialNumber() const;
};

struct ISmbiosInformationStatics :
    Windows::IInspectable,
    impl::consume<ISmbiosInformationStatics>
{
    ISmbiosInformationStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISmbiosInformationStatics>(m_ptr); }
};

}

}
