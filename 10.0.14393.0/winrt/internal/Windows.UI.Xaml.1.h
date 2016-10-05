// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.ApplicationModel.0.h"
#include "Windows.ApplicationModel.Activation.0.h"
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.ApplicationModel.DataTransfer.0.h"
#include "Windows.ApplicationModel.DataTransfer.DragDrop.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Imaging.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.UI.Input.0.h"
#include "Windows.UI.Xaml.Automation.Peers.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.UI.Xaml.Data.0.h"
#include "Windows.UI.Xaml.Input.0.h"
#include "Windows.UI.Xaml.Interop.0.h"
#include "Windows.UI.Xaml.Media.0.h"
#include "Windows.UI.Xaml.Media.Animation.0.h"
#include "Windows.UI.Xaml.Media.Imaging.0.h"
#include "Windows.UI.Xaml.Media.Media3D.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.UI.Xaml.Input.1.h"
#include "Windows.ApplicationModel.DataTransfer.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml {

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
    winrt::Windows::UI::Xaml::DurationType Type;
};

struct Thickness
{
    double Left;
    double Top;
    double Right;
    double Bottom;
};

struct GridLength
{
    double Value;
    winrt::Windows::UI::Xaml::GridUnitType GridUnitType;
};

}

namespace Windows::UI::Xaml {

using CornerRadius = ABI::Windows::UI::Xaml::CornerRadius;
using Duration = ABI::Windows::UI::Xaml::Duration;
using Thickness = ABI::Windows::UI::Xaml::Thickness;
using GridLength = ABI::Windows::UI::Xaml::GridLength;

}

namespace ABI::Windows::UI::Xaml {

struct __declspec(uuid("b6351c55-c284-46e4-8310-fb0967fab76f")) __declspec(novtable) ApplicationInitializationCallback : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::Xaml::IApplicationInitializationCallbackParams * p) = 0;
};

struct __declspec(uuid("136b1782-54ba-420d-a1aa-82828721cde6")) __declspec(novtable) BindingFailedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IBindingFailedEventArgs * e) = 0;
};

struct __declspec(uuid("d6ecb12c-15b5-4ec8-b95c-cdd208f08153")) __declspec(novtable) CreateDefaultValueCallback : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable ** value) = 0;
};

struct __declspec(uuid("45883d16-27bf-4bc1-ac26-94c1601f3a49")) __declspec(novtable) DependencyPropertyChangedCallback : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::Xaml::IDependencyObject * sender, Windows::UI::Xaml::IDependencyProperty * dp) = 0;
};

struct __declspec(uuid("09223e5a-75be-4499-8180-1ddc005421c0")) __declspec(novtable) DependencyPropertyChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs * e) = 0;
};

struct __declspec(uuid("2ab1a205-1e73-4bcf-aabc-57b97e21961d")) __declspec(novtable) DragEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IDragEventArgs * e) = 0;
};

struct __declspec(uuid("93a956ae-1d7f-438b-b7b8-227d96b609c0")) __declspec(novtable) EnteredBackgroundEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::ApplicationModel::IEnteredBackgroundEventArgs * e) = 0;
};

struct __declspec(uuid("68e0e810-f6ea-42bc-855b-5d9b67e6a262")) __declspec(novtable) ExceptionRoutedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IExceptionRoutedEventArgs * e) = 0;
};

struct __declspec(uuid("a5f04119-0cd9-49f1-a23f-44e547ab9f1a")) __declspec(novtable) IAdaptiveTrigger : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinWindowWidth(double * value) = 0;
    virtual HRESULT __stdcall put_MinWindowWidth(double value) = 0;
    virtual HRESULT __stdcall get_MinWindowHeight(double * value) = 0;
    virtual HRESULT __stdcall put_MinWindowHeight(double value) = 0;
};

struct __declspec(uuid("c966d482-5aeb-4841-9247-c1a0bdd6f59f")) __declspec(novtable) IAdaptiveTriggerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IAdaptiveTrigger ** instance) = 0;
};

struct __declspec(uuid("b92e29ea-1615-4350-9c3b-92b2986bf444")) __declspec(novtable) IAdaptiveTriggerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinWindowWidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MinWindowHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("74b861a1-7487-46a9-9a6e-c78b512726c5")) __declspec(novtable) IApplication : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Resources(Windows::UI::Xaml::IResourceDictionary ** value) = 0;
    virtual HRESULT __stdcall put_Resources(Windows::UI::Xaml::IResourceDictionary * value) = 0;
    virtual HRESULT __stdcall get_DebugSettings(Windows::UI::Xaml::IDebugSettings ** value) = 0;
    virtual HRESULT __stdcall get_RequestedTheme(winrt::Windows::UI::Xaml::ApplicationTheme * value) = 0;
    virtual HRESULT __stdcall put_RequestedTheme(winrt::Windows::UI::Xaml::ApplicationTheme value) = 0;
    virtual HRESULT __stdcall add_UnhandledException(Windows::UI::Xaml::UnhandledExceptionEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UnhandledException(event_token token) = 0;
    virtual HRESULT __stdcall add_Suspending(Windows::UI::Xaml::SuspendingEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Suspending(event_token token) = 0;
    virtual HRESULT __stdcall add_Resuming(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Resuming(event_token token) = 0;
    virtual HRESULT __stdcall abi_Exit() = 0;
};

struct __declspec(uuid("019104be-522a-5904-f52f-de72010429e0")) __declspec(novtable) IApplication2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FocusVisualKind(winrt::Windows::UI::Xaml::FocusVisualKind * value) = 0;
    virtual HRESULT __stdcall put_FocusVisualKind(winrt::Windows::UI::Xaml::FocusVisualKind value) = 0;
    virtual HRESULT __stdcall get_RequiresPointerMode(winrt::Windows::UI::Xaml::ApplicationRequiresPointerMode * value) = 0;
    virtual HRESULT __stdcall put_RequiresPointerMode(winrt::Windows::UI::Xaml::ApplicationRequiresPointerMode value) = 0;
    virtual HRESULT __stdcall add_LeavingBackground(Windows::UI::Xaml::LeavingBackgroundEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LeavingBackground(event_token token) = 0;
    virtual HRESULT __stdcall add_EnteredBackground(Windows::UI::Xaml::EnteredBackgroundEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnteredBackground(event_token token) = 0;
};

struct __declspec(uuid("93bbe361-be5a-4ee3-b4a3-95118dc97a89")) __declspec(novtable) IApplicationFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IApplication ** instance) = 0;
};

struct __declspec(uuid("751b792e-5772-4488-8b87-f547faa64474")) __declspec(novtable) IApplicationInitializationCallbackParams : Windows::IInspectable
{
};

struct __declspec(uuid("25f99ff7-9347-459a-9fac-b2d0e11c1a0f")) __declspec(novtable) IApplicationOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnActivated(Windows::ApplicationModel::Activation::IActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnLaunched(Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnFileActivated(Windows::ApplicationModel::Activation::IFileActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnSearchActivated(Windows::ApplicationModel::Activation::ISearchActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnShareTargetActivated(Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnFileOpenPickerActivated(Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnFileSavePickerActivated(Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnCachedFileUpdaterActivated(Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs * args) = 0;
    virtual HRESULT __stdcall abi_OnWindowCreated(Windows::UI::Xaml::IWindowCreatedEventArgs * args) = 0;
};

struct __declspec(uuid("db5cd2b9-d3b4-558c-c64e-0434fd1bd889")) __declspec(novtable) IApplicationOverrides2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnBackgroundActivated(Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs * args) = 0;
};

struct __declspec(uuid("06499997-f7b4-45fe-b763-7577d1d3cb4a")) __declspec(novtable) IApplicationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::UI::Xaml::IApplication ** value) = 0;
    virtual HRESULT __stdcall abi_Start(Windows::UI::Xaml::ApplicationInitializationCallback * callback) = 0;
    virtual HRESULT __stdcall abi_LoadComponent(Windows::IInspectable * component, Windows::Foundation::IUriRuntimeClass * resourceLocator) = 0;
    virtual HRESULT __stdcall abi_LoadComponentWithResourceLocation(Windows::IInspectable * component, Windows::Foundation::IUriRuntimeClass * resourceLocator, winrt::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation) = 0;
};

struct __declspec(uuid("32c1d013-4dbd-446d-bbb8-0de35048a449")) __declspec(novtable) IBindingFailedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
};

struct __declspec(uuid("fd7be182-1cdb-4288-b8c8-85ee79297bfc")) __declspec(novtable) ICornerRadiusHelper : Windows::IInspectable
{
};

struct __declspec(uuid("f4a1f659-d4d4-451f-a387-d6bf4b2451d4")) __declspec(novtable) ICornerRadiusHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft, Windows::UI::Xaml::CornerRadius * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromUniformRadius(double uniformRadius, Windows::UI::Xaml::CornerRadius * returnValue) = 0;
};

struct __declspec(uuid("7da68e21-0b8f-4f9f-a143-f8e7780136a2")) __declspec(novtable) IDataContextChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NewValue(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};

struct __declspec(uuid("9910aec7-8ab5-4118-9bc6-09f45a35073d")) __declspec(novtable) IDataTemplate : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LoadContent(Windows::UI::Xaml::IDependencyObject ** returnValue) = 0;
};

struct __declspec(uuid("595e9547-cdff-4b92-b773-ab396878f353")) __declspec(novtable) IDataTemplateExtension : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ResetTemplate() = 0;
    virtual HRESULT __stdcall abi_ProcessBinding(uint32_t phase, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_ProcessBindings(Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs * arg, int32_t * returnValue) = 0;
};

struct __declspec(uuid("51ed9d7e-2b53-475b-9c88-0c1832c8351a")) __declspec(novtable) IDataTemplateFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IDataTemplate ** instance) = 0;
};

struct __declspec(uuid("873b6c28-cceb-4b61-86fa-b2cec39cc2fa")) __declspec(novtable) IDataTemplateKey : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DataType(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_DataType(Windows::IInspectable * value) = 0;
};

struct __declspec(uuid("e96b2959-d982-4152-91cb-de0e4dfd7693")) __declspec(novtable) IDataTemplateKeyFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IDataTemplateKey ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateInstanceWithType(Windows::IInspectable * dataType, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IDataTemplateKey ** instance) = 0;
};

struct __declspec(uuid("8af77d73-aa01-471e-bedd-8bad86219b77")) __declspec(novtable) IDataTemplateStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExtensionInstanceProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetExtensionInstance(Windows::UI::Xaml::IFrameworkElement * element, Windows::UI::Xaml::IDataTemplateExtension ** value) = 0;
    virtual HRESULT __stdcall abi_SetExtensionInstance(Windows::UI::Xaml::IFrameworkElement * element, Windows::UI::Xaml::IDataTemplateExtension * value) = 0;
};

struct __declspec(uuid("3d451f98-c6a7-4d17-8398-d83a067183d8")) __declspec(novtable) IDebugSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableFrameRateCounter(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableFrameRateCounter(bool value) = 0;
    virtual HRESULT __stdcall get_IsBindingTracingEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsBindingTracingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsOverdrawHeatMapEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOverdrawHeatMapEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_BindingFailed(Windows::UI::Xaml::BindingFailedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_BindingFailed(event_token token) = 0;
};

struct __declspec(uuid("48d37585-e1a6-469b-83c8-30825037119e")) __declspec(novtable) IDebugSettings2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableRedrawRegions(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableRedrawRegions(bool value) = 0;
};

struct __declspec(uuid("e6bb5022-0625-479f-8e32-4b583d73b7ac")) __declspec(novtable) IDebugSettings3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsTextPerformanceVisualizationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsTextPerformanceVisualizationEnabled(bool value) = 0;
};

struct __declspec(uuid("5c526665-f60e-4912-af59-5fe0680f089d")) __declspec(novtable) IDependencyObject : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetValue(Windows::UI::Xaml::IDependencyProperty * dp, Windows::IInspectable ** returnValue) = 0;
    virtual HRESULT __stdcall abi_SetValue(Windows::UI::Xaml::IDependencyProperty * dp, Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall abi_ClearValue(Windows::UI::Xaml::IDependencyProperty * dp) = 0;
    virtual HRESULT __stdcall abi_ReadLocalValue(Windows::UI::Xaml::IDependencyProperty * dp, Windows::IInspectable ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetAnimationBaseValue(Windows::UI::Xaml::IDependencyProperty * dp, Windows::IInspectable ** returnValue) = 0;
    virtual HRESULT __stdcall get_Dispatcher(Windows::UI::Core::ICoreDispatcher ** value) = 0;
};

struct __declspec(uuid("29fed85d-3d22-43a1-add0-17027c08b212")) __declspec(novtable) IDependencyObject2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RegisterPropertyChangedCallback(Windows::UI::Xaml::IDependencyProperty * dp, Windows::UI::Xaml::DependencyPropertyChangedCallback * callback, int64_t * returnValue) = 0;
    virtual HRESULT __stdcall abi_UnregisterPropertyChangedCallback(Windows::UI::Xaml::IDependencyProperty * dp, int64_t token) = 0;
};

