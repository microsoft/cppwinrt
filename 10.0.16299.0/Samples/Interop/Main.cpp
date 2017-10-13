#include "pch.h"

template <typename T>
T^ to_cx(winrt::Windows::Foundation::IUnknown const& from)
{
    return safe_cast<T^>(reinterpret_cast<Platform::Object^>(winrt::get_abi(from)));
}

template <typename T>
T from_cx(Platform::Object^ from)
{
    T to{ nullptr };

    winrt::check_hresult(reinterpret_cast<::IUnknown*>(from)->QueryInterface(winrt::guid_of<T>(),
                                                                             reinterpret_cast<void**>(winrt::put_abi(to))));

    return to;
}

template <typename T>
T from_abi(::IUnknown* from)
{
    T to{ nullptr };

    winrt::check_hresult(from->QueryInterface(winrt::guid_of<T>(),
                                              reinterpret_cast<void**>(winrt::put_abi(to))));

    return to;
}

namespace cx
{
    using namespace Windows::Foundation;
    using namespace Windows::UI::Composition;
}

namespace winrt
{
    using namespace Windows::Foundation;
    using namespace Windows::UI::Composition;
}

namespace abi
{
    using namespace ABI::Windows::Foundation;
    using namespace ABI::Windows::UI::Composition;
};

void ui_sample()
{
    winrt::Compositor compositor;
    winrt::Visual cpp = compositor.CreateContainerVisual();
    cpp.Opacity(0.5f);
    printf("opacity: %.2f\n", cpp.Opacity());

    cx::Visual^ cx = to_cx<cx::Visual>(cpp);
    printf("opacity: %.2f\n", cx->Opacity);

    winrt::Visual cpp_from_cx = from_cx<winrt::Visual>(cx);
    printf("opacity: %.2f\n", cpp_from_cx.Opacity());

    winrt::com_ptr<abi::IVisual> ptr = cpp.as<abi::IVisual>();
    float opacity{};
    winrt::check_hresult(ptr->get_Opacity(&opacity));
    printf("opacity: %.2f\n", opacity);

    winrt::Visual cpp_from_abi = from_abi<winrt::Visual>(ptr.get());
    printf("opacity: %.2f\n", cpp_from_abi.Opacity());
}

void uri_sample()
{
    winrt::Uri cpp(L"http://moderncpp.com/");
    printf("C++/WinRT: %ls\n", cpp.Domain().c_str());

    cx::Uri ^ cx = to_cx<cx::Uri>(cpp);
    printf("C++/CX: %ls\n", cx->Domain->Data());

    winrt::com_ptr<abi::IUriRuntimeClass> ptr = cpp.as<abi::IUriRuntimeClass>();
    winrt::hstring domain;
    winrt::check_hresult(ptr->get_Domain(put_abi(domain)));
    printf("ABI: %ls\n", domain.c_str());

    winrt::Uri cpp_from_cx = from_cx<winrt::Uri>(cx);
    WINRT_ASSERT(cpp.Domain() == cpp_from_cx.Domain());
    WINRT_ASSERT(cpp == cpp_from_cx);

    winrt::Uri cpp_from_abi = from_abi<winrt::Uri>(ptr.get());
    WINRT_ASSERT(cpp.Domain() == cpp_from_abi.Domain());
    WINRT_ASSERT(cpp == cpp_from_abi);
}

int main()
{
    winrt::init_apartment();

    uri_sample();
    ui_sample();
}
