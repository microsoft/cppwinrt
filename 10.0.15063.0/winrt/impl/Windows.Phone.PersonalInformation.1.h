// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Phone.PersonalInformation.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::PersonalInformation {

struct WINRT_EBO IContactAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactAddress>
{
    IContactAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactChangeRecord :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactChangeRecord>
{
    IContactChangeRecord(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation>
{
    IContactInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformation2>
{
    IContactInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactInformationStatics>
{
    IContactInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryOptions>
{
    IContactQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactQueryResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactQueryResult>
{
    IContactQueryResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore>
{
    IContactStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStore2>
{
    IContactStore2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactStoreStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactStoreStatics>
{
    IContactStoreStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownContactPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownContactPropertiesStatics>
{
    IKnownContactPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoredContact :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoredContact>,
    impl::require<IStoredContact, Windows::Phone::PersonalInformation::IContactInformation>
{
    IStoredContact(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoredContactFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoredContactFactory>
{
    IStoredContactFactory(std::nullptr_t = nullptr) noexcept {}
};

}