struct __declspec(uuid("051e79ff-b3a8-49ee-b5af-ac8f68b649e4")) __declspec(novtable) IDependencyObjectCollectionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject> ** instance) = 0;
};

struct __declspec(uuid("9a03af92-7d8a-4937-884f-ecf34fe02acb")) __declspec(novtable) IDependencyObjectFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IDependencyObject ** instance) = 0;
};

struct __declspec(uuid("85b13970-9bc4-4e96-acf1-30c8fd3d55c8")) __declspec(novtable) IDependencyProperty : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetMetadata(Windows::UI::Xaml::Interop::TypeName forType, Windows::UI::Xaml::IPropertyMetadata ** returnValue) = 0;
};

struct __declspec(uuid("81212c2b-24d0-4957-abc3-224470a93a4e")) __declspec(novtable) IDependencyPropertyChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OldValue(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall get_NewValue(Windows::IInspectable ** value) = 0;
};

struct __declspec(uuid("49e5f28f-8259-4d5c-aae0-83d56dbb68d9")) __declspec(novtable) IDependencyPropertyStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnsetValue(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall abi_Register(hstring name, Windows::UI::Xaml::Interop::TypeName propertyType, Windows::UI::Xaml::Interop::TypeName ownerType, Windows::UI::Xaml::IPropertyMetadata * typeMetadata, Windows::UI::Xaml::IDependencyProperty ** returnValue) = 0;
    virtual HRESULT __stdcall abi_RegisterAttached(hstring name, Windows::UI::Xaml::Interop::TypeName propertyType, Windows::UI::Xaml::Interop::TypeName ownerType, Windows::UI::Xaml::IPropertyMetadata * defaultMetadata, Windows::UI::Xaml::IDependencyProperty ** returnValue) = 0;
};

struct __declspec(uuid("d160ce46-cd22-4f5f-8c97-40e61da3e2dc")) __declspec(novtable) IDispatcherTimer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Interval(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Interval(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall add_Tick(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Tick(event_token token) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

struct __declspec(uuid("e9961e6e-3626-403a-afe0-040d58165632")) __declspec(novtable) IDispatcherTimerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IDispatcherTimer ** instance) = 0;
};

struct __declspec(uuid("b440c7c3-02b4-4980-9342-25dae1c0f188")) __declspec(novtable) IDragEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
    virtual HRESULT __stdcall get_Data(Windows::ApplicationModel::DataTransfer::IDataPackage ** value) = 0;
    virtual HRESULT __stdcall put_Data(Windows::ApplicationModel::DataTransfer::IDataPackage * value) = 0;
    virtual HRESULT __stdcall abi_GetPosition(Windows::UI::Xaml::IUIElement * relativeTo, Windows::Foundation::Point * returnValue) = 0;
};

struct __declspec(uuid("26336658-2917-411d-bfc3-2f22471cbbe7")) __declspec(novtable) IDragEventArgs2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DataView(Windows::ApplicationModel::DataTransfer::IDataPackageView ** value) = 0;
    virtual HRESULT __stdcall get_DragUIOverride(Windows::UI::Xaml::IDragUIOverride ** value) = 0;
    virtual HRESULT __stdcall get_Modifiers(winrt::Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers * value) = 0;
    virtual HRESULT __stdcall get_AcceptedOperation(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
    virtual HRESULT __stdcall put_AcceptedOperation(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::UI::Xaml::IDragOperationDeferral ** returnValue) = 0;
};

struct __declspec(uuid("d04fc3c6-8119-427a-8152-5f9550cc0416")) __declspec(novtable) IDragEventArgs3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
};

struct __declspec(uuid("ba73ecba-1b73-4086-b3d3-c223beea1633")) __declspec(novtable) IDragOperationDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("6800d3fa-90b8-46f9-8e30-5ac25f73f0f9")) __declspec(novtable) IDragStartingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Cancel(bool * value) = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) = 0;
    virtual HRESULT __stdcall get_Data(Windows::ApplicationModel::DataTransfer::IDataPackage ** value) = 0;
    virtual HRESULT __stdcall get_DragUI(Windows::UI::Xaml::IDragUI ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::UI::Xaml::IDragOperationDeferral ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetPosition(Windows::UI::Xaml::IUIElement * relativeTo, Windows::Foundation::Point * returnValue) = 0;
};

struct __declspec(uuid("d855e08e-44b6-4211-bd0b-7fddbb6e8231")) __declspec(novtable) IDragStartingEventArgs2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
    virtual HRESULT __stdcall put_AllowedOperations(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation value) = 0;
};

struct __declspec(uuid("2d9bd838-7c60-4842-9170-346fe10a226a")) __declspec(novtable) IDragUI : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::IBitmapImage * bitmapImage) = 0;
    virtual HRESULT __stdcall abi_SetContentFromBitmapImageWithAnchorPoint(Windows::UI::Xaml::Media::Imaging::IBitmapImage * bitmapImage, Windows::Foundation::Point anchorPoint) = 0;
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap) = 0;
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap, Windows::Foundation::Point anchorPoint) = 0;
    virtual HRESULT __stdcall abi_SetContentFromDataPackage() = 0;
};

struct __declspec(uuid("bd6c9dfa-c961-4861-b7a5-bf4fe4a8a6ef")) __declspec(novtable) IDragUIOverride : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Caption(hstring * value) = 0;
    virtual HRESULT __stdcall put_Caption(hstring value) = 0;
    virtual HRESULT __stdcall get_IsContentVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsContentVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsCaptionVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCaptionVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsGlyphVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsGlyphVisible(bool value) = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
    virtual HRESULT __stdcall abi_SetContentFromBitmapImage(Windows::UI::Xaml::Media::Imaging::IBitmapImage * bitmapImage) = 0;
    virtual HRESULT __stdcall abi_SetContentFromBitmapImageWithAnchorPoint(Windows::UI::Xaml::Media::Imaging::IBitmapImage * bitmapImage, Windows::Foundation::Point anchorPoint) = 0;
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap) = 0;
    virtual HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap, Windows::Foundation::Point anchorPoint) = 0;
};

struct __declspec(uuid("6c4fc188-95bc-4261-9ec5-21cab677b734")) __declspec(novtable) IDropCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DropResult(winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) = 0;
};

struct __declspec(uuid("25c1659f-4497-4135-940f-ee96f4d6e934")) __declspec(novtable) IDurationHelper : Windows::IInspectable
{
};

struct __declspec(uuid("bc88093e-3547-4ec0-b519-ffa8f9c4838c")) __declspec(novtable) IDurationHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Automatic(Windows::UI::Xaml::Duration * value) = 0;
    virtual HRESULT __stdcall get_Forever(Windows::UI::Xaml::Duration * value) = 0;
    virtual HRESULT __stdcall abi_Compare(Windows::UI::Xaml::Duration duration1, Windows::UI::Xaml::Duration duration2, int32_t * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromTimeSpan(Windows::Foundation::TimeSpan timeSpan, Windows::UI::Xaml::Duration * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetHasTimeSpan(Windows::UI::Xaml::Duration target, bool * value) = 0;
    virtual HRESULT __stdcall abi_Add(Windows::UI::Xaml::Duration target, Windows::UI::Xaml::Duration duration, Windows::UI::Xaml::Duration * returnValue) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::UI::Xaml::Duration target, Windows::UI::Xaml::Duration value, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_Subtract(Windows::UI::Xaml::Duration target, Windows::UI::Xaml::Duration duration, Windows::UI::Xaml::Duration * returnValue) = 0;
};

struct __declspec(uuid("387773a5-f036-460c-9b81-f3d6ea43f6f2")) __declspec(novtable) IElementSoundPlayer : Windows::IInspectable
{
};

struct __declspec(uuid("217a9004-981d-41c9-b152-ada911a4b13a")) __declspec(novtable) IElementSoundPlayerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Volume(double * value) = 0;
    virtual HRESULT __stdcall put_Volume(double value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::UI::Xaml::ElementSoundPlayerState * value) = 0;
    virtual HRESULT __stdcall put_State(winrt::Windows::UI::Xaml::ElementSoundPlayerState value) = 0;
    virtual HRESULT __stdcall abi_Play(winrt::Windows::UI::Xaml::ElementSoundKind sound) = 0;
};

struct __declspec(uuid("def8f855-0b49-4087-b1a9-b8b38488f786")) __declspec(novtable) IEventTrigger : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RoutedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall put_RoutedEvent(Windows::UI::Xaml::IRoutedEvent * value) = 0;
    virtual HRESULT __stdcall get_Actions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction> ** value) = 0;
};

struct __declspec(uuid("dd9ff16a-4b62-4a6c-a49d-0671ef6136be")) __declspec(novtable) IExceptionRoutedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ErrorMessage(hstring * value) = 0;
};

struct __declspec(uuid("bba9826d-5d7a-44e7-b893-b2ae0dd24273")) __declspec(novtable) IExceptionRoutedEventArgsFactory : Windows::IInspectable
{
};

