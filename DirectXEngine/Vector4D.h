#pragma once

class Vector4D
{

public:
	Vector4D() : m_x(0), m_y(0), m_z(0), m_w(0)
	{

	}

	Vector4D(float x, float y, float z, float w) : m_x(x), m_y(y), m_z(z), m_w(w)
	{

	}

	Vector4D(const Vector4D& vector) : m_x(vector.m_x), m_y(vector.m_y), m_z(vector.m_z), m_w(vector.m_w)
	{

	}

	static Vector4D lerp(const Vector4D& start, const Vector4D& end, float delta)
	{
		Vector4D v;

		v.m_x = start.m_x * (1.0f - delta) + end.m_x * (delta);
		v.m_y = start.m_y * (1.0f - delta) + end.m_y * (delta);
		v.m_z = start.m_z * (1.0f - delta) + end.m_z * (delta);
		v.m_w = start.m_w * (1.0f - delta) + end.m_w * (delta);
		return v;
	};


	void cross(Vector4D& v1, Vector4D& v2, Vector4D& v3)
	{
		this->m_x = v1.m_y * (v2.m_z * v3.m_w - v3.m_z * v2.m_w) - v1.m_z * (v2.m_y * v3.m_w - v3.m_y * v2.m_w) + v1.m_w * (v2.m_y * v3.m_z - v2.m_z * v3.m_y);
		this->m_y = -(v1.m_x * (v2.m_z * v3.m_w - v3.m_z * v2.m_w) - v1.m_z * (v2.m_x * v3.m_w - v3.m_x * v2.m_w) + v1.m_w * (v2.m_x * v3.m_z - v3.m_x * v2.m_z));
		this->m_z = v1.m_x * (v2.m_y * v3.m_w - v3.m_y * v2.m_w) - v1.m_y * (v2.m_x * v3.m_w - v3.m_x * v2.m_w) + v1.m_w * (v2.m_x * v3.m_y - v3.m_x * v2.m_y);
		this->m_w = -(v1.m_x * (v2.m_y * v3.m_z - v3.m_y * v2.m_z) - v1.m_y * (v2.m_x * v3.m_z - v3.m_x * v2.m_z) + v1.m_z * (v2.m_x * v3.m_y - v3.m_x * v2.m_y));
	}


	~Vector4D()
	{

	}


public:
	float m_x, m_y, m_z, m_w;
};