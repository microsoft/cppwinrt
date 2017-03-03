// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Inking {

struct IInkDrawingAttributes;
struct IInkDrawingAttributes2;
struct IInkDrawingAttributes3;
struct IInkDrawingAttributes4;
struct IInkDrawingAttributesPencilProperties;
struct IInkDrawingAttributesStatics;
struct IInkInputProcessingConfiguration;
struct IInkManager;
struct IInkPoint;
struct IInkPoint2;
struct IInkPointFactory;
struct IInkPointFactory2;
struct IInkPresenter;
struct IInkPresenter2;
struct IInkPresenterProtractor;
struct IInkPresenterProtractorFactory;
struct IInkPresenterRuler;
struct IInkPresenterRuler2;
struct IInkPresenterRulerFactory;
struct IInkPresenterStencil;
struct IInkRecognitionResult;
struct IInkRecognizer;
struct IInkRecognizerContainer;
struct IInkStroke;
struct IInkStroke2;
struct IInkStroke3;
struct IInkStrokeBuilder;
struct IInkStrokeBuilder2;
struct IInkStrokeBuilder3;
struct IInkStrokeContainer;
struct IInkStrokeContainer2;
struct IInkStrokeContainer3;
struct IInkStrokeInput;
struct IInkStrokeRenderingSegment;
struct IInkStrokesCollectedEventArgs;
struct IInkStrokesErasedEventArgs;
struct IInkSynchronizer;
struct IInkUnprocessedInput;
struct InkDrawingAttributes;
struct InkDrawingAttributesPencilProperties;
struct InkInputProcessingConfiguration;
struct InkManager;
struct InkPoint;
struct InkPresenter;
struct InkPresenterProtractor;
struct InkPresenterRuler;
struct InkRecognitionResult;
struct InkRecognizer;
struct InkRecognizerContainer;
struct InkStroke;
struct InkStrokeBuilder;
struct InkStrokeContainer;
struct InkStrokeInput;
struct InkStrokeRenderingSegment;
struct InkStrokesCollectedEventArgs;
struct InkStrokesErasedEventArgs;
struct InkSynchronizer;
struct InkUnprocessedInput;

}

namespace Windows::UI::Input::Inking {

struct IInkDrawingAttributes;
struct IInkDrawingAttributes2;
struct IInkDrawingAttributes3;
struct IInkDrawingAttributes4;
struct IInkDrawingAttributesPencilProperties;
struct IInkDrawingAttributesStatics;
struct IInkInputProcessingConfiguration;
struct IInkManager;
struct IInkPoint;
struct IInkPoint2;
struct IInkPointFactory;
struct IInkPointFactory2;
struct IInkPresenter;
struct IInkPresenter2;
struct IInkPresenterProtractor;
struct IInkPresenterProtractorFactory;
struct IInkPresenterRuler;
struct IInkPresenterRuler2;
struct IInkPresenterRulerFactory;
struct IInkPresenterStencil;
struct IInkRecognitionResult;
struct IInkRecognizer;
struct IInkRecognizerContainer;
struct IInkStroke;
struct IInkStroke2;
struct IInkStroke3;
struct IInkStrokeBuilder;
struct IInkStrokeBuilder2;
struct IInkStrokeBuilder3;
struct IInkStrokeContainer;
struct IInkStrokeContainer2;
struct IInkStrokeContainer3;
struct IInkStrokeInput;
struct IInkStrokeRenderingSegment;
struct IInkStrokesCollectedEventArgs;
struct IInkStrokesErasedEventArgs;
struct IInkSynchronizer;
struct IInkUnprocessedInput;
struct InkDrawingAttributes;
struct InkDrawingAttributesPencilProperties;
struct InkInputProcessingConfiguration;
struct InkManager;
struct InkPoint;
struct InkPresenter;
struct InkPresenterProtractor;
struct InkPresenterRuler;
struct InkRecognitionResult;
struct InkRecognizer;
struct InkRecognizerContainer;
struct InkStroke;
struct InkStrokeBuilder;
struct InkStrokeContainer;
struct InkStrokeInput;
struct InkStrokeRenderingSegment;
struct InkStrokesCollectedEventArgs;
struct InkStrokesErasedEventArgs;
struct InkSynchronizer;
struct InkUnprocessedInput;

}

