#include "pch.h"
#include <algorithm>
#include <ranges>

TEST_CASE("ranges")
{
    {
        // random-access range algorithms
        auto v = winrt::single_threaded_vector<int>({ 9, 8, 9, 6, 5, 8, 9, 3, 5, 3, 5, 3, 4, 7, 2, 1, 2, 3, 1 });

        const bool result = std::ranges::is_heap(v);

        REQUIRE((result == true));
    }
    {
        // bidirectional range views
        auto v = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;
        for (const int i : v | std::views::reverse)
        {
            result.push_back(i);
        }

        REQUIRE((result == std::vector{ 3, 2, 1 }));
    }
    {
        // input range algorithms
        // decay to IIterable is important, we want to test the non-fast iterators.
        winrt::Windows::Foundation::Collections::IIterable<int> iterable = winrt::single_threaded_vector<int>({ 2, 3, 1 });

        const int result = (std::ranges::max)(iterable);
        REQUIRE((result == 3));
    }
    {
        // input range views
        // decay to IIterable is important, we want to test the non-fast iterators.
        winrt::Windows::Foundation::Collections::IIterable<int> iterable = winrt::single_threaded_vector<int>({ 1, 2, 3 });

        std::vector<int> result;
        for (const int i : iterable | std::views::transform([](int i) { return i * 2; }))
        {
            result.push_back(i);
        }

        REQUIRE((result == std::vector{ 2, 4, 6 }));
    }

    // Validate that rvalue WinRT collections are borrowed ranges.
    // If they weren't, the ranges algorithms would return std::ranges::dangling
    // which is a placeholder object that disallows dereferencing.
    {
        // borrowed ranges, fast_iterator
        auto result = std::ranges::max_element(winrt::single_threaded_vector<int>({ 1, 2, 4, 3, 6, 5 }));
        REQUIRE((*result == 6));
    }
    {
        // borrowed ranges, IIterator
        auto result = std::ranges::find_if(winrt::single_threaded_map<int, int>(std::map<int, int>{ { 1, 2 }, { 2, 3 }, { 3, 4 } }),
            [](auto const& kvp) { return kvp.Key() == 2 && kvp.Value() == 3; });

        auto kvp = *result;

        REQUIRE((kvp.Key() == 2 && kvp.Value() == 3));
    }
}
