// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Input.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_dfa655cf_fde7_5048_b4bf_c909231b7edb
#define WINRT_GENERIC_dfa655cf_fde7_5048_b4bf_c909231b7edb
template <> struct __declspec(uuid("dfa655cf-fde7-5048-b4bf-c909231b7edb")) __declspec(novtable) IVector<Windows::UI::Input::PointerPoint> : impl_IVector<Windows::UI::Input::PointerPoint> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c7e65ce2_fad5_5e3b_9c58_186ca8c1dd57
#define WINRT_GENERIC_c7e65ce2_fad5_5e3b_9c58_186ca8c1dd57
template <> struct __declspec(uuid("c7e65ce2-fad5-5e3b-9c58-186ca8c1dd57")) __declspec(novtable) TypedEventHandler<Windows::IInspectable, Windows::IInspectable> : impl_TypedEventHandler<Windows::IInspectable, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_703fe123_d766_562f_b210_1980bb2a0d33
#define WINRT_GENERIC_703fe123_d766_562f_b210_1980bb2a0d33
template <> struct __declspec(uuid("703fe123-d766-562f-b210-1980bb2a0d33")) __declspec(novtable) IVector<Windows::UI::Xaml::Input::InputScopeName> : impl_IVector<Windows::UI::Xaml::Input::InputScopeName> {};
#endif

#ifndef WINRT_GENERIC_721fe01c_5ad4_5262_b078_3ab345105db8
#define WINRT_GENERIC_721fe01c_5ad4_5262_b078_3ab345105db8
template <> struct __declspec(uuid("721fe01c-5ad4-5262-b078-3ab345105db8")) __declspec(novtable) IIterator<Windows::UI::Input::PointerPoint> : impl_IIterator<Windows::UI::Input::PointerPoint> {};
#endif

#ifndef WINRT_GENERIC_f6f2cba6_7076_5b59_9631_f6ac32b57695
#define WINRT_GENERIC_f6f2cba6_7076_5b59_9631_f6ac32b57695
template <> struct __declspec(uuid("f6f2cba6-7076-5b59-9631-f6ac32b57695")) __declspec(novtable) IIterable<Windows::UI::Input::PointerPoint> : impl_IIterable<Windows::UI::Input::PointerPoint> {};
#endif

#ifndef WINRT_GENERIC_f0f57411_7786_5174_8752_4c5e834b6da2
#define WINRT_GENERIC_f0f57411_7786_5174_8752_4c5e834b6da2
template <> struct __declspec(uuid("f0f57411-7786-5174-8752-4c5e834b6da2")) __declspec(novtable) IVectorView<Windows::UI::Input::PointerPoint> : impl_IVectorView<Windows::UI::Input::PointerPoint> {};
#endif

#ifndef WINRT_GENERIC_7ac16ff4_5857_5001_b87f_327093f68392
#define WINRT_GENERIC_7ac16ff4_5857_5001_b87f_327093f68392
template <> struct __declspec(uuid("7ac16ff4-5857-5001-b87f-327093f68392")) __declspec(novtable) IIterator<Windows::UI::Xaml::Input::InputScopeName> : impl_IIterator<Windows::UI::Xaml::Input::InputScopeName> {};
#endif

#ifndef WINRT_GENERIC_81416296_95d0_5100_b59b_bea1c27d2002
#define WINRT_GENERIC_81416296_95d0_5100_b59b_bea1c27d2002
template <> struct __declspec(uuid("81416296-95d0-5100-b59b-bea1c27d2002")) __declspec(novtable) IIterable<Windows::UI::Xaml::Input::InputScopeName> : impl_IIterable<Windows::UI::Xaml::Input::InputScopeName> {};
#endif

#ifndef WINRT_GENERIC_fcd65a82_5328_53bc_a884_c209aafabf78
#define WINRT_GENERIC_fcd65a82_5328_53bc_a884_c209aafabf78
template <> struct __declspec(uuid("fcd65a82-5328-53bc-a884-c209aafabf78")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Input::InputScopeName> : impl_IVectorView<Windows::UI::Xaml::Input::InputScopeName> {};
#endif


}

