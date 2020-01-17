#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("guid_key")
{
    auto uri = guid_of<Uri>();
    auto deferral = guid_of<Deferral>();

    std::map<guid, std::string> ordered;
    ordered[uri] = "Uri";
    ordered[deferral] = "Deferral";
    REQUIRE(ordered[uri] == "Uri");
    REQUIRE(ordered[deferral] == "Deferral");

    std::unordered_map<guid, std::string> unordered;
    unordered[uri] = "Uri";
    unordered[deferral] = "Deferral";
    REQUIRE(unordered[uri] == "Uri");
    REQUIRE(unordered[deferral] == "Deferral");
}
