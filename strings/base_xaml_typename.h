
namespace winrt::impl
{
    template <typename T>
    struct xaml_typename_name
    {
        static hstring value() noexcept
        {
            return name_of<T>();
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Point>
    {
        static hstring value() noexcept
        {
            return L"Point";
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Size>
    {
        static hstring value() noexcept
        {
            return L"Size";
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Rect>
    {
        static hstring value() noexcept
        {
            return L"Rect";
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::DateTime>
    {
        static hstring value() noexcept
        {
            return L"DateTime";
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::TimeSpan>
    {
        static hstring value() noexcept
        {
            return L"TimeSpan";
        }
    };

    template <typename T>
    struct xaml_typename_kind
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Metadata;
    };
    template<>
    struct xaml_typename_kind<bool>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<char16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<float>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<double>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<hstring>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<guid>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    inline Windows::UI::Xaml::Interop::TypeName xaml_typename()
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        static const Windows::UI::Xaml::Interop::TypeName name{ impl::xaml_typename_name<T>::value(), impl::xaml_typename_kind<T>::value };
        return name;
    }
}
