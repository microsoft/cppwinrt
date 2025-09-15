#include "pch.h"

#include <numeric>
#include <shared_mutex>

#include "multi_threaded_common.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace concurrent_collections;

// Map correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

namespace
{
    // We use a customized container that mimics std::map and which
    // validates that C++ concurrency rules are observed.
    // C++ rules for library types are that concurrent use of const methods is allowed,
    // but no method call may be concurrent with a non-const method. (Const methods may
    // be "shared", but non-const methods are "exclusive".)
    //
    // NOTE! As the C++/WinRT implementation changes, you may need to add additional members
    // to our mock.
    //
    // The regular single_threaded_map and multi_threaded_map functions require std::map
    // or std::unordered_map, so we bypass them and go directly to the underlying classes,
    // which take any container that acts map-like.

    enum class MapKind
    {
        IMap,
        IObservableMap,
    };

    // Change the next line to "#if 0" to use a single-threaded map and confirm that every test fails.
    // The scenarios use "CHECK" instead of "REQUIRE" so that they continue running even on failure.
    // That way, you can just step through the entire test in single-threaded mode and confirm that
    // something bad happens at each scenario.
#if 1
    template<typename K, typename V, typename Container>
    using custom_threaded_map = winrt::impl::multi_threaded_map<K, V, Container>;

    template<typename K, typename V, typename Container>
    using custom_observable_map = winrt::impl::multi_threaded_observable_map<K, V, Container>;
#else
    template<typename K, typename V, typename Container>
    using custom_threaded_map = winrt::impl::input_map<K, V, Container>;

    template<typename K, typename V, typename Container>
    using custom_observable_map = winrt::impl::observable_map<K, V, Container>;
#endif

    template<MapKind kind, typename Container>
    auto make_threaded_map(Container&& values)
    {
        using K = typename Container::key_type;
        using V = typename Container::mapped_type;

        if constexpr (kind == MapKind::IMap)
        {
            return static_cast<IMap<K, V>>(winrt::make<custom_threaded_map<K, V, Container>>(std::move(values)));
        }
        else
        {
            return static_cast<IObservableMap<K, V>>(winrt::make<custom_observable_map<K, V, Container>>(std::move(values)));
        }
    }

#pragma region map wrapper
    // Add more wrapper methods as necessary.
    // (Turns out we don't use many features of std::map and std::unordered_map.)
    template<typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<const K, V>>>
    struct concurrency_checked_map : private std::map<K, V, Compare, Allocator>, concurrency_guard
    {
        using inner = typename concurrency_checked_map::map;
        using key_type = typename inner::key_type;
        using mapped_type = typename inner::mapped_type;
        using value_type = typename inner::value_type;
        using size_type = typename inner::size_type;
        using difference_type = typename inner::difference_type;
        using allocator_type = typename inner::allocator_type;
        using reference = typename inner::reference;
        using const_reference = typename inner::const_reference;
        using pointer = typename inner::pointer;
        using const_pointer = typename inner::const_pointer;
        using iterator = concurrency_checked_random_access_iterator<concurrency_checked_map, typename inner::iterator>;
        using const_iterator = concurrency_checked_random_access_iterator<concurrency_checked_map, typename inner::const_iterator, typename inner::iterator>;
        using reverse_iterator = std::reverse_iterator<iterator>;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;
        using node_type = typename inner::node_type;

        mapped_type& operator[](const key_type& /*key*/)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::at);
            return { this, inner::begin() };
        }

        iterator begin()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return { this, inner::begin() };
        }

        const_iterator begin() const
        {
            auto guard = concurrency_guard::lock_const();
            return { this, inner::begin() };
        }

        iterator end()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return { this, inner::end() };
        }

        const_iterator end() const
        {
            auto guard = concurrency_guard::lock_const();
            return { this, inner::end() };
        }

        size_type size() const
        {
            auto guard = concurrency_guard::lock_const();
            return inner::size();
        }

        void clear()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return inner::clear();
        }

        void swap(concurrency_checked_map& other)
        {
            auto guard = concurrency_guard::lock_nonconst();
            inner::swap(other);
        }

        template<typename... Args>
        std::pair<iterator, bool> emplace(Args&&... args)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::insert);
            auto [it, inserted] = inner::emplace(std::forward<Args>(args)...);
            return { { this, it }, inserted };
        }

        node_type extract(const_iterator pos)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::erase);
            return inner::extract(pos);
        }

        const_iterator find(const K& key) const
        {
            auto guard = concurrency_guard::lock_const();
            concurrency_guard::call_hook(collection_action::lookup);
            return { this, inner::find(key) };
        }
    };
