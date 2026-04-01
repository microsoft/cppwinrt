
WINRT_EXPORT namespace winrt::impl
{
    template <typename T>
    struct reference : implements<reference<T>, Windows::Foundation::IReference<T>, Windows::Foundation::IPropertyValue>
    {
        reference(T const& value) : m_value(value)
        {
        }

        T Value() const
        {
            return m_value;
        }

        Windows::Foundation::PropertyType Type() const noexcept
        {
            return Windows::Foundation::PropertyType::OtherType;
        }

        static constexpr bool IsNumericScalar() noexcept
        {
            return std::is_arithmetic_v<T> || std::is_enum_v<T>;
        }

        std::uint8_t GetUInt8() const
        {
            return to_scalar<std::uint8_t>();
        }

        std::int16_t GetInt16() const
        {
            return to_scalar<std::int16_t>();
        }

        std::uint16_t GetUInt16() const
        {
            return to_scalar<std::uint16_t>();
        }

        std::int32_t GetInt32() const
        {
            return to_scalar<std::int32_t>();
        }

        std::uint32_t GetUInt32() const
        {
            return to_scalar<std::uint32_t>();
        }

        std::int64_t GetInt64() const
        {
            return to_scalar<std::int64_t>();
        }

        std::uint64_t GetUInt64() const
        {
            return to_scalar<std::uint64_t>();
        }

        float GetSingle() { throw hresult_not_implemented(); }
        double GetDouble() { throw hresult_not_implemented(); }
        char16_t GetChar16() { throw hresult_not_implemented(); }
        bool GetBoolean() { throw hresult_not_implemented(); }
        hstring GetString() { throw hresult_not_implemented(); }
        guid GetGuid() { throw hresult_not_implemented(); }
        Windows::Foundation::DateTime GetDateTime() { throw hresult_not_implemented(); }
        Windows::Foundation::TimeSpan GetTimeSpan() { throw hresult_not_implemented(); }
        Windows::Foundation::Point GetPoint() { throw hresult_not_implemented(); }
        Windows::Foundation::Size GetSize() { throw hresult_not_implemented(); }
        Windows::Foundation::Rect GetRect() { throw hresult_not_implemented(); }
        void GetUInt8Array(com_array<std::uint8_t> &) { throw hresult_not_implemented(); }
        void GetInt16Array(com_array<std::int16_t> &) { throw hresult_not_implemented(); }
        void GetUInt16Array(com_array<std::uint16_t> &) { throw hresult_not_implemented(); }
        void GetInt32Array(com_array<std::int32_t> &) { throw hresult_not_implemented(); }
        void GetUInt32Array(com_array<std::uint32_t> &) { throw hresult_not_implemented(); }
        void GetInt64Array(com_array<std::int64_t> &) { throw hresult_not_implemented(); }
        void GetUInt64Array(com_array<std::uint64_t> &) { throw hresult_not_implemented(); }
        void GetSingleArray(com_array<float> &) { throw hresult_not_implemented(); }
        void GetDoubleArray(com_array<double> &) { throw hresult_not_implemented(); }
        void GetChar16Array(com_array<char16_t> &) { throw hresult_not_implemented(); }
        void GetBooleanArray(com_array<bool> &) { throw hresult_not_implemented(); }
        void GetStringArray(com_array<hstring> &) { throw hresult_not_implemented(); }
        void GetInspectableArray(com_array<Windows::Foundation::IInspectable> &) { throw hresult_not_implemented(); }
        void GetGuidArray(com_array<guid> &) { throw hresult_not_implemented(); }
        void GetDateTimeArray(com_array<Windows::Foundation::DateTime> &) { throw hresult_not_implemented(); }
        void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan> &) { throw hresult_not_implemented(); }
        void GetPointArray(com_array<Windows::Foundation::Point> &) { throw hresult_not_implemented(); }
        void GetSizeArray(com_array<Windows::Foundation::Size> &) { throw hresult_not_implemented(); }
        void GetRectArray(com_array<Windows::Foundation::Rect> &) { throw hresult_not_implemented(); }

    private:

        template <typename To>
        To to_scalar() const
        {
            if constexpr (IsNumericScalar())
            {
                return static_cast<To>(m_value);
            }
            else
            {
                throw hresult_not_implemented();
            }
        }

        T m_value;
    };

    template <typename T>
    struct reference_traits
    {
        static auto make(T const& value) { return winrt::make<impl::reference<T>>(value); }
        using itf = Windows::Foundation::IReference<T>;
    };

    template <>
    struct reference_traits<std::uint8_t>
    {
        static auto make(std::uint8_t value) { return Windows::Foundation::PropertyValue::CreateUInt8(value); }
        using itf = Windows::Foundation::IReference<std::uint8_t>;
    };

    template <>
    struct reference_traits<std::uint16_t>
    {
        static auto make(std::uint16_t value) { return Windows::Foundation::PropertyValue::CreateUInt16(value); }
        using itf = Windows::Foundation::IReference<std::uint16_t>;
    };

    template <>
    struct reference_traits<std::int16_t>
    {
        static auto make(std::int16_t value) { return Windows::Foundation::PropertyValue::CreateInt16(value); }
        using itf = Windows::Foundation::IReference<std::int16_t>;
    };

    template <>
    struct reference_traits<std::uint32_t>
    {
        static auto make(std::uint32_t value) { return Windows::Foundation::PropertyValue::CreateUInt32(value); }
        using itf = Windows::Foundation::IReference<std::uint32_t>;
    };

    template <>
    struct reference_traits<std::int32_t>
    {
        static auto make(std::int32_t value) { return Windows::Foundation::PropertyValue::CreateInt32(value); }
        using itf = Windows::Foundation::IReference<std::int32_t>;
    };

    template <>
    struct reference_traits<std::uint64_t>
    {
        static auto make(std::uint64_t value) { return Windows::Foundation::PropertyValue::CreateUInt64(value); }
        using itf = Windows::Foundation::IReference<std::uint64_t>;
    };

    template <>
    struct reference_traits<std::int64_t>
    {
        static auto make(std::int64_t value) { return Windows::Foundation::PropertyValue::CreateInt64(value); }
        using itf = Windows::Foundation::IReference<std::int64_t>;
    };

    template <>
    struct reference_traits<float>
    {
        static auto make(float value) { return Windows::Foundation::PropertyValue::CreateSingle(value); }
        using itf = Windows::Foundation::IReference<float>;
    };

    template <>
    struct reference_traits<double>
    {
        static auto make(double value) { return Windows::Foundation::PropertyValue::CreateDouble(value); }
        using itf = Windows::Foundation::IReference<double>;
    };

    template <>
    struct reference_traits<char16_t>
    {
        static auto make(char16_t value) { return Windows::Foundation::PropertyValue::CreateChar16(value); }
        using itf = Windows::Foundation::IReference<char16_t>;
    };

    template <>
    struct reference_traits<bool>
    {
        static auto make(bool value) { return Windows::Foundation::PropertyValue::CreateBoolean(value); }
        using itf = Windows::Foundation::IReference<bool>;
    };

    template <>
    struct reference_traits<hstring>
    {
        static auto make(hstring const& value) { return Windows::Foundation::PropertyValue::CreateString(value); }
        using itf = Windows::Foundation::IReference<hstring>;
    };

    template <>
    struct reference_traits<Windows::Foundation::IInspectable>
    {
        static auto make(Windows::Foundation::IInspectable const& value) { return Windows::Foundation::PropertyValue::CreateInspectable(value); }
        using itf = Windows::Foundation::IInspectable;
    };

    template <>
    struct reference_traits<guid>
    {
        static auto make(guid const& value) { return Windows::Foundation::PropertyValue::CreateGuid(value); }
        using itf = Windows::Foundation::IReference<guid>;
    };

    template <>
    struct reference_traits<GUID>
    {
        static auto make(GUID const& value) { return Windows::Foundation::PropertyValue::CreateGuid(reinterpret_cast<guid const&>(value)); }
        using itf = Windows::Foundation::IReference<guid>;
    };

    template <>
    struct reference_traits<Windows::Foundation::DateTime>
    {
        static auto make(Windows::Foundation::DateTime value) { return Windows::Foundation::PropertyValue::CreateDateTime(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::DateTime>;
    };

    template <>
    struct reference_traits<Windows::Foundation::TimeSpan>
    {
        static auto make(Windows::Foundation::TimeSpan value) { return Windows::Foundation::PropertyValue::CreateTimeSpan(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::TimeSpan>;
    };

    template <>
    struct reference_traits<Windows::Foundation::Point>
    {
        static auto make(Windows::Foundation::Point const& value) { return Windows::Foundation::PropertyValue::CreatePoint(value); }
        using itf = Windows::Foundation::IReference<Windows::Foundation::Point>;
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
        static auto make(array_view<std::uint8_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt8Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint8_t>;
    };

    template <>
    struct reference_traits<com_array<std::int16_t>>
    {
        static auto make(array_view<std::int16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int16_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint16_t>>
    {
        static auto make(array_view<std::uint16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint16_t>;
    };

    template <>
    struct reference_traits<com_array<std::int32_t>>
    {
        static auto make(array_view<std::int32_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt32Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int32_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint32_t>>
    {
        static auto make(com_array<std::uint32_t> const& value) { return Windows::Foundation::PropertyValue::CreateUInt32Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint32_t>;
    };

    template <>
    struct reference_traits<com_array<std::int64_t>>
    {
        static auto make(array_view<std::int64_t const> const& value) { return Windows::Foundation::PropertyValue::CreateInt64Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::int64_t>;
    };

    template <>
    struct reference_traits<com_array<std::uint64_t>>
    {
        static auto make(array_view<std::uint64_t const> const& value) { return Windows::Foundation::PropertyValue::CreateUInt64Array(value); }
        using itf = Windows::Foundation::IReferenceArray<std::uint64_t>;
    };

    template <>
    struct reference_traits<com_array<float>>
    {
        static auto make(array_view<float const> const& value) { return Windows::Foundation::PropertyValue::CreateSingleArray(value); }
        using itf = Windows::Foundation::IReferenceArray<float>;
    };

    template <>
    struct reference_traits<com_array<double>>
    {
        static auto make(array_view<double const> const& value) { return Windows::Foundation::PropertyValue::CreateDoubleArray(value); }
        using itf = Windows::Foundation::IReferenceArray<double>;
    };

    template <>
    struct reference_traits<com_array<char16_t>>
    {
        static auto make(array_view<char16_t const> const& value) { return Windows::Foundation::PropertyValue::CreateChar16Array(value); }
        using itf = Windows::Foundation::IReferenceArray<char16_t>;
    };

    template <>
    struct reference_traits<com_array<bool>>
    {
        static auto make(array_view<bool const> const& value) { return Windows::Foundation::PropertyValue::CreateBooleanArray(value); }
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
        static auto make(array_view<guid const> const& value) { return Windows::Foundation::PropertyValue::CreateGuidArray(value); }
        using itf = Windows::Foundation::IReferenceArray<guid>;
    };

    template <>
    struct reference_traits<com_array<GUID>>
    {
        static auto make(array_view<GUID const> const& value) { return Windows::Foundation::PropertyValue::CreateGuidArray(reinterpret_cast<array_view<guid const> const&>(value)); }
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
        static auto make(array_view<Windows::Foundation::Point const> const& value) { return Windows::Foundation::PropertyValue::CreatePointArray(value); }
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
    inline Windows::Foundation::IInspectable box_value(param::hstring const& value)
    {
        return Windows::Foundation::IReference<hstring>(*(hstring*)(&value));
    }

    template <typename T, std::enable_if_t<!std::is_convertible_v<T, param::hstring>, int> = 0>
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
