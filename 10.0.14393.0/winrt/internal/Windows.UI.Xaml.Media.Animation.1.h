// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.Media.Animation.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Composition.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Controls.0.h"
#include "Windows.UI.Xaml.Controls.Primitives.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.UI.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media::Animation {

struct KeyTime
{
    Windows::Foundation::TimeSpan TimeSpan;
};

struct RepeatBehavior
{
    double Count;
    Windows::Foundation::TimeSpan Duration;
    winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorType Type;
};

}

namespace Windows::UI::Xaml::Media::Animation {

using KeyTime = ABI::Windows::UI::Xaml::Media::Animation::KeyTime;
using RepeatBehavior = ABI::Windows::UI::Xaml::Media::Animation::RepeatBehavior;

}

namespace ABI::Windows::UI::Xaml::Media::Animation {

struct __declspec(uuid("adec852e-4424-4dab-99c1-3a04e36a3c48")) __declspec(novtable) IAddDeleteThemeTransition : Windows::IInspectable
{
};

struct __declspec(uuid("e47796e7-f805-4a8f-81c9-38e6472caa94")) __declspec(novtable) IBackEase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Amplitude(double * value) = 0;
    virtual HRESULT __stdcall put_Amplitude(double value) = 0;
};

struct __declspec(uuid("3c70a2ff-a0a0-4786-926c-22321f8f25b7")) __declspec(novtable) IBackEaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AmplitudeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("64189fcd-49ec-4e52-a6f6-55324c921053")) __declspec(novtable) IBeginStoryboard : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard ** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(Windows::UI::Xaml::Media::Animation::IStoryboard * value) = 0;
};

struct __declspec(uuid("12cff18c-aa91-4c4a-b82f-df34fc57f94b")) __declspec(novtable) IBeginStoryboardStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StoryboardProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("2bf1464e-fc71-47ed-85a1-3ba9577718b4")) __declspec(novtable) IBounceEase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bounces(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Bounces(int32_t value) = 0;
    virtual HRESULT __stdcall get_Bounciness(double * value) = 0;
    virtual HRESULT __stdcall put_Bounciness(double value) = 0;
};

struct __declspec(uuid("c0701da2-4f73-41c9-b2cb-2ea3105107ff")) __declspec(novtable) IBounceEaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BouncesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_BouncinessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("53a3bdb2-9177-4e6e-a043-5082d889ab1f")) __declspec(novtable) ICircleEase : Windows::IInspectable
{
};

struct __declspec(uuid("b8ae8a15-0f63-4694-9467-bdafac1253ea")) __declspec(novtable) IColorAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_From(Windows::Foundation::IReference<Windows::UI::Color> ** value) = 0;
    virtual HRESULT __stdcall put_From(Windows::Foundation::IReference<Windows::UI::Color> * value) = 0;
    virtual HRESULT __stdcall get_To(Windows::Foundation::IReference<Windows::UI::Color> ** value) = 0;
    virtual HRESULT __stdcall put_To(Windows::Foundation::IReference<Windows::UI::Color> * value) = 0;
    virtual HRESULT __stdcall get_By(Windows::Foundation::IReference<Windows::UI::Color> ** value) = 0;
    virtual HRESULT __stdcall put_By(Windows::Foundation::IReference<Windows::UI::Color> * value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("55eaf6e2-87e3-4f48-958f-855b2f9ea9ec")) __declspec(novtable) IColorAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("f5c82640-13c3-42aa-9ae2-7e6b51c92f95")) __declspec(novtable) IColorAnimationUsingKeyFrames : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ColorKeyFrame> ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("b4723cdc-96e9-48f9-8d92-9b648b2f1cc6")) __declspec(novtable) IColorAnimationUsingKeyFramesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("b51d82d9-0910-4589-a284-b0c9205858e9")) __declspec(novtable) IColorKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Value(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_Value(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime * value) = 0;
    virtual HRESULT __stdcall put_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime value) = 0;
};

struct __declspec(uuid("769bd88a-9cfb-4a7d-96c4-a1e7de6fdb4b")) __declspec(novtable) IColorKeyFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::IColorKeyFrame ** instance) = 0;
};

struct __declspec(uuid("c043ae99-210c-430f-9da5-df1082692055")) __declspec(novtable) IColorKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("50345692-a555-4624-a361-0a91c1706473")) __declspec(novtable) ICommonNavigationTransitionInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};

struct __declspec(uuid("1e3efe33-50be-4443-883c-e5627201c2e5")) __declspec(novtable) ICommonNavigationTransitionInfoStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsStaggerElementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsStaggerElement(Windows::UI::Xaml::IUIElement * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetIsStaggerElement(Windows::UI::Xaml::IUIElement * element, bool value) = 0;
};

struct __declspec(uuid("3518628c-f387-4c25-ac98-44e86c3cadf0")) __declspec(novtable) IConnectedAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
    virtual HRESULT __stdcall abi_TryStart(Windows::UI::Xaml::IUIElement * destination, bool * returnValue) = 0;
    virtual HRESULT __stdcall abi_Cancel() = 0;
};

struct __declspec(uuid("1c6875c9-19bb-4d47-b9aa-66c802dcb9ff")) __declspec(novtable) IConnectedAnimationService : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultDuration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_DefaultDuration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_DefaultEasingFunction(Windows::UI::Composition::ICompositionEasingFunction ** value) = 0;
    virtual HRESULT __stdcall put_DefaultEasingFunction(Windows::UI::Composition::ICompositionEasingFunction * value) = 0;
    virtual HRESULT __stdcall abi_PrepareToAnimate(hstring key, Windows::UI::Xaml::IUIElement * source, Windows::UI::Xaml::Media::Animation::IConnectedAnimation ** returnValue) = 0;
    virtual HRESULT __stdcall abi_GetAnimation(hstring key, Windows::UI::Xaml::Media::Animation::IConnectedAnimation ** returnValue) = 0;
};

struct __declspec(uuid("c7078ea5-d688-40e8-8f90-96a6279273d2")) __declspec(novtable) IConnectedAnimationServiceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::Xaml::Media::Animation::IConnectedAnimationService ** returnValue) = 0;
};

struct __declspec(uuid("f66fc5c3-5915-437d-8e3b-adf8e7f0ab57")) __declspec(novtable) IContentThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_HorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_VerticalOffset(double value) = 0;
};

