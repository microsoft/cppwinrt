// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Data.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct ApplicationInitializationCallback : Windows::Foundation::IUnknown
{
    ApplicationInitializationCallback(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ApplicationInitializationCallback(L lambda);
    template <typename F> ApplicationInitializationCallback(F* function);
    template <typename O, typename M> ApplicationInitializationCallback(O* object, M method);
    void operator()(Windows::UI::Xaml::ApplicationInitializationCallbackParams const& p) const;
};

struct BindingFailedEventHandler : Windows::Foundation::IUnknown
{
    BindingFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> BindingFailedEventHandler(L lambda);
    template <typename F> BindingFailedEventHandler(F* function);
    template <typename O, typename M> BindingFailedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::BindingFailedEventArgs const& e) const;
};

struct CreateDefaultValueCallback : Windows::Foundation::IUnknown
{
    CreateDefaultValueCallback(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CreateDefaultValueCallback(L lambda);
    template <typename F> CreateDefaultValueCallback(F* function);
    template <typename O, typename M> CreateDefaultValueCallback(O* object, M method);
    Windows::Foundation::IInspectable operator()() const;
};

struct DependencyPropertyChangedCallback : Windows::Foundation::IUnknown
{
    DependencyPropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DependencyPropertyChangedCallback(L lambda);
    template <typename F> DependencyPropertyChangedCallback(F* function);
    template <typename O, typename M> DependencyPropertyChangedCallback(O* object, M method);
    void operator()(Windows::UI::Xaml::DependencyObject const& sender, Windows::UI::Xaml::DependencyProperty const& dp) const;
};

struct DependencyPropertyChangedEventHandler : Windows::Foundation::IUnknown
{
    DependencyPropertyChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DependencyPropertyChangedEventHandler(L lambda);
    template <typename F> DependencyPropertyChangedEventHandler(F* function);
    template <typename O, typename M> DependencyPropertyChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
};

struct DragEventHandler : Windows::Foundation::IUnknown
{
    DragEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DragEventHandler(L lambda);
    template <typename F> DragEventHandler(F* function);
    template <typename O, typename M> DragEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::DragEventArgs const& e) const;
};

struct EnteredBackgroundEventHandler : Windows::Foundation::IUnknown
{
    EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> EnteredBackgroundEventHandler(L lambda);
    template <typename F> EnteredBackgroundEventHandler(F* function);
    template <typename O, typename M> EnteredBackgroundEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::EnteredBackgroundEventArgs const& e) const;
};

struct ExceptionRoutedEventHandler : Windows::Foundation::IUnknown
{
    ExceptionRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ExceptionRoutedEventHandler(L lambda);
    template <typename F> ExceptionRoutedEventHandler(F* function);
    template <typename O, typename M> ExceptionRoutedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::ExceptionRoutedEventArgs const& e) const;
};

struct LeavingBackgroundEventHandler : Windows::Foundation::IUnknown
{
    LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> LeavingBackgroundEventHandler(L lambda);
    template <typename F> LeavingBackgroundEventHandler(F* function);
    template <typename O, typename M> LeavingBackgroundEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::LeavingBackgroundEventArgs const& e) const;
};

struct PropertyChangedCallback : Windows::Foundation::IUnknown
{
    PropertyChangedCallback(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PropertyChangedCallback(L lambda);
    template <typename F> PropertyChangedCallback(F* function);
    template <typename O, typename M> PropertyChangedCallback(O* object, M method);
    void operator()(Windows::UI::Xaml::DependencyObject const& d, Windows::UI::Xaml::DependencyPropertyChangedEventArgs const& e) const;
};

struct RoutedEventHandler : Windows::Foundation::IUnknown
{
    RoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RoutedEventHandler(L lambda);
    template <typename F> RoutedEventHandler(F* function);
    template <typename O, typename M> RoutedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e) const;
};

struct SizeChangedEventHandler : Windows::Foundation::IUnknown
{
    SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SizeChangedEventHandler(L lambda);
    template <typename F> SizeChangedEventHandler(F* function);
    template <typename O, typename M> SizeChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::SizeChangedEventArgs const& e) const;
};

struct SuspendingEventHandler : Windows::Foundation::IUnknown
{
    SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SuspendingEventHandler(L lambda);
    template <typename F> SuspendingEventHandler(F* function);
    template <typename O, typename M> SuspendingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::SuspendingEventArgs const& e) const;
};

