#include "pch.h"

TEST_CASE("fast_iterator")
{
    {
        auto v = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;

        std::copy(begin(v), end(v), std::back_inserter(result));

        REQUIRE((result == std::vector{ 1, 2, 3 }));
    }
    {
        auto v = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;

        std::copy(rbegin(v), rend(v), std::back_inserter(result));

        REQUIRE((result == std::vector{ 3, 2, 1 }));
    }
}
