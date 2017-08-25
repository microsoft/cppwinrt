// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Foundation.0.h"

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct WINRT_EBO IClosable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClosable>
{
    IClosable(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeferral>,
    impl::require<IDeferral, Windows::Foundation::IClosable>
{
    IDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeferralFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeferralFactory>
{
    IDeferralFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGetActivationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGetActivationFactory>
{
    IGetActivationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBuffer>,
    impl::require<IMemoryBuffer, Windows::Foundation::IClosable>
{
    IMemoryBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBufferFactory>
{
    IMemoryBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryBufferReference :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryBufferReference>,
    impl::require<IMemoryBufferReference, Windows::Foundation::IClosable>
{
    IMemoryBufferReference(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPropertyValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyValue>
{
    IPropertyValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPropertyValueStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPropertyValueStatics>
{
    IPropertyValueStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStringable :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStringable>
{
    IStringable(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUriEscapeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriEscapeStatics>
{
    IUriEscapeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUriRuntimeClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClass>
{
    IUriRuntimeClass(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUriRuntimeClassFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClassFactory>
{
    IUriRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUriRuntimeClassWithAbsoluteCanonicalUri :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    IUriRuntimeClassWithAbsoluteCanonicalUri(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWwwFormUrlDecoderEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderEntry>
{
    IWwwFormUrlDecoderEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWwwFormUrlDecoderRuntimeClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderRuntimeClass>,
    impl::require<IWwwFormUrlDecoderRuntimeClass, Windows::Foundation::Collections::IIterable<Windows::Foundation::IWwwFormUrlDecoderEntry>, Windows::Foundation::Collections::IVectorView<Windows::Foundation::IWwwFormUrlDecoderEntry>>
{
    IWwwFormUrlDecoderRuntimeClass(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWwwFormUrlDecoderRuntimeClassFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwwFormUrlDecoderRuntimeClassFactory>
{
    IWwwFormUrlDecoderRuntimeClassFactory(std::nullptr_t = nullptr) noexcept {}
};

}
