// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Perception.Provider.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
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

#ifndef WINRT_GENERIC_c4db1093_d705_5503_8bce_68535cd42ffa
#define WINRT_GENERIC_c4db1093_d705_5503_8bce_68535cd42ffa
template <> struct __declspec(uuid("c4db1093-d705-5503-8bce-68535cd42ffa")) __declspec(novtable) IIterator<Windows::Devices::Perception::Provider::PerceptionCorrelation> : impl_IIterator<Windows::Devices::Perception::Provider::PerceptionCorrelation> {};
#endif


}

namespace Windows::Devices::Perception::Provider {

template <typename D>
struct WINRT_EBO impl_IKnownPerceptionFrameKindStatics
{
    hstring Color() const;
    hstring Depth() const;
    hstring Infrared() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionControlGroup
{
    Windows::Foundation::Collections::IVectorView<hstring> FrameProviderIds() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionControlGroupFactory
{
    Windows::Devices::Perception::Provider::PerceptionControlGroup Create(const Windows::Foundation::Collections::IIterable<hstring> & ids) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionCorrelation
{
    hstring TargetId() const;
    Windows::Foundation::Numerics::float3 Position() const;
    Windows::Foundation::Numerics::quaternion Orientation() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionCorrelationFactory
{
    Windows::Devices::Perception::Provider::PerceptionCorrelation Create(hstring_ref targetId, const Windows::Foundation::Numerics::float3 & position, const Windows::Foundation::Numerics::quaternion & orientation) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionCorrelationGroup
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> RelativeLocations() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionCorrelationGroupFactory
{
    Windows::Devices::Perception::Provider::PerceptionCorrelationGroup Create(const Windows::Foundation::Collections::IIterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> & relativeLocations) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFaceAuthenticationGroup
{
    Windows::Foundation::Collections::IVectorView<hstring> FrameProviderIds() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFaceAuthenticationGroupFactory
{
    Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup Create(const Windows::Foundation::Collections::IIterable<hstring> & ids, const Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler & startHandler, const Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler & stopHandler) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFrame
{
    Windows::Foundation::TimeSpan RelativeTime() const;
    void RelativeTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::Collections::ValueSet Properties() const;
    Windows::Foundation::IMemoryBuffer FrameData() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFrameProvider
{
    Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo FrameProviderInfo() const;
    bool Available() const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
    void Start() const;
    void Stop() const;
    void SetProperty(const Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFrameProviderInfo
{
    hstring Id() const;
    void Id(hstring_ref value) const;
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    hstring DeviceKind() const;
    void DeviceKind(hstring_ref value) const;
    hstring FrameKind() const;
    void FrameKind(hstring_ref value) const;
    bool Hidden() const;
    void Hidden(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFrameProviderManager
{
    Windows::Devices::Perception::Provider::IPerceptionFrameProvider GetFrameProvider(const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionFrameProviderManagerServiceStatics
{
    void RegisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const;
    void UnregisterFrameProviderInfo(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo & frameProviderInfo) const;
    void RegisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup) const;
    void UnregisterFaceAuthenticationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & faceAuthenticationGroup) const;
    void RegisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup) const;
    void UnregisterControlGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionControlGroup & controlGroup) const;
    void RegisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup) const;
    void UnregisterCorrelationGroup(const Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager & manager, const Windows::Devices::Perception::Provider::PerceptionCorrelationGroup & correlationGroup) const;
    void UpdateAvailabilityForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, bool available) const;
    void PublishFrameForProvider(const Windows::Devices::Perception::Provider::IPerceptionFrameProvider & provider, const Windows::Devices::Perception::Provider::PerceptionFrame & frame) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionPropertyChangeRequest
{
    hstring Name() const;
    Windows::IInspectable Value() const;
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus Status() const;
    void Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value) const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionVideoFrameAllocator
{
    Windows::Devices::Perception::Provider::PerceptionFrame AllocateFrame() const;
    Windows::Devices::Perception::Provider::PerceptionFrame CopyFromVideoFrame(const Windows::Media::VideoFrame & frame) const;
};

template <typename D>
struct WINRT_EBO impl_IPerceptionVideoFrameAllocatorFactory
{
    Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator Create(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat format, const Windows::Foundation::Size & resolution, Windows::Graphics::Imaging::BitmapAlphaMode alpha) const;
};

struct PerceptionStartFaceAuthenticationHandler : Windows::IUnknown
{
    PerceptionStartFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PerceptionStartFaceAuthenticationHandler>(m_ptr); }
    template <typename L> PerceptionStartFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStartFaceAuthenticationHandler (F * function);
    template <typename O, typename M> PerceptionStartFaceAuthenticationHandler(O * object, M method);
    bool operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const;
};

struct PerceptionStopFaceAuthenticationHandler : Windows::IUnknown
{
    PerceptionStopFaceAuthenticationHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PerceptionStopFaceAuthenticationHandler>(m_ptr); }
    template <typename L> PerceptionStopFaceAuthenticationHandler(L lambda);
    template <typename F> PerceptionStopFaceAuthenticationHandler (F * function);
    template <typename O, typename M> PerceptionStopFaceAuthenticationHandler(O * object, M method);
    void operator()(const Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup & sender) const;
};

struct IKnownPerceptionFrameKindStatics :
    Windows::IInspectable,
    impl::consume<IKnownPerceptionFrameKindStatics>
{
    IKnownPerceptionFrameKindStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IKnownPerceptionFrameKindStatics>(m_ptr); }
};

struct IPerceptionControlGroup :
    Windows::IInspectable,
    impl::consume<IPerceptionControlGroup>
{
    IPerceptionControlGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionControlGroup>(m_ptr); }
};

struct IPerceptionControlGroupFactory :
    Windows::IInspectable,
    impl::consume<IPerceptionControlGroupFactory>
{
    IPerceptionControlGroupFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionControlGroupFactory>(m_ptr); }
};

struct IPerceptionCorrelation :
    Windows::IInspectable,
    impl::consume<IPerceptionCorrelation>
{
    IPerceptionCorrelation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionCorrelation>(m_ptr); }
};

struct IPerceptionCorrelationFactory :
    Windows::IInspectable,
    impl::consume<IPerceptionCorrelationFactory>
{
    IPerceptionCorrelationFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionCorrelationFactory>(m_ptr); }
};

struct IPerceptionCorrelationGroup :
    Windows::IInspectable,
    impl::consume<IPerceptionCorrelationGroup>
{
    IPerceptionCorrelationGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionCorrelationGroup>(m_ptr); }
};

struct IPerceptionCorrelationGroupFactory :
    Windows::IInspectable,
    impl::consume<IPerceptionCorrelationGroupFactory>
{
    IPerceptionCorrelationGroupFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionCorrelationGroupFactory>(m_ptr); }
};

struct IPerceptionFaceAuthenticationGroup :
    Windows::IInspectable,
    impl::consume<IPerceptionFaceAuthenticationGroup>
{
    IPerceptionFaceAuthenticationGroup(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFaceAuthenticationGroup>(m_ptr); }
};

struct IPerceptionFaceAuthenticationGroupFactory :
    Windows::IInspectable,
    impl::consume<IPerceptionFaceAuthenticationGroupFactory>
{
    IPerceptionFaceAuthenticationGroupFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFaceAuthenticationGroupFactory>(m_ptr); }
};

struct IPerceptionFrame :
    Windows::IInspectable,
    impl::consume<IPerceptionFrame>
{
    IPerceptionFrame(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFrame>(m_ptr); }
};

struct IPerceptionFrameProvider :
    Windows::IInspectable,
    impl::consume<IPerceptionFrameProvider>,
    impl::require<IPerceptionFrameProvider, Windows::Foundation::IClosable>
{
    IPerceptionFrameProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFrameProvider>(m_ptr); }
};

