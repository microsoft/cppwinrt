// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Custom {

struct WINRT_EBO ICustomGameControllerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomGameControllerFactory>
{
    ICustomGameControllerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameControllerFactoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerFactoryManagerStatics>
{
    IGameControllerFactoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameControllerFactoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerFactoryManagerStatics2>,
    impl::require<IGameControllerFactoryManagerStatics2, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
{
    IGameControllerFactoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerInputSink>
{
    IGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerProvider>
{
    IGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGipFirmwareUpdateResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipFirmwareUpdateResult>
{
    IGipFirmwareUpdateResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGipGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipGameControllerInputSink>,
    impl::require<IGipGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IGipGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGipGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGipGameControllerProvider>,
    impl::require<IGipGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IGipGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidGameControllerInputSink>,
    impl::require<IHidGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IHidGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidGameControllerProvider>,
    impl::require<IHidGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IHidGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXusbGameControllerInputSink :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXusbGameControllerInputSink>,
    impl::require<IXusbGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IXusbGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXusbGameControllerProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXusbGameControllerProvider>,
    impl::require<IXusbGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IXusbGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
};

}
