#include "pch.h"

using namespace winrt;

using namespace Windows::ApplicationModel::Core;
using namespace Windows::Foundation;
using namespace Windows::UI::Core;
using namespace Windows::UI::Composition;
using namespace Windows::Media::Core;
using namespace Windows::Media::Playback;
using namespace Windows::Storage;
using namespace Windows::Storage::Pickers;

struct App : implements<App, IFrameworkViewSource, IFrameworkView>
{
    IFrameworkView CreateView()
    {
        return *this;
    }

    void Initialize(CoreApplicationView const &)
    {
    }

    void Load(hstring_view)
    {
    }

    void Uninitialize()
    {
    }

    void Run()
    {
        CoreWindow window = CoreWindow::GetForCurrentThread();
        window.Activate();

        CoreDispatcher dispatcher = window.Dispatcher();
        dispatcher.ProcessEvents(CoreProcessEventsOption::ProcessUntilQuit);
    }

    void SetWindow(CoreWindow const & window)
    {
        m_activated = window.Activated(auto_revoke, { this, &App::OnActivated });
    }

    fire_and_forget OnActivated(CoreWindow window, WindowActivatedEventArgs)
    {
        m_activated.revoke();

        Compositor compositor;
        SpriteVisual visual = compositor.CreateSpriteVisual();
        Rect bounds = window.Bounds();
        visual.Size({ bounds.Width, bounds.Height });
        m_target = compositor.CreateTargetForCurrentView();
        m_target.Root(visual);

        FileOpenPicker picker;
        picker.SuggestedStartLocation(PickerLocationId::VideosLibrary);
        picker.FileTypeFilter().Append(L".mp4");
        StorageFile file = await picker.PickSingleFileAsync();

        if (!file)
        {
            CoreApplication::Exit();
            return;
        }

        MediaSource source = MediaSource::CreateFromStorageFile(file);
        MediaPlayer player;
        player.Source(MediaPlaybackItem(source));
        MediaPlayerSurface surface = player.GetSurface(compositor);
        visual.Brush(compositor.CreateSurfaceBrush(surface.CompositionSurface()));
        player.Play();

        window.PointerPressed([=](auto && ...)
        {
            static bool playing = true;
            playing = !playing;

            playing ? player.Play() : player.Pause();
        });

        window.SizeChanged([=](auto &&, WindowSizeChangedEventArgs const & args)
        {
            visual.Size(args.Size());
        });
    }

    CoreWindow::Activated_revoker m_activated;
    CompositionTarget m_target{ nullptr };
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    CoreApplication::Run(App());
}
