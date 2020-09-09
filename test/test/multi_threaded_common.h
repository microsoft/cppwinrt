#pragma once

namespace concurrent_collections
{
    template <typename T> // int or IInspectable
    T conditional_box(int value)
    {
        if constexpr (std::is_same_v<T, int>)
        {
            return value;
        }
        else
        {
            return winrt::box_value(value);
        }
    }

    template <typename T>
    int conditional_unbox(T const& value)
    {
        if constexpr (std::is_same_v<T, int>)
        {
            return value;
        }
        else
        {
            return winrt::unbox_value<int>(value);
        }
    }

    // When debugging, you may want to increase this so you can set breakpoints
    // without triggering the timeouts.
    //
    // This determines how long we wait before we decide that our intentionally-frozen
    // threads have triggered a deadlock, which is expected when using multithread-safe collections:
    // Multithread-safe collections will wait for one thread to exit the collection before
    // allowing the next one to enter, and freezing inside the collection will cause a hang.
    // The reason for freezing inside the collection is to confirm that the other thread will
    // indeed wait for the first thread to finish before proceeding.
    static inline constexpr DWORD DEADLOCK_TIMEOUT = 10;

#pragma region collection hooks

    // The collection hook injects a delay when a particular action occurs
    // for the first time on the background thread.
    enum class collection_action
    {
        none, push_back, insert, erase, at, lookup
    };

    // All of our concurrency tests consists of starting an
    // operation on the background thread and then while that operation is
    // in progress, performing some other operation on the main thread and
    // verifying that nothing bad happens.
    //
    // | Background thread    | Main thread       |
    // |----------------------|-------------------|
    // | something()          |                   | Step 1
    // | | vector.something() |                   |
    // | | |                  |                   | <--- pause background thread, start main thread
    // | | |                  | foreground()      | Step 2
    // | | |                  |                   | <--- resume background thread
    // | | | do_the_thing     |                   | Step 3

    struct collection_hook
    {
        collection_action race_action = collection_action::none;
        int step = 0;
        DWORD mainThreadId = GetCurrentThreadId();

        collection_hook() = default;

        void on_action(collection_action action)
        {
            if ((action == race_action) && (GetCurrentThreadId() != mainThreadId))
            {
                race_action = collection_action::none;
                GoToStep(2);
                WaitForStep(3);
            }
        }

        template<typename Background, typename Foreground>
        void race(collection_action action, Background&& background, Foreground&& foreground)
        {
            race_action = action;
            step = 1;

            auto task = [](auto&& background) -> winrt::Windows::Foundation::IAsyncAction
            {
                co_await winrt::resume_background();
                background();
            }(background);

            WaitForStep(2);
            foreground();
            GoToStep(3);

            // Wait for background task to complete.
            task.get();
            race_action = collection_action::none;
        }

    private:
        // The hooks exist so we can proceed through a sequence of
        // steps in order to force race conditions. These helper function
        // control the progress through those steps.

        void GoToStep(int value)
        {
            if (step < value)
            {
                step = value;
                WakeByAddressAll(&step);
            }
        }

        bool WaitForStep(int value, DWORD timeout = DEADLOCK_TIMEOUT)
        {
            int current;
            while ((current = step) < value)
            {
                if (!WaitOnAddress(&step, &current, sizeof(current), timeout))
                {
                    return false; // timed out
                }
            }
            return true;
        }
    };

#pragma endregion

#pragma region iterator wrapper
    template<typename Container, typename Iterator, typename ConvertibleFrom = void>
    struct concurrency_checked_random_access_iterator : Iterator
    {
        using container = Container;
        using iterator = Iterator;

        using size_type = typename container::size_type;

        using difference_type = typename iterator::difference_type;
        using value_type = typename iterator::value_type;
        using pointer = typename iterator::pointer;
        using reference = typename iterator::reference;
        using iterator_category = typename iterator::iterator_category;

        container const* owner;

        concurrency_checked_random_access_iterator() : owner(nullptr) {}
        concurrency_checked_random_access_iterator(container const* c, iterator it) : owner(c), iterator(it) {}

        // Implicit conversion from non-const iterator to const iterator.
        template<typename = std::enable_if_t<!std::is_same_v<ConvertibleFrom, void>>>
        concurrency_checked_random_access_iterator(concurrency_checked_random_access_iterator<container, ConvertibleFrom> other) : owner(other.owner), iterator(other.inner()) { }

