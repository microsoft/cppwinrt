#include "pch.h"

using namespace winrt;

using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Globalization::DateTimeFormatting;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Media;

struct App : ApplicationT<App>
{
    void OnLaunched(LaunchActivatedEventArgs const &)
    {
        StackPanel panel;
        panel.Padding({ 50.0, 50.0 });
        m_children = panel.Children();

        CalendarDatePicker picker;
        FormatDateTime(picker, clock::now());

        picker.DateChanged([this](CalendarDatePicker const& picker, CalendarDatePickerDateChangedEventArgs const& args)
        {
            FormatDateTime(picker, args.NewDate().Value());
        });

        Window window = Window::Current();
        window.Content(panel);
        window.Activate();
    }

    void FormatDateTime(CalendarDatePicker const& picker, DateTime const& value)
    {
        m_children.Clear();
        m_children.Append(picker);

        DateTimeFormatter formatter(L"shortdate shorttime");
        AppendTextBlock(L"Windows.Globalization: " + formatter.Format(value));

        time_t utc = clock::to_time_t(value);
        tm local{};

        if (0 == localtime_s(&local, &utc))
        {
            std::array<wchar_t, 100> buffer{};
            wcsftime(buffer.data(), buffer.size(), L"std: %F %T", &local);

            AppendTextBlock(buffer.data());
        }
    }

    void AppendTextBlock(std::wstring_view const& text)
    {
        TextBlock block;

        block.FontFamily(FontFamily(L"Segoe UI Semibold"));
        block.FontSize(28.0);
        block.TextWrapping(TextWrapping::Wrap);
        block.Padding({ 0.0, 10.0 });
        block.Text(text);

        m_children.Append(block);
    }

    UIElementCollection m_children{ nullptr };
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    Application::Start([](auto &&) { make<App>(); });
}
