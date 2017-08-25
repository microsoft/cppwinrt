// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

struct ComponentLoadFailedEventHandler : Windows::Foundation::IUnknown
{
    ComponentLoadFailedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ComponentLoadFailedEventHandler(L lambda);
    template <typename F> ComponentLoadFailedEventHandler(F* function);
    template <typename O, typename M> ComponentLoadFailedEventHandler(O* object, M method);
    void operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ComponentLoadFailedEventArgs const& e) const;
};

struct RebootNeededEventHandler : Windows::Foundation::IUnknown
{
    RebootNeededEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RebootNeededEventHandler(L lambda);
    template <typename F> RebootNeededEventHandler(F* function);
    template <typename O, typename M> RebootNeededEventHandler(O* object, M method);
    void operator()(Windows::Media::Protection::MediaProtectionManager const& sender) const;
};

struct ServiceRequestedEventHandler : Windows::Foundation::IUnknown
{
    ServiceRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ServiceRequestedEventHandler(L lambda);
    template <typename F> ServiceRequestedEventHandler(F* function);
    template <typename O, typename M> ServiceRequestedEventHandler(O* object, M method);
    void operator()(Windows::Media::Protection::MediaProtectionManager const& sender, Windows::Media::Protection::ServiceRequestedEventArgs const& e) const;
};

struct WINRT_EBO ComponentLoadFailedEventArgs :
    Windows::Media::Protection::IComponentLoadFailedEventArgs
{
    ComponentLoadFailedEventArgs(std::nullptr_t) noexcept {}
};

struct ComponentRenewal
{
    ComponentRenewal() = delete;
    static Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Protection::RenewalStatus, uint32_t> RenewSystemComponentsAsync(Windows::Media::Protection::RevocationAndRenewalInformation const& information);
};

struct WINRT_EBO HdcpSession :
    Windows::Media::Protection::IHdcpSession
{
    HdcpSession(std::nullptr_t) noexcept {}
    HdcpSession();
};

struct WINRT_EBO MediaProtectionManager :
    Windows::Media::Protection::IMediaProtectionManager
{
    MediaProtectionManager(std::nullptr_t) noexcept {}
    MediaProtectionManager();
};

struct WINRT_EBO MediaProtectionPMPServer :
    Windows::Media::Protection::IMediaProtectionPMPServer
{
    MediaProtectionPMPServer(std::nullptr_t) noexcept {}
    MediaProtectionPMPServer(Windows::Foundation::Collections::IPropertySet const& pProperties);
};

struct WINRT_EBO MediaProtectionServiceCompletion :
    Windows::Media::Protection::IMediaProtectionServiceCompletion
{
    MediaProtectionServiceCompletion(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProtectionCapabilities :
    Windows::Media::Protection::IProtectionCapabilities
{
    ProtectionCapabilities(std::nullptr_t) noexcept {}
    ProtectionCapabilities();
};

struct WINRT_EBO RevocationAndRenewalInformation :
    Windows::Media::Protection::IRevocationAndRenewalInformation
{
    RevocationAndRenewalInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RevocationAndRenewalItem :
    Windows::Media::Protection::IRevocationAndRenewalItem
{
    RevocationAndRenewalItem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ServiceRequestedEventArgs :
    Windows::Media::Protection::IServiceRequestedEventArgs,
    impl::require<ServiceRequestedEventArgs, Windows::Media::Protection::IServiceRequestedEventArgs2>
{
    ServiceRequestedEventArgs(std::nullptr_t) noexcept {}
};

}
