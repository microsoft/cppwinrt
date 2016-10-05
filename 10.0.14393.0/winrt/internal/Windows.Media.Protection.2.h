// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Protection.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_3623cc0c_c765_57fb_967d_c7cb6097bd78
#define WINRT_GENERIC_3623cc0c_c765_57fb_967d_c7cb6097bd78
template <> struct __declspec(uuid("3623cc0c-c765-57fb-967d-c7cb6097bd78")) __declspec(novtable) IVector<Windows::Media::Protection::RevocationAndRenewalItem> : impl_IVector<Windows::Media::Protection::RevocationAndRenewalItem> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_8e330979_2fef_5d68_88aa_a9ee6697d117
#define WINRT_GENERIC_8e330979_2fef_5d68_88aa_a9ee6697d117
template <> struct __declspec(uuid("8e330979-2fef-5d68-88aa-a9ee6697d117")) __declspec(novtable) IReference<winrt::Windows::Media::Protection::HdcpProtection> : impl_IReference<winrt::Windows::Media::Protection::HdcpProtection> {};
#endif

#ifndef WINRT_GENERIC_5061ee0f_899a_569c_a0a3_c2566eb88142
#define WINRT_GENERIC_5061ee0f_899a_569c_a0a3_c2566eb88142
template <> struct __declspec(uuid("5061ee0f-899a-569c-a0a3-c2566eb88142")) __declspec(novtable) IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult> : impl_IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult> {};
#endif

#ifndef WINRT_GENERIC_f82ae043_54fb_5366_a607_19b68e6bab8c
#define WINRT_GENERIC_f82ae043_54fb_5366_a607_19b68e6bab8c
template <> struct __declspec(uuid("f82ae043-54fb-5366-a607-19b68e6bab8c")) __declspec(novtable) TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_595dcc09_9ad3_5094_800a_0883cce1ef01
#define WINRT_GENERIC_595dcc09_9ad3_5094_800a_0883cce1ef01
template <> struct __declspec(uuid("595dcc09-9ad3-5094-800a-0883cce1ef01")) __declspec(novtable) IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> : impl_IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_dfb9655c_8b22_511f_8eaf_3aea7521802b
#define WINRT_GENERIC_dfb9655c_8b22_511f_8eaf_3aea7521802b
template <> struct __declspec(uuid("dfb9655c-8b22-511f-8eaf-3aea7521802b")) __declspec(novtable) IIterator<Windows::Media::Protection::RevocationAndRenewalItem> : impl_IIterator<Windows::Media::Protection::RevocationAndRenewalItem> {};
#endif

#ifndef WINRT_GENERIC_07015868_578c_556b_8a35_4039a35d1d92
#define WINRT_GENERIC_07015868_578c_556b_8a35_4039a35d1d92
template <> struct __declspec(uuid("07015868-578c-556b-8a35-4039a35d1d92")) __declspec(novtable) IIterable<Windows::Media::Protection::RevocationAndRenewalItem> : impl_IIterable<Windows::Media::Protection::RevocationAndRenewalItem> {};
#endif

