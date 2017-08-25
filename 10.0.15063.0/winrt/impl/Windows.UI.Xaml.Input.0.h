// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Input {

enum class PointerDeviceType;

}

WINRT_EXPORT namespace winrt::Windows::System {

enum class VirtualKey;
enum class VirtualKeyModifiers : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CorePhysicalKeyStatus;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

enum class HoldingState;
struct ManipulationDelta;
struct ManipulationVelocities;
struct PointerPoint;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

enum class FocusState;
struct DependencyObject;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

enum class FocusInputDeviceKind
{
    None = 0,
    Mouse = 1,
    Touch = 2,
    Pen = 3,
    Keyboard = 4,
    GameController = 5,
};

enum class FocusNavigationDirection
{
    Next = 0,
    Previous = 1,
    Up = 2,
    Down = 3,
    Left = 4,
    Right = 5,
    None = 6,
};

enum class InputScopeNameValue
{
    Default = 0,
    Url = 1,
    EmailSmtpAddress = 5,
    PersonalFullName = 7,
    CurrencyAmountAndSymbol = 20,
    CurrencyAmount = 21,
    DateMonthNumber = 23,
    DateDayNumber = 24,
    DateYear = 25,
    Digits = 28,
    Number = 29,
    Password = 31,
    TelephoneNumber = 32,
    TelephoneCountryCode = 33,
    TelephoneAreaCode = 34,
    TelephoneLocalNumber = 35,
    TimeHour = 37,
    TimeMinutesOrSeconds = 38,
    NumberFullWidth = 39,
    AlphanumericHalfWidth = 40,
    AlphanumericFullWidth = 41,
    Hiragana = 44,
    KatakanaHalfWidth = 45,
    KatakanaFullWidth = 46,
    Hanja = 47,
    HangulHalfWidth = 48,
    HangulFullWidth = 49,
    Search = 50,
    Formula = 51,
    SearchIncremental = 52,
    ChineseHalfWidth = 53,
    ChineseFullWidth = 54,
    NativeScript = 55,
    Text = 57,
    Chat = 58,
    NameOrPhoneNumber = 59,
    EmailNameOrAddress = 60,
    Maps = 62,
    NumericPassword = 63,
    NumericPin = 64,
    AlphanumericPin = 65,
    FormulaNumber = 67,
    ChatWithoutEmoji = 68,
};

enum class KeyTipPlacementMode
{
    Auto = 0,
    Bottom = 1,
    Top = 2,
    Left = 3,
    Right = 4,
    Center = 5,
    Hidden = 6,
};

enum class KeyboardNavigationMode
{
    Local = 0,
    Cycle = 1,
    Once = 2,
};

enum class ManipulationModes : unsigned
{
    None = 0x0,
    TranslateX = 0x1,
    TranslateY = 0x2,
    TranslateRailsX = 0x4,
    TranslateRailsY = 0x8,
    Rotate = 0x10,
    Scale = 0x20,
    TranslateInertia = 0x40,
    RotateInertia = 0x80,
    ScaleInertia = 0x100,
    All = 0xFFFF,
    System = 0x10000,
};

DEFINE_ENUM_FLAG_OPERATORS(ManipulationModes)

enum class XYFocusKeyboardNavigationMode
{
    Auto = 0,
    Enabled = 1,
    Disabled = 2,
};

enum class XYFocusNavigationStrategy
{
    Auto = 0,
    Projection = 1,
    NavigationDirectionDistance = 2,
    RectilinearDistance = 3,
};

enum class XYFocusNavigationStrategyOverride
{
    None = 0,
    Auto = 1,
    Projection = 2,
    NavigationDirectionDistance = 3,
    RectilinearDistance = 4,
};

struct IAccessKeyDisplayDismissedEventArgs;
struct IAccessKeyDisplayRequestedEventArgs;
struct IAccessKeyInvokedEventArgs;
struct IAccessKeyManager;
struct IAccessKeyManagerStatics;
struct IAccessKeyManagerStatics2;
struct ICommand;
struct IContextRequestedEventArgs;
struct IDoubleTappedRoutedEventArgs;
struct IFindNextElementOptions;
struct IFocusManager;
struct IFocusManagerStatics;
struct IFocusManagerStatics2;
struct IFocusManagerStatics3;
struct IFocusManagerStatics4;
struct IGettingFocusEventArgs;
struct IHoldingRoutedEventArgs;
struct IInertiaExpansionBehavior;
struct IInertiaRotationBehavior;
struct IInertiaTranslationBehavior;
struct IInputScope;
struct IInputScopeName;
struct IInputScopeNameFactory;
struct IKeyRoutedEventArgs;
struct IKeyRoutedEventArgs2;
struct IKeyRoutedEventArgs3;
struct ILosingFocusEventArgs;
struct IManipulationCompletedRoutedEventArgs;
struct IManipulationDeltaRoutedEventArgs;
struct IManipulationInertiaStartingRoutedEventArgs;
struct IManipulationPivot;
struct IManipulationPivotFactory;
struct IManipulationStartedRoutedEventArgs;
struct IManipulationStartedRoutedEventArgsFactory;
struct IManipulationStartingRoutedEventArgs;
struct INoFocusCandidateFoundEventArgs;
struct IPointer;
struct IPointerRoutedEventArgs;
struct IRightTappedRoutedEventArgs;
struct ITappedRoutedEventArgs;
struct AccessKeyDisplayDismissedEventArgs;
struct AccessKeyDisplayRequestedEventArgs;
struct AccessKeyInvokedEventArgs;
struct AccessKeyManager;
struct ContextRequestedEventArgs;
struct DoubleTappedRoutedEventArgs;
struct FindNextElementOptions;
struct FocusManager;
struct GettingFocusEventArgs;
struct HoldingRoutedEventArgs;
struct InertiaExpansionBehavior;
struct InertiaRotationBehavior;
struct InertiaTranslationBehavior;
struct InputScope;
struct InputScopeName;
struct KeyRoutedEventArgs;
struct LosingFocusEventArgs;
struct ManipulationCompletedRoutedEventArgs;
struct ManipulationDeltaRoutedEventArgs;
struct ManipulationInertiaStartingRoutedEventArgs;
struct ManipulationPivot;
struct ManipulationStartedRoutedEventArgs;
struct ManipulationStartingRoutedEventArgs;
struct NoFocusCandidateFoundEventArgs;
struct Pointer;
struct PointerRoutedEventArgs;
struct RightTappedRoutedEventArgs;
struct TappedRoutedEventArgs;
struct DoubleTappedEventHandler;
struct HoldingEventHandler;
struct KeyEventHandler;
struct ManipulationCompletedEventHandler;
struct ManipulationDeltaEventHandler;
struct ManipulationInertiaStartingEventHandler;
struct ManipulationStartedEventHandler;
struct ManipulationStartingEventHandler;
struct PointerEventHandler;
struct RightTappedEventHandler;
struct TappedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::ICommand>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFindNextElementOptions>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFocusManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInputScope>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInputScopeName>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationPivot>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IPointer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::AccessKeyManager>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ContextRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::FindNextElementOptions>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::FocusManager>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::GettingFocusEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::HoldingRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::InertiaExpansionBehavior>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::InertiaRotationBehavior>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::InertiaTranslationBehavior>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::InputScope>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::InputScopeName>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::KeyRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::LosingFocusEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationPivot>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::Pointer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::PointerRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::TappedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Input::FocusInputDeviceKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::FocusNavigationDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::InputScopeNameValue>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::KeyTipPlacementMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::KeyboardNavigationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationModes>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::HoldingEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::KeyEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::PointerEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::RightTappedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::Input::TappedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyManager" }; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics" }; };
template <> struct name<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics2" }; };
template <> struct name<Windows::UI::Xaml::Input::ICommand>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ICommand" }; };
template <> struct name<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IFindNextElementOptions>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFindNextElementOptions" }; };
template <> struct name<Windows::UI::Xaml::Input::IFocusManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFocusManager" }; };
template <> struct name<Windows::UI::Xaml::Input::IFocusManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFocusManagerStatics" }; };
template <> struct name<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFocusManagerStatics2" }; };
template <> struct name<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFocusManagerStatics3" }; };
template <> struct name<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IFocusManagerStatics4" }; };
template <> struct name<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IGettingFocusEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IHoldingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInertiaExpansionBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInertiaRotationBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInertiaTranslationBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::IInputScope>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInputScope" }; };
template <> struct name<Windows::UI::Xaml::Input::IInputScopeName>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInputScopeName" }; };
template <> struct name<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IInputScopeNameFactory" }; };
template <> struct name<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs3" }; };
template <> struct name<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ILosingFocusEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationPivot>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationPivot" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationPivotFactory" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IPointer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IPointer" }; };
template <> struct name<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ITappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::AccessKeyManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.AccessKeyManager" }; };
template <> struct name<Windows::UI::Xaml::Input::ContextRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ContextRequestedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::FindNextElementOptions>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.FindNextElementOptions" }; };
template <> struct name<Windows::UI::Xaml::Input::FocusManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.FocusManager" }; };
template <> struct name<Windows::UI::Xaml::Input::GettingFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.GettingFocusEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::HoldingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.HoldingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::InertiaExpansionBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InertiaExpansionBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::InertiaRotationBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InertiaRotationBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::InertiaTranslationBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InertiaTranslationBehavior" }; };
template <> struct name<Windows::UI::Xaml::Input::InputScope>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InputScope" }; };
template <> struct name<Windows::UI::Xaml::Input::InputScopeName>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InputScopeName" }; };
template <> struct name<Windows::UI::Xaml::Input::KeyRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.KeyRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::LosingFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.LosingFocusEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationPivot>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationPivot" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::Pointer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.Pointer" }; };
template <> struct name<Windows::UI::Xaml::Input::PointerRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.PointerRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.RightTappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::TappedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.TappedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Input::FocusInputDeviceKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.FocusInputDeviceKind" }; };
template <> struct name<Windows::UI::Xaml::Input::FocusNavigationDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.FocusNavigationDirection" }; };
template <> struct name<Windows::UI::Xaml::Input::InputScopeNameValue>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.InputScopeNameValue" }; };
template <> struct name<Windows::UI::Xaml::Input::KeyTipPlacementMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.KeyTipPlacementMode" }; };
template <> struct name<Windows::UI::Xaml::Input::KeyboardNavigationMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.KeyboardNavigationMode" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationModes>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationModes" }; };
template <> struct name<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.XYFocusKeyboardNavigationMode" }; };
template <> struct name<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.XYFocusNavigationStrategy" }; };
template <> struct name<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.XYFocusNavigationStrategyOverride" }; };
template <> struct name<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.DoubleTappedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::HoldingEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.HoldingEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::KeyEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.KeyEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationCompletedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationDeltaEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationInertiaStartingEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationStartedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.ManipulationStartingEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::PointerEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.PointerEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::RightTappedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.RightTappedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::Input::TappedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Input.TappedEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ static constexpr GUID value{ 0x8A610DC6,0xD72D,0x4CA8,{ 0x9F,0x66,0x55,0x6F,0x35,0xB5,0x13,0xDA } }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ static constexpr GUID value{ 0x0C079E55,0x13FE,0x4D03,{ 0xA6,0x1D,0xE1,0x2F,0x06,0x56,0x72,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ static constexpr GUID value{ 0xCFE9CD97,0xC718,0x4091,{ 0xB7,0xDD,0xAD,0xF1,0xC0,0x72,0xB1,0xE1 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyManager>{ static constexpr GUID value{ 0xECC973B0,0x2EE9,0x4B1C,{ 0x98,0xD7,0x6E,0x0E,0x81,0x6D,0x33,0x4B } }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ static constexpr GUID value{ 0x4CA0EFE6,0xD9C8,0x4EBC,{ 0xB4,0xC7,0x30,0xD1,0x83,0x8A,0x81,0xF1 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ static constexpr GUID value{ 0x962BB594,0x2AB3,0x47C5,{ 0x95,0x4B,0x70,0x92,0xF3,0x55,0xF7,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ICommand>{ static constexpr GUID value{ 0xE5AF3542,0xCA67,0x4081,{ 0x99,0x5B,0x70,0x9D,0xD1,0x37,0x92,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ static constexpr GUID value{ 0x42618E0A,0x1CB6,0x46FB,{ 0x83,0x74,0x0A,0xEC,0x68,0xAA,0x5E,0x51 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ static constexpr GUID value{ 0xAF404424,0x26DF,0x44F4,{ 0x87,0x14,0x93,0x59,0x24,0x9B,0x62,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFindNextElementOptions>{ static constexpr GUID value{ 0xD88AE22B,0x46C2,0x41FC,{ 0x89,0x7E,0xB5,0x96,0x19,0x77,0xB8,0x9D } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFocusManager>{ static constexpr GUID value{ 0xC843F50B,0x3B83,0x4DA1,{ 0x9D,0x6F,0x55,0x7C,0x11,0x69,0xF3,0x41 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFocusManagerStatics>{ static constexpr GUID value{ 0x1ECCD326,0x8182,0x4482,{ 0x82,0x6A,0x09,0x18,0xE9,0xED,0x9A,0xF7 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ static constexpr GUID value{ 0xA920D761,0xDD87,0x4F31,{ 0xBE,0xDA,0xEF,0x41,0x7F,0xE7,0xC0,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ static constexpr GUID value{ 0x60805EBF,0xB149,0x417D,{ 0x83,0xF1,0xBA,0xEB,0x56,0x0E,0x2A,0x47 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ static constexpr GUID value{ 0x29276E9C,0x1C6C,0x414A,{ 0xBA,0x1C,0x96,0xEF,0xD5,0x96,0x2B,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ static constexpr GUID value{ 0xFA05B9CE,0xC67C,0x4BE8,{ 0x8F,0xD4,0xC4,0x4D,0x67,0x87,0x7E,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ static constexpr GUID value{ 0xC246FF23,0xD80D,0x44DE,{ 0x8D,0xB9,0x0D,0x81,0x5E,0x26,0x9A,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ static constexpr GUID value{ 0x751D87E5,0x8D42,0x44C5,{ 0x96,0x5E,0x3C,0xD3,0x0C,0xC9,0xD6,0xF7 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ static constexpr GUID value{ 0x424CFB2E,0xBBFD,0x4625,{ 0xAE,0x78,0x20,0xC6,0x5B,0xF1,0xEF,0xAF } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ static constexpr GUID value{ 0x45D3A512,0x3B32,0x4882,{ 0xA4,0xC2,0xEC,0xFA,0x2D,0x4B,0x6D,0xF0 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInputScope>{ static constexpr GUID value{ 0x5C0F85F3,0xF9D8,0x4220,{ 0xB6,0x66,0x04,0x5D,0x07,0x4D,0x9B,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInputScopeName>{ static constexpr GUID value{ 0xFD3E6997,0x08FB,0x4CBA,{ 0xA0,0x21,0x79,0x2D,0x75,0x89,0xFD,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ static constexpr GUID value{ 0x4A40BB52,0x4BD7,0x4E54,{ 0x86,0x17,0x1C,0xDA,0x8A,0x1E,0xDA,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ static constexpr GUID value{ 0xD4CD3DFE,0x4079,0x42E9,{ 0xA3,0x9A,0x30,0x95,0xD3,0xF0,0x49,0xC6 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ static constexpr GUID value{ 0x1B02D57A,0x9634,0x4F14,{ 0x91,0xB2,0x13,0x3E,0x42,0xFD,0xB3,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ static constexpr GUID value{ 0x2779F5B4,0xCA41,0x411B,{ 0xA8,0xEF,0xF4,0xFC,0x78,0xE7,0x80,0x57 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ static constexpr GUID value{ 0xF9F683C7,0xD789,0x472B,{ 0xAA,0x93,0x6D,0x41,0x05,0xE6,0xDA,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ static constexpr GUID value{ 0xB5AD9B23,0x2F41,0x498E,{ 0x83,0x19,0x01,0x5E,0xE8,0xA7,0x53,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ static constexpr GUID value{ 0x400D5794,0x4C6F,0x491D,{ 0x82,0xD6,0x35,0x17,0x10,0x93,0x99,0xC6 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ static constexpr GUID value{ 0x246A91A9,0xCA43,0x4C0B,{ 0xAC,0xEF,0x81,0xE8,0xB8,0x14,0x75,0x20 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationPivot>{ static constexpr GUID value{ 0x2E3838A5,0xE6C2,0x4998,{ 0x82,0xAC,0x18,0x74,0x8B,0x14,0x16,0x66 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ static constexpr GUID value{ 0x6D05B039,0x3702,0x4396,{ 0xAD,0x9B,0xA8,0x25,0xEF,0xA6,0x3A,0x3B } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ static constexpr GUID value{ 0x5DB1AA05,0x9F80,0x48B6,{ 0xAE,0x6C,0x4F,0x11,0x9D,0xE8,0xFF,0x13 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ static constexpr GUID value{ 0x84C1DAA7,0x7272,0x4463,{ 0xB6,0xC3,0xA4,0x0B,0x9B,0xA1,0x51,0xFC } }; };
template <> struct guid<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ static constexpr GUID value{ 0x18D636B7,0x53A4,0x4C15,{ 0xA4,0x98,0xF3,0xA9,0xCA,0x21,0x2A,0x42 } }; };
template <> struct guid<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ static constexpr GUID value{ 0xEC3601A7,0x1007,0x48F9,{ 0xB6,0xB3,0xED,0x0B,0xEA,0x53,0x93,0x7D } }; };
template <> struct guid<Windows::UI::Xaml::Input::IPointer>{ static constexpr GUID value{ 0x5EE8F39F,0x747D,0x4171,{ 0x90,0xE6,0xCD,0x37,0xA9,0xDF,0xFB,0x11 } }; };
template <> struct guid<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ static constexpr GUID value{ 0xDA628F0A,0x9752,0x49E2,{ 0xBD,0xE2,0x49,0xEC,0xCA,0xB9,0x19,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ static constexpr GUID value{ 0x6834869D,0x7BD5,0x4033,{ 0xB2,0x37,0x17,0x2F,0x79,0xAB,0xE3,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ static constexpr GUID value{ 0xA099E6BE,0xE624,0x459A,{ 0xBB,0x1D,0xE0,0x5C,0x73,0xE2,0xCC,0x66 } }; };
template <> struct guid<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ static constexpr GUID value{ 0x3124D025,0x04A7,0x4D45,{ 0x82,0x5E,0x82,0x04,0xA6,0x24,0xDB,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::Input::HoldingEventHandler>{ static constexpr GUID value{ 0xECAE8CCD,0x8E5E,0x4FBE,{ 0x98,0x46,0x30,0xA6,0x37,0x0A,0xFC,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::Input::KeyEventHandler>{ static constexpr GUID value{ 0x7C63D2E5,0x7A0E,0x4E12,{ 0xB9,0x6A,0x77,0x15,0xAA,0x6F,0xF1,0xC8 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ static constexpr GUID value{ 0x38EF4B0F,0x14F8,0x42DF,{ 0x9A,0x1E,0xA4,0xBC,0xC4,0xAF,0x77,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ static constexpr GUID value{ 0xAA1160CB,0xDFB9,0x4C56,{ 0xAB,0xDC,0x71,0x1B,0x63,0xC8,0xEB,0x94 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ static constexpr GUID value{ 0xD39D6322,0x7C9C,0x481B,{ 0x82,0x7B,0xC8,0xB2,0xD9,0xBB,0x6F,0xC7 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ static constexpr GUID value{ 0xF88345F8,0xE0A3,0x4BE2,{ 0xB9,0x0C,0xDC,0x20,0xE6,0xD8,0xBE,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ static constexpr GUID value{ 0x10D0B04E,0xBFE4,0x42CB,{ 0x82,0x3C,0x3F,0xEC,0xD8,0x77,0x0E,0xF8 } }; };
template <> struct guid<Windows::UI::Xaml::Input::PointerEventHandler>{ static constexpr GUID value{ 0xE4385929,0xC004,0x4BCF,{ 0x89,0x70,0x35,0x94,0x86,0xE3,0x9F,0x88 } }; };
template <> struct guid<Windows::UI::Xaml::Input::RightTappedEventHandler>{ static constexpr GUID value{ 0x2532A062,0xF447,0x4950,{ 0x9C,0x46,0xF1,0xE3,0x4A,0x2C,0x22,0x38 } }; };
template <> struct guid<Windows::UI::Xaml::Input::TappedEventHandler>{ static constexpr GUID value{ 0x68D940CC,0x9FF0,0x49CE,{ 0xB1,0x41,0x3F,0x07,0xEC,0x47,0x7B,0x97 } }; };
template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>{ using type = Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::AccessKeyManager>{ using type = Windows::UI::Xaml::Input::IAccessKeyManager; };
template <> struct default_interface<Windows::UI::Xaml::Input::ContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Input::IContextRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::FindNextElementOptions>{ using type = Windows::UI::Xaml::Input::IFindNextElementOptions; };
template <> struct default_interface<Windows::UI::Xaml::Input::FocusManager>{ using type = Windows::UI::Xaml::Input::IFocusManager; };
template <> struct default_interface<Windows::UI::Xaml::Input::GettingFocusEventArgs>{ using type = Windows::UI::Xaml::Input::IGettingFocusEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::HoldingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IHoldingRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::InertiaExpansionBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaExpansionBehavior; };
template <> struct default_interface<Windows::UI::Xaml::Input::InertiaRotationBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaRotationBehavior; };
template <> struct default_interface<Windows::UI::Xaml::Input::InertiaTranslationBehavior>{ using type = Windows::UI::Xaml::Input::IInertiaTranslationBehavior; };
template <> struct default_interface<Windows::UI::Xaml::Input::InputScope>{ using type = Windows::UI::Xaml::Input::IInputScope; };
template <> struct default_interface<Windows::UI::Xaml::Input::InputScopeName>{ using type = Windows::UI::Xaml::Input::IInputScopeName; };
template <> struct default_interface<Windows::UI::Xaml::Input::KeyRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IKeyRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::LosingFocusEventArgs>{ using type = Windows::UI::Xaml::Input::ILosingFocusEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationPivot>{ using type = Windows::UI::Xaml::Input::IManipulationPivot; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>{ using type = Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::Pointer>{ using type = Windows::UI::Xaml::Input::IPointer; };
template <> struct default_interface<Windows::UI::Xaml::Input::PointerRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IPointerRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Input::TappedRoutedEventArgs>{ using type = Windows::UI::Xaml::Input::ITappedRoutedEventArgs; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs
{
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs
{
    hstring PressedKeys() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyManager
{
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManager> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManager<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics
{
    bool IsDisplayModeEnabled() const;
    event_token IsDisplayModeEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value) const;
    using IsDisplayModeEnabledChanged_revoker = event_revoker<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>;
    IsDisplayModeEnabledChanged_revoker IsDisplayModeEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> const& value) const;
    void IsDisplayModeEnabledChanged(event_token const& token) const;
    void ExitDisplayMode() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManagerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2
{
    bool AreKeyTipsEnabled() const;
    void AreKeyTipsEnabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_ICommand
{
    event_token CanExecuteChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using CanExecuteChanged_revoker = event_revoker<Windows::UI::Xaml::Input::ICommand>;
    CanExecuteChanged_revoker CanExecuteChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void CanExecuteChanged(event_token const& token) const;
    bool CanExecute(Windows::Foundation::IInspectable const& parameter) const;
    void Execute(Windows::Foundation::IInspectable const& parameter) const;
};
template <> struct consume<Windows::UI::Xaml::Input::ICommand> { template <typename D> using type = consume_Windows_UI_Xaml_Input_ICommand<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    bool TryGetPosition(Windows::UI::Xaml::UIElement const& relativeTo, Windows::Foundation::Point& point) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IContextRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IContextRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFindNextElementOptions
{
    Windows::UI::Xaml::DependencyObject SearchRoot() const;
    void SearchRoot(Windows::UI::Xaml::DependencyObject const& value) const;
    Windows::Foundation::Rect ExclusionRect() const;
    void ExclusionRect(Windows::Foundation::Rect const& value) const;
    Windows::Foundation::Rect HintRect() const;
    void HintRect(Windows::Foundation::Rect const& value) const;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride XYFocusNavigationStrategyOverride() const;
    void XYFocusNavigationStrategyOverride(Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IFindNextElementOptions> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFindNextElementOptions<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFocusManager
{
};
template <> struct consume<Windows::UI::Xaml::Input::IFocusManager> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManager<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics
{
    Windows::Foundation::IInspectable GetFocusedElement() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics2
{
    bool TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics3
{
    Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
    Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::Foundation::Rect const& hintRect) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IFocusManagerStatics4
{
    bool TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const;
    Windows::UI::Xaml::DependencyObject FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection) const;
    Windows::UI::Xaml::DependencyObject FindFirstFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const;
    Windows::UI::Xaml::DependencyObject FindLastFocusableElement(Windows::UI::Xaml::DependencyObject const& searchScope) const;
    Windows::UI::Xaml::DependencyObject FindNextElement(Windows::UI::Xaml::Input::FocusNavigationDirection const& focusNavigationDirection, Windows::UI::Xaml::Input::FindNextElementOptions const& focusNavigationOptions) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IFocusManagerStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IFocusManagerStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs
{
    Windows::UI::Xaml::DependencyObject OldFocusedElement() const;
    Windows::UI::Xaml::DependencyObject NewFocusedElement() const;
    void NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const;
    Windows::UI::Xaml::FocusState FocusState() const;
    Windows::UI::Xaml::Input::FocusNavigationDirection Direction() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Xaml::Input::FocusInputDeviceKind InputDevice() const;
    bool Cancel() const;
    void Cancel(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IGettingFocusEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IGettingFocusEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::HoldingState HoldingState() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredExpansion() const;
    void DesiredExpansion(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInertiaExpansionBehavior> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaExpansionBehavior<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredRotation() const;
    void DesiredRotation(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInertiaRotationBehavior> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaRotationBehavior<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredDisplacement() const;
    void DesiredDisplacement(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInertiaTranslationBehavior> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInertiaTranslationBehavior<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInputScope
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> Names() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInputScope> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScope<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInputScopeName
{
    Windows::UI::Xaml::Input::InputScopeNameValue NameValue() const;
    void NameValue(Windows::UI::Xaml::Input::InputScopeNameValue const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInputScopeName> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScopeName<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IInputScopeNameFactory
{
    Windows::UI::Xaml::Input::InputScopeName CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue const& nameValue) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IInputScopeNameFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IInputScopeNameFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs
{
    Windows::System::VirtualKey Key() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2
{
    Windows::System::VirtualKey OriginalKey() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs
{
    Windows::UI::Xaml::DependencyObject OldFocusedElement() const;
    Windows::UI::Xaml::DependencyObject NewFocusedElement() const;
    void NewFocusedElement(Windows::UI::Xaml::DependencyObject const& value) const;
    Windows::UI::Xaml::FocusState FocusState() const;
    Windows::UI::Xaml::Input::FocusNavigationDirection Direction() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Xaml::Input::FocusInputDeviceKind InputDevice() const;
    bool Cancel() const;
    void Cancel(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::ILosingFocusEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_ILosingFocusEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::Foundation::Point Position() const;
    bool IsInertial() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::Foundation::Point Position() const;
    bool IsInertial() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    void Complete() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::UI::Xaml::Input::InertiaExpansionBehavior ExpansionBehavior() const;
    void ExpansionBehavior(Windows::UI::Xaml::Input::InertiaExpansionBehavior const& value) const;
    Windows::UI::Xaml::Input::InertiaRotationBehavior RotationBehavior() const;
    void RotationBehavior(Windows::UI::Xaml::Input::InertiaRotationBehavior const& value) const;
    Windows::UI::Xaml::Input::InertiaTranslationBehavior TranslationBehavior() const;
    void TranslationBehavior(Windows::UI::Xaml::Input::InertiaTranslationBehavior const& value) const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationPivot
{
    Windows::Foundation::Point Center() const;
    void Center(Windows::Foundation::Point const& value) const;
    double Radius() const;
    void Radius(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationPivot> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationPivot<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationPivotFactory
{
    Windows::UI::Xaml::Input::ManipulationPivot CreateInstanceWithCenterAndRadius(Windows::Foundation::Point const& center, double radius) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationPivotFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationPivotFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::Foundation::Point Position() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    void Complete() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory
{
    Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs
{
    Windows::UI::Xaml::Input::ManipulationModes Mode() const;
    void Mode(Windows::UI::Xaml::Input::ManipulationModes const& value) const;
    Windows::UI::Xaml::UIElement Container() const;
    void Container(Windows::UI::Xaml::UIElement const& value) const;
    Windows::UI::Xaml::Input::ManipulationPivot Pivot() const;
    void Pivot(Windows::UI::Xaml::Input::ManipulationPivot const& value) const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs
{
    Windows::UI::Xaml::Input::FocusNavigationDirection Direction() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Xaml::Input::FocusInputDeviceKind InputDevice() const;
};
template <> struct consume<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IPointer
{
    uint32_t PointerId() const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool IsInContact() const;
    bool IsInRange() const;
};
template <> struct consume<Windows::UI::Xaml::Input::IPointer> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IPointer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs
{
    Windows::UI::Xaml::Input::Pointer Pointer() const;
    Windows::System::VirtualKeyModifiers KeyModifiers() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Input::PointerPoint GetCurrentPoint(Windows::UI::Xaml::UIElement const& relativeTo) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IPointerRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IPointerRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::Input::ITappedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Input_ITappedRoutedEventArgs<D>; };

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PressedKeys(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManager>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsDisplayModeEnabled(bool* value) = 0;
    virtual HRESULT __stdcall add_IsDisplayModeEnabledChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsDisplayModeEnabledChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall ExitDisplayMode() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IAccessKeyManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AreKeyTipsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AreKeyTipsEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ICommand>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CanExecuteChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CanExecuteChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CanExecute(::IUnknown* parameter, bool* returnValue) = 0;
    virtual HRESULT __stdcall Execute(::IUnknown* parameter) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IContextRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall TryGetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* point, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IFindNextElementOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SearchRoot(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SearchRoot(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ExclusionRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_ExclusionRect(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall get_HintRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_HintRect(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall get_XYFocusNavigationStrategyOverride(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusNavigationStrategyOverride(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategyOverride> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IFocusManager>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFocusedElement(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryMoveFocus(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindNextFocusableElement(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindNextFocusableElementWithHint(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, abi_t<Windows::Foundation::Rect> hintRect, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IFocusManagerStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryMoveFocusWithOptions(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, ::IUnknown* focusNavigationOptions, bool* returnValue) = 0;
    virtual HRESULT __stdcall FindNextElement(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall FindFirstFocusableElement(::IUnknown* searchScope, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall FindLastFocusableElement(::IUnknown* searchScope, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall FindNextElementWithOptions(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection> focusNavigationDirection, ::IUnknown* focusNavigationOptions, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IGettingFocusEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldFocusedElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewFocusedElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NewFocusedElement(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FocusState(abi_t<Windows::UI::Xaml::FocusState>* value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_InputDevice(abi_t<Windows::UI::Xaml::Input::FocusInputDeviceKind>* value) = 0;
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_HoldingState(abi_t<Windows::UI::Input::HoldingState>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInertiaExpansionBehavior>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredDeceleration(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredDeceleration(double value) = 0;
    virtual HRESULT __stdcall get_DesiredExpansion(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredExpansion(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInertiaRotationBehavior>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredDeceleration(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredDeceleration(double value) = 0;
    virtual HRESULT __stdcall get_DesiredRotation(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredRotation(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInertiaTranslationBehavior>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredDeceleration(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredDeceleration(double value) = 0;
    virtual HRESULT __stdcall get_DesiredDisplacement(double* value) = 0;
    virtual HRESULT __stdcall put_DesiredDisplacement(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInputScope>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Names(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInputScopeName>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NameValue(abi_t<Windows::UI::Xaml::Input::InputScopeNameValue>* value) = 0;
    virtual HRESULT __stdcall put_NameValue(abi_t<Windows::UI::Xaml::Input::InputScopeNameValue> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IInputScopeNameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Input::InputScopeNameValue> nameValue, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Key(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OriginalKey(abi_t<Windows::System::VirtualKey>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ILosingFocusEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldFocusedElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewFocusedElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NewFocusedElement(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FocusState(abi_t<Windows::UI::Xaml::FocusState>* value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_InputDevice(abi_t<Windows::UI::Xaml::Input::FocusInputDeviceKind>* value) = 0;
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_IsInertial(bool* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_IsInertial(bool* value) = 0;
    virtual HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExpansionBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ExpansionBehavior(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RotationBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RotationBehavior(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TranslationBehavior(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TranslationBehavior(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationPivot>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Center(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_Center(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_Radius(double* value) = 0;
    virtual HRESULT __stdcall put_Radius(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationPivotFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithCenterAndRadius(abi_t<Windows::Foundation::Point> center, double radius, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mode(abi_t<Windows::UI::Xaml::Input::ManipulationModes>* value) = 0;
    virtual HRESULT __stdcall put_Mode(abi_t<Windows::UI::Xaml::Input::ManipulationModes> value) = 0;
    virtual HRESULT __stdcall get_Container(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Container(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Pivot(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Pivot(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::INoFocusCandidateFoundEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::UI::Xaml::Input::FocusNavigationDirection>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_InputDevice(abi_t<Windows::UI::Xaml::Input::FocusInputDeviceKind>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IPointer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_IsInContact(bool* value) = 0;
    virtual HRESULT __stdcall get_IsInRange(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IPointerRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Pointer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetCurrentPoint(::IUnknown* relativeTo, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetIntermediatePoints(::IUnknown* relativeTo, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ITappedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::DoubleTappedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::HoldingEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::KeyEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ManipulationStartedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::ManipulationStartingEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::PointerEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::RightTappedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Input::TappedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
