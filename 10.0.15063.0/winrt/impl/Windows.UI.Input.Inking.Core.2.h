// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

struct WINRT_EBO CoreInkIndependentInputSource :
    Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource
{
    CoreInkIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

struct WINRT_EBO CoreWetStrokeUpdateEventArgs :
    Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs
{
    CoreWetStrokeUpdateEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreWetStrokeUpdateSource :
    Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource
{
    CoreWetStrokeUpdateSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

}
