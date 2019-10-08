#pragma once
#include "Composition.CompositionObject.g.h"

namespace winrt::test_component_fast::Composition::implementation
{
    struct CompositionObject : CompositionObjectT<CompositionObject>
    {
        CompositionObject(Composition::Compositor const& compositor);

        void Close();
        Composition::Compositor Compositor();
        void StartAnimationGroup();

    protected:

        Composition::Compositor m_compositor{ nullptr };
    };
}
