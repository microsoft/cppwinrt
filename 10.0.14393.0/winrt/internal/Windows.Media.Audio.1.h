// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Audio.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.0.h"
#include "Windows.Media.Capture.0.h"
#include "Windows.Media.Effects.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Media.Render.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Media.Effects.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Media.Transcoding.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Audio {

struct __declspec(uuid("b01b6be1-6f4e-49e2-ac01-559d62beb3a9")) __declspec(novtable) IAudioDeviceInputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Device(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
};

struct __declspec(uuid("362edbff-ff1c-4434-9e0f-bd2ef522ac82")) __declspec(novtable) IAudioDeviceOutputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Device(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
};

struct __declspec(uuid("905b67c8-6f65-4cd4-8890-4694843c276d")) __declspec(novtable) IAudioFileInputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall put_PlaybackSpeedFactor(double value) = 0;
    virtual HRESULT __stdcall get_PlaybackSpeedFactor(double * value) = 0;
    virtual HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall abi_Seek(Windows::Foundation::TimeSpan position) = 0;
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_StartTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_EndTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_EndTime(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_LoopCount(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall put_LoopCount(Windows::Foundation::IReference<int32_t> * value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_SourceFile(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall add_FileCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_FileCompleted(event_token token) = 0;
};

struct __declspec(uuid("50e01980-5166-4093-80f8-ada00089e9cf")) __declspec(novtable) IAudioFileOutputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_File(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall get_FileEncodingProfile(Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_FinalizeAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Transcoding::TranscodeFailureReason> ** result) = 0;
};

struct __declspec(uuid("dc7c829e-0208-4504-a5a8-f0f268920a65")) __declspec(novtable) IAudioFrameCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Frame(Windows::Media::IAudioFrame ** value) = 0;
};

struct __declspec(uuid("01b266c7-fd96-4ff5-a3c5-d27a9bf44237")) __declspec(novtable) IAudioFrameInputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall put_PlaybackSpeedFactor(double value) = 0;
    virtual HRESULT __stdcall get_PlaybackSpeedFactor(double * value) = 0;
    virtual HRESULT __stdcall abi_AddFrame(Windows::Media::IAudioFrame * frame) = 0;
    virtual HRESULT __stdcall abi_DiscardQueuedFrames() = 0;
    virtual HRESULT __stdcall get_QueuedSampleCount(uint64_t * value) = 0;
    virtual HRESULT __stdcall add_AudioFrameCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AudioFrameCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_QuantumStarted(event_token token) = 0;
};

struct __declspec(uuid("b847371b-3299-45f5-88b3-c9d12a3f1cc8")) __declspec(novtable) IAudioFrameOutputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFrame(Windows::Media::IAudioFrame ** audioFrame) = 0;
};

