// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.Ocr.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Ocr {

struct WINRT_EBO OcrEngine :
    Windows::Media::Ocr::IOcrEngine
{
    OcrEngine(std::nullptr_t) noexcept {}
    static uint32_t MaxImageDimension();
    static Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> AvailableRecognizerLanguages();
    static bool IsLanguageSupported(Windows::Globalization::Language const& language);
    static Windows::Media::Ocr::OcrEngine TryCreateFromLanguage(Windows::Globalization::Language const& language);
    static Windows::Media::Ocr::OcrEngine TryCreateFromUserProfileLanguages();
};

struct WINRT_EBO OcrLine :
    Windows::Media::Ocr::IOcrLine
{
    OcrLine(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OcrResult :
    Windows::Media::Ocr::IOcrResult
{
    OcrResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OcrWord :
    Windows::Media::Ocr::IOcrWord
{
    OcrWord(std::nullptr_t) noexcept {}
};

}
