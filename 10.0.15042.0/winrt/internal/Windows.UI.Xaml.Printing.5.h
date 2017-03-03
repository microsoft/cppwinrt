// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Printing {

template <typename D, typename ... Interfaces> struct PrintDocumentT :
    overrides<D, Windows::Foundation::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Printing::IPrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = PrintDocument;

protected:

    PrintDocumentT()
    {
        get_activation_factory<PrintDocument, IPrintDocumentFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

}
