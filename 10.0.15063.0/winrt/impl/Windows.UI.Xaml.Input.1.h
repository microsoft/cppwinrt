// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Input.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.UI.Input.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Input.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

struct WINRT_EBO IAccessKeyDisplayDismissedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyDisplayDismissedEventArgs>
{
    IAccessKeyDisplayDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessKeyDisplayRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyDisplayRequestedEventArgs>
{
    IAccessKeyDisplayRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessKeyInvokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyInvokedEventArgs>
{
    IAccessKeyInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessKeyManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManager>
{
    IAccessKeyManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessKeyManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManagerStatics>
{
    IAccessKeyManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessKeyManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessKeyManagerStatics2>
{
    IAccessKeyManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommand>
{
    ICommand(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContextRequestedEventArgs>
{
    IContextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDoubleTappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDoubleTappedRoutedEventArgs>
{
    IDoubleTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFindNextElementOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFindNextElementOptions>
{
    IFindNextElementOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManager>
{
    IFocusManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics>
{
    IFocusManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics2>
{
    IFocusManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics3>
{
    IFocusManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusManagerStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusManagerStatics4>
{
    IFocusManagerStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGettingFocusEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGettingFocusEventArgs>
{
    IGettingFocusEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHoldingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHoldingRoutedEventArgs>
{
    IHoldingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInertiaExpansionBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaExpansionBehavior>
{
    IInertiaExpansionBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInertiaRotationBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaRotationBehavior>
{
    IInertiaRotationBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInertiaTranslationBehavior :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInertiaTranslationBehavior>
{
    IInertiaTranslationBehavior(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputScope :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScope>
{
    IInputScope(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputScopeName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScopeName>
{
    IInputScopeName(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputScopeNameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputScopeNameFactory>
{
    IInputScopeNameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs>
{
    IKeyRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyRoutedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs2>
{
    IKeyRoutedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyRoutedEventArgs3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyRoutedEventArgs3>
{
    IKeyRoutedEventArgs3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILosingFocusEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILosingFocusEventArgs>
{
    ILosingFocusEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationCompletedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationCompletedRoutedEventArgs>
{
    IManipulationCompletedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationDeltaRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationDeltaRoutedEventArgs>
{
    IManipulationDeltaRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationInertiaStartingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationInertiaStartingRoutedEventArgs>
{
    IManipulationInertiaStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationPivot :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationPivot>
{
    IManipulationPivot(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationPivotFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationPivotFactory>
{
    IManipulationPivotFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationStartedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedRoutedEventArgs>
{
    IManipulationStartedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationStartedRoutedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartedRoutedEventArgsFactory>
{
    IManipulationStartedRoutedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IManipulationStartingRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IManipulationStartingRoutedEventArgs>
{
    IManipulationStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INoFocusCandidateFoundEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INoFocusCandidateFoundEventArgs>
{
    INoFocusCandidateFoundEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointer>
{
    IPointer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointerRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointerRoutedEventArgs>
{
    IPointerRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRightTappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRightTappedRoutedEventArgs>
{
    IRightTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITappedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITappedRoutedEventArgs>
{
    ITappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
