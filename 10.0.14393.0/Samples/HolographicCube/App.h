#include "pch.h"
#include "Common/DeviceResources.h"
#include "HolographicCubeMain.h"

namespace HolographicCube
{
    class App : public winrt::implements<App, winrt::Windows::ApplicationModel::Core::IFrameworkView>
    {
    public:
        // Template Methods: Begin
        // implemented inline
        void Initialize(winrt::Windows::ApplicationModel::Core::CoreApplicationView const & appView)
        {
            appView.Activated({ this, &App::OnViewActivated });
            winrt::Windows::ApplicationModel::Core::CoreApplication::Suspending({ this, &App::OnSuspending });
            winrt::Windows::ApplicationModel::Core::CoreApplication::Resuming({ this, &App::OnResuming });

            m_deviceResources = std::make_shared<DX::DeviceResources>();
            m_main = std::make_unique<HolographicCubeMain>(m_deviceResources);
        }

        void Load(winrt::hstring_ref)
        {
        }

        void Uninitialize()
        {
        }

        void Run()
        {
            while (!m_windowClosed)
            {
                if (m_windowVisible && (m_holographicSpace != nullptr))
                {
                    winrt::Windows::UI::Core::CoreWindow::GetForCurrentThread().Dispatcher().ProcessEvents(winrt::Windows::UI::Core::CoreProcessEventsOption::ProcessAllIfPresent);

                    winrt::Windows::Graphics::Holographic::HolographicFrame holographicFrame = m_main->Update();

                    if (m_main->Render(holographicFrame))
                    {
                        // The holographic frame has an API that presents the swap chain for each
                        // holographic camera.
                        m_deviceResources->Present(holographicFrame);
                    }
                }
                else
                {
                    winrt::Windows::UI::Core::CoreWindow::GetForCurrentThread().Dispatcher().ProcessEvents(winrt::Windows::UI::Core::CoreProcessEventsOption::ProcessOneAndAllPending);
                }
            }
        }

        void SetWindow(winrt::Windows::UI::Core::CoreWindow const & window)
        {
            window.KeyDown({ this, &App::OnKeyPressed });
            window.Closed({ this, &App::OnWindowClosed });
            window.VisibilityChanged({ this, &App::OnVisibilityChanged });

            // Create a holographic space for the core window for the current view.
            // Presenting holographic frames that are created by this holographic space will put
            // the app into exclusive mode.
            m_holographicSpace = winrt::Windows::Graphics::Holographic::HolographicSpace::CreateForCoreWindow(window);

            // The DeviceResources class uses the preferred DXGI adapter ID from the holographic
            // space (when available) to create a Direct3D device. The HolographicSpace
            // uses this ID3D11Device to create and manage device-based resources such as
            // swap chains.
            m_deviceResources->SetHolographicSpace(m_holographicSpace);

            // The main class uses the holographic space for updates and rendering.
            m_main->SetHolographicSpace(m_holographicSpace);
        }
        // Template Methods: End


        // Application lifecycle event handlers
        void OnViewActivated(winrt::Windows::ApplicationModel::Core::CoreApplicationView sender, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs args);
        void OnSuspending(IInspectable sender, winrt::Windows::ApplicationModel::ISuspendingEventArgs args);
        void OnResuming(IInspectable sender, IInspectable args);

        // Window Event Handlers
        void OnVisibilityChanged(winrt::Windows::UI::Core::CoreWindow sender, winrt::Windows::UI::Core::VisibilityChangedEventArgs args);
        void OnWindowClosed(winrt::Windows::UI::Core::CoreWindow sender, winrt::Windows::UI::Core::CoreWindowEventArgs args);

        // CoreWindow input event handlers
        void OnKeyPressed(winrt::Windows::UI::Core::CoreWindow sender, winrt::Windows::UI::Core::KeyEventArgs args);

    private:
        std::shared_ptr<DX::DeviceResources>                m_deviceResources;
        std::unique_ptr<HolographicCubeMain>                       m_main;
        bool                                                m_windowClosed = false;
        bool                                                m_windowVisible = true;

        // The holographic space the app will use for rendering.
        winrt::Windows::Graphics::Holographic::HolographicSpace   m_holographicSpace = nullptr;
    };
}