// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.AppService.0.h"
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::VoiceCommands {

struct WINRT_EBO IVoiceCommand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommand>
{
    IVoiceCommand(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandCompletedEventArgs>
{
    IVoiceCommandCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandConfirmationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandConfirmationResult>
{
    IVoiceCommandConfirmationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandContentTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandContentTile>
{
    IVoiceCommandContentTile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDefinition>
{
    IVoiceCommandDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandDefinitionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDefinitionManagerStatics>
{
    IVoiceCommandDefinitionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandDisambiguationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandDisambiguationResult>
{
    IVoiceCommandDisambiguationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandResponse>
{
    IVoiceCommandResponse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandResponseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandResponseStatics>
{
    IVoiceCommandResponseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandServiceConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandServiceConnection>
{
    IVoiceCommandServiceConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandServiceConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandServiceConnectionStatics>
{
    IVoiceCommandServiceConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoiceCommandUserMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoiceCommandUserMessage>
{
    IVoiceCommandUserMessage(std::nullptr_t = nullptr) noexcept {}
};

}
