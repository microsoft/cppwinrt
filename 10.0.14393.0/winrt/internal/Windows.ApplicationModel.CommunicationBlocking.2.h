// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.CommunicationBlocking.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace Windows::ApplicationModel::CommunicationBlocking {

template <typename D>
struct WINRT_EBO impl_ICommunicationBlockingAccessManagerStatics
{
    bool IsBlockingActive() const;
    Windows::Foundation::IAsyncOperation<bool> IsBlockedNumberAsync(hstring_ref number) const;
    bool ShowBlockNumbersUI(const Windows::Foundation::Collections::IIterable<hstring> & phoneNumbers) const;
    bool ShowUnblockNumbersUI(const Windows::Foundation::Collections::IIterable<hstring> & phoneNumbers) const;
    void ShowBlockedCallsUI() const;
    void ShowBlockedMessagesUI() const;
};

template <typename D>
struct WINRT_EBO impl_ICommunicationBlockingAppManagerStatics
{
    bool IsCurrentAppActiveBlockingApp() const;
    void ShowCommunicationBlockingSettingsUI() const;
};

template <typename D>
struct WINRT_EBO impl_ICommunicationBlockingAppManagerStatics2
{
    Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveBlockingAppAsync() const;
};

struct ICommunicationBlockingAccessManagerStatics :
    Windows::IInspectable,
    impl::consume<ICommunicationBlockingAccessManagerStatics>
{
    ICommunicationBlockingAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommunicationBlockingAccessManagerStatics>(m_ptr); }
};

struct ICommunicationBlockingAppManagerStatics :
    Windows::IInspectable,
    impl::consume<ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommunicationBlockingAppManagerStatics>(m_ptr); }
};

struct ICommunicationBlockingAppManagerStatics2 :
    Windows::IInspectable,
    impl::consume<ICommunicationBlockingAppManagerStatics2>,
    impl::require<ICommunicationBlockingAppManagerStatics2, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICommunicationBlockingAppManagerStatics2>(m_ptr); }
};

}

}
