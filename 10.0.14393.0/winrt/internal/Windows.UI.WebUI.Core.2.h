// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.WebUI.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c587d918_89aa_55ca_95b0_c14a07a53217
#define WINRT_GENERIC_c587d918_89aa_55ca_95b0_c14a07a53217
template <> struct __declspec(uuid("c587d918-89aa-55ca-95b0-c14a07a53217")) __declspec(novtable) TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> : impl_TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_10f0434f_880e_504a_9ce1_24b14149213b
#define WINRT_GENERIC_10f0434f_880e_504a_9ce1_24b14149213b
template <> struct __declspec(uuid("10f0434f-880e-504a-9ce1-24b14149213b")) __declspec(novtable) TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> : impl_TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b35feb4b_1833_59f8_b146_4627813af189
#define WINRT_GENERIC_b35feb4b_1833_59f8_b146_4627813af189
template <> struct __declspec(uuid("b35feb4b-1833-59f8-b146-4627813af189")) __declspec(novtable) IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif

#ifndef WINRT_GENERIC_42997479_cbf2_5a79_9560_dd7e7c413af4
#define WINRT_GENERIC_42997479_cbf2_5a79_9560_dd7e7c413af4
template <> struct __declspec(uuid("42997479-cbf2-5a79-9560-dd7e7c413af4")) __declspec(novtable) VectorChangedEventHandler<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_VectorChangedEventHandler<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif

#ifndef WINRT_GENERIC_b6224973_c1a6_5601_b000_b5e078746bc5
#define WINRT_GENERIC_b6224973_c1a6_5601_b000_b5e078746bc5
template <> struct __declspec(uuid("b6224973-c1a6-5601-b000-b5e078746bc5")) __declspec(novtable) IIterator<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_IIterator<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif

#ifndef WINRT_GENERIC_3cb21e0d_b293_5112_bccc_6e92b6321d2f
#define WINRT_GENERIC_3cb21e0d_b293_5112_bccc_6e92b6321d2f
template <> struct __declspec(uuid("3cb21e0d-b293-5112-bccc-6e92b6321d2f")) __declspec(novtable) IIterable<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_IIterable<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif

#ifndef WINRT_GENERIC_ba62c01a_2cb5_5916_a2c5_d2289e16b2b2
#define WINRT_GENERIC_ba62c01a_2cb5_5916_a2c5_d2289e16b2b2
template <> struct __declspec(uuid("ba62c01a-2cb5-5916-a2c5-d2289e16b2b2")) __declspec(novtable) IVectorView<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_IVectorView<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif

#ifndef WINRT_GENERIC_4a89cee1_56c5_5e02_ba8f_52b436b71377
#define WINRT_GENERIC_4a89cee1_56c5_5e02_ba8f_52b436b71377
template <> struct __declspec(uuid("4a89cee1-56c5-5e02-ba8f-52b436b71377")) __declspec(novtable) IVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> : impl_IVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> {};
#endif


}

