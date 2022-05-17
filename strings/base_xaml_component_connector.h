
WINRT_EXPORT namespace winrt::%::UI::Xaml::Markup
{
    template <typename D>
    struct ComponentConnectorT : D
    {
        using composable_base = typename D::composable_base;

        void InitializeComponent()
        {
            if constexpr (has_connectable_base)
            {
                _dispatch_base = true;
                composable_base::InitializeComponent();
                _dispatch_base = false;
            }
            D::InitializeComponent();
        }

        void Connect(int32_t connectionId, Windows::Foundation::IInspectable const& target)
        {
            if constexpr (has_connectable_base)
            {
                if (_dispatch_base)
                {
                    composable_base::Connect(connectionId, target);
                    return;
                }
            }
            D::Connect(connectionId, target);
        }

        auto GetBindingConnector(int32_t connectionId, Windows::Foundation::IInspectable const& target)
        {
            if constexpr (has_connectable_base)
            {
                if (_dispatch_base)
                {
                    return composable_base::GetBindingConnector(connectionId, target);
                }
            }
            return D::GetBindingConnector(connectionId, target);
        }

    private:
        static constexpr bool has_connectable_base{
            impl::has_initializer<composable_base>::value &&
            impl::has_interface<D, IComponentConnector>() &&
            impl::has_interface<D, IComponentConnector2>() };

        bool _dispatch_base{};
    };
}
