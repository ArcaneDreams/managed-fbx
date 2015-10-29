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

FBXVector^ ArcManagedFBX::FBXVector::ConvertVector2(FbxVector2* instance)
{
	if (instance != nullptr)
		return gcnew FBXVector(instance->mData[0],instance->mData[1],0.f,0.f);

	return gcnew FBXVector(0.f,0.f,0.f,0.f);
}

FBXVector^ ArcManagedFBX::FBXVector::ConvertVector3(FbxDouble3* instance)
{
	return FBXVector::Zero;
}

FBXVector^ ArcManagedFBX::FBXVector::ConvertVector4(FbxDouble4* instance)
{
	return FBXVector::Zero;
}

FBXVector^ ArcManagedFBX::FBXVector::ConvertVector4(FbxVector4* instance)
{
	if (instance != nullptr)
		return gcnew FBXVector(instance->mData[0],instance->mData[1],instance->mData[2],instance->mData[3]);

	return gcnew FBXVector(0.f,0.f,0.f,0.f);
}

FBXVector^ ArcManagedFBX::FBXVector::ConvertVector2(FbxDouble2* instance)
{
	return FBXVector::Zero;
}

FbxVector2 ArcManagedFBX::FBXVector::GenerateVector2()
{
	FbxVector2 outputVector = FbxVector2(this->x,this->y);
	
	return outputVector;
}

String^ ArcManagedFBX::FBXVector::ToString()
{
	return String::Format("X:{0}, Y:{1}, Z:{2}, W:{3}",x,y,z,w);
}

FbxVector4 ArcManagedFBX::FBXVector::GenerateVector4()
{
	FbxVector4 outputVector = FbxVector4(this->x,this->y,this->z,this->w);

	return outputVector;
}

FBXVector^ ArcManagedFBX::FBXVector::Zero::get()
{
	return gcnew FBXVector(0,0,0,0);
}

FBXVector^ ArcManagedFBX::FBXVector::One::get()
{
	return gcnew FBXVector(1.f,1.f,1.f,1.f);
}