struct __declspec(uuid("0e8ee385-9a42-4459-afa9-337dc41e1587")) __declspec(novtable) IContentThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_VerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4be1dbad-8ba6-4004-8438-8a9017978543")) __declspec(novtable) IContinuumNavigationTransitionInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExitElement(Windows::UI::Xaml::IUIElement ** value) = 0;
    virtual HRESULT __stdcall put_ExitElement(Windows::UI::Xaml::IUIElement * value) = 0;
};

struct __declspec(uuid("3e25dd53-b18f-4bf1-b3bc-92f516f29903")) __declspec(novtable) IContinuumNavigationTransitionInfoStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExitElementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsEntranceElementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsEntranceElement(Windows::UI::Xaml::IUIElement * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetIsEntranceElement(Windows::UI::Xaml::IUIElement * element, bool value) = 0;
    virtual HRESULT __stdcall get_IsExitElementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsExitElement(Windows::UI::Xaml::IUIElement * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetIsExitElement(Windows::UI::Xaml::IUIElement * element, bool value) = 0;
    virtual HRESULT __stdcall get_ExitElementContainerProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetExitElementContainer(Windows::UI::Xaml::Controls::IListViewBase * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetExitElementContainer(Windows::UI::Xaml::Controls::IListViewBase * element, bool value) = 0;
};

struct __declspec(uuid("1b94fc76-dad7-4354-b1a2-7969fbf6a70d")) __declspec(novtable) ICubicEase : Windows::IInspectable
{
};

struct __declspec(uuid("230c08f4-e062-4cb1-8e2a-14093d73ed8c")) __declspec(novtable) IDiscreteColorKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("f5f51f3a-ad11-49ce-8e1c-08fdf1447446")) __declspec(novtable) IDiscreteDoubleKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("c7dcde89-f12d-4a9c-8199-e7a9ece3a473")) __declspec(novtable) IDiscreteObjectKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("e0a9070d-4c42-4a90-983a-75f5a83a2fbe")) __declspec(novtable) IDiscretePointKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("7e9f3d59-0f07-4bc9-977d-03763ff8154f")) __declspec(novtable) IDoubleAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_From(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_From(Windows::Foundation::IReference<double> * value) = 0;
    virtual HRESULT __stdcall get_To(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_To(Windows::Foundation::IReference<double> * value) = 0;
    virtual HRESULT __stdcall get_By(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_By(Windows::Foundation::IReference<double> * value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("e27a935d-f111-43b7-b824-832b58d7786b")) __declspec(novtable) IDoubleAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4fee628f-bfee-4f75-83c2-a93b39488473")) __declspec(novtable) IDoubleAnimationUsingKeyFrames : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame> ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("109bf2f6-c60f-49aa-abf6-f696d492116b")) __declspec(novtable) IDoubleAnimationUsingKeyFramesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("674456fd-e81e-4f4e-b4ad-0acfed9ecd68")) __declspec(novtable) IDoubleKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Value(double * value) = 0;
    virtual HRESULT __stdcall put_Value(double value) = 0;
    virtual HRESULT __stdcall get_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime * value) = 0;
    virtual HRESULT __stdcall put_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime value) = 0;
};

struct __declspec(uuid("ac97dec3-7538-40b9-b152-696f7fbf4722")) __declspec(novtable) IDoubleKeyFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame ** instance) = 0;
};

struct __declspec(uuid("324641b0-7d37-427a-adeb-43f38bb61a4d")) __declspec(novtable) IDoubleKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0c7d5db5-7ed6-4949-b4e6-a78c9f4f978d")) __declspec(novtable) IDragItemThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("6218b9f5-013a-4fb1-86fc-92bc4e8d0241")) __declspec(novtable) IDragItemThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("72f762f7-7e51-4a6b-b937-dc4b4c1c5458")) __declspec(novtable) IDragOverThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ToOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ToOffset(double value) = 0;
    virtual HRESULT __stdcall get_Direction(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) = 0;
    virtual HRESULT __stdcall put_Direction(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) = 0;
};

struct __declspec(uuid("146ffe57-3c9d-41d9-a5ff-8d7239516810")) __declspec(novtable) IDragOverThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DirectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("3b86201a-45d3-463b-939e-c8595f439bcc")) __declspec(novtable) IDrillInNavigationTransitionInfo : Windows::IInspectable
{
};

struct __declspec(uuid("b090b824-f1d2-41b8-87ba-78034126594c")) __declspec(novtable) IDrillInThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_EntranceTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_EntranceTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_EntranceTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ExitTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ExitTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ExitTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ExitTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
};

struct __declspec(uuid("c61fe488-a17a-4b11-b53b-a4f1a07d4ba9")) __declspec(novtable) IDrillInThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EntranceTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("d890ccdf-06d3-4f7e-8e4a-4fb76e256139")) __declspec(novtable) IDrillOutThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_EntranceTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_EntranceTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_EntranceTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ExitTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ExitTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ExitTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ExitTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
};

struct __declspec(uuid("beb5db9b-2617-4888-80dd-72fa7bb6fac3")) __declspec(novtable) IDrillOutThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EntranceTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("1881c968-1824-462b-87e8-c357212b977b")) __declspec(novtable) IDropTargetItemThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("ae80f486-2e56-4513-bf18-d77470164ae5")) __declspec(novtable) IDropTargetItemThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("c733d630-f4b9-4934-9bdd-27ac5ed1cfd8")) __declspec(novtable) IEasingColorKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
};

struct __declspec(uuid("6f3837fc-8e3d-4522-9b0f-003db8609851")) __declspec(novtable) IEasingColorKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("965adb8d-9a54-4108-b4ff-b5a5212cb338")) __declspec(novtable) IEasingDoubleKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
};

struct __declspec(uuid("c8d3d845-dbae-4e5b-8b84-d9537398e5b1")) __declspec(novtable) IEasingDoubleKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("c108383f-2c02-4151-8ecd-68ddaa3f0d9b")) __declspec(novtable) IEasingFunctionBase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingMode(winrt::Windows::UI::Xaml::Media::Animation::EasingMode * value) = 0;
    virtual HRESULT __stdcall put_EasingMode(winrt::Windows::UI::Xaml::Media::Animation::EasingMode value) = 0;
    virtual HRESULT __stdcall abi_Ease(double normalizedTime, double * returnValue) = 0;
};