namespace Windows::UI::Xaml::Input {

template <typename D>
struct WINRT_EBO impl_IAccessKeyDisplayDismissedEventArgs
{
};

template <typename D>
struct WINRT_EBO impl_IAccessKeyDisplayRequestedEventArgs
{
    hstring PressedKeys() const;
};

template <typename D>
struct WINRT_EBO impl_IAccessKeyInvokedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IAccessKeyManager
{
};

template <typename D>
struct WINRT_EBO impl_IAccessKeyManagerStatics
{
    bool IsDisplayModeEnabled() const;
    event_token IsDisplayModeEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value) const;
    using IsDisplayModeEnabledChanged_revoker = event_revoker<IAccessKeyManagerStatics>;
    IsDisplayModeEnabledChanged_revoker IsDisplayModeEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value) const;
    void IsDisplayModeEnabledChanged(event_token token) const;
    void ExitDisplayMode() const;
};

template <typename D>
struct WINRT_EBO impl_ICommand
{
    event_token CanExecuteChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    using CanExecuteChanged_revoker = event_revoker<ICommand>;
    CanExecuteChanged_revoker CanExecuteChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const;
    void CanExecuteChanged(event_token token) const;
    bool CanExecute(const Windows::IInspectable & parameter) const;
    void Execute(const Windows::IInspectable & parameter) const;
};

template <typename D>
struct WINRT_EBO impl_IContextRequestedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    bool TryGetPosition(const Windows::UI::Xaml::UIElement & relativeTo, Windows::Foundation::Point & point) const;
};

template <typename D>
struct WINRT_EBO impl_IDoubleTappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const;
};

template <typename D>
struct WINRT_EBO impl_IFocusManager
{
};

template <typename D>
struct WINRT_EBO impl_IFocusManagerStatics
{
    Windows::IInspectable GetFocusedElement() const;
};

template <typename D>
struct WINRT_EBO impl_IFocusManagerStatics2
{
    bool TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection) const;
};

template <typename D>
struct WINRT_EBO impl_IFocusManagerStatics3
{
    Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection) const;
    Windows::UI::Xaml::UIElement FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, const Windows::Foundation::Rect & hintRect) const;
};

template <typename D>
struct WINRT_EBO impl_IHoldingRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::HoldingState HoldingState() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const;
};

