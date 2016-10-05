// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Calls.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace Windows::ApplicationModel::Calls::Provider {

template <typename D>
struct WINRT_EBO impl_IPhoneCallOrigin
{
    hstring Category() const;
    void Category(hstring_ref value) const;
    hstring CategoryDescription() const;
    void CategoryDescription(hstring_ref value) const;
    hstring Location() const;
    void Location(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneCallOrigin2
{
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneCallOrigin3
{
    Windows::Storage::StorageFile DisplayPicture() const;
    void DisplayPicture(const Windows::Storage::StorageFile & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneCallOriginManagerStatics
{
    bool IsCurrentAppActiveCallOriginApp() const;
    void ShowPhoneCallOriginSettingsUI() const;
    void SetCallOrigin(GUID requestId, const Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin & callOrigin) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneCallOriginManagerStatics2
{
    Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveCallOriginAppAsync() const;
};

struct IPhoneCallOrigin :
    Windows::IInspectable,
    impl::consume<IPhoneCallOrigin>
{
    IPhoneCallOrigin(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOrigin>(m_ptr); }
};

struct IPhoneCallOrigin2 :
    Windows::IInspectable,
    impl::consume<IPhoneCallOrigin2>,
    impl::require<IPhoneCallOrigin2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
{
    IPhoneCallOrigin2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOrigin2>(m_ptr); }
};

struct IPhoneCallOrigin3 :
    Windows::IInspectable,
    impl::consume<IPhoneCallOrigin3>,
    impl::require<IPhoneCallOrigin3, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
{
    IPhoneCallOrigin3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOrigin3>(m_ptr); }
};

struct IPhoneCallOriginManagerStatics :
    Windows::IInspectable,
    impl::consume<IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOriginManagerStatics>(m_ptr); }
};

struct IPhoneCallOriginManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IPhoneCallOriginManagerStatics2>,
    impl::require<IPhoneCallOriginManagerStatics2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneCallOriginManagerStatics2>(m_ptr); }
};

}

}
