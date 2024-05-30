#pragma once
#include "Vector3D.h"
#include "Vector2D.h"

class VertexMesh
{

public:
	VertexMesh() : m_position(), m_texcoord(), m_normals()
	{

	}

	VertexMesh(Vector3D position, Vector2D texcoord, Vector3D normals) : m_position(position), m_texcoord(texcoord), m_normals(normals)
	{

	}

	VertexMesh(const VertexMesh& vertex) : m_position(vertex.m_position), m_texcoord(vertex.m_texcoord), m_normals(vertex.m_normals)
	{

	}

	~VertexMesh()
	{

	}


public:
	Vector3D m_position;
	Vector2D m_texcoord;
	Vector3D m_normals;
	};