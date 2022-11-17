#include <crtdbg.h>
#define CATCH_CONFIG_RUNNER

// Force reportFatal to be available on mingw-w64
#define CATCH_CONFIG_WINDOWS_SEH

#include "catch.hpp"
#include "winrt/base.h"

using namespace winrt;

int main(int const argc, char** argv)
{
    init_apartment();
    std::set_terminate([] { reportFatal("Abnormal termination"); ExitProcess(1); });
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    SetThreadUILanguage(MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US));
    return Catch::Session().run(argc, argv);
}

CATCH_TRANSLATE_EXCEPTION(hresult_error const& e)
{
    return to_string(e.message());
}