namespace Windows::UI::WebUI::Core {

template <typename D>
struct WINRT_EBO impl_IWebUICommandBar
{
    bool Visible() const;
    void Visible(bool value) const;
    double Opacity() const;
    void Opacity(double value) const;
    Windows::UI::Color ForegroundColor() const;
    void ForegroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(const Windows::UI::Color & value) const;
    Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode ClosedDisplayMode() const;
    void ClosedDisplayMode(Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode value) const;
    bool IsOpen() const;
    void IsOpen(bool value) const;
    Windows::Foundation::Size Size() const;
    Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> PrimaryCommands() const;
    Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> SecondaryCommands() const;
    event_token MenuOpened(const Windows::UI::WebUI::Core::MenuOpenedEventHandler & handler) const;
    using MenuOpened_revoker = event_revoker<IWebUICommandBar>;
    MenuOpened_revoker MenuOpened(auto_revoke_t, const Windows::UI::WebUI::Core::MenuOpenedEventHandler & handler) const;
    void MenuOpened(event_token value) const;
    event_token MenuClosed(const Windows::UI::WebUI::Core::MenuClosedEventHandler & handler) const;
    using MenuClosed_revoker = event_revoker<IWebUICommandBar>;
    MenuClosed_revoker MenuClosed(auto_revoke_t, const Windows::UI::WebUI::Core::MenuClosedEventHandler & handler) const;
    void MenuClosed(event_token value) const;
    event_token SizeChanged(const Windows::UI::WebUI::Core::SizeChangedEventHandler & handler) const;
    using SizeChanged_revoker = event_revoker<IWebUICommandBar>;
    SizeChanged_revoker SizeChanged(auto_revoke_t, const Windows::UI::WebUI::Core::SizeChangedEventHandler & handler) const;
    void SizeChanged(event_token value) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarBitmapIcon
{
    Windows::Foundation::Uri Uri() const;
    void Uri(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarBitmapIconFactory
{
    Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon Create(const Windows::Foundation::Uri & uri) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarConfirmationButton
{
    hstring Text() const;
    void Text(hstring_ref value) const;
    event_token ItemInvoked(const Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> & handler) const;
    using ItemInvoked_revoker = event_revoker<IWebUICommandBarConfirmationButton>;
    ItemInvoked_revoker ItemInvoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> & handler) const;
    void ItemInvoked(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarElement
{
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarIcon
{
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarIconButton
{
    bool Enabled() const;
    void Enabled(bool value) const;
    hstring Label() const;
    void Label(hstring_ref value) const;
    bool IsToggleButton() const;
    void IsToggleButton(bool value) const;
    bool IsChecked() const;
    void IsChecked(bool value) const;
    Windows::UI::WebUI::Core::IWebUICommandBarIcon Icon() const;
    void Icon(const Windows::UI::WebUI::Core::IWebUICommandBarIcon & value) const;
    event_token ItemInvoked(const Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> & handler) const;
    using ItemInvoked_revoker = event_revoker<IWebUICommandBarIconButton>;
    ItemInvoked_revoker ItemInvoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> & handler) const;
    void ItemInvoked(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarItemInvokedEventArgs
{
    bool IsPrimaryCommand() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarSizeChangedEventArgs
{
    Windows::Foundation::Size Size() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarStatics
{
    Windows::UI::WebUI::Core::WebUICommandBar GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarSymbolIcon
{
    hstring Symbol() const;
    void Symbol(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IWebUICommandBarSymbolIconFactory
{
    Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon Create(hstring_ref symbol) const;
};

struct MenuClosedEventHandler : Windows::IUnknown
{
    MenuClosedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MenuClosedEventHandler>(m_ptr); }
    template <typename L> MenuClosedEventHandler(L lambda);
    template <typename F> MenuClosedEventHandler (F * function);
    template <typename O, typename M> MenuClosedEventHandler(O * object, M method);
    void operator()() const;
};

struct MenuOpenedEventHandler : Windows::IUnknown
{
    MenuOpenedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<MenuOpenedEventHandler>(m_ptr); }
    template <typename L> MenuOpenedEventHandler(L lambda);
    template <typename F> MenuOpenedEventHandler (F * function);
    template <typename O, typename M> MenuOpenedEventHandler(O * object, M method);
    void operator()() const;
};

struct SizeChangedEventHandler : Windows::IUnknown
{
    SizeChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<SizeChangedEventHandler>(m_ptr); }
    template <typename L> SizeChangedEventHandler(L lambda);
    template <typename F> SizeChangedEventHandler (F * function);
    template <typename O, typename M> SizeChangedEventHandler(O * object, M method);
    void operator()(const Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs & eventArgs) const;
};

struct IWebUICommandBar :
    Windows::IInspectable,
    impl::consume<IWebUICommandBar>
{
    IWebUICommandBar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBar>(m_ptr); }
};

struct IWebUICommandBarBitmapIcon :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarBitmapIcon>,
    impl::require<IWebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarBitmapIcon(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarBitmapIcon>(m_ptr); }
};

struct IWebUICommandBarBitmapIconFactory :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarBitmapIconFactory>
{
    IWebUICommandBarBitmapIconFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarBitmapIconFactory>(m_ptr); }
};

struct IWebUICommandBarConfirmationButton :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarConfirmationButton>,
    impl::require<IWebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarConfirmationButton(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarConfirmationButton>(m_ptr); }
};

struct IWebUICommandBarElement :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarElement>
{
    IWebUICommandBarElement(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarElement>(m_ptr); }
};

struct IWebUICommandBarIcon :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarIcon>
{
    IWebUICommandBarIcon(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarIcon>(m_ptr); }
};

struct IWebUICommandBarIconButton :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarIconButton>,
    impl::require<IWebUICommandBarIconButton, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    IWebUICommandBarIconButton(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarIconButton>(m_ptr); }
};

struct IWebUICommandBarItemInvokedEventArgs :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarItemInvokedEventArgs>
{
    IWebUICommandBarItemInvokedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarItemInvokedEventArgs>(m_ptr); }
};

struct IWebUICommandBarSizeChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarSizeChangedEventArgs>
{
    IWebUICommandBarSizeChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarSizeChangedEventArgs>(m_ptr); }
};

struct IWebUICommandBarStatics :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarStatics>
{
    IWebUICommandBarStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarStatics>(m_ptr); }
};

struct IWebUICommandBarSymbolIcon :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarSymbolIcon>,
    impl::require<IWebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    IWebUICommandBarSymbolIcon(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarSymbolIcon>(m_ptr); }
};

struct IWebUICommandBarSymbolIconFactory :
    Windows::IInspectable,
    impl::consume<IWebUICommandBarSymbolIconFactory>
{
    IWebUICommandBarSymbolIconFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebUICommandBarSymbolIconFactory>(m_ptr); }
};

}

}
