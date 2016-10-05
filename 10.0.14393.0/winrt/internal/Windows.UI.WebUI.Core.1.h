// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.WebUI.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::WebUI::Core {

struct __declspec(uuid("a4fc0016-dbe5-41ad-8d7b-14698bd6911d")) __declspec(novtable) IWebUICommandBar : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Visible(bool * value) = 0;
    virtual HRESULT __stdcall put_Visible(bool value) = 0;
    virtual HRESULT __stdcall get_Opacity(double * value) = 0;
    virtual HRESULT __stdcall put_Opacity(double value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_ForegroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_ClosedDisplayMode(winrt::Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode * value) = 0;
    virtual HRESULT __stdcall put_ClosedDisplayMode(winrt::Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode value) = 0;
    virtual HRESULT __stdcall get_IsOpen(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOpen(bool value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_PrimaryCommands(Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> ** value) = 0;
    virtual HRESULT __stdcall get_SecondaryCommands(Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> ** value) = 0;
    virtual HRESULT __stdcall add_MenuOpened(Windows::UI::WebUI::Core::MenuOpenedEventHandler * handler, event_token * value) = 0;
    virtual HRESULT __stdcall remove_MenuOpened(event_token value) = 0;
    virtual HRESULT __stdcall add_MenuClosed(Windows::UI::WebUI::Core::MenuClosedEventHandler * handler, event_token * value) = 0;
    virtual HRESULT __stdcall remove_MenuClosed(event_token value) = 0;
    virtual HRESULT __stdcall add_SizeChanged(Windows::UI::WebUI::Core::SizeChangedEventHandler * handler, event_token * value) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(event_token value) = 0;
};

struct __declspec(uuid("858f4f45-08d8-4a46-81ec-00015b0b1c6c")) __declspec(novtable) IWebUICommandBarBitmapIcon : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("f3f7d78a-7673-444a-be62-ac12d31c2231")) __declspec(novtable) IWebUICommandBarBitmapIconFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::IUriRuntimeClass * uri, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon ** instance) = 0;
};

struct __declspec(uuid("86e7824a-e3d5-4eb6-b2ff-8f018a172105")) __declspec(novtable) IWebUICommandBarConfirmationButton : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall add_ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ItemInvoked(event_token token) = 0;
};

struct __declspec(uuid("c9069ec2-284a-4633-8aad-637a27e282c3")) __declspec(novtable) IWebUICommandBarElement : Windows::IInspectable
{
};

struct __declspec(uuid("d587655d-2014-42be-969a-7d14ca6c8a49")) __declspec(novtable) IWebUICommandBarIcon : Windows::IInspectable
{
};

struct __declspec(uuid("8f1bc93a-3a7c-4842-a0cf-aff6ea308586")) __declspec(novtable) IWebUICommandBarIconButton : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Enabled(bool * value) = 0;
    virtual HRESULT __stdcall put_Enabled(bool value) = 0;
    virtual HRESULT __stdcall get_Label(hstring * value) = 0;
    virtual HRESULT __stdcall put_Label(hstring value) = 0;
    virtual HRESULT __stdcall get_IsToggleButton(bool * value) = 0;
    virtual HRESULT __stdcall put_IsToggleButton(bool value) = 0;
    virtual HRESULT __stdcall get_IsChecked(bool * value) = 0;
    virtual HRESULT __stdcall put_IsChecked(bool value) = 0;
    virtual HRESULT __stdcall get_Icon(Windows::UI::WebUI::Core::IWebUICommandBarIcon ** value) = 0;
    virtual HRESULT __stdcall put_Icon(Windows::UI::WebUI::Core::IWebUICommandBarIcon * value) = 0;
    virtual HRESULT __stdcall add_ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ItemInvoked(event_token token) = 0;
};

struct __declspec(uuid("304edbdd-e741-41ef-bdc4-a45cea2a4f70")) __declspec(novtable) IWebUICommandBarItemInvokedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsPrimaryCommand(bool * value) = 0;
};

