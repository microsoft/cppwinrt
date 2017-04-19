#include "pch.h"

namespace com = ::Windows::Storage::Streams;

using namespace winrt;
using namespace winrt::Windows::ApplicationModel::Activation;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Graphics::Imaging;
using namespace winrt::Windows::Storage;
using namespace winrt::Windows::Storage::Pickers;
using namespace winrt::Windows::Storage::Streams;
using namespace winrt::Windows::UI;
using namespace winrt::Windows::UI::Core;
using namespace winrt::Windows::UI::Xaml;
using namespace winrt::Windows::UI::Xaml::Controls;
using namespace winrt::Windows::UI::Xaml::Media;
using namespace winrt::Windows::UI::Xaml::Media::Imaging;

struct App : ApplicationT<App>
{
public:

    // The Click and Rendering methods be default use IInspectable from winrt::ABI. They should use the version from winrt::Windows.
    void RenderingHandler(const IInspectable&, const IInspectable& args)
    {
        // Once the image is loaded successfully, then we can dynamically update the WritableBitmap.
        if (m_imageLoaded)
        {
             auto renderingArgs = args.as<IRenderingEventArgs>();

            // Get elapsed time
            TimeSpan timeSpan = renderingArgs.RenderingTime();

            // Calculate twistAngle from -180 to 180 degrees
            double t = (timeSpan.count() % m_cycleDuration) / (double)m_cycleDuration;
            double tprime = 2 * (t < 0.5 ? t : 1 - t);
            double twistAngle = 2 * (tprime - 0.5) * 3.14159;

            for (int yDst = 0; yDst < m_height; yDst++)
            {
                for (int xDst = 0; xDst < m_width; xDst++)
                {
                    // Calculate length of point to center and angle
                    int xDelta = xDst - m_xCenter;
                    int yDelta = yDst - m_yCenter;
                    double distanceToCenter = sqrt(xDelta * xDelta +
                        yDelta * yDelta);
                    double angleClockwise = atan2(yDelta, xDelta);

                    // Calculation angle of rotation for twisting effect
                    double xEllipse = m_xCenter * cos(angleClockwise);
                    double yEllipse = m_yCenter * sin(angleClockwise);
                    double radius = sqrt(xEllipse * xEllipse +
                        yEllipse * yEllipse);
                    double fraction = max(0.0, 1 - distanceToCenter / radius);
                    double twist = fraction * twistAngle;

                    // Calculate the source pixel for each destination pixel
                    int xSrc = (int)(m_xCenter + (xDst - m_xCenter) * cos(twist)
                        - (yDst - m_yCenter) * sin(twist));
                    int ySrc = (int)(m_yCenter + (xDst - m_xCenter) * sin(twist)
                        + (yDst - m_yCenter) * cos(twist));
                    xSrc = max(0, min(m_width - 1, xSrc));
                    ySrc = max(0, min(m_height - 1, ySrc));

                    // Calculate the indices
                    int iDst = 4 * (yDst * m_width + xDst);
                    int iSrc = 4 * (ySrc * m_width + xSrc);

                    // Transfer the pixel bytes
                    m_destPixels[iDst++] = m_srcPixels[iSrc++];
                    m_destPixels[iDst++] = m_srcPixels[iSrc++];
                    m_destPixels[iDst++] = m_srcPixels[iSrc++];
                    m_destPixels[iDst] = m_srcPixels[iSrc];
                }
            }

            // Invalidate the bitmap
            m_writeableBitmap.Invalidate();
        }
    }

    std::future<void> ClickHandler(const IInspectable&, const IInspectable&)
    {
        FileOpenPicker picker;
        picker.ViewMode(PickerViewMode::Thumbnail);
        picker.SuggestedStartLocation(PickerLocationId::PicturesLibrary);

        auto fileTypeFilters = picker.FileTypeFilter();
        fileTypeFilters.Append(L".jpg");
        fileTypeFilters.Append(L".jpeg");
        fileTypeFilters.Append(L".png");

        StorageFile selectedFile = await picker.PickSingleFileAsync();
        if (!selectedFile)
        {
            return;
        }

        IRandomAccessStream imageStream = await selectedFile.OpenAsync(FileAccessMode::Read);
        BitmapDecoder decoder = await BitmapDecoder::CreateAsync(imageStream);
        BitmapFrame frame = await decoder.GetFrameAsync(0);

        m_width = frame.PixelWidth();
        m_height = frame.PixelHeight();
        m_xCenter = m_width / 2;
        m_yCenter = m_height / 2;

        PixelDataProvider provider = await frame.GetPixelDataAsync();
        m_srcPixels = provider.DetachPixelData();

        // Manipulation of the bitmap objects must be done on the UI thread
        m_uiDispatcher.RunAsync(CoreDispatcherPriority::Normal, [this]() {

            m_writeableBitmap = WriteableBitmap(m_width, m_height);
            m_image.Source(m_writeableBitmap);

            IBuffer buffer = m_writeableBitmap.PixelBuffer();
            com_ptr<com::IBufferByteAccess> byteAccess = buffer.as<com::IBufferByteAccess>();
            byteAccess->Buffer(&m_destPixels);

            m_imageLoaded = true;
        });
    }

    void OnLaunched(LaunchActivatedEventArgs const &)
    {
        CompositionTarget::Rendering({ this, &App::RenderingHandler });

        m_uiDispatcher = CoreWindow::GetForCurrentThread().Dispatcher();

        StackPanel panel;
        panel.Orientation(Orientation::Vertical);

        Button pickerButton;
        TextBlock pickerButtonText;
        pickerButtonText.Text(L"Choose image...");
        pickerButton.Content(pickerButtonText);
        pickerButton.Click({ this, &App::ClickHandler });

        m_image.Height(200.0);
        m_image.Width(200.0);

        auto panelContent = panel.Children();
        panelContent.Append(pickerButton);
        panelContent.Append(m_image);

        Window window = Window::Current();
        window.Content(panel);
        window.Activate();
    }

private:
    CoreDispatcher m_uiDispatcher{ nullptr };
    Image m_image;

    int m_width{ 0 };
    int m_height{ 0 };
    int m_xCenter{ 0 };
    int m_yCenter{ 0 };

    byte* m_destPixels{ nullptr };
    com_array<uint8_t> m_srcPixels;
    WriteableBitmap m_writeableBitmap{ nullptr };

    bool m_imageLoaded{ false };

    static const int64_t m_cycleDuration{ 30000000 };
};

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
    Application::Start([](auto &&)
    {
        make<App>();
    });
}