struct UnhandledExceptionEventHandler : Windows::Foundation::IUnknown
{
    UnhandledExceptionEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> UnhandledExceptionEventHandler(L lambda);
    template <typename F> UnhandledExceptionEventHandler(F* function);
    template <typename O, typename M> UnhandledExceptionEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::UnhandledExceptionEventArgs const& e) const;
};

struct VisualStateChangedEventHandler : Windows::Foundation::IUnknown
{
    VisualStateChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> VisualStateChangedEventHandler(L lambda);
    template <typename F> VisualStateChangedEventHandler(F* function);
    template <typename O, typename M> VisualStateChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::VisualStateChangedEventArgs const& e) const;
};

struct WindowActivatedEventHandler : Windows::Foundation::IUnknown
{
    WindowActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WindowActivatedEventHandler(L lambda);
    template <typename F> WindowActivatedEventHandler(F* function);
    template <typename O, typename M> WindowActivatedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowActivatedEventArgs const& e) const;
};

struct WindowClosedEventHandler : Windows::Foundation::IUnknown
{
    WindowClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WindowClosedEventHandler(L lambda);
    template <typename F> WindowClosedEventHandler(F* function);
    template <typename O, typename M> WindowClosedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::CoreWindowEventArgs const& e) const;
};

struct WindowSizeChangedEventHandler : Windows::Foundation::IUnknown
{
    WindowSizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WindowSizeChangedEventHandler(L lambda);
    template <typename F> WindowSizeChangedEventHandler(F* function);
    template <typename O, typename M> WindowSizeChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::WindowSizeChangedEventArgs const& e) const;
};

struct WindowVisibilityChangedEventHandler : Windows::Foundation::IUnknown
{
    WindowVisibilityChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WindowVisibilityChangedEventHandler(L lambda);
    template <typename F> WindowVisibilityChangedEventHandler(F* function);
    template <typename O, typename M> WindowVisibilityChangedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Core::VisibilityChangedEventArgs const& e) const;
};

struct CornerRadius
{
    double TopLeft;
    double TopRight;
    double BottomRight;
    double BottomLeft;
};

struct Duration
{
    Windows::Foundation::TimeSpan TimeSpan;
    Windows::UI::Xaml::DurationType Type;
};

struct GridLength
{
    double Value;
    Windows::UI::Xaml::GridUnitType GridUnitType;
};

struct Thickness
{
    double Left;
    double Top;
    double Right;
    double Bottom;
};

struct WINRT_EBO AdaptiveTrigger :
    Windows::UI::Xaml::IAdaptiveTrigger,
    impl::base<AdaptiveTrigger, Windows::UI::Xaml::StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<AdaptiveTrigger, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    AdaptiveTrigger(std::nullptr_t) noexcept {}
    AdaptiveTrigger();
    static Windows::UI::Xaml::DependencyProperty MinWindowWidthProperty();
    static Windows::UI::Xaml::DependencyProperty MinWindowHeightProperty();
};

struct WINRT_EBO Application :
    Windows::UI::Xaml::IApplication,
    impl::require<Application, Windows::UI::Xaml::IApplication2, Windows::UI::Xaml::IApplication3, Windows::UI::Xaml::IApplicationOverrides, Windows::UI::Xaml::IApplicationOverrides2>
{
    Application(std::nullptr_t) noexcept {}
    Application();
    static Windows::UI::Xaml::Application Current();
    static void Start(Windows::UI::Xaml::ApplicationInitializationCallback const& callback);
    static void LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator);
    static void LoadComponent(Windows::Foundation::IInspectable const& component, Windows::Foundation::Uri const& resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation const& componentResourceLocation);
};

