// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Audio {

struct IAudioDeviceInputNode;
struct IAudioDeviceOutputNode;
struct IAudioFileInputNode;
struct IAudioFileOutputNode;
struct IAudioFrameCompletedEventArgs;
struct IAudioFrameInputNode;
struct IAudioFrameOutputNode;
struct IAudioGraph;
struct IAudioGraph2;
struct IAudioGraphConnection;
struct IAudioGraphSettings;
struct IAudioGraphSettingsFactory;
struct IAudioGraphStatics;
struct IAudioGraphUnrecoverableErrorOccurredEventArgs;
struct IAudioInputNode;
struct IAudioInputNode2;
struct IAudioNode;
struct IAudioNodeEmitter;
struct IAudioNodeEmitter2;
struct IAudioNodeEmitterConeProperties;
struct IAudioNodeEmitterDecayModel;
struct IAudioNodeEmitterDecayModelStatics;
struct IAudioNodeEmitterFactory;
struct IAudioNodeEmitterNaturalDecayModelProperties;
struct IAudioNodeEmitterShape;
struct IAudioNodeEmitterShapeStatics;
struct IAudioNodeListener;
struct IAudioNodeWithListener;
struct ICreateAudioDeviceInputNodeResult;
struct ICreateAudioDeviceOutputNodeResult;
struct ICreateAudioFileInputNodeResult;
struct ICreateAudioFileOutputNodeResult;
struct ICreateAudioGraphResult;
struct IEchoEffectDefinition;
struct IEchoEffectDefinitionFactory;
struct IEqualizerBand;
struct IEqualizerEffectDefinition;
struct IEqualizerEffectDefinitionFactory;
struct IFrameInputNodeQuantumStartedEventArgs;
struct ILimiterEffectDefinition;
struct ILimiterEffectDefinitionFactory;
struct IReverbEffectDefinition;
struct IReverbEffectDefinitionFactory;
struct AudioDeviceInputNode;
struct AudioDeviceOutputNode;
struct AudioFileInputNode;
struct AudioFileOutputNode;
struct AudioFrameCompletedEventArgs;
struct AudioFrameInputNode;
struct AudioFrameOutputNode;
struct AudioGraph;
struct AudioGraphBatchUpdater;
struct AudioGraphConnection;
struct AudioGraphSettings;
struct AudioGraphUnrecoverableErrorOccurredEventArgs;
struct AudioNodeEmitter;
struct AudioNodeEmitterConeProperties;
struct AudioNodeEmitterDecayModel;
struct AudioNodeEmitterNaturalDecayModelProperties;
struct AudioNodeEmitterShape;
struct AudioNodeListener;
struct AudioSubmixNode;
struct CreateAudioDeviceInputNodeResult;
struct CreateAudioDeviceOutputNodeResult;
struct CreateAudioFileInputNodeResult;
struct CreateAudioFileOutputNodeResult;
struct CreateAudioGraphResult;
struct EchoEffectDefinition;
struct EqualizerBand;
struct EqualizerEffectDefinition;
struct FrameInputNodeQuantumStartedEventArgs;
struct LimiterEffectDefinition;
struct ReverbEffectDefinition;

}

