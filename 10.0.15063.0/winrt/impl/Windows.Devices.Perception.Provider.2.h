// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Perception.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Devices.Perception.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Perception::Provider {

struct [[deprecated("PerceptionStartFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionStartFaceAuthenticationHandler : Windows::Foundation::IUnknown
{
    PerceptionStartFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PerceptionStartFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStartFaceAuthenticationHandler(F* function);
    template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(O* object, M method);
    bool operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const;
};

struct [[deprecated("PerceptionStopFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionStopFaceAuthenticationHandler : Windows::Foundation::IUnknown
{
    PerceptionStopFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PerceptionStopFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStopFaceAuthenticationHandler(F* function);
    template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(O* object, M method);
    void operator()(Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& sender) const;
};

struct [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] KnownPerceptionFrameKind
{
    KnownPerceptionFrameKind() = delete;
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static hstring Color();
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static hstring Depth();
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static hstring Infrared();
};

struct WINRT_EBO [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionControlGroup :
    Windows::Devices::Perception::Provider::IPerceptionControlGroup
{
    PerceptionControlGroup(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionControlGroup(param::iterable<hstring> const& ids);
};

struct WINRT_EBO [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionCorrelation :
    Windows::Devices::Perception::Provider::IPerceptionCorrelation
{
    PerceptionCorrelation(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionCorrelation(param::hstring const& targetId, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation);
};

struct WINRT_EBO [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionCorrelationGroup :
    Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup
{
    PerceptionCorrelationGroup(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionCorrelationGroup(param::iterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const& relativeLocations);
};

struct WINRT_EBO [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionFaceAuthenticationGroup :
    Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup
{
    PerceptionFaceAuthenticationGroup(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionFaceAuthenticationGroup(param::iterable<hstring> const& ids, Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const& startHandler, Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const& stopHandler);
};

struct WINRT_EBO [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionFrame :
    Windows::Devices::Perception::Provider::IPerceptionFrame
{
    PerceptionFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionFrameProviderInfo :
    Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo
{
    PerceptionFrameProviderInfo(std::nullptr_t) noexcept {}
    PerceptionFrameProviderInfo();
};

struct [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionFrameProviderManagerService
{
    PerceptionFrameProviderManagerService() = delete;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void RegisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void UnregisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void RegisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void UnregisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void RegisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void UnregisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void RegisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void UnregisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void UpdateAvailabilityForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, bool available);
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] static void PublishFrameForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, Windows::Devices::Perception::Provider::PerceptionFrame const& frame);
};

struct WINRT_EBO [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionPropertyChangeRequest :
    Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest
{
    PerceptionPropertyChangeRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionVideoFrameAllocator :
    Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator
{
    PerceptionVideoFrameAllocator(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] PerceptionVideoFrameAllocator(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Foundation::Size const& resolution, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
};

}