        concurrency_checked_random_access_iterator(concurrency_checked_random_access_iterator const&) = default;
        concurrency_checked_random_access_iterator& operator=(concurrency_checked_random_access_iterator const&) = default;

        iterator& inner() { return static_cast<iterator&>(*this); }
        iterator const& inner() const { return static_cast<iterator const&>(*this); }

        reference operator*() const
        {
            return owner->dereference_iterator(inner());
        }

        // inherited: pointer operator->() const;

        concurrency_checked_random_access_iterator& operator++()
        {
            ++inner();
            return *this;
        }

        concurrency_checked_random_access_iterator& operator++(int)
        {
            auto prev = *this;
            ++inner();
            return prev;
        }

        concurrency_checked_random_access_iterator& operator--()
        {
            --inner();
            return *this;
        }

        concurrency_checked_random_access_iterator& operator--(int)
        {
            auto prev = *this;
            --inner();
            return prev;
        }

        concurrency_checked_random_access_iterator& operator+=(difference_type offset)
        {
            inner() += offset;
            return *this;
        }

        concurrency_checked_random_access_iterator operator+(difference_type pos) const
        {
            return { owner, inner() + pos };
        }

        concurrency_checked_random_access_iterator& operator-=(difference_type offset)
        {
            inner() -= offset;
            return *this;
        }

        concurrency_checked_random_access_iterator operator-(difference_type pos) const
        {
            return { owner, inner() - pos };
        }

        difference_type operator-(concurrency_checked_random_access_iterator const& other) const
        {
            return inner() - other.inner();
        }

        reference operator[](size_type pos) const
        {
            return owner->dereference_iterator(inner() + pos);
        }

        // inherited: all comparison operators
    };

    // "integer + iterator" must be defined as a free operator.
    template<typename Container, typename Iterator, typename ConvertibleFrom = void>
    concurrency_checked_random_access_iterator<Container, Iterator, ConvertibleFrom> operator+(
        typename concurrency_checked_random_access_iterator<Container, Iterator, ConvertibleFrom>::difference_type offset,
        concurrency_checked_random_access_iterator<Container, Iterator, ConvertibleFrom> it)
    {
        return it += offset;
    }

    // We have a constructor whose purpose is to offer an implicit conversion from
    // non-const iterator to const iterator. When applied to a const
    // iterator, it offers implicit construction from this garbage type
    // to const iterator (triggering its instantiation), but then the constructor
    // is deleted by SFINAE, so the type is never actually created at runtime.
    // This specialization is necessary so that the garbage instantiation succeeds.
    template<typename Container>
    struct concurrency_checked_random_access_iterator<Container, void, void>
    {
    };
#pragma endregion

    struct concurrency_guard
    {
        // Clients can use the hook to alter behavior.
        std::shared_ptr<collection_hook> hook = std::make_shared<collection_hook>();

        concurrency_guard() = default;
        concurrency_guard(concurrency_guard const& other) noexcept
            : m_lock(0), hook(other.hook)
        {
            auto guard = other.lock_nonconst();
        }

        void call_hook(collection_action action) const
        {
            return hook->on_action(action);
        }

        struct const_access_guard
        {
            concurrency_guard const* owner;

            const_access_guard(concurrency_guard const* v) : owner(v)
            {
                CHECK(++owner->m_lock > 0);
            }

            ~const_access_guard()
            {
                --owner->m_lock;
            }
        };

        struct nonconst_access_guard
        {
            concurrency_guard const* owner;

            nonconst_access_guard(concurrency_guard const* v) : owner(v)
            {
                CHECK(--owner->m_lock == -1);
            }

            ~nonconst_access_guard()
            {
                owner->m_lock = 0;
            }
        };

        const_access_guard lock_const() const
        {
            return { this };
        }

        nonconst_access_guard lock_nonconst() const
        {
            return { this };
        }

    private:
        // 0 = not being accessed
        // -1 = a thread is inside a non-const method
        // positive = number of threads inside a const method

        std::atomic<int> mutable m_lock;
    };

    template<typename Collection>
    struct deadlock_object : winrt::implements<deadlock_object<Collection>, winrt::Windows::Foundation::IInspectable>
    {
        Collection collection;

        deadlock_object(Collection c) : collection(c) {}

        static void final_release(std::unique_ptr<deadlock_object> self)
        {
            // Make sure this doesn't deadlock. There are cases where an object's destructor
            // triggers a cascade of destruction, and some of the cascade destructors try
            // to talk to the same collection that the original object was removed from.
            self->collection.Clear();
        }
    };

}
