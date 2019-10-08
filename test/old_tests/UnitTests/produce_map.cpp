#include "pch.h"
#include "catch.hpp"
#include <array>

//
// These tests cover the production of the various map-related interfaces.
// Tests ensure that the ABI surface lines up on the consumer and producer sides and this is mainly done simply by calling
// the various inteface methods.
//

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    template <typename K, typename V>
    struct key_value_pair : implements<key_value_pair<K, V>, IKeyValuePair<K, V>>
    {
        key_value_pair(K key, V value) :
            m_key(std::move(key)),
            m_value(std::move(value))
        {
        }

        K Key() const
        {
            return m_key;
        }

        V Value() const
        {
            return m_value;
        }

    private:

        K m_key;
        V m_value;
    };
}

// This producer tests that IMap may be specialized with a value type key and hstring value.

TEST_CASE("produce_IMap_int32_t_hstring")
{
    IMap<int32_t, hstring> m = single_threaded_observable_map<int32_t, hstring>();

    IObservableMap<int32_t, hstring> om = m.as<IObservableMap<int32_t, hstring>>();
    int handlerCount = 0; // Tracks the number of times the handler is called.

    event_token token = om.MapChanged([&](IObservableMap<int32_t, hstring> const & sender, IMapChangedEventArgs<int32_t> const & args)
    {
        ++handlerCount;
        REQUIRE(sender == om);
        REQUIRE(args.CollectionChange() == CollectionChange::ItemInserted);
        REQUIRE(args.Key() == 1);
    });

    REQUIRE(handlerCount == 0);
    REQUIRE(!m.Insert(1, L"one"));
    REQUIRE(handlerCount == 1);

    om.MapChanged(token); // Unregister and thus handlerCount should not increase after this.

    REQUIRE(handlerCount == 1);
    REQUIRE(m.Insert(1, L"one"));
    REQUIRE(handlerCount == 1);

    REQUIRE(handlerCount == 1);
    REQUIRE(!m.Insert(2, L"two"));
    REQUIRE(handlerCount == 1);

    REQUIRE(m.Insert(2, L"two"));

    REQUIRE(m.Lookup(1) == L"one");
    REQUIRE(m.Lookup(2) == L"two");
    REQUIRE_THROWS_AS(m.Lookup(3), hresult_out_of_bounds);

    REQUIRE(m.TryLookup(1).value() == L"one");
    REQUIRE(m.TryLookup(2).value() == L"two");
    REQUIRE(!m.TryLookup(3));

    REQUIRE(m.Size() == 2);

    REQUIRE(m.HasKey(1));
    REQUIRE(!m.HasKey(3));

    IMapView<int32_t, hstring> view = m.GetView();
    const bool same = view.as<IMap<int32_t, hstring>>() == m;
    REQUIRE(same);

    REQUIRE(m.Size() == 2);
    m.Remove(1); // existing
    REQUIRE(m.Size() == 1);
    m.Remove(3); // not existing
    REQUIRE(m.Size() == 1);

    m.Clear();
    REQUIRE(m.Size() == 0);

    IMapView<int32_t, hstring> first;
    IMapView<int32_t, hstring> second;
    view.Split(first, second);
    REQUIRE(first == nullptr);
    REQUIRE(second == nullptr);
}

// This test covers the IMap's specialization of IIterable

TEST_CASE("produce_IMap_IIterable_int32_t_hstring")
{
    IMap<int32_t, hstring> m = single_threaded_map<int32_t, hstring>();
    m.Insert(1, L"one");
    m.Insert(2, L"two");
    m.Insert(3, L"three");

    IIterable<IKeyValuePair<int32_t, hstring>> iterable = m;

    // Both should produce identical iterators but the iterators are unique objects.
    REQUIRE(iterable.First());
    REQUIRE(m.First());
    REQUIRE(iterable.First() != m.First());

    IIterator<IKeyValuePair<int32_t, hstring>> i = m.First();
    REQUIRE((i.Current() == make<key_value_pair<int32_t, hstring>>(1, L"one")));
    REQUIRE(i.HasCurrent());
    REQUIRE(i.MoveNext());
    REQUIRE((i.Current() == make<key_value_pair<int32_t, hstring>>(2, L"two")));
    REQUIRE(i.HasCurrent());
    REQUIRE(i.MoveNext());
    REQUIRE((i.Current() == make<key_value_pair<int32_t, hstring>>(3, L"three")));
    REQUIRE(i.HasCurrent());
    REQUIRE(!i.MoveNext());

    std::array<IKeyValuePair<int32_t, hstring>, 4> many{};
    REQUIRE(0 == i.GetMany(many));

    // Reset iterator
    i = m.First();
    REQUIRE(3 == i.GetMany(many));
    REQUIRE((many[0] == make<key_value_pair<int32_t, hstring>>(1, L"one")));
    REQUIRE((many[1] == make<key_value_pair<int32_t, hstring>>(2, L"two")));
    REQUIRE((many[2] == make<key_value_pair<int32_t, hstring>>(3, L"three")));
    REQUIRE((!many[3]));
}

