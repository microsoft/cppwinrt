#include "pch.h"
#include "FastInputVector.h"

namespace winrt::Component::implementation
{
    using namespace Windows::Foundation::Collections;

    FastInputVector::FastInputVector(IVectorView<hstring> const& in) :
        m_container(begin(in), end(in))
    {
    }

    void FastInputVector::Close()
    {
        throw hresult_not_implemented();
    }
}
