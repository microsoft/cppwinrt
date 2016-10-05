// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Effects {

struct IAudioCaptureEffectsManager;
struct IAudioEffect;
struct IAudioEffectDefinition;
struct IAudioEffectDefinitionFactory;
struct IAudioEffectsManagerStatics;
struct IAudioRenderEffectsManager;
struct IAudioRenderEffectsManager2;
struct IBasicAudioEffect;
struct IBasicVideoEffect;
struct ICompositeVideoFrameContext;
struct IProcessAudioFrameContext;
struct IProcessVideoFrameContext;
struct ISlowMotionEffectDefinition;
struct IVideoCompositor;
struct IVideoCompositorDefinition;
struct IVideoCompositorDefinitionFactory;
struct IVideoEffectDefinition;
struct IVideoEffectDefinitionFactory;
struct IVideoTransformEffectDefinition;
struct AudioCaptureEffectsManager;
struct AudioEffect;
struct AudioEffectDefinition;
struct AudioRenderEffectsManager;
struct CompositeVideoFrameContext;
struct ProcessAudioFrameContext;
struct ProcessVideoFrameContext;
struct SlowMotionEffectDefinition;
struct VideoCompositorDefinition;
struct VideoEffectDefinition;
struct VideoTransformEffectDefinition;

}

namespace Windows::Media::Effects {

struct IAudioCaptureEffectsManager;
struct IAudioEffect;
struct IAudioEffectDefinition;
struct IAudioEffectDefinitionFactory;
struct IAudioEffectsManagerStatics;
struct IAudioRenderEffectsManager;
struct IAudioRenderEffectsManager2;
struct IBasicAudioEffect;
struct IBasicVideoEffect;
struct ICompositeVideoFrameContext;
struct IProcessAudioFrameContext;
struct IProcessVideoFrameContext;
struct ISlowMotionEffectDefinition;
struct IVideoCompositor;
struct IVideoCompositorDefinition;
struct IVideoCompositorDefinitionFactory;
struct IVideoEffectDefinition;
struct IVideoEffectDefinitionFactory;
struct IVideoTransformEffectDefinition;
struct AudioCaptureEffectsManager;
struct AudioEffect;
struct AudioEffectDefinition;
struct AudioEffectsManager;
struct AudioRenderEffectsManager;
struct CompositeVideoFrameContext;
struct ProcessAudioFrameContext;
struct ProcessVideoFrameContext;
struct SlowMotionEffectDefinition;
struct VideoCompositorDefinition;
struct VideoEffectDefinition;
struct VideoTransformEffectDefinition;

}

namespace Windows::Media::Effects {

enum class AudioEffectType
{
    Other = 0,
    AcousticEchoCancellation = 1,
    NoiseSuppression = 2,
    AutomaticGainControl = 3,
    BeamForming = 4,
    ConstantToneRemoval = 5,
    Equalizer = 6,
    LoudnessEqualizer = 7,
    BassBoost = 8,
    VirtualSurround = 9,
    VirtualHeadphones = 10,
    SpeakerFill = 11,
    RoomCorrection = 12,
    BassManagement = 13,
    EnvironmentalEffects = 14,
    SpeakerProtection = 15,
    SpeakerCompensation = 16,
    DynamicRangeCompression = 17,
};

enum class MediaEffectClosedReason
{
    Done = 0,
    UnknownError = 1,
    UnsupportedEncodingFormat = 2,
    EffectCurrentlyUnloaded = 3,
};

enum class MediaMemoryTypes
{
    Gpu = 0,
    Cpu = 1,
    GpuAndCpu = 2,
};

}

}
