// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct EnteredBackgroundEventArgs;
struct LeavingBackgroundEventArgs;
struct SuspendingEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

struct BackgroundActivatedEventArgs;
struct CachedFileUpdaterActivatedEventArgs;
struct FileActivatedEventArgs;
struct FileOpenPickerActivatedEventArgs;
struct FileSavePickerActivatedEventArgs;
struct IActivatedEventArgs;
struct LaunchActivatedEventArgs;
struct SearchActivatedEventArgs;
struct ShareTargetActivatedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct CoreApplicationView;
struct IFrameworkView;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

enum class DataPackageOperation : unsigned;
struct DataPackage;
struct DataPackageView;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop {

enum class DragDropModifiers : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct Compositor;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreDispatcher;
struct CoreWindow;
struct CoreWindowEventArgs;
struct VisibilityChangedEventArgs;
struct WindowActivatedEventArgs;
struct WindowSizeChangedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct PointerPoint;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

struct AutomationPeer;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct ContainerContentChangingEventArgs;
struct Control;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

enum class ComponentResourceLocation;
struct FlyoutBase;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Data {

struct BindingBase;
struct BindingExpression;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

enum class KeyTipPlacementMode;
enum class KeyboardNavigationMode;
enum class ManipulationModes : unsigned;
enum class XYFocusKeyboardNavigationMode;
enum class XYFocusNavigationStrategy;
struct AccessKeyDisplayDismissedEventArgs;
struct AccessKeyDisplayRequestedEventArgs;
struct AccessKeyInvokedEventArgs;
struct ContextRequestedEventArgs;
struct DoubleTappedEventHandler;
struct GettingFocusEventArgs;
struct HoldingEventHandler;
struct KeyEventHandler;
struct LosingFocusEventArgs;
struct ManipulationCompletedEventHandler;
struct ManipulationDeltaEventHandler;
struct ManipulationInertiaStartingEventHandler;
struct ManipulationStartedEventHandler;
struct ManipulationStartingEventHandler;
struct NoFocusCandidateFoundEventArgs;
struct Pointer;
struct PointerEventHandler;
struct RightTappedEventHandler;
struct TappedEventHandler;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

struct TypeName;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

enum class ElementCompositeMode;
struct Brush;
struct CacheMode;
struct GeneralTransform;
struct Projection;
struct RectangleGeometry;
struct Transform;
struct XamlLight;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation {

struct EasingFunctionBase;
struct Storyboard;
struct TransitionCollection;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging {

struct BitmapImage;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D {

struct Transform3D;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

enum class ApplicationHighContrastAdjustment : unsigned
{
    None = 0x0,
    Auto = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(ApplicationHighContrastAdjustment)

enum class ApplicationRequiresPointerMode
{
    Auto = 0,
    WhenRequested = 1,
};

enum class ApplicationTheme
{
    Light = 0,
    Dark = 1,
};

enum class AutomationTextAttributesEnum
{
    AnimationStyleAttribute = 40000,
    BackgroundColorAttribute = 40001,
    BulletStyleAttribute = 40002,
    CapStyleAttribute = 40003,
    CultureAttribute = 40004,
    FontNameAttribute = 40005,
    FontSizeAttribute = 40006,
    FontWeightAttribute = 40007,
    ForegroundColorAttribute = 40008,
    HorizontalTextAlignmentAttribute = 40009,
    IndentationFirstLineAttribute = 40010,
    IndentationLeadingAttribute = 40011,
    IndentationTrailingAttribute = 40012,
    IsHiddenAttribute = 40013,
    IsItalicAttribute = 40014,
    IsReadOnlyAttribute = 40015,
    IsSubscriptAttribute = 40016,
    IsSuperscriptAttribute = 40017,
    MarginBottomAttribute = 40018,
    MarginLeadingAttribute = 40019,
    MarginTopAttribute = 40020,
    MarginTrailingAttribute = 40021,
    OutlineStylesAttribute = 40022,
    OverlineColorAttribute = 40023,
    OverlineStyleAttribute = 40024,
    StrikethroughColorAttribute = 40025,
    StrikethroughStyleAttribute = 40026,
    TabsAttribute = 40027,
    TextFlowDirectionsAttribute = 40028,
    UnderlineColorAttribute = 40029,
    UnderlineStyleAttribute = 40030,
    AnnotationTypesAttribute = 40031,
    AnnotationObjectsAttribute = 40032,
    StyleNameAttribute = 40033,
    StyleIdAttribute = 40034,
    LinkAttribute = 40035,
    IsActiveAttribute = 40036,
    SelectionActiveEndAttribute = 40037,
    CaretPositionAttribute = 40038,
    CaretBidiModeAttribute = 40039,
};

enum class DurationType
{
    Automatic = 0,
    TimeSpan = 1,
    Forever = 2,
};

enum class ElementHighContrastAdjustment : unsigned
{
    None = 0x0,
    Application = 0x80000000,
    Auto = 0xFFFFFFFF,
};

DEFINE_ENUM_FLAG_OPERATORS(ElementHighContrastAdjustment)

enum class ElementSoundKind
{
    Focus = 0,
    Invoke = 1,
    Show = 2,
    Hide = 3,
    MovePrevious = 4,
    MoveNext = 5,
    GoBack = 6,
};

enum class ElementSoundMode
{
    Default = 0,
    FocusOnly = 1,
    Off = 2,
};

enum class ElementSoundPlayerState
{
    Auto = 0,
    Off = 1,
    On = 2,
};

enum class ElementTheme
{
    Default = 0,
    Light = 1,
    Dark = 2,
};

enum class FlowDirection
{
    LeftToRight = 0,
    RightToLeft = 1,
};

enum class FocusState
{
    Unfocused = 0,
    Pointer = 1,
    Keyboard = 2,
    Programmatic = 3,
};

enum class FocusVisualKind
{
    DottedLine = 0,
    HighVisibility = 1,
};

enum class FontCapitals
{
    Normal = 0,
    AllSmallCaps = 1,
    SmallCaps = 2,
    AllPetiteCaps = 3,
    PetiteCaps = 4,
    Unicase = 5,
    Titling = 6,
};

enum class FontEastAsianLanguage
{
    Normal = 0,
    HojoKanji = 1,
    Jis04 = 2,
    Jis78 = 3,
    Jis83 = 4,
    Jis90 = 5,
    NlcKanji = 6,
    Simplified = 7,
    Traditional = 8,
    TraditionalNames = 9,
};

enum class FontEastAsianWidths
{
    Normal = 0,
    Full = 1,
    Half = 2,
    Proportional = 3,
    Quarter = 4,
    Third = 5,
};

enum class FontFraction
{
    Normal = 0,
    Stacked = 1,
    Slashed = 2,
};

enum class FontNumeralAlignment
{
    Normal = 0,
    Proportional = 1,
    Tabular = 2,
};

enum class FontNumeralStyle
{
    Normal = 0,
    Lining = 1,
    OldStyle = 2,
};

enum class FontVariants
{
    Normal = 0,
    Superscript = 1,
    Subscript = 2,
    Ordinal = 3,
    Inferior = 4,
    Ruby = 5,
};

enum class GridUnitType
{
    Auto = 0,
    Pixel = 1,
    Star = 2,
};

enum class HorizontalAlignment
{
    Left = 0,
    Center = 1,
    Right = 2,
    Stretch = 3,
};

enum class LineStackingStrategy
{
    MaxHeight = 0,
    BlockLineHeight = 1,
    BaselineToBaseline = 2,
};

enum class OpticalMarginAlignment
{
    None = 0,
    TrimSideBearings = 1,
};

enum class TextAlignment
{
    Center = 0,
    Left = 1,
    Right = 2,
    Justify = 3,
    DetectFromContent = 4,
};

enum class TextLineBounds
{
    Full = 0,
    TrimToCapHeight = 1,
    TrimToBaseline = 2,
    Tight = 3,
};

enum class TextReadingOrder
{
    Default [[deprecated("Consider using UseFlowDirection, which is an improved version of Default. For more info, see MSDN.")]] = 0,
    UseFlowDirection = 0,
    DetectFromContent = 1,
};

enum class TextTrimming
{
    None = 0,
    CharacterEllipsis = 1,
    WordEllipsis = 2,
    Clip = 3,
};

enum class TextWrapping
{
    NoWrap = 1,
    Wrap = 2,
    WrapWholeWords = 3,
};

enum class VerticalAlignment
{
    Top = 0,
    Center = 1,
    Bottom = 2,
    Stretch = 3,
};

enum class Visibility
{
    Visible = 0,
    Collapsed = 1,
};

struct IAdaptiveTrigger;
struct IAdaptiveTriggerFactory;
struct IAdaptiveTriggerStatics;
struct IApplication;
struct IApplication2;
struct IApplication3;
struct IApplicationFactory;
struct IApplicationInitializationCallbackParams;
struct IApplicationOverrides;
struct IApplicationOverrides2;
struct IApplicationStatics;
struct IBindingFailedEventArgs;
struct IBringIntoViewOptions;
struct ICornerRadiusHelper;
struct ICornerRadiusHelperStatics;
struct IDataContextChangedEventArgs;
struct IDataTemplate;
struct IDataTemplateExtension;
struct IDataTemplateFactory;
struct IDataTemplateKey;
struct IDataTemplateKeyFactory;
struct IDataTemplateStatics2;
struct IDebugSettings;
struct IDebugSettings2;
struct IDebugSettings3;
struct IDependencyObject;
struct IDependencyObject2;
struct IDependencyObjectCollectionFactory;
struct IDependencyObjectFactory;
struct IDependencyProperty;
struct IDependencyPropertyChangedEventArgs;
struct IDependencyPropertyStatics;
struct IDispatcherTimer;
struct IDispatcherTimerFactory;
struct IDragEventArgs;
struct IDragEventArgs2;
struct IDragEventArgs3;
struct IDragOperationDeferral;
struct IDragStartingEventArgs;
struct IDragStartingEventArgs2;
struct IDragUI;
struct IDragUIOverride;
struct IDropCompletedEventArgs;
struct IDurationHelper;
struct IDurationHelperStatics;
struct IElementSoundPlayer;
struct IElementSoundPlayerStatics;
struct IEventTrigger;
struct IExceptionRoutedEventArgs;
struct IExceptionRoutedEventArgsFactory;
struct IFrameworkElement;
struct IFrameworkElement2;
struct IFrameworkElement3;
struct IFrameworkElement4;
struct IFrameworkElementFactory;
struct IFrameworkElementOverrides;
struct IFrameworkElementOverrides2;
struct IFrameworkElementStatics;
struct IFrameworkElementStatics2;
struct IFrameworkElementStatics4;
struct IFrameworkElementStatics5;
struct IFrameworkTemplate;
struct IFrameworkTemplateFactory;
struct IFrameworkView;
struct IFrameworkViewSource;
struct IGridLengthHelper;
struct IGridLengthHelperStatics;
struct IMediaFailedRoutedEventArgs;
struct IPointHelper;
struct IPointHelperStatics;
struct IPropertyMetadata;
struct IPropertyMetadataFactory;
struct IPropertyMetadataStatics;
struct IPropertyPath;
struct IPropertyPathFactory;
struct IRectHelper;
struct IRectHelperStatics;
struct IResourceDictionary;
struct IResourceDictionaryFactory;
struct IRoutedEvent;
struct IRoutedEventArgs;
struct IRoutedEventArgsFactory;
struct ISetter;
struct ISetter2;
struct ISetterBase;
struct ISetterBaseCollection;
struct ISetterBaseFactory;
struct ISetterFactory;
struct ISizeChangedEventArgs;
struct ISizeHelper;
struct ISizeHelperStatics;
struct IStateTrigger;
struct IStateTriggerBase;
struct IStateTriggerBaseFactory;
struct IStateTriggerBaseProtected;
struct IStateTriggerStatics;
struct IStyle;
struct IStyleFactory;
struct ITargetPropertyPath;
struct ITargetPropertyPathFactory;
struct IThicknessHelper;
struct IThicknessHelperStatics;
struct ITriggerAction;
struct ITriggerActionFactory;
struct ITriggerBase;
struct ITriggerBaseFactory;
struct IUIElement;
struct IUIElement2;
struct IUIElement3;
struct IUIElement4;
struct IUIElement5;
struct IUIElementFactory;
struct IUIElementOverrides;
struct IUIElementStatics;
struct IUIElementStatics2;
struct IUIElementStatics3;
struct IUIElementStatics4;
struct IUIElementStatics5;
struct IUIElementStatics6;
struct IUnhandledExceptionEventArgs;
struct IVisualState;
struct IVisualState2;
struct IVisualStateChangedEventArgs;
struct IVisualStateGroup;
struct IVisualStateManager;
struct IVisualStateManagerFactory;
struct IVisualStateManagerOverrides;
struct IVisualStateManagerProtected;
struct IVisualStateManagerStatics;
struct IVisualTransition;
struct IVisualTransitionFactory;
struct IWindow;
struct IWindow2;
struct IWindow3;
struct IWindowCreatedEventArgs;
struct IWindowStatics;
struct AdaptiveTrigger;
struct Application;
struct ApplicationInitializationCallbackParams;
struct BindingFailedEventArgs;
struct BringIntoViewOptions;
struct CornerRadiusHelper;
struct DataContextChangedEventArgs;
struct DataTemplate;
struct DataTemplateKey;
struct DebugSettings;
struct DependencyObject;
struct DependencyObjectCollection;
struct DependencyProperty;
struct DependencyPropertyChangedEventArgs;
struct DispatcherTimer;
struct DragEventArgs;
struct DragOperationDeferral;
struct DragStartingEventArgs;
struct DragUI;
struct DragUIOverride;
struct DropCompletedEventArgs;
struct DurationHelper;
struct ElementSoundPlayer;
struct EventTrigger;
struct ExceptionRoutedEventArgs;
struct FrameworkElement;
struct FrameworkTemplate;
struct FrameworkView;
struct FrameworkViewSource;
struct GridLengthHelper;
struct MediaFailedRoutedEventArgs;
struct PointHelper;
struct PropertyMetadata;
struct PropertyPath;
struct RectHelper;
struct ResourceDictionary;
struct RoutedEvent;
struct RoutedEventArgs;
struct Setter;
struct SetterBase;
struct SetterBaseCollection;
struct SizeChangedEventArgs;
struct SizeHelper;
struct StateTrigger;
struct StateTriggerBase;
struct Style;
struct TargetPropertyPath;
struct ThicknessHelper;
struct TriggerAction;
struct TriggerActionCollection;
struct TriggerBase;
struct TriggerCollection;
struct UIElement;
struct UnhandledExceptionEventArgs;
struct VisualState;
struct VisualStateChangedEventArgs;
struct VisualStateGroup;
struct VisualStateManager;
struct VisualTransition;
struct Window;
struct WindowCreatedEventArgs;
struct CornerRadius;
struct Duration;
struct GridLength;
struct Thickness;
struct ApplicationInitializationCallback;
struct BindingFailedEventHandler;
struct CreateDefaultValueCallback;
struct DependencyPropertyChangedCallback;
struct DependencyPropertyChangedEventHandler;
struct DragEventHandler;
struct EnteredBackgroundEventHandler;
struct ExceptionRoutedEventHandler;
struct LeavingBackgroundEventHandler;
struct PropertyChangedCallback;
struct RoutedEventHandler;
struct SizeChangedEventHandler;
struct SuspendingEventHandler;
struct UnhandledExceptionEventHandler;
struct VisualStateChangedEventHandler;
struct WindowActivatedEventHandler;
struct WindowClosedEventHandler;
struct WindowSizeChangedEventHandler;
struct WindowVisibilityChangedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::IAdaptiveTrigger>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IAdaptiveTriggerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IAdaptiveTriggerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplication>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplication2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplication3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplicationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplicationInitializationCallbackParams>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplicationOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplicationOverrides2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IApplicationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IBindingFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IBringIntoViewOptions>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ICornerRadiusHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ICornerRadiusHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataContextChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplate>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplateExtension>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplateFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplateKey>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplateKeyFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDataTemplateStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDebugSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDebugSettings2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDebugSettings3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyObject>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyObject2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyObjectCollectionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyObjectFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyProperty>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDependencyPropertyStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDispatcherTimer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDispatcherTimerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragEventArgs3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragOperationDeferral>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragStartingEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragUI>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDragUIOverride>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDropCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDurationHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IDurationHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IElementSoundPlayer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IElementSoundPlayerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IEventTrigger>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IExceptionRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElement>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElement2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElement3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElement4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementOverrides2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkElementStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkTemplate>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkTemplateFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkView>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IFrameworkViewSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IGridLengthHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IGridLengthHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPointHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPointHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPropertyMetadata>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPropertyMetadataFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPropertyMetadataStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPropertyPath>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IPropertyPathFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IRectHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IRectHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IResourceDictionary>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IResourceDictionaryFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IRoutedEvent>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IRoutedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IRoutedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetter2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetterBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetterBaseCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetterBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISetterFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISizeChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISizeHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ISizeHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStateTrigger>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStateTriggerBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStateTriggerBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStateTriggerBaseProtected>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStateTriggerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStyle>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IStyleFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITargetPropertyPath>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITargetPropertyPathFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IThicknessHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IThicknessHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITriggerAction>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITriggerActionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITriggerBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::ITriggerBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElement>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElement2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElement3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElement4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElement5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUIElementStatics6>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IUnhandledExceptionEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualState>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualState2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateGroup>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateManagerFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateManagerOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateManagerProtected>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualStateManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IVisualTransitionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IWindow>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IWindow2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IWindow3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IWindowCreatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::IWindowStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::AdaptiveTrigger>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Application>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ApplicationInitializationCallbackParams>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::BindingFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::BringIntoViewOptions>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::CornerRadiusHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DataContextChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DataTemplate>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DataTemplateKey>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DebugSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DependencyObject>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DependencyObjectCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DependencyProperty>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DispatcherTimer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DragEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DragOperationDeferral>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DragStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DragUI>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DragUIOverride>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DropCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::DurationHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ElementSoundPlayer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::EventTrigger>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ExceptionRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::FrameworkElement>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::FrameworkTemplate>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::FrameworkView>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::FrameworkViewSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::GridLengthHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::MediaFailedRoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::PointHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::PropertyMetadata>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::PropertyPath>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::RectHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ResourceDictionary>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::RoutedEvent>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::RoutedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Setter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::SetterBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::SetterBaseCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::SizeChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::SizeHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::StateTrigger>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::StateTriggerBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Style>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::TargetPropertyPath>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ThicknessHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::TriggerAction>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::TriggerActionCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::TriggerBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::TriggerCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::UIElement>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::UnhandledExceptionEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::VisualState>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::VisualStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::VisualStateGroup>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::VisualStateManager>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::VisualTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Window>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::WindowCreatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::ApplicationHighContrastAdjustment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ApplicationRequiresPointerMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ApplicationTheme>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::AutomationTextAttributesEnum>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::DurationType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ElementHighContrastAdjustment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ElementSoundKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ElementSoundMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ElementSoundPlayerState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::ElementTheme>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FlowDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FocusState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FocusVisualKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontCapitals>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontEastAsianLanguage>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontEastAsianWidths>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontFraction>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontNumeralAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontNumeralStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::FontVariants>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::GridUnitType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::HorizontalAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::LineStackingStrategy>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::OpticalMarginAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::TextAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::TextLineBounds>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::TextReadingOrder>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::TextTrimming>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::TextWrapping>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::VerticalAlignment>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Visibility>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::CornerRadius>{ using type = struct_category<double,double,double,double>; };
template <> struct category<Windows::UI::Xaml::Duration>{ using type = struct_category<Windows::Foundation::TimeSpan,Windows::UI::Xaml::DurationType>; };
template <> struct category<Windows::UI::Xaml::GridLength>{ using type = struct_category<double,Windows::UI::Xaml::GridUnitType>; };
template <> struct category<Windows::UI::Xaml::Thickness>{ using type = struct_category<double,double,double,double>; };
template <> struct category<Windows::UI::Xaml::ApplicationInitializationCallback>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::BindingFailedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::CreateDefaultValueCallback>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedCallback>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::DragEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::EnteredBackgroundEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::ExceptionRoutedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::LeavingBackgroundEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::PropertyChangedCallback>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::RoutedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::SizeChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::SuspendingEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::UnhandledExceptionEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::VisualStateChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::WindowActivatedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::WindowClosedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::WindowSizeChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::IAdaptiveTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTrigger" }; };
template <> struct name<Windows::UI::Xaml::IAdaptiveTriggerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTriggerFactory" }; };
template <> struct name<Windows::UI::Xaml::IAdaptiveTriggerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IAdaptiveTriggerStatics" }; };
template <> struct name<Windows::UI::Xaml::IApplication>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplication" }; };
template <> struct name<Windows::UI::Xaml::IApplication2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplication2" }; };
template <> struct name<Windows::UI::Xaml::IApplication3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplication3" }; };
template <> struct name<Windows::UI::Xaml::IApplicationFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationFactory" }; };
template <> struct name<Windows::UI::Xaml::IApplicationInitializationCallbackParams>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationInitializationCallbackParams" }; };
template <> struct name<Windows::UI::Xaml::IApplicationOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationOverrides" }; };
template <> struct name<Windows::UI::Xaml::IApplicationOverrides2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationOverrides2" }; };
template <> struct name<Windows::UI::Xaml::IApplicationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IApplicationStatics" }; };
template <> struct name<Windows::UI::Xaml::IBindingFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IBindingFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IBringIntoViewOptions>{ static constexpr auto & value{ L"Windows.UI.Xaml.IBringIntoViewOptions" }; };
template <> struct name<Windows::UI::Xaml::ICornerRadiusHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.ICornerRadiusHelper" }; };
template <> struct name<Windows::UI::Xaml::ICornerRadiusHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.ICornerRadiusHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IDataContextChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataContextChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplate>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplate" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplateExtension>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateExtension" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplateFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateFactory" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplateKey>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateKey" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplateKeyFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateKeyFactory" }; };
template <> struct name<Windows::UI::Xaml::IDataTemplateStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDataTemplateStatics2" }; };
template <> struct name<Windows::UI::Xaml::IDebugSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings" }; };
template <> struct name<Windows::UI::Xaml::IDebugSettings2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings2" }; };
template <> struct name<Windows::UI::Xaml::IDebugSettings3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDebugSettings3" }; };
template <> struct name<Windows::UI::Xaml::IDependencyObject>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObject" }; };
template <> struct name<Windows::UI::Xaml::IDependencyObject2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObject2" }; };
template <> struct name<Windows::UI::Xaml::IDependencyObjectCollectionFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObjectCollectionFactory" }; };
template <> struct name<Windows::UI::Xaml::IDependencyObjectFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyObjectFactory" }; };
template <> struct name<Windows::UI::Xaml::IDependencyProperty>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyProperty" }; };
template <> struct name<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyPropertyChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IDependencyPropertyStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDependencyPropertyStatics" }; };
template <> struct name<Windows::UI::Xaml::IDispatcherTimer>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDispatcherTimer" }; };
template <> struct name<Windows::UI::Xaml::IDispatcherTimerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDispatcherTimerFactory" }; };
template <> struct name<Windows::UI::Xaml::IDragEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IDragEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::IDragEventArgs3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragEventArgs3" }; };
template <> struct name<Windows::UI::Xaml::IDragOperationDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragOperationDeferral" }; };
template <> struct name<Windows::UI::Xaml::IDragStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragStartingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IDragStartingEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragStartingEventArgs2" }; };
template <> struct name<Windows::UI::Xaml::IDragUI>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragUI" }; };
template <> struct name<Windows::UI::Xaml::IDragUIOverride>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDragUIOverride" }; };
template <> struct name<Windows::UI::Xaml::IDropCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDropCompletedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IDurationHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDurationHelper" }; };
template <> struct name<Windows::UI::Xaml::IDurationHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IDurationHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IElementSoundPlayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.IElementSoundPlayer" }; };
template <> struct name<Windows::UI::Xaml::IElementSoundPlayerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IElementSoundPlayerStatics" }; };
template <> struct name<Windows::UI::Xaml::IEventTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.IEventTrigger" }; };
template <> struct name<Windows::UI::Xaml::IExceptionRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IExceptionRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IExceptionRoutedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElement2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement2" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElement3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement3" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElement4>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElement4" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementFactory" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementOverrides" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementOverrides2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementOverrides2" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics2" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics4" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkElementStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkElementStatics5" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkTemplate>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkTemplate" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkTemplateFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkTemplateFactory" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkView>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkView" }; };
template <> struct name<Windows::UI::Xaml::IFrameworkViewSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.IFrameworkViewSource" }; };
template <> struct name<Windows::UI::Xaml::IGridLengthHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.IGridLengthHelper" }; };
template <> struct name<Windows::UI::Xaml::IGridLengthHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IGridLengthHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IMediaFailedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IPointHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPointHelper" }; };
template <> struct name<Windows::UI::Xaml::IPointHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPointHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IPropertyMetadata>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadata" }; };
template <> struct name<Windows::UI::Xaml::IPropertyMetadataFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadataFactory" }; };
template <> struct name<Windows::UI::Xaml::IPropertyMetadataStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyMetadataStatics" }; };
template <> struct name<Windows::UI::Xaml::IPropertyPath>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyPath" }; };
template <> struct name<Windows::UI::Xaml::IPropertyPathFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IPropertyPathFactory" }; };
template <> struct name<Windows::UI::Xaml::IRectHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.IRectHelper" }; };
template <> struct name<Windows::UI::Xaml::IRectHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IRectHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IResourceDictionary>{ static constexpr auto & value{ L"Windows.UI.Xaml.IResourceDictionary" }; };
template <> struct name<Windows::UI::Xaml::IResourceDictionaryFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IResourceDictionaryFactory" }; };
template <> struct name<Windows::UI::Xaml::IRoutedEvent>{ static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEvent" }; };
template <> struct name<Windows::UI::Xaml::IRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IRoutedEventArgsFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IRoutedEventArgsFactory" }; };
template <> struct name<Windows::UI::Xaml::ISetter>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetter" }; };
template <> struct name<Windows::UI::Xaml::ISetter2>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetter2" }; };
template <> struct name<Windows::UI::Xaml::ISetterBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBase" }; };
template <> struct name<Windows::UI::Xaml::ISetterBaseCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBaseCollection" }; };
template <> struct name<Windows::UI::Xaml::ISetterBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetterBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::ISetterFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISetterFactory" }; };
template <> struct name<Windows::UI::Xaml::ISizeChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISizeChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::ISizeHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISizeHelper" }; };
template <> struct name<Windows::UI::Xaml::ISizeHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.ISizeHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::IStateTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStateTrigger" }; };
template <> struct name<Windows::UI::Xaml::IStateTriggerBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBase" }; };
template <> struct name<Windows::UI::Xaml::IStateTriggerBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::IStateTriggerBaseProtected>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerBaseProtected" }; };
template <> struct name<Windows::UI::Xaml::IStateTriggerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStateTriggerStatics" }; };
template <> struct name<Windows::UI::Xaml::IStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStyle" }; };
template <> struct name<Windows::UI::Xaml::IStyleFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IStyleFactory" }; };
template <> struct name<Windows::UI::Xaml::ITargetPropertyPath>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITargetPropertyPath" }; };
template <> struct name<Windows::UI::Xaml::ITargetPropertyPathFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITargetPropertyPathFactory" }; };
template <> struct name<Windows::UI::Xaml::IThicknessHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.IThicknessHelper" }; };
template <> struct name<Windows::UI::Xaml::IThicknessHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IThicknessHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::ITriggerAction>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerAction" }; };
template <> struct name<Windows::UI::Xaml::ITriggerActionFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerActionFactory" }; };
template <> struct name<Windows::UI::Xaml::ITriggerBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerBase" }; };
template <> struct name<Windows::UI::Xaml::ITriggerBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.ITriggerBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::IUIElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement" }; };
template <> struct name<Windows::UI::Xaml::IUIElement2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement2" }; };
template <> struct name<Windows::UI::Xaml::IUIElement3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement3" }; };
template <> struct name<Windows::UI::Xaml::IUIElement4>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement4" }; };
template <> struct name<Windows::UI::Xaml::IUIElement5>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElement5" }; };
template <> struct name<Windows::UI::Xaml::IUIElementFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementFactory" }; };
template <> struct name<Windows::UI::Xaml::IUIElementOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementOverrides" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics2" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics3" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics4" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics5" }; };
template <> struct name<Windows::UI::Xaml::IUIElementStatics6>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUIElementStatics6" }; };
template <> struct name<Windows::UI::Xaml::IUnhandledExceptionEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IUnhandledExceptionEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IVisualState>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualState" }; };
template <> struct name<Windows::UI::Xaml::IVisualState2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualState2" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateGroup>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateGroup" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManager" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateManagerFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerFactory" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateManagerOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerOverrides" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateManagerProtected>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerProtected" }; };
template <> struct name<Windows::UI::Xaml::IVisualStateManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualStateManagerStatics" }; };
template <> struct name<Windows::UI::Xaml::IVisualTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualTransition" }; };
template <> struct name<Windows::UI::Xaml::IVisualTransitionFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.IVisualTransitionFactory" }; };
template <> struct name<Windows::UI::Xaml::IWindow>{ static constexpr auto & value{ L"Windows.UI.Xaml.IWindow" }; };
template <> struct name<Windows::UI::Xaml::IWindow2>{ static constexpr auto & value{ L"Windows.UI.Xaml.IWindow2" }; };
template <> struct name<Windows::UI::Xaml::IWindow3>{ static constexpr auto & value{ L"Windows.UI.Xaml.IWindow3" }; };
template <> struct name<Windows::UI::Xaml::IWindowCreatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.IWindowCreatedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::IWindowStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.IWindowStatics" }; };
template <> struct name<Windows::UI::Xaml::AdaptiveTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.AdaptiveTrigger" }; };
template <> struct name<Windows::UI::Xaml::Application>{ static constexpr auto & value{ L"Windows.UI.Xaml.Application" }; };
template <> struct name<Windows::UI::Xaml::ApplicationInitializationCallbackParams>{ static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationInitializationCallbackParams" }; };
template <> struct name<Windows::UI::Xaml::BindingFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.BindingFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::BringIntoViewOptions>{ static constexpr auto & value{ L"Windows.UI.Xaml.BringIntoViewOptions" }; };
template <> struct name<Windows::UI::Xaml::CornerRadiusHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.CornerRadiusHelper" }; };
template <> struct name<Windows::UI::Xaml::DataContextChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.DataContextChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::DataTemplate>{ static constexpr auto & value{ L"Windows.UI.Xaml.DataTemplate" }; };
template <> struct name<Windows::UI::Xaml::DataTemplateKey>{ static constexpr auto & value{ L"Windows.UI.Xaml.DataTemplateKey" }; };
template <> struct name<Windows::UI::Xaml::DebugSettings>{ static constexpr auto & value{ L"Windows.UI.Xaml.DebugSettings" }; };
template <> struct name<Windows::UI::Xaml::DependencyObject>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyObject" }; };
template <> struct name<Windows::UI::Xaml::DependencyObjectCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyObjectCollection" }; };
template <> struct name<Windows::UI::Xaml::DependencyProperty>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyProperty" }; };
template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::DispatcherTimer>{ static constexpr auto & value{ L"Windows.UI.Xaml.DispatcherTimer" }; };
template <> struct name<Windows::UI::Xaml::DragEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragEventArgs" }; };
template <> struct name<Windows::UI::Xaml::DragOperationDeferral>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragOperationDeferral" }; };
template <> struct name<Windows::UI::Xaml::DragStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragStartingEventArgs" }; };
template <> struct name<Windows::UI::Xaml::DragUI>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragUI" }; };
template <> struct name<Windows::UI::Xaml::DragUIOverride>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragUIOverride" }; };
template <> struct name<Windows::UI::Xaml::DropCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.DropCompletedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::DurationHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.DurationHelper" }; };
template <> struct name<Windows::UI::Xaml::ElementSoundPlayer>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundPlayer" }; };
template <> struct name<Windows::UI::Xaml::EventTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.EventTrigger" }; };
template <> struct name<Windows::UI::Xaml::ExceptionRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.ExceptionRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::FrameworkElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkElement" }; };
template <> struct name<Windows::UI::Xaml::FrameworkTemplate>{ static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkTemplate" }; };
template <> struct name<Windows::UI::Xaml::FrameworkView>{ static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkView" }; };
template <> struct name<Windows::UI::Xaml::FrameworkViewSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.FrameworkViewSource" }; };
template <> struct name<Windows::UI::Xaml::GridLengthHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.GridLengthHelper" }; };
template <> struct name<Windows::UI::Xaml::MediaFailedRoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.MediaFailedRoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::PointHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.PointHelper" }; };
template <> struct name<Windows::UI::Xaml::PropertyMetadata>{ static constexpr auto & value{ L"Windows.UI.Xaml.PropertyMetadata" }; };
template <> struct name<Windows::UI::Xaml::PropertyPath>{ static constexpr auto & value{ L"Windows.UI.Xaml.PropertyPath" }; };
template <> struct name<Windows::UI::Xaml::RectHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.RectHelper" }; };
template <> struct name<Windows::UI::Xaml::ResourceDictionary>{ static constexpr auto & value{ L"Windows.UI.Xaml.ResourceDictionary" }; };
template <> struct name<Windows::UI::Xaml::RoutedEvent>{ static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEvent" }; };
template <> struct name<Windows::UI::Xaml::RoutedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Setter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Setter" }; };
template <> struct name<Windows::UI::Xaml::SetterBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.SetterBase" }; };
template <> struct name<Windows::UI::Xaml::SetterBaseCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.SetterBaseCollection" }; };
template <> struct name<Windows::UI::Xaml::SizeChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.SizeChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::SizeHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.SizeHelper" }; };
template <> struct name<Windows::UI::Xaml::StateTrigger>{ static constexpr auto & value{ L"Windows.UI.Xaml.StateTrigger" }; };
template <> struct name<Windows::UI::Xaml::StateTriggerBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.StateTriggerBase" }; };
template <> struct name<Windows::UI::Xaml::Style>{ static constexpr auto & value{ L"Windows.UI.Xaml.Style" }; };
template <> struct name<Windows::UI::Xaml::TargetPropertyPath>{ static constexpr auto & value{ L"Windows.UI.Xaml.TargetPropertyPath" }; };
template <> struct name<Windows::UI::Xaml::ThicknessHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.ThicknessHelper" }; };
template <> struct name<Windows::UI::Xaml::TriggerAction>{ static constexpr auto & value{ L"Windows.UI.Xaml.TriggerAction" }; };
template <> struct name<Windows::UI::Xaml::TriggerActionCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.TriggerActionCollection" }; };
template <> struct name<Windows::UI::Xaml::TriggerBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.TriggerBase" }; };
template <> struct name<Windows::UI::Xaml::TriggerCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.TriggerCollection" }; };
template <> struct name<Windows::UI::Xaml::UIElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.UIElement" }; };
template <> struct name<Windows::UI::Xaml::UnhandledExceptionEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.UnhandledExceptionEventArgs" }; };
template <> struct name<Windows::UI::Xaml::VisualState>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualState" }; };
template <> struct name<Windows::UI::Xaml::VisualStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateChangedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::VisualStateGroup>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateGroup" }; };
template <> struct name<Windows::UI::Xaml::VisualStateManager>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateManager" }; };
template <> struct name<Windows::UI::Xaml::VisualTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualTransition" }; };
template <> struct name<Windows::UI::Xaml::Window>{ static constexpr auto & value{ L"Windows.UI.Xaml.Window" }; };
template <> struct name<Windows::UI::Xaml::WindowCreatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.WindowCreatedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::ApplicationHighContrastAdjustment>{ static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationHighContrastAdjustment" }; };
template <> struct name<Windows::UI::Xaml::ApplicationRequiresPointerMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationRequiresPointerMode" }; };
template <> struct name<Windows::UI::Xaml::ApplicationTheme>{ static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationTheme" }; };
template <> struct name<Windows::UI::Xaml::AutomationTextAttributesEnum>{ static constexpr auto & value{ L"Windows.UI.Xaml.AutomationTextAttributesEnum" }; };
template <> struct name<Windows::UI::Xaml::DurationType>{ static constexpr auto & value{ L"Windows.UI.Xaml.DurationType" }; };
template <> struct name<Windows::UI::Xaml::ElementHighContrastAdjustment>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementHighContrastAdjustment" }; };
template <> struct name<Windows::UI::Xaml::ElementSoundKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundKind" }; };
template <> struct name<Windows::UI::Xaml::ElementSoundMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundMode" }; };
template <> struct name<Windows::UI::Xaml::ElementSoundPlayerState>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementSoundPlayerState" }; };
template <> struct name<Windows::UI::Xaml::ElementTheme>{ static constexpr auto & value{ L"Windows.UI.Xaml.ElementTheme" }; };
template <> struct name<Windows::UI::Xaml::FlowDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.FlowDirection" }; };
template <> struct name<Windows::UI::Xaml::FocusState>{ static constexpr auto & value{ L"Windows.UI.Xaml.FocusState" }; };
template <> struct name<Windows::UI::Xaml::FocusVisualKind>{ static constexpr auto & value{ L"Windows.UI.Xaml.FocusVisualKind" }; };
template <> struct name<Windows::UI::Xaml::FontCapitals>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontCapitals" }; };
template <> struct name<Windows::UI::Xaml::FontEastAsianLanguage>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontEastAsianLanguage" }; };
template <> struct name<Windows::UI::Xaml::FontEastAsianWidths>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontEastAsianWidths" }; };
template <> struct name<Windows::UI::Xaml::FontFraction>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontFraction" }; };
template <> struct name<Windows::UI::Xaml::FontNumeralAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontNumeralAlignment" }; };
template <> struct name<Windows::UI::Xaml::FontNumeralStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontNumeralStyle" }; };
template <> struct name<Windows::UI::Xaml::FontVariants>{ static constexpr auto & value{ L"Windows.UI.Xaml.FontVariants" }; };
template <> struct name<Windows::UI::Xaml::GridUnitType>{ static constexpr auto & value{ L"Windows.UI.Xaml.GridUnitType" }; };
template <> struct name<Windows::UI::Xaml::HorizontalAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.HorizontalAlignment" }; };
template <> struct name<Windows::UI::Xaml::LineStackingStrategy>{ static constexpr auto & value{ L"Windows.UI.Xaml.LineStackingStrategy" }; };
template <> struct name<Windows::UI::Xaml::OpticalMarginAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.OpticalMarginAlignment" }; };
template <> struct name<Windows::UI::Xaml::TextAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.TextAlignment" }; };
template <> struct name<Windows::UI::Xaml::TextLineBounds>{ static constexpr auto & value{ L"Windows.UI.Xaml.TextLineBounds" }; };
template <> struct name<Windows::UI::Xaml::TextReadingOrder>{ static constexpr auto & value{ L"Windows.UI.Xaml.TextReadingOrder" }; };
template <> struct name<Windows::UI::Xaml::TextTrimming>{ static constexpr auto & value{ L"Windows.UI.Xaml.TextTrimming" }; };
template <> struct name<Windows::UI::Xaml::TextWrapping>{ static constexpr auto & value{ L"Windows.UI.Xaml.TextWrapping" }; };
template <> struct name<Windows::UI::Xaml::VerticalAlignment>{ static constexpr auto & value{ L"Windows.UI.Xaml.VerticalAlignment" }; };
template <> struct name<Windows::UI::Xaml::Visibility>{ static constexpr auto & value{ L"Windows.UI.Xaml.Visibility" }; };
template <> struct name<Windows::UI::Xaml::CornerRadius>{ static constexpr auto & value{ L"Windows.UI.Xaml.CornerRadius" }; };
template <> struct name<Windows::UI::Xaml::Duration>{ static constexpr auto & value{ L"Windows.UI.Xaml.Duration" }; };
template <> struct name<Windows::UI::Xaml::GridLength>{ static constexpr auto & value{ L"Windows.UI.Xaml.GridLength" }; };
template <> struct name<Windows::UI::Xaml::Thickness>{ static constexpr auto & value{ L"Windows.UI.Xaml.Thickness" }; };
template <> struct name<Windows::UI::Xaml::ApplicationInitializationCallback>{ static constexpr auto & value{ L"Windows.UI.Xaml.ApplicationInitializationCallback" }; };
template <> struct name<Windows::UI::Xaml::BindingFailedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.BindingFailedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::CreateDefaultValueCallback>{ static constexpr auto & value{ L"Windows.UI.Xaml.CreateDefaultValueCallback" }; };
template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedCallback>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedCallback" }; };
template <> struct name<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.DependencyPropertyChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::DragEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.DragEventHandler" }; };
template <> struct name<Windows::UI::Xaml::EnteredBackgroundEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.EnteredBackgroundEventHandler" }; };
template <> struct name<Windows::UI::Xaml::ExceptionRoutedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.ExceptionRoutedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::LeavingBackgroundEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.LeavingBackgroundEventHandler" }; };
template <> struct name<Windows::UI::Xaml::PropertyChangedCallback>{ static constexpr auto & value{ L"Windows.UI.Xaml.PropertyChangedCallback" }; };
template <> struct name<Windows::UI::Xaml::RoutedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.RoutedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::SizeChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.SizeChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::SuspendingEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.SuspendingEventHandler" }; };
template <> struct name<Windows::UI::Xaml::UnhandledExceptionEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.UnhandledExceptionEventHandler" }; };
template <> struct name<Windows::UI::Xaml::VisualStateChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.VisualStateChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::WindowActivatedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.WindowActivatedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::WindowClosedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.WindowClosedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::WindowSizeChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.WindowSizeChangedEventHandler" }; };
template <> struct name<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.WindowVisibilityChangedEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::IAdaptiveTrigger>{ static constexpr GUID value{ 0xA5F04119,0x0CD9,0x49F1,{ 0xA2,0x3F,0x44,0xE5,0x47,0xAB,0x9F,0x1A } }; };
template <> struct guid<Windows::UI::Xaml::IAdaptiveTriggerFactory>{ static constexpr GUID value{ 0xC966D482,0x5AEB,0x4841,{ 0x92,0x47,0xC1,0xA0,0xBD,0xD6,0xF5,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::IAdaptiveTriggerStatics>{ static constexpr GUID value{ 0xB92E29EA,0x1615,0x4350,{ 0x9C,0x3B,0x92,0xB2,0x98,0x6B,0xF4,0x44 } }; };
template <> struct guid<Windows::UI::Xaml::IApplication>{ static constexpr GUID value{ 0x74B861A1,0x7487,0x46A9,{ 0x9A,0x6E,0xC7,0x8B,0x51,0x27,0x26,0xC5 } }; };
template <> struct guid<Windows::UI::Xaml::IApplication2>{ static constexpr GUID value{ 0x019104BE,0x522A,0x5904,{ 0xF5,0x2F,0xDE,0x72,0x01,0x04,0x29,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::IApplication3>{ static constexpr GUID value{ 0xB775AD7C,0x18B8,0x45CA,{ 0xA1,0xB0,0xDC,0x48,0x3E,0x4B,0x10,0x28 } }; };
template <> struct guid<Windows::UI::Xaml::IApplicationFactory>{ static constexpr GUID value{ 0x93BBE361,0xBE5A,0x4EE3,{ 0xB4,0xA3,0x95,0x11,0x8D,0xC9,0x7A,0x89 } }; };
template <> struct guid<Windows::UI::Xaml::IApplicationInitializationCallbackParams>{ static constexpr GUID value{ 0x751B792E,0x5772,0x4488,{ 0x8B,0x87,0xF5,0x47,0xFA,0xA6,0x44,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::IApplicationOverrides>{ static constexpr GUID value{ 0x25F99FF7,0x9347,0x459A,{ 0x9F,0xAC,0xB2,0xD0,0xE1,0x1C,0x1A,0x0F } }; };
template <> struct guid<Windows::UI::Xaml::IApplicationOverrides2>{ static constexpr GUID value{ 0xDB5CD2B9,0xD3B4,0x558C,{ 0xC6,0x4E,0x04,0x34,0xFD,0x1B,0xD8,0x89 } }; };
template <> struct guid<Windows::UI::Xaml::IApplicationStatics>{ static constexpr GUID value{ 0x06499997,0xF7B4,0x45FE,{ 0xB7,0x63,0x75,0x77,0xD1,0xD3,0xCB,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::IBindingFailedEventArgs>{ static constexpr GUID value{ 0x32C1D013,0x4DBD,0x446D,{ 0xBB,0xB8,0x0D,0xE3,0x50,0x48,0xA4,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::IBringIntoViewOptions>{ static constexpr GUID value{ 0x19BDD1B5,0xC7CB,0x46D9,{ 0xA4,0xDD,0xA1,0xBB,0xE8,0x3E,0xF2,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::ICornerRadiusHelper>{ static constexpr GUID value{ 0xFD7BE182,0x1CDB,0x4288,{ 0xB8,0xC8,0x85,0xEE,0x79,0x29,0x7B,0xFC } }; };
template <> struct guid<Windows::UI::Xaml::ICornerRadiusHelperStatics>{ static constexpr GUID value{ 0xF4A1F659,0xD4D4,0x451F,{ 0xA3,0x87,0xD6,0xBF,0x4B,0x24,0x51,0xD4 } }; };
template <> struct guid<Windows::UI::Xaml::IDataContextChangedEventArgs>{ static constexpr GUID value{ 0x7DA68E21,0x0B8F,0x4F9F,{ 0xA1,0x43,0xF8,0xE7,0x78,0x01,0x36,0xA2 } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplate>{ static constexpr GUID value{ 0x9910AEC7,0x8AB5,0x4118,{ 0x9B,0xC6,0x09,0xF4,0x5A,0x35,0x07,0x3D } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplateExtension>{ static constexpr GUID value{ 0x595E9547,0xCDFF,0x4B92,{ 0xB7,0x73,0xAB,0x39,0x68,0x78,0xF3,0x53 } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplateFactory>{ static constexpr GUID value{ 0x51ED9D7E,0x2B53,0x475B,{ 0x9C,0x88,0x0C,0x18,0x32,0xC8,0x35,0x1A } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplateKey>{ static constexpr GUID value{ 0x873B6C28,0xCCEB,0x4B61,{ 0x86,0xFA,0xB2,0xCE,0xC3,0x9C,0xC2,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplateKeyFactory>{ static constexpr GUID value{ 0xE96B2959,0xD982,0x4152,{ 0x91,0xCB,0xDE,0x0E,0x4D,0xFD,0x76,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::IDataTemplateStatics2>{ static constexpr GUID value{ 0x8AF77D73,0xAA01,0x471E,{ 0xBE,0xDD,0x8B,0xAD,0x86,0x21,0x9B,0x77 } }; };
template <> struct guid<Windows::UI::Xaml::IDebugSettings>{ static constexpr GUID value{ 0x3D451F98,0xC6A7,0x4D17,{ 0x83,0x98,0xD8,0x3A,0x06,0x71,0x83,0xD8 } }; };
template <> struct guid<Windows::UI::Xaml::IDebugSettings2>{ static constexpr GUID value{ 0x48D37585,0xE1A6,0x469B,{ 0x83,0xC8,0x30,0x82,0x50,0x37,0x11,0x9E } }; };
template <> struct guid<Windows::UI::Xaml::IDebugSettings3>{ static constexpr GUID value{ 0xE6BB5022,0x0625,0x479F,{ 0x8E,0x32,0x4B,0x58,0x3D,0x73,0xB7,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyObject>{ static constexpr GUID value{ 0x5C526665,0xF60E,0x4912,{ 0xAF,0x59,0x5F,0xE0,0x68,0x0F,0x08,0x9D } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyObject2>{ static constexpr GUID value{ 0x29FED85D,0x3D22,0x43A1,{ 0xAD,0xD0,0x17,0x02,0x7C,0x08,0xB2,0x12 } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyObjectCollectionFactory>{ static constexpr GUID value{ 0x051E79FF,0xB3A8,0x49EE,{ 0xB5,0xAF,0xAC,0x8F,0x68,0xB6,0x49,0xE4 } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyObjectFactory>{ static constexpr GUID value{ 0x9A03AF92,0x7D8A,0x4937,{ 0x88,0x4F,0xEC,0xF3,0x4F,0xE0,0x2A,0xCB } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyProperty>{ static constexpr GUID value{ 0x85B13970,0x9BC4,0x4E96,{ 0xAC,0xF1,0x30,0xC8,0xFD,0x3D,0x55,0xC8 } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>{ static constexpr GUID value{ 0x81212C2B,0x24D0,0x4957,{ 0xAB,0xC3,0x22,0x44,0x70,0xA9,0x3A,0x4E } }; };
template <> struct guid<Windows::UI::Xaml::IDependencyPropertyStatics>{ static constexpr GUID value{ 0x49E5F28F,0x8259,0x4D5C,{ 0xAA,0xE0,0x83,0xD5,0x6D,0xBB,0x68,0xD9 } }; };
template <> struct guid<Windows::UI::Xaml::IDispatcherTimer>{ static constexpr GUID value{ 0xD160CE46,0xCD22,0x4F5F,{ 0x8C,0x97,0x40,0xE6,0x1D,0xA3,0xE2,0xDC } }; };
template <> struct guid<Windows::UI::Xaml::IDispatcherTimerFactory>{ static constexpr GUID value{ 0xE9961E6E,0x3626,0x403A,{ 0xAF,0xE0,0x04,0x0D,0x58,0x16,0x56,0x32 } }; };
template <> struct guid<Windows::UI::Xaml::IDragEventArgs>{ static constexpr GUID value{ 0xB440C7C3,0x02B4,0x4980,{ 0x93,0x42,0x25,0xDA,0xE1,0xC0,0xF1,0x88 } }; };
template <> struct guid<Windows::UI::Xaml::IDragEventArgs2>{ static constexpr GUID value{ 0x26336658,0x2917,0x411D,{ 0xBF,0xC3,0x2F,0x22,0x47,0x1C,0xBB,0xE7 } }; };
template <> struct guid<Windows::UI::Xaml::IDragEventArgs3>{ static constexpr GUID value{ 0xD04FC3C6,0x8119,0x427A,{ 0x81,0x52,0x5F,0x95,0x50,0xCC,0x04,0x16 } }; };
template <> struct guid<Windows::UI::Xaml::IDragOperationDeferral>{ static constexpr GUID value{ 0xBA73ECBA,0x1B73,0x4086,{ 0xB3,0xD3,0xC2,0x23,0xBE,0xEA,0x16,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::IDragStartingEventArgs>{ static constexpr GUID value{ 0x6800D3FA,0x90B8,0x46F9,{ 0x8E,0x30,0x5A,0xC2,0x5F,0x73,0xF0,0xF9 } }; };
template <> struct guid<Windows::UI::Xaml::IDragStartingEventArgs2>{ static constexpr GUID value{ 0xD855E08E,0x44B6,0x4211,{ 0xBD,0x0B,0x7F,0xDD,0xBB,0x6E,0x82,0x31 } }; };
template <> struct guid<Windows::UI::Xaml::IDragUI>{ static constexpr GUID value{ 0x2D9BD838,0x7C60,0x4842,{ 0x91,0x70,0x34,0x6F,0xE1,0x0A,0x22,0x6A } }; };
template <> struct guid<Windows::UI::Xaml::IDragUIOverride>{ static constexpr GUID value{ 0xBD6C9DFA,0xC961,0x4861,{ 0xB7,0xA5,0xBF,0x4F,0xE4,0xA8,0xA6,0xEF } }; };
template <> struct guid<Windows::UI::Xaml::IDropCompletedEventArgs>{ static constexpr GUID value{ 0x6C4FC188,0x95BC,0x4261,{ 0x9E,0xC5,0x21,0xCA,0xB6,0x77,0xB7,0x34 } }; };
template <> struct guid<Windows::UI::Xaml::IDurationHelper>{ static constexpr GUID value{ 0x25C1659F,0x4497,0x4135,{ 0x94,0x0F,0xEE,0x96,0xF4,0xD6,0xE9,0x34 } }; };
template <> struct guid<Windows::UI::Xaml::IDurationHelperStatics>{ static constexpr GUID value{ 0xBC88093E,0x3547,0x4EC0,{ 0xB5,0x19,0xFF,0xA8,0xF9,0xC4,0x83,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::IElementSoundPlayer>{ static constexpr GUID value{ 0x387773A5,0xF036,0x460C,{ 0x9B,0x81,0xF3,0xD6,0xEA,0x43,0xF6,0xF2 } }; };
template <> struct guid<Windows::UI::Xaml::IElementSoundPlayerStatics>{ static constexpr GUID value{ 0x217A9004,0x981D,0x41C9,{ 0xB1,0x52,0xAD,0xA9,0x11,0xA4,0xB1,0x3A } }; };
template <> struct guid<Windows::UI::Xaml::IEventTrigger>{ static constexpr GUID value{ 0xDEF8F855,0x0B49,0x4087,{ 0xB1,0xA9,0xB8,0xB3,0x84,0x88,0xF7,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::IExceptionRoutedEventArgs>{ static constexpr GUID value{ 0xDD9FF16A,0x4B62,0x4A6C,{ 0xA4,0x9D,0x06,0x71,0xEF,0x61,0x36,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>{ static constexpr GUID value{ 0xBBA9826D,0x5D7A,0x44E7,{ 0xB8,0x93,0xB2,0xAE,0x0D,0xD2,0x42,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElement>{ static constexpr GUID value{ 0xA391D09B,0x4A99,0x4B7C,{ 0x9D,0x8D,0x6F,0xA5,0xD0,0x1F,0x6F,0xBF } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElement2>{ static constexpr GUID value{ 0xF19104BE,0x422A,0x4904,{ 0xA5,0x2F,0xEE,0x72,0x01,0x04,0x29,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElement3>{ static constexpr GUID value{ 0xC81C2720,0x5C52,0x4BBE,{ 0xA1,0x99,0x2B,0x1E,0x34,0xF0,0x0F,0x70 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElement4>{ static constexpr GUID value{ 0x6B765BB3,0xFBA3,0x4404,{ 0xBD,0xEE,0x1A,0x45,0xD1,0xCA,0x5F,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementFactory>{ static constexpr GUID value{ 0xDEAEE126,0x03CA,0x4966,{ 0xB5,0x76,0x60,0x4C,0xCE,0x93,0xB5,0xE8 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementOverrides>{ static constexpr GUID value{ 0xDA007E54,0xB3C2,0x4B9A,{ 0xAA,0x8E,0xD3,0xF0,0x71,0x26,0x2B,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementOverrides2>{ static constexpr GUID value{ 0xCB5CD2B9,0xE3B4,0x458C,{ 0xB6,0x4E,0x14,0x34,0xFD,0x1B,0xD8,0x8A } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementStatics>{ static constexpr GUID value{ 0x48383032,0xFBEB,0x4F8A,{ 0xAE,0xD2,0xEE,0x21,0xFB,0x27,0xA5,0x7B } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementStatics2>{ static constexpr GUID value{ 0x9695DB02,0xC0D8,0x4FA2,{ 0xB1,0x00,0x3F,0xA2,0xDF,0x8B,0x95,0x38 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementStatics4>{ static constexpr GUID value{ 0x9C41B155,0xC5D8,0x4663,{ 0xBF,0xF2,0xD8,0xD5,0x4F,0xB5,0xDB,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkElementStatics5>{ static constexpr GUID value{ 0x525D3941,0x0B3C,0x4BE6,{ 0x99,0x78,0x19,0xA8,0x02,0x5C,0x09,0xD8 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkTemplate>{ static constexpr GUID value{ 0xA1E254D8,0xA446,0x4A27,{ 0x9A,0x9D,0xA0,0xF5,0x9E,0x12,0x58,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkTemplateFactory>{ static constexpr GUID value{ 0x1A78A0A5,0x937D,0x46D4,{ 0x83,0x2B,0x94,0xFF,0x14,0xDA,0xB0,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkView>{ static constexpr GUID value{ 0xDDBA664B,0xB603,0x47AA,{ 0x94,0x2D,0x38,0x33,0x17,0x4F,0x0D,0x80 } }; };
template <> struct guid<Windows::UI::Xaml::IFrameworkViewSource>{ static constexpr GUID value{ 0xE3B077DA,0x35AD,0x4B09,{ 0xB5,0xB2,0x27,0x42,0x00,0x41,0xBA,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::IGridLengthHelper>{ static constexpr GUID value{ 0x7A826CE1,0x07A0,0x4083,{ 0xB6,0xD1,0xB1,0xD9,0x17,0xB9,0x76,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::IGridLengthHelperStatics>{ static constexpr GUID value{ 0x9D457B9B,0x019F,0x4266,{ 0x88,0x72,0x21,0x5F,0x19,0x8F,0x6A,0x9D } }; };
template <> struct guid<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>{ static constexpr GUID value{ 0x46D1FA8D,0x5149,0x4153,{ 0xBA,0x3C,0xB0,0x3E,0x64,0xEE,0x53,0x1E } }; };
template <> struct guid<Windows::UI::Xaml::IPointHelper>{ static constexpr GUID value{ 0x727BDD92,0x64B0,0x49CF,{ 0xA3,0x21,0xA9,0x79,0x3E,0x73,0xE2,0xE7 } }; };
template <> struct guid<Windows::UI::Xaml::IPointHelperStatics>{ static constexpr GUID value{ 0x015ACA75,0x76D8,0x4B7E,{ 0x8A,0x33,0x7D,0x79,0x20,0x46,0x91,0xEE } }; };
template <> struct guid<Windows::UI::Xaml::IPropertyMetadata>{ static constexpr GUID value{ 0x814EF30D,0x8D18,0x448A,{ 0x86,0x44,0xF2,0xCB,0x51,0xE7,0x03,0x80 } }; };
template <> struct guid<Windows::UI::Xaml::IPropertyMetadataFactory>{ static constexpr GUID value{ 0xC1B81CC0,0x57CD,0x4F2F,{ 0xB0,0xA9,0xE1,0x80,0x1B,0x28,0xF7,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::IPropertyMetadataStatics>{ static constexpr GUID value{ 0x3B01077A,0x6E06,0x45E9,{ 0x8B,0x5C,0xAF,0x24,0x34,0x58,0xC0,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::IPropertyPath>{ static constexpr GUID value{ 0x300E5D8A,0x1FF3,0x4D2C,{ 0x95,0xEC,0x27,0xF8,0x1D,0xEB,0xAC,0xB8 } }; };
template <> struct guid<Windows::UI::Xaml::IPropertyPathFactory>{ static constexpr GUID value{ 0x4E4CDF99,0x9826,0x4E56,{ 0x84,0x7C,0xCA,0x05,0x5F,0x16,0x29,0x05 } }; };
template <> struct guid<Windows::UI::Xaml::IRectHelper>{ static constexpr GUID value{ 0xA38781E2,0x4BFB,0x4EE2,{ 0xAF,0xE5,0x89,0xF3,0x1B,0x37,0x47,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::IRectHelperStatics>{ static constexpr GUID value{ 0x5EE163E4,0xC17E,0x494F,{ 0xB5,0x80,0x2F,0x05,0x74,0xFC,0x3A,0x15 } }; };
template <> struct guid<Windows::UI::Xaml::IResourceDictionary>{ static constexpr GUID value{ 0xC1EA4F24,0xD6DE,0x4191,{ 0x8E,0x3A,0xF4,0x86,0x01,0xF7,0x48,0x9C } }; };
template <> struct guid<Windows::UI::Xaml::IResourceDictionaryFactory>{ static constexpr GUID value{ 0xEA3639B5,0x31B7,0x4271,{ 0x92,0xC9,0x7C,0x95,0x84,0xA9,0x1C,0x22 } }; };
template <> struct guid<Windows::UI::Xaml::IRoutedEvent>{ static constexpr GUID value{ 0xA6B25818,0x43C1,0x4C70,{ 0x86,0x5C,0x7B,0xDD,0x5A,0x32,0xE3,0x27 } }; };
template <> struct guid<Windows::UI::Xaml::IRoutedEventArgs>{ static constexpr GUID value{ 0x5C985AC6,0xD802,0x4B38,{ 0xA2,0x23,0xBF,0x07,0x0C,0x43,0xFE,0xDF } }; };
template <> struct guid<Windows::UI::Xaml::IRoutedEventArgsFactory>{ static constexpr GUID value{ 0xB61C4D87,0x70E5,0x412E,{ 0xB5,0x20,0x1A,0x41,0xEE,0x76,0xBB,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::ISetter>{ static constexpr GUID value{ 0xA73DED29,0xB4AE,0x4A81,{ 0xBE,0x85,0xE6,0x90,0xBA,0x0D,0x3B,0x6E } }; };
template <> struct guid<Windows::UI::Xaml::ISetter2>{ static constexpr GUID value{ 0x70169561,0x05B1,0x4FA3,{ 0x9D,0x53,0x8E,0x0C,0x8C,0x74,0x7A,0xFC } }; };
template <> struct guid<Windows::UI::Xaml::ISetterBase>{ static constexpr GUID value{ 0x418BE27C,0x2AC4,0x4F22,{ 0x80,0x97,0xDE,0xA3,0xAE,0xEB,0x2F,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::ISetterBaseCollection>{ static constexpr GUID value{ 0x03C40CA8,0x909E,0x4117,{ 0x81,0x1C,0xA4,0x52,0x94,0x96,0xBD,0xF1 } }; };
template <> struct guid<Windows::UI::Xaml::ISetterBaseFactory>{ static constexpr GUID value{ 0x81F8AD60,0x1CE8,0x469D,{ 0xA6,0x67,0x16,0xE3,0x7C,0xEF,0x8B,0xA9 } }; };
template <> struct guid<Windows::UI::Xaml::ISetterFactory>{ static constexpr GUID value{ 0xD3CA3D42,0x09B1,0x49D5,{ 0x88,0x91,0xE7,0xB5,0x64,0x8E,0x02,0xA2 } }; };
template <> struct guid<Windows::UI::Xaml::ISizeChangedEventArgs>{ static constexpr GUID value{ 0xD5312E60,0x5CC1,0x42A1,{ 0x92,0x0C,0x1A,0xF4,0x6B,0xE2,0xF9,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::ISizeHelper>{ static constexpr GUID value{ 0xE7225A94,0x5D03,0x4A03,{ 0xBA,0x94,0x96,0x7F,0xC6,0x8F,0xCE,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::ISizeHelperStatics>{ static constexpr GUID value{ 0x6286C5B2,0xCF78,0x4915,{ 0xAA,0x40,0x76,0x00,0x4A,0x16,0x5F,0x5E } }; };
template <> struct guid<Windows::UI::Xaml::IStateTrigger>{ static constexpr GUID value{ 0x67ADEF2E,0xD8D9,0x49F7,{ 0xA1,0xFD,0x2E,0x35,0xEE,0xDD,0x23,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::IStateTriggerBase>{ static constexpr GUID value{ 0x48B20698,0xAF06,0x466C,{ 0x80,0x52,0x93,0x66,0x6D,0xDE,0x0E,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::IStateTriggerBaseFactory>{ static constexpr GUID value{ 0x970E2C4B,0xBFAF,0x47B0,{ 0xBE,0x42,0xC1,0xD7,0x11,0xBB,0x2E,0x9F } }; };
template <> struct guid<Windows::UI::Xaml::IStateTriggerBaseProtected>{ static constexpr GUID value{ 0x3C41E253,0x8D14,0x4216,{ 0x99,0x4C,0xF9,0x93,0x04,0x29,0xF6,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::IStateTriggerStatics>{ static constexpr GUID value{ 0x71E95C90,0xB3FE,0x4DD3,{ 0xA8,0xA8,0x44,0xA2,0xCE,0x25,0xE0,0xB8 } }; };
template <> struct guid<Windows::UI::Xaml::IStyle>{ static constexpr GUID value{ 0xC4A9F225,0x9DB7,0x4A7D,{ 0xB6,0xD1,0xF7,0x4E,0xDB,0x92,0x93,0xC2 } }; };
template <> struct guid<Windows::UI::Xaml::IStyleFactory>{ static constexpr GUID value{ 0xA36824E3,0x3D81,0x4CE5,{ 0xAA,0x51,0x8B,0x41,0x0F,0x60,0x2F,0xCD } }; };
template <> struct guid<Windows::UI::Xaml::ITargetPropertyPath>{ static constexpr GUID value{ 0x40740F8E,0x085F,0x4CED,{ 0xBE,0x70,0x6F,0x47,0xAC,0xF1,0x5A,0xD0 } }; };
template <> struct guid<Windows::UI::Xaml::ITargetPropertyPathFactory>{ static constexpr GUID value{ 0x88EECCC8,0x99E2,0x4A44,{ 0x99,0x07,0xB4,0x4B,0xC8,0x6E,0x2B,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::IThicknessHelper>{ static constexpr GUID value{ 0xA86BAE4B,0x1E8F,0x4EEB,{ 0x90,0x13,0x0B,0x28,0x38,0xA9,0x7B,0x34 } }; };
template <> struct guid<Windows::UI::Xaml::IThicknessHelperStatics>{ static constexpr GUID value{ 0xC0991A7C,0x070C,0x4DA6,{ 0x87,0x84,0x01,0xCA,0x80,0x0E,0xB7,0x3A } }; };
template <> struct guid<Windows::UI::Xaml::ITriggerAction>{ static constexpr GUID value{ 0xA2C0DF02,0x63D5,0x4B46,{ 0x9B,0x83,0x08,0x68,0xD3,0x07,0x96,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::ITriggerActionFactory>{ static constexpr GUID value{ 0x68D2C0B9,0x3289,0x414F,{ 0x8F,0x6E,0xC6,0xB9,0x7A,0xED,0xDA,0x03 } }; };
template <> struct guid<Windows::UI::Xaml::ITriggerBase>{ static constexpr GUID value{ 0xE7EA222F,0xDEE6,0x4393,{ 0xA8,0xB2,0x89,0x23,0xD6,0x41,0xF3,0x95 } }; };
template <> struct guid<Windows::UI::Xaml::ITriggerBaseFactory>{ static constexpr GUID value{ 0x6A3B9E57,0xFC5D,0x42D0,{ 0x8C,0xB9,0xCA,0x50,0x66,0x7A,0xF7,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElement>{ static constexpr GUID value{ 0x676D0BE9,0xB65C,0x41C6,{ 0xBA,0x40,0x58,0xCF,0x87,0xF2,0x01,0xC1 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElement2>{ static constexpr GUID value{ 0x676D0BF9,0xB66C,0x41D6,{ 0xBA,0x50,0x58,0xCF,0x87,0xF2,0x01,0xD1 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElement3>{ static constexpr GUID value{ 0xBC2B28F1,0x26F2,0x4AAB,{ 0xB2,0x56,0x3B,0x53,0x50,0x88,0x1E,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElement4>{ static constexpr GUID value{ 0x69145CD4,0x199A,0x4657,{ 0x9E,0x57,0xE9,0x9E,0x8F,0x13,0x67,0x12 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElement5>{ static constexpr GUID value{ 0x8EED9BC2,0xA58C,0x4453,{ 0xAF,0x0F,0xA9,0x2E,0xE0,0x6D,0x03,0x17 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementFactory>{ static constexpr GUID value{ 0xB9EE93FE,0xA338,0x419F,{ 0xAC,0x32,0x91,0xDC,0xAA,0xDF,0x5D,0x08 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementOverrides>{ static constexpr GUID value{ 0x608D2F1D,0x7858,0x4AEB,{ 0x89,0xE4,0xB5,0x4E,0x2C,0x7E,0xD3,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics>{ static constexpr GUID value{ 0x58D3573B,0xF52C,0x45BE,{ 0x98,0x8B,0xA5,0x86,0x95,0x64,0x87,0x3C } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics2>{ static constexpr GUID value{ 0x58D3574B,0xF53C,0x45BE,{ 0x98,0x9B,0xA5,0x86,0x95,0x64,0x87,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics3>{ static constexpr GUID value{ 0xD1F87ADE,0xECA1,0x4561,{ 0xA3,0x2B,0x64,0x60,0x1B,0x4E,0x05,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics4>{ static constexpr GUID value{ 0x1D157D61,0x16AF,0x411F,{ 0xB7,0x74,0x27,0x23,0x75,0xA4,0xAC,0x2C } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics5>{ static constexpr GUID value{ 0x59BD7D91,0x8FA3,0x4C65,{ 0xBA,0x1B,0x40,0xDF,0x38,0x55,0x6C,0xBB } }; };
template <> struct guid<Windows::UI::Xaml::IUIElementStatics6>{ static constexpr GUID value{ 0x647E03B7,0x036A,0x4DEA,{ 0x95,0x40,0x1D,0xD7,0xFD,0x12,0x66,0xF1 } }; };
template <> struct guid<Windows::UI::Xaml::IUnhandledExceptionEventArgs>{ static constexpr GUID value{ 0x7230269C,0x054E,0x4CF3,{ 0x86,0xC5,0xBE,0x90,0xEB,0x68,0x63,0xD5 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualState>{ static constexpr GUID value{ 0x6320AFFC,0xC31A,0x4450,{ 0xAF,0xDE,0xF6,0xEA,0x7B,0xD1,0xF5,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualState2>{ static constexpr GUID value{ 0x0FA0F896,0x64C0,0x45FB,{ 0x8D,0x24,0xFB,0x83,0x29,0x8C,0x0D,0x93 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateChangedEventArgs>{ static constexpr GUID value{ 0xFE216AB1,0xF31F,0x4791,{ 0x89,0x89,0xC7,0x0E,0x1D,0x9B,0x59,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateGroup>{ static constexpr GUID value{ 0xE4F9D9A4,0xE028,0x44DE,{ 0x9B,0x15,0x49,0x29,0xAE,0x0A,0x26,0xC2 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateManager>{ static constexpr GUID value{ 0x6FDA9F9A,0x6FAB,0x4112,{ 0x92,0x58,0x10,0x06,0xA3,0xC3,0x47,0x6E } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateManagerFactory>{ static constexpr GUID value{ 0x85E598FD,0xA575,0x47B6,{ 0x9E,0x30,0x38,0x3C,0xD0,0x85,0x85,0xF2 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateManagerOverrides>{ static constexpr GUID value{ 0x4A66910E,0x7979,0x43C8,{ 0x8F,0xF4,0xEC,0x61,0x22,0x75,0x00,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateManagerProtected>{ static constexpr GUID value{ 0x4B3B8640,0xB0B7,0x404C,{ 0x9E,0xF4,0xD9,0x49,0x64,0x0E,0x24,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::IVisualStateManagerStatics>{ static constexpr GUID value{ 0x01D0E9E0,0xD713,0x414E,{ 0xA7,0x4E,0xE6,0x3E,0xC7,0xAC,0x8C,0x3D } }; };
template <> struct guid<Windows::UI::Xaml::IVisualTransition>{ static constexpr GUID value{ 0x55C5905E,0x2BC7,0x400D,{ 0xAA,0xA4,0x1A,0x29,0x81,0x49,0x1E,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::IVisualTransitionFactory>{ static constexpr GUID value{ 0xEA75864F,0xD1E0,0x4DAE,{ 0xB4,0x29,0x89,0xFC,0x32,0x27,0x24,0xF4 } }; };
template <> struct guid<Windows::UI::Xaml::IWindow>{ static constexpr GUID value{ 0x3276167D,0xC9F6,0x462D,{ 0x9D,0xE2,0xAE,0x4C,0x1F,0xD8,0xC2,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::IWindow2>{ static constexpr GUID value{ 0xD384759F,0x34F6,0x4482,{ 0x84,0x35,0xF5,0x52,0xF9,0xB2,0x4C,0xC8 } }; };
template <> struct guid<Windows::UI::Xaml::IWindow3>{ static constexpr GUID value{ 0xB70BDC9D,0x1C35,0x462A,{ 0x9B,0x97,0x80,0x8D,0x5A,0xF9,0xF2,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::IWindowCreatedEventArgs>{ static constexpr GUID value{ 0x31B71470,0xFEFF,0x4654,{ 0xAF,0x48,0x9B,0x39,0x8A,0xB5,0x77,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::IWindowStatics>{ static constexpr GUID value{ 0x93328409,0x4EA1,0x4AFA,{ 0x83,0xDC,0x0C,0x4E,0x73,0xE8,0x8B,0xB1 } }; };
template <> struct guid<Windows::UI::Xaml::ApplicationInitializationCallback>{ static constexpr GUID value{ 0xB6351C55,0xC284,0x46E4,{ 0x83,0x10,0xFB,0x09,0x67,0xFA,0xB7,0x6F } }; };
template <> struct guid<Windows::UI::Xaml::BindingFailedEventHandler>{ static constexpr GUID value{ 0x136B1782,0x54BA,0x420D,{ 0xA1,0xAA,0x82,0x82,0x87,0x21,0xCD,0xE6 } }; };
template <> struct guid<Windows::UI::Xaml::CreateDefaultValueCallback>{ static constexpr GUID value{ 0xD6ECB12C,0x15B5,0x4EC8,{ 0xB9,0x5C,0xCD,0xD2,0x08,0xF0,0x81,0x53 } }; };
template <> struct guid<Windows::UI::Xaml::DependencyPropertyChangedCallback>{ static constexpr GUID value{ 0x45883D16,0x27BF,0x4BC1,{ 0xAC,0x26,0x94,0xC1,0x60,0x1F,0x3A,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>{ static constexpr GUID value{ 0x09223E5A,0x75BE,0x4499,{ 0x81,0x80,0x1D,0xDC,0x00,0x54,0x21,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::DragEventHandler>{ static constexpr GUID value{ 0x2AB1A205,0x1E73,0x4BCF,{ 0xAA,0xBC,0x57,0xB9,0x7E,0x21,0x96,0x1D } }; };
template <> struct guid<Windows::UI::Xaml::EnteredBackgroundEventHandler>{ static constexpr GUID value{ 0x93A956AE,0x1D7F,0x438B,{ 0xB7,0xB8,0x22,0x7D,0x96,0xB6,0x09,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::ExceptionRoutedEventHandler>{ static constexpr GUID value{ 0x68E0E810,0xF6EA,0x42BC,{ 0x85,0x5B,0x5D,0x9B,0x67,0xE6,0xA2,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::LeavingBackgroundEventHandler>{ static constexpr GUID value{ 0xAAAD5DAD,0x4FC6,0x4AA4,{ 0xB7,0xCF,0x87,0x7E,0x36,0xAD,0xA4,0xF6 } }; };
template <> struct guid<Windows::UI::Xaml::PropertyChangedCallback>{ static constexpr GUID value{ 0x5A9F8A25,0xD142,0x44A4,{ 0x82,0x31,0xFD,0x67,0x67,0x24,0xF2,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::RoutedEventHandler>{ static constexpr GUID value{ 0xA856E674,0xB0B6,0x4BC3,{ 0xBB,0xA8,0x1B,0xA0,0x6E,0x40,0xD4,0xB5 } }; };
template <> struct guid<Windows::UI::Xaml::SizeChangedEventHandler>{ static constexpr GUID value{ 0x1115B13C,0x25D2,0x480B,{ 0x89,0xDC,0xEB,0x3D,0xCB,0xD6,0xB7,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::SuspendingEventHandler>{ static constexpr GUID value{ 0x23429465,0xE36A,0x40E2,{ 0xB1,0x39,0xA4,0x70,0x46,0x02,0xA6,0xE1 } }; };
template <> struct guid<Windows::UI::Xaml::UnhandledExceptionEventHandler>{ static constexpr GUID value{ 0x9274E6BD,0x49A1,0x4958,{ 0xBE,0xEE,0xD0,0xE1,0x95,0x87,0xB6,0xE3 } }; };
template <> struct guid<Windows::UI::Xaml::VisualStateChangedEventHandler>{ static constexpr GUID value{ 0xE6D5BBD5,0xE029,0x43A6,{ 0xB3,0x6D,0x84,0xA8,0x10,0x42,0xD7,0x74 } }; };
template <> struct guid<Windows::UI::Xaml::WindowActivatedEventHandler>{ static constexpr GUID value{ 0x18026348,0x8619,0x4C7B,{ 0xB5,0x34,0xCE,0xD4,0x5D,0x9D,0xE2,0x19 } }; };
template <> struct guid<Windows::UI::Xaml::WindowClosedEventHandler>{ static constexpr GUID value{ 0x0DB89161,0x20D7,0x45DF,{ 0x91,0x22,0xBA,0x89,0x57,0x67,0x03,0xBA } }; };
template <> struct guid<Windows::UI::Xaml::WindowSizeChangedEventHandler>{ static constexpr GUID value{ 0x5C21C742,0x2CED,0x4FD9,{ 0xBA,0x38,0x71,0x18,0xD4,0x0E,0x96,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>{ static constexpr GUID value{ 0x10406AD6,0xB090,0x4A4A,{ 0xB2,0xAD,0xD6,0x82,0xDF,0x27,0x13,0x0F } }; };
template <> struct default_interface<Windows::UI::Xaml::AdaptiveTrigger>{ using type = Windows::UI::Xaml::IAdaptiveTrigger; };
template <> struct default_interface<Windows::UI::Xaml::Application>{ using type = Windows::UI::Xaml::IApplication; };
template <> struct default_interface<Windows::UI::Xaml::ApplicationInitializationCallbackParams>{ using type = Windows::UI::Xaml::IApplicationInitializationCallbackParams; };
template <> struct default_interface<Windows::UI::Xaml::BindingFailedEventArgs>{ using type = Windows::UI::Xaml::IBindingFailedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::BringIntoViewOptions>{ using type = Windows::UI::Xaml::IBringIntoViewOptions; };
template <> struct default_interface<Windows::UI::Xaml::CornerRadiusHelper>{ using type = Windows::UI::Xaml::ICornerRadiusHelper; };
template <> struct default_interface<Windows::UI::Xaml::DataContextChangedEventArgs>{ using type = Windows::UI::Xaml::IDataContextChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::DataTemplate>{ using type = Windows::UI::Xaml::IDataTemplate; };
template <> struct default_interface<Windows::UI::Xaml::DataTemplateKey>{ using type = Windows::UI::Xaml::IDataTemplateKey; };
template <> struct default_interface<Windows::UI::Xaml::DebugSettings>{ using type = Windows::UI::Xaml::IDebugSettings; };
template <> struct default_interface<Windows::UI::Xaml::DependencyObject>{ using type = Windows::UI::Xaml::IDependencyObject; };
template <> struct default_interface<Windows::UI::Xaml::DependencyObjectCollection>{ using type = Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>; };
template <> struct default_interface<Windows::UI::Xaml::DependencyProperty>{ using type = Windows::UI::Xaml::IDependencyProperty; };
template <> struct default_interface<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>{ using type = Windows::UI::Xaml::IDependencyPropertyChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::DispatcherTimer>{ using type = Windows::UI::Xaml::IDispatcherTimer; };
template <> struct default_interface<Windows::UI::Xaml::DragEventArgs>{ using type = Windows::UI::Xaml::IDragEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::DragOperationDeferral>{ using type = Windows::UI::Xaml::IDragOperationDeferral; };
template <> struct default_interface<Windows::UI::Xaml::DragStartingEventArgs>{ using type = Windows::UI::Xaml::IDragStartingEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::DragUI>{ using type = Windows::UI::Xaml::IDragUI; };
template <> struct default_interface<Windows::UI::Xaml::DragUIOverride>{ using type = Windows::UI::Xaml::IDragUIOverride; };
template <> struct default_interface<Windows::UI::Xaml::DropCompletedEventArgs>{ using type = Windows::UI::Xaml::IDropCompletedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::DurationHelper>{ using type = Windows::UI::Xaml::IDurationHelper; };
template <> struct default_interface<Windows::UI::Xaml::ElementSoundPlayer>{ using type = Windows::UI::Xaml::IElementSoundPlayer; };
template <> struct default_interface<Windows::UI::Xaml::EventTrigger>{ using type = Windows::UI::Xaml::IEventTrigger; };
template <> struct default_interface<Windows::UI::Xaml::ExceptionRoutedEventArgs>{ using type = Windows::UI::Xaml::IExceptionRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::FrameworkElement>{ using type = Windows::UI::Xaml::IFrameworkElement; };
template <> struct default_interface<Windows::UI::Xaml::FrameworkTemplate>{ using type = Windows::UI::Xaml::IFrameworkTemplate; };
template <> struct default_interface<Windows::UI::Xaml::FrameworkView>{ using type = Windows::UI::Xaml::IFrameworkView; };
template <> struct default_interface<Windows::UI::Xaml::FrameworkViewSource>{ using type = Windows::UI::Xaml::IFrameworkViewSource; };
template <> struct default_interface<Windows::UI::Xaml::GridLengthHelper>{ using type = Windows::UI::Xaml::IGridLengthHelper; };
template <> struct default_interface<Windows::UI::Xaml::MediaFailedRoutedEventArgs>{ using type = Windows::UI::Xaml::IMediaFailedRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::PointHelper>{ using type = Windows::UI::Xaml::IPointHelper; };
template <> struct default_interface<Windows::UI::Xaml::PropertyMetadata>{ using type = Windows::UI::Xaml::IPropertyMetadata; };
template <> struct default_interface<Windows::UI::Xaml::PropertyPath>{ using type = Windows::UI::Xaml::IPropertyPath; };
template <> struct default_interface<Windows::UI::Xaml::RectHelper>{ using type = Windows::UI::Xaml::IRectHelper; };
template <> struct default_interface<Windows::UI::Xaml::ResourceDictionary>{ using type = Windows::UI::Xaml::IResourceDictionary; };
template <> struct default_interface<Windows::UI::Xaml::RoutedEvent>{ using type = Windows::UI::Xaml::IRoutedEvent; };
template <> struct default_interface<Windows::UI::Xaml::RoutedEventArgs>{ using type = Windows::UI::Xaml::IRoutedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Setter>{ using type = Windows::UI::Xaml::ISetter; };
template <> struct default_interface<Windows::UI::Xaml::SetterBase>{ using type = Windows::UI::Xaml::ISetterBase; };
template <> struct default_interface<Windows::UI::Xaml::SetterBaseCollection>{ using type = Windows::UI::Xaml::ISetterBaseCollection; };
template <> struct default_interface<Windows::UI::Xaml::SizeChangedEventArgs>{ using type = Windows::UI::Xaml::ISizeChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::SizeHelper>{ using type = Windows::UI::Xaml::ISizeHelper; };
template <> struct default_interface<Windows::UI::Xaml::StateTrigger>{ using type = Windows::UI::Xaml::IStateTrigger; };
template <> struct default_interface<Windows::UI::Xaml::StateTriggerBase>{ using type = Windows::UI::Xaml::IStateTriggerBase; };
template <> struct default_interface<Windows::UI::Xaml::Style>{ using type = Windows::UI::Xaml::IStyle; };
template <> struct default_interface<Windows::UI::Xaml::TargetPropertyPath>{ using type = Windows::UI::Xaml::ITargetPropertyPath; };
template <> struct default_interface<Windows::UI::Xaml::ThicknessHelper>{ using type = Windows::UI::Xaml::IThicknessHelper; };
template <> struct default_interface<Windows::UI::Xaml::TriggerAction>{ using type = Windows::UI::Xaml::ITriggerAction; };
template <> struct default_interface<Windows::UI::Xaml::TriggerActionCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>; };
template <> struct default_interface<Windows::UI::Xaml::TriggerBase>{ using type = Windows::UI::Xaml::ITriggerBase; };
template <> struct default_interface<Windows::UI::Xaml::TriggerCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>; };
template <> struct default_interface<Windows::UI::Xaml::UIElement>{ using type = Windows::UI::Xaml::IUIElement; };
template <> struct default_interface<Windows::UI::Xaml::UnhandledExceptionEventArgs>{ using type = Windows::UI::Xaml::IUnhandledExceptionEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::VisualState>{ using type = Windows::UI::Xaml::IVisualState; };
template <> struct default_interface<Windows::UI::Xaml::VisualStateChangedEventArgs>{ using type = Windows::UI::Xaml::IVisualStateChangedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::VisualStateGroup>{ using type = Windows::UI::Xaml::IVisualStateGroup; };
template <> struct default_interface<Windows::UI::Xaml::VisualStateManager>{ using type = Windows::UI::Xaml::IVisualStateManager; };
template <> struct default_interface<Windows::UI::Xaml::VisualTransition>{ using type = Windows::UI::Xaml::IVisualTransition; };
template <> struct default_interface<Windows::UI::Xaml::Window>{ using type = Windows::UI::Xaml::IWindow; };
template <> struct default_interface<Windows::UI::Xaml::WindowCreatedEventArgs>{ using type = Windows::UI::Xaml::IWindowCreatedEventArgs; };

template <typename D>
struct consume_Windows_UI_Xaml_IAdaptiveTrigger
{
    double MinWindowWidth() const;
    void MinWindowWidth(double value) const;
    double MinWindowHeight() const;
    void MinWindowHeight(double value) const;
};
template <> struct consume<Windows::UI::Xaml::IAdaptiveTrigger> { template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTrigger<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IAdaptiveTriggerFactory
{
    Windows::UI::Xaml::AdaptiveTrigger CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IAdaptiveTriggerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTriggerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IAdaptiveTriggerStatics
{
    Windows::UI::Xaml::DependencyProperty MinWindowWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty MinWindowHeightProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IAdaptiveTriggerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IAdaptiveTriggerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplication
{
    Windows::UI::Xaml::ResourceDictionary Resources() const;
    void Resources(Windows::UI::Xaml::ResourceDictionary const& value) const;
    Windows::UI::Xaml::DebugSettings DebugSettings() const;
    Windows::UI::Xaml::ApplicationTheme RequestedTheme() const;
    void RequestedTheme(Windows::UI::Xaml::ApplicationTheme const& value) const;
    event_token UnhandledException(Windows::UI::Xaml::UnhandledExceptionEventHandler const& value) const;
    using UnhandledException_revoker = event_revoker<Windows::UI::Xaml::IApplication>;
    UnhandledException_revoker UnhandledException(auto_revoke_t, Windows::UI::Xaml::UnhandledExceptionEventHandler const& value) const;
    void UnhandledException(event_token const& token) const;
    event_token Suspending(Windows::UI::Xaml::SuspendingEventHandler const& value) const;
    using Suspending_revoker = event_revoker<Windows::UI::Xaml::IApplication>;
    Suspending_revoker Suspending(auto_revoke_t, Windows::UI::Xaml::SuspendingEventHandler const& value) const;
    void Suspending(event_token const& token) const;
    event_token Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Resuming_revoker = event_revoker<Windows::UI::Xaml::IApplication>;
    Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Resuming(event_token const& token) const;
    void Exit() const;
};
template <> struct consume<Windows::UI::Xaml::IApplication> { template <typename D> using type = consume_Windows_UI_Xaml_IApplication<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplication2
{
    Windows::UI::Xaml::FocusVisualKind FocusVisualKind() const;
    void FocusVisualKind(Windows::UI::Xaml::FocusVisualKind const& value) const;
    Windows::UI::Xaml::ApplicationRequiresPointerMode RequiresPointerMode() const;
    void RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode const& value) const;
    event_token LeavingBackground(Windows::UI::Xaml::LeavingBackgroundEventHandler const& value) const;
    using LeavingBackground_revoker = event_revoker<Windows::UI::Xaml::IApplication2>;
    LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::UI::Xaml::LeavingBackgroundEventHandler const& value) const;
    void LeavingBackground(event_token const& token) const;
    event_token EnteredBackground(Windows::UI::Xaml::EnteredBackgroundEventHandler const& value) const;
    using EnteredBackground_revoker = event_revoker<Windows::UI::Xaml::IApplication2>;
    EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::UI::Xaml::EnteredBackgroundEventHandler const& value) const;
    void EnteredBackground(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::IApplication2> { template <typename D> using type = consume_Windows_UI_Xaml_IApplication2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplication3
{
    Windows::UI::Xaml::ApplicationHighContrastAdjustment HighContrastAdjustment() const;
    void HighContrastAdjustment(Windows::UI::Xaml::ApplicationHighContrastAdjustment const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IApplication3> { template <typename D> using type = consume_Windows_UI_Xaml_IApplication3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplicationFactory
{
    Windows::UI::Xaml::Application CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IApplicationFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IApplicationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplicationInitializationCallbackParams
{
};
template <> struct consume<Windows::UI::Xaml::IApplicationInitializationCallbackParams> { template <typename D> using type = consume_Windows_UI_Xaml_IApplicationInitializationCallbackParams<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplicationOverrides
{
    void OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs const& args) const;
    void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const& args) const;
    void OnFileActivated(Windows::ApplicationModel::Activation::FileActivatedEventArgs const& args) const;
    void OnSearchActivated(Windows::ApplicationModel::Activation::SearchActivatedEventArgs const& args) const;
    void OnShareTargetActivated(Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs const& args) const;
    void OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs const& args) const;
    void OnFileSavePickerActivated(Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs const& args) const;
    void OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs const& args) const;
    void OnWindowCreated(Windows::UI::Xaml::WindowCreatedEventArgs const& args) const;
};
template <> struct consume<Windows::UI::Xaml::IApplicationOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_IApplicationOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplicationOverrides2
{
    void OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const;
};
template <> struct consume<Windows::UI::Xaml::IApplicationOverrides2> { template <typename D> using type = consume_Windows_UI_Xaml_IApplicationOverrides2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IApplicationStatics
{
    Windows::UI::Xaml::Application Current() const;
    void Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback) const;
    void LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator) const;
    void LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation) const;
};
template <> struct consume<Windows::UI::Xaml::IApplicationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IApplicationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IBindingFailedEventArgs
{
    hstring Message() const;
};
template <> struct consume<Windows::UI::Xaml::IBindingFailedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IBindingFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IBringIntoViewOptions
{
    bool AnimationDesired() const;
    void AnimationDesired(bool value) const;
    Windows::Foundation::IReference<Windows::Foundation::Rect> TargetRect() const;
    void TargetRect(optional<Windows::Foundation::Rect> const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IBringIntoViewOptions> { template <typename D> using type = consume_Windows_UI_Xaml_IBringIntoViewOptions<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ICornerRadiusHelper
{
};
template <> struct consume<Windows::UI::Xaml::ICornerRadiusHelper> { template <typename D> using type = consume_Windows_UI_Xaml_ICornerRadiusHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ICornerRadiusHelperStatics
{
    Windows::UI::Xaml::CornerRadius FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft) const;
    Windows::UI::Xaml::CornerRadius FromUniformRadius(double uniformRadius) const;
};
template <> struct consume<Windows::UI::Xaml::ICornerRadiusHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_ICornerRadiusHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataContextChangedEventArgs
{
    Windows::Foundation::IInspectable NewValue() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IDataContextChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IDataContextChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplate
{
    Windows::UI::Xaml::DependencyObject LoadContent() const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplate> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplate<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplateExtension
{
    void ResetTemplate() const;
    bool ProcessBinding(uint32_t phase) const;
    int32_t ProcessBindings(Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs const& arg) const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplateExtension> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateExtension<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplateFactory
{
    Windows::UI::Xaml::DataTemplate CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplateFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplateKey
{
    Windows::Foundation::IInspectable DataType() const;
    void DataType(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplateKey> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateKey<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplateKeyFactory
{
    Windows::UI::Xaml::DataTemplateKey CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::DataTemplateKey CreateInstanceWithType(Windows::Foundation::IInspectable const& dataType, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplateKeyFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateKeyFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDataTemplateStatics2
{
    Windows::UI::Xaml::DependencyProperty ExtensionInstanceProperty() const;
    Windows::UI::Xaml::IDataTemplateExtension GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element) const;
    void SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IDataTemplateStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_IDataTemplateStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDebugSettings
{
    bool EnableFrameRateCounter() const;
    void EnableFrameRateCounter(bool value) const;
    bool IsBindingTracingEnabled() const;
    void IsBindingTracingEnabled(bool value) const;
    bool IsOverdrawHeatMapEnabled() const;
    void IsOverdrawHeatMapEnabled(bool value) const;
    event_token BindingFailed(Windows::UI::Xaml::BindingFailedEventHandler const& value) const;
    using BindingFailed_revoker = event_revoker<Windows::UI::Xaml::IDebugSettings>;
    BindingFailed_revoker BindingFailed(auto_revoke_t, Windows::UI::Xaml::BindingFailedEventHandler const& value) const;
    void BindingFailed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::IDebugSettings> { template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDebugSettings2
{
    bool EnableRedrawRegions() const;
    void EnableRedrawRegions(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IDebugSettings2> { template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDebugSettings3
{
    bool IsTextPerformanceVisualizationEnabled() const;
    void IsTextPerformanceVisualizationEnabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IDebugSettings3> { template <typename D> using type = consume_Windows_UI_Xaml_IDebugSettings3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyObject
{
    Windows::Foundation::IInspectable GetValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
    void SetValue(Windows::UI::Xaml::DependencyProperty const& dp, Windows::Foundation::IInspectable const& value) const;
    void ClearValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
    Windows::Foundation::IInspectable ReadLocalValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
    Windows::Foundation::IInspectable GetAnimationBaseValue(Windows::UI::Xaml::DependencyProperty const& dp) const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyObject> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObject<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyObject2
{
    int64_t RegisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::DependencyPropertyChangedCallback const& callback) const;
    void UnregisterPropertyChangedCallback(Windows::UI::Xaml::DependencyProperty const& dp, int64_t token) const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyObject2> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObject2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyObjectCollectionFactory
{
    Windows::UI::Xaml::DependencyObjectCollection CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyObjectCollectionFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObjectCollectionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyObjectFactory
{
    Windows::UI::Xaml::DependencyObject CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyObjectFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObjectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyProperty
{
    Windows::UI::Xaml::PropertyMetadata GetMetadata(Windows::UI::Xaml::Interop::TypeName const& forType) const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyProperty> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyProperty<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs
{
    Windows::UI::Xaml::DependencyProperty Property() const;
    Windows::Foundation::IInspectable OldValue() const;
    Windows::Foundation::IInspectable NewValue() const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyPropertyChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDependencyPropertyStatics
{
    Windows::Foundation::IInspectable UnsetValue() const;
    Windows::UI::Xaml::DependencyProperty Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata) const;
    Windows::UI::Xaml::DependencyProperty RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata) const;
};
template <> struct consume<Windows::UI::Xaml::IDependencyPropertyStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IDependencyPropertyStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDispatcherTimer
{
    Windows::Foundation::TimeSpan Interval() const;
    void Interval(Windows::Foundation::TimeSpan const& value) const;
    bool IsEnabled() const;
    event_token Tick(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Tick_revoker = event_revoker<Windows::UI::Xaml::IDispatcherTimer>;
    Tick_revoker Tick(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Tick(event_token const& token) const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::UI::Xaml::IDispatcherTimer> { template <typename D> using type = consume_Windows_UI_Xaml_IDispatcherTimer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDispatcherTimerFactory
{
    Windows::UI::Xaml::DispatcherTimer CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IDispatcherTimerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IDispatcherTimerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::ApplicationModel::DataTransfer::DataPackage Data() const;
    void Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::IDragEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragEventArgs2
{
    Windows::ApplicationModel::DataTransfer::DataPackageView DataView() const;
    Windows::UI::Xaml::DragUIOverride DragUIOverride() const;
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers Modifiers() const;
    Windows::ApplicationModel::DataTransfer::DataPackageOperation AcceptedOperation() const;
    void AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    Windows::UI::Xaml::DragOperationDeferral GetDeferral() const;
};
template <> struct consume<Windows::UI::Xaml::IDragEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragEventArgs3
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation AllowedOperations() const;
};
template <> struct consume<Windows::UI::Xaml::IDragEventArgs3> { template <typename D> using type = consume_Windows_UI_Xaml_IDragEventArgs3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragOperationDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::UI::Xaml::IDragOperationDeferral> { template <typename D> using type = consume_Windows_UI_Xaml_IDragOperationDeferral<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragStartingEventArgs
{
    bool Cancel() const;
    void Cancel(bool value) const;
    Windows::ApplicationModel::DataTransfer::DataPackage Data() const;
    Windows::UI::Xaml::DragUI DragUI() const;
    Windows::UI::Xaml::DragOperationDeferral GetDeferral() const;
    Windows::Foundation::Point GetPosition(Windows::UI::Xaml::UIElement const& relativeTo) const;
};
template <> struct consume<Windows::UI::Xaml::IDragStartingEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IDragStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragStartingEventArgs2
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation AllowedOperations() const;
    void AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IDragStartingEventArgs2> { template <typename D> using type = consume_Windows_UI_Xaml_IDragStartingEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragUI
{
    void SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const;
    void SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const;
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
    void SetContentFromDataPackage() const;
};
template <> struct consume<Windows::UI::Xaml::IDragUI> { template <typename D> using type = consume_Windows_UI_Xaml_IDragUI<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDragUIOverride
{
    hstring Caption() const;
    void Caption(param::hstring const& value) const;
    bool IsContentVisible() const;
    void IsContentVisible(bool value) const;
    bool IsCaptionVisible() const;
    void IsCaptionVisible(bool value) const;
    bool IsGlyphVisible() const;
    void IsGlyphVisible(bool value) const;
    void Clear() const;
    void SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage) const;
    void SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::BitmapImage const& bitmapImage, Windows::Foundation::Point const& anchorPoint) const;
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
};
template <> struct consume<Windows::UI::Xaml::IDragUIOverride> { template <typename D> using type = consume_Windows_UI_Xaml_IDragUIOverride<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDropCompletedEventArgs
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation DropResult() const;
};
template <> struct consume<Windows::UI::Xaml::IDropCompletedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IDropCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDurationHelper
{
};
template <> struct consume<Windows::UI::Xaml::IDurationHelper> { template <typename D> using type = consume_Windows_UI_Xaml_IDurationHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IDurationHelperStatics
{
    Windows::UI::Xaml::Duration Automatic() const;
    Windows::UI::Xaml::Duration Forever() const;
    int32_t Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2) const;
    Windows::UI::Xaml::Duration FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan) const;
    bool GetHasTimeSpan(Windows::UI::Xaml::Duration const& target) const;
    Windows::UI::Xaml::Duration Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const;
    bool Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value) const;
    Windows::UI::Xaml::Duration Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration) const;
};
template <> struct consume<Windows::UI::Xaml::IDurationHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IDurationHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IElementSoundPlayer
{
};
template <> struct consume<Windows::UI::Xaml::IElementSoundPlayer> { template <typename D> using type = consume_Windows_UI_Xaml_IElementSoundPlayer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IElementSoundPlayerStatics
{
    double Volume() const;
    void Volume(double value) const;
    Windows::UI::Xaml::ElementSoundPlayerState State() const;
    void State(Windows::UI::Xaml::ElementSoundPlayerState const& value) const;
    void Play(Windows::UI::Xaml::ElementSoundKind const& sound) const;
};
template <> struct consume<Windows::UI::Xaml::IElementSoundPlayerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IElementSoundPlayerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IEventTrigger
{
    Windows::UI::Xaml::RoutedEvent RoutedEvent() const;
    void RoutedEvent(Windows::UI::Xaml::RoutedEvent const& value) const;
    Windows::UI::Xaml::TriggerActionCollection Actions() const;
};
template <> struct consume<Windows::UI::Xaml::IEventTrigger> { template <typename D> using type = consume_Windows_UI_Xaml_IEventTrigger<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IExceptionRoutedEventArgs
{
    hstring ErrorMessage() const;
};
template <> struct consume<Windows::UI::Xaml::IExceptionRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IExceptionRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IExceptionRoutedEventArgsFactory
{
};
template <> struct consume<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IExceptionRoutedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElement
{
    Windows::UI::Xaml::TriggerCollection Triggers() const;
    Windows::UI::Xaml::ResourceDictionary Resources() const;
    void Resources(Windows::UI::Xaml::ResourceDictionary const& value) const;
    Windows::Foundation::IInspectable Tag() const;
    void Tag(Windows::Foundation::IInspectable const& value) const;
    hstring Language() const;
    void Language(param::hstring const& value) const;
    double ActualWidth() const;
    double ActualHeight() const;
    double Width() const;
    void Width(double value) const;
    double Height() const;
    void Height(double value) const;
    double MinWidth() const;
    void MinWidth(double value) const;
    double MaxWidth() const;
    void MaxWidth(double value) const;
    double MinHeight() const;
    void MinHeight(double value) const;
    double MaxHeight() const;
    void MaxHeight(double value) const;
    Windows::UI::Xaml::HorizontalAlignment HorizontalAlignment() const;
    void HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
    Windows::UI::Xaml::VerticalAlignment VerticalAlignment() const;
    void VerticalAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
    Windows::UI::Xaml::Thickness Margin() const;
    void Margin(Windows::UI::Xaml::Thickness const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
    Windows::Foundation::Uri BaseUri() const;
    Windows::Foundation::IInspectable DataContext() const;
    void DataContext(Windows::Foundation::IInspectable const& value) const;
    Windows::UI::Xaml::Style Style() const;
    void Style(Windows::UI::Xaml::Style const& value) const;
    Windows::UI::Xaml::DependencyObject Parent() const;
    Windows::UI::Xaml::FlowDirection FlowDirection() const;
    void FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const;
    event_token Loaded(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Loaded_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement>;
    Loaded_revoker Loaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Loaded(event_token const& token) const;
    event_token Unloaded(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using Unloaded_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement>;
    Unloaded_revoker Unloaded(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void Unloaded(event_token const& token) const;
    event_token SizeChanged(Windows::UI::Xaml::SizeChangedEventHandler const& value) const;
    using SizeChanged_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement>;
    SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::UI::Xaml::SizeChangedEventHandler const& value) const;
    void SizeChanged(event_token const& token) const;
    event_token LayoutUpdated(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using LayoutUpdated_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement>;
    LayoutUpdated_revoker LayoutUpdated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void LayoutUpdated(event_token const& token) const;
    Windows::Foundation::IInspectable FindName(param::hstring const& name) const;
    void SetBinding(Windows::UI::Xaml::DependencyProperty const& dp, Windows::UI::Xaml::Data::BindingBase const& binding) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElement> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElement2
{
    Windows::UI::Xaml::ElementTheme RequestedTheme() const;
    void RequestedTheme(Windows::UI::Xaml::ElementTheme const& value) const;
    event_token DataContextChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& value) const;
    using DataContextChanged_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement2>;
    DataContextChanged_revoker DataContextChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> const& value) const;
    void DataContextChanged(event_token const& token) const;
    Windows::UI::Xaml::Data::BindingExpression GetBindingExpression(Windows::UI::Xaml::DependencyProperty const& dp) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElement2> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElement3
{
    event_token Loading(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const;
    using Loading_revoker = event_revoker<Windows::UI::Xaml::IFrameworkElement3>;
    Loading_revoker Loading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::Foundation::IInspectable> const& value) const;
    void Loading(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElement3> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElement4
{
    bool AllowFocusOnInteraction() const;
    void AllowFocusOnInteraction(bool value) const;
    Windows::UI::Xaml::Thickness FocusVisualMargin() const;
    void FocusVisualMargin(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness FocusVisualSecondaryThickness() const;
    void FocusVisualSecondaryThickness(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Thickness FocusVisualPrimaryThickness() const;
    void FocusVisualPrimaryThickness(Windows::UI::Xaml::Thickness const& value) const;
    Windows::UI::Xaml::Media::Brush FocusVisualSecondaryBrush() const;
    void FocusVisualSecondaryBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush FocusVisualPrimaryBrush() const;
    void FocusVisualPrimaryBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    bool AllowFocusWhenDisabled() const;
    void AllowFocusWhenDisabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElement4> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElement4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementFactory
{
    Windows::UI::Xaml::FrameworkElement CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementOverrides
{
    Windows::Foundation::Size MeasureOverride(Windows::Foundation::Size const& availableSize) const;
    Windows::Foundation::Size ArrangeOverride(Windows::Foundation::Size const& finalSize) const;
    void OnApplyTemplate() const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementOverrides2
{
    bool GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementOverrides2> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementOverrides2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementStatics
{
    Windows::UI::Xaml::DependencyProperty TagProperty() const;
    Windows::UI::Xaml::DependencyProperty LanguageProperty() const;
    Windows::UI::Xaml::DependencyProperty ActualWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty ActualHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty WidthProperty() const;
    Windows::UI::Xaml::DependencyProperty HeightProperty() const;
    Windows::UI::Xaml::DependencyProperty MinWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty MaxWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty MinHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty MaxHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty HorizontalAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty VerticalAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty MarginProperty() const;
    Windows::UI::Xaml::DependencyProperty NameProperty() const;
    Windows::UI::Xaml::DependencyProperty DataContextProperty() const;
    Windows::UI::Xaml::DependencyProperty StyleProperty() const;
    Windows::UI::Xaml::DependencyProperty FlowDirectionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementStatics2
{
    Windows::UI::Xaml::DependencyProperty RequestedThemeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementStatics4
{
    Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusVisualMarginProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusVisualSecondaryThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusVisualPrimaryThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusVisualSecondaryBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty FocusVisualPrimaryBrushProperty() const;
    Windows::UI::Xaml::DependencyProperty AllowFocusWhenDisabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkElementStatics5
{
    void DeferTree(Windows::UI::Xaml::DependencyObject const& element) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkElementStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkElementStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkTemplate
{
};
template <> struct consume<Windows::UI::Xaml::IFrameworkTemplate> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkTemplate<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkTemplateFactory
{
    Windows::UI::Xaml::FrameworkTemplate CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IFrameworkTemplateFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkTemplateFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkView
{
};
template <> struct consume<Windows::UI::Xaml::IFrameworkView> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkView<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IFrameworkViewSource
{
};
template <> struct consume<Windows::UI::Xaml::IFrameworkViewSource> { template <typename D> using type = consume_Windows_UI_Xaml_IFrameworkViewSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IGridLengthHelper
{
};
template <> struct consume<Windows::UI::Xaml::IGridLengthHelper> { template <typename D> using type = consume_Windows_UI_Xaml_IGridLengthHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IGridLengthHelperStatics
{
    Windows::UI::Xaml::GridLength Auto() const;
    Windows::UI::Xaml::GridLength FromPixels(double pixels) const;
    Windows::UI::Xaml::GridLength FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type) const;
    bool GetIsAbsolute(Windows::UI::Xaml::GridLength const& target) const;
    bool GetIsAuto(Windows::UI::Xaml::GridLength const& target) const;
    bool GetIsStar(Windows::UI::Xaml::GridLength const& target) const;
    bool Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IGridLengthHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IGridLengthHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IMediaFailedRoutedEventArgs
{
    hstring ErrorTrace() const;
};
template <> struct consume<Windows::UI::Xaml::IMediaFailedRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IMediaFailedRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPointHelper
{
};
template <> struct consume<Windows::UI::Xaml::IPointHelper> { template <typename D> using type = consume_Windows_UI_Xaml_IPointHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPointHelperStatics
{
    Windows::Foundation::Point FromCoordinates(float x, float y) const;
};
template <> struct consume<Windows::UI::Xaml::IPointHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IPointHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPropertyMetadata
{
    Windows::Foundation::IInspectable DefaultValue() const;
    Windows::UI::Xaml::CreateDefaultValueCallback CreateDefaultValueCallback() const;
};
template <> struct consume<Windows::UI::Xaml::IPropertyMetadata> { template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadata<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPropertyMetadataFactory
{
    Windows::UI::Xaml::PropertyMetadata CreateInstanceWithDefaultValue(Windows::Foundation::IInspectable const& defaultValue, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::PropertyMetadata CreateInstanceWithDefaultValueAndCallback(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IPropertyMetadataFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadataFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPropertyMetadataStatics
{
    Windows::UI::Xaml::PropertyMetadata Create(Windows::Foundation::IInspectable const& defaultValue) const;
    Windows::UI::Xaml::PropertyMetadata Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const;
    Windows::UI::Xaml::PropertyMetadata Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback) const;
    Windows::UI::Xaml::PropertyMetadata Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback) const;
};
template <> struct consume<Windows::UI::Xaml::IPropertyMetadataStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IPropertyMetadataStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPropertyPath
{
    hstring Path() const;
};
template <> struct consume<Windows::UI::Xaml::IPropertyPath> { template <typename D> using type = consume_Windows_UI_Xaml_IPropertyPath<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IPropertyPathFactory
{
    Windows::UI::Xaml::PropertyPath CreateInstance(param::hstring const& path) const;
};
template <> struct consume<Windows::UI::Xaml::IPropertyPathFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IPropertyPathFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IRectHelper
{
};
template <> struct consume<Windows::UI::Xaml::IRectHelper> { template <typename D> using type = consume_Windows_UI_Xaml_IRectHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IRectHelperStatics
{
    Windows::Foundation::Rect Empty() const;
    Windows::Foundation::Rect FromCoordinatesAndDimensions(float x, float y, float width, float height) const;
    Windows::Foundation::Rect FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2) const;
    Windows::Foundation::Rect FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size) const;
    bool GetIsEmpty(Windows::Foundation::Rect const& target) const;
    float GetBottom(Windows::Foundation::Rect const& target) const;
    float GetLeft(Windows::Foundation::Rect const& target) const;
    float GetRight(Windows::Foundation::Rect const& target) const;
    float GetTop(Windows::Foundation::Rect const& target) const;
    bool Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const;
    bool Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value) const;
    Windows::Foundation::Rect Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const;
    Windows::Foundation::Rect Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point) const;
    Windows::Foundation::Rect Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect) const;
};
template <> struct consume<Windows::UI::Xaml::IRectHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IRectHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IResourceDictionary
{
    Windows::Foundation::Uri Source() const;
    void Source(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> MergedDictionaries() const;
    Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable> ThemeDictionaries() const;
};
template <> struct consume<Windows::UI::Xaml::IResourceDictionary> { template <typename D> using type = consume_Windows_UI_Xaml_IResourceDictionary<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IResourceDictionaryFactory
{
    Windows::UI::Xaml::ResourceDictionary CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IResourceDictionaryFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IResourceDictionaryFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IRoutedEvent
{
};
template <> struct consume<Windows::UI::Xaml::IRoutedEvent> { template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEvent<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IRoutedEventArgs
{
    Windows::Foundation::IInspectable OriginalSource() const;
};
template <> struct consume<Windows::UI::Xaml::IRoutedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IRoutedEventArgsFactory
{
    Windows::UI::Xaml::RoutedEventArgs CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IRoutedEventArgsFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IRoutedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetter
{
    Windows::UI::Xaml::DependencyProperty Property() const;
    void Property(Windows::UI::Xaml::DependencyProperty const& value) const;
    Windows::Foundation::IInspectable Value() const;
    void Value(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::ISetter> { template <typename D> using type = consume_Windows_UI_Xaml_ISetter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetter2
{
    Windows::UI::Xaml::TargetPropertyPath Target() const;
    void Target(Windows::UI::Xaml::TargetPropertyPath const& value) const;
};
template <> struct consume<Windows::UI::Xaml::ISetter2> { template <typename D> using type = consume_Windows_UI_Xaml_ISetter2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetterBase
{
    bool IsSealed() const;
};
template <> struct consume<Windows::UI::Xaml::ISetterBase> { template <typename D> using type = consume_Windows_UI_Xaml_ISetterBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetterBaseCollection
{
    bool IsSealed() const;
};
template <> struct consume<Windows::UI::Xaml::ISetterBaseCollection> { template <typename D> using type = consume_Windows_UI_Xaml_ISetterBaseCollection<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetterBaseFactory
{
};
template <> struct consume<Windows::UI::Xaml::ISetterBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_ISetterBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISetterFactory
{
    Windows::UI::Xaml::Setter CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::ISetterFactory> { template <typename D> using type = consume_Windows_UI_Xaml_ISetterFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISizeChangedEventArgs
{
    Windows::Foundation::Size PreviousSize() const;
    Windows::Foundation::Size NewSize() const;
};
template <> struct consume<Windows::UI::Xaml::ISizeChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_ISizeChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISizeHelper
{
};
template <> struct consume<Windows::UI::Xaml::ISizeHelper> { template <typename D> using type = consume_Windows_UI_Xaml_ISizeHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ISizeHelperStatics
{
    Windows::Foundation::Size Empty() const;
    Windows::Foundation::Size FromDimensions(float width, float height) const;
    bool GetIsEmpty(Windows::Foundation::Size const& target) const;
    bool Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value) const;
};
template <> struct consume<Windows::UI::Xaml::ISizeHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_ISizeHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStateTrigger
{
    bool IsActive() const;
    void IsActive(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IStateTrigger> { template <typename D> using type = consume_Windows_UI_Xaml_IStateTrigger<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStateTriggerBase
{
};
template <> struct consume<Windows::UI::Xaml::IStateTriggerBase> { template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStateTriggerBaseFactory
{
    Windows::UI::Xaml::StateTriggerBase CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IStateTriggerBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStateTriggerBaseProtected
{
    void SetActive(bool IsActive) const;
};
template <> struct consume<Windows::UI::Xaml::IStateTriggerBaseProtected> { template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerBaseProtected<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStateTriggerStatics
{
    Windows::UI::Xaml::DependencyProperty IsActiveProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IStateTriggerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IStateTriggerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStyle
{
    bool IsSealed() const;
    Windows::UI::Xaml::SetterBaseCollection Setters() const;
    Windows::UI::Xaml::Interop::TypeName TargetType() const;
    void TargetType(Windows::UI::Xaml::Interop::TypeName const& value) const;
    Windows::UI::Xaml::Style BasedOn() const;
    void BasedOn(Windows::UI::Xaml::Style const& value) const;
    void Seal() const;
};
template <> struct consume<Windows::UI::Xaml::IStyle> { template <typename D> using type = consume_Windows_UI_Xaml_IStyle<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IStyleFactory
{
    Windows::UI::Xaml::Style CreateInstance(Windows::UI::Xaml::Interop::TypeName const& targetType) const;
};
template <> struct consume<Windows::UI::Xaml::IStyleFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IStyleFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITargetPropertyPath
{
    Windows::UI::Xaml::PropertyPath Path() const;
    void Path(Windows::UI::Xaml::PropertyPath const& value) const;
    Windows::Foundation::IInspectable Target() const;
    void Target(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Xaml::ITargetPropertyPath> { template <typename D> using type = consume_Windows_UI_Xaml_ITargetPropertyPath<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITargetPropertyPathFactory
{
    Windows::UI::Xaml::TargetPropertyPath CreateInstance(Windows::UI::Xaml::DependencyProperty const& targetProperty) const;
};
template <> struct consume<Windows::UI::Xaml::ITargetPropertyPathFactory> { template <typename D> using type = consume_Windows_UI_Xaml_ITargetPropertyPathFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IThicknessHelper
{
};
template <> struct consume<Windows::UI::Xaml::IThicknessHelper> { template <typename D> using type = consume_Windows_UI_Xaml_IThicknessHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IThicknessHelperStatics
{
    Windows::UI::Xaml::Thickness FromLengths(double left, double top, double right, double bottom) const;
    Windows::UI::Xaml::Thickness FromUniformLength(double uniformLength) const;
};
template <> struct consume<Windows::UI::Xaml::IThicknessHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IThicknessHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITriggerAction
{
};
template <> struct consume<Windows::UI::Xaml::ITriggerAction> { template <typename D> using type = consume_Windows_UI_Xaml_ITriggerAction<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITriggerActionFactory
{
};
template <> struct consume<Windows::UI::Xaml::ITriggerActionFactory> { template <typename D> using type = consume_Windows_UI_Xaml_ITriggerActionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITriggerBase
{
};
template <> struct consume<Windows::UI::Xaml::ITriggerBase> { template <typename D> using type = consume_Windows_UI_Xaml_ITriggerBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_ITriggerBaseFactory
{
};
template <> struct consume<Windows::UI::Xaml::ITriggerBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_ITriggerBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElement
{
    Windows::Foundation::Size DesiredSize() const;
    bool AllowDrop() const;
    void AllowDrop(bool value) const;
    double Opacity() const;
    void Opacity(double value) const;
    Windows::UI::Xaml::Media::RectangleGeometry Clip() const;
    void Clip(Windows::UI::Xaml::Media::RectangleGeometry const& value) const;
    Windows::UI::Xaml::Media::Transform RenderTransform() const;
    void RenderTransform(Windows::UI::Xaml::Media::Transform const& value) const;
    Windows::UI::Xaml::Media::Projection Projection() const;
    void Projection(Windows::UI::Xaml::Media::Projection const& value) const;
    Windows::Foundation::Point RenderTransformOrigin() const;
    void RenderTransformOrigin(Windows::Foundation::Point const& value) const;
    bool IsHitTestVisible() const;
    void IsHitTestVisible(bool value) const;
    Windows::UI::Xaml::Visibility Visibility() const;
    void Visibility(Windows::UI::Xaml::Visibility const& value) const;
    Windows::Foundation::Size RenderSize() const;
    bool UseLayoutRounding() const;
    void UseLayoutRounding(bool value) const;
    Windows::UI::Xaml::Media::Animation::TransitionCollection Transitions() const;
    void Transitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const;
    Windows::UI::Xaml::Media::CacheMode CacheMode() const;
    void CacheMode(Windows::UI::Xaml::Media::CacheMode const& value) const;
    bool IsTapEnabled() const;
    void IsTapEnabled(bool value) const;
    bool IsDoubleTapEnabled() const;
    void IsDoubleTapEnabled(bool value) const;
    bool IsRightTapEnabled() const;
    void IsRightTapEnabled(bool value) const;
    bool IsHoldingEnabled() const;
    void IsHoldingEnabled(bool value) const;
    Windows::UI::Xaml::Input::ManipulationModes ManipulationMode() const;
    void ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> PointerCaptures() const;
    event_token KeyUp(Windows::UI::Xaml::Input::KeyEventHandler const& value) const;
    using KeyUp_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    KeyUp_revoker KeyUp(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const;
    void KeyUp(event_token const& token) const;
    event_token KeyDown(Windows::UI::Xaml::Input::KeyEventHandler const& value) const;
    using KeyDown_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    KeyDown_revoker KeyDown(auto_revoke_t, Windows::UI::Xaml::Input::KeyEventHandler const& value) const;
    void KeyDown(event_token const& token) const;
    event_token GotFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using GotFocus_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    GotFocus_revoker GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void GotFocus(event_token const& token) const;
    event_token LostFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using LostFocus_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    LostFocus_revoker LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void LostFocus(event_token const& token) const;
    event_token DragEnter(Windows::UI::Xaml::DragEventHandler const& value) const;
    using DragEnter_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    DragEnter_revoker DragEnter(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const;
    void DragEnter(event_token const& token) const;
    event_token DragLeave(Windows::UI::Xaml::DragEventHandler const& value) const;
    using DragLeave_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    DragLeave_revoker DragLeave(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const;
    void DragLeave(event_token const& token) const;
    event_token DragOver(Windows::UI::Xaml::DragEventHandler const& value) const;
    using DragOver_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    DragOver_revoker DragOver(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const;
    void DragOver(event_token const& token) const;
    event_token Drop(Windows::UI::Xaml::DragEventHandler const& value) const;
    using Drop_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    Drop_revoker Drop(auto_revoke_t, Windows::UI::Xaml::DragEventHandler const& value) const;
    void Drop(event_token const& token) const;
    event_token PointerPressed(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerPressed_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerPressed(event_token const& token) const;
    event_token PointerMoved(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerMoved_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerMoved(event_token const& token) const;
    event_token PointerReleased(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerReleased_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerReleased(event_token const& token) const;
    event_token PointerEntered(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerEntered_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerEntered(event_token const& token) const;
    event_token PointerExited(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerExited_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerExited_revoker PointerExited(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerExited(event_token const& token) const;
    event_token PointerCaptureLost(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerCaptureLost_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerCaptureLost(event_token const& token) const;
    event_token PointerCanceled(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerCanceled_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerCanceled_revoker PointerCanceled(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerCanceled(event_token const& token) const;
    event_token PointerWheelChanged(Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    using PointerWheelChanged_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, Windows::UI::Xaml::Input::PointerEventHandler const& value) const;
    void PointerWheelChanged(event_token const& token) const;
    event_token Tapped(Windows::UI::Xaml::Input::TappedEventHandler const& value) const;
    using Tapped_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    Tapped_revoker Tapped(auto_revoke_t, Windows::UI::Xaml::Input::TappedEventHandler const& value) const;
    void Tapped(event_token const& token) const;
    event_token DoubleTapped(Windows::UI::Xaml::Input::DoubleTappedEventHandler const& value) const;
    using DoubleTapped_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    DoubleTapped_revoker DoubleTapped(auto_revoke_t, Windows::UI::Xaml::Input::DoubleTappedEventHandler const& value) const;
    void DoubleTapped(event_token const& token) const;
    event_token Holding(Windows::UI::Xaml::Input::HoldingEventHandler const& value) const;
    using Holding_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    Holding_revoker Holding(auto_revoke_t, Windows::UI::Xaml::Input::HoldingEventHandler const& value) const;
    void Holding(event_token const& token) const;
    event_token RightTapped(Windows::UI::Xaml::Input::RightTappedEventHandler const& value) const;
    using RightTapped_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    RightTapped_revoker RightTapped(auto_revoke_t, Windows::UI::Xaml::Input::RightTappedEventHandler const& value) const;
    void RightTapped(event_token const& token) const;
    event_token ManipulationStarting(Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& value) const;
    using ManipulationStarting_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    ManipulationStarting_revoker ManipulationStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartingEventHandler const& value) const;
    void ManipulationStarting(event_token const& token) const;
    event_token ManipulationInertiaStarting(Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& value) const;
    using ManipulationInertiaStarting_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    ManipulationInertiaStarting_revoker ManipulationInertiaStarting(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler const& value) const;
    void ManipulationInertiaStarting(event_token const& token) const;
    event_token ManipulationStarted(Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& value) const;
    using ManipulationStarted_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationStartedEventHandler const& value) const;
    void ManipulationStarted(event_token const& token) const;
    event_token ManipulationDelta(Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& value) const;
    using ManipulationDelta_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    ManipulationDelta_revoker ManipulationDelta(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationDeltaEventHandler const& value) const;
    void ManipulationDelta(event_token const& token) const;
    event_token ManipulationCompleted(Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& value) const;
    using ManipulationCompleted_revoker = event_revoker<Windows::UI::Xaml::IUIElement>;
    ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::UI::Xaml::Input::ManipulationCompletedEventHandler const& value) const;
    void ManipulationCompleted(event_token const& token) const;
    void Measure(Windows::Foundation::Size const& availableSize) const;
    void Arrange(Windows::Foundation::Rect const& finalRect) const;
    bool CapturePointer(Windows::UI::Xaml::Input::Pointer const& value) const;
    void ReleasePointerCapture(Windows::UI::Xaml::Input::Pointer const& value) const;
    void ReleasePointerCaptures() const;
    void AddHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler, bool handledEventsToo) const;
    void RemoveHandler(Windows::UI::Xaml::RoutedEvent const& routedEvent, Windows::Foundation::IInspectable const& handler) const;
    Windows::UI::Xaml::Media::GeneralTransform TransformToVisual(Windows::UI::Xaml::UIElement const& visual) const;
    void InvalidateMeasure() const;
    void InvalidateArrange() const;
    void UpdateLayout() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElement> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElement<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElement2
{
    Windows::UI::Xaml::Media::ElementCompositeMode CompositeMode() const;
    void CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode const& value) const;
    bool CancelDirectManipulations() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElement2> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElement2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElement3
{
    Windows::UI::Xaml::Media::Media3D::Transform3D Transform3D() const;
    void Transform3D(Windows::UI::Xaml::Media::Media3D::Transform3D const& value) const;
    bool CanDrag() const;
    void CanDrag(bool value) const;
    event_token DragStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& value) const;
    using DragStarting_revoker = event_revoker<Windows::UI::Xaml::IUIElement3>;
    DragStarting_revoker DragStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> const& value) const;
    void DragStarting(event_token const& token) const;
    event_token DropCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& value) const;
    using DropCompleted_revoker = event_revoker<Windows::UI::Xaml::IUIElement3>;
    DropCompleted_revoker DropCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> const& value) const;
    void DropCompleted(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> StartDragAsync(Windows::UI::Input::PointerPoint const& pointerPoint) const;
};
template <> struct consume<Windows::UI::Xaml::IUIElement3> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElement3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElement4
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase ContextFlyout() const;
    void ContextFlyout(Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const;
    bool ExitDisplayModeOnAccessKeyInvoked() const;
    void ExitDisplayModeOnAccessKeyInvoked(bool value) const;
    bool IsAccessKeyScope() const;
    void IsAccessKeyScope(bool value) const;
    Windows::UI::Xaml::DependencyObject AccessKeyScopeOwner() const;
    void AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring AccessKey() const;
    void AccessKey(param::hstring const& value) const;
    event_token ContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& value) const;
    using ContextRequested_revoker = event_revoker<Windows::UI::Xaml::IUIElement4>;
    ContextRequested_revoker ContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> const& value) const;
    void ContextRequested(event_token const& token) const;
    event_token ContextCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& value) const;
    using ContextCanceled_revoker = event_revoker<Windows::UI::Xaml::IUIElement4>;
    ContextCanceled_revoker ContextCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> const& value) const;
    void ContextCanceled(event_token const& token) const;
    event_token AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const;
    using AccessKeyDisplayRequested_revoker = event_revoker<Windows::UI::Xaml::IUIElement4>;
    AccessKeyDisplayRequested_revoker AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const;
    void AccessKeyDisplayRequested(event_token const& token) const;
    event_token AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const;
    using AccessKeyDisplayDismissed_revoker = event_revoker<Windows::UI::Xaml::IUIElement4>;
    AccessKeyDisplayDismissed_revoker AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const;
    void AccessKeyDisplayDismissed(event_token const& token) const;
    event_token AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const;
    using AccessKeyInvoked_revoker = event_revoker<Windows::UI::Xaml::IUIElement4>;
    AccessKeyInvoked_revoker AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const;
    void AccessKeyInvoked(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::IUIElement4> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElement4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElement5
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::XamlLight> Lights() const;
    Windows::UI::Xaml::Input::KeyTipPlacementMode KeyTipPlacementMode() const;
    void KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const;
    double KeyTipHorizontalOffset() const;
    void KeyTipHorizontalOffset(double value) const;
    double KeyTipVerticalOffset() const;
    void KeyTipVerticalOffset(double value) const;
    Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode XYFocusKeyboardNavigation() const;
    void XYFocusKeyboardNavigation(Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode const& value) const;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusUpNavigationStrategy() const;
    void XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusDownNavigationStrategy() const;
    void XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusLeftNavigationStrategy() const;
    void XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusRightNavigationStrategy() const;
    void XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const;
    Windows::UI::Xaml::ElementHighContrastAdjustment HighContrastAdjustment() const;
    void HighContrastAdjustment(Windows::UI::Xaml::ElementHighContrastAdjustment const& value) const;
    Windows::UI::Xaml::Input::KeyboardNavigationMode TabFocusNavigation() const;
    void TabFocusNavigation(Windows::UI::Xaml::Input::KeyboardNavigationMode const& value) const;
    event_token GettingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& value) const;
    using GettingFocus_revoker = event_revoker<Windows::UI::Xaml::IUIElement5>;
    GettingFocus_revoker GettingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::GettingFocusEventArgs> const& value) const;
    void GettingFocus(event_token const& token) const;
    event_token LosingFocus(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& value) const;
    using LosingFocus_revoker = event_revoker<Windows::UI::Xaml::IUIElement5>;
    LosingFocus_revoker LosingFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::LosingFocusEventArgs> const& value) const;
    void LosingFocus(event_token const& token) const;
    event_token NoFocusCandidateFound(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& value) const;
    using NoFocusCandidateFound_revoker = event_revoker<Windows::UI::Xaml::IUIElement5>;
    NoFocusCandidateFound_revoker NoFocusCandidateFound(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs> const& value) const;
    void NoFocusCandidateFound(event_token const& token) const;
    void StartBringIntoView() const;
    void StartBringIntoView(Windows::UI::Xaml::BringIntoViewOptions const& options) const;
};
template <> struct consume<Windows::UI::Xaml::IUIElement5> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElement5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementFactory
{
};
template <> struct consume<Windows::UI::Xaml::IUIElementFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementOverrides
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer OnCreateAutomationPeer() const;
    void OnDisconnectVisualChildren() const;
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics
{
    Windows::UI::Xaml::RoutedEvent KeyDownEvent() const;
    Windows::UI::Xaml::RoutedEvent KeyUpEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerEnteredEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerPressedEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerMovedEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerReleasedEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerExitedEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerCaptureLostEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerCanceledEvent() const;
    Windows::UI::Xaml::RoutedEvent PointerWheelChangedEvent() const;
    Windows::UI::Xaml::RoutedEvent TappedEvent() const;
    Windows::UI::Xaml::RoutedEvent DoubleTappedEvent() const;
    Windows::UI::Xaml::RoutedEvent HoldingEvent() const;
    Windows::UI::Xaml::RoutedEvent RightTappedEvent() const;
    Windows::UI::Xaml::RoutedEvent ManipulationStartingEvent() const;
    Windows::UI::Xaml::RoutedEvent ManipulationInertiaStartingEvent() const;
    Windows::UI::Xaml::RoutedEvent ManipulationStartedEvent() const;
    Windows::UI::Xaml::RoutedEvent ManipulationDeltaEvent() const;
    Windows::UI::Xaml::RoutedEvent ManipulationCompletedEvent() const;
    Windows::UI::Xaml::RoutedEvent DragEnterEvent() const;
    Windows::UI::Xaml::RoutedEvent DragLeaveEvent() const;
    Windows::UI::Xaml::RoutedEvent DragOverEvent() const;
    Windows::UI::Xaml::RoutedEvent DropEvent() const;
    Windows::UI::Xaml::DependencyProperty AllowDropProperty() const;
    Windows::UI::Xaml::DependencyProperty OpacityProperty() const;
    Windows::UI::Xaml::DependencyProperty ClipProperty() const;
    Windows::UI::Xaml::DependencyProperty RenderTransformProperty() const;
    Windows::UI::Xaml::DependencyProperty ProjectionProperty() const;
    Windows::UI::Xaml::DependencyProperty RenderTransformOriginProperty() const;
    Windows::UI::Xaml::DependencyProperty IsHitTestVisibleProperty() const;
    Windows::UI::Xaml::DependencyProperty VisibilityProperty() const;
    Windows::UI::Xaml::DependencyProperty UseLayoutRoundingProperty() const;
    Windows::UI::Xaml::DependencyProperty TransitionsProperty() const;
    Windows::UI::Xaml::DependencyProperty CacheModeProperty() const;
    Windows::UI::Xaml::DependencyProperty IsTapEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsDoubleTapEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsRightTapEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsHoldingEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty ManipulationModeProperty() const;
    Windows::UI::Xaml::DependencyProperty PointerCapturesProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics2
{
    Windows::UI::Xaml::DependencyProperty CompositeModeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics3
{
    Windows::UI::Xaml::DependencyProperty Transform3DProperty() const;
    Windows::UI::Xaml::DependencyProperty CanDragProperty() const;
    bool TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics4
{
    Windows::UI::Xaml::DependencyProperty ContextFlyoutProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitDisplayModeOnAccessKeyInvokedProperty() const;
    Windows::UI::Xaml::DependencyProperty IsAccessKeyScopeProperty() const;
    Windows::UI::Xaml::DependencyProperty AccessKeyScopeOwnerProperty() const;
    Windows::UI::Xaml::DependencyProperty AccessKeyProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics5
{
    Windows::UI::Xaml::DependencyProperty LightsProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTipPlacementModeProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTipHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTipVerticalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusKeyboardNavigationProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusUpNavigationStrategyProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusDownNavigationStrategyProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusLeftNavigationStrategyProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusRightNavigationStrategyProperty() const;
    Windows::UI::Xaml::DependencyProperty HighContrastAdjustmentProperty() const;
    Windows::UI::Xaml::DependencyProperty TabFocusNavigationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUIElementStatics6
{
    Windows::UI::Xaml::RoutedEvent GettingFocusEvent() const;
    Windows::UI::Xaml::RoutedEvent LosingFocusEvent() const;
    Windows::UI::Xaml::RoutedEvent NoFocusCandidateFoundEvent() const;
};
template <> struct consume<Windows::UI::Xaml::IUIElementStatics6> { template <typename D> using type = consume_Windows_UI_Xaml_IUIElementStatics6<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs
{
    HRESULT Exception() const;
    hstring Message() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::IUnhandledExceptionEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IUnhandledExceptionEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualState
{
    hstring Name() const;
    Windows::UI::Xaml::Media::Animation::Storyboard Storyboard() const;
    void Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualState> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualState<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualState2
{
    Windows::UI::Xaml::SetterBaseCollection Setters() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> StateTriggers() const;
};
template <> struct consume<Windows::UI::Xaml::IVisualState2> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualState2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateChangedEventArgs
{
    Windows::UI::Xaml::VisualState OldState() const;
    void OldState(Windows::UI::Xaml::VisualState const& value) const;
    Windows::UI::Xaml::VisualState NewState() const;
    void NewState(Windows::UI::Xaml::VisualState const& value) const;
    Windows::UI::Xaml::Controls::Control Control() const;
    void Control(Windows::UI::Xaml::Controls::Control const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateGroup
{
    hstring Name() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> Transitions() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> States() const;
    Windows::UI::Xaml::VisualState CurrentState() const;
    event_token CurrentStateChanged(Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const;
    using CurrentStateChanged_revoker = event_revoker<Windows::UI::Xaml::IVisualStateGroup>;
    CurrentStateChanged_revoker CurrentStateChanged(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const;
    void CurrentStateChanged(event_token const& token) const;
    event_token CurrentStateChanging(Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const;
    using CurrentStateChanging_revoker = event_revoker<Windows::UI::Xaml::IVisualStateGroup>;
    CurrentStateChanging_revoker CurrentStateChanging(auto_revoke_t, Windows::UI::Xaml::VisualStateChangedEventHandler const& value) const;
    void CurrentStateChanging(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateGroup> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateGroup<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateManager
{
};
template <> struct consume<Windows::UI::Xaml::IVisualStateManager> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManager<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateManagerFactory
{
    Windows::UI::Xaml::VisualStateManager CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateManagerFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateManagerOverrides
{
    bool GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateManagerOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateManagerProtected
{
    void RaiseCurrentStateChanging(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const;
    void RaiseCurrentStateChanged(Windows::UI::Xaml::VisualStateGroup const& stateGroup, Windows::UI::Xaml::VisualState const& oldState, Windows::UI::Xaml::VisualState const& newState, Windows::UI::Xaml::Controls::Control const& control) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateManagerProtected> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerProtected<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualStateManagerStatics
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj) const;
    Windows::UI::Xaml::DependencyProperty CustomVisualStateManagerProperty() const;
    Windows::UI::Xaml::VisualStateManager GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj) const;
    void SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value) const;
    bool GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualStateManagerStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualStateManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualTransition
{
    Windows::UI::Xaml::Duration GeneratedDuration() const;
    void GeneratedDuration(Windows::UI::Xaml::Duration const& value) const;
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase GeneratedEasingFunction() const;
    void GeneratedEasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    hstring To() const;
    void To(param::hstring const& value) const;
    hstring From() const;
    void From(param::hstring const& value) const;
    Windows::UI::Xaml::Media::Animation::Storyboard Storyboard() const;
    void Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualTransition> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IVisualTransitionFactory
{
    Windows::UI::Xaml::VisualTransition CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::IVisualTransitionFactory> { template <typename D> using type = consume_Windows_UI_Xaml_IVisualTransitionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IWindow
{
    Windows::Foundation::Rect Bounds() const;
    bool Visible() const;
    Windows::UI::Xaml::UIElement Content() const;
    void Content(Windows::UI::Xaml::UIElement const& value) const;
    Windows::UI::Core::CoreWindow CoreWindow() const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
    event_token Activated(Windows::UI::Xaml::WindowActivatedEventHandler const& value) const;
    using Activated_revoker = event_revoker<Windows::UI::Xaml::IWindow>;
    Activated_revoker Activated(auto_revoke_t, Windows::UI::Xaml::WindowActivatedEventHandler const& value) const;
    void Activated(event_token const& token) const;
    event_token Closed(Windows::UI::Xaml::WindowClosedEventHandler const& value) const;
    using Closed_revoker = event_revoker<Windows::UI::Xaml::IWindow>;
    Closed_revoker Closed(auto_revoke_t, Windows::UI::Xaml::WindowClosedEventHandler const& value) const;
    void Closed(event_token const& token) const;
    event_token SizeChanged(Windows::UI::Xaml::WindowSizeChangedEventHandler const& value) const;
    using SizeChanged_revoker = event_revoker<Windows::UI::Xaml::IWindow>;
    SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::UI::Xaml::WindowSizeChangedEventHandler const& value) const;
    void SizeChanged(event_token const& token) const;
    event_token VisibilityChanged(Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& value) const;
    using VisibilityChanged_revoker = event_revoker<Windows::UI::Xaml::IWindow>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::UI::Xaml::WindowVisibilityChangedEventHandler const& value) const;
    void VisibilityChanged(event_token const& token) const;
    void Activate() const;
    void Close() const;
};
template <> struct consume<Windows::UI::Xaml::IWindow> { template <typename D> using type = consume_Windows_UI_Xaml_IWindow<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IWindow2
{
    void SetTitleBar(Windows::UI::Xaml::UIElement const& value) const;
};
template <> struct consume<Windows::UI::Xaml::IWindow2> { template <typename D> using type = consume_Windows_UI_Xaml_IWindow2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IWindow3
{
    Windows::UI::Composition::Compositor Compositor() const;
};
template <> struct consume<Windows::UI::Xaml::IWindow3> { template <typename D> using type = consume_Windows_UI_Xaml_IWindow3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IWindowCreatedEventArgs
{
    Windows::UI::Xaml::Window Window() const;
};
template <> struct consume<Windows::UI::Xaml::IWindowCreatedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_IWindowCreatedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_IWindowStatics
{
    Windows::UI::Xaml::Window Current() const;
};
template <> struct consume<Windows::UI::Xaml::IWindowStatics> { template <typename D> using type = consume_Windows_UI_Xaml_IWindowStatics<D>; };

template <> struct abi<Windows::UI::Xaml::IAdaptiveTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinWindowWidth(double* value) = 0;
    virtual HRESULT __stdcall put_MinWindowWidth(double value) = 0;
    virtual HRESULT __stdcall get_MinWindowHeight(double* value) = 0;
    virtual HRESULT __stdcall put_MinWindowHeight(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IAdaptiveTriggerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IAdaptiveTriggerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinWindowWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinWindowHeightProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplication>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Resources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Resources(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DebugSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RequestedTheme(abi_t<Windows::UI::Xaml::ApplicationTheme>* value) = 0;
    virtual HRESULT __stdcall put_RequestedTheme(abi_t<Windows::UI::Xaml::ApplicationTheme> value) = 0;
    virtual HRESULT __stdcall add_UnhandledException(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UnhandledException(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Suspending(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Suspending(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Resuming(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Resuming(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Exit() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplication2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusVisualKind(abi_t<Windows::UI::Xaml::FocusVisualKind>* value) = 0;
    virtual HRESULT __stdcall put_FocusVisualKind(abi_t<Windows::UI::Xaml::FocusVisualKind> value) = 0;
    virtual HRESULT __stdcall get_RequiresPointerMode(abi_t<Windows::UI::Xaml::ApplicationRequiresPointerMode>* value) = 0;
    virtual HRESULT __stdcall put_RequiresPointerMode(abi_t<Windows::UI::Xaml::ApplicationRequiresPointerMode> value) = 0;
    virtual HRESULT __stdcall add_LeavingBackground(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LeavingBackground(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnteredBackground(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnteredBackground(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplication3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HighContrastAdjustment(abi_t<Windows::UI::Xaml::ApplicationHighContrastAdjustment>* value) = 0;
    virtual HRESULT __stdcall put_HighContrastAdjustment(abi_t<Windows::UI::Xaml::ApplicationHighContrastAdjustment> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplicationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplicationInitializationCallbackParams>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IApplicationOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnLaunched(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnFileActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnSearchActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnShareTargetActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnFileOpenPickerActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnFileSavePickerActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnCachedFileUpdaterActivated(::IUnknown* args) = 0;
    virtual HRESULT __stdcall OnWindowCreated(::IUnknown* args) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplicationOverrides2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnBackgroundActivated(::IUnknown* args) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IApplicationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Start(::IUnknown* callback) = 0;
    virtual HRESULT __stdcall LoadComponent(::IUnknown* component, ::IUnknown* resourceLocator) = 0;
    virtual HRESULT __stdcall LoadComponentWithResourceLocation(::IUnknown* component, ::IUnknown* resourceLocator, abi_t<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation> componentResourceLocation) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IBindingFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IBringIntoViewOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnimationDesired(bool* value) = 0;
    virtual HRESULT __stdcall put_AnimationDesired(bool value) = 0;
    virtual HRESULT __stdcall get_TargetRect(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_TargetRect(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ICornerRadiusHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ICornerRadiusHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft, abi_t<Windows::UI::Xaml::CornerRadius>* returnValue) = 0;
    virtual HRESULT __stdcall FromUniformRadius(double uniformRadius, abi_t<Windows::UI::Xaml::CornerRadius>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataContextChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NewValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall LoadContent(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplateExtension>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ResetTemplate() = 0;
    virtual HRESULT __stdcall ProcessBinding(uint32_t phase, bool* returnValue) = 0;
    virtual HRESULT __stdcall ProcessBindings(::IUnknown* arg, int32_t* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplateFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplateKey>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DataType(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplateKeyFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithType(::IUnknown* dataType, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDataTemplateStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtensionInstanceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetExtensionInstance(::IUnknown* element, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetExtensionInstance(::IUnknown* element, ::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDebugSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableFrameRateCounter(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableFrameRateCounter(bool value) = 0;
    virtual HRESULT __stdcall get_IsBindingTracingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsBindingTracingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsOverdrawHeatMapEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsOverdrawHeatMapEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_BindingFailed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BindingFailed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDebugSettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableRedrawRegions(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableRedrawRegions(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDebugSettings3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTextPerformanceVisualizationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsTextPerformanceVisualizationEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetValue(::IUnknown* dp, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SetValue(::IUnknown* dp, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall ClearValue(::IUnknown* dp) = 0;
    virtual HRESULT __stdcall ReadLocalValue(::IUnknown* dp, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAnimationBaseValue(::IUnknown* dp, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyObject2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterPropertyChangedCallback(::IUnknown* dp, ::IUnknown* callback, int64_t* returnValue) = 0;
    virtual HRESULT __stdcall UnregisterPropertyChangedCallback(::IUnknown* dp, int64_t token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyObjectCollectionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyObjectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyProperty>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetMetadata(abi_t<Windows::UI::Xaml::Interop::TypeName> forType, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OldValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewValue(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDependencyPropertyStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnsetValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Register(HSTRING name, abi_t<Windows::UI::Xaml::Interop::TypeName> propertyType, abi_t<Windows::UI::Xaml::Interop::TypeName> ownerType, ::IUnknown* typeMetadata, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RegisterAttached(HSTRING name, abi_t<Windows::UI::Xaml::Interop::TypeName> propertyType, abi_t<Windows::UI::Xaml::Interop::TypeName> ownerType, ::IUnknown* defaultMetadata, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDispatcherTimer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Interval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Interval(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall add_Tick(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Tick(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDispatcherTimerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataView(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DragUIOverride(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Modifiers(abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>* value) = 0;
    virtual HRESULT __stdcall get_AcceptedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
    virtual HRESULT __stdcall put_AcceptedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragEventArgs3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragOperationDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragStartingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool* value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DragUI(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetPosition(::IUnknown* relativeTo, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragStartingEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
    virtual HRESULT __stdcall put_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetContentFromBitmapImage(::IUnknown* bitmapImage) = 0;
    virtual HRESULT __stdcall SetContentFromBitmapImageWithAnchorPoint(::IUnknown* bitmapImage, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
    virtual HRESULT __stdcall SetContentFromSoftwareBitmap(::IUnknown* softwareBitmap) = 0;
    virtual HRESULT __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(::IUnknown* softwareBitmap, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
    virtual HRESULT __stdcall SetContentFromDataPackage() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDragUIOverride>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Caption(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Caption(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsContentVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsContentVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsCaptionVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCaptionVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsGlyphVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsGlyphVisible(bool value) = 0;
    virtual HRESULT __stdcall Clear() = 0;
    virtual HRESULT __stdcall SetContentFromBitmapImage(::IUnknown* bitmapImage) = 0;
    virtual HRESULT __stdcall SetContentFromBitmapImageWithAnchorPoint(::IUnknown* bitmapImage, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
    virtual HRESULT __stdcall SetContentFromSoftwareBitmap(::IUnknown* softwareBitmap) = 0;
    virtual HRESULT __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(::IUnknown* softwareBitmap, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDropCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DropResult(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IDurationHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IDurationHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Automatic(abi_t<Windows::UI::Xaml::Duration>* value) = 0;
    virtual HRESULT __stdcall get_Forever(abi_t<Windows::UI::Xaml::Duration>* value) = 0;
    virtual HRESULT __stdcall Compare(abi_t<Windows::UI::Xaml::Duration> duration1, abi_t<Windows::UI::Xaml::Duration> duration2, int32_t* returnValue) = 0;
    virtual HRESULT __stdcall FromTimeSpan(abi_t<Windows::Foundation::TimeSpan> timeSpan, abi_t<Windows::UI::Xaml::Duration>* returnValue) = 0;
    virtual HRESULT __stdcall GetHasTimeSpan(abi_t<Windows::UI::Xaml::Duration> target, bool* value) = 0;
    virtual HRESULT __stdcall Add(abi_t<Windows::UI::Xaml::Duration> target, abi_t<Windows::UI::Xaml::Duration> duration, abi_t<Windows::UI::Xaml::Duration>* returnValue) = 0;
    virtual HRESULT __stdcall Equals(abi_t<Windows::UI::Xaml::Duration> target, abi_t<Windows::UI::Xaml::Duration> value, bool* returnValue) = 0;
    virtual HRESULT __stdcall Subtract(abi_t<Windows::UI::Xaml::Duration> target, abi_t<Windows::UI::Xaml::Duration> duration, abi_t<Windows::UI::Xaml::Duration>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IElementSoundPlayer>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IElementSoundPlayerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Volume(double* value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::UI::Xaml::ElementSoundPlayerState>* value) = 0;
    virtual HRESULT __stdcall put_State(abi_t<Windows::UI::Xaml::ElementSoundPlayerState> value) = 0;
    virtual HRESULT __stdcall Play(abi_t<Windows::UI::Xaml::ElementSoundKind> sound) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IEventTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RoutedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RoutedEvent(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Actions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IExceptionRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorMessage(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Triggers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Resources(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Resources(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Tag(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Tag(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Language(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ActualWidth(double* value) = 0;
    virtual HRESULT __stdcall get_ActualHeight(double* value) = 0;
    virtual HRESULT __stdcall get_Width(double* value) = 0;
    virtual HRESULT __stdcall put_Width(double value) = 0;
    virtual HRESULT __stdcall get_Height(double* value) = 0;
    virtual HRESULT __stdcall put_Height(double value) = 0;
    virtual HRESULT __stdcall get_MinWidth(double* value) = 0;
    virtual HRESULT __stdcall put_MinWidth(double value) = 0;
    virtual HRESULT __stdcall get_MaxWidth(double* value) = 0;
    virtual HRESULT __stdcall put_MaxWidth(double value) = 0;
    virtual HRESULT __stdcall get_MinHeight(double* value) = 0;
    virtual HRESULT __stdcall put_MinHeight(double value) = 0;
    virtual HRESULT __stdcall get_MaxHeight(double* value) = 0;
    virtual HRESULT __stdcall put_MaxHeight(double value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignment(abi_t<Windows::UI::Xaml::HorizontalAlignment>* value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignment(abi_t<Windows::UI::Xaml::HorizontalAlignment> value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignment(abi_t<Windows::UI::Xaml::VerticalAlignment>* value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignment(abi_t<Windows::UI::Xaml::VerticalAlignment> value) = 0;
    virtual HRESULT __stdcall get_Margin(abi_t<Windows::UI::Xaml::Thickness>* value) = 0;
    virtual HRESULT __stdcall put_Margin(abi_t<Windows::UI::Xaml::Thickness> value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) = 0;
    virtual HRESULT __stdcall get_BaseUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataContext(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DataContext(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Style(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Style(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(abi_t<Windows::UI::Xaml::FlowDirection>* value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(abi_t<Windows::UI::Xaml::FlowDirection> value) = 0;
    virtual HRESULT __stdcall add_Loaded(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Loaded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Unloaded(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Unloaded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SizeChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_LayoutUpdated(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LayoutUpdated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall FindName(HSTRING name, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall SetBinding(::IUnknown* dp, ::IUnknown* binding) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElement2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedTheme(abi_t<Windows::UI::Xaml::ElementTheme>* value) = 0;
    virtual HRESULT __stdcall put_RequestedTheme(abi_t<Windows::UI::Xaml::ElementTheme> value) = 0;
    virtual HRESULT __stdcall add_DataContextChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DataContextChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetBindingExpression(::IUnknown* dp, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElement3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Loading(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Loading(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElement4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) = 0;
    virtual HRESULT __stdcall get_FocusVisualMargin(abi_t<Windows::UI::Xaml::Thickness>* value) = 0;
    virtual HRESULT __stdcall put_FocusVisualMargin(abi_t<Windows::UI::Xaml::Thickness> value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryThickness(abi_t<Windows::UI::Xaml::Thickness>* value) = 0;
    virtual HRESULT __stdcall put_FocusVisualSecondaryThickness(abi_t<Windows::UI::Xaml::Thickness> value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryThickness(abi_t<Windows::UI::Xaml::Thickness>* value) = 0;
    virtual HRESULT __stdcall put_FocusVisualPrimaryThickness(abi_t<Windows::UI::Xaml::Thickness> value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryBrush(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FocusVisualSecondaryBrush(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryBrush(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FocusVisualPrimaryBrush(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MeasureOverride(abi_t<Windows::Foundation::Size> availableSize, abi_t<Windows::Foundation::Size>* returnValue) = 0;
    virtual HRESULT __stdcall ArrangeOverride(abi_t<Windows::Foundation::Size> finalSize, abi_t<Windows::Foundation::Size>* returnValue) = 0;
    virtual HRESULT __stdcall OnApplyTemplate() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementOverrides2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GoToElementStateCore(HSTRING stateName, bool useTransitions, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TagProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LanguageProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ActualWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ActualHeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MinHeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxHeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignmentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignmentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MarginProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataContextProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowDirectionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestedThemeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualMarginProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryThicknessProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryThicknessProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryBrushProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryBrushProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabledProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkElementStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DeferTree(::IUnknown* element) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkTemplate>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkTemplateFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkView>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IFrameworkViewSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IGridLengthHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IGridLengthHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Auto(abi_t<Windows::UI::Xaml::GridLength>* value) = 0;
    virtual HRESULT __stdcall FromPixels(double pixels, abi_t<Windows::UI::Xaml::GridLength>* returnValue) = 0;
    virtual HRESULT __stdcall FromValueAndType(double value, abi_t<Windows::UI::Xaml::GridUnitType> type, abi_t<Windows::UI::Xaml::GridLength>* returnValue) = 0;
    virtual HRESULT __stdcall GetIsAbsolute(abi_t<Windows::UI::Xaml::GridLength> target, bool* value) = 0;
    virtual HRESULT __stdcall GetIsAuto(abi_t<Windows::UI::Xaml::GridLength> target, bool* value) = 0;
    virtual HRESULT __stdcall GetIsStar(abi_t<Windows::UI::Xaml::GridLength> target, bool* value) = 0;
    virtual HRESULT __stdcall Equals(abi_t<Windows::UI::Xaml::GridLength> target, abi_t<Windows::UI::Xaml::GridLength> value, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorTrace(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPointHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IPointHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromCoordinates(float x, float y, abi_t<Windows::Foundation::Point>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPropertyMetadata>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CreateDefaultValueCallback(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPropertyMetadataFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithDefaultValue(::IUnknown* defaultValue, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDefaultValueAndCallback(::IUnknown* defaultValue, ::IUnknown* propertyChangedCallback, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPropertyMetadataStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithDefaultValue(::IUnknown* defaultValue, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateWithDefaultValueAndCallback(::IUnknown* defaultValue, ::IUnknown* propertyChangedCallback, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateWithFactory(::IUnknown* createDefaultValueCallback, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall CreateWithFactoryAndCallback(::IUnknown* createDefaultValueCallback, ::IUnknown* propertyChangedCallback, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPropertyPath>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IPropertyPathFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(HSTRING path, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IRectHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IRectHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Empty(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall FromCoordinatesAndDimensions(float x, float y, float width, float height, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall FromPoints(abi_t<Windows::Foundation::Point> point1, abi_t<Windows::Foundation::Point> point2, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall FromLocationAndSize(abi_t<Windows::Foundation::Point> location, abi_t<Windows::Foundation::Size> size, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall GetIsEmpty(abi_t<Windows::Foundation::Rect> target, bool* value) = 0;
    virtual HRESULT __stdcall GetBottom(abi_t<Windows::Foundation::Rect> target, float* value) = 0;
    virtual HRESULT __stdcall GetLeft(abi_t<Windows::Foundation::Rect> target, float* value) = 0;
    virtual HRESULT __stdcall GetRight(abi_t<Windows::Foundation::Rect> target, float* value) = 0;
    virtual HRESULT __stdcall GetTop(abi_t<Windows::Foundation::Rect> target, float* value) = 0;
    virtual HRESULT __stdcall Contains(abi_t<Windows::Foundation::Rect> target, abi_t<Windows::Foundation::Point> point, bool* returnValue) = 0;
    virtual HRESULT __stdcall Equals(abi_t<Windows::Foundation::Rect> target, abi_t<Windows::Foundation::Rect> value, bool* returnValue) = 0;
    virtual HRESULT __stdcall Intersect(abi_t<Windows::Foundation::Rect> target, abi_t<Windows::Foundation::Rect> rect, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall UnionWithPoint(abi_t<Windows::Foundation::Rect> target, abi_t<Windows::Foundation::Point> point, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall UnionWithRect(abi_t<Windows::Foundation::Rect> target, abi_t<Windows::Foundation::Rect> rect, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IResourceDictionary>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MergedDictionaries(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ThemeDictionaries(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IResourceDictionaryFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IRoutedEvent>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IRoutedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OriginalSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IRoutedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISetter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Property(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISetter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Target(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Target(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISetterBase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISetterBaseCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISetterBaseFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ISetterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* targetProperty, ::IUnknown* value, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISizeChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PreviousSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_NewSize(abi_t<Windows::Foundation::Size>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ISizeHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ISizeHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Empty(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall FromDimensions(float width, float height, abi_t<Windows::Foundation::Size>* returnValue) = 0;
    virtual HRESULT __stdcall GetIsEmpty(abi_t<Windows::Foundation::Size> target, bool* value) = 0;
    virtual HRESULT __stdcall Equals(abi_t<Windows::Foundation::Size> target, abi_t<Windows::Foundation::Size> value, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStateTrigger>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall put_IsActive(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStateTriggerBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IStateTriggerBaseFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStateTriggerBaseProtected>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetActive(bool IsActive) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStateTriggerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActiveProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStyle>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool* value) = 0;
    virtual HRESULT __stdcall get_Setters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TargetType(abi_t<Windows::UI::Xaml::Interop::TypeName>* value) = 0;
    virtual HRESULT __stdcall put_TargetType(abi_t<Windows::UI::Xaml::Interop::TypeName> value) = 0;
    virtual HRESULT __stdcall get_BasedOn(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BasedOn(::IUnknown* value) = 0;
    virtual HRESULT __stdcall Seal() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IStyleFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Interop::TypeName> targetType, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ITargetPropertyPath>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Path(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Path(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Target(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Target(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ITargetPropertyPathFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* targetProperty, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IThicknessHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IThicknessHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromLengths(double left, double top, double right, double bottom, abi_t<Windows::UI::Xaml::Thickness>* returnValue) = 0;
    virtual HRESULT __stdcall FromUniformLength(double uniformLength, abi_t<Windows::UI::Xaml::Thickness>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ITriggerAction>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ITriggerActionFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ITriggerBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::ITriggerBaseFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IUIElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DesiredSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_AllowDrop(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowDrop(bool value) = 0;
    virtual HRESULT __stdcall get_Opacity(double* value) = 0;
    virtual HRESULT __stdcall put_Opacity(double value) = 0;
    virtual HRESULT __stdcall get_Clip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Clip(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RenderTransform(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RenderTransform(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Projection(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Projection(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RenderTransformOrigin(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_RenderTransformOrigin(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_IsHitTestVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsHitTestVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Visibility(abi_t<Windows::UI::Xaml::Visibility>* value) = 0;
    virtual HRESULT __stdcall put_Visibility(abi_t<Windows::UI::Xaml::Visibility> value) = 0;
    virtual HRESULT __stdcall get_RenderSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_UseLayoutRounding(bool* value) = 0;
    virtual HRESULT __stdcall put_UseLayoutRounding(bool value) = 0;
    virtual HRESULT __stdcall get_Transitions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Transitions(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CacheMode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CacheMode(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IsTapEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDoubleTapEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsDoubleTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRightTapEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsRightTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsHoldingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsHoldingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ManipulationMode(abi_t<Windows::UI::Xaml::Input::ManipulationModes>* value) = 0;
    virtual HRESULT __stdcall put_ManipulationMode(abi_t<Windows::UI::Xaml::Input::ManipulationModes> value) = 0;
    virtual HRESULT __stdcall get_PointerCaptures(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_KeyUp(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_KeyUp(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_KeyDown(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_KeyDown(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_GotFocus(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GotFocus(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_LostFocus(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LostFocus(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DragEnter(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DragEnter(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DragLeave(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DragLeave(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DragOver(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DragOver(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Drop(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Drop(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerPressed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerMoved(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerMoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerReleased(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerReleased(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerEntered(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerEntered(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerExited(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerExited(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerCaptureLost(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerCaptureLost(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerCanceled(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerCanceled(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PointerWheelChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PointerWheelChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Tapped(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Tapped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DoubleTapped(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DoubleTapped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Holding(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Holding(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RightTapped(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RightTapped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ManipulationStarting(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarting(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ManipulationInertiaStarting(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ManipulationInertiaStarting(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ManipulationStarted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ManipulationDelta(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ManipulationDelta(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ManipulationCompleted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ManipulationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Measure(abi_t<Windows::Foundation::Size> availableSize) = 0;
    virtual HRESULT __stdcall Arrange(abi_t<Windows::Foundation::Rect> finalRect) = 0;
    virtual HRESULT __stdcall CapturePointer(::IUnknown* value, bool* returnValue) = 0;
    virtual HRESULT __stdcall ReleasePointerCapture(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ReleasePointerCaptures() = 0;
    virtual HRESULT __stdcall AddHandler(::IUnknown* routedEvent, ::IUnknown* handler, bool handledEventsToo) = 0;
    virtual HRESULT __stdcall RemoveHandler(::IUnknown* routedEvent, ::IUnknown* handler) = 0;
    virtual HRESULT __stdcall TransformToVisual(::IUnknown* visual, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall InvalidateMeasure() = 0;
    virtual HRESULT __stdcall InvalidateArrange() = 0;
    virtual HRESULT __stdcall UpdateLayout() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElement2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompositeMode(abi_t<Windows::UI::Xaml::Media::ElementCompositeMode>* value) = 0;
    virtual HRESULT __stdcall put_CompositeMode(abi_t<Windows::UI::Xaml::Media::ElementCompositeMode> value) = 0;
    virtual HRESULT __stdcall CancelDirectManipulations(bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElement3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Transform3D(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Transform3D(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CanDrag(bool* value) = 0;
    virtual HRESULT __stdcall put_CanDrag(bool value) = 0;
    virtual HRESULT __stdcall add_DragStarting(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DragStarting(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DropCompleted(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DropCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall StartDragAsync(::IUnknown* pointerPoint, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElement4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContextFlyout(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContextFlyout(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool* value) = 0;
    virtual HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScope(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAccessKeyScope(bool value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwner(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AccessKeyScopeOwner(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AccessKey(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AccessKey(HSTRING value) = 0;
    virtual HRESULT __stdcall add_ContextRequested(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ContextRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ContextCanceled(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ContextCanceled(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayRequested(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayDismissed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayDismissed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AccessKeyInvoked(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyInvoked(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElement5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Lights(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipPlacementMode(abi_t<Windows::UI::Xaml::Input::KeyTipPlacementMode>* value) = 0;
    virtual HRESULT __stdcall put_KeyTipPlacementMode(abi_t<Windows::UI::Xaml::Input::KeyTipPlacementMode> value) = 0;
    virtual HRESULT __stdcall get_KeyTipHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_KeyTipHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_KeyTipVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_KeyTipVerticalOffset(double value) = 0;
    virtual HRESULT __stdcall get_XYFocusKeyboardNavigation(abi_t<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusKeyboardNavigation(abi_t<Windows::UI::Xaml::Input::XYFocusKeyboardNavigationMode> value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusUpNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusDownNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) = 0;
    virtual HRESULT __stdcall get_XYFocusLeftNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusLeftNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) = 0;
    virtual HRESULT __stdcall put_XYFocusRightNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) = 0;
    virtual HRESULT __stdcall get_HighContrastAdjustment(abi_t<Windows::UI::Xaml::ElementHighContrastAdjustment>* value) = 0;
    virtual HRESULT __stdcall put_HighContrastAdjustment(abi_t<Windows::UI::Xaml::ElementHighContrastAdjustment> value) = 0;
    virtual HRESULT __stdcall get_TabFocusNavigation(abi_t<Windows::UI::Xaml::Input::KeyboardNavigationMode>* value) = 0;
    virtual HRESULT __stdcall put_TabFocusNavigation(abi_t<Windows::UI::Xaml::Input::KeyboardNavigationMode> value) = 0;
    virtual HRESULT __stdcall add_GettingFocus(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GettingFocus(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_LosingFocus(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LosingFocus(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NoFocusCandidateFound(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NoFocusCandidateFound(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall StartBringIntoView() = 0;
    virtual HRESULT __stdcall StartBringIntoViewWithOptions(::IUnknown* options) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IUIElementOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnCreateAutomationPeer(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall OnDisconnectVisualChildren() = 0;
    virtual HRESULT __stdcall FindSubElementsForTouchTargeting(abi_t<Windows::Foundation::Point> point, abi_t<Windows::Foundation::Rect> boundingRect, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyDownEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyUpEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerEnteredEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerPressedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerMovedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerReleasedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerExitedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerCaptureLostEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerCanceledEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerWheelChangedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TappedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DoubleTappedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HoldingEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RightTappedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationStartingEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationInertiaStartingEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationStartedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationDeltaEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationCompletedEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DragEnterEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DragLeaveEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DragOverEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DropEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowDropProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpacityProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClipProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RenderTransformProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProjectionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RenderTransformOriginProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsHitTestVisibleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VisibilityProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UseLayoutRoundingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TransitionsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CacheModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsTapEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsDoubleTapEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsRightTapEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsHoldingEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManipulationModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointerCapturesProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompositeModeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Transform3DProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanDragProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryStartDirectManipulation(::IUnknown* value, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContextFlyoutProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScopeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwnerProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LightsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipPlacementModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipVerticalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusKeyboardNavigationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusLeftNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HighContrastAdjustmentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TabFocusNavigationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUIElementStatics6>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GettingFocusEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LosingFocusEvent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NoFocusCandidateFoundEvent(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IUnhandledExceptionEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exception(abi_t<HRESULT>* value) = 0;
    virtual HRESULT __stdcall get_Message(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualState>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Storyboard(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualState2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Setters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StateTriggers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldState(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OldState(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NewState(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NewState(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Control(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Control(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Transitions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_States(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CurrentState(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_CurrentStateChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CurrentStateChanging(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CurrentStateChanging(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateManager>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateManagerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateManagerOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GoToStateCore(::IUnknown* control, ::IUnknown* templateRoot, HSTRING stateName, ::IUnknown* group, ::IUnknown* state, bool useTransitions, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateManagerProtected>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RaiseCurrentStateChanging(::IUnknown* stateGroup, ::IUnknown* oldState, ::IUnknown* newState, ::IUnknown* control) = 0;
    virtual HRESULT __stdcall RaiseCurrentStateChanged(::IUnknown* stateGroup, ::IUnknown* oldState, ::IUnknown* newState, ::IUnknown* control) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualStateManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetVisualStateGroups(::IUnknown* obj, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomVisualStateManagerProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCustomVisualStateManager(::IUnknown* obj, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetCustomVisualStateManager(::IUnknown* obj, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall GoToState(::IUnknown* control, HSTRING stateName, bool useTransitions, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GeneratedDuration(abi_t<Windows::UI::Xaml::Duration>* value) = 0;
    virtual HRESULT __stdcall put_GeneratedDuration(abi_t<Windows::UI::Xaml::Duration> value) = 0;
    virtual HRESULT __stdcall get_GeneratedEasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_GeneratedEasingFunction(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_To(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_To(HSTRING value) = 0;
    virtual HRESULT __stdcall get_From(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_From(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Storyboard(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IVisualTransitionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IWindow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Content(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CoreWindow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Activated(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Activated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Closed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Closed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SizeChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VisibilityChanged(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Activate() = 0;
    virtual HRESULT __stdcall Close() = 0;
};};

template <> struct abi<Windows::UI::Xaml::IWindow2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetTitleBar(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IWindow3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Compositor(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IWindowCreatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Window(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::IWindowStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ApplicationInitializationCallback>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* p) = 0;
};};

template <> struct abi<Windows::UI::Xaml::BindingFailedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::CreateDefaultValueCallback>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::DependencyPropertyChangedCallback>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* dp) = 0;
};};

template <> struct abi<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::DragEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::EnteredBackgroundEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::ExceptionRoutedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::LeavingBackgroundEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::PropertyChangedCallback>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* d, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::RoutedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::SizeChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::SuspendingEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::UnhandledExceptionEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::VisualStateChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::WindowActivatedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::WindowClosedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::WindowSizeChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

template <> struct abi<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
