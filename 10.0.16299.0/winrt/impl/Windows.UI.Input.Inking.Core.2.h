// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

struct WINRT_EBO CoreIncrementalInkStroke :
    Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke
{
    CoreIncrementalInkStroke(std::nullptr_t) noexcept {}
    CoreIncrementalInkStroke(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform);
};

struct WINRT_EBO CoreInkIndependentInputSource :
    Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource
{
    CoreInkIndependentInputSource(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter);
};

struct WINRT_EBO CoreInkPresenterHost :
    Windows::UI::Input::Inking::Core::ICoreInkPresenterHost
{
    CoreInkPresenterHost(std::nullptr_t) noexcept {}
    CoreInkPresenterHost();
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