struct __declspec(uuid("1830fe6a-f01b-43e0-b61f-b452a1c66fd2")) __declspec(novtable) IEasingFunctionBaseFactory : Windows::IInspectable
{
};

struct __declspec(uuid("2a5031aa-2c50-4a1d-bb04-d75e07b71548")) __declspec(novtable) IEasingFunctionBaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("b3c91380-6868-4225-a70b-3981cc0b2947")) __declspec(novtable) IEasingPointKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
};

struct __declspec(uuid("e22dbfc4-080c-402c-a6b5-f48d0a98116b")) __declspec(novtable) IEasingPointKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("5c86c19b-49d7-19ec-cf19-83a73c6de75e")) __declspec(novtable) IEdgeUIThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation * value) = 0;
    virtual HRESULT __stdcall put_Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) = 0;
};

struct __declspec(uuid("16a2b13b-4705-302b-27c6-2aac92f645ac")) __declspec(novtable) IEdgeUIThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EdgeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("ef5ba58c-b0b6-4a6c-9ca8-fb4233f12459")) __declspec(novtable) IElasticEase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Oscillations(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Oscillations(int32_t value) = 0;
    virtual HRESULT __stdcall get_Springiness(double * value) = 0;
    virtual HRESULT __stdcall put_Springiness(double value) = 0;
};

struct __declspec(uuid("a9f566ec-fe9c-4b2b-8e52-bb785d562185")) __declspec(novtable) IElasticEaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OscillationsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SpringinessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("720a256b-1c8a-41ee-82ec-8a87c0cf47da")) __declspec(novtable) IEntranceNavigationTransitionInfo : Windows::IInspectable
{
};

struct __declspec(uuid("f948c27a-40c9-469f-8f33-bf45c8811f21")) __declspec(novtable) IEntranceNavigationTransitionInfoStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsTargetElementProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetIsTargetElement(Windows::UI::Xaml::IUIElement * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetIsTargetElement(Windows::UI::Xaml::IUIElement * element, bool value) = 0;
};

struct __declspec(uuid("07698c09-a8e3-419a-a01d-7410a0ae8ec8")) __declspec(novtable) IEntranceThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};

struct __declspec(uuid("37cc0577-ff98-4aed-b86e-5ec23702f877")) __declspec(novtable) IEntranceThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("7cb9e41d-f0bb-4bca-9da5-9ba3a11734c4")) __declspec(novtable) IExponentialEase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Exponent(double * value) = 0;
    virtual HRESULT __stdcall put_Exponent(double value) = 0;
};

struct __declspec(uuid("f37ee7e3-a761-4352-9ad6-70794567581a")) __declspec(novtable) IExponentialEaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExponentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("6d4bc8f5-a918-4477-8078-554c68812ab8")) __declspec(novtable) IFadeInThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("7f0117e1-bea9-4923-b23a-0ddf4d7b8737")) __declspec(novtable) IFadeInThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("89276ba9-ffd4-45b6-9b9a-ced48951e712")) __declspec(novtable) IFadeOutThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("fe17a81a-4168-4f68-a28c-e5dd98cf680f")) __declspec(novtable) IFadeOutThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("77a163bb-d5ca-4a32-ba0b-7dff988e58a0")) __declspec(novtable) IKeySpline : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ControlPoint1(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_ControlPoint1(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_ControlPoint2(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_ControlPoint2(Windows::Foundation::Point value) = 0;
};

struct __declspec(uuid("3643e480-4823-466a-abe5-5e79c8ed77ed")) __declspec(novtable) IKeyTimeHelper : Windows::IInspectable
{
};

struct __declspec(uuid("7fa2612c-22a9-45e9-9af7-c7416efff7a5")) __declspec(novtable) IKeyTimeHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromTimeSpan(Windows::Foundation::TimeSpan timeSpan, Windows::UI::Xaml::Media::Animation::KeyTime * returnValue) = 0;
};

struct __declspec(uuid("66fdb6ef-ac81-4611-b1d2-61f545983f03")) __declspec(novtable) ILinearColorKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("8efdf265-9a7b-431d-8f0c-14c56b5ea4d9")) __declspec(novtable) ILinearDoubleKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("e7c9b8ef-af24-49ee-84f1-a86600a4e319")) __declspec(novtable) ILinearPointKeyFrame : Windows::IInspectable
{
};

struct __declspec(uuid("8833848c-4eb7-41f2-8799-9eef0a213b73")) __declspec(novtable) INavigationThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultNavigationTransitionInfo(Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo ** value) = 0;
    virtual HRESULT __stdcall put_DefaultNavigationTransitionInfo(Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo * value) = 0;
};

struct __declspec(uuid("ea2f06e0-5e60-4f8e-bcaf-431487a294ab")) __declspec(novtable) INavigationThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultNavigationTransitionInfoProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("a9b05091-ae4a-4372-8625-21b7a8b98ca4")) __declspec(novtable) INavigationTransitionInfo : Windows::IInspectable
{
};

struct __declspec(uuid("edf4f8d5-af63-4fab-9d4a-87927f82dd6b")) __declspec(novtable) INavigationTransitionInfoFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo ** instance) = 0;
};

struct __declspec(uuid("d9517e6a-a9d0-4bf7-9db0-4633a69daff2")) __declspec(novtable) INavigationTransitionInfoOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetNavigationStateCore(hstring * returnValue) = 0;
    virtual HRESULT __stdcall abi_SetNavigationStateCore(hstring navigationState) = 0;
};

struct __declspec(uuid("334a2d92-b74a-4c64-b9a6-58bcfa314f22")) __declspec(novtable) IObjectAnimationUsingKeyFrames : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame> ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("eb736182-6af1-49a3-97b6-783ed97400fe")) __declspec(novtable) IObjectAnimationUsingKeyFramesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9852a851-8593-48ee-a6a4-d5d4720f029a")) __declspec(novtable) IObjectKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Value(Windows::IInspectable ** value) = 0;
    virtual HRESULT __stdcall put_Value(Windows::IInspectable * value) = 0;
    virtual HRESULT __stdcall get_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime * value) = 0;
    virtual HRESULT __stdcall put_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime value) = 0;
};

struct __declspec(uuid("1626143e-3e6d-44d8-9b9a-04aea70f8492")) __declspec(novtable) IObjectKeyFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::IObjectKeyFrame ** instance) = 0;
};

