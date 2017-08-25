// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider {

struct WINRT_EBO ContactPickerUI :
    Windows::ApplicationModel::Contacts::Provider::IContactPickerUI,
    impl::require<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
{
    ContactPickerUI(std::nullptr_t) noexcept {}
    using impl::consume_t<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>::AddContact;
    using Windows::ApplicationModel::Contacts::Provider::IContactPickerUI::AddContact;
};

struct WINRT_EBO ContactRemovedEventArgs :
    Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs
{
    ContactRemovedEventArgs(std::nullptr_t) noexcept {}
};

}
