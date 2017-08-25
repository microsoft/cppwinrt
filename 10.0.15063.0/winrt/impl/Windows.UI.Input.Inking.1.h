// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Input.0.h"
#include "winrt/impl/Windows.UI.Input.Inking.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

struct WINRT_EBO IInkDrawingAttributes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes>
{
    IInkDrawingAttributes(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkDrawingAttributes2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes2>
{
    IInkDrawingAttributes2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkDrawingAttributes3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes3>
{
    IInkDrawingAttributes3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkDrawingAttributes4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributes4>
{
    IInkDrawingAttributes4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkDrawingAttributesPencilProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributesPencilProperties>
{
    IInkDrawingAttributesPencilProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkDrawingAttributesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkDrawingAttributesStatics>
{
    IInkDrawingAttributesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkInputProcessingConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkInputProcessingConfiguration>
{
    IInkInputProcessingConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkManager>,
    impl::require<IInkManager, Windows::UI::Input::Inking::IInkRecognizerContainer, Windows::UI::Input::Inking::IInkStrokeContainer>
{
    IInkManager(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IInkManager, Windows::UI::Input::Inking::IInkRecognizerContainer>::RecognizeAsync;
    using impl::consume_t<IInkManager, Windows::UI::Input::Inking::IInkManager>::RecognizeAsync;
};

struct WINRT_EBO IInkPoint :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPoint>
{
    IInkPoint(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPoint2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPoint2>
{
    IInkPoint2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPointFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPointFactory>
{
    IInkPointFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPointFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPointFactory2>
{
    IInkPointFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenter>
{
    IInkPresenter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenter2>,
    impl::require<IInkPresenter2, Windows::UI::Input::Inking::IInkPresenter>
{
    IInkPresenter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterProtractor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterProtractor>,
    impl::require<IInkPresenterProtractor, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    IInkPresenterProtractor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterProtractorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterProtractorFactory>
{
    IInkPresenterProtractorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterRuler :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRuler>,
    impl::require<IInkPresenterRuler, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    IInkPresenterRuler(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterRuler2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRuler2>
{
    IInkPresenterRuler2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterRulerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterRulerFactory>
{
    IInkPresenterRulerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkPresenterStencil :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkPresenterStencil>
{
    IInkPresenterStencil(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkRecognitionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognitionResult>
{
    IInkRecognitionResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkRecognizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognizer>
{
    IInkRecognizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkRecognizerContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkRecognizerContainer>
{
    IInkRecognizerContainer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStroke :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke>
{
    IInkStroke(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStroke2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke2>
{
    IInkStroke2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStroke3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStroke3>
{
    IInkStroke3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder>
{
    IInkStrokeBuilder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeBuilder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder2>
{
    IInkStrokeBuilder2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeBuilder3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeBuilder3>
{
    IInkStrokeBuilder3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer>
{
    IInkStrokeContainer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeContainer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer2>
{
    IInkStrokeContainer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeContainer3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeContainer3>
{
    IInkStrokeContainer3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeInput>
{
    IInkStrokeInput(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokeRenderingSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokeRenderingSegment>
{
    IInkStrokeRenderingSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokesCollectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokesCollectedEventArgs>
{
    IInkStrokesCollectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkStrokesErasedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkStrokesErasedEventArgs>
{
    IInkStrokesErasedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkSynchronizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkSynchronizer>
{
    IInkSynchronizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkUnprocessedInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkUnprocessedInput>
{
    IInkUnprocessedInput(std::nullptr_t = nullptr) noexcept {}
};

}
