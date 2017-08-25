// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class MessageDialogOptions : unsigned
{
    None = 0x0,
    AcceptUserInputAfterDelay = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(MessageDialogOptions)

enum class Placement
{
    Default = 0,
    Above = 1,
    Below = 2,
    Left = 3,
    Right = 4,
};

struct IMessageDialog;
struct IMessageDialogFactory;
struct IPopupMenu;
struct IUICommand;
struct IUICommandFactory;
struct MessageDialog;
struct PopupMenu;
struct UICommand;
struct UICommandSeparator;
struct UICommandInvokedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Popups::IMessageDialog>{ using type = interface_category; };
template <> struct category<Windows::UI::Popups::IMessageDialogFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Popups::IPopupMenu>{ using type = interface_category; };
template <> struct category<Windows::UI::Popups::IUICommand>{ using type = interface_category; };
template <> struct category<Windows::UI::Popups::IUICommandFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Popups::MessageDialog>{ using type = class_category; };
template <> struct category<Windows::UI::Popups::PopupMenu>{ using type = class_category; };
template <> struct category<Windows::UI::Popups::UICommand>{ using type = class_category; };
template <> struct category<Windows::UI::Popups::UICommandSeparator>{ using type = class_category; };
template <> struct category<Windows::UI::Popups::MessageDialogOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::Popups::Placement>{ using type = enum_category; };
template <> struct category<Windows::UI::Popups::UICommandInvokedHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Popups::IMessageDialog>{ static constexpr auto & value{ L"Windows.UI.Popups.IMessageDialog" }; };
template <> struct name<Windows::UI::Popups::IMessageDialogFactory>{ static constexpr auto & value{ L"Windows.UI.Popups.IMessageDialogFactory" }; };
template <> struct name<Windows::UI::Popups::IPopupMenu>{ static constexpr auto & value{ L"Windows.UI.Popups.IPopupMenu" }; };
template <> struct name<Windows::UI::Popups::IUICommand>{ static constexpr auto & value{ L"Windows.UI.Popups.IUICommand" }; };
template <> struct name<Windows::UI::Popups::IUICommandFactory>{ static constexpr auto & value{ L"Windows.UI.Popups.IUICommandFactory" }; };
template <> struct name<Windows::UI::Popups::MessageDialog>{ static constexpr auto & value{ L"Windows.UI.Popups.MessageDialog" }; };
template <> struct name<Windows::UI::Popups::PopupMenu>{ static constexpr auto & value{ L"Windows.UI.Popups.PopupMenu" }; };
template <> struct name<Windows::UI::Popups::UICommand>{ static constexpr auto & value{ L"Windows.UI.Popups.UICommand" }; };
template <> struct name<Windows::UI::Popups::UICommandSeparator>{ static constexpr auto & value{ L"Windows.UI.Popups.UICommandSeparator" }; };
template <> struct name<Windows::UI::Popups::MessageDialogOptions>{ static constexpr auto & value{ L"Windows.UI.Popups.MessageDialogOptions" }; };
template <> struct name<Windows::UI::Popups::Placement>{ static constexpr auto & value{ L"Windows.UI.Popups.Placement" }; };
template <> struct name<Windows::UI::Popups::UICommandInvokedHandler>{ static constexpr auto & value{ L"Windows.UI.Popups.UICommandInvokedHandler" }; };
template <> struct guid<Windows::UI::Popups::IMessageDialog>{ static constexpr GUID value{ 0x33F59B01,0x5325,0x43AB,{ 0x9A,0xB3,0xBD,0xAE,0x44,0x0E,0x41,0x21 } }; };
template <> struct guid<Windows::UI::Popups::IMessageDialogFactory>{ static constexpr GUID value{ 0x2D161777,0xA66F,0x4EA5,{ 0xBB,0x87,0x79,0x3F,0xFA,0x49,0x41,0xF2 } }; };
template <> struct guid<Windows::UI::Popups::IPopupMenu>{ static constexpr GUID value{ 0x4E9BC6DC,0x880D,0x47FC,{ 0xA0,0xA1,0x72,0xB6,0x39,0xE6,0x25,0x59 } }; };
template <> struct guid<Windows::UI::Popups::IUICommand>{ static constexpr GUID value{ 0x4FF93A75,0x4145,0x47FF,{ 0xAC,0x7F,0xDF,0xF1,0xC1,0xFA,0x5B,0x0F } }; };
template <> struct guid<Windows::UI::Popups::IUICommandFactory>{ static constexpr GUID value{ 0xA21A8189,0x26B0,0x4676,{ 0xAE,0x94,0x54,0x04,0x1B,0xC1,0x25,0xE8 } }; };
template <> struct guid<Windows::UI::Popups::UICommandInvokedHandler>{ static constexpr GUID value{ 0xDAF77A4F,0xC27A,0x4298,{ 0x9A,0xC6,0x29,0x22,0xC4,0x5E,0x7D,0xA6 } }; };
template <> struct default_interface<Windows::UI::Popups::MessageDialog>{ using type = Windows::UI::Popups::IMessageDialog; };
template <> struct default_interface<Windows::UI::Popups::PopupMenu>{ using type = Windows::UI::Popups::IPopupMenu; };
template <> struct default_interface<Windows::UI::Popups::UICommand>{ using type = Windows::UI::Popups::IUICommand; };
template <> struct default_interface<Windows::UI::Popups::UICommandSeparator>{ using type = Windows::UI::Popups::IUICommand; };

template <typename D>
struct consume_Windows_UI_Popups_IMessageDialog
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> Commands() const;
    uint32_t DefaultCommandIndex() const;
    void DefaultCommandIndex(uint32_t value) const;
    uint32_t CancelCommandIndex() const;
    void CancelCommandIndex(uint32_t value) const;
    hstring Content() const;
    void Content(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowAsync() const;
    Windows::UI::Popups::MessageDialogOptions Options() const;
    void Options(Windows::UI::Popups::MessageDialogOptions const& value) const;
};
template <> struct consume<Windows::UI::Popups::IMessageDialog> { template <typename D> using type = consume_Windows_UI_Popups_IMessageDialog<D>; };

template <typename D>
struct consume_Windows_UI_Popups_IMessageDialogFactory
{
    Windows::UI::Popups::MessageDialog Create(param::hstring const& content) const;
    Windows::UI::Popups::MessageDialog CreateWithTitle(param::hstring const& content, param::hstring const& title) const;
};
template <> struct consume<Windows::UI::Popups::IMessageDialogFactory> { template <typename D> using type = consume_Windows_UI_Popups_IMessageDialogFactory<D>; };

template <typename D>
struct consume_Windows_UI_Popups_IPopupMenu
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> Commands() const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowAsync(Windows::Foundation::Point const& invocationPoint) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowForSelectionAsync(Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
};
template <> struct consume<Windows::UI::Popups::IPopupMenu> { template <typename D> using type = consume_Windows_UI_Popups_IPopupMenu<D>; };

template <typename D>
struct consume_Windows_UI_Popups_IUICommand
{
    hstring Label() const;
    void Label(param::hstring const& value) const;
    Windows::UI::Popups::UICommandInvokedHandler Invoked() const;
    void Invoked(Windows::UI::Popups::UICommandInvokedHandler const& value) const;
    Windows::Foundation::IInspectable Id() const;
    void Id(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Popups::IUICommand> { template <typename D> using type = consume_Windows_UI_Popups_IUICommand<D>; };

template <typename D>
struct consume_Windows_UI_Popups_IUICommandFactory
{
    Windows::UI::Popups::UICommand Create(param::hstring const& label) const;
    Windows::UI::Popups::UICommand CreateWithHandler(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action) const;
    Windows::UI::Popups::UICommand CreateWithHandlerAndId(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId) const;
};
template <> struct consume<Windows::UI::Popups::IUICommandFactory> { template <typename D> using type = consume_Windows_UI_Popups_IUICommandFactory<D>; };

template <> struct abi<Windows::UI::Popups::IMessageDialog>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CancelCommandIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CancelCommandIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Content(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Content(HSTRING value) = 0;
    virtual HRESULT __stdcall ShowAsync(::IUnknown** messageDialogAsyncOperation) = 0;
    virtual HRESULT __stdcall get_Options(abi_t<Windows::UI::Popups::MessageDialogOptions>* value) = 0;
    virtual HRESULT __stdcall put_Options(abi_t<Windows::UI::Popups::MessageDialogOptions> value) = 0;
};};

template <> struct abi<Windows::UI::Popups::IMessageDialogFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING content, ::IUnknown** messageDialog) = 0;
    virtual HRESULT __stdcall CreateWithTitle(HSTRING content, HSTRING title, ::IUnknown** messageDialog) = 0;
};};

template <> struct abi<Windows::UI::Popups::IPopupMenu>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ShowAsync(abi_t<Windows::Foundation::Point> invocationPoint, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall ShowAsyncWithRect(abi_t<Windows::Foundation::Rect> selection, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall ShowAsyncWithRectAndPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** asyncOperation) = 0;
};};

template <> struct abi<Windows::UI::Popups::IUICommand>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Label(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Invoked(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Invoked(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Id(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Id(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Popups::IUICommandFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING label, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithHandler(HSTRING label, ::IUnknown* action, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateWithHandlerAndId(HSTRING label, ::IUnknown* action, ::IUnknown* commandId, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Popups::UICommandInvokedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* command) = 0;
};};

}
