// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Popups.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

struct UICommandInvokedHandler : Windows::Foundation::IUnknown
{
    UICommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> UICommandInvokedHandler(L lambda);
    template <typename F> UICommandInvokedHandler(F* function);
    template <typename O, typename M> UICommandInvokedHandler(O* object, M method);
    void operator()(Windows::UI::Popups::IUICommand const& command) const;
};

struct WINRT_EBO MessageDialog :
    Windows::UI::Popups::IMessageDialog
{
    MessageDialog(std::nullptr_t) noexcept {}
    MessageDialog(param::hstring const& content);
    MessageDialog(param::hstring const& content, param::hstring const& title);
};

struct WINRT_EBO PopupMenu :
    Windows::UI::Popups::IPopupMenu
{
    PopupMenu(std::nullptr_t) noexcept {}
    PopupMenu();
};

struct WINRT_EBO UICommand :
    Windows::UI::Popups::IUICommand
{
    UICommand(std::nullptr_t) noexcept {}
    UICommand();
    UICommand(param::hstring const& label);
    UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action);
    UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId);
};

struct WINRT_EBO UICommandSeparator :
    Windows::UI::Popups::IUICommand
{
    UICommandSeparator(std::nullptr_t) noexcept {}
    UICommandSeparator();
};

}