struct __declspec(uuid("a391d09b-4a99-4b7c-9d8d-6fa5d01f6fbf")) __declspec(novtable) IFrameworkElement : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Triggers(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase> ** value) = 0;
    virtual HRESULT __stdcall get_Resources(Windows::UI::Xaml::IResourceDictionary ** value) = 0;
    virtual HRESULT __stdcall put_Resources(Windows::UI::Xaml::IResourceDictionary * value) = 0;
    virtual HRESULT __stdcall get_Tag(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Tag(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_ActualWidth(double * value) = 0;
    virtual HRESULT __stdcall get_ActualHeight(double * value) = 0;
    virtual HRESULT __stdcall get_Width(double * value) = 0;
    virtual HRESULT __stdcall put_Width(double value) = 0;
    virtual HRESULT __stdcall get_Height(double * value) = 0;
    virtual HRESULT __stdcall put_Height(double value) = 0;
    virtual HRESULT __stdcall get_MinWidth(double * value) = 0;
    virtual HRESULT __stdcall put_MinWidth(double value) = 0;
    virtual HRESULT __stdcall get_MaxWidth(double * value) = 0;
    virtual HRESULT __stdcall put_MaxWidth(double value) = 0;
    virtual HRESULT __stdcall get_MinHeight(double * value) = 0;
    virtual HRESULT __stdcall put_MinHeight(double value) = 0;
    virtual HRESULT __stdcall get_MaxHeight(double * value) = 0;
    virtual HRESULT __stdcall put_MaxHeight(double value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment * value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignment(winrt::Windows::UI::Xaml::HorizontalAlignment value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignment(winrt::Windows::UI::Xaml::VerticalAlignment * value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignment(winrt::Windows::UI::Xaml::VerticalAlignment value) = 0;
    virtual HRESULT __stdcall get_Margin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_Margin(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_BaseUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_DataContext(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_DataContext(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_Style(Windows::UI::Xaml::IStyle ** value) = 0;
    virtual HRESULT __stdcall put_Style(Windows::UI::Xaml::IStyle * value) = 0;
    virtual HRESULT __stdcall get_Parent(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(winrt::Windows::UI::Xaml::FlowDirection * value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(winrt::Windows::UI::Xaml::FlowDirection value) = 0;
    virtual HRESULT __stdcall add_Loaded(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Loaded(event_token token) = 0;
    virtual HRESULT __stdcall add_Unloaded(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Unloaded(event_token token) = 0;
    virtual HRESULT __stdcall add_SizeChanged(Windows::UI::Xaml::SizeChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_LayoutUpdated(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LayoutUpdated(event_token token) = 0;
    virtual HRESULT __stdcall abi_FindName(hstring name, Windows::IInspectable ** returnValue) = 0;
    virtual HRESULT __stdcall abi_SetBinding(Windows::UI::Xaml::IDependencyProperty * dp, Windows::UI::Xaml::Data::IBindingBase * binding) = 0;
};

struct __declspec(uuid("f19104be-422a-4904-a52f-ee72010429e5")) __declspec(novtable) IFrameworkElement2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedTheme(winrt::Windows::UI::Xaml::ElementTheme * value) = 0;
    virtual HRESULT __stdcall put_RequestedTheme(winrt::Windows::UI::Xaml::ElementTheme value) = 0;
    virtual HRESULT __stdcall add_DataContextChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DataContextChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetBindingExpression(Windows::UI::Xaml::IDependencyProperty * dp, Windows::UI::Xaml::Data::IBindingExpression ** returnValue) = 0;
};

struct __declspec(uuid("c81c2720-5c52-4bbe-a199-2b1e34f00f70")) __declspec(novtable) IFrameworkElement3 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Loading(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Loading(event_token token) = 0;
};

struct __declspec(uuid("6b765bb3-fba3-4404-bdee-1a45d1ca5f21")) __declspec(novtable) IFrameworkElement4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) = 0;
    virtual HRESULT __stdcall get_FocusVisualMargin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_FocusVisualMargin(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryThickness(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_FocusVisualSecondaryThickness(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryThickness(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_FocusVisualPrimaryThickness(Windows::UI::Xaml::Thickness value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_FocusVisualSecondaryBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryBrush(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_FocusVisualPrimaryBrush(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabled(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) = 0;
};

struct __declspec(uuid("deaee126-03ca-4966-b576-604cce93b5e8")) __declspec(novtable) IFrameworkElementFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IFrameworkElement ** instance) = 0;
};

struct __declspec(uuid("da007e54-b3c2-4b9a-aa8e-d3f071262b97")) __declspec(novtable) IFrameworkElementOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_MeasureOverride(Windows::Foundation::Size availableSize, Windows::Foundation::Size * returnValue) = 0;
    virtual HRESULT __stdcall abi_ArrangeOverride(Windows::Foundation::Size finalSize, Windows::Foundation::Size * returnValue) = 0;
    virtual HRESULT __stdcall abi_OnApplyTemplate() = 0;
};

struct __declspec(uuid("cb5cd2b9-e3b4-458c-b64e-1434fd1bd88a")) __declspec(novtable) IFrameworkElementOverrides2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GoToElementStateCore(hstring stateName, bool useTransitions, bool * returnValue) = 0;
};

struct __declspec(uuid("48383032-fbeb-4f8a-aed2-ee21fb27a57b")) __declspec(novtable) IFrameworkElementStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TagProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LanguageProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ActualWidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ActualHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_WidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_HeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MinWidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MaxWidthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MinHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MaxHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_NameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DataContextProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StyleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FlowDirectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9695db02-c0d8-4fa2-b100-3fa2df8b9538")) __declspec(novtable) IFrameworkElementStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestedThemeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9c41b155-c5d8-4663-bff2-d8d54fb5dbb3")) __declspec(novtable) IFrameworkElementStatics4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualMarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryThicknessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryThicknessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualSecondaryBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FocusVisualPrimaryBrushProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AllowFocusWhenDisabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("a1e254d8-a446-4a27-9a9d-a0f59e1258a5")) __declspec(novtable) IFrameworkTemplate : Windows::IInspectable
{
};

struct __declspec(uuid("1a78a0a5-937d-46d4-832b-94ff14dab061")) __declspec(novtable) IFrameworkTemplateFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IFrameworkTemplate ** instance) = 0;
};

struct __declspec(uuid("ddba664b-b603-47aa-942d-3833174f0d80")) __declspec(novtable) IFrameworkView : Windows::IInspectable
{
};

struct __declspec(uuid("e3b077da-35ad-4b09-b5b2-27420041ba9f")) __declspec(novtable) IFrameworkViewSource : Windows::IInspectable
{
};

struct __declspec(uuid("7a826ce1-07a0-4083-b6d1-b1d917b976ac")) __declspec(novtable) IGridLengthHelper : Windows::IInspectable
{
};

struct __declspec(uuid("9d457b9b-019f-4266-8872-215f198f6a9d")) __declspec(novtable) IGridLengthHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Auto(Windows::UI::Xaml::GridLength * value) = 0;
    virtual HRESULT __stdcall abi_FromPixels(double pixels, Windows::UI::Xaml::GridLength * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromValueAndType(double value, winrt::Windows::UI::Xaml::GridUnitType type, Windows::UI::Xaml::GridLength * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetIsAbsolute(Windows::UI::Xaml::GridLength target, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetIsAuto(Windows::UI::Xaml::GridLength target, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetIsStar(Windows::UI::Xaml::GridLength target, bool * value) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::UI::Xaml::GridLength target, Windows::UI::Xaml::GridLength value, bool * returnValue) = 0;
};

struct __declspec(uuid("46d1fa8d-5149-4153-ba3c-b03e64ee531e")) __declspec(novtable) IMediaFailedRoutedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ErrorTrace(hstring * value) = 0;
};

struct __declspec(uuid("727bdd92-64b0-49cf-a321-a9793e73e2e7")) __declspec(novtable) IPointHelper : Windows::IInspectable
{
};

struct __declspec(uuid("015aca75-76d8-4b7e-8a33-7d79204691ee")) __declspec(novtable) IPointHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromCoordinates(float x, float y, Windows::Foundation::Point * returnValue) = 0;
};

struct __declspec(uuid("814ef30d-8d18-448a-8644-f2cb51e70380")) __declspec(novtable) IPropertyMetadata : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultValue(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall get_CreateDefaultValueCallback(Windows::UI::Xaml::CreateDefaultValueCallback ** value) = 0;
};

struct __declspec(uuid("c1b81cc0-57cd-4f2f-b0a9-e1801b28f76b")) __declspec(novtable) IPropertyMetadataFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstanceWithDefaultValue(Windows::IInspectable * defaultValue, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IPropertyMetadata ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateInstanceWithDefaultValueAndCallback(Windows::IInspectable * defaultValue, Windows::UI::Xaml::PropertyChangedCallback * propertyChangedCallback, Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IPropertyMetadata ** instance) = 0;
};

struct __declspec(uuid("3b01077a-6e06-45e9-8b5c-af243458c062")) __declspec(novtable) IPropertyMetadataStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithDefaultValue(Windows::IInspectable * defaultValue, Windows::UI::Xaml::IPropertyMetadata ** returnValue) = 0;
    virtual HRESULT __stdcall abi_CreateWithDefaultValueAndCallback(Windows::IInspectable * defaultValue, Windows::UI::Xaml::PropertyChangedCallback * propertyChangedCallback, Windows::UI::Xaml::IPropertyMetadata ** returnValue) = 0;
    virtual HRESULT __stdcall abi_CreateWithFactory(Windows::UI::Xaml::CreateDefaultValueCallback * createDefaultValueCallback, Windows::UI::Xaml::IPropertyMetadata ** returnValue) = 0;
    virtual HRESULT __stdcall abi_CreateWithFactoryAndCallback(Windows::UI::Xaml::CreateDefaultValueCallback * createDefaultValueCallback, Windows::UI::Xaml::PropertyChangedCallback * propertyChangedCallback, Windows::UI::Xaml::IPropertyMetadata ** returnValue) = 0;
};

struct __declspec(uuid("300e5d8a-1ff3-4d2c-95ec-27f81debacb8")) __declspec(novtable) IPropertyPath : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
};

struct __declspec(uuid("4e4cdf99-9826-4e56-847c-ca055f162905")) __declspec(novtable) IPropertyPathFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(hstring path, Windows::UI::Xaml::IPropertyPath ** instance) = 0;
};

struct __declspec(uuid("a38781e2-4bfb-4ee2-afe5-89f31b37478d")) __declspec(novtable) IRectHelper : Windows::IInspectable
{
};

struct __declspec(uuid("5ee163e4-c17e-494f-b580-2f0574fc3a15")) __declspec(novtable) IRectHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Empty(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall abi_FromCoordinatesAndDimensions(float x, float y, float width, float height, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromPoints(Windows::Foundation::Point point1, Windows::Foundation::Point point2, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromLocationAndSize(Windows::Foundation::Point location, Windows::Foundation::Size size, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetIsEmpty(Windows::Foundation::Rect target, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetBottom(Windows::Foundation::Rect target, float * value) = 0;
    virtual HRESULT __stdcall abi_GetLeft(Windows::Foundation::Rect target, float * value) = 0;
    virtual HRESULT __stdcall abi_GetRight(Windows::Foundation::Rect target, float * value) = 0;
    virtual HRESULT __stdcall abi_GetTop(Windows::Foundation::Rect target, float * value) = 0;
    virtual HRESULT __stdcall abi_Contains(Windows::Foundation::Rect target, Windows::Foundation::Point point, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::Foundation::Rect target, Windows::Foundation::Rect value, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_Intersect(Windows::Foundation::Rect target, Windows::Foundation::Rect rect, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_UnionWithPoint(Windows::Foundation::Rect target, Windows::Foundation::Point point, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_UnionWithRect(Windows::Foundation::Rect target, Windows::Foundation::Rect rect, Windows::Foundation::Rect * returnValue) = 0;
};

struct __declspec(uuid("c1ea4f24-d6de-4191-8e3a-f48601f7489c")) __declspec(novtable) IResourceDictionary : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Source(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Source(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_MergedDictionaries(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> ** value) = 0;
    virtual HRESULT __stdcall get_ThemeDictionaries(Windows::Foundation::Collections::IMap<Windows::IInspectable, Windows::IInspectable> ** value) = 0;
};

struct __declspec(uuid("ea3639b5-31b7-4271-92c9-7c9584a91c22")) __declspec(novtable) IResourceDictionaryFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IResourceDictionary ** instance) = 0;
};

struct __declspec(uuid("a6b25818-43c1-4c70-865c-7bdd5a32e327")) __declspec(novtable) IRoutedEvent : Windows::IInspectable
{
};

struct __declspec(uuid("5c985ac6-d802-4b38-a223-bf070c43fedf")) __declspec(novtable) IRoutedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OriginalSource(Windows::IInspectable ** value) = 0;
};

struct __declspec(uuid("b61c4d87-70e5-412e-b520-1a41ee76bbf4")) __declspec(novtable) IRoutedEventArgsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IRoutedEventArgs ** instance) = 0;
};

struct __declspec(uuid("a73ded29-b4ae-4a81-be85-e690ba0d3b6e")) __declspec(novtable) ISetter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall put_Property(Windows::UI::Xaml::IDependencyProperty * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Value(Windows::IInspectable * value) = 0;
};

struct __declspec(uuid("70169561-05b1-4fa3-9d53-8e0c8c747afc")) __declspec(novtable) ISetter2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Target(Windows::UI::Xaml::ITargetPropertyPath ** value) = 0;
    virtual HRESULT __stdcall put_Target(Windows::UI::Xaml::ITargetPropertyPath * value) = 0;
};

struct __declspec(uuid("418be27c-2ac4-4f22-8097-dea3aeeb2fb3")) __declspec(novtable) ISetterBase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool * value) = 0;
};

struct __declspec(uuid("03c40ca8-909e-4117-811c-a4529496bdf1")) __declspec(novtable) ISetterBaseCollection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool * value) = 0;
};

struct __declspec(uuid("81f8ad60-1ce8-469d-a667-16e37cef8ba9")) __declspec(novtable) ISetterBaseFactory : Windows::IInspectable
{
};

struct __declspec(uuid("d3ca3d42-09b1-49d5-8891-e7b5648e02a2")) __declspec(novtable) ISetterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::UI::Xaml::IDependencyProperty * targetProperty, Windows::IInspectable * value, Windows::UI::Xaml::ISetter ** instance) = 0;
};

struct __declspec(uuid("d5312e60-5cc1-42a1-920c-1af46be2f986")) __declspec(novtable) ISizeChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PreviousSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_NewSize(Windows::Foundation::Size * value) = 0;
};

struct __declspec(uuid("e7225a94-5d03-4a03-ba94-967fc68fcefe")) __declspec(novtable) ISizeHelper : Windows::IInspectable
{
};

struct __declspec(uuid("6286c5b2-cf78-4915-aa40-76004a165f5e")) __declspec(novtable) ISizeHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Empty(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall abi_FromDimensions(float width, float height, Windows::Foundation::Size * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetIsEmpty(Windows::Foundation::Size target, bool * value) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::Foundation::Size target, Windows::Foundation::Size value, bool * returnValue) = 0;
};

struct __declspec(uuid("67adef2e-d8d9-49f7-a1fd-2e35eedd23cd")) __declspec(novtable) IStateTrigger : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool * value) = 0;
    virtual HRESULT __stdcall put_IsActive(bool value) = 0;
};

struct __declspec(uuid("48b20698-af06-466c-8052-93666dde0e49")) __declspec(novtable) IStateTriggerBase : Windows::IInspectable
{
};

struct __declspec(uuid("970e2c4b-bfaf-47b0-be42-c1d711bb2e9f")) __declspec(novtable) IStateTriggerBaseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IStateTriggerBase ** instance) = 0;
};

struct __declspec(uuid("3c41e253-8d14-4216-994c-f9930429f6e5")) __declspec(novtable) IStateTriggerBaseProtected : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetActive(bool IsActive) = 0;
};

struct __declspec(uuid("71e95c90-b3fe-4dd3-a8a8-44a2ce25e0b8")) __declspec(novtable) IStateTriggerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsActiveProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("c4a9f225-9db7-4a7d-b6d1-f74edb9293c2")) __declspec(novtable) IStyle : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsSealed(bool * value) = 0;
    virtual HRESULT __stdcall get_Setters(Windows::UI::Xaml::ISetterBaseCollection ** value) = 0;
    virtual HRESULT __stdcall get_TargetType(Windows::UI::Xaml::Interop::TypeName * value) = 0;
    virtual HRESULT __stdcall put_TargetType(Windows::UI::Xaml::Interop::TypeName value) = 0;
    virtual HRESULT __stdcall get_BasedOn(Windows::UI::Xaml::IStyle ** value) = 0;
    virtual HRESULT __stdcall put_BasedOn(Windows::UI::Xaml::IStyle * value) = 0;
    virtual HRESULT __stdcall abi_Seal() = 0;
};

