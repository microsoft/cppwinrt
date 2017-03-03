// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.Inking.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Input::Inking {

struct WINRT_EBO InkDrawingAttributes :
    Windows::UI::Input::Inking::IInkDrawingAttributes,
    impl::require<InkDrawingAttributes, Windows::UI::Input::Inking::IInkDrawingAttributes2, Windows::UI::Input::Inking::IInkDrawingAttributes3, Windows::UI::Input::Inking::IInkDrawingAttributes4>
{
    InkDrawingAttributes(std::nullptr_t) noexcept {}
    InkDrawingAttributes();
    static Windows::UI::Input::Inking::InkDrawingAttributes CreateForPencil();
};

struct WINRT_EBO InkDrawingAttributesPencilProperties :
    Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties
{
    InkDrawingAttributesPencilProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkInputProcessingConfiguration :
    Windows::UI::Input::Inking::IInkInputProcessingConfiguration
{
    InkInputProcessingConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkManager :
    Windows::UI::Input::Inking::IInkManager
{
    InkManager(std::nullptr_t) noexcept {}
    InkManager();
    using impl_IInkManager::RecognizeAsync;
    using impl_IInkRecognizerContainer::RecognizeAsync;
};

struct WINRT_EBO InkPoint :
    Windows::UI::Input::Inking::IInkPoint,
    impl::require<InkPoint, Windows::UI::Input::Inking::IInkPoint2>
{
    InkPoint(std::nullptr_t) noexcept {}
    InkPoint(const Windows::Foundation::Point & position, float pressure, float tiltX, float tiltY, uint64_t timestamp);
    InkPoint(const Windows::Foundation::Point & position, float pressure);
};

struct WINRT_EBO InkPresenter :
    Windows::UI::Input::Inking::IInkPresenter,
    impl::require<InkPresenter, Windows::UI::Input::Inking::IInkPresenter2>
{
    InkPresenter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkPresenterProtractor :
    Windows::UI::Input::Inking::IInkPresenterProtractor
{
    InkPresenterProtractor(std::nullptr_t) noexcept {}
    InkPresenterProtractor(const Windows::UI::Input::Inking::InkPresenter & inkPresenter);
};

struct WINRT_EBO InkPresenterRuler :
    Windows::UI::Input::Inking::IInkPresenterRuler,
    impl::require<InkPresenterRuler, Windows::UI::Input::Inking::IInkPresenterRuler2>
{
    InkPresenterRuler(std::nullptr_t) noexcept {}
    InkPresenterRuler(const Windows::UI::Input::Inking::InkPresenter & inkPresenter);
};

struct WINRT_EBO InkRecognitionResult :
    Windows::UI::Input::Inking::IInkRecognitionResult
{
    InkRecognitionResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkRecognizer :
    Windows::UI::Input::Inking::IInkRecognizer
{
    InkRecognizer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkRecognizerContainer :
    Windows::UI::Input::Inking::IInkRecognizerContainer
{
    InkRecognizerContainer(std::nullptr_t) noexcept {}
    InkRecognizerContainer();
};

struct WINRT_EBO InkStroke :
    Windows::UI::Input::Inking::IInkStroke,
    impl::require<InkStroke, Windows::UI::Input::Inking::IInkStroke2, Windows::UI::Input::Inking::IInkStroke3>
{
    InkStroke(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkStrokeBuilder :
    Windows::UI::Input::Inking::IInkStrokeBuilder,
    impl::require<InkStrokeBuilder, Windows::UI::Input::Inking::IInkStrokeBuilder2, Windows::UI::Input::Inking::IInkStrokeBuilder3>
{
    InkStrokeBuilder(std::nullptr_t) noexcept {}
    InkStrokeBuilder();
    using impl_IInkStrokeBuilder2::CreateStrokeFromInkPoints;
    using impl_IInkStrokeBuilder3::CreateStrokeFromInkPoints;
};

struct WINRT_EBO InkStrokeContainer :
    Windows::UI::Input::Inking::IInkStrokeContainer,
    impl::require<InkStrokeContainer, Windows::UI::Input::Inking::IInkStrokeContainer2, Windows::UI::Input::Inking::IInkStrokeContainer3>
{
    InkStrokeContainer(std::nullptr_t) noexcept {}
    InkStrokeContainer();
    using impl_IInkStrokeContainer::SaveAsync;
    using impl_IInkStrokeContainer3::SaveAsync;
};

struct WINRT_EBO InkStrokeInput :
    Windows::UI::Input::Inking::IInkStrokeInput
{
    InkStrokeInput(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkStrokeRenderingSegment :
    Windows::UI::Input::Inking::IInkStrokeRenderingSegment
{
    InkStrokeRenderingSegment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkStrokesCollectedEventArgs :
    Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs
{
    InkStrokesCollectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkStrokesErasedEventArgs :
    Windows::UI::Input::Inking::IInkStrokesErasedEventArgs
{
    InkStrokesErasedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkSynchronizer :
    Windows::UI::Input::Inking::IInkSynchronizer
{
    InkSynchronizer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InkUnprocessedInput :
    Windows::UI::Input::Inking::IInkUnprocessedInput
{
    InkUnprocessedInput(std::nullptr_t) noexcept {}
};

}

}