struct __declspec(uuid("2cd6ab00-5319-4286-8eed-4e755ea0cf9c")) __declspec(novtable) IObjectKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4708eb8e-4bfc-ee46-d4f9-708def3fbb2b")) __declspec(novtable) IPaneThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation * value) = 0;
    virtual HRESULT __stdcall put_Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation value) = 0;
};

struct __declspec(uuid("316b382f-4be4-1797-b45c-cd900bbe0caa")) __declspec(novtable) IPaneThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EdgeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("30f04312-7726-4f88-b8e2-2fa54518963b")) __declspec(novtable) IPointAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_From(Windows::Foundation::IReference<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_From(Windows::Foundation::IReference<Windows::Foundation::Point> * value) = 0;
    virtual HRESULT __stdcall get_To(Windows::Foundation::IReference<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_To(Windows::Foundation::IReference<Windows::Foundation::Point> * value) = 0;
    virtual HRESULT __stdcall get_By(Windows::Foundation::IReference<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_By(Windows::Foundation::IReference<Windows::Foundation::Point> * value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase ** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("2f99b356-e737-408b-a0fd-327826d32255")) __declspec(novtable) IPointAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9b944f72-446a-41d0-a129-41a620f4595d")) __declspec(novtable) IPointAnimationUsingKeyFrames : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::PointKeyFrame> ** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool * value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};

struct __declspec(uuid("5f454c87-2390-46ea-baa7-762f4bc30d04")) __declspec(novtable) IPointAnimationUsingKeyFramesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("fcc88d01-7f82-4dae-8026-7b7e086878b3")) __declspec(novtable) IPointKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Value(Windows::Foundation::Point * value) = 0;
    virtual HRESULT __stdcall put_Value(Windows::Foundation::Point value) = 0;
    virtual HRESULT __stdcall get_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime * value) = 0;
    virtual HRESULT __stdcall put_KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime value) = 0;
};

struct __declspec(uuid("cb214bdf-426a-4392-8355-c2ae52852623")) __declspec(novtable) IPointKeyFrameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::IPointKeyFrame ** instance) = 0;
};

struct __declspec(uuid("95cf1b27-7965-4bec-b9fb-fbe94b65518e")) __declspec(novtable) IPointKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("b58e714e-c49d-4788-a233-0ae85d99dd5a")) __declspec(novtable) IPointerDownThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("63a7cb7b-6d46-4494-b94a-e72f3b492a61")) __declspec(novtable) IPointerDownThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("e9e9d07d-6340-4828-ad12-690694b9910b")) __declspec(novtable) IPointerUpThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("7c618f9c-7992-4139-8bfc-0883b9727a7e")) __declspec(novtable) IPointerUpThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("196938c1-1c07-4c28-8847-f9f055b32855")) __declspec(novtable) IPopInThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};

struct __declspec(uuid("efaa99d3-218a-4701-977f-f1bfae8ba649")) __declspec(novtable) IPopInThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4786ab49-0e48-4e81-a2e5-cc5aa19e48d3")) __declspec(novtable) IPopOutThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
};

struct __declspec(uuid("1d492c09-03c1-4490-99dc-909feab357fb")) __declspec(novtable) IPopOutThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("47843552-4283-545e-c791-268dca22ce4b")) __declspec(novtable) IPopupThemeTransition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};

struct __declspec(uuid("e5a1640e-490d-1505-9f6b-8fafc044dec5")) __declspec(novtable) IPopupThemeTransitionStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("69c80579-eedf-405b-8680-d9606880c937")) __declspec(novtable) IPowerEase : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Power(double * value) = 0;
    virtual HRESULT __stdcall put_Power(double value) = 0;
};

struct __declspec(uuid("a5955103-91a2-460c-9c41-d28f6a939bda")) __declspec(novtable) IPowerEaseStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PowerProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("e1510e91-ef6d-44f0-803d-68d16de0ddfc")) __declspec(novtable) IQuadraticEase : Windows::IInspectable
{
};

struct __declspec(uuid("e8698814-fe42-4a05-b5b8-081f41157815")) __declspec(novtable) IQuarticEase : Windows::IInspectable
{
};

struct __declspec(uuid("92ee793b-3c49-4108-aa11-ab786603da21")) __declspec(novtable) IQuinticEase : Windows::IInspectable
{
};

struct __declspec(uuid("f2065c6c-d052-4ad1-8362-b71b36df7497")) __declspec(novtable) IReorderThemeTransition : Windows::IInspectable
{
};

struct __declspec(uuid("6863ab72-4997-47f9-87ad-37efb75993ea")) __declspec(novtable) IRepeatBehaviorHelper : Windows::IInspectable
{
};

struct __declspec(uuid("7a795033-79f3-4dd9-b267-9cf50fb51f84")) __declspec(novtable) IRepeatBehaviorHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Forever(Windows::UI::Xaml::Media::Animation::RepeatBehavior * value) = 0;
    virtual HRESULT __stdcall abi_FromCount(double count, Windows::UI::Xaml::Media::Animation::RepeatBehavior * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromDuration(Windows::Foundation::TimeSpan duration, Windows::UI::Xaml::Media::Animation::RepeatBehavior * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetHasCount(Windows::UI::Xaml::Media::Animation::RepeatBehavior target, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetHasDuration(Windows::UI::Xaml::Media::Animation::RepeatBehavior target, bool * value) = 0;
    virtual HRESULT __stdcall abi_Equals(Windows::UI::Xaml::Media::Animation::RepeatBehavior target, Windows::UI::Xaml::Media::Animation::RepeatBehavior value, bool * returnValue) = 0;
};

struct __declspec(uuid("ecda24e8-8945-4949-a1bf-62109965a7e9")) __declspec(novtable) IRepositionThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};

struct __declspec(uuid("4d92b1b1-860b-4bf9-a59d-1eb1ccbe8fe0")) __declspec(novtable) IRepositionThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("88329b82-98f3-455a-ac53-2e7083b6e22c")) __declspec(novtable) IRepositionThemeTransition : Windows::IInspectable
{
};

struct __declspec(uuid("cebfe864-dbea-4404-8e6e-de55ada75239")) __declspec(novtable) IRepositionThemeTransition2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};

struct __declspec(uuid("9240e930-0a19-468b-8c2a-68fab4500027")) __declspec(novtable) IRepositionThemeTransitionStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("a9382962-230b-49da-9e0d-664987892343")) __declspec(novtable) ISineEase : Windows::IInspectable
{
};

