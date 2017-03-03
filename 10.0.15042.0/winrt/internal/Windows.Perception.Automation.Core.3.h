// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Perception.Automation.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Perception::Automation::Core {

struct CorePerceptionAutomation
{
    CorePerceptionAutomation() = delete;
    static void SetActivationFactoryProvider(const Windows::Foundation::IGetActivationFactory & provider);
};

}

}
