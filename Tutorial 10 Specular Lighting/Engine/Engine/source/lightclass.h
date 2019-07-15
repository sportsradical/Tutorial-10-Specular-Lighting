////////////////////////////////////////////////////////////////////////////////
// Filename: lightclass.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _LIGHTCLASS_H_
#define _LIGHTCLASS_H_


//////////////
// INCLUDES //
//////////////

#include <DirectXMath.h>
using namespace DirectX;



////////////////////////////////////////////////////////////////////////////////
// Class name: LightClass
////////////////////////////////////////////////////////////////////////////////
class LightClass
{
public:
	LightClass();
	LightClass(const LightClass& other);
	~LightClass();

	void SetSpecularColor(float x, float y, float z, float w);
	void SetSpecularPower(float power);


	void SetAmbientColor(float x, float y, float z, float w);
	void SetDiffuseColor(float x, float y, float z, float w);
	void SetDirection(float x, float y, float z);


	XMFLOAT4 GetSpecularColor();
	float GetSpecularPower();

	XMFLOAT4 GetAmbientColor();
	XMFLOAT4 GetDiffuseColor();
	XMFLOAT3 GetDirection();

private:
	XMFLOAT4 m_specColor;
	float m_sPecularColorPower;
	XMFLOAT4 m_anbienteColor;
	XMFLOAT4 m_diffuseColor;
	XMFLOAT3 m_direction;
	
};

#endif