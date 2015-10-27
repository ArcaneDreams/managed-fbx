#include "Stdafx.h"
#include "FBXCamera.h"

using namespace System;
using namespace System::Text;
using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

FBXCamera::FBXCamera(FbxCamera* instance) : FBXNodeAttribute(instance)
{
}

FBXCamera::FBXCamera()
{

}

FBXCamera::~FBXCamera()
{

}

FBXCamera::!FBXCamera()
{

}

void FBXCamera::SetNearPlane(double distance)
{
	this->GetFBXCamera()->SetNearPlane(distance);
}

float64 FBXCamera::AspectHeight::get()
{
	return this->GetFBXCamera()->AspectHeight.Get();
}

float64 FBXCamera::AspectWidth::get()
{
	return this->GetFBXCamera()->AspectWidth.Get();
}

float64 FBXCamera::PixelAspectRatio::get()
{
	return this->GetFBXCamera()->PixelAspectRatio.Get();
}

FBXVector FBXCamera::Position::get()
{
	FbxCamera* instance = this->GetFBXCamera();

	// Return the vector information for the position of the camera.
	return FBXVector(instance->Position.Get().mData[0],
					instance->Position.Get().mData[1],
					instance->Position.Get().mData[2],
					0.f);
}

float64 FBXCamera::FocalLength::get()
{
	return this->GetFBXCamera()->FocalLength.Get();
}

float64 FBXCamera::FieldOfView::get()
{
	return this->GetFBXCamera()->FieldOfView.Get();
}

// Return the camera format to the end user.
EFormat FBXCamera::CameraFormat::get()
{
	return (EFormat)this->GetFBXCamera()->GetFormat();
}

// Set the ratio of the object.
void FBXCamera::SetPixelRatio(double ratio)
{
	this->GetFBXCamera()->SetPixelRatio(ratio);
}

const float64 FBXCamera::GetPixelRatio()
{
	return this->GetFBXCamera()->GetPixelRatio();
}
