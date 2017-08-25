// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Perception.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Devices.Perception.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Perception::Provider {

struct WINRT_EBO [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IKnownPerceptionFrameKindStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownPerceptionFrameKindStatics>
{
    IKnownPerceptionFrameKindStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionControlGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionControlGroup>
{
    IPerceptionControlGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionControlGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionControlGroupFactory>
{
    IPerceptionControlGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionCorrelation>
{
    IPerceptionCorrelation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionCorrelationFactory>
{
    IPerceptionCorrelationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionCorrelationGroup>
{
    IPerceptionCorrelationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionCorrelationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionCorrelationGroupFactory>
{
    IPerceptionCorrelationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFaceAuthenticationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFaceAuthenticationGroup>
{
    IPerceptionFaceAuthenticationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFaceAuthenticationGroupFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFaceAuthenticationGroupFactory>
{
    IPerceptionFaceAuthenticationGroupFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrame>
{
    IPerceptionFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameProvider>,
    impl::require<IPerceptionFrameProvider, Windows::Foundation::IClosable>
{
    IPerceptionFrameProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameProviderInfo>
{
    IPerceptionFrameProviderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameProviderManager>,
    impl::require<IPerceptionFrameProviderManager, Windows::Foundation::IClosable>
{
    IPerceptionFrameProviderManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionFrameProviderManagerServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionFrameProviderManagerServiceStatics>
{
    IPerceptionFrameProviderManagerServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionPropertyChangeRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionPropertyChangeRequest>
{
    IPerceptionPropertyChangeRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionVideoFrameAllocator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionVideoFrameAllocator>,
    impl::require<IPerceptionVideoFrameAllocator, Windows::Foundation::IClosable>
{
    IPerceptionVideoFrameAllocator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] IPerceptionVideoFrameAllocatorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerceptionVideoFrameAllocatorFactory>
{
    IPerceptionVideoFrameAllocatorFactory(std::nullptr_t = nullptr) noexcept {}
};

}
