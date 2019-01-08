#include "geometry.h"
#include <cmath>
#include <math.h>

struct TVector3
{
	float m_fX;
	float m_fY;
	float m_fZ;
};

bool geometry::Equals(const TVector3& _krA, const TVector3& _krB)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;

	if (fx1 == fx2 && fy1 == fy2 && fz1 == fz2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

geometry::TVector3& Subtract(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fx2 = _krB.m_fX;
	float fy2 = _krB.m_fY;
	float fz2 = _krB.m_fZ;


	_rResultant.m_fX = fx2 - fx1;
	_rResultant.m_fY = fy2 - fy1;
	_rResultant.m_fZ = fz2 - fz1;
}

float geometry::Magnitude(const TVector3& _krA)
{
	float fx1 = _krA.m_fX;
	float fy1 = _krA.m_fY;
	float fz1 = _krA.m_fZ;

	float fm = sqrt(pow(_krA.m_fX, 2) + pow(_krA.m_fY, 2) + pow(_krA.m_fZ, 2));
	return fm;

}

geometry::TVector3& CrossProduct(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float a1 = _krA.m_fX;
	float a2 = _krA.m_fY;
	float a3 = _krA.m_fZ;

	float b1 = _krB.m_fX;
	float b2 = _krB.m_fY;
	float b3 = _krB.m_fZ;

	_rResultant.m_fX = (a2*b3) - (a3-b2);
	_rResultant.m_fY = (a3*b1) - (a1*b3);
	_rResultant.m_fZ = (a1*b2) - (a2*b1);

	
	
}

geometry::TVector3& Projection(const TVector3& _krA, const TVector3& _krB, TVector3& _rResultant)
{
	float a1 = _krA.m_fX;
	float a2 = _krA.m_fY;
	//float a3 = _krA.m_fZ;

	float b1 = _krB.m_fX;
	float b2 = _krB.m_fY;
	//float b3 = _krB.m_fZ;


}



//geometry::geometry()
//{
//}
//
//
//geometry::~geometry()
//{
//}