struct __declspec(uuid("d6ac9d77-2e03-405f-80ed-e62beef3668f")) __declspec(novtable) ISlideNavigationTransitionInfo : Windows::IInspectable
{
};

struct __declspec(uuid("1a4a5941-1fe0-473a-8efe-4316d8c86229")) __declspec(novtable) ISplineColorKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline ** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline * value) = 0;
};

struct __declspec(uuid("61d1d997-8589-4f2f-8fbb-7d03edc98dd3")) __declspec(novtable) ISplineColorKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("00d72d38-6b2b-4843-838e-c8b115eec801")) __declspec(novtable) ISplineDoubleKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline ** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline * value) = 0;
};

struct __declspec(uuid("060a8ffc-975f-4e4e-9ec7-13c5aee02062")) __declspec(novtable) ISplineDoubleKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0f19f306-7036-494f-bc3c-780df0cc524a")) __declspec(novtable) ISplinePointKeyFrame : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline ** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(Windows::UI::Xaml::Media::Animation::IKeySpline * value) = 0;
};

struct __declspec(uuid("e97a32c2-0a7a-4766-95cb-0d692611cb4c")) __declspec(novtable) ISplinePointKeyFrameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("4f799518-ff39-4e90-bb74-2abd56027402")) __declspec(novtable) ISplitCloseThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_OpenedTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_OpenedTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_OpenedTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ClosedTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ClosedTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ClosedTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ContentTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ContentTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ContentTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ContentTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_OpenedLength(double * value) = 0;
    virtual HRESULT __stdcall put_OpenedLength(double value) = 0;
    virtual HRESULT __stdcall get_ClosedLength(double * value) = 0;
    virtual HRESULT __stdcall put_ClosedLength(double value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenter(double * value) = 0;
    virtual HRESULT __stdcall put_OffsetFromCenter(double value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationOffset(double value) = 0;
};

struct __declspec(uuid("7aa94de9-cc9b-4e90-a11a-0050a2216a9e")) __declspec(novtable) ISplitCloseThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OpenedTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OpenedLengthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedLengthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenterProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("785fd7aa-5456-4639-8fd2-26bae6a5ffe4")) __declspec(novtable) ISplitOpenThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_OpenedTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_OpenedTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_OpenedTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ClosedTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ClosedTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ClosedTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ContentTargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_ContentTargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ContentTarget(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_ContentTarget(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_OpenedLength(double * value) = 0;
    virtual HRESULT __stdcall put_OpenedLength(double value) = 0;
    virtual HRESULT __stdcall get_ClosedLength(double * value) = 0;
    virtual HRESULT __stdcall put_ClosedLength(double value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenter(double * value) = 0;
    virtual HRESULT __stdcall put_OffsetFromCenter(double value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationOffset(double value) = 0;
};

struct __declspec(uuid("8d4cfa89-3a91-458d-b0fb-4cad625cbf8d")) __declspec(novtable) ISplitOpenThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OpenedTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OpenedLengthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ClosedLengthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenterProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("d45c1e6e-3594-460e-981a-32271bd3aa06")) __declspec(novtable) IStoryboard : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Children(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Timeline> ** value) = 0;
    virtual HRESULT __stdcall abi_Seek(Windows::Foundation::TimeSpan offset) = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_Begin() = 0;
    virtual HRESULT __stdcall abi_Pause() = 0;
    virtual HRESULT __stdcall abi_Resume() = 0;
    virtual HRESULT __stdcall abi_GetCurrentState(winrt::Windows::UI::Xaml::Media::Animation::ClockState * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetCurrentTime(Windows::Foundation::TimeSpan * returnValue) = 0;
    virtual HRESULT __stdcall abi_SeekAlignedToLastTick(Windows::Foundation::TimeSpan offset) = 0;
    virtual HRESULT __stdcall abi_SkipToFill() = 0;
};

struct __declspec(uuid("d82f07d8-73d5-4379-bd48-7e05184a8bad")) __declspec(novtable) IStoryboardStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetPropertyProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetTargetProperty(Windows::UI::Xaml::Media::Animation::ITimeline * element, hstring * path) = 0;
    virtual HRESULT __stdcall abi_SetTargetProperty(Windows::UI::Xaml::Media::Animation::ITimeline * element, hstring path) = 0;
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetTargetName(Windows::UI::Xaml::Media::Animation::ITimeline * element, hstring * name) = 0;
    virtual HRESULT __stdcall abi_SetTargetName(Windows::UI::Xaml::Media::Animation::ITimeline * element, hstring name) = 0;
    virtual HRESULT __stdcall abi_SetTarget(Windows::UI::Xaml::Media::Animation::ITimeline * timeline, Windows::UI::Xaml::IDependencyObject * target) = 0;
};

struct __declspec(uuid("244d7b0c-b1b7-4871-9d3e-d56203a3a5b4")) __declspec(novtable) ISuppressNavigationTransitionInfo : Windows::IInspectable
{
};

struct __declspec(uuid("a38a4214-0bca-4d2d-95f7-ceba57fbaf60")) __declspec(novtable) ISwipeBackThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};

struct __declspec(uuid("693f31bf-4da6-468a-8ce0-996c9aad42e0")) __declspec(novtable) ISwipeBackThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("cdd067c0-580e-4e40-be98-f202d3d84365")) __declspec(novtable) ISwipeHintThemeAnimation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetName(hstring value) = 0;
    virtual HRESULT __stdcall get_ToHorizontalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ToHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_ToVerticalOffset(double * value) = 0;
    virtual HRESULT __stdcall put_ToVerticalOffset(double value) = 0;
};

struct __declspec(uuid("23d61a57-9115-4d63-b04a-b89f1c744dc0")) __declspec(novtable) ISwipeHintThemeAnimationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToHorizontalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ToVerticalOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0bc465dc-be4d-4d0d-9549-2208b715f40d")) __declspec(novtable) ITimeline : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AutoReverse(bool * value) = 0;
    virtual HRESULT __stdcall put_AutoReverse(bool value) = 0;
    virtual HRESULT __stdcall get_BeginTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_BeginTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::UI::Xaml::Duration * value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::UI::Xaml::Duration value) = 0;
    virtual HRESULT __stdcall get_SpeedRatio(double * value) = 0;
    virtual HRESULT __stdcall put_SpeedRatio(double value) = 0;
    virtual HRESULT __stdcall get_FillBehavior(winrt::Windows::UI::Xaml::Media::Animation::FillBehavior * value) = 0;
    virtual HRESULT __stdcall put_FillBehavior(winrt::Windows::UI::Xaml::Media::Animation::FillBehavior value) = 0;
    virtual HRESULT __stdcall get_RepeatBehavior(Windows::UI::Xaml::Media::Animation::RepeatBehavior * value) = 0;
    virtual HRESULT __stdcall put_RepeatBehavior(Windows::UI::Xaml::Media::Animation::RepeatBehavior value) = 0;
    virtual HRESULT __stdcall add_Completed(Windows::Foundation::EventHandler<Windows::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
};