struct __declspec(uuid("1ad46eed-e48c-4e14-9660-2c4f83e9cdd8")) __declspec(novtable) IAudioGraph : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFrameInputNode(Windows::Media::Audio::IAudioFrameInputNode ** frameInputNode) = 0;
    virtual HRESULT __stdcall abi_CreateFrameInputNodeWithFormat(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Audio::IAudioFrameInputNode ** frameInputNode) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceInputNodeAsync(winrt::Windows::Media::Capture::MediaCategory category, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceInputNodeWithFormatAsync(winrt::Windows::Media::Capture::MediaCategory category, Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceInputNodeWithFormatOnDeviceAsync(winrt::Windows::Media::Capture::MediaCategory category, Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Devices::Enumeration::IDeviceInformation * device, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFrameOutputNode(Windows::Media::Audio::IAudioFrameOutputNode ** frameOutputNode) = 0;
    virtual HRESULT __stdcall abi_CreateFrameOutputNodeWithFormat(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Audio::IAudioFrameOutputNode ** frameOutputNode) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceOutputNodeAsync(Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFileInputNodeAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFileOutputNodeAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFileOutputNodeWithFileProfileAsync(Windows::Storage::IStorageFile * file, Windows::Media::MediaProperties::IMediaEncodingProfile * fileEncodingProfile, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSubmixNode(Windows::Media::Audio::IAudioInputNode ** submixNode) = 0;
    virtual HRESULT __stdcall abi_CreateSubmixNodeWithFormat(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Audio::IAudioInputNode ** submixNode) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_ResetAllNodes() = 0;
    virtual HRESULT __stdcall add_QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_QuantumStarted(event_token token) = 0;
    virtual HRESULT __stdcall add_QuantumProcessed(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_QuantumProcessed(event_token token) = 0;
    virtual HRESULT __stdcall add_UnrecoverableErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UnrecoverableErrorOccurred(event_token token) = 0;
    virtual HRESULT __stdcall get_CompletedQuantumCount(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_EncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall get_LatencyInSamples(int32_t * value) = 0;
    virtual HRESULT __stdcall get_PrimaryRenderDevice(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall get_RenderDeviceAudioProcessing(winrt::Windows::Media::AudioProcessing * value) = 0;
    virtual HRESULT __stdcall get_SamplesPerQuantum(int32_t * value) = 0;
};

struct __declspec(uuid("4e4c3bd5-4fc1-45f6-a947-3cd38f4fd839")) __declspec(novtable) IAudioGraph2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFrameInputNodeWithFormatAndEmitter(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Audio::IAudioNodeEmitter * emitter, Windows::Media::Audio::IAudioFrameInputNode ** frameInputNode) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(winrt::Windows::Media::Capture::MediaCategory category, Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Devices::Enumeration::IDeviceInformation * device, Windows::Media::Audio::IAudioNodeEmitter * emitter, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFileInputNodeWithEmitterAsync(Windows::Storage::IStorageFile * file, Windows::Media::Audio::IAudioNodeEmitter * emitter, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSubmixNodeWithFormatAndEmitter(Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties, Windows::Media::Audio::IAudioNodeEmitter * emitter, Windows::Media::Audio::IAudioInputNode ** submixNode) = 0;
    virtual HRESULT __stdcall abi_CreateBatchUpdater(Windows::Foundation::IClosable ** updater) = 0;
};

struct __declspec(uuid("763070ed-d04e-4fac-b233-600b42edd469")) __declspec(novtable) IAudioGraphConnection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Destination(Windows::Media::Audio::IAudioNode ** value) = 0;
    virtual HRESULT __stdcall put_Gain(double value) = 0;
    virtual HRESULT __stdcall get_Gain(double * value) = 0;
};

struct __declspec(uuid("1d59647f-e6fe-4628-84f8-9d8bdba25785")) __declspec(novtable) IAudioGraphSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall put_EncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties * value) = 0;
    virtual HRESULT __stdcall get_PrimaryRenderDevice(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall put_PrimaryRenderDevice(Windows::Devices::Enumeration::IDeviceInformation * value) = 0;
    virtual HRESULT __stdcall get_QuantumSizeSelectionMode(winrt::Windows::Media::Audio::QuantumSizeSelectionMode * value) = 0;
    virtual HRESULT __stdcall put_QuantumSizeSelectionMode(winrt::Windows::Media::Audio::QuantumSizeSelectionMode value) = 0;
    virtual HRESULT __stdcall get_DesiredSamplesPerQuantum(int32_t * value) = 0;
    virtual HRESULT __stdcall put_DesiredSamplesPerQuantum(int32_t value) = 0;
    virtual HRESULT __stdcall get_AudioRenderCategory(winrt::Windows::Media::Render::AudioRenderCategory * value) = 0;
    virtual HRESULT __stdcall put_AudioRenderCategory(winrt::Windows::Media::Render::AudioRenderCategory value) = 0;
    virtual HRESULT __stdcall get_DesiredRenderDeviceAudioProcessing(winrt::Windows::Media::AudioProcessing * value) = 0;
    virtual HRESULT __stdcall put_DesiredRenderDeviceAudioProcessing(winrt::Windows::Media::AudioProcessing value) = 0;
};

struct __declspec(uuid("a5d91cc6-c2eb-4a61-a214-1d66d75f83da")) __declspec(novtable) IAudioGraphSettingsFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Media::Render::AudioRenderCategory audioRenderCategory, Windows::Media::Audio::IAudioGraphSettings ** value) = 0;
};

struct __declspec(uuid("76ec3132-e159-4ab7-a82a-17beb4b31e94")) __declspec(novtable) IAudioGraphStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAsync(Windows::Media::Audio::IAudioGraphSettings * settings, Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> ** result) = 0;
};

struct __declspec(uuid("c3d9cbe0-3ff6-4fb3-b262-50d435c55423")) __declspec(novtable) IAudioGraphUnrecoverableErrorOccurredEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Media::Audio::AudioGraphUnrecoverableError * value) = 0;
};

struct __declspec(uuid("d148005c-8428-4784-b7fd-a99d468c5d20")) __declspec(novtable) IAudioInputNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OutgoingConnections(Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> ** value) = 0;
    virtual HRESULT __stdcall abi_AddOutgoingConnection(Windows::Media::Audio::IAudioNode * destination) = 0;
    virtual HRESULT __stdcall abi_AddOutgoingConnectionWithGain(Windows::Media::Audio::IAudioNode * destination, double gain) = 0;
    virtual HRESULT __stdcall abi_RemoveOutgoingConnection(Windows::Media::Audio::IAudioNode * destination) = 0;
};

struct __declspec(uuid("905156b7-ca68-4c6d-a8bc-e3ee17fe3fd2")) __declspec(novtable) IAudioInputNode2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Emitter(Windows::Media::Audio::IAudioNodeEmitter ** value) = 0;
};