template <typename D>
struct WINRT_EBO impl_IInertiaExpansionBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredExpansion() const;
    void DesiredExpansion(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IInertiaRotationBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredRotation() const;
    void DesiredRotation(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IInertiaTranslationBehavior
{
    double DesiredDeceleration() const;
    void DesiredDeceleration(double value) const;
    double DesiredDisplacement() const;
    void DesiredDisplacement(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IInputScope
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> Names() const;
};

template <typename D>
struct WINRT_EBO impl_IInputScopeName
{
    Windows::UI::Xaml::Input::InputScopeNameValue NameValue() const;
    void NameValue(Windows::UI::Xaml::Input::InputScopeNameValue value) const;
};

template <typename D>
struct WINRT_EBO impl_IInputScopeNameFactory
{
    Windows::UI::Xaml::Input::InputScopeName CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue nameValue) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyRoutedEventArgs
{
    Windows::System::VirtualKey Key() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
    bool Handled() const;
    void Handled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IKeyRoutedEventArgs2
{
    Windows::System::VirtualKey OriginalKey() const;
};

template <typename D>
struct WINRT_EBO impl_IKeyRoutedEventArgs3
{
    hstring DeviceId() const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationCompletedRoutedEventArgs
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

template <typename D>
struct WINRT_EBO impl_IManipulationDeltaRoutedEventArgs
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

template <typename D>
struct WINRT_EBO impl_IManipulationInertiaStartingRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::UI::Xaml::Input::InertiaExpansionBehavior ExpansionBehavior() const;
    void ExpansionBehavior(const Windows::UI::Xaml::Input::InertiaExpansionBehavior & value) const;
    Windows::UI::Xaml::Input::InertiaRotationBehavior RotationBehavior() const;
    void RotationBehavior(const Windows::UI::Xaml::Input::InertiaRotationBehavior & value) const;
    Windows::UI::Xaml::Input::InertiaTranslationBehavior TranslationBehavior() const;
    void TranslationBehavior(const Windows::UI::Xaml::Input::InertiaTranslationBehavior & value) const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationPivot
{
    Windows::Foundation::Point Center() const;
    void Center(const Windows::Foundation::Point & value) const;
    double Radius() const;
    void Radius(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationPivotFactory
{
    Windows::UI::Xaml::Input::ManipulationPivot CreateInstanceWithCenterAndRadius(const Windows::Foundation::Point & center, double radius) const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationStartedRoutedEventArgs
{
    Windows::UI::Xaml::UIElement Container() const;
    Windows::Foundation::Point Position() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationStartedRoutedEventArgsFactory
{
    Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IManipulationStartingRoutedEventArgs
{
    Windows::UI::Xaml::Input::ManipulationModes Mode() const;
    void Mode(Windows::UI::Xaml::Input::ManipulationModes value) const;
    Windows::UI::Xaml::UIElement Container() const;
    void Container(const Windows::UI::Xaml::UIElement & value) const;
    Windows::UI::Xaml::Input::ManipulationPivot Pivot() const;
    void Pivot(const Windows::UI::Xaml::Input::ManipulationPivot & value) const;
    bool Handled() const;
    void Handled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IPointer
{
    uint32_t PointerId() const;
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool IsInContact() const;
    bool IsInRange() const;
};

template <typename D>
struct WINRT_EBO impl_IPointerRoutedEventArgs
{
    Windows::UI::Xaml::Input::Pointer Pointer() const;
    Windows::System::VirtualKeyModifiers KeyModifiers() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::UI::Input::PointerPoint GetCurrentPoint(const Windows::UI::Xaml::UIElement & relativeTo) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(const Windows::UI::Xaml::UIElement & relativeTo) const;
};

template <typename D>
struct WINRT_EBO impl_IRightTappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const;
};

template <typename D>
struct WINRT_EBO impl_ITappedRoutedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Foundation::Point GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const;
};

struct DoubleTappedEventHandler : Windows::IUnknown
{
    DoubleTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<DoubleTappedEventHandler>(m_ptr); }
    template <typename L> DoubleTappedEventHandler(L lambda);
    template <typename F> DoubleTappedEventHandler (F * function);
    template <typename O, typename M> DoubleTappedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs & e) const;
};

struct HoldingEventHandler : Windows::IUnknown
{
    HoldingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<HoldingEventHandler>(m_ptr); }
    template <typename L> HoldingEventHandler(L lambda);
    template <typename F> HoldingEventHandler (F * function);
    template <typename O, typename M> HoldingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::HoldingRoutedEventArgs & e) const;
};

struct KeyEventHandler : Windows::IUnknown
{
    KeyEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<KeyEventHandler>(m_ptr); }
    template <typename L> KeyEventHandler(L lambda);
    template <typename F> KeyEventHandler (F * function);
    template <typename O, typename M> KeyEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::KeyRoutedEventArgs & e) const;
};

struct ManipulationCompletedEventHandler : Windows::IUnknown
{
    ManipulationCompletedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ManipulationCompletedEventHandler>(m_ptr); }
    template <typename L> ManipulationCompletedEventHandler(L lambda);
    template <typename F> ManipulationCompletedEventHandler (F * function);
    template <typename O, typename M> ManipulationCompletedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs & e) const;
};

struct ManipulationDeltaEventHandler : Windows::IUnknown
{
    ManipulationDeltaEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ManipulationDeltaEventHandler>(m_ptr); }
    template <typename L> ManipulationDeltaEventHandler(L lambda);
    template <typename F> ManipulationDeltaEventHandler (F * function);
    template <typename O, typename M> ManipulationDeltaEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs & e) const;
};

struct ManipulationInertiaStartingEventHandler : Windows::IUnknown
{
    ManipulationInertiaStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ManipulationInertiaStartingEventHandler>(m_ptr); }
    template <typename L> ManipulationInertiaStartingEventHandler(L lambda);
    template <typename F> ManipulationInertiaStartingEventHandler (F * function);
    template <typename O, typename M> ManipulationInertiaStartingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs & e) const;
};

