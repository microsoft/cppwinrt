#pragma once
#include "../pch.h"
#include "winrt/Windows.UI.Input.Spatial.h"

namespace HolographicCube
{
    // Sample gesture handler.
    // Hooks up events to recognize a tap gesture, and keeps track of input using a boolean value.
    class SpatialInputHandler
    {
    public:
        SpatialInputHandler();
        ~SpatialInputHandler();

        winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState CheckForInput();

    private:
        // Interaction event handler.
        void OnSourcePressed(
            winrt::Windows::UI::Input::Spatial::SpatialInteractionManager sender,
            winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs args);

        // API objects used to process gesture input, and generate gesture events.
        winrt::Windows::UI::Input::Spatial::SpatialInteractionManager     m_interactionManager = nullptr;

        // Event registration token.
        winrt::event_token                                                m_sourcePressedEventToken;

        // Used to indicate that a Pressed input event was received this frame.
        winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState m_sourceState = nullptr;
    };
}
