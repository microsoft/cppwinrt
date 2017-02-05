#include "pch.h"
#include "App.h"

using namespace winrt;

using namespace winrt::Windows;
using namespace winrt::Windows::ApplicationModel::Core;


struct AppViewSource : implements<AppViewSource, IFrameworkViewSource>
{
    HolographicCube::App* app;
    IFrameworkView CreateView()
    {
        if (app == nullptr)
        {
            app = new HolographicCube::App();
        }
        return *app;
    }
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    CoreApplication::Run(AppViewSource());
}
