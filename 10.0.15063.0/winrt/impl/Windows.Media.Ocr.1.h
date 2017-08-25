// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.Ocr.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Ocr {

struct WINRT_EBO IOcrEngine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrEngine>
{
    IOcrEngine(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOcrEngineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrEngineStatics>
{
    IOcrEngineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOcrLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrLine>
{
    IOcrLine(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOcrResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrResult>
{
    IOcrResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOcrWord :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOcrWord>
{
    IOcrWord(std::nullptr_t = nullptr) noexcept {}
};

}