struct IPerceptionFrameProviderInfo :
    Windows::IInspectable,
    impl::consume<IPerceptionFrameProviderInfo>
{
    IPerceptionFrameProviderInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFrameProviderInfo>(m_ptr); }
};

struct IPerceptionFrameProviderManager :
    Windows::IInspectable,
    impl::consume<IPerceptionFrameProviderManager>,
    impl::require<IPerceptionFrameProviderManager, Windows::Foundation::IClosable>
{
    IPerceptionFrameProviderManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFrameProviderManager>(m_ptr); }
};

struct IPerceptionFrameProviderManagerServiceStatics :
    Windows::IInspectable,
    impl::consume<IPerceptionFrameProviderManagerServiceStatics>
{
    IPerceptionFrameProviderManagerServiceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionFrameProviderManagerServiceStatics>(m_ptr); }
};

struct IPerceptionPropertyChangeRequest :
    Windows::IInspectable,
    impl::consume<IPerceptionPropertyChangeRequest>
{
    IPerceptionPropertyChangeRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionPropertyChangeRequest>(m_ptr); }
};

struct IPerceptionVideoFrameAllocator :
    Windows::IInspectable,
    impl::consume<IPerceptionVideoFrameAllocator>,
    impl::require<IPerceptionVideoFrameAllocator, Windows::Foundation::IClosable>
{
    IPerceptionVideoFrameAllocator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionVideoFrameAllocator>(m_ptr); }
};

struct IPerceptionVideoFrameAllocatorFactory :
    Windows::IInspectable,
    impl::consume<IPerceptionVideoFrameAllocatorFactory>
{
    IPerceptionVideoFrameAllocatorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerceptionVideoFrameAllocatorFactory>(m_ptr); }
};

}

}