namespace Windows::Media::Audio {

struct IAudioDeviceInputNode;
struct IAudioDeviceOutputNode;
struct IAudioFileInputNode;
struct IAudioFileOutputNode;
struct IAudioFrameCompletedEventArgs;
struct IAudioFrameInputNode;
struct IAudioFrameOutputNode;
struct IAudioGraph;
struct IAudioGraph2;
struct IAudioGraphConnection;
struct IAudioGraphSettings;
struct IAudioGraphSettingsFactory;
struct IAudioGraphStatics;
struct IAudioGraphUnrecoverableErrorOccurredEventArgs;
struct IAudioInputNode;
struct IAudioInputNode2;
struct IAudioNode;
struct IAudioNodeEmitter;
struct IAudioNodeEmitter2;
struct IAudioNodeEmitterConeProperties;
struct IAudioNodeEmitterDecayModel;
struct IAudioNodeEmitterDecayModelStatics;
struct IAudioNodeEmitterFactory;
struct IAudioNodeEmitterNaturalDecayModelProperties;
struct IAudioNodeEmitterShape;
struct IAudioNodeEmitterShapeStatics;
struct IAudioNodeListener;
struct IAudioNodeWithListener;
struct ICreateAudioDeviceInputNodeResult;
struct ICreateAudioDeviceOutputNodeResult;
struct ICreateAudioFileInputNodeResult;
struct ICreateAudioFileOutputNodeResult;
struct ICreateAudioGraphResult;
struct IEchoEffectDefinition;
struct IEchoEffectDefinitionFactory;
struct IEqualizerBand;
struct IEqualizerEffectDefinition;
struct IEqualizerEffectDefinitionFactory;
struct IFrameInputNodeQuantumStartedEventArgs;
struct ILimiterEffectDefinition;
struct ILimiterEffectDefinitionFactory;
struct IReverbEffectDefinition;
struct IReverbEffectDefinitionFactory;
struct AudioDeviceInputNode;
struct AudioDeviceOutputNode;
struct AudioFileInputNode;
struct AudioFileOutputNode;
struct AudioFrameCompletedEventArgs;
struct AudioFrameInputNode;
struct AudioFrameOutputNode;
struct AudioGraph;
struct AudioGraphBatchUpdater;
struct AudioGraphConnection;
struct AudioGraphSettings;
struct AudioGraphUnrecoverableErrorOccurredEventArgs;
struct AudioNodeEmitter;
struct AudioNodeEmitterConeProperties;
struct AudioNodeEmitterDecayModel;
struct AudioNodeEmitterNaturalDecayModelProperties;
struct AudioNodeEmitterShape;
struct AudioNodeListener;
struct AudioSubmixNode;
struct CreateAudioDeviceInputNodeResult;
struct CreateAudioDeviceOutputNodeResult;
struct CreateAudioFileInputNodeResult;
struct CreateAudioFileOutputNodeResult;
struct CreateAudioGraphResult;
struct EchoEffectDefinition;
struct EqualizerBand;
struct EqualizerEffectDefinition;
struct FrameInputNodeQuantumStartedEventArgs;
struct LimiterEffectDefinition;
struct ReverbEffectDefinition;

}

namespace Windows::Media::Audio {

enum class AudioDeviceNodeCreationStatus
{
    Success = 0,
    DeviceNotAvailable = 1,
    FormatNotSupported = 2,
    UnknownFailure = 3,
    AccessDenied = 4,
};

enum class AudioFileNodeCreationStatus
{
    Success = 0,
    FileNotFound = 1,
    InvalidFileType = 2,
    FormatNotSupported = 3,
    UnknownFailure = 4,
};

enum class AudioGraphCreationStatus
{
    Success = 0,
    DeviceNotAvailable = 1,
    FormatNotSupported = 2,
    UnknownFailure = 3,
};

enum class AudioGraphUnrecoverableError
{
    None = 0,
    AudioDeviceLost = 1,
    AudioSessionDisconnected = 2,
    UnknownFailure = 3,
};

enum class AudioNodeEmitterDecayKind
{
    Natural = 0,
    Custom = 1,
};

enum class AudioNodeEmitterSettings : unsigned
{
    None = 0x0,
    DisableDoppler = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(AudioNodeEmitterSettings)

enum class AudioNodeEmitterShapeKind
{
    Omnidirectional = 0,
    Cone = 1,
};

enum class QuantumSizeSelectionMode
{
    SystemDefault = 0,
    LowestLatency = 1,
    ClosestToDesired = 2,
};

enum class SpatialAudioModel
{
    ObjectBased = 0,
    FoldDown = 1,
};

}

}
