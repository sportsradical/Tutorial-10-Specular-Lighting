////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.cpp
////////////////////////////////////////////////////////////////////////////////
#include "lightclass.h"


LightClass::LightClass()
{
}


LightClass::LightClass(const LightClass& other)
{
}


LightClass::~LightClass()
{
}

void LightClass::SetSpecularColor(float x, float y, float z, float w)
{
	m_specColor = XMFLOAT4(x, y, z, w);
}

void LightClass::SetSpecularPower(float power)
{
	m_sPecularColorPower = power;
}


void LightClass::SetAmbientColor(float x, float y, float z, float w)
{
	m_anbienteColor = XMFLOAT4(x, y, z, w);
}

void LightClass::SetDiffuseColor(float red, float green, float blue, float alpha)
{
	m_diffuseColor = XMFLOAT4(red, green, blue, alpha);
}


void LightClass::SetDirection(float x, float y, float z)
{
	m_direction = XMFLOAT3(x, y, z);
}

XMFLOAT4 LightClass::GetSpecularColor()
{
	return m_specColor;
}

float LightClass::GetSpecularPower()
{
	return m_sPecularColorPower;
}


XMFLOAT4 LightClass::GetAmbientColor()
{
	return m_anbienteColor;
}

XMFLOAT4 LightClass::GetDiffuseColor()
{
	return m_diffuseColor;
}


XMFLOAT3 LightClass::GetDirection()
{
	return m_direction;
}