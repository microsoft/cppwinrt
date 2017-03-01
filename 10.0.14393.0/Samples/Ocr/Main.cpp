#include "pch.h"

using namespace winrt;
using namespace std::chrono;

using namespace Windows::Foundation;
using namespace Windows::Storage;
using namespace Windows::Storage::Streams;
using namespace Windows::Graphics::Imaging;
using namespace Windows::Media::Ocr;

hstring MessagePath()
{
    wchar_t buffer[1024]{};
    GetCurrentDirectory(_countof(buffer), buffer);
    check_hresult(PathCchAppendEx(buffer, _countof(buffer), L"message.png", PATHCCH_ALLOW_LONG_PATHS));
    return buffer;
}

IAsyncOperation<hstring> AsyncSample()
{
    StorageFile file = co_await StorageFile::GetFileFromPathAsync(MessagePath());
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
