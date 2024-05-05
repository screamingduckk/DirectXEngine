#pragma once
#include <d3d11.h>
#include "Prerequisites.h"

class IndexBuffer


{
public:
	IndexBuffer(void* list_indices, UINT size_list, RenderSystem* system);

	UINT getSizeIndexList();
	
	~IndexBuffer();
private:
	UINT m_size_list;
private:
	ID3D11Buffer* m_buffer;
	ID3D11InputLayout* m_layout;
	RenderSystem* m_system = nullptr;
private:
	friend class DeviceContext;
};
