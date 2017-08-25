// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::VoiceCommands {

struct WINRT_EBO VoiceCommand :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommand
{
    VoiceCommand(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoiceCommandCompletedEventArgs :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs
{
    VoiceCommandCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoiceCommandConfirmationResult :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult
{
    VoiceCommandConfirmationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoiceCommandContentTile :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile
{
    VoiceCommandContentTile(std::nullptr_t) noexcept {}
    VoiceCommandContentTile();
};

struct WINRT_EBO VoiceCommandDefinition :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition
{
    VoiceCommandDefinition(std::nullptr_t) noexcept {}
};

struct VoiceCommandDefinitionManager
{
    VoiceCommandDefinitionManager() = delete;
    static Windows::Foundation::IAsyncAction InstallCommandDefinitionsFromStorageFileAsync(Windows::Storage::StorageFile const& file);
    static Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition> InstalledCommandDefinitions();
};

struct WINRT_EBO VoiceCommandDisambiguationResult :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult
{
    VoiceCommandDisambiguationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VoiceCommandResponse :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse
{
    VoiceCommandResponse(std::nullptr_t) noexcept {}
    static uint32_t MaxSupportedVoiceCommandContentTiles();
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponse(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage);
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandResponse CreateResponseForPrompt(Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
};

struct WINRT_EBO VoiceCommandServiceConnection :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection
{
    VoiceCommandServiceConnection(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection FromAppServiceTriggerDetails(Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails);
};

struct WINRT_EBO VoiceCommandUserMessage :
    Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage
{
    VoiceCommandUserMessage(std::nullptr_t) noexcept {}
    VoiceCommandUserMessage();
};

}