#ifndef WINRT_GENERIC_4a8793e2_33b8_5850_9943_6a94375caa89
#define WINRT_GENERIC_4a8793e2_33b8_5850_9943_6a94375caa89
template <> struct __declspec(uuid("4a8793e2-33b8-5850-9943-6a94375caa89")) __declspec(novtable) IVectorView<Windows::Media::Protection::RevocationAndRenewalItem> : impl_IVectorView<Windows::Media::Protection::RevocationAndRenewalItem> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_19344a58_a5c1_5168_803e_632771628143
#define WINRT_GENERIC_19344a58_a5c1_5168_803e_632771628143
template <> struct __declspec(uuid("19344a58-a5c1-5168-803e-632771628143")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Media::Protection::HdcpSetProtectionResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::Media::Protection::HdcpSetProtectionResult> {};
#endif

#ifndef WINRT_GENERIC_b9da4aa0_26e0_5d69_a0c8_05716a406235
#define WINRT_GENERIC_b9da4aa0_26e0_5d69_a0c8_05716a406235
template <> struct __declspec(uuid("b9da4aa0-26e0-5d69-a0c8-05716a406235")) __declspec(novtable) AsyncOperationProgressHandler<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> : impl_AsyncOperationProgressHandler<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_ec067827_67d9_59a6_a57b_3e7ca12b89c1
#define WINRT_GENERIC_ec067827_67d9_59a6_a57b_3e7ca12b89c1
template <> struct __declspec(uuid("ec067827-67d9-59a6-a57b-3e7ca12b89c1")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> : impl_AsyncOperationWithProgressCompletedHandler<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> {};
#endif


}

namespace Windows::Media::Protection {

template <typename D>
struct WINRT_EBO impl_IComponentLoadFailedEventArgs
{
    Windows::Media::Protection::RevocationAndRenewalInformation Information() const;
    Windows::Media::Protection::MediaProtectionServiceCompletion Completion() const;
};

template <typename D>
struct WINRT_EBO impl_IComponentRenewalStatics
{
    Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Media::Protection::RenewalStatus, uint32_t> RenewSystemComponentsAsync(const Windows::Media::Protection::RevocationAndRenewalInformation & information) const;
};

template <typename D>
struct WINRT_EBO impl_IHdcpSession
{
    bool IsEffectiveProtectionAtLeast(Windows::Media::Protection::HdcpProtection protection) const;
    Windows::Foundation::IReference<winrt::Windows::Media::Protection::HdcpProtection> GetEffectiveProtection() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Protection::HdcpSetProtectionResult> SetDesiredMinProtectionAsync(Windows::Media::Protection::HdcpProtection protection) const;
    event_token ProtectionChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> & handler) const;
    using ProtectionChanged_revoker = event_revoker<IHdcpSession>;
    ProtectionChanged_revoker ProtectionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Protection::HdcpSession, Windows::IInspectable> & handler) const;
    void ProtectionChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProtectionManager
{
    event_token ServiceRequested(const Windows::Media::Protection::ServiceRequestedEventHandler & handler) const;
    using ServiceRequested_revoker = event_revoker<IMediaProtectionManager>;
    ServiceRequested_revoker ServiceRequested(auto_revoke_t, const Windows::Media::Protection::ServiceRequestedEventHandler & handler) const;
    void ServiceRequested(event_token cookie) const;
    event_token RebootNeeded(const Windows::Media::Protection::RebootNeededEventHandler & handler) const;
    using RebootNeeded_revoker = event_revoker<IMediaProtectionManager>;
    RebootNeeded_revoker RebootNeeded(auto_revoke_t, const Windows::Media::Protection::RebootNeededEventHandler & handler) const;
    void RebootNeeded(event_token cookie) const;
    event_token ComponentLoadFailed(const Windows::Media::Protection::ComponentLoadFailedEventHandler & handler) const;
    using ComponentLoadFailed_revoker = event_revoker<IMediaProtectionManager>;
    ComponentLoadFailed_revoker ComponentLoadFailed(auto_revoke_t, const Windows::Media::Protection::ComponentLoadFailedEventHandler & handler) const;
    void ComponentLoadFailed(event_token cookie) const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProtectionPMPServer
{
    Windows::Foundation::Collections::IPropertySet Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProtectionPMPServerFactory
{
    Windows::Media::Protection::MediaProtectionPMPServer CreatePMPServer(const Windows::Foundation::Collections::IPropertySet & pProperties) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProtectionServiceCompletion
{
    void Complete(bool success) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaProtectionServiceRequest
{
    GUID ProtectionSystem() const;
    GUID Type() const;
};

template <typename D>
struct WINRT_EBO impl_IProtectionCapabilities
{
    Windows::Media::Protection::ProtectionCapabilityResult IsTypeSupported(hstring_ref type, hstring_ref keySystem) const;
};

template <typename D>
struct WINRT_EBO impl_IRevocationAndRenewalInformation
{
    Windows::Foundation::Collections::IVector<Windows::Media::Protection::RevocationAndRenewalItem> Items() const;
};

template <typename D>
struct WINRT_EBO impl_IRevocationAndRenewalItem
{
    Windows::Media::Protection::RevocationAndRenewalReasons Reasons() const;
    hstring HeaderHash() const;
    hstring PublicKeyHash() const;
    hstring Name() const;
    hstring RenewalId() const;
};

template <typename D>
struct WINRT_EBO impl_IServiceRequestedEventArgs
{
    Windows::Media::Protection::IMediaProtectionServiceRequest Request() const;
    Windows::Media::Protection::MediaProtectionServiceCompletion Completion() const;
};

template <typename D>
struct WINRT_EBO impl_IServiceRequestedEventArgs2
{
    Windows::Media::Playback::MediaPlaybackItem MediaPlaybackItem() const;
};

struct ComponentLoadFailedEventHandler : Windows::IUnknown
{
    ComponentLoadFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ComponentLoadFailedEventHandler>(m_ptr); }
    template <typename L> ComponentLoadFailedEventHandler(L lambda);
    template <typename F> ComponentLoadFailedEventHandler (F * function);
    template <typename O, typename M> ComponentLoadFailedEventHandler(O * object, M method);
    void operator()(const Windows::Media::Protection::MediaProtectionManager & sender, const Windows::Media::Protection::ComponentLoadFailedEventArgs & e) const;
};

struct RebootNeededEventHandler : Windows::IUnknown
{
    RebootNeededEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<RebootNeededEventHandler>(m_ptr); }
    template <typename L> RebootNeededEventHandler(L lambda);
    template <typename F> RebootNeededEventHandler (F * function);
    template <typename O, typename M> RebootNeededEventHandler(O * object, M method);
    void operator()(const Windows::Media::Protection::MediaProtectionManager & sender) const;
};

struct ServiceRequestedEventHandler : Windows::IUnknown
{
    ServiceRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ServiceRequestedEventHandler>(m_ptr); }
    template <typename L> ServiceRequestedEventHandler(L lambda);
    template <typename F> ServiceRequestedEventHandler (F * function);
    template <typename O, typename M> ServiceRequestedEventHandler(O * object, M method);
    void operator()(const Windows::Media::Protection::MediaProtectionManager & sender, const Windows::Media::Protection::ServiceRequestedEventArgs & e) const;
};

struct IComponentLoadFailedEventArgs :
    Windows::IInspectable,
    impl::consume<IComponentLoadFailedEventArgs>
{
    IComponentLoadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComponentLoadFailedEventArgs>(m_ptr); }
};

struct IComponentRenewalStatics :
    Windows::IInspectable,
    impl::consume<IComponentRenewalStatics>
{
    IComponentRenewalStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IComponentRenewalStatics>(m_ptr); }
};