struct ManipulationStartedEventHandler : Windows::IUnknown
{
    ManipulationStartedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ManipulationStartedEventHandler>(m_ptr); }
    template <typename L> ManipulationStartedEventHandler(L lambda);
    template <typename F> ManipulationStartedEventHandler (F * function);
    template <typename O, typename M> ManipulationStartedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs & e) const;
};

struct ManipulationStartingEventHandler : Windows::IUnknown
{
    ManipulationStartingEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ManipulationStartingEventHandler>(m_ptr); }
    template <typename L> ManipulationStartingEventHandler(L lambda);
    template <typename F> ManipulationStartingEventHandler (F * function);
    template <typename O, typename M> ManipulationStartingEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs & e) const;
};

struct PointerEventHandler : Windows::IUnknown
{
    PointerEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PointerEventHandler>(m_ptr); }
    template <typename L> PointerEventHandler(L lambda);
    template <typename F> PointerEventHandler (F * function);
    template <typename O, typename M> PointerEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::PointerRoutedEventArgs & e) const;
};

struct RightTappedEventHandler : Windows::IUnknown
{
    RightTappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<RightTappedEventHandler>(m_ptr); }
    template <typename L> RightTappedEventHandler(L lambda);
    template <typename F> RightTappedEventHandler (F * function);
    template <typename O, typename M> RightTappedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::RightTappedRoutedEventArgs & e) const;
};

struct TappedEventHandler : Windows::IUnknown
{
    TappedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<TappedEventHandler>(m_ptr); }
    template <typename L> TappedEventHandler(L lambda);
    template <typename F> TappedEventHandler (F * function);
    template <typename O, typename M> TappedEventHandler(O * object, M method);
    void operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::TappedRoutedEventArgs & e) const;
};

struct IAccessKeyDisplayDismissedEventArgs :
    Windows::IInspectable,
    impl::consume<IAccessKeyDisplayDismissedEventArgs>
{
    IAccessKeyDisplayDismissedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessKeyDisplayDismissedEventArgs>(m_ptr); }
};

struct IAccessKeyDisplayRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IAccessKeyDisplayRequestedEventArgs>
{
    IAccessKeyDisplayRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessKeyDisplayRequestedEventArgs>(m_ptr); }
};

struct IAccessKeyInvokedEventArgs :
    Windows::IInspectable,
    impl::consume<IAccessKeyInvokedEventArgs>
{
    IAccessKeyInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessKeyInvokedEventArgs>(m_ptr); }
};

struct IAccessKeyManager :
    Windows::IInspectable,
    impl::consume<IAccessKeyManager>
{
    IAccessKeyManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessKeyManager>(m_ptr); }
};

struct IAccessKeyManagerStatics :
    Windows::IInspectable,
    impl::consume<IAccessKeyManagerStatics>
{
    IAccessKeyManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessKeyManagerStatics>(m_ptr); }
};

struct ICommand :
    Windows::IInspectable,
    impl::consume<ICommand>
{
    ICommand(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommand>(m_ptr); }
};

struct IContextRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IContextRequestedEventArgs>
{
    IContextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContextRequestedEventArgs>(m_ptr); }
};

struct IDoubleTappedRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IDoubleTappedRoutedEventArgs>
{
    IDoubleTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDoubleTappedRoutedEventArgs>(m_ptr); }
};

struct IFocusManager :
    Windows::IInspectable,
    impl::consume<IFocusManager>
{
    IFocusManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFocusManager>(m_ptr); }
};

struct IFocusManagerStatics :
    Windows::IInspectable,
    impl::consume<IFocusManagerStatics>
{
    IFocusManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFocusManagerStatics>(m_ptr); }
};

struct IFocusManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IFocusManagerStatics2>
{
    IFocusManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFocusManagerStatics2>(m_ptr); }
};

struct IFocusManagerStatics3 :
    Windows::IInspectable,
    impl::consume<IFocusManagerStatics3>
{
    IFocusManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFocusManagerStatics3>(m_ptr); }
};

struct IHoldingRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IHoldingRoutedEventArgs>
{
    IHoldingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHoldingRoutedEventArgs>(m_ptr); }
};

