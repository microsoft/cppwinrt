#include "pch.h"

#include "multi_threaded_common.h"

// FIXME: Fail to compile with Clang due to "error : no type named 'type' in 'std::enable_if<false>'"
#if !defined(__clang__)

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace concurrent_collections;

// Vector correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality.

namespace
{
    // We use a customized container that mimics std::vector and which
    // validates that C++ concurrency rules are observed.
    // C++ rules for library types are that concurrent use of const methods is allowed,
    // but no method call may be concurrent with a non-const method. (Const methods may
    // be "shared", but non-const methods are "exclusive".)
    //
    // NOTE! As the C++/WinRT implementation changes, you may need to add additional members
    // to our fake vector and vector iterator classes.
    //
    // The regular single_threaded_vector and multi_threaded_vector functions requires std::vector,
    // so we bypass that method and go directly to input_vector, which takes an arbitrary container
    // that acts vector-like.

    enum class VectorKind
    {
        IVector,
        IObservableVector,
        IObservableVectorAsInspectable,
    };

    // Change the next line to "#if 0" to use a single-threaded vector and confirm that every test fails.
    // The scenarios use "CHECK" instead of "REQUIRE" so that they continue running even on failure.
    // That way, you can just step through the entire test and confirm that something bad happens
    // at each scenario.
#if 1
    template<typename T, typename Container>
    using custom_threaded_vector = winrt::impl::multi_threaded_vector<T, Container>;

    template<typename Container>
    using custom_inspectable_observable_vector = winrt::impl::multi_threaded_inspectable_observable_vector<Container>;

    template<typename T, typename Container>
    using custom_convertible_observable_vector = winrt::impl::multi_threaded_convertible_observable_vector<T, Container>;

#else
    template<typename T, typename Container>
    using custom_threaded_vector = winrt::impl::input_vector<T, Container>;

    template<typename Container>
    using custom_inspectable_observable_vector = winrt::impl::inspectable_observable_vector<Container>;

    template<typename T, typename Container>
    using custom_convertible_observable_vector = winrt::impl::convertible_observable_vector<T, Container>;
#endif

    template<VectorKind kind, typename Container>
    auto make_threaded_vector(Container&& values)
    {
        using T = typename Container::value_type;
        if constexpr (kind == VectorKind::IVector)
        {
            return static_cast<IVector<T>>(winrt::make<custom_threaded_vector<T, Container>>(std::move(values)));
        }
        else
        {
            IObservableVector<T> vector;
            if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>)
            {
                vector = make<custom_inspectable_observable_vector<Container>>(std::move(values));
            }
            else
            {
                vector = make<custom_convertible_observable_vector<T, Container>>(std::move(values));
            }
            if constexpr (kind == VectorKind::IObservableVector)
            {
                return vector;
            }
            else
            {
                return vector.as<IObservableVector<IInspectable>>();
            }
        }
    }

