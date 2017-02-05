#include "pch.h"
#include "App.h"

namespace HolographicCube
{
    using namespace winrt;

    using namespace winrt::Windows;
    using namespace winrt::Windows::ApplicationModel::Core;
    using namespace winrt::Windows::Foundation::Numerics;
    using namespace winrt::Windows::UI;
    using namespace winrt::Windows::UI::Core;
    using namespace winrt::Windows::ApplicationModel::Activation;
    using namespace winrt::Windows::ApplicationModel;
    using namespace winrt::Windows::Graphics::Holographic;

    using namespace DX;

    void App::OnViewActivated(CoreApplicationView sender, IActivatedEventArgs args)
    {
        sender.CoreWindow().Activate();
    }

    void App::OnSuspending(IInspectable sender, ISuspendingEventArgs args)
    {
        ISuspendingDeferral suspendingDeferral = args.SuspendingOperation().GetDeferral();
    }

    void App::OnResuming(IInspectable sender, IInspectable args)
    {
        if (m_main != nullptr)
        {
            m_main->LoadAppState();
        }
    }

    void App::OnVisibilityChanged(CoreWindow sender,VisibilityChangedEventArgs args)
    {
        m_windowVisible = args.Visible();
    }

    void App::OnWindowClosed(CoreWindow sender, CoreWindowEventArgs args)
    {
        m_windowClosed = true;
    }

    void App::OnKeyPressed(CoreWindow sender, KeyEventArgs args)
    {
        //
        // TODO: Bluetooth keyboards are supported by HoloLens. You can use this method for
        //       keyboard input if you want to support it as an optional input method for
        //       your holographic app.
        //
    }

}