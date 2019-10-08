#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

TEST_CASE("single_threaded_observable_vector")
{
    {
        // Basic smoke test for strongly-typed observable vector - exhaustive tests already exist elsewhere.

        IObservableVector<int> vector = single_threaded_observable_vector<int>();
        bool changed{};

        vector.VectorChanged([&](auto && ...)
            {
                changed = vector.GetAt(0) == 123;
            });

        vector.Append(123);
        REQUIRE(changed);
    }
    {
        // Making sure we can still create IInspectable collections are aren't "special".

        IObservableVector<IInspectable> vector = single_threaded_observable_vector<IInspectable>();
        bool changed{};

        vector.VectorChanged([&](auto && ...)
            {
                changed = unbox_value<int>(vector.GetAt(0)) == 123;
            });

        vector.Append(box_value(123));
        REQUIRE(changed);
    }
    {
        // VectorChanged is raised on both interface types.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>();
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();
        bool changed_i{};
        bool changed_o{};

        vector_i.VectorChanged([&](IObservableVector<int> const& sender, IVectorChangedEventArgs const&)
            {
                changed_i = sender.GetAt(0) == 123;
                REQUIRE(sender == vector_i);
            });

        vector_o.VectorChanged([&](IObservableVector<IInspectable> const& sender, IVectorChangedEventArgs const&)
            {
                changed_o = unbox_value<int>(sender.GetAt(0)) == 123;
                REQUIRE(sender == vector_o);
            });

        vector_i.Append(123);
        REQUIRE(changed_i);
        REQUIRE(changed_o);
    }
    {
        // VectorChanged forwards underlying token.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>();
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();
        int changed_i{};
        int changed_o{};

        auto token_i = vector_i.VectorChanged([&](IObservableVector<int> const&, IVectorChangedEventArgs const&)
            {
                ++changed_i;
            });

        auto token_o = vector_o.VectorChanged([&](IObservableVector<IInspectable> const&, IVectorChangedEventArgs const&)
            {
                ++changed_o;
            });

        REQUIRE(changed_i == 0);
        REQUIRE(changed_o == 0);

        vector_i.Append(1);

        REQUIRE(changed_i == 1);
        REQUIRE(changed_o == 1);

        vector_i.VectorChanged(token_i);

        vector_i.Append(1);

        REQUIRE(changed_i == 1);
        REQUIRE(changed_o == 2);

        vector_o.VectorChanged(token_o);

        vector_i.Append(1);

        REQUIRE(changed_i == 1);
        REQUIRE(changed_o == 2);
    }
    {
        // Confirming the underlying container is shared and remains in sync.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>();
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        vector_i.Append(0);
        vector_o.Append(box_value(1));

        REQUIRE(vector_i.Size() == 2);
        REQUIRE(vector_o.Size() == 2);

        REQUIRE(vector_i.GetAt(0) == 0);
        REQUIRE(unbox_value<int>(vector_o.GetAt(0)) == 0);

        REQUIRE(vector_i.GetAt(1) == 1);
        REQUIRE(unbox_value<int>(vector_o.GetAt(1)) == 1);
    }
    {
        // Different iterator types over the same container.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        IIterator<int> iterator_i = vector_i.First();
        IIterator<IInspectable> iterator_o = vector_o.First();

        REQUIRE(iterator_i.HasCurrent());
        REQUIRE(iterator_o.HasCurrent());

        REQUIRE(iterator_i.Current() == 1);
        REQUIRE(unbox_value<int>(iterator_o.Current()) == 1);

        REQUIRE(iterator_i.MoveNext());
        REQUIRE(iterator_o.MoveNext());

        REQUIRE(iterator_i.HasCurrent());
        REQUIRE(iterator_o.HasCurrent());

        REQUIRE(iterator_i.Current() == 2);
        REQUIRE(unbox_value<int>(iterator_o.Current()) == 2);

        REQUIRE(!iterator_i.MoveNext());
        REQUIRE(!iterator_o.MoveNext());

        REQUIRE(!iterator_i.HasCurrent());
        REQUIRE(!iterator_o.HasCurrent());

        REQUIRE_THROWS_AS(iterator_i.Current(), hresult_out_of_bounds);
        REQUIRE_THROWS_AS(iterator_o.Current(), hresult_out_of_bounds);
    }
    {
        // GetMany always needs a bit of extra testing.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        IIterator<int> iterator_i = vector_i.First();
        IIterator<IInspectable> iterator_o = vector_o.First();

        std::array<int, 3> array_i{};
        REQUIRE(2 == iterator_i.GetMany(array_i));
        REQUIRE(array_i[0] == 1);
        REQUIRE(array_i[1] == 2);
        REQUIRE(array_i[2] == 0);

        std::array<IInspectable, 3> array_o{};
        REQUIRE(2 == iterator_o.GetMany(array_o));
        REQUIRE(unbox_value<int>(array_o[0]) == 1);
        REQUIRE(unbox_value<int>(array_o[1]) == 2);
        REQUIRE(array_o[2] == nullptr);

        REQUIRE(0 == iterator_i.GetMany(array_i));
        REQUIRE(0 == iterator_o.GetMany(array_o));
    }
    {
        // GetMany always needs a bit of extra testing (again).

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        IIterator<int> iterator_i = vector_i.First();
        IIterator<IInspectable> iterator_o = vector_o.First();

        std::array<int, 1> array_i{};
        REQUIRE(1 == iterator_i.GetMany(array_i));
        REQUIRE(array_i[0] == 1);

        std::array<IInspectable, 1> array_o{};
        REQUIRE(1 == iterator_o.GetMany(array_o));
        REQUIRE(unbox_value<int>(array_o[0]) == 1);
    }
    {
        // Iterator invalidation works across types.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        IIterator<int> iterator_i = vector_i.First();
        IIterator<IInspectable> iterator_o = vector_o.First();

        REQUIRE(iterator_i.HasCurrent());
        REQUIRE(iterator_o.HasCurrent());

        vector_i.Append(3);

        REQUIRE_THROWS_AS(iterator_i.HasCurrent(), hresult_changed_state);
        REQUIRE_THROWS_AS(iterator_o.HasCurrent(), hresult_changed_state);
    }
    {
        // IndexOf forwarding.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        uint32_t index{};
        REQUIRE((vector_i.IndexOf(2, index) && index == 1));
        index = 0;
        REQUIRE((vector_o.IndexOf(box_value(2), index) && index == 1));
    }
    {
        // GetView forwarding.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        REQUIRE(vector_i.GetView().GetAt(1) == 2);
        REQUIRE(unbox_value<int>(vector_o.GetView().GetAt(1)) == 2);
    }
    {
        // SetAt forwarding.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        REQUIRE(vector_i.GetAt(0) == 1);
        REQUIRE(vector_i.GetAt(1) == 2);

        vector_i.SetAt(0, 10);
        vector_o.SetAt(1, box_value(20));

        REQUIRE(vector_i.GetAt(0) == 10);
        REQUIRE(vector_i.GetAt(1) == 20);
    }
    {
        // InsertAt forwarding.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,4 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        REQUIRE(vector_i.Size() == 2);

        vector_i.InsertAt(1, 2);
        vector_o.InsertAt(2, box_value(3));

        REQUIRE(vector_i.Size() == 4);
        REQUIRE(vector_i.GetAt(0) == 1);
        REQUIRE(vector_i.GetAt(1) == 2);
        REQUIRE(vector_i.GetAt(2) == 3);
        REQUIRE(vector_i.GetAt(3) == 4);
    }
    {
        // Append forwarding.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>();
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        REQUIRE(vector_i.Size() == 0);

        vector_i.Append(1);
        vector_o.Append(box_value(2));

        REQUIRE(vector_i.Size() == 2);
        REQUIRE(vector_i.GetAt(0) == 1);
        REQUIRE(vector_i.GetAt(1) == 2);
    }
    {
        // GetMany boxing.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2,3,4,5 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        {
            std::array<int, 3> array_i{};
            REQUIRE(0 == vector_i.GetMany(5, array_i));
        }
        {
            std::array<int, 3> array_i{};
            REQUIRE(3 == vector_i.GetMany(0, array_i));
            REQUIRE(array_i[0] == 1);
            REQUIRE(array_i[1] == 2);
            REQUIRE(array_i[2] == 3);
        }
        {
            std::array<int, 3> array_i{};
            REQUIRE(2 == vector_i.GetMany(3, array_i));
            REQUIRE(array_i[0] == 4);
            REQUIRE(array_i[1] == 5);
            REQUIRE(array_i[2] == 0);
        }

        {
            std::array<IInspectable, 3> array_o{};
            REQUIRE(0 == vector_o.GetMany(5, array_o));
        }
        {
            std::array<IInspectable, 3> array_o{};
            REQUIRE(3 == vector_o.GetMany(0, array_o));
            REQUIRE(unbox_value<int>(array_o[0]) == 1);
            REQUIRE(unbox_value<int>(array_o[1]) == 2);
            REQUIRE(unbox_value<int>(array_o[2]) == 3);
        }
        {
            std::array<IInspectable, 3> array_o{};
            REQUIRE(2 == vector_o.GetMany(3, array_o));
            REQUIRE(unbox_value<int>(array_o[0]) == 4);
            REQUIRE(unbox_value<int>(array_o[1]) == 5);
            REQUIRE(array_o[2] == nullptr);
        }
    }
    {
        // ReplaceAll boxing.

        IObservableVector<int> vector_i = single_threaded_observable_vector<int>({ 1,2,3,4,5 });
        IObservableVector<IInspectable> vector_o = vector_i.as<IObservableVector<IInspectable>>();

        {
            IIterator<int> iterator_i = vector_i.First();
            IIterator<IInspectable> iterator_o = vector_o.First();

            REQUIRE(iterator_i.HasCurrent());
            REQUIRE(iterator_o.HasCurrent());

            bool changed_i{};
            bool changed_o{};

            vector_i.VectorChanged([&](IObservableVector<int> const& sender, IVectorChangedEventArgs const&)
                {
                    changed_i = sender.GetAt(0) == 123;
                    REQUIRE(sender == vector_i);
                });

            vector_o.VectorChanged([&](IObservableVector<IInspectable> const& sender, IVectorChangedEventArgs const&)
                {
                    changed_o = unbox_value<int>(sender.GetAt(0)) == 123;
                    REQUIRE(sender == vector_o);
                });

            vector_i.ReplaceAll({ 123 });

            REQUIRE(changed_i);
            REQUIRE(changed_o);

            REQUIRE_THROWS_AS(iterator_i.HasCurrent(), hresult_changed_state);
            REQUIRE_THROWS_AS(iterator_o.HasCurrent(), hresult_changed_state);

            REQUIRE(vector_i.Size() == 1);
            REQUIRE(vector_i.GetAt(0) == 123);
        }

        {
            IIterator<int> iterator_i = vector_i.First();
            IIterator<IInspectable> iterator_o = vector_o.First();

            REQUIRE(iterator_i.HasCurrent());
            REQUIRE(iterator_o.HasCurrent());

            bool changed_i{};
            bool changed_o{};

            vector_i.VectorChanged([&](IObservableVector<int> const& sender, IVectorChangedEventArgs const&)
                {
                    changed_i = sender.GetAt(0) == 123;
                    REQUIRE(sender == vector_i);
                });

            vector_o.VectorChanged([&](IObservableVector<IInspectable> const& sender, IVectorChangedEventArgs const&)
                {
                    changed_o = unbox_value<int>(sender.GetAt(0)) == 123;
                    REQUIRE(sender == vector_o);
                });

            vector_o.ReplaceAll({ box_value(123) });

            REQUIRE(changed_i);
            REQUIRE(changed_o);

            REQUIRE_THROWS_AS(iterator_i.HasCurrent(), hresult_changed_state);
            REQUIRE_THROWS_AS(iterator_o.HasCurrent(), hresult_changed_state);

            REQUIRE(vector_i.Size() == 1);
            REQUIRE(vector_i.GetAt(0) == 123);
        }
    }
}
