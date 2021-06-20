
WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct weak_ref
    {
        weak_ref(std::nullptr_t = nullptr) noexcept {}

        weak_ref(impl::com_ref<T> const& object)
        {
            if (object)
            {
                if constexpr(impl::is_implements_v<T>)
                {
                    m_ref = std::move(object->get_weak().m_ref);
                }
                else
                {
                    // An access violation (crash) on the following line means that the object does not support weak references.
                    // Avoid using weak_ref/auto_revoke with such objects.
                    check_hresult(object.template try_as<impl::IWeakReferenceSource>()->GetWeakReference(m_ref.put()));
                }
            }
        }

        [[nodiscard]] impl::com_ref<T> get() const noexcept
        {
            if (!m_ref)
            {
                return nullptr;
            }

            if constexpr(impl::is_implements_v<T>)
            {
                impl::com_ref<default_interface<T>> temp;
                m_ref->Resolve(guid_of<T>(), put_abi(temp));
                void* result = get_self<T>(temp);
                detach_abi(temp);
                return { result, take_ownership_from_abi };
            }
            else
            {
                void* result{};
                m_ref->Resolve(guid_of<T>(), &result);
                return { result, take_ownership_from_abi };
            }
        }

        auto put() noexcept
        {
            return m_ref.put();
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<impl::IWeakReference> m_ref;
    };

    template<typename T> weak_ref(T const&)->weak_ref<impl::wrapped_type_t<T>>;

    template<typename T>
    struct impl::abi<weak_ref<T>> : impl::abi<com_ptr<impl::IWeakReference>>
    {
    };

    template <typename T>
    inline bool operator==(weak_ref<T> const& left, weak_ref<T> const& right) noexcept
    {
        return get_abi(left) == get_abi(right);
    }

    template <typename T>
    inline bool operator==(weak_ref<T> const& left, std::nullptr_t) noexcept
    {
        return get_abi(left) == nullptr;
    }

    template <typename T>
    inline bool operator==(std::nullptr_t, weak_ref<T> const& right) noexcept
    {
        return nullptr == get_abi(right);
    }

    template <typename T>
    inline bool operator!=(weak_ref<T> const& left, weak_ref<T> const& right) noexcept
    {
        return !(left == right);
    }

    template <typename T>
    inline bool operator!=(weak_ref<T> const& left, std::nullptr_t) noexcept
    {
        return !(left == nullptr);
    }

    template <typename T>
    inline bool operator!=(std::nullptr_t, weak_ref<T> const& right) noexcept
    {
        return !(nullptr == right);
    }

    template <typename T>
    weak_ref<impl::wrapped_type_t<T>> make_weak(T const& object)
    {
        return object;
    }
}
