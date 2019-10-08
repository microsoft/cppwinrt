#pragma once
#include "Composition.Compositor.g.h"

namespace winrt::test_component_fast::Composition::implementation
{
    struct Compositor : CompositorT<Compositor>
    {
        Compositor() = default;

        SpriteVisual CreateSpriteVisual();
    };
}
namespace winrt::test_component_fast::Composition::factory_implementation
{
    struct Compositor : CompositorT<Compositor, implementation::Compositor>
    {
    };
}