#pragma endregion

    template<typename T, MapKind kind>
    void test_map_concurrency()
    {
        auto raw = concurrency_checked_map<int, T>();
        auto hook = raw.hook;

        // Convert the raw_map into the desired Windows Runtime map interface.
        auto m = make_threaded_map<kind>(std::move(raw));

        auto race = [&](collection_action action, auto&& background, auto&& foreground)
        {
            // Map initial contents are [1] = 1, [2] = 2.
            m.Clear();
            m.Insert(1, conditional_box<T>(1));
            m.Insert(2, conditional_box<T>(2));

            hook->race(action, background, foreground);
        };

        // Verify that Insert does not run concurrently with HasKey().
        race(collection_action::insert, [&]
        {
            m.Insert(42, conditional_box<T>(42));
        }, [&]
        {
            CHECK(m.HasKey(2));
        });

        // Verify that Insert does not run concurrently with Lookup().
        race(collection_action::insert, [&]
        {
            m.Insert(42, conditional_box<T>(42));
        }, [&]
        {
            CHECK(conditional_unbox<T>(m.Lookup(2)));
        });

        // Verify that Insert does not run concurrently with another Insert().
        race(collection_action::insert, [&]
        {
            m.Insert(43, conditional_box<T>(43));
        }, [&]
        {
            m.Insert(43, conditional_box<T>(43));
        });

        // Iterator invalidation tests are a little different because we perform
        // the mutation from the foreground thread after the read operation
        // has begun on the background thread.
        //
        // Verify that iterator invalidation doesn't race against
        // iterator use.
        {
            // Current vs Remove
            IKeyValuePair<int, T> kvp;
            race(collection_action::at, [&]
            {
                try
                {
                    kvp = m.First().Current();
                }
                catch (hresult_error const&)
                {
                }
            }, [&]
            {
                m.Remove(1);
            });
            CHECK((kvp && conditional_unbox<T>(kvp.Value()) == 1));
        }
        {
            // MoveNext vs Remove
            bool moved = false;
            race(collection_action::at, [&]
            {
                try
                {
                    moved = m.First().MoveNext();
                }
                catch (hresult_error const&)
                {
                }
            }, [&]
            {
                m.Remove(1);
            });
            CHECK(moved);
        }
        {
            // Current vs Insert
            IKeyValuePair<int, T> kvp;
            race(collection_action::at, [&]
            {
                try
                {
                    kvp = m.First().Current();
                }
                catch (hresult_error const&)
                {
                }
            }, [&]
            {
                m.Insert(42, conditional_box<T>(42));
            });
            CHECK((kvp && conditional_unbox<T>(kvp.Value()) == 1));
        }
        {
            // MoveNext vs Insert
            bool moved = false;
            race(collection_action::at, [&]
            {
                try
                {
                    moved = m.First().MoveNext();
                }
                catch (hresult_error const&)
                {
                }
            }, [&]
            {
                m.Insert(42, conditional_box<T>(42));
            });
            CHECK(moved);
        }

        {
            // Verify that concurrent iteration works via GetMany(), which is atomic.
            // (Current + MoveNext is non-atomic and can result in two threads
            // both grabbing the same Current and then moving two steps forward.)
            decltype(m.First()) it;
            IKeyValuePair<int, T> kvp1[1];
            IKeyValuePair<int, T> kvp2[1];
            race(collection_action::at, [&]
            {
                it = m.First();
                CHECK(it.GetMany(kvp1) == 1);
            }, [&]
            {
                CHECK(it.GetMany(kvp2) == 1);
            });
            CHECK(kvp1[0].Key() != kvp2[0].Key());
        }
    }

    void deadlock_test()
    {
        auto m = make_threaded_map<MapKind::IMap>(concurrency_checked_map<int, IInspectable>());
        m.Insert(0, make<deadlock_object<IMap<int, IInspectable>>>(m));
        auto task = [](auto m)-> IAsyncAction
        {
            co_await resume_background();
            m.Remove(0);
        }(m);
        auto status = task.wait_for(std::chrono::milliseconds(DEADLOCK_TIMEOUT));
        REQUIRE(status == AsyncStatus::Completed);
    }
}

TEST_CASE("multi_threaded_map")
{
    test_map_concurrency<int, MapKind::IMap>();
    test_map_concurrency<IInspectable, MapKind::IMap>();
    deadlock_test();
}

TEST_CASE("multi_threaded_observable_map")
{

    test_map_concurrency<int, MapKind::IObservableMap>();
    test_map_concurrency<IInspectable, MapKind::IObservableMap>();
}