struct __declspec(uuid("a36824e3-3d81-4ce5-aa51-8b410f602fcd")) __declspec(novtable) IStyleFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::UI::Xaml::Interop::TypeName targetType, Windows::UI::Xaml::IStyle ** instance) = 0;
};

struct __declspec(uuid("40740f8e-085f-4ced-be70-6f47acf15ad0")) __declspec(novtable) ITargetPropertyPath : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Path(Windows::UI::Xaml::IPropertyPath ** value) = 0;
    virtual HRESULT __stdcall put_Path(Windows::UI::Xaml::IPropertyPath * value) = 0;
    virtual HRESULT __stdcall get_Target(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Target(Windows::IInspectable * value) = 0;
};

struct __declspec(uuid("88eeccc8-99e2-4a44-9907-b44bc86e2bbe")) __declspec(novtable) ITargetPropertyPathFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::UI::Xaml::IDependencyProperty * targetProperty, Windows::UI::Xaml::ITargetPropertyPath ** instance) = 0;
};

struct __declspec(uuid("a86bae4b-1e8f-4eeb-9013-0b2838a97b34")) __declspec(novtable) IThicknessHelper : Windows::IInspectable
{
};

struct __declspec(uuid("c0991a7c-070c-4da6-8784-01ca800eb73a")) __declspec(novtable) IThicknessHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromLengths(double left, double top, double right, double bottom, Windows::UI::Xaml::Thickness * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromUniformLength(double uniformLength, Windows::UI::Xaml::Thickness * returnValue) = 0;
};

struct __declspec(uuid("a2c0df02-63d5-4b46-9b83-0868d3079621")) __declspec(novtable) ITriggerAction : Windows::IInspectable
{
};

struct __declspec(uuid("68d2c0b9-3289-414f-8f6e-c6b97aedda03")) __declspec(novtable) ITriggerActionFactory : Windows::IInspectable
{
};

struct __declspec(uuid("e7ea222f-dee6-4393-a8b2-8923d641f395")) __declspec(novtable) ITriggerBase : Windows::IInspectable
{
};

struct __declspec(uuid("6a3b9e57-fc5d-42d0-8cb9-ca50667af746")) __declspec(novtable) ITriggerBaseFactory : Windows::IInspectable
{
};

struct __declspec(uuid("676d0be9-b65c-41c6-ba40-58cf87f201c1")) __declspec(novtable) IUIElement : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DesiredSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_AllowDrop(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowDrop(bool value) = 0;
    virtual HRESULT __stdcall get_Opacity(double * value) = 0;
    virtual HRESULT __stdcall put_Opacity(double value) = 0;
    virtual HRESULT __stdcall get_Clip(Windows::UI::Xaml::Media::IRectangleGeometry ** value) = 0;
    virtual HRESULT __stdcall put_Clip(Windows::UI::Xaml::Media::IRectangleGeometry * value) = 0;
    virtual HRESULT __stdcall get_RenderTransform(Windows::UI::Xaml::Media::ITransform ** value) = 0;
    virtual HRESULT __stdcall put_RenderTransform(Windows::UI::Xaml::Media::ITransform * value) = 0;
    virtual HRESULT __stdcall get_Projection(Windows::UI::Xaml::Media::IProjection ** value) = 0;
    virtual HRESULT __stdcall put_Projection(Windows::UI::Xaml::Media::IProjection * value) = 0;
    virtual HRESULT __stdcall get_RenderTransformOrigin(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_RenderTransformOrigin(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_IsHitTestVisible(bool * value) = 0;
    virtual HRESULT __stdcall put_IsHitTestVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Visibility(winrt::Windows::UI::Xaml::Visibility * value) = 0;
    virtual HRESULT __stdcall put_Visibility(winrt::Windows::UI::Xaml::Visibility value) = 0;
    virtual HRESULT __stdcall get_RenderSize(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_UseLayoutRounding(bool * value) = 0;
    virtual HRESULT __stdcall put_UseLayoutRounding(bool value) = 0;
    virtual HRESULT __stdcall get_Transitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition> ** value) = 0;
    virtual HRESULT __stdcall put_Transitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition> * value) = 0;
    virtual HRESULT __stdcall get_CacheMode(Windows::UI::Xaml::Media::ICacheMode ** value) = 0;
    virtual HRESULT __stdcall put_CacheMode(Windows::UI::Xaml::Media::ICacheMode * value) = 0;
    virtual HRESULT __stdcall get_IsTapEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsDoubleTapEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDoubleTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsRightTapEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsRightTapEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsHoldingEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsHoldingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ManipulationMode(winrt::Windows::UI::Xaml::Input::ManipulationModes * value) = 0;
    virtual HRESULT __stdcall put_ManipulationMode(winrt::Windows::UI::Xaml::Input::ManipulationModes value) = 0;
    virtual HRESULT __stdcall get_PointerCaptures(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> ** value) = 0;
    virtual HRESULT __stdcall add_KeyUp(Windows::UI::Xaml::Input::KeyEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_KeyUp(event_token token) = 0;
    virtual HRESULT __stdcall add_KeyDown(Windows::UI::Xaml::Input::KeyEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_KeyDown(event_token token) = 0;
    virtual HRESULT __stdcall add_GotFocus(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_GotFocus(event_token token) = 0;
    virtual HRESULT __stdcall add_LostFocus(Windows::UI::Xaml::RoutedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LostFocus(event_token token) = 0;
    virtual HRESULT __stdcall add_DragEnter(Windows::UI::Xaml::DragEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragEnter(event_token token) = 0;
    virtual HRESULT __stdcall add_DragLeave(Windows::UI::Xaml::DragEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragLeave(event_token token) = 0;
    virtual HRESULT __stdcall add_DragOver(Windows::UI::Xaml::DragEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragOver(event_token token) = 0;
    virtual HRESULT __stdcall add_Drop(Windows::UI::Xaml::DragEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Drop(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerPressed(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerMoved(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerMoved(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerReleased(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerReleased(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerEntered(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerEntered(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerExited(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerExited(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerCaptureLost(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerCaptureLost(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerCanceled(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerCanceled(event_token token) = 0;
    virtual HRESULT __stdcall add_PointerWheelChanged(Windows::UI::Xaml::Input::PointerEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PointerWheelChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_Tapped(Windows::UI::Xaml::Input::TappedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Tapped(event_token token) = 0;
    virtual HRESULT __stdcall add_DoubleTapped(Windows::UI::Xaml::Input::DoubleTappedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DoubleTapped(event_token token) = 0;
    virtual HRESULT __stdcall add_Holding(Windows::UI::Xaml::Input::HoldingEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Holding(event_token token) = 0;
    virtual HRESULT __stdcall add_RightTapped(Windows::UI::Xaml::Input::RightTappedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RightTapped(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationStarting(Windows::UI::Xaml::Input::ManipulationStartingEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationInertiaStarting(Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationInertiaStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationStarted(Windows::UI::Xaml::Input::ManipulationStartedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationDelta(Windows::UI::Xaml::Input::ManipulationDeltaEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationDelta(event_token token) = 0;
    virtual HRESULT __stdcall add_ManipulationCompleted(Windows::UI::Xaml::Input::ManipulationCompletedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ManipulationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall abi_Measure(Windows::Foundation::Size availableSize) = 0;
    virtual HRESULT __stdcall abi_Arrange(Windows::Foundation::Rect finalRect) = 0;
    virtual HRESULT __stdcall abi_CapturePointer(Windows::UI::Xaml::Input::IPointer * value, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_ReleasePointerCapture(Windows::UI::Xaml::Input::IPointer * value) = 0;
    virtual HRESULT __stdcall abi_ReleasePointerCaptures() = 0;
    virtual HRESULT __stdcall abi_AddHandler(Windows::UI::Xaml::IRoutedEvent * routedEvent, Windows::IInspectable * handler, bool handledEventsToo) = 0;
    virtual HRESULT __stdcall abi_RemoveHandler(Windows::UI::Xaml::IRoutedEvent * routedEvent, Windows::IInspectable * handler) = 0;
    virtual HRESULT __stdcall abi_TransformToVisual(Windows::UI::Xaml::IUIElement * visual, Windows::UI::Xaml::Media::IGeneralTransform ** returnValue) = 0;
    virtual HRESULT __stdcall abi_InvalidateMeasure() = 0;
    virtual HRESULT __stdcall abi_InvalidateArrange() = 0;
    virtual HRESULT __stdcall abi_UpdateLayout() = 0;
};

struct __declspec(uuid("676d0bf9-b66c-41d6-ba50-58cf87f201d1")) __declspec(novtable) IUIElement2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CompositeMode(winrt::Windows::UI::Xaml::Media::ElementCompositeMode * value) = 0;
    virtual HRESULT __stdcall put_CompositeMode(winrt::Windows::UI::Xaml::Media::ElementCompositeMode value) = 0;
    virtual HRESULT __stdcall abi_CancelDirectManipulations(bool * returnValue) = 0;
};

struct __declspec(uuid("bc2b28f1-26f2-4aab-b256-3b5350881e37")) __declspec(novtable) IUIElement3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Transform3D(Windows::UI::Xaml::Media::Media3D::ITransform3D ** value) = 0;
    virtual HRESULT __stdcall put_Transform3D(Windows::UI::Xaml::Media::Media3D::ITransform3D * value) = 0;
    virtual HRESULT __stdcall get_CanDrag(bool * value) = 0;
    virtual HRESULT __stdcall put_CanDrag(bool value) = 0;
    virtual HRESULT __stdcall add_DragStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DragStarting(event_token token) = 0;
    virtual HRESULT __stdcall add_DropCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DropCompleted(event_token token) = 0;
    virtual HRESULT __stdcall abi_StartDragAsync(Windows::UI::Input::IPointerPoint * pointerPoint, Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> ** returnValue) = 0;
};

struct __declspec(uuid("69145cd4-199a-4657-9e57-e99e8f136712")) __declspec(novtable) IUIElement4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContextFlyout(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase ** value) = 0;
    virtual HRESULT __stdcall put_ContextFlyout(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase * value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool * value) = 0;
    virtual HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScope(bool * value) = 0;
    virtual HRESULT __stdcall put_IsAccessKeyScope(bool value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwner(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_AccessKeyScopeOwner(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_AccessKey(hstring * value) = 0;
    virtual HRESULT __stdcall put_AccessKey(hstring value) = 0;
    virtual HRESULT __stdcall add_ContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ContextRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_ContextCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ContextCanceled(event_token token) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayDismissed(event_token token) = 0;
    virtual HRESULT __stdcall add_AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyInvoked(event_token token) = 0;
};

struct __declspec(uuid("b9ee93fe-a338-419f-ac32-91dcaadf5d08")) __declspec(novtable) IUIElementFactory : Windows::IInspectable
{
};

struct __declspec(uuid("608d2f1d-7858-4aeb-89e4-b54e2c7ed3d3")) __declspec(novtable) IUIElementOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnCreateAutomationPeer(Windows::UI::Xaml::Automation::Peers::IAutomationPeer ** returnValue) = 0;
    virtual HRESULT __stdcall abi_OnDisconnectVisualChildren() = 0;
    virtual HRESULT __stdcall abi_FindSubElementsForTouchTargeting(Windows::Foundation::Point point, Windows::Foundation::Rect boundingRect, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> ** returnValue) = 0;
};

struct __declspec(uuid("58d3573b-f52c-45be-988b-a5869564873c")) __declspec(novtable) IUIElementStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyDownEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_KeyUpEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerEnteredEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerPressedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerMovedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerReleasedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerExitedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerCaptureLostEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerCanceledEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_PointerWheelChangedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_TappedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_DoubleTappedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_HoldingEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_RightTappedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationStartingEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationInertiaStartingEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationStartedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationDeltaEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationCompletedEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_DragEnterEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_DragLeaveEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_DragOverEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_DropEvent(Windows::UI::Xaml::IRoutedEvent ** value) = 0;
    virtual HRESULT __stdcall get_AllowDropProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OpacityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClipProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RenderTransformProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ProjectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RenderTransformOriginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsHitTestVisibleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_VisibilityProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_UseLayoutRoundingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_TransitionsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CacheModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsTapEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsDoubleTapEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsRightTapEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsHoldingEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ManipulationModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointerCapturesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("58d3574b-f53c-45be-989b-a5869564874c")) __declspec(novtable) IUIElementStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CompositeModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("d1f87ade-eca1-4561-a32b-64601b4e0597")) __declspec(novtable) IUIElementStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Transform3DProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CanDragProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_TryStartDirectManipulation(Windows::UI::Xaml::Input::IPointer * value, bool * returnValue) = 0;
};

struct __declspec(uuid("1d157d61-16af-411f-b774-272375a4ac2c")) __declspec(novtable) IUIElementStatics4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContextFlyoutProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScopeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwnerProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("7230269c-054e-4cf3-86c5-be90eb6863d5")) __declspec(novtable) IUnhandledExceptionEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Exception(HRESULT * value) = 0;
    virtual HRESULT __stdcall get_Message(hstring * value) = 0;
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};

struct __declspec(uuid("6320affc-c31a-4450-afde-f6ea7bd1f586")) __declspec(novtable) IVisualState : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard ** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard * value) = 0;
};

struct __declspec(uuid("0fa0f896-64c0-45fb-8d24-fb83298c0d93")) __declspec(novtable) IVisualState2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Setters(Windows::UI::Xaml::ISetterBaseCollection ** value) = 0;
    virtual HRESULT __stdcall get_StateTriggers(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> ** value) = 0;
};

struct __declspec(uuid("fe216ab1-f31f-4791-8989-c70e1d9b59ff")) __declspec(novtable) IVisualStateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldState(Windows::UI::Xaml::IVisualState ** value) = 0;
    virtual HRESULT __stdcall put_OldState(Windows::UI::Xaml::IVisualState * value) = 0;
    virtual HRESULT __stdcall get_NewState(Windows::UI::Xaml::IVisualState ** value) = 0;
    virtual HRESULT __stdcall put_NewState(Windows::UI::Xaml::IVisualState * value) = 0;
    virtual HRESULT __stdcall get_Control(Windows::UI::Xaml::Controls::IControl ** value) = 0;
    virtual HRESULT __stdcall put_Control(Windows::UI::Xaml::Controls::IControl * value) = 0;
};

struct __declspec(uuid("e4f9d9a4-e028-44de-9b15-4929ae0a26c2")) __declspec(novtable) IVisualStateGroup : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Transitions(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> ** value) = 0;
    virtual HRESULT __stdcall get_States(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> ** value) = 0;
    virtual HRESULT __stdcall get_CurrentState(Windows::UI::Xaml::IVisualState ** value) = 0;
    virtual HRESULT __stdcall add_CurrentStateChanged(Windows::UI::Xaml::VisualStateChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CurrentStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_CurrentStateChanging(Windows::UI::Xaml::VisualStateChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CurrentStateChanging(event_token token) = 0;
};

struct __declspec(uuid("6fda9f9a-6fab-4112-9258-1006a3c3476e")) __declspec(novtable) IVisualStateManager : Windows::IInspectable
{
};

struct __declspec(uuid("85e598fd-a575-47b6-9e30-383cd08585f2")) __declspec(novtable) IVisualStateManagerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IVisualStateManager ** instance) = 0;
};

struct __declspec(uuid("4a66910e-7979-43c8-8ff4-ec6122750006")) __declspec(novtable) IVisualStateManagerOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GoToStateCore(Windows::UI::Xaml::Controls::IControl * control, Windows::UI::Xaml::IFrameworkElement * templateRoot, hstring stateName, Windows::UI::Xaml::IVisualStateGroup * group, Windows::UI::Xaml::IVisualState * state, bool useTransitions, bool * returnValue) = 0;
};

struct __declspec(uuid("4b3b8640-b0b7-404c-9ef4-d949640e245d")) __declspec(novtable) IVisualStateManagerProtected : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RaiseCurrentStateChanging(Windows::UI::Xaml::IVisualStateGroup * stateGroup, Windows::UI::Xaml::IVisualState * oldState, Windows::UI::Xaml::IVisualState * newState, Windows::UI::Xaml::Controls::IControl * control) = 0;
    virtual HRESULT __stdcall abi_RaiseCurrentStateChanged(Windows::UI::Xaml::IVisualStateGroup * stateGroup, Windows::UI::Xaml::IVisualState * oldState, Windows::UI::Xaml::IVisualState * newState, Windows::UI::Xaml::Controls::IControl * control) = 0;
};

struct __declspec(uuid("01d0e9e0-d713-414e-a74e-e63ec7ac8c3d")) __declspec(novtable) IVisualStateManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetVisualStateGroups(Windows::UI::Xaml::IFrameworkElement * obj, Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> ** value) = 0;
    virtual HRESULT __stdcall get_CustomVisualStateManagerProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetCustomVisualStateManager(Windows::UI::Xaml::IFrameworkElement * obj, Windows::UI::Xaml::IVisualStateManager ** value) = 0;
    virtual HRESULT __stdcall abi_SetCustomVisualStateManager(Windows::UI::Xaml::IFrameworkElement * obj, Windows::UI::Xaml::IVisualStateManager * value) = 0;
    virtual HRESULT __stdcall abi_GoToState(Windows::UI::Xaml::Controls::IControl * control, hstring stateName, bool useTransitions, bool * returnValue) = 0;
};

struct __declspec(uuid("55c5905e-2bc7-400d-aaa4-1a2981491ee0")) __declspec(novtable) IVisualTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_GeneratedDuration(Windows::UI::Xaml::Duration * value) = 0;
    virtual HRESULT __stdcall put_GeneratedDuration(Windows::UI::Xaml::Duration value) = 0;
    virtual HRESULT __stdcall get_GeneratedEasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_GeneratedEasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
    virtual HRESULT __stdcall get_To(hstring * value) = 0;
    virtual HRESULT __stdcall put_To(hstring value) = 0;
    virtual HRESULT __stdcall get_From(hstring * value) = 0;
    virtual HRESULT __stdcall put_From(hstring value) = 0;
    virtual HRESULT __stdcall get_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard ** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard * value) = 0;
};

struct __declspec(uuid("ea75864f-d1e0-4dae-b429-89fc322724f4")) __declspec(novtable) IVisualTransitionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::IVisualTransition ** instance) = 0;
};

struct __declspec(uuid("3276167d-c9f6-462d-9de2-ae4c1fd8c2e5")) __declspec(novtable) IWindow : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bounds(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
    virtual HRESULT __stdcall get_Content(Windows::UI::Xaml::IUIElement ** value) = 0;
    virtual HRESULT __stdcall put_Content(Windows::UI::Xaml::IUIElement * value) = 0;
    virtual HRESULT __stdcall get_CoreWindow(Windows::UI::Core::ICoreWindow ** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(Windows::UI::Core::ICoreDispatcher ** value) = 0;
    virtual HRESULT __stdcall add_Activated(Windows::UI::Xaml::WindowActivatedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Activated(event_token token) = 0;
    virtual HRESULT __stdcall add_Closed(Windows::UI::Xaml::WindowClosedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closed(event_token token) = 0;
    virtual HRESULT __stdcall add_SizeChanged(Windows::UI::Xaml::WindowSizeChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_VisibilityChanged(Windows::UI::Xaml::WindowVisibilityChangedEventHandler * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_Activate() = 0;
    virtual HRESULT __stdcall abi_Close() = 0;
};

struct __declspec(uuid("d384759f-34f6-4482-8435-f552f9b24cc8")) __declspec(novtable) IWindow2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetTitleBar(Windows::UI::Xaml::IUIElement * value) = 0;
};

struct __declspec(uuid("31b71470-feff-4654-af48-9b398ab5772b")) __declspec(novtable) IWindowCreatedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Window(Windows::UI::Xaml::IWindow ** value) = 0;
};

struct __declspec(uuid("93328409-4ea1-4afa-83dc-0c4e73e88bb1")) __declspec(novtable) IWindowStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::UI::Xaml::IWindow ** value) = 0;
};

struct __declspec(uuid("aaad5dad-4fc6-4aa4-b7cf-877e36ada4f6")) __declspec(novtable) LeavingBackgroundEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::ApplicationModel::ILeavingBackgroundEventArgs * e) = 0;
};

struct __declspec(uuid("5a9f8a25-d142-44a4-8231-fd676724f29b")) __declspec(novtable) PropertyChangedCallback : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::Xaml::IDependencyObject * d, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs * e) = 0;
};

struct __declspec(uuid("a856e674-b0b6-4bc3-bba8-1ba06e40d4b5")) __declspec(novtable) RoutedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IRoutedEventArgs * e) = 0;
};

struct __declspec(uuid("1115b13c-25d2-480b-89dc-eb3dcbd6b7fa")) __declspec(novtable) SizeChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::ISizeChangedEventArgs * e) = 0;
};

struct __declspec(uuid("23429465-e36a-40e2-b139-a4704602a6e1")) __declspec(novtable) SuspendingEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::ApplicationModel::ISuspendingEventArgs * e) = 0;
};

struct __declspec(uuid("9274e6bd-49a1-4958-beee-d0e19587b6e3")) __declspec(novtable) UnhandledExceptionEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IUnhandledExceptionEventArgs * e) = 0;
};

struct __declspec(uuid("e6d5bbd5-e029-43a6-b36d-84a81042d774")) __declspec(novtable) VisualStateChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Xaml::IVisualStateChangedEventArgs * e) = 0;
};

struct __declspec(uuid("18026348-8619-4c7b-b534-ced45d9de219")) __declspec(novtable) WindowActivatedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Core::IWindowActivatedEventArgs * e) = 0;
};

struct __declspec(uuid("0db89161-20d7-45df-9122-ba89576703ba")) __declspec(novtable) WindowClosedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Core::ICoreWindowEventArgs * e) = 0;
};

