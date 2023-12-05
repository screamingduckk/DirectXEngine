#pragma once
#include <d3d11.h>

class SwapChain
{
public:
	SwapChain();
	bool init(HWND hwnd, UINT width, UINT height);
	bool release();
	~SwapChain();
private:
	IDXGISwapChain * m_swap_chain;
	ID3D11RenderTargetView* m_rtv;
	ID3D11RenderTargetView* m_rtv;

};

