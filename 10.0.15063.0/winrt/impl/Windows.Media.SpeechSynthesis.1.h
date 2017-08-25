// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.SpeechSynthesis.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis {

struct WINRT_EBO IInstalledVoicesStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstalledVoicesStatic>
{
    IInstalledVoicesStatic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechSynthesisStream :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesisStream>,
    impl::require<ISpeechSynthesisStream, Windows::Foundation::IClosable, Windows::Storage::Streams::IContentTypeProvider, Windows::Storage::Streams::IInputStream, Windows::Storage::Streams::IOutputStream, Windows::Storage::Streams::IRandomAccessStream, Windows::Storage::Streams::IRandomAccessStreamWithContentType>
{
    ISpeechSynthesisStream(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechSynthesizer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizer>
{
    ISpeechSynthesizer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechSynthesizer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizer2>
{
    ISpeechSynthesizer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechSynthesizerOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechSynthesizerOptions>
{
    ISpeechSynthesizerOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceInformation>
{
    IVoiceInformation(std::nullptr_t = nullptr) noexcept {}
};

}