#pragma region vector wrapper
    // Add more wrapper methods as necessary.
    template<typename T, typename Allocator = std::allocator<T>>
    struct concurrency_checked_vector : private std::vector<T, Allocator>, concurrency_guard
    {
        using inner = typename concurrency_checked_vector::vector;
        using value_type = typename inner::value_type;
        using allocator_type = typename inner::allocator_type;
        using size_type = typename inner::size_type;
        using difference_type = typename inner::difference_type;
        using reference = typename inner::reference;
        using const_reference = typename inner::const_reference;
        using iterator = concurrency_checked_random_access_iterator<concurrency_checked_vector, typename inner::iterator>;
        using const_iterator = concurrency_checked_random_access_iterator<concurrency_checked_vector, typename inner::const_iterator, typename inner::iterator>;
        using reverse_iterator = std::reverse_iterator<iterator>;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        static_assert(!std::is_same_v<T, bool>, "Has never been tested with bool.");

        concurrency_checked_vector() = default;
        concurrency_checked_vector(concurrency_checked_vector&& other) = default;

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

        bool empty() const
        {
            auto guard = concurrency_guard::lock_const();
            return inner::empty();
        }

        reference back()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return inner::back();
        }

        const_reference back() const
        {
            auto guard = concurrency_guard::lock_const();
            return inner::back();
        }

        void pop_back()
        {
            auto guard = concurrency_guard::lock_nonconst();
            inner::pop_back();
        }

        void push_back(T const& value)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::push_back);
            inner::push_back(value);
        }

        void push_back(T&& value)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::push_back);
            inner::push_back(std::move(value));
        }

        size_type size() const
        {
            auto guard = concurrency_guard::lock_const();
            return inner::size();
        }

        iterator erase(const_iterator pos)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::erase);
            return { this, inner::erase(pos) };
        }

        iterator insert(const_iterator pos, T const& value)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::insert);
            return { this, inner::insert(pos, value) };
        }

        iterator insert(const_iterator pos, T&& value)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::insert);
            return { this, inner::insert(pos, std::move(value)) };
        }

        reference operator[](size_type pos)
        {
            return at(pos);
        }

        reference at(size_type pos)
        {
            auto guard = concurrency_guard::lock_nonconst();
            concurrency_guard::call_hook(collection_action::at);
            return inner::at(pos);
        }

        void clear()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return inner::clear();
        }

        template<typename InputIt>
        void assign(InputIt first, InputIt last)
        {
            auto guard = concurrency_guard::lock_nonconst();
            return inner::assign(first, last);
        }

        void reserve(size_type capacity) {
            auto guard = concurrency_guard::lock_nonconst();
            return inner::reserve(capacity);
        }

        void swap(concurrency_checked_vector& other)
        {
            auto guard = concurrency_guard::lock_nonconst();
            inner::swap(other);
        }

        template<typename Iterator>
        decltype(auto) dereference_iterator(Iterator const& it) const
        {
            auto guard = concurrency_guard::lock_const();
            concurrency_guard::call_hook(collection_action::at);
            return *it;
        }

        operator array_view<T>()
        {
            auto guard = concurrency_guard::lock_nonconst();
            return { inner::data(), static_cast<uint32_t>(inner::size()) };
        }

        operator array_view<T const>() const
        {
            auto guard = concurrency_guard::lock_const();
            return { inner::data(), static_cast<uint32_t>(inner::size()) };
        }
    };
