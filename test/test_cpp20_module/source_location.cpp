#include "pch.h"

import std;
import winrt.Windows.Foundation;

TEST_CASE("module_source_location")
{
    // Verify that slim_source_location works across the module boundary
    auto loc = winrt::impl::slim_source_location::current();
    REQUIRE(loc.line() > 0);
    std::string_view file(loc.file_name());
    REQUIRE(file.find("source_location.cpp") != std::string_view::npos);
}
