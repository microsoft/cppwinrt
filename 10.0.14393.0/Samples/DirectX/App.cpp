#include "pch.h"
#include "Common\DeviceResources.h"
#include "Main.h"

using namespace winrt;
using namespace winrt::Windows::ApplicationModel;
using namespace winrt::Windows::ApplicationModel::Core;
using namespace winrt::Windows::UI::Core;
using namespace winrt::Windows::UI::Composition;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Foundation::Collections;
using namespace winrt::Windows::Graphics::Display;

WINRT_EXPORT namespace DirectX {

	struct App : implements<App, IFrameworkViewSource, IFrameworkView>
	{
		IFrameworkView CreateView()
		{
			return *this;
		}

		void Initialize(CoreApplicationView const & applicationView)
		{
			applicationView.Activated({ this, &App::OnActivated });

			CoreApplication::Suspending({ this, &App::OnSuspending });

			CoreApplication::Resuming({ this, &App::OnResuming });

			m_deviceResources = std::make_shared<DX::DeviceResources>();
		}

		void Load(hstring_ref)
		{
			if (m_main == nullptr)
			{
				m_main = std::unique_ptr<Main>(new Main(m_deviceResources));
			}
		}


		void SetWindow(CoreWindow const & window)
		{
			window.SizeChanged({ this, &App::OnWindowSizeChanged });

			window.VisibilityChanged({ this, &App::OnVisibilityChanged });

			window.Closed({ this, &App::OnWindowClosed });

			DisplayInformation currentDisplayInformation = DisplayInformation::GetForCurrentView();

			currentDisplayInformation.DpiChanged({ this, &App::OnDpiChanged });

			currentDisplayInformation.OrientationChanged({ this, &App::OnOrientationChanged });

			DisplayInformation::DisplayContentsInvalidated({ this, &App::OnDisplayContentsInvalidated });

			m_deviceResources->SetWindow(CoreWindow::GetForCurrentThread());
		}

		void Run()
		{
			while (!m_windowClosed)
			{
				if (m_windowVisible)
				{
					CoreWindow::GetForCurrentThread().Dispatcher().ProcessEvents(CoreProcessEventsOption::ProcessAllIfPresent);

					m_main->Update();

					if (m_main->Render())
					{
						m_deviceResources->Present();
					}
				}
				else
				{
					CoreWindow::GetForCurrentThread().Dispatcher().ProcessEvents(CoreProcessEventsOption::ProcessOneAndAllPending);
				}
			}
		}

		void Uninitialize()
		{
		}


	private:

		void OnActivated(IInspectable const&, IInspectable const&) {
			CoreWindow::GetForCurrentThread().Activate();
		}

		void App::OnSuspending(IInspectable const&, SuspendingEventArgs const& args)
		{
			// Save app state asynchronously after requesting a deferral. Holding a deferral
			// indicates that the application is busy performing suspending operations. Be
			// aware that a deferral may not be held indefinitely. After about five seconds,
			// the app will be forced to exit.
			SuspendingDeferral deferral = args.SuspendingOperation().GetDeferral();

			std::async(std::launch::async, [this, deferral] {
				m_deviceResources->Trim();

				// Insert your code here.

				deferral.Complete();
			});
		}

		void App::OnResuming(IInspectable const&, IInspectable const&)
		{
			// Restore any data or state that was unloaded on suspend. By default, data
			// and state are persisted when resuming from suspend. Note that this event
			// does not occur if the app was previously terminated.

			// Insert your code here.
		}

		void App::OnWindowSizeChanged(CoreWindow const& sender, IInspectable const&)
		{
			m_deviceResources->SetLogicalSize(Size(sender.Bounds().Width, sender.Bounds().Height));
			m_main->CreateWindowSizeDependentResources();
		}

		void App::OnVisibilityChanged(IInspectable const&, VisibilityChangedEventArgs const& args)
		{
			m_windowVisible = args.Visible();
		}

		void App::OnWindowClosed(IInspectable const&, IInspectable const&)
		{
			m_windowClosed = true;
		}

		// DisplayInformation event handlers.

		void App::OnDpiChanged(DisplayInformation const& sender, IInspectable const&)
		{
			// Note: The value for LogicalDpi retrieved here may not match the effective DPI of the app
			// if it is being scaled for high resolution devices. Once the DPI is set on DeviceResources,
			// you should always retrieve it using the GetDpi method.
			// See DeviceResources.cpp for more details.
			m_deviceResources->SetDpi(sender.LogicalDpi());
			m_main->CreateWindowSizeDependentResources();
		}

		void App::OnOrientationChanged(DisplayInformation const& sender, IInspectable const&)
		{
			m_deviceResources->SetCurrentOrientation(sender.CurrentOrientation());
			m_main->CreateWindowSizeDependentResources();
		}

		void App::OnDisplayContentsInvalidated(IInspectable const&, IInspectable const&)
		{
			m_deviceResources->ValidateDevice();
		}

		std::shared_ptr<DX::DeviceResources> m_deviceResources;
		std::unique_ptr<Main> m_main;
		bool m_windowClosed;
		bool m_windowVisible;
	};
}

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
	CoreApplication::Run(DirectX::App());
}