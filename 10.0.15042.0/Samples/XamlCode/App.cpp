#include "pch.h"

using namespace winrt;

using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::UI;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;
using namespace Windows::Storage::Pickers;

struct App : ApplicationT<App>
{
    void OnLaunched(LaunchActivatedEventArgs const &)
    {
        TextBlock block;

        block.FontFamily(FontFamily(L"Segoe UI Semibold"));
        block.FontSize(72.0);
        block.Foreground(SolidColorBrush(Colors::Orange()));
        block.VerticalAlignment(VerticalAlignment::Center);
        block.TextAlignment(TextAlignment::Center);
        block.TextWrapping(TextWrapping::Wrap);

        Window window = Window::Current();
        window.Content(block);
        window.Activate();

        Async(block);
    }

    fire_and_forget Async(TextBlock block)
    {
        FileOpenPicker picker;
        picker.FileTypeFilter().Append(L".png");
        picker.SuggestedStartLocation(PickerLocationId::PicturesLibrary);
        auto file = co_await picker.PickSingleFileAsync();

        if (file == nullptr)
        {
            return;
        }

        thread_context ui_thread;
        co_await resume_background();

        auto stream = co_await file.OpenAsync(FileAccessMode::Read);
        auto decoder = co_await BitmapDecoder::CreateAsync(stream);
        auto bitmap = co_await decoder.GetSoftwareBitmapAsync();
        auto engine = OcrEngine::TryCreateFromUserProfileLanguages();
        auto result = co_await engine.RecognizeAsync(bitmap);

        co_await ui_thread;
        block.Text(result.Text());
    }
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    Application::Start([](auto &&) { make<App>(); });
}
