
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

        impl::com_ref<T> get() const noexcept
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

    template <typename T>
    weak_ref<impl::wrapped_type_t<T>> make_weak(T const& object)
    {
        return object;
    }
}