struct IInertiaExpansionBehavior :
    Windows::IInspectable,
    impl::consume<IInertiaExpansionBehavior>
{
    IInertiaExpansionBehavior(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInertiaExpansionBehavior>(m_ptr); }
};

struct IInertiaRotationBehavior :
    Windows::IInspectable,
    impl::consume<IInertiaRotationBehavior>
{
    IInertiaRotationBehavior(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInertiaRotationBehavior>(m_ptr); }
};

struct IInertiaTranslationBehavior :
    Windows::IInspectable,
    impl::consume<IInertiaTranslationBehavior>
{
    IInertiaTranslationBehavior(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInertiaTranslationBehavior>(m_ptr); }
};

struct IInputScope :
    Windows::IInspectable,
    impl::consume<IInputScope>
{
    IInputScope(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputScope>(m_ptr); }
};

struct IInputScopeName :
    Windows::IInspectable,
    impl::consume<IInputScopeName>
{
    IInputScopeName(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputScopeName>(m_ptr); }
};

struct IInputScopeNameFactory :
    Windows::IInspectable,
    impl::consume<IInputScopeNameFactory>
{
    IInputScopeNameFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputScopeNameFactory>(m_ptr); }
};

struct IKeyRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IKeyRoutedEventArgs>
{
    IKeyRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyRoutedEventArgs>(m_ptr); }
};

struct IKeyRoutedEventArgs2 :
    Windows::IInspectable,
    impl::consume<IKeyRoutedEventArgs2>
{
    IKeyRoutedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyRoutedEventArgs2>(m_ptr); }
};

struct IKeyRoutedEventArgs3 :
    Windows::IInspectable,
    impl::consume<IKeyRoutedEventArgs3>
{
    IKeyRoutedEventArgs3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKeyRoutedEventArgs3>(m_ptr); }
};

struct IManipulationCompletedRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IManipulationCompletedRoutedEventArgs>
{
    IManipulationCompletedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationCompletedRoutedEventArgs>(m_ptr); }
};

struct IManipulationDeltaRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IManipulationDeltaRoutedEventArgs>
{
    IManipulationDeltaRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationDeltaRoutedEventArgs>(m_ptr); }
};

struct IManipulationInertiaStartingRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IManipulationInertiaStartingRoutedEventArgs>
{
    IManipulationInertiaStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationInertiaStartingRoutedEventArgs>(m_ptr); }
};

struct IManipulationPivot :
    Windows::IInspectable,
    impl::consume<IManipulationPivot>
{
    IManipulationPivot(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationPivot>(m_ptr); }
};

struct IManipulationPivotFactory :
    Windows::IInspectable,
    impl::consume<IManipulationPivotFactory>
{
    IManipulationPivotFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationPivotFactory>(m_ptr); }
};

struct IManipulationStartedRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IManipulationStartedRoutedEventArgs>
{
    IManipulationStartedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationStartedRoutedEventArgs>(m_ptr); }
};

struct IManipulationStartedRoutedEventArgsFactory :
    Windows::IInspectable,
    impl::consume<IManipulationStartedRoutedEventArgsFactory>
{
    IManipulationStartedRoutedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationStartedRoutedEventArgsFactory>(m_ptr); }
};

struct IManipulationStartingRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IManipulationStartingRoutedEventArgs>
{
    IManipulationStartingRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IManipulationStartingRoutedEventArgs>(m_ptr); }
};

struct IPointer :
    Windows::IInspectable,
    impl::consume<IPointer>
{
    IPointer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPointer>(m_ptr); }
};

struct IPointerRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IPointerRoutedEventArgs>
{
    IPointerRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPointerRoutedEventArgs>(m_ptr); }
};

struct IRightTappedRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<IRightTappedRoutedEventArgs>
{
    IRightTappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRightTappedRoutedEventArgs>(m_ptr); }
};

struct ITappedRoutedEventArgs :
    Windows::IInspectable,
    impl::consume<ITappedRoutedEventArgs>
{
    ITappedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITappedRoutedEventArgs>(m_ptr); }
};

}

}
