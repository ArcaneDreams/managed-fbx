#include "Stdafx.h"
#include "FBXVector.h"

using namespace ArcManagedFBX;


FBXVector::FBXVector(float64 x,float64 y,float64 z,float64 w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

FBXVector::FBXVector(FbxVector4 vector)
{

}

FBXVector::FBXVector(FBXVector^ other)
{

}


FBXVector^ FBXVector::Cross(FBXVector^ other)
{
	return gcnew FBXVector();
}

float64 FBXVector::Dot(FBXVector^ other)
{
	return 0.0f;
}