#pragma endregion

    template<typename T, VectorKind kind>
    void test_vector_concurrency()
    {
        auto raw = concurrency_checked_vector<T>();
        auto hook = raw.hook;

        // Convert the raw_vector into the desired Windows Runtime vector interface.
        auto v = make_threaded_vector<kind>(std::move(raw));

        auto race = [&](collection_action action, auto&& background, auto&& foreground)
        {
            // Vector initial contents are { 1, 2, 3 }.
            v.ReplaceAll({ conditional_box<T>(1), conditional_box<T>(2), conditional_box<T>(3) });
            hook->race(action, background, foreground);
        };

        // Verify that Append does not run concurrently with GetAt().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            CHECK(conditional_unbox<T>(v.GetAt(3)) == 42);
        });

        // Verify that Append does not run concurrently with Size().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            CHECK(v.Size() == 4);
        });

        // Verify that Append does not run concurrently with IndexOf().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            uint32_t index;
            bool found = v.IndexOf(conditional_box<T>(3), index);
            if constexpr (std::is_same_v<T, int>)
            {
                CHECK(found);
                CHECK(index == 2);
            }
            else
            {
                // Boxed integers do not compare equal even if the values are the same.
                CHECK(!found);
            }
        });

        // Verify that Append does not run concurrently with another Append().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            v.Append(conditional_box<T>(43));
        });

        // Verify that Append does not run concurrently with ReplaceAll().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            v.ReplaceAll({ conditional_box<T>(1), conditional_box<T>(2) });
        });

        // Verify that Append does not run concurrently with GetMany().
        race(collection_action::push_back, [&]
        {
            v.Append(conditional_box<T>(42));
        }, [&]
        {
            T values[10];
            CHECK(v.GetMany(0, values) == 4);
            CHECK(conditional_unbox<T>(values[0]) == 1);
            CHECK(conditional_unbox<T>(values[1]) == 2);
            CHECK(conditional_unbox<T>(values[2]) == 3);
            CHECK(conditional_unbox<T>(values[3]) == 42);
        });

        // Verify that InsertAt does not run concurrently with GetAt().
        race(collection_action::insert, [&]
        {
            v.InsertAt(1, conditional_box<T>(42));
        }, [&]
        {
            CHECK(conditional_unbox<T>(v.GetAt(1)) == 42);
        });

        // Verify that InsertAt does not run concurrently with Size().
        race(collection_action::insert, [&]
        {
            v.InsertAt(1, conditional_box<T>(42));
        }, [&]
        {
            CHECK(v.Size() == 4);
        });

        // Verify that InsertAt does not run concurrently with GetMany().
        race(collection_action::insert, [&]
        {
            v.InsertAt(1, conditional_box<T>(42));
        }, [&]
        {
            T values[10];
            CHECK(v.GetMany(0, values) == 4);
            CHECK(conditional_unbox<T>(values[0]) == 1);
            CHECK(conditional_unbox<T>(values[1]) == 42);
            CHECK(conditional_unbox<T>(values[2]) == 2);
            CHECK(conditional_unbox<T>(values[3]) == 3);
        });

        // Verify that RemoveAt does not run concurrently with GetAt().
        race(collection_action::erase, [&]
        {
            v.RemoveAt(1);
        }, [&]
        {
            CHECK(conditional_unbox<T>(v.GetAt(1)) == 3);
        });

        // Verify that RemoveAt does not run concurrently with Size().
        race(collection_action::erase, [&]
        {
            v.RemoveAt(1);
        }, [&]
        {
            CHECK(v.Size() == 2);
        });

        // Verify that SetAt does not run concurrently with GetAt().
        race(collection_action::at, [&]
        {
            v.SetAt(1, conditional_box<T>(42));
        }, [&]
        {
            CHECK(conditional_unbox<T>(v.GetAt(1)) == 42);
        });

        // Iterator invalidation tests are a little different because we perform
        // the mutation from the foreground thread after the read operation
        // has begun on the background thread.
        {
            // Verify that iterator invalidation doesn't race against
            // iterator use.
            decltype(v.First()) it;
            T t;
            race(collection_action::at, [&]
            {
                it = v.First();
                t = it.Current();
            }, [&]
            {
                v.InsertAt(0, conditional_box<T>(42));
            });
            CHECK(conditional_unbox<T>(t) == 1);
        }

        {
            // Verify that concurrent iteration works via GetMany(), which is atomic.
            // (Current + MoveNext is non-atomic and can result in two threads
            // both grabbing the same Current and then moving two steps forward.)
            decltype(v.First()) it;
            T t1[1];
            T t2[1];
            race(collection_action::at, [&]
            {
                it = v.First();
                CHECK(it.GetMany(t1) == 1);
            }, [&]
            {
                CHECK(it.GetMany(t2) == 1);
            });
            CHECK(conditional_unbox<T>(t1[0]) != conditional_unbox<T>(t2[0]));
        }
    }

    void deadlock_test()
    {
        auto v = make_threaded_vector<VectorKind::IVector>(concurrency_checked_vector<IInspectable>());
        v.Append(make<deadlock_object<IVector<IInspectable>>>(v));
        auto task = [](auto v)-> IAsyncAction
        {
            co_await resume_background();
            v.RemoveAtEnd();
        }(v);
        auto status = task.wait_for(std::chrono::milliseconds(DEADLOCK_TIMEOUT));
        REQUIRE(status == AsyncStatus::Completed);
    }
}

TEST_CASE("multi_threaded_vector")
{
    test_vector_concurrency<int, VectorKind::IVector>();
    test_vector_concurrency<IInspectable, VectorKind::IVector>();

    deadlock_test();
}

TEST_CASE("multi_threaded_observable_vector")
{
    test_vector_concurrency<int, VectorKind::IObservableVector>();
    test_vector_concurrency<IInspectable, VectorKind::IObservableVector>();
    test_vector_concurrency<IInspectable, VectorKind::IObservableVectorAsInspectable>();
}
#endif
