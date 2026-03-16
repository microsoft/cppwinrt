
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup
{
    template <typename D>
    struct ComponentConnectorT : D
    {
        using composable_base = typename D::composable_base;

        void InitializeComponent()
        {
            if constexpr (m_has_connectable_base)
            {
                m_dispatch_base = true;
                composable_base::InitializeComponent();
                m_dispatch_base = false;
            }
            D::InitializeComponent();
        }

        void Connect(std::int32_t connectionId, winrt::Windows::Foundation::IInspectable const& target)
        {
            if constexpr (m_has_connectable_base)
            {
                if (m_dispatch_base)
                {
                    composable_base::Connect(connectionId, target);
                    return;
                }
            }
            D::Connect(connectionId, target);
        }

        auto GetBindingConnector(std::int32_t connectionId, winrt::Windows::Foundation::IInspectable const& target)
        {
            if constexpr (m_has_connectable_base)
            {
                if (m_dispatch_base)
                {
                    return composable_base::GetBindingConnector(connectionId, target);
                }
            }
            return D::GetBindingConnector(connectionId, target);
        }

    private:
        static constexpr bool m_has_connectable_base{
            impl::has_initializer<composable_base>::value &&
            impl::has_interface<D, IComponentConnector>() };

        bool m_dispatch_base{};
    };
}
