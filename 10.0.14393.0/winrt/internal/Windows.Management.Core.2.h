// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Core {

template <typename D>
struct WINRT_EBO impl_IApplicationDataManager
{
};

template <typename D>
struct WINRT_EBO impl_IApplicationDataManagerStatics
{
    Windows::Storage::ApplicationData CreateForPackageFamily(hstring_ref packageFamilyName) const;
};

struct IApplicationDataManager :
    Windows::IInspectable,
    impl::consume<IApplicationDataManager>
{
    IApplicationDataManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationDataManager>(m_ptr); }
};

struct IApplicationDataManagerStatics :
    Windows::IInspectable,
    impl::consume<IApplicationDataManagerStatics>
{
    IApplicationDataManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationDataManagerStatics>(m_ptr); }
};

}

}
