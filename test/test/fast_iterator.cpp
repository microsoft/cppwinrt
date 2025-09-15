#include "pch.h"

TEST_CASE("fast_iterator")
{
    {
        // Forward iteration.
        auto v = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;

        std::copy(begin(v), end(v), std::back_inserter(result));

        REQUIRE((result == std::vector{ 1, 2, 3 }));
    }
    {
        // Reverse iteration.
        auto v = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;

        std::copy(rbegin(v), rend(v), std::back_inserter(result));

        REQUIRE((result == std::vector{ 3, 2, 1 }));
    }
    {
        // Value-initialization.
        auto v = winrt::single_threaded_vector<int>({ 9, 5, 4, 1, 1, 3 });
        decltype(begin(v)) dummy;
        decltype(begin(v)) dummy2;
        // Must be able to default-construct the iterator,
        // but the only thing you can do with it is compare
        // with another one.
        REQUIRE(dummy == dummy2);
    }
    {
        // Read-only random access.
        auto v = winrt::single_threaded_vector<int>({ 9, 5, 4, 1, 1, 3 });
        REQUIRE(std::is_heap(begin(v), end(v)));

        auto vbegin = begin(v);
        auto value = *vbegin++;
        REQUIRE(value == 9);
        value = *--vbegin;
        REQUIRE(value == 9);
        REQUIRE(vbegin[2] == 4);
        REQUIRE(vbegin + 2 > vbegin);
        REQUIRE(2 + vbegin > vbegin);
        REQUIRE(2 - (vbegin + 4) > vbegin);
        REQUIRE(vbegin < vbegin + 2);
        REQUIRE(vbegin + 2 - 2 == vbegin);
        REQUIRE(static_cast<uint32_t>(end(v) - begin(v)) == v.Size());
        REQUIRE((begin(v) + 3)[-1] == 4);
    }
    {
        // ensure that importing std::begin and std::end does not break existing code
        using std::begin;
        using std::end;

        auto v = winrt::single_threaded_vector<int>({ 9, 5, 4, 1, 1, 3 });
        REQUIRE(std::is_heap(begin(v), end(v)));
    }
}