struct __declspec(uuid("5c21c742-2ced-4fd9-ba38-7118d40e966b")) __declspec(novtable) WindowSizeChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Core::IWindowSizeChangedEventArgs * e) = 0;
};

struct __declspec(uuid("10406ad6-b090-4a4a-b2ad-d682df27130f")) __declspec(novtable) WindowVisibilityChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender, Windows::UI::Core::IVisibilityChangedEventArgs * e) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::AdaptiveTrigger> { using default_interface = Windows::UI::Xaml::IAdaptiveTrigger; };
template <> struct traits<Windows::UI::Xaml::Application> { using default_interface = Windows::UI::Xaml::IApplication; };
template <> struct traits<Windows::UI::Xaml::ApplicationInitializationCallbackParams> { using default_interface = Windows::UI::Xaml::IApplicationInitializationCallbackParams; };
template <> struct traits<Windows::UI::Xaml::BindingFailedEventArgs> { using default_interface = Windows::UI::Xaml::IBindingFailedEventArgs; };
template <> struct traits<Windows::UI::Xaml::CornerRadiusHelper> { using default_interface = Windows::UI::Xaml::ICornerRadiusHelper; };
template <> struct traits<Windows::UI::Xaml::DataContextChangedEventArgs> { using default_interface = Windows::UI::Xaml::IDataContextChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::DataTemplate> { using default_interface = Windows::UI::Xaml::IDataTemplate; };
template <> struct traits<Windows::UI::Xaml::DataTemplateKey> { using default_interface = Windows::UI::Xaml::IDataTemplateKey; };
template <> struct traits<Windows::UI::Xaml::DebugSettings> { using default_interface = Windows::UI::Xaml::IDebugSettings; };
template <> struct traits<Windows::UI::Xaml::DependencyObject> { using default_interface = Windows::UI::Xaml::IDependencyObject; };
template <> struct traits<Windows::UI::Xaml::DependencyObjectCollection> { using default_interface = Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>; };
template <> struct traits<Windows::UI::Xaml::DependencyProperty> { using default_interface = Windows::UI::Xaml::IDependencyProperty; };
template <> struct traits<Windows::UI::Xaml::DependencyPropertyChangedEventArgs> { using default_interface = Windows::UI::Xaml::IDependencyPropertyChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::DispatcherTimer> { using default_interface = Windows::UI::Xaml::IDispatcherTimer; };
template <> struct traits<Windows::UI::Xaml::DragEventArgs> { using default_interface = Windows::UI::Xaml::IDragEventArgs; };
template <> struct traits<Windows::UI::Xaml::DragOperationDeferral> { using default_interface = Windows::UI::Xaml::IDragOperationDeferral; };
template <> struct traits<Windows::UI::Xaml::DragStartingEventArgs> { using default_interface = Windows::UI::Xaml::IDragStartingEventArgs; };
template <> struct traits<Windows::UI::Xaml::DragUI> { using default_interface = Windows::UI::Xaml::IDragUI; };
template <> struct traits<Windows::UI::Xaml::DragUIOverride> { using default_interface = Windows::UI::Xaml::IDragUIOverride; };
template <> struct traits<Windows::UI::Xaml::DropCompletedEventArgs> { using default_interface = Windows::UI::Xaml::IDropCompletedEventArgs; };
template <> struct traits<Windows::UI::Xaml::DurationHelper> { using default_interface = Windows::UI::Xaml::IDurationHelper; };
template <> struct traits<Windows::UI::Xaml::ElementSoundPlayer> { using default_interface = Windows::UI::Xaml::IElementSoundPlayer; };
template <> struct traits<Windows::UI::Xaml::EventTrigger> { using default_interface = Windows::UI::Xaml::IEventTrigger; };
template <> struct traits<Windows::UI::Xaml::ExceptionRoutedEventArgs> { using default_interface = Windows::UI::Xaml::IExceptionRoutedEventArgs; };
template <> struct traits<Windows::UI::Xaml::FrameworkElement> { using default_interface = Windows::UI::Xaml::IFrameworkElement; };
template <> struct traits<Windows::UI::Xaml::FrameworkTemplate> { using default_interface = Windows::UI::Xaml::IFrameworkTemplate; };
template <> struct traits<Windows::UI::Xaml::FrameworkView> { using default_interface = Windows::UI::Xaml::IFrameworkView; };
template <> struct traits<Windows::UI::Xaml::FrameworkViewSource> { using default_interface = Windows::UI::Xaml::IFrameworkViewSource; };
template <> struct traits<Windows::UI::Xaml::GridLengthHelper> { using default_interface = Windows::UI::Xaml::IGridLengthHelper; };
template <> struct traits<Windows::UI::Xaml::MediaFailedRoutedEventArgs> { using default_interface = Windows::UI::Xaml::IMediaFailedRoutedEventArgs; };
template <> struct traits<Windows::UI::Xaml::PointHelper> { using default_interface = Windows::UI::Xaml::IPointHelper; };
template <> struct traits<Windows::UI::Xaml::PropertyMetadata> { using default_interface = Windows::UI::Xaml::IPropertyMetadata; };
template <> struct traits<Windows::UI::Xaml::PropertyPath> { using default_interface = Windows::UI::Xaml::IPropertyPath; };
template <> struct traits<Windows::UI::Xaml::RectHelper> { using default_interface = Windows::UI::Xaml::IRectHelper; };
template <> struct traits<Windows::UI::Xaml::ResourceDictionary> { using default_interface = Windows::UI::Xaml::IResourceDictionary; };
template <> struct traits<Windows::UI::Xaml::RoutedEvent> { using default_interface = Windows::UI::Xaml::IRoutedEvent; };
template <> struct traits<Windows::UI::Xaml::RoutedEventArgs> { using default_interface = Windows::UI::Xaml::IRoutedEventArgs; };
template <> struct traits<Windows::UI::Xaml::Setter> { using default_interface = Windows::UI::Xaml::ISetter; };
template <> struct traits<Windows::UI::Xaml::SetterBase> { using default_interface = Windows::UI::Xaml::ISetterBase; };
template <> struct traits<Windows::UI::Xaml::SetterBaseCollection> { using default_interface = Windows::UI::Xaml::ISetterBaseCollection; };
template <> struct traits<Windows::UI::Xaml::SizeChangedEventArgs> { using default_interface = Windows::UI::Xaml::ISizeChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::SizeHelper> { using default_interface = Windows::UI::Xaml::ISizeHelper; };
template <> struct traits<Windows::UI::Xaml::StateTrigger> { using default_interface = Windows::UI::Xaml::IStateTrigger; };
template <> struct traits<Windows::UI::Xaml::StateTriggerBase> { using default_interface = Windows::UI::Xaml::IStateTriggerBase; };
template <> struct traits<Windows::UI::Xaml::Style> { using default_interface = Windows::UI::Xaml::IStyle; };
template <> struct traits<Windows::UI::Xaml::TargetPropertyPath> { using default_interface = Windows::UI::Xaml::ITargetPropertyPath; };
template <> struct traits<Windows::UI::Xaml::ThicknessHelper> { using default_interface = Windows::UI::Xaml::IThicknessHelper; };
template <> struct traits<Windows::UI::Xaml::TriggerAction> { using default_interface = Windows::UI::Xaml::ITriggerAction; };
template <> struct traits<Windows::UI::Xaml::TriggerActionCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>; };
template <> struct traits<Windows::UI::Xaml::TriggerBase> { using default_interface = Windows::UI::Xaml::ITriggerBase; };
template <> struct traits<Windows::UI::Xaml::TriggerCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>; };
template <> struct traits<Windows::UI::Xaml::UIElement> { using default_interface = Windows::UI::Xaml::IUIElement; };
template <> struct traits<Windows::UI::Xaml::UnhandledExceptionEventArgs> { using default_interface = Windows::UI::Xaml::IUnhandledExceptionEventArgs; };
template <> struct traits<Windows::UI::Xaml::VisualState> { using default_interface = Windows::UI::Xaml::IVisualState; };
template <> struct traits<Windows::UI::Xaml::VisualStateChangedEventArgs> { using default_interface = Windows::UI::Xaml::IVisualStateChangedEventArgs; };
template <> struct traits<Windows::UI::Xaml::VisualStateGroup> { using default_interface = Windows::UI::Xaml::IVisualStateGroup; };
template <> struct traits<Windows::UI::Xaml::VisualStateManager> { using default_interface = Windows::UI::Xaml::IVisualStateManager; };
template <> struct traits<Windows::UI::Xaml::VisualTransition> { using default_interface = Windows::UI::Xaml::IVisualTransition; };
template <> struct traits<Windows::UI::Xaml::Window> { using default_interface = Windows::UI::Xaml::IWindow; };
template <> struct traits<Windows::UI::Xaml::WindowCreatedEventArgs> { using default_interface = Windows::UI::Xaml::IWindowCreatedEventArgs; };

}

