
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    bool operator==(IReference<T> const& left, IReference<T> const& right);

    template <typename T>
    bool operator!=(IReference<T> const& left, IReference<T> const& right);
}