struct __declspec(uuid("15389d7f-dbd8-4819-bf03-668e9357cd6d")) __declspec(novtable) IAudioNode : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EffectDefinitions(Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> ** value) = 0;
    virtual HRESULT __stdcall put_OutgoingGain(double value) = 0;
    virtual HRESULT __stdcall get_OutgoingGain(double * value) = 0;
    virtual HRESULT __stdcall get_EncodingProperties(Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall get_ConsumeInput(bool * value) = 0;
    virtual HRESULT __stdcall put_ConsumeInput(bool value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_Reset() = 0;
    virtual HRESULT __stdcall abi_DisableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition * definition) = 0;
    virtual HRESULT __stdcall abi_EnableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition * definition) = 0;
};

struct __declspec(uuid("3676971d-880a-47b8-adf7-1323a9d965be")) __declspec(novtable) IAudioNodeEmitter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Shape(Windows::Media::Audio::IAudioNodeEmitterShape ** value) = 0;
    virtual HRESULT __stdcall get_DecayModel(Windows::Media::Audio::IAudioNodeEmitterDecayModel ** value) = 0;
    virtual HRESULT __stdcall get_Gain(double * value) = 0;
    virtual HRESULT __stdcall put_Gain(double value) = 0;
    virtual HRESULT __stdcall get_DistanceScale(double * value) = 0;
    virtual HRESULT __stdcall put_DistanceScale(double value) = 0;
    virtual HRESULT __stdcall get_DopplerScale(double * value) = 0;
    virtual HRESULT __stdcall put_DopplerScale(double value) = 0;
    virtual HRESULT __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_IsDopplerDisabled(bool * value) = 0;
};

struct __declspec(uuid("4ab6eecb-ec29-47f8-818c-b6b660a5aeb1")) __declspec(novtable) IAudioNodeEmitter2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SpatialAudioModel(winrt::Windows::Media::Audio::SpatialAudioModel * value) = 0;
    virtual HRESULT __stdcall put_SpatialAudioModel(winrt::Windows::Media::Audio::SpatialAudioModel value) = 0;
};

struct __declspec(uuid("e99b2cee-02ca-4375-9326-0c6ae4bcdfb5")) __declspec(novtable) IAudioNodeEmitterConeProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InnerAngle(double * value) = 0;
    virtual HRESULT __stdcall get_OuterAngle(double * value) = 0;
    virtual HRESULT __stdcall get_OuterAngleGain(double * value) = 0;
};

struct __declspec(uuid("1d1d5af7-0d53-4fa9-bd84-d5816a86f3ff")) __declspec(novtable) IAudioNodeEmitterDecayModel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Media::Audio::AudioNodeEmitterDecayKind * value) = 0;
    virtual HRESULT __stdcall get_MinGain(double * value) = 0;
    virtual HRESULT __stdcall get_MaxGain(double * value) = 0;
    virtual HRESULT __stdcall get_NaturalProperties(Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties ** value) = 0;
};

struct __declspec(uuid("c7787ca8-f178-462f-bc81-8dd5cbe5dae8")) __declspec(novtable) IAudioNodeEmitterDecayModelStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance, Windows::Media::Audio::IAudioNodeEmitterDecayModel ** decayModel) = 0;
    virtual HRESULT __stdcall abi_CreateCustom(double minGain, double maxGain, Windows::Media::Audio::IAudioNodeEmitterDecayModel ** decayModel) = 0;
};

struct __declspec(uuid("fdc8489a-6ad6-4ce4-b7f7-a99370df7ee9")) __declspec(novtable) IAudioNodeEmitterFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAudioNodeEmitter(Windows::Media::Audio::IAudioNodeEmitterShape * shape, Windows::Media::Audio::IAudioNodeEmitterDecayModel * decayModel, winrt::Windows::Media::Audio::AudioNodeEmitterSettings settings, Windows::Media::Audio::IAudioNodeEmitter ** emitter) = 0;
};

struct __declspec(uuid("48934bcf-cf2c-4efc-9331-75bd22df1f0c")) __declspec(novtable) IAudioNodeEmitterNaturalDecayModelProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnityGainDistance(double * value) = 0;
    virtual HRESULT __stdcall get_CutoffDistance(double * value) = 0;
};

struct __declspec(uuid("ea0311c5-e73d-44bc-859c-45553bbc4828")) __declspec(novtable) IAudioNodeEmitterShape : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Media::Audio::AudioNodeEmitterShapeKind * value) = 0;
    virtual HRESULT __stdcall get_ConeProperties(Windows::Media::Audio::IAudioNodeEmitterConeProperties ** value) = 0;
};

struct __declspec(uuid("57bb2771-ffa5-4b86-a779-e264aeb9145f")) __declspec(novtable) IAudioNodeEmitterShapeStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCone(double innerAngle, double outerAngle, double outerAngleGain, Windows::Media::Audio::IAudioNodeEmitterShape ** shape) = 0;
    virtual HRESULT __stdcall abi_CreateOmnidirectional(Windows::Media::Audio::IAudioNodeEmitterShape ** shape) = 0;
};