namespace Windows::UI::Xaml {

template <typename T> struct impl_IAdaptiveTrigger;
template <typename T> struct impl_IAdaptiveTriggerFactory;
template <typename T> struct impl_IAdaptiveTriggerStatics;
template <typename T> struct impl_IApplication;
template <typename T> struct impl_IApplication2;
template <typename T> struct impl_IApplicationFactory;
template <typename T> struct impl_IApplicationInitializationCallbackParams;
template <typename T> struct impl_IApplicationOverrides;
template <typename T> struct impl_IApplicationOverrides2;
template <typename T> struct impl_IApplicationStatics;
template <typename T> struct impl_IBindingFailedEventArgs;
template <typename T> struct impl_ICornerRadiusHelper;
template <typename T> struct impl_ICornerRadiusHelperStatics;
template <typename T> struct impl_IDataContextChangedEventArgs;
template <typename T> struct impl_IDataTemplate;
template <typename T> struct impl_IDataTemplateExtension;
template <typename T> struct impl_IDataTemplateFactory;
template <typename T> struct impl_IDataTemplateKey;
template <typename T> struct impl_IDataTemplateKeyFactory;
template <typename T> struct impl_IDataTemplateStatics2;
template <typename T> struct impl_IDebugSettings;
template <typename T> struct impl_IDebugSettings2;
template <typename T> struct impl_IDebugSettings3;
template <typename T> struct impl_IDependencyObject;
template <typename T> struct impl_IDependencyObject2;
template <typename T> struct impl_IDependencyObjectCollectionFactory;
template <typename T> struct impl_IDependencyObjectFactory;
template <typename T> struct impl_IDependencyProperty;
template <typename T> struct impl_IDependencyPropertyChangedEventArgs;
template <typename T> struct impl_IDependencyPropertyStatics;
template <typename T> struct impl_IDispatcherTimer;
template <typename T> struct impl_IDispatcherTimerFactory;
template <typename T> struct impl_IDragEventArgs;
template <typename T> struct impl_IDragEventArgs2;
template <typename T> struct impl_IDragEventArgs3;
template <typename T> struct impl_IDragOperationDeferral;
template <typename T> struct impl_IDragStartingEventArgs;
template <typename T> struct impl_IDragStartingEventArgs2;
template <typename T> struct impl_IDragUI;
template <typename T> struct impl_IDragUIOverride;
template <typename T> struct impl_IDropCompletedEventArgs;
template <typename T> struct impl_IDurationHelper;
template <typename T> struct impl_IDurationHelperStatics;
template <typename T> struct impl_IElementSoundPlayer;
template <typename T> struct impl_IElementSoundPlayerStatics;
template <typename T> struct impl_IEventTrigger;
template <typename T> struct impl_IExceptionRoutedEventArgs;
template <typename T> struct impl_IExceptionRoutedEventArgsFactory;
template <typename T> struct impl_IFrameworkElement;
template <typename T> struct impl_IFrameworkElement2;
template <typename T> struct impl_IFrameworkElement3;
template <typename T> struct impl_IFrameworkElement4;
template <typename T> struct impl_IFrameworkElementFactory;
template <typename T> struct impl_IFrameworkElementOverrides;
template <typename T> struct impl_IFrameworkElementOverrides2;
template <typename T> struct impl_IFrameworkElementStatics;
template <typename T> struct impl_IFrameworkElementStatics2;
template <typename T> struct impl_IFrameworkElementStatics4;
template <typename T> struct impl_IFrameworkTemplate;
template <typename T> struct impl_IFrameworkTemplateFactory;
template <typename T> struct impl_IFrameworkView;
template <typename T> struct impl_IFrameworkViewSource;
template <typename T> struct impl_IGridLengthHelper;
template <typename T> struct impl_IGridLengthHelperStatics;
template <typename T> struct impl_IMediaFailedRoutedEventArgs;
template <typename T> struct impl_IPointHelper;
template <typename T> struct impl_IPointHelperStatics;
template <typename T> struct impl_IPropertyMetadata;
template <typename T> struct impl_IPropertyMetadataFactory;
template <typename T> struct impl_IPropertyMetadataStatics;
template <typename T> struct impl_IPropertyPath;
template <typename T> struct impl_IPropertyPathFactory;
template <typename T> struct impl_IRectHelper;
template <typename T> struct impl_IRectHelperStatics;
template <typename T> struct impl_IResourceDictionary;
template <typename T> struct impl_IResourceDictionaryFactory;
template <typename T> struct impl_IRoutedEvent;
template <typename T> struct impl_IRoutedEventArgs;
template <typename T> struct impl_IRoutedEventArgsFactory;
template <typename T> struct impl_ISetter;
template <typename T> struct impl_ISetter2;
template <typename T> struct impl_ISetterBase;
template <typename T> struct impl_ISetterBaseCollection;
template <typename T> struct impl_ISetterBaseFactory;
template <typename T> struct impl_ISetterFactory;
template <typename T> struct impl_ISizeChangedEventArgs;
template <typename T> struct impl_ISizeHelper;
template <typename T> struct impl_ISizeHelperStatics;
template <typename T> struct impl_IStateTrigger;
template <typename T> struct impl_IStateTriggerBase;
template <typename T> struct impl_IStateTriggerBaseFactory;
template <typename T> struct impl_IStateTriggerBaseProtected;
template <typename T> struct impl_IStateTriggerStatics;
template <typename T> struct impl_IStyle;
template <typename T> struct impl_IStyleFactory;
template <typename T> struct impl_ITargetPropertyPath;
template <typename T> struct impl_ITargetPropertyPathFactory;
template <typename T> struct impl_IThicknessHelper;
template <typename T> struct impl_IThicknessHelperStatics;
template <typename T> struct impl_ITriggerAction;
template <typename T> struct impl_ITriggerActionFactory;
template <typename T> struct impl_ITriggerBase;
template <typename T> struct impl_ITriggerBaseFactory;
template <typename T> struct impl_IUIElement;
template <typename T> struct impl_IUIElement2;
template <typename T> struct impl_IUIElement3;
template <typename T> struct impl_IUIElement4;
template <typename T> struct impl_IUIElementFactory;
template <typename T> struct impl_IUIElementOverrides;
template <typename T> struct impl_IUIElementStatics;
template <typename T> struct impl_IUIElementStatics2;
template <typename T> struct impl_IUIElementStatics3;
template <typename T> struct impl_IUIElementStatics4;
template <typename T> struct impl_IUnhandledExceptionEventArgs;
template <typename T> struct impl_IVisualState;
template <typename T> struct impl_IVisualState2;
template <typename T> struct impl_IVisualStateChangedEventArgs;
template <typename T> struct impl_IVisualStateGroup;
template <typename T> struct impl_IVisualStateManager;
template <typename T> struct impl_IVisualStateManagerFactory;
template <typename T> struct impl_IVisualStateManagerOverrides;
template <typename T> struct impl_IVisualStateManagerProtected;
template <typename T> struct impl_IVisualStateManagerStatics;
template <typename T> struct impl_IVisualTransition;
template <typename T> struct impl_IVisualTransitionFactory;
template <typename T> struct impl_IWindow;
template <typename T> struct impl_IWindow2;
template <typename T> struct impl_IWindowCreatedEventArgs;
template <typename T> struct impl_IWindowStatics;
template <typename T> struct impl_ApplicationInitializationCallback;
template <typename T> struct impl_BindingFailedEventHandler;
template <typename T> struct impl_CreateDefaultValueCallback;
template <typename T> struct impl_DependencyPropertyChangedCallback;
template <typename T> struct impl_DependencyPropertyChangedEventHandler;
template <typename T> struct impl_DragEventHandler;
template <typename T> struct impl_EnteredBackgroundEventHandler;
template <typename T> struct impl_ExceptionRoutedEventHandler;
template <typename T> struct impl_LeavingBackgroundEventHandler;
template <typename T> struct impl_PropertyChangedCallback;
template <typename T> struct impl_RoutedEventHandler;
template <typename T> struct impl_SizeChangedEventHandler;
template <typename T> struct impl_SuspendingEventHandler;
template <typename T> struct impl_UnhandledExceptionEventHandler;
template <typename T> struct impl_VisualStateChangedEventHandler;
template <typename T> struct impl_WindowActivatedEventHandler;
template <typename T> struct impl_WindowClosedEventHandler;
template <typename T> struct impl_WindowSizeChangedEventHandler;
template <typename T> struct impl_WindowVisibilityChangedEventHandler;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::ApplicationInitializationCallback>
{
    using abi = ABI::Windows::UI::Xaml::ApplicationInitializationCallback;
};

template <> struct traits<Windows::UI::Xaml::BindingFailedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::BindingFailedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::CreateDefaultValueCallback>
{
    using abi = ABI::Windows::UI::Xaml::CreateDefaultValueCallback;
};

template <> struct traits<Windows::UI::Xaml::DependencyPropertyChangedCallback>
{
    using abi = ABI::Windows::UI::Xaml::DependencyPropertyChangedCallback;
};

template <> struct traits<Windows::UI::Xaml::DependencyPropertyChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::DependencyPropertyChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::DragEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::DragEventHandler;
};

