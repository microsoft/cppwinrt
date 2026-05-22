#include "pch.h"

#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.Shapes.h>

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Shapes;

static_assert(impl::has_flat_cache_v<Path>);
static_assert(impl::has_flat_interface_v<Path, IPath>);
static_assert(impl::has_flat_interface_v<Path, IShape>);
static_assert(impl::has_flat_interface_v<Path, IFrameworkElement>);
static_assert(impl::has_flat_interface_v<Path, IUIElement>);
static_assert(impl::has_flat_interface_v<Path, IDependencyObject>);
static_assert(std::is_convertible_v<Path, Shape>);
static_assert(std::is_convertible_v<Path, FrameworkElement>);
static_assert(std::is_convertible_v<Path, UIElement>);
static_assert(std::is_convertible_v<Path, DependencyObject>);
static_assert(std::is_convertible_v<Path, IPath>);
static_assert(std::is_convertible_v<Path, IShape>);
static_assert(std::is_convertible_v<Path, IFrameworkElement>);
static_assert(std::is_convertible_v<Path, IUIElement>);
static_assert(std::is_convertible_v<Path, IDependencyObject>);

static_assert(impl::has_flat_cache_v<AcrylicBrush>);
static_assert(impl::has_flat_interface_v<AcrylicBrush, IAcrylicBrush>);
static_assert(impl::has_flat_interface_v<AcrylicBrush, IXamlCompositionBrushBase>);
static_assert(impl::has_flat_interface_v<AcrylicBrush, IBrush>);
static_assert(impl::has_flat_interface_v<AcrylicBrush, IDependencyObject>);
static_assert(std::is_convertible_v<AcrylicBrush, XamlCompositionBrushBase>);
static_assert(std::is_convertible_v<AcrylicBrush, Brush>);
static_assert(std::is_convertible_v<AcrylicBrush, DependencyObject>);
static_assert(std::is_convertible_v<AcrylicBrush, IAcrylicBrush>);
static_assert(std::is_convertible_v<AcrylicBrush, IXamlCompositionBrushBase>);
static_assert(std::is_convertible_v<AcrylicBrush, IBrush>);
static_assert(std::is_convertible_v<AcrylicBrush, IDependencyObject>);

TEST_CASE("thunked_composable_type_traits")
{
    STATIC_REQUIRE(impl::has_flat_cache_v<Path>);
    STATIC_REQUIRE(impl::has_flat_cache_v<AcrylicBrush>);
}
