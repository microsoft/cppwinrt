// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Connectivity.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Web.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

struct WINRT_EBO IControlChannelTrigger :
    Windows::Foundation::IInspectable,
    impl::consume_t<IControlChannelTrigger>,
    impl::require<IControlChannelTrigger, Windows::Foundation::IClosable>
{
    IControlChannelTrigger(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IControlChannelTrigger2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IControlChannelTrigger2>
{
    IControlChannelTrigger2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IControlChannelTriggerEventDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IControlChannelTriggerEventDetails>
{
    IControlChannelTriggerEventDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IControlChannelTriggerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IControlChannelTriggerFactory>
{
    IControlChannelTriggerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IControlChannelTriggerResetEventDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IControlChannelTriggerResetEventDetails>
{
    IControlChannelTriggerResetEventDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocket>,
    impl::require<IDatagramSocket, Windows::Foundation::IClosable>
{
    IDatagramSocket(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocket2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocket2>,
    impl::require<IDatagramSocket2, Windows::Foundation::IClosable>
{
    IDatagramSocket2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocket3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocket3>
{
    IDatagramSocket3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketControl>
{
    IDatagramSocketControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketControl2>
{
    IDatagramSocketControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketControl3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketControl3>
{
    IDatagramSocketControl3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketInformation>
{
    IDatagramSocketInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketMessageReceivedEventArgs>
{
    IDatagramSocketMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDatagramSocketStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDatagramSocketStatics>
{
    IDatagramSocketStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMessageWebSocket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageWebSocket>,
    impl::require<IMessageWebSocket, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket>
{
    IMessageWebSocket(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IMessageWebSocket, Windows::Foundation::IClosable>::Close;
    using impl::consume_t<IMessageWebSocket, Windows::Networking::Sockets::IWebSocket>::Close;
};

struct WINRT_EBO IMessageWebSocket2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageWebSocket2>,
    impl::require<IMessageWebSocket2, Windows::Foundation::IClosable, Windows::Networking::Sockets::IMessageWebSocket, Windows::Networking::Sockets::IWebSocket>
{
    IMessageWebSocket2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IMessageWebSocket2, Windows::Foundation::IClosable>::Close;
    using impl::consume_t<IMessageWebSocket2, Windows::Networking::Sockets::IWebSocket>::Close;
};

struct WINRT_EBO IMessageWebSocketControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageWebSocketControl>,
    impl::require<IMessageWebSocketControl, Windows::Networking::Sockets::IWebSocketControl>
{
    IMessageWebSocketControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMessageWebSocketMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMessageWebSocketMessageReceivedEventArgs>
{
    IMessageWebSocketMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityContext>
{
    ISocketActivityContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityContextFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityContextFactory>
{
    ISocketActivityContextFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityInformation>
{
    ISocketActivityInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityInformationStatics>
{
    ISocketActivityInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketActivityTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketActivityTriggerDetails>
{
    ISocketActivityTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISocketErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocketErrorStatics>
{
    ISocketErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocket>,
    impl::require<IStreamSocket, Windows::Foundation::IClosable>
{
    IStreamSocket(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocket2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocket2>,
    impl::require<IStreamSocket2, Windows::Foundation::IClosable>
{
    IStreamSocket2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocket3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocket3>
{
    IStreamSocket3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketControl>
{
    IStreamSocketControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketControl2>
{
    IStreamSocketControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketControl3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketControl3>
{
    IStreamSocketControl3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketInformation>
{
    IStreamSocketInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketInformation2>
{
    IStreamSocketInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListener>,
    impl::require<IStreamSocketListener, Windows::Foundation::IClosable>
{
    IStreamSocketListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListener2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListener2>,
    impl::require<IStreamSocketListener2, Windows::Foundation::IClosable>
{
    IStreamSocketListener2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListener3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListener3>
{
    IStreamSocketListener3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListenerConnectionReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListenerConnectionReceivedEventArgs>
{
    IStreamSocketListenerConnectionReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListenerControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListenerControl>
{
    IStreamSocketListenerControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListenerControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListenerControl2>
{
    IStreamSocketListenerControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketListenerInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketListenerInformation>
{
    IStreamSocketListenerInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamSocketStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamSocketStatics>
{
    IStreamSocketStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamWebSocket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamWebSocket>,
    impl::require<IStreamWebSocket, Windows::Foundation::IClosable, Windows::Networking::Sockets::IWebSocket>
{
    IStreamWebSocket(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IStreamWebSocket, Windows::Foundation::IClosable>::Close;
    using impl::consume_t<IStreamWebSocket, Windows::Networking::Sockets::IWebSocket>::Close;
};

struct WINRT_EBO IStreamWebSocket2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamWebSocket2>,
    impl::require<IStreamWebSocket2, Windows::Foundation::IClosable, Windows::Networking::Sockets::IStreamWebSocket, Windows::Networking::Sockets::IWebSocket>
{
    IStreamWebSocket2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IStreamWebSocket2, Windows::Foundation::IClosable>::Close;
    using impl::consume_t<IStreamWebSocket2, Windows::Networking::Sockets::IWebSocket>::Close;
};

struct WINRT_EBO IStreamWebSocketControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamWebSocketControl>,
    impl::require<IStreamWebSocketControl, Windows::Networking::Sockets::IWebSocketControl>
{
    IStreamWebSocketControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocket>,
    impl::require<IWebSocket, Windows::Foundation::IClosable>
{
    IWebSocket(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IWebSocket, Windows::Foundation::IClosable>::Close;
    using impl::consume_t<IWebSocket, Windows::Networking::Sockets::IWebSocket>::Close;
};

struct WINRT_EBO IWebSocketClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketClosedEventArgs>
{
    IWebSocketClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketControl>
{
    IWebSocketControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketControl2>,
    impl::require<IWebSocketControl2, Windows::Networking::Sockets::IWebSocketControl>
{
    IWebSocketControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketErrorStatics>
{
    IWebSocketErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketInformation>
{
    IWebSocketInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketInformation2>,
    impl::require<IWebSocketInformation2, Windows::Networking::Sockets::IWebSocketInformation>
{
    IWebSocketInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebSocketServerCustomValidationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebSocketServerCustomValidationRequestedEventArgs>
{
    IWebSocketServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
