// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Adc::Provider {

struct IAdcControllerProvider;
struct IAdcProvider;

}

namespace Windows::Devices::Adc::Provider {

struct IAdcControllerProvider;
struct IAdcProvider;

}

namespace Windows::Devices::Adc::Provider {

enum class ProviderAdcChannelMode
{
    SingleEnded = 0,
    Differential = 1,
};

}

}
