#include "pch.h"
#include <winrt/Windows.Storage.Pickers.h>

#ifdef __clang__

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage::Pickers;

// winrt::fire_and_forget PickImage()
// {
//     FileOpenPicker picker{};
//     picker.ViewMode(PickerViewMode::Thumbnail);
//     picker.FileTypeFilter().Append(L".png"); // <--- crash occurred here
// }

TEST_CASE("clang_library")
{
    // PickImage();

    FileOpenPicker picker{};
    picker.ViewMode(PickerViewMode::Thumbnail);
    picker.FileTypeFilter().Append(L".png"); // <--- crash occurred here

    REQUIRE(true);
}

#endif // __clang__