struct __declspec(uuid("d9722e16-0c0a-41da-b755-6c77835fb1eb")) __declspec(novtable) IAudioNodeListener : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_Position(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion * value) = 0;
    virtual HRESULT __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall get_SpeedOfSound(double * value) = 0;
    virtual HRESULT __stdcall put_SpeedOfSound(double value) = 0;
    virtual HRESULT __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3 * value) = 0;
    virtual HRESULT __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3 value) = 0;
};

struct __declspec(uuid("0e0f907c-79ff-4544-9eeb-01257b15105a")) __declspec(novtable) IAudioNodeWithListener : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Listener(Windows::Media::Audio::IAudioNodeListener * value) = 0;
    virtual HRESULT __stdcall get_Listener(Windows::Media::Audio::IAudioNodeListener ** value) = 0;
};

struct __declspec(uuid("16eec7a8-1ca7-40ef-91a4-d346e0aa1bba")) __declspec(novtable) ICreateAudioDeviceInputNodeResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Audio::AudioDeviceNodeCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_DeviceInputNode(Windows::Media::Audio::IAudioDeviceInputNode ** value) = 0;
};

struct __declspec(uuid("f7776d27-1d9a-47f7-9cd4-2859cc1b7bff")) __declspec(novtable) ICreateAudioDeviceOutputNodeResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Audio::AudioDeviceNodeCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_DeviceOutputNode(Windows::Media::Audio::IAudioDeviceOutputNode ** value) = 0;
};

struct __declspec(uuid("ce83d61c-e297-4c50-9ce7-1c7a69d6bd09")) __declspec(novtable) ICreateAudioFileInputNodeResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Audio::AudioFileNodeCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_FileInputNode(Windows::Media::Audio::IAudioFileInputNode ** value) = 0;
};

struct __declspec(uuid("47d6ba7b-e909-453f-866e-5540cda734ff")) __declspec(novtable) ICreateAudioFileOutputNodeResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Audio::AudioFileNodeCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_FileOutputNode(Windows::Media::Audio::IAudioFileOutputNode ** value) = 0;
};

struct __declspec(uuid("5453ef7e-7bde-4b76-bb5d-48f79cfc8c0b")) __declspec(novtable) ICreateAudioGraphResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Audio::AudioGraphCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_Graph(Windows::Media::Audio::IAudioGraph ** value) = 0;
};

struct __declspec(uuid("0e4d3faa-36b8-4c91-b9da-11f44a8a6610")) __declspec(novtable) IEchoEffectDefinition : Windows::IInspectable
{
    virtual HRESULT __stdcall put_WetDryMix(double value) = 0;
    virtual HRESULT __stdcall get_WetDryMix(double * value) = 0;
    virtual HRESULT __stdcall put_Feedback(double value) = 0;
    virtual HRESULT __stdcall get_Feedback(double * value) = 0;
    virtual HRESULT __stdcall put_Delay(double value) = 0;
    virtual HRESULT __stdcall get_Delay(double * value) = 0;
};

struct __declspec(uuid("0d4e2257-aaf2-4e86-a54c-fb79db8f6c12")) __declspec(novtable) IEchoEffectDefinitionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::Audio::IAudioGraph * audioGraph, Windows::Media::Audio::IEchoEffectDefinition ** value) = 0;
};

struct __declspec(uuid("c00a5a6a-262d-4b85-9bb7-43280b62ed0c")) __declspec(novtable) IEqualizerBand : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bandwidth(double * value) = 0;
    virtual HRESULT __stdcall put_Bandwidth(double value) = 0;
    virtual HRESULT __stdcall get_FrequencyCenter(double * value) = 0;
    virtual HRESULT __stdcall put_FrequencyCenter(double value) = 0;
    virtual HRESULT __stdcall get_Gain(double * value) = 0;
    virtual HRESULT __stdcall put_Gain(double value) = 0;
};

struct __declspec(uuid("023f6f1f-83fe-449a-a822-c696442d16b0")) __declspec(novtable) IEqualizerEffectDefinition : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Bands(Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> ** value) = 0;
};

struct __declspec(uuid("d2876fc4-d410-4eb5-9e69-c9aa1277eaf0")) __declspec(novtable) IEqualizerEffectDefinitionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::Audio::IAudioGraph * audioGraph, Windows::Media::Audio::IEqualizerEffectDefinition ** value) = 0;
};

struct __declspec(uuid("3d9bd498-a306-4f06-bd9f-e9efc8226304")) __declspec(novtable) IFrameInputNodeQuantumStartedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequiredSamples(int32_t * value) = 0;
};

