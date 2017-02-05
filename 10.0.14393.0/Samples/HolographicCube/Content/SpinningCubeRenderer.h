#pragma once

#include "..\Common\DeviceResources.h"
#include "..\Common\StepTimer.h"
#include "ShaderStructures.h"

#include "winrt/Windows.UI.Input.Spatial.h"

namespace HolographicCube
{
    // This sample renderer instantiates a basic rendering pipeline.
    class SpinningCubeRenderer
    {
    public:
        SpinningCubeRenderer(const std::shared_ptr<DX::DeviceResources>& deviceResources);
        winrt::Windows::Foundation::IAsyncAction CreateDeviceDependentResources();
        void ReleaseDeviceDependentResources();
        void Update(const DX::StepTimer& timer);
        void Render();

        // Repositions the sample hologram.
        void PositionHologram(winrt::Windows::UI::Input::Spatial::SpatialPointerPose pointerPose);

        // Property accessors.
        void SetPosition(winrt::Windows::Foundation::Numerics::float3 pos) { m_position = pos;  }
        winrt::Windows::Foundation::Numerics::float3 GetPosition()         { return m_position; }

    private:
        // Cached pointer to device resources.
        std::shared_ptr<DX::DeviceResources>            m_deviceResources;

        // Direct3D resources for cube geometry.
        winrt::com_ptr<ID3D11InputLayout>       m_inputLayout;
        winrt::com_ptr<ID3D11Buffer>            m_vertexBuffer;
        winrt::com_ptr<ID3D11Buffer>            m_indexBuffer;
        winrt::com_ptr<ID3D11VertexShader>      m_vertexShader;
        winrt::com_ptr<ID3D11GeometryShader>    m_geometryShader;
        winrt::com_ptr<ID3D11PixelShader>       m_pixelShader;
        winrt::com_ptr<ID3D11Buffer>            m_modelConstantBuffer;

        // System resources for cube geometry.
        ModelConstantBuffer                             m_modelConstantBufferData;
        int32_t                                          m_indexCount = 0;

        // Variables used with the rendering loop.
        bool                                            m_loadingComplete = false;
        float                                           m_degreesPerSecond = 45.f;
        winrt::Windows::Foundation::Numerics::float3    m_position = { 0.f, 0.f, -2.f };

        // If the current D3D Device supports VPRT, we can avoid using a geometry
        // shader just to set the render target array index.
        bool                                            m_usingVprtShaders = false;
    };
}
