#include "pch.h"

namespace fs = std::experimental::filesystem;
using namespace winrt;
using namespace std::chrono;
using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;

IAsyncOperation<hstring> AsyncSample()
{
    fs::path path = fs::current_path().append(L"message.png");
    StorageFile file = co_await StorageFile::GetFileFromPathAsync(path.c_str());
    IRandomAccessStream stream = co_await file.OpenAsync(FileAccessMode::Read);

    BitmapDecoder decoder = co_await BitmapDecoder::CreateAsync(stream);
    SoftwareBitmap bitmap = co_await decoder.GetSoftwareBitmapAsync();

    OcrEngine engine = OcrEngine::TryCreateFromUserProfileLanguages();
    OcrResult result = co_await engine.RecognizeAsync(bitmap);
    return result.Text();
}

int main()
{
    init_apartment();

    try
    {
        printf("%ls\n", AsyncSample().get().c_str());
    }
    catch (hresult_error const & e)
    {
        printf("hresult_error: (0x%8X) %ls\n", e.code(), e.message().c_str());
    }
}