struct IHdcpSession :
    Windows::IInspectable,
    impl::consume<IHdcpSession>,
    impl::require<IHdcpSession, Windows::Foundation::IClosable>
{
    IHdcpSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHdcpSession>(m_ptr); }
};

struct IMediaProtectionManager :
    Windows::IInspectable,
    impl::consume<IMediaProtectionManager>
{
    IMediaProtectionManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProtectionManager>(m_ptr); }
};

struct IMediaProtectionPMPServer :
    Windows::IInspectable,
    impl::consume<IMediaProtectionPMPServer>
{
    IMediaProtectionPMPServer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProtectionPMPServer>(m_ptr); }
};

struct IMediaProtectionPMPServerFactory :
    Windows::IInspectable,
    impl::consume<IMediaProtectionPMPServerFactory>
{
    IMediaProtectionPMPServerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProtectionPMPServerFactory>(m_ptr); }
};

struct IMediaProtectionServiceCompletion :
    Windows::IInspectable,
    impl::consume<IMediaProtectionServiceCompletion>
{
    IMediaProtectionServiceCompletion(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProtectionServiceCompletion>(m_ptr); }
};

struct IMediaProtectionServiceRequest :
    Windows::IInspectable,
    impl::consume<IMediaProtectionServiceRequest>
{
    IMediaProtectionServiceRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaProtectionServiceRequest>(m_ptr); }
};

struct IProtectionCapabilities :
    Windows::IInspectable,
    impl::consume<IProtectionCapabilities>
{
    IProtectionCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProtectionCapabilities>(m_ptr); }
};

struct IRevocationAndRenewalInformation :
    Windows::IInspectable,
    impl::consume<IRevocationAndRenewalInformation>
{
    IRevocationAndRenewalInformation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRevocationAndRenewalInformation>(m_ptr); }
};

struct IRevocationAndRenewalItem :
    Windows::IInspectable,
    impl::consume<IRevocationAndRenewalItem>
{
    IRevocationAndRenewalItem(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRevocationAndRenewalItem>(m_ptr); }
};

struct IServiceRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IServiceRequestedEventArgs>
{
    IServiceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IServiceRequestedEventArgs>(m_ptr); }
};

struct IServiceRequestedEventArgs2 :
    Windows::IInspectable,
    impl::consume<IServiceRequestedEventArgs2>
{
    IServiceRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IServiceRequestedEventArgs2>(m_ptr); }
};

}

}
