#include <crtdbg.h>
#include <cstdlib>

#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_WINDOWS_SEH

#include "catch.hpp"

import winrt;

using namespace winrt;
using namespace winrt::Windows::Foundation;

int main(int const argc, char** argv)
{
    init_apartment();
    std::set_terminate([] { reportFatal("Abnormal termination"); std::abort(); });
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    return Catch::Session().run(argc, argv);
}

CATCH_TRANSLATE_EXCEPTION(hresult_error const& e)
{
    return to_string(e.message());
}

TEST_CASE("module_hstring")
{
    hstring str = L"Hello, C++/WinRT Modules!";
    REQUIRE(str == L"Hello, C++/WinRT Modules!");
    REQUIRE(str.size() == 25);

    std::wstring_view view = str;
    REQUIRE(view.length() == 25);
}

TEST_CASE("module_uri")
{
    Uri uri(L"https://example.com/path?query=1");
    REQUIRE(uri.Domain() == L"example.com");
    REQUIRE(uri.Path() == L"/path");
    REQUIRE(uri.SchemeName() == L"https");
}

TEST_CASE("module_collections")
{
    Collections::PropertySet props;
    props.Insert(L"key", box_value(L"value"));
    REQUIRE(unbox_value<hstring>(props.Lookup(L"key")) == L"value");
    REQUIRE(props.Size() == 1);
}
