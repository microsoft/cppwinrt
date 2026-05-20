
WINRT_EXPORT namespace winrt::impl
{
    template <typename T, typename Container>
    using multi_threaded_vector = vector_impl<T, Container, multi_threaded_collection_base>;

    template <typename Container, typename ThreadingBase = single_threaded_collection_base>
    struct inspectable_observable_vector :
        observable_vector_base<inspectable_observable_vector<Container, ThreadingBase>, Windows::Foundation::IInspectable>,
        implements<inspectable_observable_vector<Container, ThreadingBase>,
        wfc::IObservableVector<Windows::Foundation::IInspectable>, wfc::IVector<Windows::Foundation::IInspectable>, wfc::IVectorView<Windows::Foundation::IInspectable>, wfc::IIterable<Windows::Foundation::IInspectable>>,
        ThreadingBase
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit inspectable_observable_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

    private:

        Container m_values;
    };

    template <typename Container>
    using multi_threaded_inspectable_observable_vector = inspectable_observable_vector<Container, multi_threaded_collection_base>;

    template <typename T, typename Container, typename ThreadingBase = single_threaded_collection_base>
    struct convertible_observable_vector :
        observable_vector_base<convertible_observable_vector<T, Container, ThreadingBase>, T>,
        implements<convertible_observable_vector<T, Container, ThreadingBase>,
        wfc::IObservableVector<T>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>,
        wfc::IObservableVector<Windows::Foundation::IInspectable>, wfc::IVector<Windows::Foundation::IInspectable>, wfc::IVectorView<Windows::Foundation::IInspectable>, wfc::IIterable<Windows::Foundation::IInspectable>>,
        ThreadingBase
    {
        static_assert(!std::is_same_v<T, Windows::Foundation::IInspectable>);
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using container_type = convertible_observable_vector<T, Container, ThreadingBase>;
        using base_type = observable_vector_base<convertible_observable_vector<T, Container, ThreadingBase>, T>;

        explicit convertible_observable_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

        using ThreadingBase::acquire_shared;
        using ThreadingBase::acquire_exclusive;

        auto First()
        {
            struct result
            {
                container_type* container;

                operator wfc::IIterator<T>()
                {
                    return static_cast<base_type*>(container)->First();
                }

                operator wfc::IIterator<Windows::Foundation::IInspectable>()
                {
                    [[maybe_unused]] auto guard = container->acquire_shared();
                    return make<iterator>(container);
                }
            };

            return result{ this };
        }

        auto GetAt(std::uint32_t const index) const
        {
            struct result
            {
                base_type const* container;
                std::uint32_t const index;

                operator T() const
                {
                    return container->GetAt(index);
                }

                operator Windows::Foundation::IInspectable() const
                {
                    return box_value(container->GetAt(index));
                }
            };

            return result{ this, index };
        }

        using base_type::IndexOf;

        bool IndexOf(Windows::Foundation::IInspectable const& value, std::uint32_t& index) const
        {
            if constexpr (is_com_interface_v<T>)
            {
                if (!value)
                {
                    return base_type::IndexOf(nullptr, index);
                }
                else if (auto as = value.try_as<T>())
                {
                    return base_type::IndexOf(as, index);
                }
            }
            else
            {
                if (auto as = value.try_as<T>())
                {
                    return base_type::IndexOf(as.value(), index);
                }
            }

            return false;
        }

        using base_type::GetMany;

        std::uint32_t GetMany(std::uint32_t const startIndex, array_view<Windows::Foundation::IInspectable> values) const
        {
            [[maybe_unused]] auto guard = this->acquire_shared();
            if (startIndex >= m_values.size())
            {
                return 0;
            }

            std::uint32_t const actual = (std::min)(static_cast<std::uint32_t>(m_values.size() - startIndex), values.size());

            std::transform(m_values.begin() + startIndex, m_values.begin() + startIndex + actual, values.begin(), [&](auto && value)
                {
                    return box_value(value);
                });

            return actual;
        }

        auto GetView() const noexcept
        {
            struct result
            {
                container_type const* container;

                operator wfc::IVectorView<T>() const
                {
                    return *container;
                }

                operator wfc::IVectorView<Windows::Foundation::IInspectable>() const
                {
                    return *container;
                }
            };

            return result{ this };
        }

        using base_type::SetAt;

        void SetAt(std::uint32_t const index, Windows::Foundation::IInspectable const& value)
        {
            SetAt(index, unbox_value<T>(value));
        }

        using base_type::InsertAt;

        void InsertAt(std::uint32_t const index, Windows::Foundation::IInspectable const& value)
        {
            InsertAt(index, unbox_value<T>(value));
        }

        using base_type::Append;

        void Append(Windows::Foundation::IInspectable const& value)
        {
            Append(unbox_value<T>(value));
        }

        using base_type::ReplaceAll;

        void ReplaceAll(array_view<Windows::Foundation::IInspectable const> values)
        {
            Container new_values;
            new_values.reserve(values.size());

            std::transform(values.begin(), values.end(), std::back_inserter(new_values), [&](auto && value)
                {
                    return unbox_value<T>(value);
                });

            base_type::ReplaceAll(std::move(new_values));
        }

        using base_type::VectorChanged;

        event_token VectorChanged(wfc::VectorChangedEventHandler<Windows::Foundation::IInspectable> const& handler)
        {
            return base_type::VectorChanged([handler](auto && sender, auto && args)
                {
                    handler(sender.template try_as<wfc::IObservableVector<Windows::Foundation::IInspectable>>(), args);
                });
        }

    private:

        struct iterator :
            impl::collection_version::iterator_type,
            implements<iterator, Windows::Foundation::Collections::IIterator<Windows::Foundation::IInspectable>>
        {
            explicit iterator(container_type* const container) noexcept :
                impl::collection_version::iterator_type(*container),
                m_current(container->get_container().begin()),
                m_end(container->get_container().end())
            {
                m_owner.copy_from(container);
            }

            Windows::Foundation::IInspectable Current() const
            {
                [[maybe_unused]] auto guard = m_owner->acquire_shared();
                check_version(*m_owner);
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return box_value(*m_current);
            }

            bool HasCurrent() const
            {
                [[maybe_unused]] auto guard = m_owner->acquire_shared();
                check_version(*m_owner);
                return m_current != m_end;
            }

            bool MoveNext()
            {
                [[maybe_unused]] auto guard = m_owner->acquire_exclusive();
                check_version(*m_owner);
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return m_current != m_end;
            }

            std::uint32_t GetMany(array_view<Windows::Foundation::IInspectable> values)
            {
                [[maybe_unused]] auto guard = m_owner->acquire_exclusive();
                check_version(*m_owner);
                std::uint32_t const actual = (std::min)(static_cast<std::uint32_t>(std::distance(m_current, m_end)), values.size());

                std::transform(m_current, m_current + actual, values.begin(), [&](auto && value)
                    {
                        return box_value(value);
                    });

                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<container_type> m_owner;
            decltype(m_owner->get_container().begin()) m_current;
            decltype(m_owner->get_container().end()) const m_end;
        };

        Container m_values;
    };

    template <typename T, typename Container>
    using multi_threaded_convertible_observable_vector = convertible_observable_vector<T, Container, multi_threaded_collection_base>;
}

WINRT_EXPORT namespace winrt
{
    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> single_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::input_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> multi_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::multi_threaded_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IObservableVector<T> single_threaded_observable_vector(std::vector<T, Allocator>&& values = {})
    {
        if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>)
        {
            return make<impl::inspectable_observable_vector<std::vector<T, Allocator>>>(std::move(values));
        }
        else
        {
            return make<impl::convertible_observable_vector<T, std::vector<T, Allocator>>>(std::move(values));
        }
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IObservableVector<T> multi_threaded_observable_vector(std::vector<T, Allocator>&& values = {})
    {
        if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>)
        {
            return make<impl::multi_threaded_inspectable_observable_vector<std::vector<T, Allocator>>>(std::move(values));
        }
        else
        {
            return make<impl::multi_threaded_convertible_observable_vector<T, std::vector<T, Allocator>>>(std::move(values));
        }
    }
}
