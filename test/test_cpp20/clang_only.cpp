#include "pch.h"
#include <winrt/Windows.Storage.Pickers.h>

#ifdef __clang__

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage::Pickers;

TEST_CASE("clang_lto_visibility")
{
    // A previous bug report (https://github.com/microsoft/cppwinrt/pull/1482) represented a problem when some linker
    // options (-O3 -flto -fwhole-program-vtables) were used with cppwinrt generated code.  The lack of public annotation
    // caused methods to be removed from the binary, leading to a crash.  This test case aims to be a regression test for
    // that problem.
    FileOpenPicker picker{};
    picker.ViewMode(PickerViewMode::Thumbnail);
    picker.FileTypeFilter().Append(L".png"); // This line would trigger the crash.

    REQUIRE(true);
}

#endif // __clang__