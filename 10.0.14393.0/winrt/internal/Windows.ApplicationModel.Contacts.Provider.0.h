// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Contacts::Provider {

struct IContactPickerUI;
struct IContactPickerUI2;
struct IContactRemovedEventArgs;
struct ContactPickerUI;
struct ContactRemovedEventArgs;

}

namespace Windows::ApplicationModel::Contacts::Provider {

struct IContactPickerUI;
struct IContactPickerUI2;
struct IContactRemovedEventArgs;
struct ContactPickerUI;
struct ContactRemovedEventArgs;

}

namespace Windows::ApplicationModel::Contacts::Provider {

enum class AddContactResult
{
    Added = 0,
    AlreadyAdded = 1,
    Unavailable = 2,
};

}

}
