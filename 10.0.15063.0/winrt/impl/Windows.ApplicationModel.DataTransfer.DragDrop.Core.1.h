// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.DragDrop.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core {

struct WINRT_EBO ICoreDragDropManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragDropManager>
{
    ICoreDragDropManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragDropManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragDropManagerStatics>
{
    ICoreDragDropManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragInfo>
{
    ICoreDragInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragInfo2>,
    impl::require<ICoreDragInfo2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>
{
    ICoreDragInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragOperation>
{
    ICoreDragOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragOperation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragOperation2>,
    impl::require<ICoreDragOperation2, Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>
{
    ICoreDragOperation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDragUIOverride :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDragUIOverride>
{
    ICoreDragUIOverride(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDropOperationTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDropOperationTarget>
{
    ICoreDropOperationTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreDropOperationTargetRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreDropOperationTargetRequestedEventArgs>
{
    ICoreDropOperationTargetRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