template <> struct traits<Windows::UI::Xaml::EnteredBackgroundEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::EnteredBackgroundEventHandler;
};

template <> struct traits<Windows::UI::Xaml::ExceptionRoutedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::ExceptionRoutedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::IAdaptiveTrigger>
{
    using abi = ABI::Windows::UI::Xaml::IAdaptiveTrigger;
    template <typename D> using consume = Windows::UI::Xaml::impl_IAdaptiveTrigger<D>;
};

template <> struct traits<Windows::UI::Xaml::IAdaptiveTriggerFactory>
{
    using abi = ABI::Windows::UI::Xaml::IAdaptiveTriggerFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IAdaptiveTriggerFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IAdaptiveTriggerStatics>
{
    using abi = ABI::Windows::UI::Xaml::IAdaptiveTriggerStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IAdaptiveTriggerStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplication>
{
    using abi = ABI::Windows::UI::Xaml::IApplication;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplication<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplication2>
{
    using abi = ABI::Windows::UI::Xaml::IApplication2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplication2<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplicationFactory>
{
    using abi = ABI::Windows::UI::Xaml::IApplicationFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplicationFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplicationInitializationCallbackParams>
{
    using abi = ABI::Windows::UI::Xaml::IApplicationInitializationCallbackParams;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplicationInitializationCallbackParams<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplicationOverrides>
{
    using abi = ABI::Windows::UI::Xaml::IApplicationOverrides;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplicationOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplicationOverrides2>
{
    using abi = ABI::Windows::UI::Xaml::IApplicationOverrides2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplicationOverrides2<D>;
};

template <> struct traits<Windows::UI::Xaml::IApplicationStatics>
{
    using abi = ABI::Windows::UI::Xaml::IApplicationStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IApplicationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IBindingFailedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IBindingFailedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IBindingFailedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::ICornerRadiusHelper>
{
    using abi = ABI::Windows::UI::Xaml::ICornerRadiusHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_ICornerRadiusHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::ICornerRadiusHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::ICornerRadiusHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_ICornerRadiusHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataContextChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IDataContextChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataContextChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplate>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplate;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplate<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplateExtension>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplateExtension;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplateExtension<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplateFactory>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplateFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplateFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplateKey>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplateKey;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplateKey<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplateKeyFactory>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplateKeyFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplateKeyFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IDataTemplateStatics2>
{
    using abi = ABI::Windows::UI::Xaml::IDataTemplateStatics2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDataTemplateStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::IDebugSettings>
{
    using abi = ABI::Windows::UI::Xaml::IDebugSettings;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDebugSettings<D>;
};

template <> struct traits<Windows::UI::Xaml::IDebugSettings2>
{
    using abi = ABI::Windows::UI::Xaml::IDebugSettings2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDebugSettings2<D>;
};

template <> struct traits<Windows::UI::Xaml::IDebugSettings3>
{
    using abi = ABI::Windows::UI::Xaml::IDebugSettings3;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDebugSettings3<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyObject>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyObject;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyObject<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyObject2>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyObject2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyObject2<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyObjectCollectionFactory>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyObjectCollectionFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyObjectCollectionFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyObjectFactory>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyObjectFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyObjectFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyProperty>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyProperty;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyProperty<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyPropertyChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyPropertyChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IDependencyPropertyStatics>
{
    using abi = ABI::Windows::UI::Xaml::IDependencyPropertyStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDependencyPropertyStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IDispatcherTimer>
{
    using abi = ABI::Windows::UI::Xaml::IDispatcherTimer;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDispatcherTimer<D>;
};

template <> struct traits<Windows::UI::Xaml::IDispatcherTimerFactory>
{
    using abi = ABI::Windows::UI::Xaml::IDispatcherTimerFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDispatcherTimerFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IDragEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragEventArgs2>
{
    using abi = ABI::Windows::UI::Xaml::IDragEventArgs2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragEventArgs2<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragEventArgs3>
{
    using abi = ABI::Windows::UI::Xaml::IDragEventArgs3;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragEventArgs3<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragOperationDeferral>
{
    using abi = ABI::Windows::UI::Xaml::IDragOperationDeferral;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragOperationDeferral<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragStartingEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IDragStartingEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragStartingEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragStartingEventArgs2>
{
    using abi = ABI::Windows::UI::Xaml::IDragStartingEventArgs2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragStartingEventArgs2<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragUI>
{
    using abi = ABI::Windows::UI::Xaml::IDragUI;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragUI<D>;
};

template <> struct traits<Windows::UI::Xaml::IDragUIOverride>
{
    using abi = ABI::Windows::UI::Xaml::IDragUIOverride;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDragUIOverride<D>;
};

template <> struct traits<Windows::UI::Xaml::IDropCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IDropCompletedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDropCompletedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IDurationHelper>
{
    using abi = ABI::Windows::UI::Xaml::IDurationHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDurationHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::IDurationHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::IDurationHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IDurationHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IElementSoundPlayer>
{
    using abi = ABI::Windows::UI::Xaml::IElementSoundPlayer;
    template <typename D> using consume = Windows::UI::Xaml::impl_IElementSoundPlayer<D>;
};

template <> struct traits<Windows::UI::Xaml::IElementSoundPlayerStatics>
{
    using abi = ABI::Windows::UI::Xaml::IElementSoundPlayerStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IElementSoundPlayerStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IEventTrigger>
{
    using abi = ABI::Windows::UI::Xaml::IEventTrigger;
    template <typename D> using consume = Windows::UI::Xaml::impl_IEventTrigger<D>;
};

template <> struct traits<Windows::UI::Xaml::IExceptionRoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IExceptionRoutedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IExceptionRoutedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
{
    using abi = ABI::Windows::UI::Xaml::IExceptionRoutedEventArgsFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IExceptionRoutedEventArgsFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElement>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElement;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElement<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElement2>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElement2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElement2<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElement3>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElement3;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElement3<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElement4>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElement4;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElement4<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementFactory>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementOverrides>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementOverrides;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementOverrides2>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementOverrides2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementOverrides2<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementStatics>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementStatics2>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementStatics2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkElementStatics4>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkElementStatics4;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkElementStatics4<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkTemplate>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkTemplate;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkTemplate<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkTemplateFactory>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkTemplateFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkTemplateFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkView>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkView;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkView<D>;
};

template <> struct traits<Windows::UI::Xaml::IFrameworkViewSource>
{
    using abi = ABI::Windows::UI::Xaml::IFrameworkViewSource;
    template <typename D> using consume = Windows::UI::Xaml::impl_IFrameworkViewSource<D>;
};

template <> struct traits<Windows::UI::Xaml::IGridLengthHelper>
{
    using abi = ABI::Windows::UI::Xaml::IGridLengthHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_IGridLengthHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::IGridLengthHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::IGridLengthHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IGridLengthHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IMediaFailedRoutedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IMediaFailedRoutedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IPointHelper>
{
    using abi = ABI::Windows::UI::Xaml::IPointHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPointHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::IPointHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::IPointHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPointHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IPropertyMetadata>
{
    using abi = ABI::Windows::UI::Xaml::IPropertyMetadata;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPropertyMetadata<D>;
};

template <> struct traits<Windows::UI::Xaml::IPropertyMetadataFactory>
{
    using abi = ABI::Windows::UI::Xaml::IPropertyMetadataFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPropertyMetadataFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IPropertyMetadataStatics>
{
    using abi = ABI::Windows::UI::Xaml::IPropertyMetadataStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPropertyMetadataStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IPropertyPath>
{
    using abi = ABI::Windows::UI::Xaml::IPropertyPath;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPropertyPath<D>;
};

template <> struct traits<Windows::UI::Xaml::IPropertyPathFactory>
{
    using abi = ABI::Windows::UI::Xaml::IPropertyPathFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IPropertyPathFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IRectHelper>
{
    using abi = ABI::Windows::UI::Xaml::IRectHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_IRectHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::IRectHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::IRectHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IRectHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IResourceDictionary>
{
    using abi = ABI::Windows::UI::Xaml::IResourceDictionary;
    template <typename D> using consume = Windows::UI::Xaml::impl_IResourceDictionary<D>;
};

template <> struct traits<Windows::UI::Xaml::IResourceDictionaryFactory>
{
    using abi = ABI::Windows::UI::Xaml::IResourceDictionaryFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IResourceDictionaryFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IRoutedEvent>
{
    using abi = ABI::Windows::UI::Xaml::IRoutedEvent;
    template <typename D> using consume = Windows::UI::Xaml::impl_IRoutedEvent<D>;
};

template <> struct traits<Windows::UI::Xaml::IRoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IRoutedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IRoutedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IRoutedEventArgsFactory>
{
    using abi = ABI::Windows::UI::Xaml::IRoutedEventArgsFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IRoutedEventArgsFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetter>
{
    using abi = ABI::Windows::UI::Xaml::ISetter;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetter<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetter2>
{
    using abi = ABI::Windows::UI::Xaml::ISetter2;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetter2<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetterBase>
{
    using abi = ABI::Windows::UI::Xaml::ISetterBase;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetterBase<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetterBaseCollection>
{
    using abi = ABI::Windows::UI::Xaml::ISetterBaseCollection;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetterBaseCollection<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetterBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::ISetterBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetterBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::ISetterFactory>
{
    using abi = ABI::Windows::UI::Xaml::ISetterFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISetterFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::ISizeChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::ISizeChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISizeChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::ISizeHelper>
{
    using abi = ABI::Windows::UI::Xaml::ISizeHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISizeHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::ISizeHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::ISizeHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_ISizeHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IStateTrigger>
{
    using abi = ABI::Windows::UI::Xaml::IStateTrigger;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStateTrigger<D>;
};

template <> struct traits<Windows::UI::Xaml::IStateTriggerBase>
{
    using abi = ABI::Windows::UI::Xaml::IStateTriggerBase;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStateTriggerBase<D>;
};

template <> struct traits<Windows::UI::Xaml::IStateTriggerBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::IStateTriggerBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStateTriggerBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    using abi = ABI::Windows::UI::Xaml::IStateTriggerBaseProtected;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStateTriggerBaseProtected<D>;
};

template <> struct traits<Windows::UI::Xaml::IStateTriggerStatics>
{
    using abi = ABI::Windows::UI::Xaml::IStateTriggerStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStateTriggerStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IStyle>
{
    using abi = ABI::Windows::UI::Xaml::IStyle;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStyle<D>;
};

template <> struct traits<Windows::UI::Xaml::IStyleFactory>
{
    using abi = ABI::Windows::UI::Xaml::IStyleFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IStyleFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::ITargetPropertyPath>
{
    using abi = ABI::Windows::UI::Xaml::ITargetPropertyPath;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITargetPropertyPath<D>;
};

template <> struct traits<Windows::UI::Xaml::ITargetPropertyPathFactory>
{
    using abi = ABI::Windows::UI::Xaml::ITargetPropertyPathFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITargetPropertyPathFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IThicknessHelper>
{
    using abi = ABI::Windows::UI::Xaml::IThicknessHelper;
    template <typename D> using consume = Windows::UI::Xaml::impl_IThicknessHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::IThicknessHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::IThicknessHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IThicknessHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::ITriggerAction>
{
    using abi = ABI::Windows::UI::Xaml::ITriggerAction;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITriggerAction<D>;
};

template <> struct traits<Windows::UI::Xaml::ITriggerActionFactory>
{
    using abi = ABI::Windows::UI::Xaml::ITriggerActionFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITriggerActionFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::ITriggerBase>
{
    using abi = ABI::Windows::UI::Xaml::ITriggerBase;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITriggerBase<D>;
};

template <> struct traits<Windows::UI::Xaml::ITriggerBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::ITriggerBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_ITriggerBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElement>
{
    using abi = ABI::Windows::UI::Xaml::IUIElement;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElement<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElement2>
{
    using abi = ABI::Windows::UI::Xaml::IUIElement2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElement2<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElement3>
{
    using abi = ABI::Windows::UI::Xaml::IUIElement3;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElement3<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElement4>
{
    using abi = ABI::Windows::UI::Xaml::IUIElement4;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElement4<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementFactory>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementOverrides>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementOverrides;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementStatics>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementStatics2>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementStatics2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementStatics3>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementStatics3;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementStatics3<D>;
};

template <> struct traits<Windows::UI::Xaml::IUIElementStatics4>
{
    using abi = ABI::Windows::UI::Xaml::IUIElementStatics4;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUIElementStatics4<D>;
};

template <> struct traits<Windows::UI::Xaml::IUnhandledExceptionEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IUnhandledExceptionEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IUnhandledExceptionEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualState>
{
    using abi = ABI::Windows::UI::Xaml::IVisualState;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualState<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualState2>
{
    using abi = ABI::Windows::UI::Xaml::IVisualState2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualState2<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateChangedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateGroup>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateGroup;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateGroup<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateManager>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateManager;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateManager<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateManagerFactory>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateManagerFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateManagerFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateManagerOverrides>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateManagerOverrides;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateManagerOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateManagerProtected>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateManagerProtected;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateManagerProtected<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualStateManagerStatics>
{
    using abi = ABI::Windows::UI::Xaml::IVisualStateManagerStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualStateManagerStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualTransition>
{
    using abi = ABI::Windows::UI::Xaml::IVisualTransition;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::IVisualTransitionFactory>
{
    using abi = ABI::Windows::UI::Xaml::IVisualTransitionFactory;
    template <typename D> using consume = Windows::UI::Xaml::impl_IVisualTransitionFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::IWindow>
{
    using abi = ABI::Windows::UI::Xaml::IWindow;
    template <typename D> using consume = Windows::UI::Xaml::impl_IWindow<D>;
};

template <> struct traits<Windows::UI::Xaml::IWindow2>
{
    using abi = ABI::Windows::UI::Xaml::IWindow2;
    template <typename D> using consume = Windows::UI::Xaml::impl_IWindow2<D>;
};

template <> struct traits<Windows::UI::Xaml::IWindowCreatedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::IWindowCreatedEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::impl_IWindowCreatedEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::IWindowStatics>
{
    using abi = ABI::Windows::UI::Xaml::IWindowStatics;
    template <typename D> using consume = Windows::UI::Xaml::impl_IWindowStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::LeavingBackgroundEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::LeavingBackgroundEventHandler;
};

template <> struct traits<Windows::UI::Xaml::PropertyChangedCallback>
{
    using abi = ABI::Windows::UI::Xaml::PropertyChangedCallback;
};

template <> struct traits<Windows::UI::Xaml::RoutedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::RoutedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::SizeChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::SizeChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::SuspendingEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::SuspendingEventHandler;
};

template <> struct traits<Windows::UI::Xaml::UnhandledExceptionEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::UnhandledExceptionEventHandler;
};

template <> struct traits<Windows::UI::Xaml::VisualStateChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::VisualStateChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::WindowActivatedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::WindowActivatedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::WindowClosedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::WindowClosedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::WindowSizeChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::WindowSizeChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::WindowVisibilityChangedEventHandler>
{
    using abi = ABI::Windows::UI::Xaml::WindowVisibilityChangedEventHandler;
};

template <> struct traits<Windows::UI::Xaml::AdaptiveTrigger>
{
    using abi = ABI::Windows::UI::Xaml::AdaptiveTrigger;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.AdaptiveTrigger"; }
};

template <> struct traits<Windows::UI::Xaml::Application>
{
    using abi = ABI::Windows::UI::Xaml::Application;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Application"; }
};

template <> struct traits<Windows::UI::Xaml::ApplicationInitializationCallbackParams>
{
    using abi = ABI::Windows::UI::Xaml::ApplicationInitializationCallbackParams;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.ApplicationInitializationCallbackParams"; }
};

template <> struct traits<Windows::UI::Xaml::BindingFailedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::BindingFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.BindingFailedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::CornerRadiusHelper>
{
    using abi = ABI::Windows::UI::Xaml::CornerRadiusHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.CornerRadiusHelper"; }
};

template <> struct traits<Windows::UI::Xaml::DataContextChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::DataContextChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DataContextChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::DataTemplate>
{
    using abi = ABI::Windows::UI::Xaml::DataTemplate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DataTemplate"; }
};

template <> struct traits<Windows::UI::Xaml::DataTemplateKey>
{
    using abi = ABI::Windows::UI::Xaml::DataTemplateKey;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DataTemplateKey"; }
};

template <> struct traits<Windows::UI::Xaml::DebugSettings>
{
    using abi = ABI::Windows::UI::Xaml::DebugSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DebugSettings"; }
};

template <> struct traits<Windows::UI::Xaml::DependencyObject>
{
    using abi = ABI::Windows::UI::Xaml::DependencyObject;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DependencyObject"; }
};

template <> struct traits<Windows::UI::Xaml::DependencyObjectCollection>
{
    using abi = ABI::Windows::UI::Xaml::DependencyObjectCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DependencyObjectCollection"; }
};

template <> struct traits<Windows::UI::Xaml::DependencyProperty>
{
    using abi = ABI::Windows::UI::Xaml::DependencyProperty;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DependencyProperty"; }
};

template <> struct traits<Windows::UI::Xaml::DependencyPropertyChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::DependencyPropertyChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DependencyPropertyChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::DispatcherTimer>
{
    using abi = ABI::Windows::UI::Xaml::DispatcherTimer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DispatcherTimer"; }
};

template <> struct traits<Windows::UI::Xaml::DragEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::DragEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DragEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::DragOperationDeferral>
{
    using abi = ABI::Windows::UI::Xaml::DragOperationDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DragOperationDeferral"; }
};

template <> struct traits<Windows::UI::Xaml::DragStartingEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::DragStartingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DragStartingEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::DragUI>
{
    using abi = ABI::Windows::UI::Xaml::DragUI;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DragUI"; }
};

template <> struct traits<Windows::UI::Xaml::DragUIOverride>
{
    using abi = ABI::Windows::UI::Xaml::DragUIOverride;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DragUIOverride"; }
};

template <> struct traits<Windows::UI::Xaml::DropCompletedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::DropCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DropCompletedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::DurationHelper>
{
    using abi = ABI::Windows::UI::Xaml::DurationHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.DurationHelper"; }
};

template <> struct traits<Windows::UI::Xaml::ElementSoundPlayer>
{
    using abi = ABI::Windows::UI::Xaml::ElementSoundPlayer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.ElementSoundPlayer"; }
};

template <> struct traits<Windows::UI::Xaml::EventTrigger>
{
    using abi = ABI::Windows::UI::Xaml::EventTrigger;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.EventTrigger"; }
};

template <> struct traits<Windows::UI::Xaml::ExceptionRoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::ExceptionRoutedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.ExceptionRoutedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::FrameworkElement>
{
    using abi = ABI::Windows::UI::Xaml::FrameworkElement;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.FrameworkElement"; }
};

template <> struct traits<Windows::UI::Xaml::FrameworkTemplate>
{
    using abi = ABI::Windows::UI::Xaml::FrameworkTemplate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.FrameworkTemplate"; }
};

template <> struct traits<Windows::UI::Xaml::FrameworkView>
{
    using abi = ABI::Windows::UI::Xaml::FrameworkView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.FrameworkView"; }
};

template <> struct traits<Windows::UI::Xaml::FrameworkViewSource>
{
    using abi = ABI::Windows::UI::Xaml::FrameworkViewSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.FrameworkViewSource"; }
};

template <> struct traits<Windows::UI::Xaml::GridLengthHelper>
{
    using abi = ABI::Windows::UI::Xaml::GridLengthHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.GridLengthHelper"; }
};

template <> struct traits<Windows::UI::Xaml::MediaFailedRoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::MediaFailedRoutedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.MediaFailedRoutedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::PointHelper>
{
    using abi = ABI::Windows::UI::Xaml::PointHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.PointHelper"; }
};

template <> struct traits<Windows::UI::Xaml::PropertyMetadata>
{
    using abi = ABI::Windows::UI::Xaml::PropertyMetadata;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.PropertyMetadata"; }
};

template <> struct traits<Windows::UI::Xaml::PropertyPath>
{
    using abi = ABI::Windows::UI::Xaml::PropertyPath;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.PropertyPath"; }
};

template <> struct traits<Windows::UI::Xaml::RectHelper>
{
    using abi = ABI::Windows::UI::Xaml::RectHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.RectHelper"; }
};

template <> struct traits<Windows::UI::Xaml::ResourceDictionary>
{
    using abi = ABI::Windows::UI::Xaml::ResourceDictionary;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.ResourceDictionary"; }
};

template <> struct traits<Windows::UI::Xaml::RoutedEvent>
{
    using abi = ABI::Windows::UI::Xaml::RoutedEvent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.RoutedEvent"; }
};

template <> struct traits<Windows::UI::Xaml::RoutedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::RoutedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.RoutedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Setter>
{
    using abi = ABI::Windows::UI::Xaml::Setter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Setter"; }
};

template <> struct traits<Windows::UI::Xaml::SetterBase>
{
    using abi = ABI::Windows::UI::Xaml::SetterBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.SetterBase"; }
};

template <> struct traits<Windows::UI::Xaml::SetterBaseCollection>
{
    using abi = ABI::Windows::UI::Xaml::SetterBaseCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.SetterBaseCollection"; }
};

template <> struct traits<Windows::UI::Xaml::SizeChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::SizeChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.SizeChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::SizeHelper>
{
    using abi = ABI::Windows::UI::Xaml::SizeHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.SizeHelper"; }
};

template <> struct traits<Windows::UI::Xaml::StateTrigger>
{
    using abi = ABI::Windows::UI::Xaml::StateTrigger;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.StateTrigger"; }
};

template <> struct traits<Windows::UI::Xaml::StateTriggerBase>
{
    using abi = ABI::Windows::UI::Xaml::StateTriggerBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.StateTriggerBase"; }
};

template <> struct traits<Windows::UI::Xaml::Style>
{
    using abi = ABI::Windows::UI::Xaml::Style;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Style"; }
};

template <> struct traits<Windows::UI::Xaml::TargetPropertyPath>
{
    using abi = ABI::Windows::UI::Xaml::TargetPropertyPath;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.TargetPropertyPath"; }
};

template <> struct traits<Windows::UI::Xaml::ThicknessHelper>
{
    using abi = ABI::Windows::UI::Xaml::ThicknessHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.ThicknessHelper"; }
};

template <> struct traits<Windows::UI::Xaml::TriggerAction>
{
    using abi = ABI::Windows::UI::Xaml::TriggerAction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.TriggerAction"; }
};

template <> struct traits<Windows::UI::Xaml::TriggerActionCollection>
{
    using abi = ABI::Windows::UI::Xaml::TriggerActionCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.TriggerActionCollection"; }
};

template <> struct traits<Windows::UI::Xaml::TriggerBase>
{
    using abi = ABI::Windows::UI::Xaml::TriggerBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.TriggerBase"; }
};

template <> struct traits<Windows::UI::Xaml::TriggerCollection>
{
    using abi = ABI::Windows::UI::Xaml::TriggerCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.TriggerCollection"; }
};

template <> struct traits<Windows::UI::Xaml::UIElement>
{
    using abi = ABI::Windows::UI::Xaml::UIElement;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.UIElement"; }
};

template <> struct traits<Windows::UI::Xaml::UnhandledExceptionEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::UnhandledExceptionEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.UnhandledExceptionEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::VisualState>
{
    using abi = ABI::Windows::UI::Xaml::VisualState;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.VisualState"; }
};

template <> struct traits<Windows::UI::Xaml::VisualStateChangedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::VisualStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.VisualStateChangedEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::VisualStateGroup>
{
    using abi = ABI::Windows::UI::Xaml::VisualStateGroup;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.VisualStateGroup"; }
};

template <> struct traits<Windows::UI::Xaml::VisualStateManager>
{
    using abi = ABI::Windows::UI::Xaml::VisualStateManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.VisualStateManager"; }
};

template <> struct traits<Windows::UI::Xaml::VisualTransition>
{
    using abi = ABI::Windows::UI::Xaml::VisualTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.VisualTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Window>
{
    using abi = ABI::Windows::UI::Xaml::Window;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Window"; }
};

template <> struct traits<Windows::UI::Xaml::WindowCreatedEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::WindowCreatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.WindowCreatedEventArgs"; }
};

}

}
