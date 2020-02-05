#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "winrt/base.h"

// Validates that cppwinrt actually calculates the precise vtable size correctly.
#pragma detect_mismatch("WINRT_FAST_ABI_SIZE", "33")

using namespace winrt;

int main(int const argc, char** argv)
{
    init_apartment();
    return Catch::Session().run(argc, argv);
}

CATCH_TRANSLATE_EXCEPTION(hresult_error const& e)
{
    return to_string(e.message());
}
