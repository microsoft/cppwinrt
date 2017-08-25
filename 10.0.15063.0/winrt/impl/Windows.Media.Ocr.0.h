// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization {

struct Language;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media::Ocr {

struct IOcrEngine;
struct IOcrEngineStatics;
struct IOcrLine;
struct IOcrResult;
struct IOcrWord;
struct OcrEngine;
struct OcrLine;
struct OcrResult;
struct OcrWord;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Ocr::IOcrEngine>{ using type = interface_category; };
template <> struct category<Windows::Media::Ocr::IOcrEngineStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Ocr::IOcrLine>{ using type = interface_category; };
template <> struct category<Windows::Media::Ocr::IOcrResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Ocr::IOcrWord>{ using type = interface_category; };
template <> struct category<Windows::Media::Ocr::OcrEngine>{ using type = class_category; };
template <> struct category<Windows::Media::Ocr::OcrLine>{ using type = class_category; };
template <> struct category<Windows::Media::Ocr::OcrResult>{ using type = class_category; };
template <> struct category<Windows::Media::Ocr::OcrWord>{ using type = class_category; };
template <> struct name<Windows::Media::Ocr::IOcrEngine>{ static constexpr auto & value{ L"Windows.Media.Ocr.IOcrEngine" }; };
template <> struct name<Windows::Media::Ocr::IOcrEngineStatics>{ static constexpr auto & value{ L"Windows.Media.Ocr.IOcrEngineStatics" }; };
template <> struct name<Windows::Media::Ocr::IOcrLine>{ static constexpr auto & value{ L"Windows.Media.Ocr.IOcrLine" }; };
template <> struct name<Windows::Media::Ocr::IOcrResult>{ static constexpr auto & value{ L"Windows.Media.Ocr.IOcrResult" }; };
template <> struct name<Windows::Media::Ocr::IOcrWord>{ static constexpr auto & value{ L"Windows.Media.Ocr.IOcrWord" }; };
template <> struct name<Windows::Media::Ocr::OcrEngine>{ static constexpr auto & value{ L"Windows.Media.Ocr.OcrEngine" }; };
template <> struct name<Windows::Media::Ocr::OcrLine>{ static constexpr auto & value{ L"Windows.Media.Ocr.OcrLine" }; };
template <> struct name<Windows::Media::Ocr::OcrResult>{ static constexpr auto & value{ L"Windows.Media.Ocr.OcrResult" }; };
template <> struct name<Windows::Media::Ocr::OcrWord>{ static constexpr auto & value{ L"Windows.Media.Ocr.OcrWord" }; };
template <> struct guid<Windows::Media::Ocr::IOcrEngine>{ static constexpr GUID value{ 0x5A14BC41,0x5B76,0x3140,{ 0xB6,0x80,0x88,0x25,0x56,0x26,0x83,0xAC } }; };
template <> struct guid<Windows::Media::Ocr::IOcrEngineStatics>{ static constexpr GUID value{ 0x5BFFA85A,0x3384,0x3540,{ 0x99,0x40,0x69,0x91,0x20,0xD4,0x28,0xA8 } }; };
template <> struct guid<Windows::Media::Ocr::IOcrLine>{ static constexpr GUID value{ 0x0043A16F,0xE31F,0x3A24,{ 0x89,0x9C,0xD4,0x44,0xBD,0x08,0x81,0x24 } }; };
template <> struct guid<Windows::Media::Ocr::IOcrResult>{ static constexpr GUID value{ 0x9BD235B2,0x175B,0x3D6A,{ 0x92,0xE2,0x38,0x8C,0x20,0x6E,0x2F,0x63 } }; };
template <> struct guid<Windows::Media::Ocr::IOcrWord>{ static constexpr GUID value{ 0x3C2A477A,0x5CD9,0x3525,{ 0xBA,0x2A,0x23,0xD1,0xE0,0xA6,0x8A,0x1D } }; };
template <> struct default_interface<Windows::Media::Ocr::OcrEngine>{ using type = Windows::Media::Ocr::IOcrEngine; };
template <> struct default_interface<Windows::Media::Ocr::OcrLine>{ using type = Windows::Media::Ocr::IOcrLine; };
template <> struct default_interface<Windows::Media::Ocr::OcrResult>{ using type = Windows::Media::Ocr::IOcrResult; };
template <> struct default_interface<Windows::Media::Ocr::OcrWord>{ using type = Windows::Media::Ocr::IOcrWord; };

template <typename D>
struct consume_Windows_Media_Ocr_IOcrEngine
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Ocr::OcrResult> RecognizeAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
    Windows::Globalization::Language RecognizerLanguage() const;
};
template <> struct consume<Windows::Media::Ocr::IOcrEngine> { template <typename D> using type = consume_Windows_Media_Ocr_IOcrEngine<D>; };

template <typename D>
struct consume_Windows_Media_Ocr_IOcrEngineStatics
{
    uint32_t MaxImageDimension() const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> AvailableRecognizerLanguages() const;
    bool IsLanguageSupported(Windows::Globalization::Language const& language) const;
    Windows::Media::Ocr::OcrEngine TryCreateFromLanguage(Windows::Globalization::Language const& language) const;
    Windows::Media::Ocr::OcrEngine TryCreateFromUserProfileLanguages() const;
};
template <> struct consume<Windows::Media::Ocr::IOcrEngineStatics> { template <typename D> using type = consume_Windows_Media_Ocr_IOcrEngineStatics<D>; };

template <typename D>
struct consume_Windows_Media_Ocr_IOcrLine
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrWord> Words() const;
    hstring Text() const;
};
template <> struct consume<Windows::Media::Ocr::IOcrLine> { template <typename D> using type = consume_Windows_Media_Ocr_IOcrLine<D>; };

template <typename D>
struct consume_Windows_Media_Ocr_IOcrResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Ocr::OcrLine> Lines() const;
    Windows::Foundation::IReference<double> TextAngle() const;
    hstring Text() const;
};
template <> struct consume<Windows::Media::Ocr::IOcrResult> { template <typename D> using type = consume_Windows_Media_Ocr_IOcrResult<D>; };

template <typename D>
struct consume_Windows_Media_Ocr_IOcrWord
{
    Windows::Foundation::Rect BoundingRect() const;
    hstring Text() const;
};
template <> struct consume<Windows::Media::Ocr::IOcrWord> { template <typename D> using type = consume_Windows_Media_Ocr_IOcrWord<D>; };

template <> struct abi<Windows::Media::Ocr::IOcrEngine>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RecognizeAsync(::IUnknown* bitmap, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_RecognizerLanguage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Ocr::IOcrEngineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxImageDimension(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AvailableRecognizerLanguages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsLanguageSupported(::IUnknown* language, bool* result) = 0;
    virtual HRESULT __stdcall TryCreateFromLanguage(::IUnknown* language, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryCreateFromUserProfileLanguages(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Media::Ocr::IOcrLine>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Words(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Ocr::IOcrResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Lines(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TextAngle(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Media::Ocr::IOcrWord>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BoundingRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

}
