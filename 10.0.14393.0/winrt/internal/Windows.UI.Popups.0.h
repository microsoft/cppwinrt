// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Popups {

struct IMessageDialog;
struct IMessageDialogFactory;
struct IPopupMenu;
struct IUICommand;
struct IUICommandFactory;
struct UICommandInvokedHandler;
struct MessageDialog;
struct PopupMenu;
struct UICommand;
struct UICommandSeparator;

}

namespace Windows::UI::Popups {

struct UICommandInvokedHandler;
struct IMessageDialog;
struct IMessageDialogFactory;
struct IPopupMenu;
struct IUICommand;
struct IUICommandFactory;
struct MessageDialog;
struct PopupMenu;
struct UICommand;
struct UICommandSeparator;

}

namespace Windows::UI::Popups {

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

}

}