struct WINRT_EBO ApplicationInitializationCallbackParams :
    Windows::UI::Xaml::IApplicationInitializationCallbackParams
{
    ApplicationInitializationCallbackParams(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BindingFailedEventArgs :
    Windows::UI::Xaml::IBindingFailedEventArgs
{
    BindingFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BringIntoViewOptions :
    Windows::UI::Xaml::IBringIntoViewOptions
{
    BringIntoViewOptions(std::nullptr_t) noexcept {}
    BringIntoViewOptions();
};

struct WINRT_EBO CornerRadiusHelper :
    Windows::UI::Xaml::ICornerRadiusHelper
{
    CornerRadiusHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::CornerRadius FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft);
    static Windows::UI::Xaml::CornerRadius FromUniformRadius(double uniformRadius);
};

struct WINRT_EBO DataContextChangedEventArgs :
    Windows::UI::Xaml::IDataContextChangedEventArgs
{
    DataContextChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DataTemplate :
    Windows::UI::Xaml::IDataTemplate,
    impl::base<DataTemplate, Windows::UI::Xaml::FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
    impl::require<DataTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkTemplate>
{
    DataTemplate(std::nullptr_t) noexcept {}
    DataTemplate();
    static Windows::UI::Xaml::DependencyProperty ExtensionInstanceProperty();
    static Windows::UI::Xaml::IDataTemplateExtension GetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element);
    static void SetExtensionInstance(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::IDataTemplateExtension const& value);
};

struct WINRT_EBO DataTemplateKey :
    Windows::UI::Xaml::IDataTemplateKey
{
    DataTemplateKey(std::nullptr_t) noexcept {}
    DataTemplateKey();
    DataTemplateKey(Windows::Foundation::IInspectable const& dataType);
};

struct WINRT_EBO DebugSettings :
    Windows::UI::Xaml::IDebugSettings,
    impl::require<DebugSettings, Windows::UI::Xaml::IDebugSettings2, Windows::UI::Xaml::IDebugSettings3>
{
    DebugSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DependencyObject :
    Windows::UI::Xaml::IDependencyObject,
    impl::require<DependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    DependencyObject(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DependencyObjectCollection :
    Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>,
    impl::base<DependencyObjectCollection, Windows::UI::Xaml::DependencyObject>,
    impl::require<DependencyObjectCollection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    DependencyObjectCollection(std::nullptr_t) noexcept {}
    DependencyObjectCollection();
};

struct WINRT_EBO DependencyProperty :
    Windows::UI::Xaml::IDependencyProperty
{
    DependencyProperty(std::nullptr_t) noexcept {}
    static Windows::Foundation::IInspectable UnsetValue();
    static Windows::UI::Xaml::DependencyProperty Register(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& typeMetadata);
    static Windows::UI::Xaml::DependencyProperty RegisterAttached(param::hstring const& name, Windows::UI::Xaml::Interop::TypeName const& propertyType, Windows::UI::Xaml::Interop::TypeName const& ownerType, Windows::UI::Xaml::PropertyMetadata const& defaultMetadata);
};

struct WINRT_EBO DependencyPropertyChangedEventArgs :
    Windows::UI::Xaml::IDependencyPropertyChangedEventArgs
{
    DependencyPropertyChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DispatcherTimer :
    Windows::UI::Xaml::IDispatcherTimer
{
    DispatcherTimer(std::nullptr_t) noexcept {}
    DispatcherTimer();
};

struct WINRT_EBO DragEventArgs :
    Windows::UI::Xaml::IDragEventArgs,
    impl::base<DragEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DragEventArgs, Windows::UI::Xaml::IDragEventArgs2, Windows::UI::Xaml::IDragEventArgs3, Windows::UI::Xaml::IRoutedEventArgs>
{
    DragEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragOperationDeferral :
    Windows::UI::Xaml::IDragOperationDeferral
{
    DragOperationDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragStartingEventArgs :
    Windows::UI::Xaml::IDragStartingEventArgs,
    impl::base<DragStartingEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DragStartingEventArgs, Windows::UI::Xaml::IDragStartingEventArgs2, Windows::UI::Xaml::IRoutedEventArgs>
{
    DragStartingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragUI :
    Windows::UI::Xaml::IDragUI
{
    DragUI(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DragUIOverride :
    Windows::UI::Xaml::IDragUIOverride
{
    DragUIOverride(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DropCompletedEventArgs :
    Windows::UI::Xaml::IDropCompletedEventArgs,
    impl::base<DropCompletedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<DropCompletedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    DropCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DurationHelper :
    Windows::UI::Xaml::IDurationHelper
{
    DurationHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Duration Automatic();
    static Windows::UI::Xaml::Duration Forever();
    static int32_t Compare(Windows::UI::Xaml::Duration const& duration1, Windows::UI::Xaml::Duration const& duration2);
    static Windows::UI::Xaml::Duration FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan);
    static bool GetHasTimeSpan(Windows::UI::Xaml::Duration const& target);
    static Windows::UI::Xaml::Duration Add(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration);
    static bool Equals(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& value);
    static Windows::UI::Xaml::Duration Subtract(Windows::UI::Xaml::Duration const& target, Windows::UI::Xaml::Duration const& duration);
};

struct WINRT_EBO ElementSoundPlayer :
    Windows::UI::Xaml::IElementSoundPlayer
{
    ElementSoundPlayer(std::nullptr_t) noexcept {}
    static double Volume();
    static void Volume(double value);
    static Windows::UI::Xaml::ElementSoundPlayerState State();
    static void State(Windows::UI::Xaml::ElementSoundPlayerState const& value);
    static void Play(Windows::UI::Xaml::ElementSoundKind const& sound);
};

struct WINRT_EBO EventTrigger :
    Windows::UI::Xaml::IEventTrigger,
    impl::base<EventTrigger, Windows::UI::Xaml::TriggerBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<EventTrigger, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::ITriggerBase>
{
    EventTrigger(std::nullptr_t) noexcept {}
    EventTrigger();
};

struct WINRT_EBO ExceptionRoutedEventArgs :
    Windows::UI::Xaml::IExceptionRoutedEventArgs,
    impl::base<ExceptionRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<ExceptionRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    ExceptionRoutedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameworkElement :
    Windows::UI::Xaml::IFrameworkElement,
    impl::base<FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<FrameworkElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    FrameworkElement(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty TagProperty();
    static Windows::UI::Xaml::DependencyProperty LanguageProperty();
    static Windows::UI::Xaml::DependencyProperty ActualWidthProperty();
    static Windows::UI::Xaml::DependencyProperty ActualHeightProperty();
    static Windows::UI::Xaml::DependencyProperty WidthProperty();
    static Windows::UI::Xaml::DependencyProperty HeightProperty();
    static Windows::UI::Xaml::DependencyProperty MinWidthProperty();
    static Windows::UI::Xaml::DependencyProperty MaxWidthProperty();
    static Windows::UI::Xaml::DependencyProperty MinHeightProperty();
    static Windows::UI::Xaml::DependencyProperty MaxHeightProperty();
    static Windows::UI::Xaml::DependencyProperty HorizontalAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty VerticalAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty MarginProperty();
    static Windows::UI::Xaml::DependencyProperty NameProperty();
    static Windows::UI::Xaml::DependencyProperty DataContextProperty();
    static Windows::UI::Xaml::DependencyProperty StyleProperty();
    static Windows::UI::Xaml::DependencyProperty FlowDirectionProperty();
    static Windows::UI::Xaml::DependencyProperty RequestedThemeProperty();
    static Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty();
    static Windows::UI::Xaml::DependencyProperty FocusVisualMarginProperty();
    static Windows::UI::Xaml::DependencyProperty FocusVisualSecondaryThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty FocusVisualPrimaryThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty FocusVisualSecondaryBrushProperty();
    static Windows::UI::Xaml::DependencyProperty FocusVisualPrimaryBrushProperty();
    static Windows::UI::Xaml::DependencyProperty AllowFocusWhenDisabledProperty();
    static void DeferTree(Windows::UI::Xaml::DependencyObject const& element);
};

struct WINRT_EBO FrameworkTemplate :
    Windows::UI::Xaml::IFrameworkTemplate,
    impl::base<FrameworkTemplate, Windows::UI::Xaml::DependencyObject>,
    impl::require<FrameworkTemplate, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    FrameworkTemplate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FrameworkView :
    Windows::UI::Xaml::IFrameworkView,
    impl::require<FrameworkView, Windows::ApplicationModel::Core::IFrameworkView>
{
    FrameworkView(std::nullptr_t) noexcept {}
    FrameworkView();
};

struct WINRT_EBO FrameworkViewSource :
    Windows::UI::Xaml::IFrameworkViewSource,
    impl::require<FrameworkViewSource, Windows::ApplicationModel::Core::IFrameworkViewSource>
{
    FrameworkViewSource(std::nullptr_t) noexcept {}
    FrameworkViewSource();
};

struct WINRT_EBO GridLengthHelper :
    Windows::UI::Xaml::IGridLengthHelper
{
    GridLengthHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::GridLength Auto();
    static Windows::UI::Xaml::GridLength FromPixels(double pixels);
    static Windows::UI::Xaml::GridLength FromValueAndType(double value, Windows::UI::Xaml::GridUnitType const& type);
    static bool GetIsAbsolute(Windows::UI::Xaml::GridLength const& target);
    static bool GetIsAuto(Windows::UI::Xaml::GridLength const& target);
    static bool GetIsStar(Windows::UI::Xaml::GridLength const& target);
    static bool Equals(Windows::UI::Xaml::GridLength const& target, Windows::UI::Xaml::GridLength const& value);
};

struct WINRT_EBO MediaFailedRoutedEventArgs :
    Windows::UI::Xaml::IMediaFailedRoutedEventArgs,
    impl::base<MediaFailedRoutedEventArgs, Windows::UI::Xaml::ExceptionRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<MediaFailedRoutedEventArgs, Windows::UI::Xaml::IExceptionRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    MediaFailedRoutedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PointHelper :
    Windows::UI::Xaml::IPointHelper
{
    PointHelper(std::nullptr_t) noexcept {}
    static Windows::Foundation::Point FromCoordinates(float x, float y);
};

struct WINRT_EBO PropertyMetadata :
    Windows::UI::Xaml::IPropertyMetadata
{
    PropertyMetadata(std::nullptr_t) noexcept {}
    PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue);
    PropertyMetadata(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
    static Windows::UI::Xaml::PropertyMetadata Create(Windows::Foundation::IInspectable const& defaultValue);
    static Windows::UI::Xaml::PropertyMetadata Create(Windows::Foundation::IInspectable const& defaultValue, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
    static Windows::UI::Xaml::PropertyMetadata Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback);
    static Windows::UI::Xaml::PropertyMetadata Create(Windows::UI::Xaml::CreateDefaultValueCallback const& createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback const& propertyChangedCallback);
};

struct WINRT_EBO PropertyPath :
    Windows::UI::Xaml::IPropertyPath,
    impl::base<PropertyPath, Windows::UI::Xaml::DependencyObject>,
    impl::require<PropertyPath, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PropertyPath(std::nullptr_t) noexcept {}
    PropertyPath(param::hstring const& path);
};

struct WINRT_EBO RectHelper :
    Windows::UI::Xaml::IRectHelper
{
    RectHelper(std::nullptr_t) noexcept {}
    static Windows::Foundation::Rect Empty();
    static Windows::Foundation::Rect FromCoordinatesAndDimensions(float x, float y, float width, float height);
    static Windows::Foundation::Rect FromPoints(Windows::Foundation::Point const& point1, Windows::Foundation::Point const& point2);
    static Windows::Foundation::Rect FromLocationAndSize(Windows::Foundation::Point const& location, Windows::Foundation::Size const& size);
    static bool GetIsEmpty(Windows::Foundation::Rect const& target);
    static float GetBottom(Windows::Foundation::Rect const& target);
    static float GetLeft(Windows::Foundation::Rect const& target);
    static float GetRight(Windows::Foundation::Rect const& target);
    static float GetTop(Windows::Foundation::Rect const& target);
    static bool Contains(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point);
    static bool Equals(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& value);
    static Windows::Foundation::Rect Intersect(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect);
    static Windows::Foundation::Rect Union(Windows::Foundation::Rect const& target, Windows::Foundation::Point const& point);
    static Windows::Foundation::Rect Union(Windows::Foundation::Rect const& target, Windows::Foundation::Rect const& rect);
};

struct WINRT_EBO ResourceDictionary :
    Windows::UI::Xaml::IResourceDictionary,
    impl::base<ResourceDictionary, Windows::UI::Xaml::DependencyObject>,
    impl::require<ResourceDictionary, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<Windows::Foundation::IInspectable, Windows::Foundation::IInspectable>, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ResourceDictionary(std::nullptr_t) noexcept {}
    ResourceDictionary();
};

struct WINRT_EBO RoutedEvent :
    Windows::UI::Xaml::IRoutedEvent
{
    RoutedEvent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RoutedEventArgs :
    Windows::UI::Xaml::IRoutedEventArgs
{
    RoutedEventArgs(std::nullptr_t) noexcept {}
    RoutedEventArgs();
};

struct WINRT_EBO Setter :
    Windows::UI::Xaml::ISetter,
    impl::base<Setter, Windows::UI::Xaml::SetterBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<Setter, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::ISetter2, Windows::UI::Xaml::ISetterBase>
{
    Setter(std::nullptr_t) noexcept {}
    Setter();
    Setter(Windows::UI::Xaml::DependencyProperty const& targetProperty, Windows::Foundation::IInspectable const& value);
};

struct WINRT_EBO SetterBase :
    Windows::UI::Xaml::ISetterBase,
    impl::base<SetterBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<SetterBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    SetterBase(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SetterBaseCollection :
    Windows::UI::Xaml::ISetterBaseCollection
{
    SetterBaseCollection(std::nullptr_t) noexcept {}
    SetterBaseCollection();
};

struct WINRT_EBO SizeChangedEventArgs :
    Windows::UI::Xaml::ISizeChangedEventArgs,
    impl::base<SizeChangedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<SizeChangedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    SizeChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SizeHelper :
    Windows::UI::Xaml::ISizeHelper
{
    SizeHelper(std::nullptr_t) noexcept {}
    static Windows::Foundation::Size Empty();
    static Windows::Foundation::Size FromDimensions(float width, float height);
    static bool GetIsEmpty(Windows::Foundation::Size const& target);
    static bool Equals(Windows::Foundation::Size const& target, Windows::Foundation::Size const& value);
};

struct WINRT_EBO StateTrigger :
    Windows::UI::Xaml::IStateTrigger,
    impl::base<StateTrigger, Windows::UI::Xaml::StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<StateTrigger, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IStateTriggerBase, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    StateTrigger(std::nullptr_t) noexcept {}
    StateTrigger();
    static Windows::UI::Xaml::DependencyProperty IsActiveProperty();
};

struct WINRT_EBO StateTriggerBase :
    Windows::UI::Xaml::IStateTriggerBase,
    impl::base<StateTriggerBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<StateTriggerBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    StateTriggerBase(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Style :
    Windows::UI::Xaml::IStyle,
    impl::base<Style, Windows::UI::Xaml::DependencyObject>,
    impl::require<Style, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Style(std::nullptr_t) noexcept {}
    Style();
    Style(Windows::UI::Xaml::Interop::TypeName const& targetType);
};

struct WINRT_EBO TargetPropertyPath :
    Windows::UI::Xaml::ITargetPropertyPath
{
    TargetPropertyPath(std::nullptr_t) noexcept {}
    TargetPropertyPath();
    TargetPropertyPath(Windows::UI::Xaml::DependencyProperty const& targetProperty);
};

struct WINRT_EBO ThicknessHelper :
    Windows::UI::Xaml::IThicknessHelper
{
    ThicknessHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Thickness FromLengths(double left, double top, double right, double bottom);
    static Windows::UI::Xaml::Thickness FromUniformLength(double uniformLength);
};

struct WINRT_EBO TriggerAction :
    Windows::UI::Xaml::ITriggerAction,
    impl::base<TriggerAction, Windows::UI::Xaml::DependencyObject>,
    impl::require<TriggerAction, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TriggerAction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TriggerActionCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>
{
    TriggerActionCollection(std::nullptr_t) noexcept {}
    TriggerActionCollection();
};

struct WINRT_EBO TriggerBase :
    Windows::UI::Xaml::ITriggerBase,
    impl::base<TriggerBase, Windows::UI::Xaml::DependencyObject>,
    impl::require<TriggerBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TriggerBase(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TriggerCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>
{
    TriggerCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UIElement :
    Windows::UI::Xaml::IUIElement,
    impl::base<UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<UIElement, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    UIElement(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::RoutedEvent KeyDownEvent();
    static Windows::UI::Xaml::RoutedEvent KeyUpEvent();
    static Windows::UI::Xaml::RoutedEvent PointerEnteredEvent();
    static Windows::UI::Xaml::RoutedEvent PointerPressedEvent();
    static Windows::UI::Xaml::RoutedEvent PointerMovedEvent();
    static Windows::UI::Xaml::RoutedEvent PointerReleasedEvent();
    static Windows::UI::Xaml::RoutedEvent PointerExitedEvent();
    static Windows::UI::Xaml::RoutedEvent PointerCaptureLostEvent();
    static Windows::UI::Xaml::RoutedEvent PointerCanceledEvent();
    static Windows::UI::Xaml::RoutedEvent PointerWheelChangedEvent();
    static Windows::UI::Xaml::RoutedEvent TappedEvent();
    static Windows::UI::Xaml::RoutedEvent DoubleTappedEvent();
    static Windows::UI::Xaml::RoutedEvent HoldingEvent();
    static Windows::UI::Xaml::RoutedEvent RightTappedEvent();
    static Windows::UI::Xaml::RoutedEvent ManipulationStartingEvent();
    static Windows::UI::Xaml::RoutedEvent ManipulationInertiaStartingEvent();
    static Windows::UI::Xaml::RoutedEvent ManipulationStartedEvent();
    static Windows::UI::Xaml::RoutedEvent ManipulationDeltaEvent();
    static Windows::UI::Xaml::RoutedEvent ManipulationCompletedEvent();
    static Windows::UI::Xaml::RoutedEvent DragEnterEvent();
    static Windows::UI::Xaml::RoutedEvent DragLeaveEvent();
    static Windows::UI::Xaml::RoutedEvent DragOverEvent();
    static Windows::UI::Xaml::RoutedEvent DropEvent();
    static Windows::UI::Xaml::DependencyProperty AllowDropProperty();
    static Windows::UI::Xaml::DependencyProperty OpacityProperty();
    static Windows::UI::Xaml::DependencyProperty ClipProperty();
    static Windows::UI::Xaml::DependencyProperty RenderTransformProperty();
    static Windows::UI::Xaml::DependencyProperty ProjectionProperty();
    static Windows::UI::Xaml::DependencyProperty RenderTransformOriginProperty();
    static Windows::UI::Xaml::DependencyProperty IsHitTestVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty VisibilityProperty();
    static Windows::UI::Xaml::DependencyProperty UseLayoutRoundingProperty();
    static Windows::UI::Xaml::DependencyProperty TransitionsProperty();
    static Windows::UI::Xaml::DependencyProperty CacheModeProperty();
    static Windows::UI::Xaml::DependencyProperty IsTapEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsDoubleTapEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsRightTapEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsHoldingEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty ManipulationModeProperty();
    static Windows::UI::Xaml::DependencyProperty PointerCapturesProperty();
    static Windows::UI::Xaml::DependencyProperty CompositeModeProperty();
    static Windows::UI::Xaml::DependencyProperty Transform3DProperty();
    static Windows::UI::Xaml::DependencyProperty CanDragProperty();
    static bool TryStartDirectManipulation(Windows::UI::Xaml::Input::Pointer const& value);
    static Windows::UI::Xaml::DependencyProperty ContextFlyoutProperty();
    static Windows::UI::Xaml::DependencyProperty ExitDisplayModeOnAccessKeyInvokedProperty();
    static Windows::UI::Xaml::DependencyProperty IsAccessKeyScopeProperty();
    static Windows::UI::Xaml::DependencyProperty AccessKeyScopeOwnerProperty();
    static Windows::UI::Xaml::DependencyProperty AccessKeyProperty();
    static Windows::UI::Xaml::DependencyProperty LightsProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipPlacementModeProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipHorizontalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipVerticalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusKeyboardNavigationProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusUpNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusDownNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusLeftNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusRightNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty HighContrastAdjustmentProperty();
    static Windows::UI::Xaml::DependencyProperty TabFocusNavigationProperty();
    static Windows::UI::Xaml::RoutedEvent GettingFocusEvent();
    static Windows::UI::Xaml::RoutedEvent LosingFocusEvent();
    static Windows::UI::Xaml::RoutedEvent NoFocusCandidateFoundEvent();
};

struct WINRT_EBO UnhandledExceptionEventArgs :
    Windows::UI::Xaml::IUnhandledExceptionEventArgs
{
    UnhandledExceptionEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VisualState :
    Windows::UI::Xaml::IVisualState,
    impl::base<VisualState, Windows::UI::Xaml::DependencyObject>,
    impl::require<VisualState, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IVisualState2>
{
    VisualState(std::nullptr_t) noexcept {}
    VisualState();
};

struct WINRT_EBO VisualStateChangedEventArgs :
    Windows::UI::Xaml::IVisualStateChangedEventArgs
{
    VisualStateChangedEventArgs(std::nullptr_t) noexcept {}
    VisualStateChangedEventArgs();
};

struct WINRT_EBO VisualStateGroup :
    Windows::UI::Xaml::IVisualStateGroup,
    impl::base<VisualStateGroup, Windows::UI::Xaml::DependencyObject>,
    impl::require<VisualStateGroup, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    VisualStateGroup(std::nullptr_t) noexcept {}
    VisualStateGroup();
};

struct WINRT_EBO VisualStateManager :
    Windows::UI::Xaml::IVisualStateManager,
    impl::base<VisualStateManager, Windows::UI::Xaml::DependencyObject>,
    impl::require<VisualStateManager, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IVisualStateManagerOverrides, Windows::UI::Xaml::IVisualStateManagerProtected>
{
    VisualStateManager(std::nullptr_t) noexcept {}
    VisualStateManager();
    static Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> GetVisualStateGroups(Windows::UI::Xaml::FrameworkElement const& obj);
    static Windows::UI::Xaml::DependencyProperty CustomVisualStateManagerProperty();
    static Windows::UI::Xaml::VisualStateManager GetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj);
    static void SetCustomVisualStateManager(Windows::UI::Xaml::FrameworkElement const& obj, Windows::UI::Xaml::VisualStateManager const& value);
    static bool GoToState(Windows::UI::Xaml::Controls::Control const& control, param::hstring const& stateName, bool useTransitions);
};

struct WINRT_EBO VisualTransition :
    Windows::UI::Xaml::IVisualTransition,
    impl::base<VisualTransition, Windows::UI::Xaml::DependencyObject>,
    impl::require<VisualTransition, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    VisualTransition(std::nullptr_t) noexcept {}
    VisualTransition();
};

struct WINRT_EBO Window :
    Windows::UI::Xaml::IWindow,
    impl::require<Window, Windows::UI::Xaml::IWindow2, Windows::UI::Xaml::IWindow3>
{
    Window(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Window Current();
};

struct WINRT_EBO WindowCreatedEventArgs :
    Windows::UI::Xaml::IWindowCreatedEventArgs
{
    WindowCreatedEventArgs(std::nullptr_t) noexcept {}
};

template <typename D>
class IApplicationOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IApplicationOverrides = winrt::Windows::UI::Xaml::IApplicationOverrides;

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

template <typename D>
class IApplicationOverrides2T
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IApplicationOverrides2 = winrt::Windows::UI::Xaml::IApplicationOverrides2;

    void OnBackgroundActivated(Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs const& args) const;
};

template <typename D>
class IFrameworkElementOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IFrameworkElementOverrides = winrt::Windows::UI::Xaml::IFrameworkElementOverrides;

    Windows::Foundation::Size MeasureOverride(Windows::Foundation::Size const& availableSize) const;
    Windows::Foundation::Size ArrangeOverride(Windows::Foundation::Size const& finalSize) const;
    void OnApplyTemplate() const;
};

template <typename D>
class IFrameworkElementOverrides2T
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IFrameworkElementOverrides2 = winrt::Windows::UI::Xaml::IFrameworkElementOverrides2;

    bool GoToElementStateCore(param::hstring const& stateName, bool useTransitions) const;
};

template <typename D>
class IUIElementOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IUIElementOverrides = winrt::Windows::UI::Xaml::IUIElementOverrides;

    Windows::UI::Xaml::Automation::Peers::AutomationPeer OnCreateAutomationPeer() const;
    void OnDisconnectVisualChildren() const;
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> FindSubElementsForTouchTargeting(Windows::Foundation::Point const& point, Windows::Foundation::Rect const& boundingRect) const;
};

template <typename D>
class IVisualStateManagerOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IVisualStateManagerOverrides = winrt::Windows::UI::Xaml::IVisualStateManagerOverrides;

    bool GoToStateCore(Windows::UI::Xaml::Controls::Control const& control, Windows::UI::Xaml::FrameworkElement const& templateRoot, param::hstring const& stateName, Windows::UI::Xaml::VisualStateGroup const& group, Windows::UI::Xaml::VisualState const& state, bool useTransitions) const;
};

}
