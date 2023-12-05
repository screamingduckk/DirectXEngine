#include "DeviceContext.h"



DeviceContext::DeviceContext(ID3D11DeviceContext* device_context) : m_device_context(device_context)
{
}

bool DeviceContext::clearRenderTargetColor(SwapChain* swap_chain, float red, float green, float blue, float alpha)
{
	FLOAT clear_colour[] = { red, green, blue, alpha };
	m_device_context->ClearRenderTargetView();

	return true;
}

bool DeviceContext::release()
{
	m_device_context->Release();
	delete this;

	return true;
}

DeviceContext::~DeviceContext()
{
}
