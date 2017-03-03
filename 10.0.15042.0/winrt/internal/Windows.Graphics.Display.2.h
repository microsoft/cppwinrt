// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Display.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_430ecece_1418_5d19_81b2_5ddb381603cc
#define WINRT_GENERIC_430ecece_1418_5d19_81b2_5ddb381603cc
template <> struct __declspec(uuid("430ecece-1418-5d19-81b2-5ddb381603cc")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> : impl_IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> {};
#endif

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif

#ifndef WINRT_GENERIC_86c4f619_67b6_51c7_b30d_d8cf13625327
#define WINRT_GENERIC_86c4f619_67b6_51c7_b30d_d8cf13625327
template <> struct __declspec(uuid("86c4f619-67b6-51c7-b30d-d8cf13625327")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_a460214e_6620_521d_9cb9_a0a0f732ce90
#define WINRT_GENERIC_a460214e_6620_521d_9cb9_a0a0f732ce90
template <> struct __declspec(uuid("a460214e-6620-521d-9cb9-a0a0f732ce90")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> : impl_TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_398c4183_793d_5b00_819b_4aef92485e94
#define WINRT_GENERIC_398c4183_793d_5b00_819b_4aef92485e94
template <> struct __declspec(uuid("398c4183-793d-5b00-819b-4aef92485e94")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStream> {};
#endif


}

namespace Windows::Graphics::Display {

struct [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] DisplayPropertiesEventHandler : Windows::Foundation::IUnknown
{
    DisplayPropertiesEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DisplayPropertiesEventHandler(L lambda);
    template <typename F> DisplayPropertiesEventHandler (F * function);
    template <typename O, typename M> DisplayPropertiesEventHandler(O * object, M method);
    void operator()(const Windows::Foundation::IInspectable & sender) const;
};

struct IBrightnessOverride :
    Windows::Foundation::IInspectable,
    impl::consume<IBrightnessOverride>
{
    IBrightnessOverride(std::nullptr_t = nullptr) noexcept {}
};

struct IBrightnessOverrideStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IBrightnessOverrideStatics>
{
    IBrightnessOverrideStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayInformation>
{
    IDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayInformation2>,
    impl::require<IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation>
{
    IDisplayInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation3 :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayInformation3>
{
    IDisplayInformation3(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformation4 :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayInformation4>
{
    IDisplayInformation4(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayInformationStatics>
{
    IDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IDisplayPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IDisplayPropertiesStatics>
{
    IDisplayPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] IDisplayPropertiesStatics;

}

}
