// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider {

struct WINRT_EBO IContactPickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerUI>
{
    IContactPickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactPickerUI2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactPickerUI2>
{
    IContactPickerUI2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactRemovedEventArgs>
{
    IContactRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