struct __declspec(uuid("fbf1e2f6-3029-4719-8378-92f82b87af1e")) __declspec(novtable) IWebUICommandBarSizeChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size * value) = 0;
};

struct __declspec(uuid("1449cdb9-a506-45be-8f42-b2837e2fe0c9")) __declspec(novtable) IWebUICommandBarStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::WebUI::Core::IWebUICommandBar ** commandBar) = 0;
};

struct __declspec(uuid("d4935477-fd26-46ed-8658-1a3f4400e7b3")) __declspec(novtable) IWebUICommandBarSymbolIcon : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Symbol(hstring * value) = 0;
    virtual HRESULT __stdcall put_Symbol(hstring value) = 0;
};

struct __declspec(uuid("51be1a1f-3730-429e-b622-14e2b7bf6a07")) __declspec(novtable) IWebUICommandBarSymbolIconFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring symbol, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon ** instance) = 0;
};

struct __declspec(uuid("435387c8-4dd0-4c52-9489-d390ce7721d2")) __declspec(novtable) MenuClosedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke() = 0;
};

struct __declspec(uuid("18dc0ad3-678f-4c19-8963-cc1c49a5ef9e")) __declspec(novtable) MenuOpenedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke() = 0;
};

struct __declspec(uuid("d49cfe3c-dd2e-4c28-b627-303a7f911af5")) __declspec(novtable) SizeChangedEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs * eventArgs) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBar> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBar; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarIconButton> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarIconButton; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs; };
template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon> { using default_interface = Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon; };

}

namespace Windows::UI::WebUI::Core {

template <typename T> struct impl_IWebUICommandBar;
template <typename T> struct impl_IWebUICommandBarBitmapIcon;
template <typename T> struct impl_IWebUICommandBarBitmapIconFactory;
template <typename T> struct impl_IWebUICommandBarConfirmationButton;
template <typename T> struct impl_IWebUICommandBarElement;
template <typename T> struct impl_IWebUICommandBarIcon;
template <typename T> struct impl_IWebUICommandBarIconButton;
template <typename T> struct impl_IWebUICommandBarItemInvokedEventArgs;
template <typename T> struct impl_IWebUICommandBarSizeChangedEventArgs;
template <typename T> struct impl_IWebUICommandBarStatics;
template <typename T> struct impl_IWebUICommandBarSymbolIcon;
template <typename T> struct impl_IWebUICommandBarSymbolIconFactory;
template <typename T> struct impl_MenuClosedEventHandler;
template <typename T> struct impl_MenuOpenedEventHandler;
template <typename T> struct impl_SizeChangedEventHandler;

}

namespace impl {

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBar>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBar;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBar<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarBitmapIcon<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarBitmapIconFactory<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarConfirmationButton<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarElement>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarElement;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarElement<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarIcon;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarIcon<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarIconButton;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarIconButton<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarItemInvokedEventArgs<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarSizeChangedEventArgs<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarStatics>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarStatics;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarStatics<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarSymbolIcon<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
{
    using abi = ABI::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory;
    template <typename D> using consume = Windows::UI::WebUI::Core::impl_IWebUICommandBarSymbolIconFactory<D>;
};

template <> struct traits<Windows::UI::WebUI::Core::MenuClosedEventHandler>
{
    using abi = ABI::Windows::UI::WebUI::Core::MenuClosedEventHandler;
};

template <> struct traits<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
{
    using abi = ABI::Windows::UI::WebUI::Core::MenuOpenedEventHandler;
};

template <> struct traits<Windows::UI::WebUI::Core::SizeChangedEventHandler>
{
    using abi = ABI::Windows::UI::WebUI::Core::SizeChangedEventHandler;
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBar>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBar"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarBitmapIcon"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarConfirmationButton"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarIconButton>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarIconButton;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarIconButton"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarItemInvokedEventArgs"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarSizeChangedEventArgs"; }
};

template <> struct traits<Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon>
{
    using abi = ABI::Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.WebUI.Core.WebUICommandBarSymbolIcon"; }
};

}

}