struct __declspec(uuid("1d56bb07-bda4-478b-8ada-eb04d580cd5e")) __declspec(novtable) ITimelineFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Animation::ITimeline ** instance) = 0;
};

struct __declspec(uuid("a902ed4e-ef10-4d6f-9a40-93cb8895f4e5")) __declspec(novtable) ITimelineStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowDependentAnimations(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowDependentAnimations(bool value) = 0;
    virtual HRESULT __stdcall get_AutoReverseProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_BeginTimeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_DurationProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_SpeedRatioProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FillBehaviorProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RepeatBehaviorProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("3c677c7c-01d0-4dce-b333-976f93312b08")) __declspec(novtable) ITransition : Windows::IInspectable
{
};

struct __declspec(uuid("dc9ab2cf-3bc9-44aa-b3fc-883a83233a2c")) __declspec(novtable) ITransitionFactory : Windows::IInspectable
{
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::BackEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IBackEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::BeginStoryboard> { using default_interface = Windows::UI::Xaml::Media::Animation::IBeginStoryboard; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::BounceEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IBounceEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::CircleEase> { using default_interface = Windows::UI::Xaml::Media::Animation::ICircleEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IColorAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames> { using default_interface = Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IColorKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ConnectedAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IConnectedAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ConnectedAnimationService> { using default_interface = Windows::UI::Xaml::Media::Animation::IConnectedAnimationService; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ContentThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IContentThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::CubicEase> { using default_interface = Windows::UI::Xaml::Media::Animation::ICubicEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDoubleAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames> { using default_interface = Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingFunctionBase> { using default_interface = Windows::UI::Xaml::Media::Animation::IEasingFunctionBase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ElasticEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IElasticEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::EntranceThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ExponentialEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IExponentialEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::KeySpline> { using default_interface = Windows::UI::Xaml::Media::Animation::IKeySpline; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::KeyTimeHelper> { using default_interface = Windows::UI::Xaml::Media::Animation::IKeyTimeHelper; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::NavigationThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::INavigationThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames> { using default_interface = Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IObjectKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PaneThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IPaneThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IPointAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames> { using default_interface = Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::IPointKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::PointKeyFrame>; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PopInThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PopupThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IPopupThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::PowerEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IPowerEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::QuadraticEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IQuadraticEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::QuarticEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IQuarticEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::QuinticEase> { using default_interface = Windows::UI::Xaml::Media::Animation::IQuinticEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::ReorderThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IReorderThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper> { using default_interface = Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::RepositionThemeTransition> { using default_interface = Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SineEase> { using default_interface = Windows::UI::Xaml::Media::Animation::ISineEase; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame> { using default_interface = Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::Storyboard> { using default_interface = Windows::UI::Xaml::Media::Animation::IStoryboard; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo> { using default_interface = Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation> { using default_interface = Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::Timeline> { using default_interface = Windows::UI::Xaml::Media::Animation::ITimeline; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::TimelineCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Timeline>; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::Transition> { using default_interface = Windows::UI::Xaml::Media::Animation::ITransition; };
template <> struct traits<Windows::UI::Xaml::Media::Animation::TransitionCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>; };

}

namespace Windows::UI::Xaml::Media::Animation {

template <typename T> struct impl_IAddDeleteThemeTransition;
template <typename T> struct impl_IBackEase;
template <typename T> struct impl_IBackEaseStatics;
template <typename T> struct impl_IBeginStoryboard;
template <typename T> struct impl_IBeginStoryboardStatics;
template <typename T> struct impl_IBounceEase;
template <typename T> struct impl_IBounceEaseStatics;
template <typename T> struct impl_ICircleEase;
template <typename T> struct impl_IColorAnimation;
template <typename T> struct impl_IColorAnimationStatics;
template <typename T> struct impl_IColorAnimationUsingKeyFrames;
template <typename T> struct impl_IColorAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IColorKeyFrame;
template <typename T> struct impl_IColorKeyFrameFactory;
template <typename T> struct impl_IColorKeyFrameStatics;
template <typename T> struct impl_ICommonNavigationTransitionInfo;
template <typename T> struct impl_ICommonNavigationTransitionInfoStatics;
template <typename T> struct impl_IConnectedAnimation;
template <typename T> struct impl_IConnectedAnimationService;
template <typename T> struct impl_IConnectedAnimationServiceStatics;
template <typename T> struct impl_IContentThemeTransition;
template <typename T> struct impl_IContentThemeTransitionStatics;
template <typename T> struct impl_IContinuumNavigationTransitionInfo;
template <typename T> struct impl_IContinuumNavigationTransitionInfoStatics;
template <typename T> struct impl_ICubicEase;
template <typename T> struct impl_IDiscreteColorKeyFrame;
template <typename T> struct impl_IDiscreteDoubleKeyFrame;
template <typename T> struct impl_IDiscreteObjectKeyFrame;
template <typename T> struct impl_IDiscretePointKeyFrame;
template <typename T> struct impl_IDoubleAnimation;
template <typename T> struct impl_IDoubleAnimationStatics;
template <typename T> struct impl_IDoubleAnimationUsingKeyFrames;
template <typename T> struct impl_IDoubleAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IDoubleKeyFrame;
template <typename T> struct impl_IDoubleKeyFrameFactory;
template <typename T> struct impl_IDoubleKeyFrameStatics;
template <typename T> struct impl_IDragItemThemeAnimation;
template <typename T> struct impl_IDragItemThemeAnimationStatics;
template <typename T> struct impl_IDragOverThemeAnimation;
template <typename T> struct impl_IDragOverThemeAnimationStatics;
template <typename T> struct impl_IDrillInNavigationTransitionInfo;
template <typename T> struct impl_IDrillInThemeAnimation;
template <typename T> struct impl_IDrillInThemeAnimationStatics;
template <typename T> struct impl_IDrillOutThemeAnimation;
template <typename T> struct impl_IDrillOutThemeAnimationStatics;
template <typename T> struct impl_IDropTargetItemThemeAnimation;
template <typename T> struct impl_IDropTargetItemThemeAnimationStatics;
template <typename T> struct impl_IEasingColorKeyFrame;
template <typename T> struct impl_IEasingColorKeyFrameStatics;
template <typename T> struct impl_IEasingDoubleKeyFrame;
template <typename T> struct impl_IEasingDoubleKeyFrameStatics;
template <typename T> struct impl_IEasingFunctionBase;
template <typename T> struct impl_IEasingFunctionBaseFactory;
template <typename T> struct impl_IEasingFunctionBaseStatics;
template <typename T> struct impl_IEasingPointKeyFrame;
template <typename T> struct impl_IEasingPointKeyFrameStatics;
template <typename T> struct impl_IEdgeUIThemeTransition;
template <typename T> struct impl_IEdgeUIThemeTransitionStatics;
template <typename T> struct impl_IElasticEase;
template <typename T> struct impl_IElasticEaseStatics;
template <typename T> struct impl_IEntranceNavigationTransitionInfo;
template <typename T> struct impl_IEntranceNavigationTransitionInfoStatics;
template <typename T> struct impl_IEntranceThemeTransition;
template <typename T> struct impl_IEntranceThemeTransitionStatics;
template <typename T> struct impl_IExponentialEase;
template <typename T> struct impl_IExponentialEaseStatics;
template <typename T> struct impl_IFadeInThemeAnimation;
template <typename T> struct impl_IFadeInThemeAnimationStatics;
template <typename T> struct impl_IFadeOutThemeAnimation;
template <typename T> struct impl_IFadeOutThemeAnimationStatics;
template <typename T> struct impl_IKeySpline;
template <typename T> struct impl_IKeyTimeHelper;
template <typename T> struct impl_IKeyTimeHelperStatics;
template <typename T> struct impl_ILinearColorKeyFrame;
template <typename T> struct impl_ILinearDoubleKeyFrame;
template <typename T> struct impl_ILinearPointKeyFrame;
template <typename T> struct impl_INavigationThemeTransition;
template <typename T> struct impl_INavigationThemeTransitionStatics;
template <typename T> struct impl_INavigationTransitionInfo;
template <typename T> struct impl_INavigationTransitionInfoFactory;
template <typename T> struct impl_INavigationTransitionInfoOverrides;
template <typename T> struct impl_IObjectAnimationUsingKeyFrames;
template <typename T> struct impl_IObjectAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IObjectKeyFrame;
template <typename T> struct impl_IObjectKeyFrameFactory;
template <typename T> struct impl_IObjectKeyFrameStatics;
template <typename T> struct impl_IPaneThemeTransition;
template <typename T> struct impl_IPaneThemeTransitionStatics;
template <typename T> struct impl_IPointAnimation;
template <typename T> struct impl_IPointAnimationStatics;
template <typename T> struct impl_IPointAnimationUsingKeyFrames;
template <typename T> struct impl_IPointAnimationUsingKeyFramesStatics;
template <typename T> struct impl_IPointKeyFrame;
template <typename T> struct impl_IPointKeyFrameFactory;
template <typename T> struct impl_IPointKeyFrameStatics;
template <typename T> struct impl_IPointerDownThemeAnimation;
template <typename T> struct impl_IPointerDownThemeAnimationStatics;
template <typename T> struct impl_IPointerUpThemeAnimation;
template <typename T> struct impl_IPointerUpThemeAnimationStatics;
template <typename T> struct impl_IPopInThemeAnimation;
template <typename T> struct impl_IPopInThemeAnimationStatics;
template <typename T> struct impl_IPopOutThemeAnimation;
template <typename T> struct impl_IPopOutThemeAnimationStatics;
template <typename T> struct impl_IPopupThemeTransition;
template <typename T> struct impl_IPopupThemeTransitionStatics;
template <typename T> struct impl_IPowerEase;
template <typename T> struct impl_IPowerEaseStatics;
template <typename T> struct impl_IQuadraticEase;
template <typename T> struct impl_IQuarticEase;
template <typename T> struct impl_IQuinticEase;
template <typename T> struct impl_IReorderThemeTransition;
template <typename T> struct impl_IRepeatBehaviorHelper;
template <typename T> struct impl_IRepeatBehaviorHelperStatics;
template <typename T> struct impl_IRepositionThemeAnimation;
template <typename T> struct impl_IRepositionThemeAnimationStatics;
template <typename T> struct impl_IRepositionThemeTransition;
template <typename T> struct impl_IRepositionThemeTransition2;
template <typename T> struct impl_IRepositionThemeTransitionStatics2;
template <typename T> struct impl_ISineEase;
template <typename T> struct impl_ISlideNavigationTransitionInfo;
template <typename T> struct impl_ISplineColorKeyFrame;
template <typename T> struct impl_ISplineColorKeyFrameStatics;
template <typename T> struct impl_ISplineDoubleKeyFrame;
template <typename T> struct impl_ISplineDoubleKeyFrameStatics;
template <typename T> struct impl_ISplinePointKeyFrame;
template <typename T> struct impl_ISplinePointKeyFrameStatics;
template <typename T> struct impl_ISplitCloseThemeAnimation;
template <typename T> struct impl_ISplitCloseThemeAnimationStatics;
template <typename T> struct impl_ISplitOpenThemeAnimation;
template <typename T> struct impl_ISplitOpenThemeAnimationStatics;
template <typename T> struct impl_IStoryboard;
template <typename T> struct impl_IStoryboardStatics;
template <typename T> struct impl_ISuppressNavigationTransitionInfo;
template <typename T> struct impl_ISwipeBackThemeAnimation;
template <typename T> struct impl_ISwipeBackThemeAnimationStatics;
template <typename T> struct impl_ISwipeHintThemeAnimation;
template <typename T> struct impl_ISwipeHintThemeAnimationStatics;
template <typename T> struct impl_ITimeline;
template <typename T> struct impl_ITimelineFactory;
template <typename T> struct impl_ITimelineStatics;
template <typename T> struct impl_ITransition;
template <typename T> struct impl_ITransitionFactory;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IAddDeleteThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBackEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBackEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBackEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBackEaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBackEaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBackEaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBeginStoryboard>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBeginStoryboard;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBeginStoryboard<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBeginStoryboardStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBounceEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBounceEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBounceEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IBounceEaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ICircleEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ICircleEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ICircleEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorAnimationUsingKeyFrames<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorAnimationUsingKeyFramesStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorKeyFrameFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IColorKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ICommonNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ICommonNavigationTransitionInfoStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IConnectedAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IConnectedAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IConnectedAnimationService<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IConnectedAnimationServiceStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IContentThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IContentThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IContentThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IContentThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IContinuumNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IContinuumNavigationTransitionInfoStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ICubicEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ICubicEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ICubicEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDiscreteColorKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDiscreteDoubleKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDiscreteObjectKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDiscretePointKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleAnimationUsingKeyFrames<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleAnimationUsingKeyFramesStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleKeyFrameFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDoubleKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDragItemThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDragItemThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDragOverThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDragOverThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDrillInNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDrillInThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDrillInThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDrillOutThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDrillOutThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDropTargetItemThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IDropTargetItemThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingColorKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingColorKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingDoubleKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingDoubleKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingFunctionBase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingFunctionBaseFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingFunctionBaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingPointKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEasingPointKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEdgeUIThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEdgeUIThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IElasticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IElasticEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IElasticEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IElasticEaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEntranceNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEntranceNavigationTransitionInfoStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEntranceThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IEntranceThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IExponentialEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IExponentialEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IExponentialEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IExponentialEaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IFadeInThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IFadeInThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IFadeOutThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IFadeOutThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IKeySpline>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IKeySpline;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IKeySpline<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IKeyTimeHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IKeyTimeHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ILinearColorKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ILinearDoubleKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ILinearPointKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_INavigationThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_INavigationThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_INavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_INavigationTransitionInfoFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_INavigationTransitionInfoOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IObjectAnimationUsingKeyFrames<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IObjectAnimationUsingKeyFramesStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IObjectKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IObjectKeyFrameFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IObjectKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPaneThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPaneThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointAnimationUsingKeyFrames<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointAnimationUsingKeyFramesStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointKeyFrameFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointerDownThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointerDownThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointerUpThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPointerUpThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopInThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopInThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopOutThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopOutThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopupThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPopupThemeTransitionStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPowerEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPowerEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPowerEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IPowerEaseStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IQuadraticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IQuadraticEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IQuadraticEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IQuarticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IQuarticEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IQuarticEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IQuinticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IQuinticEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IQuinticEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IReorderThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepeatBehaviorHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepeatBehaviorHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepositionThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepositionThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepositionThemeTransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepositionThemeTransition2<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IRepositionThemeTransitionStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISineEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISineEase;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISineEase<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISlideNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplineColorKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplineColorKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplineDoubleKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplineDoubleKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplinePointKeyFrame<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplinePointKeyFrameStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplitCloseThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplitCloseThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplitOpenThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISplitOpenThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IStoryboard>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IStoryboard;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IStoryboard<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::IStoryboardStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::IStoryboardStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_IStoryboardStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISuppressNavigationTransitionInfo<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISwipeBackThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISwipeBackThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISwipeHintThemeAnimation<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ISwipeHintThemeAnimationStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ITimeline>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ITimeline;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ITimeline<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ITimelineFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ITimelineFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ITimelineFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ITimelineStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ITimelineStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ITimelineStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ITransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ITransition;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ITransition<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ITransitionFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ITransitionFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Animation::impl_ITransitionFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.AddDeleteThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::BackEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::BackEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.BackEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::BeginStoryboard>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::BeginStoryboard;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.BeginStoryboard"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::BounceEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::BounceEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.BounceEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::CircleEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::CircleEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.CircleEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ColorAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ColorAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ColorAnimationUsingKeyFrames"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ColorKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ColorKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ColorKeyFrameCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.CommonNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ConnectedAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ConnectedAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ConnectedAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationService"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ContentThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ContentThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ContentThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ContinuumNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::CubicEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::CubicEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.CubicEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DiscreteColorKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DiscreteDoubleKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DiscreteObjectKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DiscretePointKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DoubleAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DoubleAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DoubleAnimationUsingKeyFrames"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrameCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DragItemThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DragOverThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DrillInNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DrillInThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DrillOutThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.DropTargetItemThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EasingColorKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EasingDoubleKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingFunctionBase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EasingFunctionBase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EasingFunctionBase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EasingPointKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EdgeUIThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ElasticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ElasticEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ElasticEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EntranceNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.EntranceThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ExponentialEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ExponentialEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ExponentialEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.FadeInThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.FadeOutThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::KeySpline>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::KeySpline;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.KeySpline"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::KeyTimeHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::KeyTimeHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.KeyTimeHelper"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.LinearColorKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.LinearDoubleKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.LinearPointKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.NavigationThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.NavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ObjectAnimationUsingKeyFrames"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrameCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PaneThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PaneThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PaneThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointAnimationUsingKeyFrames"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointKeyFrameCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointerDownThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PointerUpThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PopInThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PopOutThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PopupThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PopupThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PopupThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::PowerEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::PowerEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.PowerEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::QuadraticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::QuadraticEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.QuadraticEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::QuarticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::QuarticEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.QuarticEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::QuinticEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::QuinticEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.QuinticEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.ReorderThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.RepeatBehaviorHelper"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.RepositionThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.RepositionThemeTransition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SineEase>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SineEase;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SineEase"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SlideNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SplineColorKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SplineDoubleKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SplinePointKeyFrame"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SplitCloseThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SplitOpenThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::Storyboard>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::Storyboard;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.Storyboard"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SuppressNavigationTransitionInfo"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SwipeBackThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.SwipeHintThemeAnimation"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::Timeline>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::Timeline;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.Timeline"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::TimelineCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::TimelineCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.TimelineCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::Transition>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::Transition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.Transition"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Animation::TransitionCollection>
{
    using abi = ABI::Windows::UI::Xaml::Media::Animation::TransitionCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Animation.TransitionCollection"; }
};

}

}
