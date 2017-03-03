// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::ApplicationModel {

struct IApplicationProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IApplicationProfileStatics>
{
    IApplicationProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
