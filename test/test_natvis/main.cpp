#include <crtdbg.h>
#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_WINDOWS_SEH

#include "catch.hpp"
#include "winrt/base.h"

using namespace winrt;

int main(int const argc, char** argv)
{
    init_apartment();
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    return Catch::Session().run(argc, argv);
}
