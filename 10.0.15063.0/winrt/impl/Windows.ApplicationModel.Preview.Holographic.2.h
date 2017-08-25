// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic {

struct HolographicApplicationPreview
{
    HolographicApplicationPreview() = delete;
    static bool IsCurrentViewPresentedOnHolographicDisplay();
    static bool IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs);
};

}
