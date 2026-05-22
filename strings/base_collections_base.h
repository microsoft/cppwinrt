WINRT_EXPORT namespace winrt::impl
{
    struct nop_lock_guard {};

    struct single_threaded_collection_base
    {
        [[nodiscard]] auto acquire_exclusive() const
        {
            return nop_lock_guard{};
        }

        [[nodiscard]] auto acquire_shared() const
        {
            return nop_lock_guard();
        }
    };

    struct multi_threaded_collection_base
    {
        [[nodiscard]] auto acquire_exclusive() const
        {
            return slim_lock_guard{m_mutex};
        }

        [[nodiscard]] auto acquire_shared() const
        {
            return slim_shared_lock_guard{m_mutex};
        }

    private:

        mutable slim_mutex m_mutex;
    };

    template <typename D>
    using container_type_t = std::decay_t<decltype(std::declval<D>().get_container())>;

    template <typename D, typename = void>
    struct removed_values
    {
        void assign(container_type_t<D>& value)
        {
            // Trivially destructible; okay to run destructors under lock and clearing allows potential re-use of buffers
            value.clear();
        }
    };

    template <typename D>
    struct removed_values<D, std::enable_if_t<!std::is_trivially_destructible_v<typename container_type_t<D>::value_type>>>
    {
        container_type_t<D> m_value;

        void assign(container_type_t<D>& value)
        {
            m_value.swap(value);
        }
    };

    template <typename T, typename = void>
    struct removed_value
    {
        // Trivially destructible; okay to run destructor under lock
        template <typename U>
        void assign(U&&) {}
    };

    template <typename T>
    struct removed_value<T, std::enable_if_t<std::is_move_constructible_v<T> && !std::is_trivially_destructible_v<T>>>
    {
        std::optional<T> m_value;

        template <typename U>
        void assign(U&& value)
        {
            m_value.emplace(std::move(value));
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct iterable_base : Version
    {
        template <typename U>
        static constexpr auto const& wrap_value(U const& value) noexcept
        {
            return value;
        }

        template <typename U>
        static constexpr auto const& unwrap_value(U const& value) noexcept
        {
            return value;
        }

        auto acquire_exclusive() const
        {
            return impl::nop_lock_guard{};
        }

        auto acquire_shared() const
        {
            // Support for concurrent "shared" operations is optional
            return static_cast<D const&>(*this).acquire_exclusive();
        }

        auto First()
        {
            // NOTE: iterator's constructor requires shared access
            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_shared();
            return make<iterator>(static_cast<D*>(this));
        }

    protected:

        template<typename InputIt, typename Size, typename OutputIt>
        auto copy_n(InputIt first, Size count, OutputIt result) const
        {
            if constexpr (std::is_same_v<T, std::decay_t<decltype(*std::declval<D const>().get_container().begin())>> && !impl::is_key_value_pair<T>::value)
            {
                std::copy_n(first, count, result);
            }
            else
            {
                return std::transform(first, std::next(first, count), result, [&](auto&& value)
                {
                    if constexpr (!impl::is_key_value_pair<T>::value)
                    {
                        return static_cast<D const&>(*this).unwrap_value(value);
                    }
                    else
                    {
                        return make<impl::key_value_pair<T>>(static_cast<D const&>(*this).unwrap_value(value.first), static_cast<D const&>(*this).unwrap_value(value.second));
                    }
                });
            }
        }

    private:

        struct iterator : Version::iterator_type, implements<iterator, Windows::Foundation::Collections::IIterator<T>>
        {
            void abi_enter()
            {
                m_owner->abi_enter();
            }

            void abi_exit()
            {
                m_owner->abi_exit();
            }

            explicit iterator(D* const owner) noexcept :
                Version::iterator_type(*owner),
                m_current(owner->get_container().begin()),
                m_end(owner->get_container().end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                [[maybe_unused]] auto guard = m_owner->acquire_shared();
                this->check_version(*m_owner);

                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return current_value_withlock();
            }

            bool HasCurrent() const
            {
                [[maybe_unused]] auto guard = m_owner->acquire_shared();
                this->check_version(*m_owner);
                return m_current != m_end;
            }

            bool MoveNext()
            {
                [[maybe_unused]] auto guard = m_owner->acquire_exclusive();
                this->check_version(*m_owner);
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return m_current != m_end;
            }

            std::uint32_t GetMany(array_view<T> values)
            {
                [[maybe_unused]] auto guard = m_owner->acquire_exclusive();
                this->check_version(*m_owner);
                return GetMany(values, typename std::iterator_traits<iterator_type>::iterator_category());
            }

        private:

            T current_value_withlock() const
            {
                WINRT_ASSERT(m_current != m_end);
                if constexpr (!impl::is_key_value_pair<T>::value)
                {
                    return m_owner->unwrap_value(*m_current);
                }
                else
                {
                    return make<impl::key_value_pair<T>>(m_owner->unwrap_value(m_current->first), m_owner->unwrap_value(m_current->second));
                }
            }

            std::uint32_t GetMany(array_view<T> values, std::random_access_iterator_tag)
            {
                std::uint32_t const actual = (std::min)(static_cast<std::uint32_t>(m_end - m_current), values.size());
                m_owner->copy_n(m_current, actual, values.begin());
                m_current += actual;
                return actual;
            }

            std::uint32_t GetMany(array_view<T> values, std::input_iterator_tag)
            {
                auto output = values.begin();

                while (output < values.end() && m_current != m_end)
                {
                    *output = current_value_withlock();
                    ++output;
                    ++m_current;
                }

                return static_cast<std::uint32_t>(output - values.begin());
            }

            using iterator_type = decltype(std::declval<D>().get_container().begin());

            com_ptr<D> m_owner;
            iterator_type m_current;
            iterator_type const m_end;
        };
    };

    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct vector_view_base : iterable_base<D, T, Version>
    {
        T GetAt(std::uint32_t const index) const
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            if (index >= container_size())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(*std::next(static_cast<D const&>(*this).get_container().begin(), index));
        }

        std::uint32_t Size() const noexcept
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            return container_size();
        }

        bool IndexOf(T const& value, std::uint32_t& index) const noexcept
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            auto first = std::find_if(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end(), [&](auto&& match)
            {
                return value == static_cast<D const&>(*this).unwrap_value(match);
            });

            index = static_cast<std::uint32_t>(first - static_cast<D const&>(*this).get_container().begin());
            return index < container_size();
        }

        std::uint32_t GetMany(std::uint32_t const startIndex, array_view<T> values) const
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            if (startIndex >= container_size())
            {
                return 0;
            }

            std::uint32_t const actual = (std::min)(container_size() - startIndex, values.size());
            this->copy_n(static_cast<D const&>(*this).get_container().begin() + startIndex, actual, values.begin());
            return actual;
        }

    private:

        std::uint32_t container_size() const noexcept
        {
            return static_cast<std::uint32_t>(std::distance(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end()));
        }
    };

    template <typename D, typename T>
    struct vector_base : vector_view_base<D, T, impl::collection_version>
    {
        Windows::Foundation::Collections::IVectorView<T> GetView() const noexcept
        {
            return static_cast<D const&>(*this);
        }

        void SetAt(std::uint32_t const index, T const& value)
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> oldValue;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            auto&& pos = static_cast<D&>(*this).get_container()[index];
            oldValue.assign(pos);
            pos = static_cast<D const&>(*this).wrap_value(value);
        }

        void InsertAt(std::uint32_t const index, T const& value)
        {
            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index > static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container().insert(static_cast<D const&>(*this).get_container().begin() + index, static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAt(std::uint32_t const index)
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> removedValue;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            auto itr = static_cast<D&>(*this).get_container().begin() + index;
            removedValue.assign(*itr);
            static_cast<D&>(*this).get_container().erase(itr);
        }

        void Append(T const& value)
        {
            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            static_cast<D&>(*this).get_container().push_back(static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAtEnd()
        {
            impl::removed_value<typename impl::container_type_t<D>::value_type> removedValue;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            if (static_cast<D const&>(*this).get_container().empty())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            removedValue.assign(static_cast<D&>(*this).get_container().back());
            static_cast<D&>(*this).get_container().pop_back();
        }

        void Clear() noexcept
        {
            impl::removed_values<D> oldContainer;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
        }

        void ReplaceAll(array_view<T const> value)
        {
            impl::removed_values<D> oldContainer;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
            assign(value.begin(), value.end());
        }

    private:

        template <typename InputIt>
        void assign(InputIt first, InputIt last)
        {
            if constexpr (std::is_same_v<T, typename impl::container_type_t<D>::value_type>)
            {
                static_cast<D&>(*this).get_container().assign(first, last);
            }
            else
            {
                auto& container = static_cast<D&>(*this).get_container();
                WINRT_ASSERT(container.empty());
                container.reserve(std::distance(first, last));

                std::transform(first, last, std::back_inserter(container), [&](auto&& value)
                {
                    return static_cast<D const&>(*this).wrap_value(value);
                });
            }
        }
    };

    template <typename D, typename T>
    struct observable_vector_base : vector_base<D, T>
    {
        event_token VectorChanged(Windows::Foundation::Collections::VectorChangedEventHandler<T> const& handler)
        {
            return m_changed.add(handler);
        }

        void VectorChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        void SetAt(std::uint32_t const index, T const& value)
        {
            vector_base<D, T>::SetAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemChanged, index);
        }

        void InsertAt(std::uint32_t const index, T const& value)
        {
            vector_base<D, T>::InsertAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, index);
        }

        void RemoveAt(std::uint32_t const index)
        {
            vector_base<D, T>::RemoveAt(index);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, index);
        }

        void Append(T const& value)
        {
            vector_base<D, T>::Append(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, this->Size() - 1);
        }

        void RemoveAtEnd()
        {
            vector_base<D, T>::RemoveAtEnd();
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, this->Size());
        }

        void Clear()
        {
            vector_base<D, T>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

        void ReplaceAll(array_view<T const> value)
        {
            vector_base<D, T>::ReplaceAll(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

    protected:

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, std::uint32_t const index)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, index));
        }

    private:

        event<Windows::Foundation::Collections::VectorChangedEventHandler<T>> m_changed;

        struct args : implements<args, Windows::Foundation::Collections::IVectorChangedEventArgs>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, std::uint32_t const index) noexcept :
                m_change(change),
                m_index(index)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            std::uint32_t Index() const noexcept
            {
                return m_index;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            std::uint32_t const m_index;
        };
    };

    template <typename D, typename K, typename V, typename Version = impl::no_collection_version>
    struct map_view_base : iterable_base<D, Windows::Foundation::Collections::IKeyValuePair<K, V>, Version>
    {
        // specialization of Lookup that avoids throwing the hresult
        std::optional<V> TryLookup(K const& key, trylookup_from_abi_t) const
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            auto pair = static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key));

            if (pair == static_cast<D const&>(*this).get_container().end())
            {
                return std::nullopt;
            }

            return static_cast<D const&>(*this).unwrap_value(pair->second);
        }

        V Lookup(K const& key) const
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            auto pair = static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key));

            if (pair == static_cast<D const&>(*this).get_container().end())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(pair->second);
        }

        std::uint32_t Size() const noexcept
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            return static_cast<std::uint32_t>(static_cast<D const&>(*this).get_container().size());
        }

        bool HasKey(K const& key) const noexcept
        {
            [[maybe_unused]] auto guard = static_cast<D const&>(*this).acquire_shared();
            return static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key)) != static_cast<D const&>(*this).get_container().end();
        }

        void Split(Windows::Foundation::Collections::IMapView<K, V>& first, Windows::Foundation::Collections::IMapView<K, V>& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

    };

    template <typename D, typename K, typename V>
    struct map_base : map_view_base<D, K, V, impl::collection_version>
    {
        Windows::Foundation::Collections::IMapView<K, V> GetView() const
        {
            return static_cast<D const&>(*this);
        }

        bool Insert(K const& key, V const& value)
        {
            impl::removed_value<typename impl::container_type_t<D>::mapped_type> oldValue;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            auto [itr, added] = static_cast<D&>(*this).get_container().emplace(static_cast<D const&>(*this).wrap_value(key), static_cast<D const&>(*this).wrap_value(value));
            if (!added)
            {
                oldValue.assign(itr->second);
                itr->second = static_cast<D const&>(*this).wrap_value(value);
            }

            return !added;
        }

        void Remove(K const& key)
        {
            typename impl::container_type_t<D>::node_type removedNode;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            auto& container = static_cast<D&>(*this).get_container();
            auto found = container.find(static_cast<D const&>(*this).wrap_value(key));
            if (found == container.end())
            {
                throw hresult_out_of_bounds();
            }
            this->increment_version();
            removedNode = container.extract(found);
        }

        void Clear() noexcept
        {
            impl::removed_values<D> oldContainer;

            [[maybe_unused]] auto guard = static_cast<D&>(*this).acquire_exclusive();
            this->increment_version();
            oldContainer.assign(static_cast<D&>(*this).get_container());
        }
    };

    template <typename D, typename K, typename V>
    struct observable_map_base : map_base<D, K, V>
    {
        event_token MapChanged(Windows::Foundation::Collections::MapChangedEventHandler<K, V> const& handler)
        {
            return m_changed.add(handler);
        }

        void MapChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        bool Insert(K const& key, V const& value)
        {
            bool const result = map_base<D, K, V>::Insert(key, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, key);
            return result;
        }

        void Remove(K const& key)
        {
            map_base<D, K, V>::Remove(key);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, key);
        }

        void Clear() noexcept
        {
            map_base<D, K, V>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, impl::empty_value<K>());
        }

    protected:

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, K const& key)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, key));
        }

    private:

        event<Windows::Foundation::Collections::MapChangedEventHandler<K, V>> m_changed;

        struct args : implements<args, Windows::Foundation::Collections::IMapChangedEventArgs<K>>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, K const& key) noexcept :
                m_change(change),
                m_key(key)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            K Key() const noexcept
            {
                return m_key;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            K const m_key;
        };
    };
}
