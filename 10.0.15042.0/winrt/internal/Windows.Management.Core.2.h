// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Core {

struct IApplicationDataManager :
    Windows::Foundation::IInspectable,
    impl::consume<IApplicationDataManager>
{
    IApplicationDataManager(std::nullptr_t = nullptr) noexcept {}
};

struct IApplicationDataManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IApplicationDataManagerStatics>
{
    IApplicationDataManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