namespace Windows::UI::Input::Inking {

template <typename T> struct impl_IInkDrawingAttributes;
template <typename T> struct impl_IInkDrawingAttributes2;
template <typename T> struct impl_IInkDrawingAttributes3;
template <typename T> struct impl_IInkDrawingAttributes4;
template <typename T> struct impl_IInkDrawingAttributesPencilProperties;
template <typename T> struct impl_IInkDrawingAttributesStatics;
template <typename T> struct impl_IInkInputProcessingConfiguration;
template <typename T> struct impl_IInkManager;
template <typename T> struct impl_IInkPoint;
template <typename T> struct impl_IInkPoint2;
template <typename T> struct impl_IInkPointFactory;
template <typename T> struct impl_IInkPointFactory2;
template <typename T> struct impl_IInkPresenter;
template <typename T> struct impl_IInkPresenter2;
template <typename T> struct impl_IInkPresenterProtractor;
template <typename T> struct impl_IInkPresenterProtractorFactory;
template <typename T> struct impl_IInkPresenterRuler;
template <typename T> struct impl_IInkPresenterRuler2;
template <typename T> struct impl_IInkPresenterRulerFactory;
template <typename T> struct impl_IInkPresenterStencil;
template <typename T> struct impl_IInkRecognitionResult;
template <typename T> struct impl_IInkRecognizer;
template <typename T> struct impl_IInkRecognizerContainer;
template <typename T> struct impl_IInkStroke;
template <typename T> struct impl_IInkStroke2;
template <typename T> struct impl_IInkStroke3;
template <typename T> struct impl_IInkStrokeBuilder;
template <typename T> struct impl_IInkStrokeBuilder2;
template <typename T> struct impl_IInkStrokeBuilder3;
template <typename T> struct impl_IInkStrokeContainer;
template <typename T> struct impl_IInkStrokeContainer2;
template <typename T> struct impl_IInkStrokeContainer3;
template <typename T> struct impl_IInkStrokeInput;
template <typename T> struct impl_IInkStrokeRenderingSegment;
template <typename T> struct impl_IInkStrokesCollectedEventArgs;
template <typename T> struct impl_IInkStrokesErasedEventArgs;
template <typename T> struct impl_IInkSynchronizer;
template <typename T> struct impl_IInkUnprocessedInput;

}

namespace Windows::UI::Input::Inking {

enum class InkDrawingAttributesKind
{
    Default = 0,
    Pencil = 1,
};

enum class InkHighContrastAdjustment
{
    UseSystemColorsWhenNecessary = 0,
    UseSystemColors = 1,
    UseOriginalColors = 2,
};

enum class InkInputProcessingMode
{
    None = 0,
    Inking = 1,
    Erasing = 2,
};

enum class InkInputRightDragAction
{
    LeaveUnprocessed = 0,
    AllowProcessing = 1,
};

enum class InkManipulationMode
{
    Inking = 0,
    Erasing = 1,
    Selecting = 2,
};

enum class InkPersistenceFormat
{
    GifWithEmbeddedIsf = 0,
    Isf = 1,
};

enum class InkPresenterPredefinedConfiguration
{
    SimpleSinglePointer = 0,
    SimpleMultiplePointer = 1,
};

enum class InkPresenterStencilKind
{
    Other = 0,
    Ruler = 1,
    Protractor = 2,
};

enum class InkRecognitionTarget
{
    All = 0,
    Selected = 1,
    Recent = 2,
};

enum class PenTipShape
{
    Circle = 0,
    Rectangle = 1,
};

}

}
