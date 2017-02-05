#pragma once
#include "Common\DeviceResources.h"
#include "Common\StepTimer.h"

#define DRAW_SAMPLE_CONTENT

#ifdef DRAW_SAMPLE_CONTENT
#include "Content\SpinningCubeRenderer.h"
#include "Content\SpatialInputHandler.h"
#endif


namespace HolographicCube
{
    class HolographicCubeMain :
        public DX::IDeviceNotify
    {
    public:
        HolographicCubeMain(const std::shared_ptr<DX::DeviceResources>& deviceResources);
        ~HolographicCubeMain();

        // Inherited via IDeviceNotify
        virtual void OnDeviceLost() override;
        virtual void OnDeviceRestored() override;

        // Sets the holographic space. This is our closest analogue to setting a new window
        // for the app.
        void SetHolographicSpace(winrt::Windows::Graphics::Holographic::HolographicSpace holographicSpace);

        // Starts the holographic frame and updates the content.
        winrt::Windows::Graphics::Holographic::HolographicFrame Update();

        // Renders holograms, including world-locked content.
        bool Render(winrt::Windows::Graphics::Holographic::HolographicFrame holographicFrame);

        // Handle saving and loading of app state owned by AppMain.
        void SaveAppState();
        void LoadAppState();

    private:
        // Used to notify the app when the positional tracking state changes.
        void OnLocatabilityChanged(
            winrt::Windows::Perception::Spatial::SpatialLocator sender,
            winrt::Windows::IInspectable args);

        // Asynchronously creates resources for new holographic cameras.
        void OnCameraAdded(
            winrt::Windows::Graphics::Holographic::HolographicSpace sender,
            winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs args);


        // Synchronously releases resources for holographic cameras that are no longer
        // attached to the system.
        void OnCameraRemoved(
            winrt::Windows::Graphics::Holographic::HolographicSpace sender,
            winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs args);

        // Cached pointer to device resources.
        std::shared_ptr<DX::DeviceResources>                                    m_deviceResources = nullptr;

        // Render loop timer.
        DX::StepTimer                                                           m_timer;

        // Represents the holographic space around the user.
        winrt::Windows::Graphics::Holographic::HolographicSpace                 m_holographicSpace = nullptr;

        // SpatialLocator that is attached to the primary camera.
        winrt::Windows::Perception::Spatial::SpatialLocator                     m_locator = nullptr;

        // A reference frame attached to the holographic camera.
        winrt::Windows::Perception::Spatial::SpatialStationaryFrameOfReference  m_referenceFrame = nullptr;

        // Event registration tokens.
        winrt::event_token                                                      m_cameraAddedToken;
        winrt::event_token                                                      m_cameraRemovedToken;
        winrt::event_token                                                      m_locatabilityChangedToken;

         //Clears event registration state. Used when changing to a new HolographicSpace
         // and when tearing down AppMain.
        void UnregisterHolographicEventHandlers();

#ifdef DRAW_SAMPLE_CONTENT
        // Renders a colorful holographic cube that's 20 centimeters wide. This sample content
        // is used to demonstrate world-locked rendering.
        std::unique_ptr<SpinningCubeRenderer>                           m_spinningCubeRenderer;

        // Listens for the Pressed spatial input event.
        std::shared_ptr<SpatialInputHandler>                            m_spatialInputHandler;
#endif

        winrt::Windows::Foundation::IAsyncAction HolographicCubeMain::AddHolographicCameraAsync(
            std::shared_ptr<DX::DeviceResources> deviceResources,
            winrt::Windows::Foundation::Deferral deferral,
            winrt::Windows::Graphics::Holographic::HolographicCamera camera
        );
    };
}

