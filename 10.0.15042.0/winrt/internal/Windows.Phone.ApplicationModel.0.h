// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::ApplicationModel {

struct IApplicationProfileStatics;

}

namespace Windows::Phone::ApplicationModel {

struct IApplicationProfileStatics;
struct ApplicationProfile;

}

namespace Windows::Phone::ApplicationModel {

template <typename T> struct impl_IApplicationProfileStatics;

}

namespace Windows::Phone::ApplicationModel {

enum class ApplicationProfileModes : unsigned
{
    Default = 0x0,
    Alternate = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(ApplicationProfileModes)

}

}
