// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

enum class CoreInputDeviceTypes : unsigned;
struct PointerEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct PointerPoint;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

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

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPoint>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPoint2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPointFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPointFactory2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenter>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenter2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterProtractor>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterRuler>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterRuler2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkPresenterStencil>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkRecognitionResult>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkRecognizer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkRecognizerContainer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStroke>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStroke2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStroke3>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeContainer3>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeInput>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkSynchronizer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::IInkUnprocessedInput>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkManager>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkPoint>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkPresenter>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkPresenterRuler>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkRecognitionResult>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkRecognizer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStroke>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokeContainer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokeInput>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkSynchronizer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Inking::InkDrawingAttributesKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkHighContrastAdjustment>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkInputProcessingMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkInputRightDragAction>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkManipulationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkPersistenceFormat>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkPresenterStencilKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::InkRecognitionTarget>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Inking::PenTipShape>{ using type = enum_category; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributes>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributes" }; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributes2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributes3" }; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributes4" }; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties" }; };
template <> struct name<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics" }; };
template <> struct name<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration" }; };
template <> struct name<Windows::UI::Input::Inking::IInkManager>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkManager" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPoint>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPoint" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPoint2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPoint2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPointFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPointFactory" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPointFactory2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPointFactory2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenter>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenter" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenter2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenter2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterProtractor>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterProtractor" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterRuler>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterRuler" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterRuler2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterRuler2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterRulerFactory" }; };
template <> struct name<Windows::UI::Input::Inking::IInkPresenterStencil>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkPresenterStencil" }; };
template <> struct name<Windows::UI::Input::Inking::IInkRecognitionResult>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkRecognitionResult" }; };
template <> struct name<Windows::UI::Input::Inking::IInkRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkRecognizer" }; };
template <> struct name<Windows::UI::Input::Inking::IInkRecognizerContainer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkRecognizerContainer" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStroke>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStroke" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStroke2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStroke2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStroke3>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStroke3" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeBuilder>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeBuilder" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeBuilder2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeBuilder3" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeContainer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeContainer" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeContainer2>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeContainer2" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeContainer3>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeContainer3" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeInput>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeInput" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::IInkSynchronizer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkSynchronizer" }; };
template <> struct name<Windows::UI::Input::Inking::IInkUnprocessedInput>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.IInkUnprocessedInput" }; };
template <> struct name<Windows::UI::Input::Inking::InkDrawingAttributes>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkDrawingAttributes" }; };
template <> struct name<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties" }; };
template <> struct name<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkInputProcessingConfiguration" }; };
template <> struct name<Windows::UI::Input::Inking::InkManager>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkManager" }; };
template <> struct name<Windows::UI::Input::Inking::InkPoint>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPoint" }; };
template <> struct name<Windows::UI::Input::Inking::InkPresenter>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPresenter" }; };
template <> struct name<Windows::UI::Input::Inking::InkPresenterProtractor>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPresenterProtractor" }; };
template <> struct name<Windows::UI::Input::Inking::InkPresenterRuler>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPresenterRuler" }; };
template <> struct name<Windows::UI::Input::Inking::InkRecognitionResult>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkRecognitionResult" }; };
template <> struct name<Windows::UI::Input::Inking::InkRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkRecognizer" }; };
template <> struct name<Windows::UI::Input::Inking::InkRecognizerContainer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkRecognizerContainer" }; };
template <> struct name<Windows::UI::Input::Inking::InkStroke>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStroke" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokeBuilder>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokeBuilder" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokeContainer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokeContainer" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokeInput>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokeInput" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokeRenderingSegment" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs" }; };
template <> struct name<Windows::UI::Input::Inking::InkSynchronizer>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkSynchronizer" }; };
template <> struct name<Windows::UI::Input::Inking::InkUnprocessedInput>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkUnprocessedInput" }; };
template <> struct name<Windows::UI::Input::Inking::InkDrawingAttributesKind>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkDrawingAttributesKind" }; };
template <> struct name<Windows::UI::Input::Inking::InkHighContrastAdjustment>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkHighContrastAdjustment" }; };
template <> struct name<Windows::UI::Input::Inking::InkInputProcessingMode>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkInputProcessingMode" }; };
template <> struct name<Windows::UI::Input::Inking::InkInputRightDragAction>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkInputRightDragAction" }; };
template <> struct name<Windows::UI::Input::Inking::InkManipulationMode>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkManipulationMode" }; };
template <> struct name<Windows::UI::Input::Inking::InkPersistenceFormat>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPersistenceFormat" }; };
template <> struct name<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPresenterPredefinedConfiguration" }; };
template <> struct name<Windows::UI::Input::Inking::InkPresenterStencilKind>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkPresenterStencilKind" }; };
template <> struct name<Windows::UI::Input::Inking::InkRecognitionTarget>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.InkRecognitionTarget" }; };
template <> struct name<Windows::UI::Input::Inking::PenTipShape>{ static constexpr auto & value{ L"Windows.UI.Input.Inking.PenTipShape" }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributes>{ static constexpr GUID value{ 0x97A2176C,0x6774,0x48AD,{ 0x84,0xF0,0x48,0xF5,0xA9,0xBE,0x74,0xF9 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ static constexpr GUID value{ 0x7CAB6508,0x8EC4,0x42FD,{ 0xA5,0xA5,0xE4,0xB7,0xD1,0xD5,0x31,0x6D } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ static constexpr GUID value{ 0x72020002,0x7D5B,0x4690,{ 0x8A,0xF4,0xE6,0x64,0xCB,0xE2,0xB7,0x4F } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ static constexpr GUID value{ 0xEF65DC25,0x9F19,0x456D,{ 0x91,0xA3,0xBC,0x3A,0x3D,0x91,0xC5,0xFB } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ static constexpr GUID value{ 0x4F2534CB,0x2D86,0x41BB,{ 0xB0,0xE8,0xE4,0xC2,0xA0,0x25,0x3C,0x52 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ static constexpr GUID value{ 0xF731E03F,0x1A65,0x4862,{ 0x96,0xCB,0x6E,0x16,0x65,0xE1,0x7F,0x6D } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ static constexpr GUID value{ 0x2778D85E,0x33CA,0x4B06,{ 0xA6,0xD3,0xAC,0x39,0x45,0x11,0x6D,0x37 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkManager>{ static constexpr GUID value{ 0x4744737D,0x671B,0x4163,{ 0x9C,0x95,0x4E,0x8D,0x7A,0x03,0x5F,0xE1 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPoint>{ static constexpr GUID value{ 0x9F87272B,0x858C,0x46A5,{ 0x9B,0x41,0xD1,0x95,0x97,0x04,0x59,0xFD } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPoint2>{ static constexpr GUID value{ 0xFBA9C3F7,0xAE56,0x4D5C,{ 0xBD,0x2F,0x0A,0xC4,0x5F,0x5E,0x4A,0xF9 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPointFactory>{ static constexpr GUID value{ 0x29E5D51C,0xC98F,0x405D,{ 0x9F,0x3B,0xE5,0x3E,0x31,0x06,0x8D,0x4D } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPointFactory2>{ static constexpr GUID value{ 0xE0145E85,0xDAFF,0x45F2,{ 0xAD,0x69,0x05,0x0D,0x82,0x56,0xA2,0x09 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenter>{ static constexpr GUID value{ 0xA69B70E2,0x887B,0x458F,{ 0xB1,0x73,0x4F,0xE4,0x43,0x89,0x30,0xA3 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenter2>{ static constexpr GUID value{ 0xCF53E612,0x9A34,0x11E6,{ 0x9F,0x33,0xA2,0x4F,0xC0,0xD9,0x64,0x9C } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterProtractor>{ static constexpr GUID value{ 0x7DE3F2AA,0xEF6C,0x4E91,{ 0xA7,0x3B,0x5B,0x70,0xD5,0x6F,0xBD,0x17 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ static constexpr GUID value{ 0x320103C9,0x68FA,0x47E9,{ 0x81,0x27,0x83,0x70,0x71,0x1F,0xC4,0x6C } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterRuler>{ static constexpr GUID value{ 0x6CDA7D5A,0xDEC7,0x4DD7,{ 0x87,0x7A,0x21,0x33,0xF1,0x83,0xD4,0x8A } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterRuler2>{ static constexpr GUID value{ 0x45130DC1,0xBC61,0x44D4,{ 0xA4,0x23,0x54,0x71,0x2A,0xE6,0x71,0xC4 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ static constexpr GUID value{ 0x34361BEB,0x9001,0x4A4B,{ 0xA6,0x90,0x69,0xDB,0xAF,0x63,0xE5,0x01 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkPresenterStencil>{ static constexpr GUID value{ 0x30D12D6D,0x3E06,0x4D02,{ 0xB1,0x16,0x27,0x7F,0xB5,0xD8,0xAD,0xDC } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkRecognitionResult>{ static constexpr GUID value{ 0x36461A94,0x5068,0x40EF,{ 0x8A,0x05,0x2C,0x2F,0xB6,0x09,0x08,0xA2 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkRecognizer>{ static constexpr GUID value{ 0x077CCEA3,0x904D,0x442A,{ 0xB1,0x51,0xAA,0xCA,0x36,0x31,0xC4,0x3B } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkRecognizerContainer>{ static constexpr GUID value{ 0xA74D9A31,0x8047,0x4698,{ 0xA9,0x12,0xF8,0x2A,0x50,0x85,0x01,0x2F } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStroke>{ static constexpr GUID value{ 0x15144D60,0xCCE3,0x4FCF,{ 0x9D,0x52,0x11,0x51,0x8A,0xB6,0xAF,0xD4 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStroke2>{ static constexpr GUID value{ 0x5DB9E4F4,0xBAFA,0x4DE1,{ 0x89,0xD3,0x20,0x1B,0x1E,0xD7,0xD8,0x9B } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStroke3>{ static constexpr GUID value{ 0x4A807374,0x9499,0x411D,{ 0xA1,0xC4,0x68,0x85,0x5D,0x03,0xD6,0x5F } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeBuilder>{ static constexpr GUID value{ 0x82BBD1DC,0x1C63,0x41DC,{ 0x9E,0x07,0x4B,0x4A,0x70,0xCE,0xD8,0x01 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ static constexpr GUID value{ 0xBD82BC27,0x731F,0x4CBC,{ 0xBB,0xBF,0x6D,0x46,0x80,0x44,0xF1,0xE5 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ static constexpr GUID value{ 0xB2C71FCD,0x5472,0x46B1,{ 0xA8,0x1D,0xC3,0x7A,0x3D,0x16,0x94,0x41 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeContainer>{ static constexpr GUID value{ 0x22ACCBC6,0xFAA9,0x4F14,{ 0xB6,0x8C,0xF6,0xCE,0xE6,0x70,0xAE,0x16 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeContainer2>{ static constexpr GUID value{ 0x8901D364,0xDA36,0x4BCF,{ 0x9E,0x5C,0xD1,0x95,0x82,0x59,0x95,0xB4 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeContainer3>{ static constexpr GUID value{ 0x3D07BEA5,0xBAEA,0x4C82,{ 0xA7,0x19,0x7B,0x83,0xDA,0x10,0x67,0xD2 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeInput>{ static constexpr GUID value{ 0xCF2FFE7B,0x5E10,0x43C6,{ 0xA0,0x80,0x88,0xF2,0x6E,0x1D,0xC6,0x7D } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ static constexpr GUID value{ 0x68510F1F,0x88E3,0x477A,{ 0xA2,0xFA,0x56,0x9F,0x5F,0x1F,0x9B,0xD5 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ static constexpr GUID value{ 0xC4F3F229,0x1938,0x495C,{ 0xB4,0xD9,0x6D,0xE4,0xB0,0x8D,0x48,0x11 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ static constexpr GUID value{ 0xA4216A22,0x1503,0x4EBF,{ 0x8F,0xF5,0x2D,0xE8,0x45,0x84,0xA8,0xAA } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkSynchronizer>{ static constexpr GUID value{ 0x9B9EA160,0xAE9B,0x45F9,{ 0x84,0x07,0x4B,0x49,0x3B,0x16,0x36,0x61 } }; };
template <> struct guid<Windows::UI::Input::Inking::IInkUnprocessedInput>{ static constexpr GUID value{ 0xDB4445E0,0x8398,0x4921,{ 0xAC,0x3B,0xAB,0x97,0x8C,0x5B,0xA2,0x56 } }; };
template <> struct default_interface<Windows::UI::Input::Inking::InkDrawingAttributes>{ using type = Windows::UI::Input::Inking::IInkDrawingAttributes; };
template <> struct default_interface<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>{ using type = Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties; };
template <> struct default_interface<Windows::UI::Input::Inking::InkInputProcessingConfiguration>{ using type = Windows::UI::Input::Inking::IInkInputProcessingConfiguration; };
template <> struct default_interface<Windows::UI::Input::Inking::InkManager>{ using type = Windows::UI::Input::Inking::IInkManager; };
template <> struct default_interface<Windows::UI::Input::Inking::InkPoint>{ using type = Windows::UI::Input::Inking::IInkPoint; };
template <> struct default_interface<Windows::UI::Input::Inking::InkPresenter>{ using type = Windows::UI::Input::Inking::IInkPresenter; };
template <> struct default_interface<Windows::UI::Input::Inking::InkPresenterProtractor>{ using type = Windows::UI::Input::Inking::IInkPresenterProtractor; };
template <> struct default_interface<Windows::UI::Input::Inking::InkPresenterRuler>{ using type = Windows::UI::Input::Inking::IInkPresenterRuler; };
template <> struct default_interface<Windows::UI::Input::Inking::InkRecognitionResult>{ using type = Windows::UI::Input::Inking::IInkRecognitionResult; };
template <> struct default_interface<Windows::UI::Input::Inking::InkRecognizer>{ using type = Windows::UI::Input::Inking::IInkRecognizer; };
template <> struct default_interface<Windows::UI::Input::Inking::InkRecognizerContainer>{ using type = Windows::UI::Input::Inking::IInkRecognizerContainer; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStroke>{ using type = Windows::UI::Input::Inking::IInkStroke; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeBuilder>{ using type = Windows::UI::Input::Inking::IInkStrokeBuilder; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeContainer>{ using type = Windows::UI::Input::Inking::IInkStrokeContainer; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeInput>{ using type = Windows::UI::Input::Inking::IInkStrokeInput; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokeRenderingSegment>{ using type = Windows::UI::Input::Inking::IInkStrokeRenderingSegment; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>{ using type = Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs; };
template <> struct default_interface<Windows::UI::Input::Inking::InkStrokesErasedEventArgs>{ using type = Windows::UI::Input::Inking::IInkStrokesErasedEventArgs; };
template <> struct default_interface<Windows::UI::Input::Inking::InkSynchronizer>{ using type = Windows::UI::Input::Inking::IInkSynchronizer; };
template <> struct default_interface<Windows::UI::Input::Inking::InkUnprocessedInput>{ using type = Windows::UI::Input::Inking::IInkUnprocessedInput; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::UI::Input::Inking::PenTipShape PenTip() const;
    void PenTip(Windows::UI::Input::Inking::PenTipShape const& value) const;
    Windows::Foundation::Size Size() const;
    void Size(Windows::Foundation::Size const& value) const;
    bool IgnorePressure() const;
    void IgnorePressure(bool value) const;
    bool FitToCurve() const;
    void FitToCurve(bool value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes2
{
    Windows::Foundation::Numerics::float3x2 PenTipTransform() const;
    void PenTipTransform(Windows::Foundation::Numerics::float3x2 const& value) const;
    bool DrawAsHighlighter() const;
    void DrawAsHighlighter(bool value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes3
{
    Windows::UI::Input::Inking::InkDrawingAttributesKind Kind() const;
    Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties PencilProperties() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes3> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes3<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributes4
{
    bool IgnoreTilt() const;
    void IgnoreTilt(bool value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributes4> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributes4<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties
{
    double Opacity() const;
    void Opacity(double value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics
{
    Windows::UI::Input::Inking::InkDrawingAttributes CreateForPencil() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkDrawingAttributesStatics> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration
{
    Windows::UI::Input::Inking::InkInputProcessingMode Mode() const;
    void Mode(Windows::UI::Input::Inking::InkInputProcessingMode const& value) const;
    Windows::UI::Input::Inking::InkInputRightDragAction RightDragAction() const;
    void RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction const& value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkInputProcessingConfiguration> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkManager
{
    Windows::UI::Input::Inking::InkManipulationMode Mode() const;
    void Mode(Windows::UI::Input::Inking::InkManipulationMode const& value) const;
    void ProcessPointerDown(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    Windows::Foundation::IInspectable ProcessPointerUpdate(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    Windows::Foundation::Rect ProcessPointerUp(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    void SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> RecognizeAsync(Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkManager> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkManager<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPoint
{
    Windows::Foundation::Point Position() const;
    float Pressure() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPoint> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPoint2
{
    float TiltX() const;
    float TiltY() const;
    uint64_t Timestamp() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPoint2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPoint2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPointFactory
{
    Windows::UI::Input::Inking::InkPoint CreateInkPoint(Windows::Foundation::Point const& position, float pressure) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPointFactory> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPointFactory2
{
    Windows::UI::Input::Inking::InkPoint CreateInkPointWithTiltAndTimestamp(Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPointFactory2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPointFactory2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenter
{
    bool IsInputEnabled() const;
    void IsInputEnabled(bool value) const;
    Windows::UI::Core::CoreInputDeviceTypes InputDeviceTypes() const;
    void InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes const& value) const;
    Windows::UI::Input::Inking::InkUnprocessedInput UnprocessedInput() const;
    Windows::UI::Input::Inking::InkStrokeInput StrokeInput() const;
    Windows::UI::Input::Inking::InkInputProcessingConfiguration InputProcessingConfiguration() const;
    Windows::UI::Input::Inking::InkStrokeContainer StrokeContainer() const;
    void StrokeContainer(Windows::UI::Input::Inking::InkStrokeContainer const& value) const;
    Windows::UI::Input::Inking::InkDrawingAttributes CopyDefaultDrawingAttributes() const;
    void UpdateDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
    Windows::UI::Input::Inking::InkSynchronizer ActivateCustomDrying() const;
    void SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration const& value) const;
    event_token StrokesCollected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
    using StrokesCollected_revoker = event_revoker<Windows::UI::Input::Inking::IInkPresenter>;
    StrokesCollected_revoker StrokesCollected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const;
    void StrokesCollected(event_token const& cookie) const;
    event_token StrokesErased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
    using StrokesErased_revoker = event_revoker<Windows::UI::Input::Inking::IInkPresenter>;
    StrokesErased_revoker StrokesErased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const;
    void StrokesErased(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenter> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenter2
{
    Windows::UI::Input::Inking::InkHighContrastAdjustment HighContrastAdjustment() const;
    void HighContrastAdjustment(Windows::UI::Input::Inking::InkHighContrastAdjustment const& value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenter2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenter2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterProtractor
{
    bool AreTickMarksVisible() const;
    void AreTickMarksVisible(bool value) const;
    bool AreRaysVisible() const;
    void AreRaysVisible(bool value) const;
    bool IsCenterMarkerVisible() const;
    void IsCenterMarkerVisible(bool value) const;
    bool IsAngleReadoutVisible() const;
    void IsAngleReadoutVisible(bool value) const;
    bool IsResizable() const;
    void IsResizable(bool value) const;
    double Radius() const;
    void Radius(double value) const;
    Windows::UI::Color AccentColor() const;
    void AccentColor(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterProtractor> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory
{
    Windows::UI::Input::Inking::InkPresenterProtractor Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterProtractorFactory> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterRuler
{
    double Length() const;
    void Length(double value) const;
    double Width() const;
    void Width(double value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRuler> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterRuler2
{
    bool AreTickMarksVisible() const;
    void AreTickMarksVisible(bool value) const;
    bool IsCompassVisible() const;
    void IsCompassVisible(bool value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRuler2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory
{
    Windows::UI::Input::Inking::InkPresenterRuler Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterRulerFactory> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkPresenterStencil
{
    Windows::UI::Input::Inking::InkPresenterStencilKind Kind() const;
    bool IsVisible() const;
    void IsVisible(bool value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(Windows::UI::Color const& value) const;
    Windows::UI::Color ForegroundColor() const;
    void ForegroundColor(Windows::UI::Color const& value) const;
    Windows::Foundation::Numerics::float3x2 Transform() const;
    void Transform(Windows::Foundation::Numerics::float3x2 const& value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkPresenterStencil> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkRecognitionResult
{
    Windows::Foundation::Rect BoundingRect() const;
    Windows::Foundation::Collections::IVectorView<hstring> GetTextCandidates() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> GetStrokes() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkRecognitionResult> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkRecognizer
{
    hstring Name() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkRecognizer> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizer<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkRecognizerContainer
{
    void SetDefaultRecognizer(Windows::UI::Input::Inking::InkRecognizer const& recognizer) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> RecognizeAsync(Windows::UI::Input::Inking::InkStrokeContainer const& strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer> GetRecognizers() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkRecognizerContainer> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStroke
{
    Windows::UI::Input::Inking::InkDrawingAttributes DrawingAttributes() const;
    void DrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const;
    Windows::Foundation::Rect BoundingRect() const;
    bool Selected() const;
    void Selected(bool value) const;
    bool Recognized() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment> GetRenderingSegments() const;
    Windows::UI::Input::Inking::InkStroke Clone() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStroke> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStroke2
{
    Windows::Foundation::Numerics::float3x2 PointTransform() const;
    void PointTransform(Windows::Foundation::Numerics::float3x2 const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint> GetInkPoints() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStroke2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStroke3
{
    uint32_t Id() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> StrokeStartedTime() const;
    void StrokeStartedTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> StrokeDuration() const;
    void StrokeDuration(optional<Windows::Foundation::TimeSpan> const& value) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStroke3> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStroke3<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder
{
    void BeginStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    Windows::UI::Input::PointerPoint AppendToStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    Windows::UI::Input::Inking::InkStroke EndStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const;
    Windows::UI::Input::Inking::InkStroke CreateStroke(param::iterable<Windows::Foundation::Point> const& points) const;
    void SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder2
{
    Windows::UI::Input::Inking::InkStroke CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeBuilder3
{
    Windows::UI::Input::Inking::InkStroke CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform, optional<Windows::Foundation::DateTime> const& strokeStartedTime, optional<Windows::Foundation::TimeSpan> const& strokeDuration) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeBuilder3> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeBuilder3<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeContainer
{
    Windows::Foundation::Rect BoundingRect() const;
    void AddStroke(Windows::UI::Input::Inking::InkStroke const& stroke) const;
    Windows::Foundation::Rect DeleteSelected() const;
    Windows::Foundation::Rect MoveSelected(Windows::Foundation::Point const& translation) const;
    Windows::Foundation::Rect SelectWithPolyLine(param::iterable<Windows::Foundation::Point> const& polyline) const;
    Windows::Foundation::Rect SelectWithLine(Windows::Foundation::Point const& from, Windows::Foundation::Point const& to) const;
    void CopySelectedToClipboard() const;
    Windows::Foundation::Rect PasteFromClipboard(Windows::Foundation::Point const& position) const;
    bool CanPasteFromClipboard() const;
    Windows::Foundation::IAsyncActionWithProgress<uint64_t> LoadAsync(Windows::Storage::Streams::IInputStream const& inputStream) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const;
    void UpdateRecognitionResults(param::vector_view<Windows::UI::Input::Inking::InkRecognitionResult> const& recognitionResults) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> GetStrokes() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> GetRecognitionResults() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeContainer2
{
    void AddStrokes(param::iterable<Windows::UI::Input::Inking::InkStroke> const& strokes) const;
    void Clear() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer2> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeContainer3
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream, Windows::UI::Input::Inking::InkPersistenceFormat const& inkPersistenceFormat) const;
    Windows::UI::Input::Inking::InkStroke GetStrokeById(uint32_t id) const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeContainer3> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeContainer3<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeInput
{
    event_token StrokeStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using StrokeStarted_revoker = event_revoker<Windows::UI::Input::Inking::IInkStrokeInput>;
    StrokeStarted_revoker StrokeStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void StrokeStarted(event_token const& cookie) const;
    event_token StrokeContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using StrokeContinued_revoker = event_revoker<Windows::UI::Input::Inking::IInkStrokeInput>;
    StrokeContinued_revoker StrokeContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void StrokeContinued(event_token const& cookie) const;
    event_token StrokeEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using StrokeEnded_revoker = event_revoker<Windows::UI::Input::Inking::IInkStrokeInput>;
    StrokeEnded_revoker StrokeEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void StrokeEnded(event_token const& cookie) const;
    event_token StrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using StrokeCanceled_revoker = event_revoker<Windows::UI::Input::Inking::IInkStrokeInput>;
    StrokeCanceled_revoker StrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void StrokeCanceled(event_token const& cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeInput> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeInput<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment
{
    Windows::Foundation::Point Position() const;
    Windows::Foundation::Point BezierControlPoint1() const;
    Windows::Foundation::Point BezierControlPoint2() const;
    float Pressure() const;
    float TiltX() const;
    float TiltY() const;
    float Twist() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokeRenderingSegment> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> Strokes() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> Strokes() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkSynchronizer
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> BeginDry() const;
    void EndDry() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkSynchronizer> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkSynchronizer<D>; };

template <typename D>
struct consume_Windows_UI_Input_Inking_IInkUnprocessedInput
{
    event_token PointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerEntered_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerEntered(event_token const& cookie) const;
    event_token PointerHovered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerHovered_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerHovered_revoker PointerHovered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerHovered(event_token const& cookie) const;
    event_token PointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerExited_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerExited_revoker PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerExited(event_token const& cookie) const;
    event_token PointerPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerPressed_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerPressed(event_token const& cookie) const;
    event_token PointerMoved(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerMoved_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerMoved(event_token const& cookie) const;
    event_token PointerReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerReleased_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerReleased(event_token const& cookie) const;
    event_token PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerLost_revoker = event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput>;
    PointerLost_revoker PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerLost(event_token const& cookie) const;
    Windows::UI::Input::Inking::InkPresenter InkPresenter() const;
};
template <> struct consume<Windows::UI::Input::Inking::IInkUnprocessedInput> { template <typename D> using type = consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>; };

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_PenTip(abi_t<Windows::UI::Input::Inking::PenTipShape>* value) = 0;
    virtual HRESULT __stdcall put_PenTip(abi_t<Windows::UI::Input::Inking::PenTipShape> value) = 0;
    virtual HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall put_Size(abi_t<Windows::Foundation::Size> value) = 0;
    virtual HRESULT __stdcall get_IgnorePressure(bool* value) = 0;
    virtual HRESULT __stdcall put_IgnorePressure(bool value) = 0;
    virtual HRESULT __stdcall get_FitToCurve(bool* value) = 0;
    virtual HRESULT __stdcall put_FitToCurve(bool value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PenTipTransform(abi_t<Windows::Foundation::Numerics::float3x2>* value) = 0;
    virtual HRESULT __stdcall put_PenTipTransform(abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
    virtual HRESULT __stdcall get_DrawAsHighlighter(bool* value) = 0;
    virtual HRESULT __stdcall put_DrawAsHighlighter(bool value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::Inking::InkDrawingAttributesKind>* value) = 0;
    virtual HRESULT __stdcall get_PencilProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributes4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IgnoreTilt(bool* value) = 0;
    virtual HRESULT __stdcall put_IgnoreTilt(bool value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Opacity(double* value) = 0;
    virtual HRESULT __stdcall put_Opacity(double value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkDrawingAttributesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateForPencil(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkInputProcessingConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::UI::Input::Inking::InkInputProcessingMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::UI::Input::Inking::InkInputProcessingMode> value) = 0;
    virtual HRESULT __stdcall get_RightDragAction(abi_t<Windows::UI::Input::Inking::InkInputRightDragAction>* value) = 0;
    virtual HRESULT __stdcall put_RightDragAction(abi_t<Windows::UI::Input::Inking::InkInputRightDragAction> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::UI::Input::Inking::InkManipulationMode>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::UI::Input::Inking::InkManipulationMode> value) = 0;
    virtual HRESULT __stdcall ProcessPointerDown(::IUnknown* pointerPoint) = 0;
    virtual HRESULT __stdcall ProcessPointerUpdate(::IUnknown* pointerPoint, ::IUnknown** updateInformation) = 0;
    virtual HRESULT __stdcall ProcessPointerUp(::IUnknown* pointerPoint, abi_t<Windows::Foundation::Rect>* updateRectangle) = 0;
    virtual HRESULT __stdcall SetDefaultDrawingAttributes(::IUnknown* drawingAttributes) = 0;
    virtual HRESULT __stdcall RecognizeAsync2(abi_t<Windows::UI::Input::Inking::InkRecognitionTarget> recognitionTarget, ::IUnknown** recognitionResults) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPoint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Pressure(float* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPoint2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TiltX(float* value) = 0;
    virtual HRESULT __stdcall get_TiltY(float* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(uint64_t* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPointFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInkPoint(abi_t<Windows::Foundation::Point> position, float pressure, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPointFactory2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInkPointWithTiltAndTimestamp(abi_t<Windows::Foundation::Point> position, float pressure, float tiltX, float tiltY, uint64_t timestamp, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsInputEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInputEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_InputDeviceTypes(abi_t<Windows::UI::Core::CoreInputDeviceTypes>* value) = 0;
    virtual HRESULT __stdcall put_InputDeviceTypes(abi_t<Windows::UI::Core::CoreInputDeviceTypes> value) = 0;
    virtual HRESULT __stdcall get_UnprocessedInput(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeInput(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InputProcessingConfiguration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeContainer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StrokeContainer(::IUnknown* value) = 0;
    virtual HRESULT __stdcall CopyDefaultDrawingAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateDefaultDrawingAttributes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ActivateCustomDrying(::IUnknown** inkSynchronizer) = 0;
    virtual HRESULT __stdcall SetPredefinedConfiguration(abi_t<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration> value) = 0;
    virtual HRESULT __stdcall add_StrokesCollected(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokesCollected(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StrokesErased(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokesErased(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HighContrastAdjustment(abi_t<Windows::UI::Input::Inking::InkHighContrastAdjustment>* value) = 0;
    virtual HRESULT __stdcall put_HighContrastAdjustment(abi_t<Windows::UI::Input::Inking::InkHighContrastAdjustment> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterProtractor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AreTickMarksVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_AreTickMarksVisible(bool value) = 0;
    virtual HRESULT __stdcall get_AreRaysVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_AreRaysVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsCenterMarkerVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCenterMarkerVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsAngleReadoutVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAngleReadoutVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsResizable(bool* value) = 0;
    virtual HRESULT __stdcall put_IsResizable(bool value) = 0;
    virtual HRESULT __stdcall get_Radius(double* value) = 0;
    virtual HRESULT __stdcall put_Radius(double value) = 0;
    virtual HRESULT __stdcall get_AccentColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_AccentColor(abi_t<Windows::UI::Color> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterProtractorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** inkPresenterProtractor) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRuler>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Length(double* value) = 0;
    virtual HRESULT __stdcall put_Length(double value) = 0;
    virtual HRESULT __stdcall get_Width(double* value) = 0;
    virtual HRESULT __stdcall put_Width(double value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRuler2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AreTickMarksVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_AreTickMarksVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsCompassVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCompassVisible(bool value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterRulerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* inkPresenter, ::IUnknown** inkPresenterRuler) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkPresenterStencil>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::Inking::InkPresenterStencilKind>* value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsVisible(bool value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_ForegroundColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_Transform(abi_t<Windows::Foundation::Numerics::float3x2>* value) = 0;
    virtual HRESULT __stdcall put_Transform(abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkRecognitionResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* boundingRect) = 0;
    virtual HRESULT __stdcall GetTextCandidates(::IUnknown** textCandidates) = 0;
    virtual HRESULT __stdcall GetStrokes(::IUnknown** strokes) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkRecognizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkRecognizerContainer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetDefaultRecognizer(::IUnknown* recognizer) = 0;
    virtual HRESULT __stdcall RecognizeAsync(::IUnknown* strokeCollection, abi_t<Windows::UI::Input::Inking::InkRecognitionTarget> recognitionTarget, ::IUnknown** recognitionResults) = 0;
    virtual HRESULT __stdcall GetRecognizers(::IUnknown** recognizerView) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStroke>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DrawingAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DrawingAttributes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_Selected(bool* value) = 0;
    virtual HRESULT __stdcall put_Selected(bool value) = 0;
    virtual HRESULT __stdcall get_Recognized(bool* value) = 0;
    virtual HRESULT __stdcall GetRenderingSegments(::IUnknown** renderingSegments) = 0;
    virtual HRESULT __stdcall Clone(::IUnknown** clonedStroke) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStroke2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointTransform(abi_t<Windows::Foundation::Numerics::float3x2>* value) = 0;
    virtual HRESULT __stdcall put_PointTransform(abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
    virtual HRESULT __stdcall GetInkPoints(::IUnknown** inkPoints) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStroke3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_StrokeStartedTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StrokeStartedTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StrokeDuration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StrokeDuration(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BeginStroke(::IUnknown* pointerPoint) = 0;
    virtual HRESULT __stdcall AppendToStroke(::IUnknown* pointerPoint, ::IUnknown** previousPointerPoint) = 0;
    virtual HRESULT __stdcall EndStroke(::IUnknown* pointerPoint, ::IUnknown** stroke) = 0;
    virtual HRESULT __stdcall CreateStroke(::IUnknown* points, ::IUnknown** stroke) = 0;
    virtual HRESULT __stdcall SetDefaultDrawingAttributes(::IUnknown* drawingAttributes) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateStrokeFromInkPoints(::IUnknown* inkPoints, abi_t<Windows::Foundation::Numerics::float3x2> transform, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeBuilder3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateStrokeFromInkPoints(::IUnknown* inkPoints, abi_t<Windows::Foundation::Numerics::float3x2> transform, ::IUnknown* strokeStartedTime, ::IUnknown* strokeDuration, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall AddStroke(::IUnknown* stroke) = 0;
    virtual HRESULT __stdcall DeleteSelected(abi_t<Windows::Foundation::Rect>* invalidatedRect) = 0;
    virtual HRESULT __stdcall MoveSelected(abi_t<Windows::Foundation::Point> translation, abi_t<Windows::Foundation::Rect>* invalidatedRectangle) = 0;
    virtual HRESULT __stdcall SelectWithPolyLine(::IUnknown* polyline, abi_t<Windows::Foundation::Rect>* invalidatedRectangle) = 0;
    virtual HRESULT __stdcall SelectWithLine(abi_t<Windows::Foundation::Point> from, abi_t<Windows::Foundation::Point> to, abi_t<Windows::Foundation::Rect>* invalidatedRectangle) = 0;
    virtual HRESULT __stdcall CopySelectedToClipboard() = 0;
    virtual HRESULT __stdcall PasteFromClipboard(abi_t<Windows::Foundation::Point> position, abi_t<Windows::Foundation::Rect>* invalidatedRectangle) = 0;
    virtual HRESULT __stdcall CanPasteFromClipboard(bool* canPaste) = 0;
    virtual HRESULT __stdcall LoadAsync(::IUnknown* inputStream, ::IUnknown** loadAction) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown* outputStream, ::IUnknown** outputStreamOperation) = 0;
    virtual HRESULT __stdcall UpdateRecognitionResults(::IUnknown* recognitionResults) = 0;
    virtual HRESULT __stdcall GetStrokes(::IUnknown** strokeView) = 0;
    virtual HRESULT __stdcall GetRecognitionResults(::IUnknown** recognitionResults) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddStrokes(::IUnknown* strokes) = 0;
    virtual HRESULT __stdcall Clear() = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeContainer3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SaveWithFormatAsync(::IUnknown* outputStream, abi_t<Windows::UI::Input::Inking::InkPersistenceFormat> inkPersistenceFormat, ::IUnknown** outputStreamOperation) = 0;
    virtual HRESULT __stdcall GetStrokeById(uint32_t id, ::IUnknown** stroke) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeInput>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_StrokeStarted(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokeStarted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StrokeContinued(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokeContinued(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StrokeEnded(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokeEnded(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_StrokeCanceled(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_StrokeCanceled(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokeRenderingSegment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_BezierControlPoint1(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_BezierControlPoint2(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Pressure(float* value) = 0;
    virtual HRESULT __stdcall get_TiltX(float* value) = 0;
    virtual HRESULT __stdcall get_TiltY(float* value) = 0;
    virtual HRESULT __stdcall get_Twist(float* value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Strokes(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Strokes(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkSynchronizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall BeginDry(::IUnknown** inkStrokes) = 0;
    virtual HRESULT __stdcall EndDry() = 0;
};};

template <> struct abi<Windows::UI::Input::Inking::IInkUnprocessedInput>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PointerEntered(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerEntered(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerHovered(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerHovered(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerExited(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerExited(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerMoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerMoved(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerReleased(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerReleased(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerLost(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerLost(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_InkPresenter(::IUnknown** value) = 0;
};};

}
