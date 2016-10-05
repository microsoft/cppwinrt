// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Input::Inking {

struct IInkDrawingAttributes;
struct IInkDrawingAttributes2;
struct IInkDrawingAttributes3;
struct IInkDrawingAttributesPencilProperties;
struct IInkDrawingAttributesStatics;
struct IInkInputProcessingConfiguration;
struct IInkManager;
struct IInkPoint;
struct IInkPointFactory;
struct IInkPresenter;
struct IInkPresenterRuler;
struct IInkPresenterRulerFactory;
struct IInkPresenterStencil;
struct IInkRecognitionResult;
struct IInkRecognizer;
struct IInkRecognizerContainer;
struct IInkStroke;
struct IInkStroke2;
struct IInkStrokeBuilder;
struct IInkStrokeBuilder2;
struct IInkStrokeContainer;
struct IInkStrokeContainer2;
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
struct IInkDrawingAttributesPencilProperties;
struct IInkDrawingAttributesStatics;
struct IInkInputProcessingConfiguration;
struct IInkManager;
struct IInkPoint;
struct IInkPointFactory;
struct IInkPresenter;
struct IInkPresenterRuler;
struct IInkPresenterRulerFactory;
struct IInkPresenterStencil;
struct IInkRecognitionResult;
struct IInkRecognizer;
struct IInkRecognizerContainer;
struct IInkStroke;
struct IInkStroke2;
struct IInkStrokeBuilder;
struct IInkStrokeBuilder2;
struct IInkStrokeContainer;
struct IInkStrokeContainer2;
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

enum class InkDrawingAttributesKind
{
    Default = 0,
    Pencil = 1,
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

enum class InkPresenterPredefinedConfiguration
{
    SimpleSinglePointer = 0,
    SimpleMultiplePointer = 1,
};

enum class InkPresenterStencilKind
{
    Other = 0,
    Ruler = 1,
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
