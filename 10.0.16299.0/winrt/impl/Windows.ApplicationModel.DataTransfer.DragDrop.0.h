// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop {

enum class DragDropModifiers : uint32_t
{
    None = 0x0,
    Shift = 0x1,
    Control = 0x2,
    Alt = 0x4,
    LeftButton = 0x8,
    MiddleButton = 0x10,
    RightButton = 0x20,
};

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers> : std::true_type {};
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.DragDropModifiers" }; };

}