// This producer tests that IMap may be specialized with an hstring key and int32_t value.

TEST_CASE("produce_IMap_hstring_int32_t")
{
    IMap<hstring, int32_t> m = single_threaded_map<hstring, int32_t>();

    REQUIRE(!m.Insert(L"one", 1));
    REQUIRE(m.Insert(L"one", 1));

    REQUIRE(!m.Insert(L"two", 2));
    REQUIRE(m.Insert(L"two", 2));

    REQUIRE(m.Lookup(L"one") == 1);
    REQUIRE(m.Lookup(L"two") == 2);
    REQUIRE_THROWS_AS(m.Lookup(L"three"), hresult_out_of_bounds);

    REQUIRE(m.TryLookup(L"one").value() == 1);
    REQUIRE(m.TryLookup(L"two").value() == 2);
    REQUIRE(!m.TryLookup(L"three"));

    REQUIRE(m.Size() == 2);

    REQUIRE(m.HasKey(L"one"));
    REQUIRE(!m.HasKey(L"three"));

    IMapView<hstring, int32_t> view = m.GetView();
    const bool same = view.as<IMap<hstring, int32_t>>() == m;
    REQUIRE(same);

    REQUIRE(m.Size() == 2);
    m.Remove(L"one"); // existing
    REQUIRE(m.Size() == 1);
    m.Remove(L"three"); // not existing
    REQUIRE(m.Size() == 1);

    m.Clear();
    REQUIRE(m.Size() == 0);

    IMapView<hstring, int32_t> first;
    IMapView<hstring, int32_t> second;
    view.Split(first, second);
    REQUIRE(first == nullptr);
    REQUIRE(second == nullptr);
}

// This test covers the IMap's specialization of IIterable

TEST_CASE("produce_IMap_IIterable_hstring_int32_t")
{
    IMap<hstring, int32_t> m = single_threaded_map<hstring, int32_t>();
    m.Insert(L"one", 1);
    m.Insert(L"two", 2);
    m.Insert(L"three", 3);

    IIterable<IKeyValuePair<hstring, int32_t>> iterable = m;

    // Both should produce identical iterators but the iterators are unique objects.
    REQUIRE(iterable.First());
    REQUIRE(m.First());
    REQUIRE(iterable.First() != m.First());

    IIterator<IKeyValuePair<hstring, int32_t>> i = m.First();
    REQUIRE((i.Current() == make<key_value_pair<hstring, int32_t>>(L"one", 1)));
    REQUIRE(i.HasCurrent());
    REQUIRE(i.MoveNext());
    REQUIRE((i.Current() == make<key_value_pair<hstring, int32_t>>(L"three", 3)));
    REQUIRE(i.HasCurrent());
    REQUIRE(i.MoveNext());
    REQUIRE((i.Current() == make<key_value_pair<hstring, int32_t>>(L"two", 2)));
    REQUIRE(i.HasCurrent());
    REQUIRE(!i.MoveNext());

    std::array<IKeyValuePair<hstring, int32_t>, 4> many{};
    REQUIRE(0 == i.GetMany(many));

    // Reset iterator
    i = m.First();
    REQUIRE(3 == i.GetMany(many));
    REQUIRE((many[0] == make<key_value_pair<hstring, int32_t>>(L"one", 1)));
    REQUIRE((many[1] == make<key_value_pair<hstring, int32_t>>(L"three", 3)));
    REQUIRE((many[2] == make<key_value_pair<hstring, int32_t>>(L"two", 2)));
    REQUIRE((!many[3]));
}