struct __declspec(uuid("6b755d19-2603-47ba-bdeb-39055e3486dc")) __declspec(novtable) ILimiterEffectDefinition : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Release(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Release(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Loudness(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Loudness(uint32_t * value) = 0;
};

struct __declspec(uuid("ecbae6f1-61ff-45ef-b8f5-48659a57c72d")) __declspec(novtable) ILimiterEffectDefinitionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::Audio::IAudioGraph * audioGraph, Windows::Media::Audio::ILimiterEffectDefinition ** value) = 0;
};

struct __declspec(uuid("4606aa89-f563-4d0a-8f6e-f0cddff35d84")) __declspec(novtable) IReverbEffectDefinition : Windows::IInspectable
{
    virtual HRESULT __stdcall put_WetDryMix(double value) = 0;
    virtual HRESULT __stdcall get_WetDryMix(double * value) = 0;
    virtual HRESULT __stdcall put_ReflectionsDelay(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ReflectionsDelay(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_ReverbDelay(uint8_t value) = 0;
    virtual HRESULT __stdcall get_ReverbDelay(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_RearDelay(uint8_t value) = 0;
    virtual HRESULT __stdcall get_RearDelay(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_PositionLeft(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PositionLeft(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_PositionRight(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PositionRight(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_PositionMatrixLeft(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PositionMatrixLeft(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_PositionMatrixRight(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PositionMatrixRight(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_EarlyDiffusion(uint8_t value) = 0;
    virtual HRESULT __stdcall get_EarlyDiffusion(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_LateDiffusion(uint8_t value) = 0;
    virtual HRESULT __stdcall get_LateDiffusion(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_LowEQGain(uint8_t value) = 0;
    virtual HRESULT __stdcall get_LowEQGain(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_LowEQCutoff(uint8_t value) = 0;
    virtual HRESULT __stdcall get_LowEQCutoff(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_HighEQGain(uint8_t value) = 0;
    virtual HRESULT __stdcall get_HighEQGain(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_HighEQCutoff(uint8_t value) = 0;
    virtual HRESULT __stdcall get_HighEQCutoff(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_RoomFilterFreq(double value) = 0;
    virtual HRESULT __stdcall get_RoomFilterFreq(double * value) = 0;
    virtual HRESULT __stdcall put_RoomFilterMain(double value) = 0;
    virtual HRESULT __stdcall get_RoomFilterMain(double * value) = 0;
    virtual HRESULT __stdcall put_RoomFilterHF(double value) = 0;
    virtual HRESULT __stdcall get_RoomFilterHF(double * value) = 0;
    virtual HRESULT __stdcall put_ReflectionsGain(double value) = 0;
    virtual HRESULT __stdcall get_ReflectionsGain(double * value) = 0;
    virtual HRESULT __stdcall put_ReverbGain(double value) = 0;
    virtual HRESULT __stdcall get_ReverbGain(double * value) = 0;
    virtual HRESULT __stdcall put_DecayTime(double value) = 0;
    virtual HRESULT __stdcall get_DecayTime(double * value) = 0;
    virtual HRESULT __stdcall put_Density(double value) = 0;
    virtual HRESULT __stdcall get_Density(double * value) = 0;
    virtual HRESULT __stdcall put_RoomSize(double value) = 0;
    virtual HRESULT __stdcall get_RoomSize(double * value) = 0;
    virtual HRESULT __stdcall put_DisableLateField(bool value) = 0;
    virtual HRESULT __stdcall get_DisableLateField(bool * value) = 0;
};

struct __declspec(uuid("a7d5cbfe-100b-4ff0-9da6-dc4e05a759f0")) __declspec(novtable) IReverbEffectDefinitionFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Media::Audio::IAudioGraph * audioGraph, Windows::Media::Audio::IReverbEffectDefinition ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Audio::AudioDeviceInputNode> { using default_interface = Windows::Media::Audio::IAudioDeviceInputNode; };
template <> struct traits<Windows::Media::Audio::AudioDeviceOutputNode> { using default_interface = Windows::Media::Audio::IAudioDeviceOutputNode; };
template <> struct traits<Windows::Media::Audio::AudioFileInputNode> { using default_interface = Windows::Media::Audio::IAudioFileInputNode; };
template <> struct traits<Windows::Media::Audio::AudioFileOutputNode> { using default_interface = Windows::Media::Audio::IAudioFileOutputNode; };
template <> struct traits<Windows::Media::Audio::AudioFrameCompletedEventArgs> { using default_interface = Windows::Media::Audio::IAudioFrameCompletedEventArgs; };
template <> struct traits<Windows::Media::Audio::AudioFrameInputNode> { using default_interface = Windows::Media::Audio::IAudioFrameInputNode; };
template <> struct traits<Windows::Media::Audio::AudioFrameOutputNode> { using default_interface = Windows::Media::Audio::IAudioFrameOutputNode; };
template <> struct traits<Windows::Media::Audio::AudioGraph> { using default_interface = Windows::Media::Audio::IAudioGraph; };
template <> struct traits<Windows::Media::Audio::AudioGraphBatchUpdater> { using default_interface = Windows::Foundation::IClosable; };
template <> struct traits<Windows::Media::Audio::AudioGraphConnection> { using default_interface = Windows::Media::Audio::IAudioGraphConnection; };
template <> struct traits<Windows::Media::Audio::AudioGraphSettings> { using default_interface = Windows::Media::Audio::IAudioGraphSettings; };
template <> struct traits<Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> { using default_interface = Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs; };
template <> struct traits<Windows::Media::Audio::AudioNodeEmitter> { using default_interface = Windows::Media::Audio::IAudioNodeEmitter; };
template <> struct traits<Windows::Media::Audio::AudioNodeEmitterConeProperties> { using default_interface = Windows::Media::Audio::IAudioNodeEmitterConeProperties; };
template <> struct traits<Windows::Media::Audio::AudioNodeEmitterDecayModel> { using default_interface = Windows::Media::Audio::IAudioNodeEmitterDecayModel; };
template <> struct traits<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> { using default_interface = Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties; };
template <> struct traits<Windows::Media::Audio::AudioNodeEmitterShape> { using default_interface = Windows::Media::Audio::IAudioNodeEmitterShape; };
template <> struct traits<Windows::Media::Audio::AudioNodeListener> { using default_interface = Windows::Media::Audio::IAudioNodeListener; };
template <> struct traits<Windows::Media::Audio::AudioSubmixNode> { using default_interface = Windows::Media::Audio::IAudioInputNode; };
template <> struct traits<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> { using default_interface = Windows::Media::Audio::ICreateAudioDeviceInputNodeResult; };
template <> struct traits<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> { using default_interface = Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult; };
template <> struct traits<Windows::Media::Audio::CreateAudioFileInputNodeResult> { using default_interface = Windows::Media::Audio::ICreateAudioFileInputNodeResult; };
template <> struct traits<Windows::Media::Audio::CreateAudioFileOutputNodeResult> { using default_interface = Windows::Media::Audio::ICreateAudioFileOutputNodeResult; };
template <> struct traits<Windows::Media::Audio::CreateAudioGraphResult> { using default_interface = Windows::Media::Audio::ICreateAudioGraphResult; };
template <> struct traits<Windows::Media::Audio::EchoEffectDefinition> { using default_interface = Windows::Media::Audio::IEchoEffectDefinition; };
template <> struct traits<Windows::Media::Audio::EqualizerBand> { using default_interface = Windows::Media::Audio::IEqualizerBand; };
template <> struct traits<Windows::Media::Audio::EqualizerEffectDefinition> { using default_interface = Windows::Media::Audio::IEqualizerEffectDefinition; };
template <> struct traits<Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> { using default_interface = Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs; };
template <> struct traits<Windows::Media::Audio::LimiterEffectDefinition> { using default_interface = Windows::Media::Audio::ILimiterEffectDefinition; };
template <> struct traits<Windows::Media::Audio::ReverbEffectDefinition> { using default_interface = Windows::Media::Audio::IReverbEffectDefinition; };

}

namespace Windows::Media::Audio {

template <typename T> struct impl_IAudioDeviceInputNode;
template <typename T> struct impl_IAudioDeviceOutputNode;
template <typename T> struct impl_IAudioFileInputNode;
template <typename T> struct impl_IAudioFileOutputNode;
template <typename T> struct impl_IAudioFrameCompletedEventArgs;
template <typename T> struct impl_IAudioFrameInputNode;
template <typename T> struct impl_IAudioFrameOutputNode;
template <typename T> struct impl_IAudioGraph;
template <typename T> struct impl_IAudioGraph2;
template <typename T> struct impl_IAudioGraphConnection;
template <typename T> struct impl_IAudioGraphSettings;
template <typename T> struct impl_IAudioGraphSettingsFactory;
template <typename T> struct impl_IAudioGraphStatics;
template <typename T> struct impl_IAudioGraphUnrecoverableErrorOccurredEventArgs;
template <typename T> struct impl_IAudioInputNode;
template <typename T> struct impl_IAudioInputNode2;
template <typename T> struct impl_IAudioNode;
template <typename T> struct impl_IAudioNodeEmitter;
template <typename T> struct impl_IAudioNodeEmitter2;
template <typename T> struct impl_IAudioNodeEmitterConeProperties;
template <typename T> struct impl_IAudioNodeEmitterDecayModel;
template <typename T> struct impl_IAudioNodeEmitterDecayModelStatics;
template <typename T> struct impl_IAudioNodeEmitterFactory;
template <typename T> struct impl_IAudioNodeEmitterNaturalDecayModelProperties;
template <typename T> struct impl_IAudioNodeEmitterShape;
template <typename T> struct impl_IAudioNodeEmitterShapeStatics;
template <typename T> struct impl_IAudioNodeListener;
template <typename T> struct impl_IAudioNodeWithListener;
template <typename T> struct impl_ICreateAudioDeviceInputNodeResult;
template <typename T> struct impl_ICreateAudioDeviceOutputNodeResult;
template <typename T> struct impl_ICreateAudioFileInputNodeResult;
template <typename T> struct impl_ICreateAudioFileOutputNodeResult;
template <typename T> struct impl_ICreateAudioGraphResult;
template <typename T> struct impl_IEchoEffectDefinition;
template <typename T> struct impl_IEchoEffectDefinitionFactory;
template <typename T> struct impl_IEqualizerBand;
template <typename T> struct impl_IEqualizerEffectDefinition;
template <typename T> struct impl_IEqualizerEffectDefinitionFactory;
template <typename T> struct impl_IFrameInputNodeQuantumStartedEventArgs;
template <typename T> struct impl_ILimiterEffectDefinition;
template <typename T> struct impl_ILimiterEffectDefinitionFactory;
template <typename T> struct impl_IReverbEffectDefinition;
template <typename T> struct impl_IReverbEffectDefinitionFactory;

}

namespace impl {

template <> struct traits<Windows::Media::Audio::IAudioDeviceInputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioDeviceInputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioDeviceInputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioDeviceOutputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioDeviceOutputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioDeviceOutputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioFileInputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioFileInputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioFileInputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioFileOutputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioFileOutputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioFileOutputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioFrameCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Audio::IAudioFrameCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioFrameCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioFrameInputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioFrameInputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioFrameInputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioFrameOutputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioFrameOutputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioFrameOutputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraph>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraph;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraph<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraph2>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraph2;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraph2<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraphConnection>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraphConnection;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraphConnection<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraphSettings>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraphSettings;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraphSettings<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraphSettingsFactory>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraphSettingsFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraphSettingsFactory<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraphStatics>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraphStatics;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraphStatics<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioGraphUnrecoverableErrorOccurredEventArgs<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioInputNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioInputNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioInputNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioInputNode2>
{
    using abi = ABI::Windows::Media::Audio::IAudioInputNode2;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioInputNode2<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNode>
{
    using abi = ABI::Windows::Media::Audio::IAudioNode;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNode<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitter>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitter;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitter<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitter2>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitter2;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitter2<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterConeProperties>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterConeProperties;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterConeProperties<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterDecayModel>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterDecayModel<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterDecayModelStatics<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterFactory>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterFactory<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterNaturalDecayModelProperties<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterShape>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterShape;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterShape<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeEmitterShapeStatics;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeEmitterShapeStatics<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeListener>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeListener;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeListener<D>;
};

template <> struct traits<Windows::Media::Audio::IAudioNodeWithListener>
{
    using abi = ABI::Windows::Media::Audio::IAudioNodeWithListener;
    template <typename D> using consume = Windows::Media::Audio::impl_IAudioNodeWithListener<D>;
};

template <> struct traits<Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult;
    template <typename D> using consume = Windows::Media::Audio::impl_ICreateAudioDeviceInputNodeResult<D>;
};

template <> struct traits<Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult;
    template <typename D> using consume = Windows::Media::Audio::impl_ICreateAudioDeviceOutputNodeResult<D>;
};

template <> struct traits<Windows::Media::Audio::ICreateAudioFileInputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult;
    template <typename D> using consume = Windows::Media::Audio::impl_ICreateAudioFileInputNodeResult<D>;
};

template <> struct traits<Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult;
    template <typename D> using consume = Windows::Media::Audio::impl_ICreateAudioFileOutputNodeResult<D>;
};

template <> struct traits<Windows::Media::Audio::ICreateAudioGraphResult>
{
    using abi = ABI::Windows::Media::Audio::ICreateAudioGraphResult;
    template <typename D> using consume = Windows::Media::Audio::impl_ICreateAudioGraphResult<D>;
};

template <> struct traits<Windows::Media::Audio::IEchoEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::IEchoEffectDefinition;
    template <typename D> using consume = Windows::Media::Audio::impl_IEchoEffectDefinition<D>;
};

template <> struct traits<Windows::Media::Audio::IEchoEffectDefinitionFactory>
{
    using abi = ABI::Windows::Media::Audio::IEchoEffectDefinitionFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_IEchoEffectDefinitionFactory<D>;
};

template <> struct traits<Windows::Media::Audio::IEqualizerBand>
{
    using abi = ABI::Windows::Media::Audio::IEqualizerBand;
    template <typename D> using consume = Windows::Media::Audio::impl_IEqualizerBand<D>;
};

template <> struct traits<Windows::Media::Audio::IEqualizerEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::IEqualizerEffectDefinition;
    template <typename D> using consume = Windows::Media::Audio::impl_IEqualizerEffectDefinition<D>;
};

template <> struct traits<Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
{
    using abi = ABI::Windows::Media::Audio::IEqualizerEffectDefinitionFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_IEqualizerEffectDefinitionFactory<D>;
};

template <> struct traits<Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
{
    using abi = ABI::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs;
    template <typename D> using consume = Windows::Media::Audio::impl_IFrameInputNodeQuantumStartedEventArgs<D>;
};

template <> struct traits<Windows::Media::Audio::ILimiterEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::ILimiterEffectDefinition;
    template <typename D> using consume = Windows::Media::Audio::impl_ILimiterEffectDefinition<D>;
};

template <> struct traits<Windows::Media::Audio::ILimiterEffectDefinitionFactory>
{
    using abi = ABI::Windows::Media::Audio::ILimiterEffectDefinitionFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_ILimiterEffectDefinitionFactory<D>;
};

template <> struct traits<Windows::Media::Audio::IReverbEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::IReverbEffectDefinition;
    template <typename D> using consume = Windows::Media::Audio::impl_IReverbEffectDefinition<D>;
};

template <> struct traits<Windows::Media::Audio::IReverbEffectDefinitionFactory>
{
    using abi = ABI::Windows::Media::Audio::IReverbEffectDefinitionFactory;
    template <typename D> using consume = Windows::Media::Audio::impl_IReverbEffectDefinitionFactory<D>;
};

template <> struct traits<Windows::Media::Audio::AudioDeviceInputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioDeviceInputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioDeviceInputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioDeviceOutputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioDeviceOutputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioDeviceOutputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioFileInputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioFileInputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioFileInputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioFileOutputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioFileOutputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioFileOutputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioFrameCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Audio::AudioFrameCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioFrameCompletedEventArgs"; }
};

template <> struct traits<Windows::Media::Audio::AudioFrameInputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioFrameInputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioFrameInputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioFrameOutputNode>
{
    using abi = ABI::Windows::Media::Audio::AudioFrameOutputNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioFrameOutputNode"; }
};

template <> struct traits<Windows::Media::Audio::AudioGraph>
{
    using abi = ABI::Windows::Media::Audio::AudioGraph;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioGraph"; }
};

template <> struct traits<Windows::Media::Audio::AudioGraphBatchUpdater>
{
    using abi = ABI::Windows::Media::Audio::AudioGraphBatchUpdater;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioGraphBatchUpdater"; }
};

template <> struct traits<Windows::Media::Audio::AudioGraphConnection>
{
    using abi = ABI::Windows::Media::Audio::AudioGraphConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioGraphConnection"; }
};

template <> struct traits<Windows::Media::Audio::AudioGraphSettings>
{
    using abi = ABI::Windows::Media::Audio::AudioGraphSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioGraphSettings"; }
};

template <> struct traits<Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs>
{
    using abi = ABI::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeEmitter>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeEmitter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeEmitter"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeEmitterConeProperties>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeEmitterConeProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeEmitterConeProperties"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeEmitterDecayModel>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeEmitterDecayModel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeEmitterDecayModel"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeEmitterShape>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeEmitterShape;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeEmitterShape"; }
};

template <> struct traits<Windows::Media::Audio::AudioNodeListener>
{
    using abi = ABI::Windows::Media::Audio::AudioNodeListener;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioNodeListener"; }
};

template <> struct traits<Windows::Media::Audio::AudioSubmixNode>
{
    using abi = ABI::Windows::Media::Audio::AudioSubmixNode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.AudioSubmixNode"; }
};

template <> struct traits<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult"; }
};

template <> struct traits<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult"; }
};

template <> struct traits<Windows::Media::Audio::CreateAudioFileInputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.CreateAudioFileInputNodeResult"; }
};

template <> struct traits<Windows::Media::Audio::CreateAudioFileOutputNodeResult>
{
    using abi = ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.CreateAudioFileOutputNodeResult"; }
};

template <> struct traits<Windows::Media::Audio::CreateAudioGraphResult>
{
    using abi = ABI::Windows::Media::Audio::CreateAudioGraphResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.CreateAudioGraphResult"; }
};

template <> struct traits<Windows::Media::Audio::EchoEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::EchoEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.EchoEffectDefinition"; }
};

template <> struct traits<Windows::Media::Audio::EqualizerBand>
{
    using abi = ABI::Windows::Media::Audio::EqualizerBand;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.EqualizerBand"; }
};

template <> struct traits<Windows::Media::Audio::EqualizerEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::EqualizerEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.EqualizerEffectDefinition"; }
};

template <> struct traits<Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs>
{
    using abi = ABI::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs"; }
};

template <> struct traits<Windows::Media::Audio::LimiterEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::LimiterEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.LimiterEffectDefinition"; }
};

template <> struct traits<Windows::Media::Audio::ReverbEffectDefinition>
{
    using abi = ABI::Windows::Media::Audio::ReverbEffectDefinition;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Audio.ReverbEffectDefinition"; }
};

}

}
