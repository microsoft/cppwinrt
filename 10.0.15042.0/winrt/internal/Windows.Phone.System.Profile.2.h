// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.Profile.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::System::Profile {

struct IRetailModeStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IRetailModeStatics>
{
    IRetailModeStatics(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] IRetailModeStatics;

}

}
