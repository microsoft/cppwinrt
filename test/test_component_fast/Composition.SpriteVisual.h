#pragma once
#include "Composition.SpriteVisual.g.h"
#include "Composition.Visual.h"

namespace winrt::test_component_fast::Composition::implementation
{
    struct SpriteVisual : SpriteVisualT<SpriteVisual, implementation::Visual>
    {
        SpriteVisual(Composition::Compositor const& compositor);

        void Brush();
        void Shadow();
    };
}
