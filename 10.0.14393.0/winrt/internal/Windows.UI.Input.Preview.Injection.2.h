// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Input.Preview.Injection.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_15d6330f_9c97_5705_b677_872585664fb5
#define WINRT_GENERIC_15d6330f_9c97_5705_b677_872585664fb5
template <> struct __declspec(uuid("15d6330f-9c97-5705-b677-872585664fb5")) __declspec(novtable) IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> : impl_IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> {};
#endif

#ifndef WINRT_GENERIC_6c34e5bd_0fa4_5244_89fb_04bfd480ecd8
#define WINRT_GENERIC_6c34e5bd_0fa4_5244_89fb_04bfd480ecd8
template <> struct __declspec(uuid("6c34e5bd-0fa4-5244-89fb-04bfd480ecd8")) __declspec(novtable) IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> : impl_IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> {};
#endif

#ifndef WINRT_GENERIC_ac5fac0b_82a0_5436_9284_e7db0bf4e615
#define WINRT_GENERIC_ac5fac0b_82a0_5436_9284_e7db0bf4e615
template <> struct __declspec(uuid("ac5fac0b-82a0-5436-9284-e7db0bf4e615")) __declspec(novtable) IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> : impl_IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> {};
#endif

#ifndef WINRT_GENERIC_500e5efe_3bc1_5d9b_bcfc_c1f439505f12
#define WINRT_GENERIC_500e5efe_3bc1_5d9b_bcfc_c1f439505f12
template <> struct __declspec(uuid("500e5efe-3bc1-5d9b-bcfc-c1f439505f12")) __declspec(novtable) IIterator<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> : impl_IIterator<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> {};
#endif

#ifndef WINRT_GENERIC_9604d1d9_1744_5bd3_b5b9_d47b9434facb
#define WINRT_GENERIC_9604d1d9_1744_5bd3_b5b9_d47b9434facb
template <> struct __declspec(uuid("9604d1d9-1744-5bd3-b5b9-d47b9434facb")) __declspec(novtable) IIterator<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> : impl_IIterator<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> {};
#endif

#ifndef WINRT_GENERIC_4bc92e92_d32e_597a_ae24_b38861c5fb08
#define WINRT_GENERIC_4bc92e92_d32e_597a_ae24_b38861c5fb08
template <> struct __declspec(uuid("4bc92e92-d32e-597a-ae24-b38861c5fb08")) __declspec(novtable) IIterator<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> : impl_IIterator<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> {};
#endif


}

namespace Windows::UI::Input::Preview::Injection {

template <typename D>
struct WINRT_EBO impl_IInjectedInputKeyboardInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions KeyOptions() const;
    void KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) const;
    uint16_t ScanCode() const;
    void ScanCode(uint16_t value) const;
    uint16_t VirtualKey() const;
    void VirtualKey(uint16_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IInjectedInputMouseInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions MouseOptions() const;
    void MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) const;
    uint32_t MouseData() const;
    void MouseData(uint32_t value) const;
    int32_t DeltaY() const;
    void DeltaY(int32_t value) const;
    int32_t DeltaX() const;
    void DeltaX(int32_t value) const;
    uint32_t TimeOffsetInMilliseconds() const;
    void TimeOffsetInMilliseconds(uint32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IInjectedInputPenInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const;
    void PointerInfo(const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo & value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons PenButtons() const;
    void PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters PenParameters() const;
    void PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) const;
    double Pressure() const;
    void Pressure(double value) const;
    double Rotation() const;
    void Rotation(double value) const;
    int32_t TiltX() const;
    void TiltX(int32_t value) const;
    int32_t TiltY() const;
    void TiltY(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IInjectedInputTouchInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle Contact() const;
    void Contact(const Windows::UI::Input::Preview::Injection::InjectedInputRectangle & value) const;
    int32_t Orientation() const;
    void Orientation(int32_t value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const;
    void PointerInfo(const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo & value) const;
    double Pressure() const;
    void Pressure(double value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters TouchParameters() const;
    void TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) const;
};

template <typename D>
struct WINRT_EBO impl_IInputInjector
{
    void InjectKeyboardInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> & input) const;
    void InjectMouseInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> & input) const;
    void InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) const;
    void InjectTouchInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> & input) const;
    void UninitializeTouchInjection() const;
    void InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) const;
    void InjectPenInput(const Windows::UI::Input::Preview::Injection::InjectedInputPenInfo & input) const;
    void UninitializePenInjection() const;
    void InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) const;
};

template <typename D>
struct WINRT_EBO impl_IInputInjectorStatics
{
    Windows::UI::Input::Preview::Injection::InputInjector TryCreate() const;
};

struct IInjectedInputKeyboardInfo :
    Windows::IInspectable,
    impl::consume<IInjectedInputKeyboardInfo>
{
    IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInjectedInputKeyboardInfo>(m_ptr); }
};

struct IInjectedInputMouseInfo :
    Windows::IInspectable,
    impl::consume<IInjectedInputMouseInfo>
{
    IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInjectedInputMouseInfo>(m_ptr); }
};

struct IInjectedInputPenInfo :
    Windows::IInspectable,
    impl::consume<IInjectedInputPenInfo>
{
    IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInjectedInputPenInfo>(m_ptr); }
};

struct IInjectedInputTouchInfo :
    Windows::IInspectable,
    impl::consume<IInjectedInputTouchInfo>
{
    IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInjectedInputTouchInfo>(m_ptr); }
};

struct IInputInjector :
    Windows::IInspectable,
    impl::consume<IInputInjector>
{
    IInputInjector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputInjector>(m_ptr); }
};

struct IInputInjectorStatics :
    Windows::IInspectable,
    impl::consume<IInputInjectorStatics>
{
    IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputInjectorStatics>(m_ptr); }
};

}

}
