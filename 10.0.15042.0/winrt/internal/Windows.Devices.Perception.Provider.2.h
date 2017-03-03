// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Perception.Provider.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_ca6bf87e_1745_5cd0_aee2_59736f5a206d
#define WINRT_GENERIC_ca6bf87e_1745_5cd0_aee2_59736f5a206d
template <> struct __declspec(uuid("ca6bf87e-1745-5cd0-aee2-59736f5a206d")) __declspec(novtable) IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> : impl_IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> {};
#endif

#ifndef WINRT_GENERIC_244cad66_afbe_5394_b7b7_43a61fcbfc6d
#define WINRT_GENERIC_244cad66_afbe_5394_b7b7_43a61fcbfc6d
template <> struct __declspec(uuid("244cad66-afbe-5394-b7b7-43a61fcbfc6d")) __declspec(novtable) IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> : impl_IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_98fe92a5_2f0b_5a81_938f_b5173d2b1355
#define WINRT_GENERIC_98fe92a5_2f0b_5a81_938f_b5173d2b1355
template <> struct __declspec(uuid("98fe92a5-2f0b-5a81-938f-b5173d2b1355")) __declspec(novtable) IVector<Windows::Devices::Perception::Provider::PerceptionCorrelation> : impl_IVector<Windows::Devices::Perception::Provider::PerceptionCorrelation> {};
#endif

#ifndef WINRT_GENERIC_c4db1093_d705_5503_8bce_68535cd42ffa
#define WINRT_GENERIC_c4db1093_d705_5503_8bce_68535cd42ffa
template <> struct __declspec(uuid("c4db1093-d705-5503-8bce-68535cd42ffa")) __declspec(novtable) IIterator<Windows::Devices::Perception::Provider::PerceptionCorrelation> : impl_IIterator<Windows::Devices::Perception::Provider::PerceptionCorrelation> {};
#endif


}

namespace Windows::Devices::Perception::Provider {

struct [[deprecated("PerceptionStartFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionStartFaceAuthenticationHandler : Windows::Foundation::IUnknown
{
    PerceptionStartFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PerceptionStartFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStartFaceAuthenticationHandler (F * function);
    template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(O * object, M method);
    bool operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const;
};

struct [[deprecated("PerceptionStopFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionStopFaceAuthenticationHandler : Windows::Foundation::IUnknown
{
    PerceptionStopFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PerceptionStopFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStopFaceAuthenticationHandler (F * function);
    template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(O * object, M method);
    void operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const;
};

struct IKnownPerceptionFrameKindStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IKnownPerceptionFrameKindStatics>
{
    IKnownPerceptionFrameKindStatics(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IKnownPerceptionFrameKindStatics;

struct IPerceptionControlGroup :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionControlGroup>
{
    IPerceptionControlGroup(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionControlGroup;

struct IPerceptionControlGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionControlGroupFactory>
{
    IPerceptionControlGroupFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionControlGroupFactory;

struct IPerceptionCorrelation :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionCorrelation>
{
    IPerceptionCorrelation(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelation;

struct IPerceptionCorrelationFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionCorrelationFactory>
{
    IPerceptionCorrelationFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationFactory;

struct IPerceptionCorrelationGroup :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionCorrelationGroup>
{
    IPerceptionCorrelationGroup(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationGroup;

struct IPerceptionCorrelationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionCorrelationGroupFactory>
{
    IPerceptionCorrelationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationGroupFactory;

struct IPerceptionFaceAuthenticationGroup :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFaceAuthenticationGroup>
{
    IPerceptionFaceAuthenticationGroup(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFaceAuthenticationGroup;

struct IPerceptionFaceAuthenticationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFaceAuthenticationGroupFactory>
{
    IPerceptionFaceAuthenticationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFaceAuthenticationGroupFactory;

struct IPerceptionFrame :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFrame>
{
    IPerceptionFrame(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrame;

struct IPerceptionFrameProvider :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFrameProvider>,
    impl::require<IPerceptionFrameProvider, Windows::Foundation::IClosable>
{
    IPerceptionFrameProvider(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProvider;

struct IPerceptionFrameProviderInfo :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFrameProviderInfo>
{
    IPerceptionFrameProviderInfo(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderInfo;

struct IPerceptionFrameProviderManager :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFrameProviderManager>,
    impl::require<IPerceptionFrameProviderManager, Windows::Foundation::IClosable>
{
    IPerceptionFrameProviderManager(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderManager;

struct IPerceptionFrameProviderManagerServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionFrameProviderManagerServiceStatics>
{
    IPerceptionFrameProviderManagerServiceStatics(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderManagerServiceStatics;

struct IPerceptionPropertyChangeRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionPropertyChangeRequest>
{
    IPerceptionPropertyChangeRequest(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionPropertyChangeRequest;

struct IPerceptionVideoFrameAllocator :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionVideoFrameAllocator>,
    impl::require<IPerceptionVideoFrameAllocator, Windows::Foundation::IClosable>
{
    IPerceptionVideoFrameAllocator(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionVideoFrameAllocator;

struct IPerceptionVideoFrameAllocatorFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IPerceptionVideoFrameAllocatorFactory>
{
    IPerceptionVideoFrameAllocatorFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionVideoFrameAllocatorFactory;

}

}
