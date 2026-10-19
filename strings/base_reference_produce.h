
WINRT_EXPORT namespace winrt::impl
{
    template <typename T>
    struct reference;

    template <typename T>
    struct reference_array;

    template <typename T>
    inline constexpr bool is_stock_reference_v =
        std::is_same_v<T, std::uint8_t> || std::is_same_v<T, std::int16_t> ||
        std::is_same_v<T, std::uint16_t> || std::is_same_v<T, std::int32_t> ||
        std::is_same_v<T, std::uint32_t> || std::is_same_v<T, std::int64_t> ||
        std::is_same_v<T, std::uint64_t> || std::is_same_v<T, float> ||
        std::is_same_v<T, double> || std::is_same_v<T, char16_t> ||
        std::is_same_v<T, bool> || std::is_same_v<T, hstring> ||
        std::is_same_v<T, guid> || std::is_same_v<T, Windows::Foundation::DateTime> ||
        std::is_same_v<T, Windows::Foundation::TimeSpan> || std::is_same_v<T, Windows::Foundation::Point>;

    template <typename T>
    constexpr Windows::Foundation::PropertyType scalar_property_type() noexcept
    {
        using pt = Windows::Foundation::PropertyType;

        if constexpr (std::is_same_v<T, std::uint8_t>) { return pt::UInt8; }
        else if constexpr (std::is_same_v<T, std::int16_t>) { return pt::Int16; }
        else if constexpr (std::is_same_v<T, std::uint16_t>) { return pt::UInt16; }
        else if constexpr (std::is_same_v<T, std::int32_t>) { return pt::Int32; }
        else if constexpr (std::is_same_v<T, std::uint32_t>) { return pt::UInt32; }
        else if constexpr (std::is_same_v<T, std::int64_t>) { return pt::Int64; }
        else if constexpr (std::is_same_v<T, std::uint64_t>) { return pt::UInt64; }
        else if constexpr (std::is_same_v<T, float>) { return pt::Single; }
        else if constexpr (std::is_same_v<T, double>) { return pt::Double; }
        else if constexpr (std::is_same_v<T, char16_t>) { return pt::Char16; }
        else if constexpr (std::is_same_v<T, bool>) { return pt::Boolean; }
        else if constexpr (std::is_same_v<T, hstring>) { return pt::String; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::IInspectable>) { return pt::Inspectable; }
        else if constexpr (std::is_same_v<T, guid>) { return pt::Guid; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::DateTime>) { return pt::DateTime; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::TimeSpan>) { return pt::TimeSpan; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::Point>) { return pt::Point; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::Size>) { return pt::Size; }
        else if constexpr (std::is_same_v<T, Windows::Foundation::Rect>) { return pt::Rect; }
        else { return pt::OtherType; }
    }

    template <typename T>
    constexpr Windows::Foundation::PropertyType array_property_type() noexcept
    {
        return static_cast<Windows::Foundation::PropertyType>(
            static_cast<std::int32_t>(scalar_property_type<T>()) + 1024);
    }

    template <typename U>
    inline constexpr bool is_numeric_scalar_v =
        (std::is_arithmetic_v<U> && !std::is_same_v<U, bool> && !std::is_same_v<U, char16_t>) || std::is_enum_v<U>;

    template <typename Derived, typename T, typename Interface, bool IsArray>
    struct reference_producer : implements<Derived, Interface, Windows::Foundation::IPropertyValue,
        std::conditional_t<is_stock_reference_v<T>, non_agile, marker>>
    {
        Windows::Foundation::PropertyType Type() const noexcept
        {
            if constexpr (IsArray) { return array_property_type<T>(); }
            else { return scalar_property_type<T>(); }
        }

        static constexpr bool IsNumericScalar() noexcept
        {
            return !IsArray && is_numeric_scalar_v<T>;
        }

        std::uint8_t GetUInt8() const { return derived()->template get_as<std::uint8_t>(); }
        std::int16_t GetInt16() const { return derived()->template get_as<std::int16_t>(); }
        std::uint16_t GetUInt16() const { return derived()->template get_as<std::uint16_t>(); }
        std::int32_t GetInt32() const { return derived()->template get_as<std::int32_t>(); }
        std::uint32_t GetUInt32() const { return derived()->template get_as<std::uint32_t>(); }
        std::int64_t GetInt64() const { return derived()->template get_as<std::int64_t>(); }
        std::uint64_t GetUInt64() const { return derived()->template get_as<std::uint64_t>(); }
        float GetSingle() const { return derived()->template get_as<float>(); }
        double GetDouble() const { return derived()->template get_as<double>(); }
        char16_t GetChar16() const { return derived()->template get_as<char16_t>(); }
        bool GetBoolean() const { return derived()->template get_as<bool>(); }
        hstring GetString() const { return derived()->template get_as<hstring>(); }
        guid GetGuid() const { return derived()->template get_as<guid>(); }
        Windows::Foundation::DateTime GetDateTime() const { return derived()->template get_as<Windows::Foundation::DateTime>(); }
        Windows::Foundation::TimeSpan GetTimeSpan() const { return derived()->template get_as<Windows::Foundation::TimeSpan>(); }
        Windows::Foundation::Point GetPoint() const { return derived()->template get_as<Windows::Foundation::Point>(); }
        Windows::Foundation::Size GetSize() const { return derived()->template get_as<Windows::Foundation::Size>(); }
        Windows::Foundation::Rect GetRect() const { return derived()->template get_as<Windows::Foundation::Rect>(); }
        void GetUInt8Array(com_array<std::uint8_t>& value) const { derived()->get_as(value); }
        void GetInt16Array(com_array<std::int16_t>& value) const { derived()->get_as(value); }
        void GetUInt16Array(com_array<std::uint16_t>& value) const { derived()->get_as(value); }
        void GetInt32Array(com_array<std::int32_t>& value) const { derived()->get_as(value); }
        void GetUInt32Array(com_array<std::uint32_t>& value) const { derived()->get_as(value); }
        void GetInt64Array(com_array<std::int64_t>& value) const { derived()->get_as(value); }
        void GetUInt64Array(com_array<std::uint64_t>& value) const { derived()->get_as(value); }
        void GetSingleArray(com_array<float>& value) const { derived()->get_as(value); }
        void GetDoubleArray(com_array<double>& value) const { derived()->get_as(value); }
        void GetChar16Array(com_array<char16_t>& value) const { derived()->get_as(value); }
        void GetBooleanArray(com_array<bool>& value) const { derived()->get_as(value); }
        void GetStringArray(com_array<hstring>& value) const { derived()->get_as(value); }
        void GetInspectableArray(com_array<Windows::Foundation::IInspectable>& value) const { derived()->get_as(value); }
        void GetGuidArray(com_array<guid>& value) const { derived()->get_as(value); }
        void GetDateTimeArray(com_array<Windows::Foundation::DateTime>& value) const { derived()->get_as(value); }
        void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan>& value) const { derived()->get_as(value); }
        void GetPointArray(com_array<Windows::Foundation::Point>& value) const { derived()->get_as(value); }
        void GetSizeArray(com_array<Windows::Foundation::Size>& value) const { derived()->get_as(value); }
        void GetRectArray(com_array<Windows::Foundation::Rect>& value) const { derived()->get_as(value); }

    private:

        Derived const* derived() const noexcept { return static_cast<Derived const*>(this); }

        std::int32_t query_interface_tearoff(guid const& id, void** object) const noexcept override
        {
            if constexpr (is_stock_reference_v<T>)
            {
                if (is_guid_of<IMarshal>(id))
                {
                    try
                    {
                        auto marshal = derived()->create_property_value().template as<IMarshal>();
                        *object = detach_abi(marshal);
                        return error_ok;
                    }
                    catch (...)
                    {
                        *object = nullptr;
                        return to_hresult();
                    }
                }

                if (is_guid_of<IAgileObject>(id))
                {
                    auto unknown = reinterpret_cast<unknown_abi*>(to_abi<Interface>(derived()));
                    unknown->AddRef();
                    *object = unknown;
                    return error_ok;
                }
            }

            *object = nullptr;
            return error_no_interface;
        }
    };

    template <typename T>
    struct reference : reference_producer<reference<T>, T, Windows::Foundation::IReference<T>, false>
    {
        reference(T const& value) : m_value(value)
        {
        }

        T Value() const
        {
            return m_value;
        }

    private:

        template <typename, typename, typename, bool> friend struct reference_producer;

        Windows::Foundation::IInspectable create_property_value() const
        {
            using pv = Windows::Foundation::PropertyValue;

            if constexpr (std::is_same_v<T, std::uint8_t>) { return pv::CreateUInt8(m_value); }
            else if constexpr (std::is_same_v<T, std::int16_t>) { return pv::CreateInt16(m_value); }
            else if constexpr (std::is_same_v<T, std::uint16_t>) { return pv::CreateUInt16(m_value); }
            else if constexpr (std::is_same_v<T, std::int32_t>) { return pv::CreateInt32(m_value); }
            else if constexpr (std::is_same_v<T, std::uint32_t>) { return pv::CreateUInt32(m_value); }
            else if constexpr (std::is_same_v<T, std::int64_t>) { return pv::CreateInt64(m_value); }
            else if constexpr (std::is_same_v<T, std::uint64_t>) { return pv::CreateUInt64(m_value); }
            else if constexpr (std::is_same_v<T, float>) { return pv::CreateSingle(m_value); }
            else if constexpr (std::is_same_v<T, double>) { return pv::CreateDouble(m_value); }
            else if constexpr (std::is_same_v<T, char16_t>) { return pv::CreateChar16(m_value); }
            else if constexpr (std::is_same_v<T, bool>) { return pv::CreateBoolean(m_value); }
            else if constexpr (std::is_same_v<T, hstring>) { return pv::CreateString(m_value); }
            else if constexpr (std::is_same_v<T, guid>) { return pv::CreateGuid(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::DateTime>) { return pv::CreateDateTime(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::TimeSpan>) { return pv::CreateTimeSpan(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::Point>) { return pv::CreatePoint(m_value); }
            else { return nullptr; }
        }

        template <typename To>
        To get_as() const
        {
            if constexpr (std::is_same_v<T, To>)
            {
                return m_value;
            }
            else if constexpr (is_numeric_scalar_v<To> && is_numeric_scalar_v<T>)
            {
                return static_cast<To>(m_value);
            }
            else
            {
                throw hresult_not_implemented();
            }
        }

        template <typename To>
        void get_as(com_array<To> const&) const
        {
            throw hresult_not_implemented();
        }

        T m_value;
    };

    template <typename T>
    struct reference_array : reference_producer<reference_array<T>, T, Windows::Foundation::IReferenceArray<T>, true>
    {
        reference_array(array_view<T const> const& value) : m_value(value.begin(), value.end())
        {
        }

        com_array<T> Value() const
        {
            return com_array<T>(m_value.begin(), m_value.end());
        }

    private:

        template <typename, typename, typename, bool> friend struct reference_producer;

        Windows::Foundation::IInspectable create_property_value() const
        {
            using pv = Windows::Foundation::PropertyValue;

            if constexpr (std::is_same_v<T, std::uint8_t>) { return pv::CreateUInt8Array(m_value); }
            else if constexpr (std::is_same_v<T, std::int16_t>) { return pv::CreateInt16Array(m_value); }
            else if constexpr (std::is_same_v<T, std::uint16_t>) { return pv::CreateUInt16Array(m_value); }
            else if constexpr (std::is_same_v<T, std::int32_t>) { return pv::CreateInt32Array(m_value); }
            else if constexpr (std::is_same_v<T, std::uint32_t>) { return pv::CreateUInt32Array(m_value); }
            else if constexpr (std::is_same_v<T, std::int64_t>) { return pv::CreateInt64Array(m_value); }
            else if constexpr (std::is_same_v<T, std::uint64_t>) { return pv::CreateUInt64Array(m_value); }
            else if constexpr (std::is_same_v<T, float>) { return pv::CreateSingleArray(m_value); }
            else if constexpr (std::is_same_v<T, double>) { return pv::CreateDoubleArray(m_value); }
            else if constexpr (std::is_same_v<T, char16_t>) { return pv::CreateChar16Array(m_value); }
            else if constexpr (std::is_same_v<T, bool>) { return pv::CreateBooleanArray(m_value); }
            else if constexpr (std::is_same_v<T, hstring>) { return pv::CreateStringArray(m_value); }
            else if constexpr (std::is_same_v<T, guid>) { return pv::CreateGuidArray(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::DateTime>) { return pv::CreateDateTimeArray(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::TimeSpan>) { return pv::CreateTimeSpanArray(m_value); }
            else if constexpr (std::is_same_v<T, Windows::Foundation::Point>) { return pv::CreatePointArray(m_value); }
            else { return nullptr; }
        }

        template <typename To>
        To get_as() const
        {
            throw hresult_not_implemented();
        }

        template <typename To>
        void get_as(com_array<To>& value) const
        {
            if constexpr (std::is_same_v<T, To>)
            {
                value = com_array<To>(m_value.begin(), m_value.end());
            }
            else
            {
                throw hresult_not_implemented();
            }
        }

        com_array<T> m_value;
    };

    template <typename T>
    struct reference_traits
    {
        static auto make(T const& value) { return winrt::make<impl::reference<T>>(value); }
        using itf = Windows::Foundation::IReference<T>;
    };

    template <>
    struct reference_traits<Windows::Foundation::IInspectable>
    {
        static auto make(Windows::Foundation::IInspectable const& value) { return Windows::Foundation::PropertyValue::CreateInspectable(value); }
        using itf = Windows::Foundation::IInspectable;
    };

    template <>
    struct reference_traits<GUID>
    {
        static auto make(GUID const& value) { return reference_traits<guid>::make(reinterpret_cast<guid const&>(value)); }
        using itf = Windows::Foundation::IReference<guid>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Size>
    {
        static auto make(Windows::Foundation::Size const& value) { return Windows::Foundation::PropertyValue::CreateSize(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Size>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Rect>
    {
        static auto make(Windows::Foundation::Rect const& value) { return Windows::Foundation::PropertyValue::CreateRect(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Rect>;
    };

    template <>
    struct reference_traits<com_array<std::uint8_t>>
    {
        static auto make(array_view<std::uint8_t const> const& value) { return winrt::make<impl::reference_array<std::uint8_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint8_t>;
    };

    template <>
    struct reference_traits<com_array<std::int16_t>>
    {
        static auto make(array_view<std::int16_t const> const& value) { return winrt::make<impl::reference_array<std::int16_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int16_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint16_t>>
    {
        static auto make(array_view<std::uint16_t const> const& value) { return winrt::make<impl::reference_array<std::uint16_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint16_t>;
    };

    template <>
    struct reference_traits<com_array<std::int32_t>>
    {
        static auto make(array_view<std::int32_t const> const& value) { return winrt::make<impl::reference_array<std::int32_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int32_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint32_t>>
    {
        static auto make(com_array<std::uint32_t> const& value) { return winrt::make<impl::reference_array<std::uint32_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint32_t>;
    };

    template <>
    struct reference_traits<com_array<std::int64_t>>
    {
        static auto make(array_view<std::int64_t const> const& value) { return winrt::make<impl::reference_array<std::int64_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int64_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint64_t>>
    {
        static auto make(array_view<std::uint64_t const> const& value) { return winrt::make<impl::reference_array<std::uint64_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint64_t>;
    };

    template <>
    struct reference_traits<com_array<float>>
    {
        static auto make(array_view<float const> const& value) { return winrt::make<impl::reference_array<float>>(value); }
        using itf = Windows::Foundation::IReferenceArray<float>;
    };

    template <>
    struct reference_traits<com_array<double>>
    {
        static auto make(array_view<double const> const& value) { return winrt::make<impl::reference_array<double>>(value); }
        using itf = Windows::Foundation::IReferenceArray<double>;
    };

    template <>
    struct reference_traits<com_array<char16_t>>
    {
        static auto make(array_view<char16_t const> const& value) { return winrt::make<impl::reference_array<char16_t>>(value); }
        using itf = Windows::Foundation::IReferenceArray<char16_t>;
    };

    template <>
    struct reference_traits<com_array<bool>>
    {
        static auto make(array_view<bool const> const& value) { return winrt::make<impl::reference_array<bool>>(value); }
        using itf = Windows::Foundation::IReferenceArray<bool>;
    };

    template <>
    struct reference_traits<com_array<hstring>>
    {
        static auto make(array_view<hstring const> const& value) { return Windows::Foundation::PropertyValue::CreateStringArray(value); }
        using itf = Windows::Foundation::IReferenceArray<hstring>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::IInspectable>>
    {
        static auto make(array_view<Windows::Foundation::IInspectable const> const& value) { return Windows::Foundation::PropertyValue::CreateInspectableArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::IInspectable>;
    };

    template <>
    struct reference_traits<com_array<guid>>
    {
        static auto make(array_view<guid const> const& value) { return winrt::make<impl::reference_array<guid>>(value); }
        using itf = Windows::Foundation::IReferenceArray<guid>;
    };

    template <>
    struct reference_traits<com_array<GUID>>
    {
        static auto make(array_view<GUID const> const& value) { return winrt::make<impl::reference_array<guid>>(reinterpret_cast<array_view<guid const> const&>(value)); }
        using itf = Windows::Foundation::IReferenceArray<guid>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::DateTime>>
    {
        static auto make(array_view<Windows::Foundation::DateTime const> const& value) { return Windows::Foundation::PropertyValue::CreateDateTimeArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::TimeSpan>>
    {
        static auto make(array_view<Windows::Foundation::TimeSpan const> const& value) { return Windows::Foundation::PropertyValue::CreateTimeSpanArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Point>>
    {
        static auto make(array_view<Windows::Foundation::Point const> const& value) { return winrt::make<impl::reference_array<Windows::Foundation::Point>>(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Point>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Size>>
    {
        static auto make(array_view<Windows::Foundation::Size const> const& value) { return Windows::Foundation::PropertyValue::CreateSizeArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Size>;
    };

    template <>
    struct reference_traits<com_array<Windows::Foundation::Rect>>
    {
        static auto make(array_view<Windows::Foundation::Rect const> const& value) { return Windows::Foundation::PropertyValue::CreateRectArray(value); }
        using itf = Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>;
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    bool operator==(IReference<T> const& left, IReference<T> const& right)
    {
        if (get_abi(left) == get_abi(right))
        {
            return true;
        }

        if (!left || !right)
        {
            return false;
        }

        return left.Value() == right.Value();
    }

    template <typename T>
    bool operator!=(IReference<T> const& left, IReference<T> const& right)
    {
        return !(left == right);
    }
}

WINRT_EXPORT namespace winrt::impl
{
    template <typename T, typename From>
    T unbox_value_type(From&& value)
    {
        if (!value)
        {
            throw hresult_no_interface();
        }
        if constexpr (std::is_enum_v<T>)
        {
            if (auto temp = value.template try_as<Windows::Foundation::IReference<T>>())
            {
                return temp.Value();
            }
            else
            {
                return static_cast<T>(value.template as<Windows::Foundation::IReference<std::underlying_type_t<T>>>().Value());
            }
        }
        else if constexpr (std::is_same_v<T, com_array<GUID>>)
        {
            T result;
            reinterpret_cast<com_array<guid>&>(result) = value.template as<typename impl::reference_traits<T>::itf>().Value();
            return result;
        }
        else
        {
            return value.template as<typename impl::reference_traits<T>::itf>().Value();
        }
    }

    template <typename T, typename Ret = T, typename From, typename U>
    Ret unbox_value_type_or(From&& value, U&& default_value)
    {
        if constexpr (std::is_enum_v<T>)
        {
            if (auto temp = value.template try_as<Windows::Foundation::IReference<T>>())
            {
                return temp.Value();
            }

            if (auto temp = value.template try_as<Windows::Foundation::IReference<std::underlying_type_t<T>>>())
            {
                return static_cast<T>(temp.Value());
            }
        }
        else if constexpr (std::is_same_v<T, com_array<GUID>>)
        {
            if (auto temp = value.template try_as<typename impl::reference_traits<T>::itf>())
            {
                T result;
                reinterpret_cast<com_array<guid>&>(result) = temp.Value();
                return result;
            }
        }
        else
        {
            if (auto temp = value.template try_as<typename impl::reference_traits<T>::itf>())
            {
                return temp.Value();
            }
        }
        return default_value;
    }

    template <typename To, typename From, std::enable_if_t<!is_com_interface_v<To>, int>>
    auto as(From* ptr)
    {
        if constexpr (impl::is_com_interface_v<From>)
        {
            return unbox_value_type<To>(reinterpret_cast<Windows::Foundation::IUnknown const&>(ptr));
        }
        else
        {
            return unbox_value_type<To>(reinterpret_cast<com_ptr<From> const&>(ptr));
        }
    }

    template <typename To, typename From, std::enable_if_t<!is_com_interface_v<To>, int>>
    auto try_as(From* ptr) noexcept
    {
        using type = std::conditional_t<impl::is_com_interface_v<From>, Windows::Foundation::IUnknown, com_ptr<From>>;
        return unbox_value_type_or<To, std::optional<To>>(reinterpret_cast<type const&>(ptr), std::nullopt);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T, std::enable_if_t<std::is_constructible_v<hstring, T>, int> = 0>
    Windows::Foundation::IInspectable box_value(T&& value)
    {
        return Windows::Foundation::IReference<hstring>(hstring(std::forward<T>(value)));
    }

    template <typename T, std::enable_if_t<!std::is_constructible_v<hstring, T>, int> = 0>
    Windows::Foundation::IInspectable box_value(T const& value)
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
        {
            return value;
        }
        else
        {
            return impl::reference_traits<T>::make(value);
        }
    }

    template <typename T>
    T unbox_value(Windows::Foundation::IInspectable const& value)
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
        {
            return value.as<T>();
        }
        else
        {
            return impl::unbox_value_type<T>(value);
        }
    }

    template <typename T = hstring, std::enable_if_t<std::is_same_v<T, hstring>, int> = 0>
    hstring unbox_value_or(Windows::Foundation::IInspectable const& value, param::hstring const& default_value)
    {
        if (value)
        {
            if (auto temp = value.try_as<Windows::Foundation::IReference<hstring>>())
            {
                return temp.Value();
            }
        }

        return *(hstring*)(&default_value);
    }

    template <typename T, std::enable_if_t<!std::is_same_v<T, hstring>, int> = 0>
    T unbox_value_or(Windows::Foundation::IInspectable const& value, T const& default_value)
    {
        if (value)
        {
            if constexpr (std::is_base_of_v<Windows::Foundation::IInspectable, T>)
            {
                if (auto temp = value.try_as<T>())
                {
                    return temp;
                }
            }
            else
            {
                return impl::unbox_value_type_or<T>(value, default_value);
            }
        }
        return default_value;
    }

    template <typename T>
    using optional = typename impl::reference_traits<T>::itf;
}
