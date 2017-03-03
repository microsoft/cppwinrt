// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Metadata {

struct IApiInformationStatics;

}

namespace Windows::Foundation::Metadata {

struct IApiInformationStatics;
struct ApiInformation;

}

namespace Windows::Foundation::Metadata {

template <typename T> struct impl_IApiInformationStatics;

}

namespace Windows::Foundation::Metadata {

enum class FeatureStage
{
    AlwaysDisabled = 0,
    DisabledByDefault = 1,
    EnabledByDefault = 2,
    AlwaysEnabled = 3,
};

enum class GCPressureAmount
{
    Low = 0,
    Medium = 1,
    High = 2,
};

}

}
