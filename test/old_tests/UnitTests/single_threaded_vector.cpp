#include "pch.h"
#include "catch.hpp"
#include <deque>

using namespace winrt;
using namespace Windows::Foundation::Collections;

namespace
{
    void compare(IVector<int> const & left, std::vector<int> && right)
    {
        std::vector<int> copy(begin(left), end(left));
        REQUIRE(copy == right);
    }

    template <typename Change>
    void test_invalidation(IVector<int> const & values, Change change)
    {
        std::array<int, 3> array;

        values.ReplaceAll({ 1,2,3 });
        IIterator<int> first = values.First();
        REQUIRE(first.HasCurrent());
        REQUIRE(first.Current() == 1);
        REQUIRE(first.MoveNext());
        REQUIRE(first.GetMany(array) == 2);

        change(); // <-- invalidate

        REQUIRE_THROWS_AS(first.HasCurrent(), hresult_changed_state);
        REQUIRE_THROWS_AS(first.Current(), hresult_changed_state);
        REQUIRE_THROWS_AS(first.MoveNext(), hresult_changed_state);
        REQUIRE_THROWS_AS(first.GetMany(array), hresult_changed_state);
    }

    void test_vector(IVector<int> const & values)
    {
        compare(values, {});

        REQUIRE_THROWS_AS(values.SetAt(0, 1), hresult_out_of_bounds);
        values.InsertAt(0, 1);
        compare(values, { 1 });
        values.SetAt(0, 2);
        compare(values, { 2 });

        values.Clear();
        compare(values, {});

        REQUIRE_THROWS_AS(values.InsertAt(1, 1), hresult_out_of_bounds);
        compare(values, {});
        values.InsertAt(0, 1);
        compare(values, {1});
        values.InsertAt(0, 2);
        compare(values, { 2, 1 });
        values.InsertAt(2, 0);
        compare(values, { 2, 1, 0 });

        REQUIRE_THROWS_AS(values.RemoveAt(3), hresult_out_of_bounds);
        values.RemoveAt(1);
        compare(values, { 2, 0 });
        values.RemoveAt(0);
        compare(values, { 0 });
        values.RemoveAt(0);
        compare(values, {});

        values.Append(1);
        compare(values, {1});
        values.Append(2);
        compare(values, { 1, 2 });
        values.Append(3);
        compare(values, { 1, 2, 3 });

        values.RemoveAtEnd();
        compare(values, { 1, 2 });
        values.RemoveAtEnd();
        compare(values, { 1 });
        values.RemoveAtEnd();
        compare(values, {  });
        REQUIRE_THROWS_AS(values.RemoveAtEnd(), hresult_out_of_bounds);

        values.ReplaceAll({1,2,3,4});
        compare(values, {1,2,3,4});

        values.ReplaceAll({});
        compare(values,{});

        test_invalidation(values, [&] { values.Clear(); });
        test_invalidation(values, [&] { values.SetAt(0, 0); });
        test_invalidation(values, [&] { values.InsertAt(0, 0); });
        test_invalidation(values, [&] { values.RemoveAt(0); });
        test_invalidation(values, [&] { values.Append(0); });
        test_invalidation(values, [&] { values.RemoveAtEnd(); });
        test_invalidation(values, [&] { values.ReplaceAll({}); });
    }
}

TEST_CASE("single_threaded_vector - construction")
{
    IVector<int> values;

    values = single_threaded_vector<int>();
    REQUIRE(values.Size() == 0);

    values = single_threaded_vector<int>({ 1,2,3 });
    compare(values, { 1,2,3 });
}

TEST_CASE("test_single_threaded_vector")
{
    test_vector(single_threaded_vector<int>());
    test_vector(single_threaded_observable_vector<int>());
}
