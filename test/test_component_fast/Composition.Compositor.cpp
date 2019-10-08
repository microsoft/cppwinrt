#include "pch.h"
#include "Composition.Compositor.h"
#include "Composition.Compositor.g.cpp"
#include "Composition.SpriteVisual.h"

namespace winrt::test_component_fast::Composition::implementation
{
    Composition::SpriteVisual Compositor::CreateSpriteVisual()
    {
        return make<SpriteVisual>(*this);
    }
}
