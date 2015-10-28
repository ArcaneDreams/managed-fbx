#include "Stdafx.h"
#include "FBXCamera.h"

using namespace System;
using namespace System::Text;
using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXCamera,FBXNodeAttribute,FbxCamera)

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXCamera)

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
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FocalLength.Get();
}

float64 FBXCamera::FieldOfView::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FieldOfView.Get();
}

float64 FBXCamera::FilmOffsetY::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmOffsetY.Get();
}

float64 FBXCamera::FilmOffsetX::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmOffsetX.Get();
}

float64 FBXCamera::FilmTranslateY::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmTranslateY.Get();
}

float64 FBXCamera::FilmTranslateX::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmTranslateX.Get();
}

float64 FBXCamera::ViewCameraToLookAt::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->ViewCameraToLookAt.Get();
}

float64 FBXCamera::FilmRollPivotX::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmRollPivotX.Get();
}

float64 FBXCamera::FilmRollValue::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmRollValue.Get();
}

float64 FBXCamera::FilmRollPivotY::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->FilmRollPivotY.Get();
}

// Return the camera format to the end user.
EFormat FBXCamera::CameraFormat::get()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return (EFormat)this->GetFBXCamera()->GetFormat();
}

// Set the ratio of the object.
void FBXCamera::SetPixelRatio(double ratio)
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	this->GetFBXCamera()->SetPixelRatio(ratio);
}

const float64 FBXCamera::GetPixelRatio()
{
	ARC_CHECK_AND_THROW(this->GetFBXCamera() == nullptr, "")

	return this->GetFBXCamera()->GetPixelRatio();
}

ArcManagedFBX::Types::EApertureFormat ArcManagedFBX::FBXCamera::GetApertureFormat()
{
	return (EApertureFormat)this->GetFBXCamera()->GetApertureFormat();
}

float64 ArcManagedFBX::FBXCamera::GetFarPlane()
{
	return this->GetFBXCamera()->GetFarPlane();
}

ArcManagedFBX::Types::EFormat ArcManagedFBX::FBXCamera::GetFormat()
{
	return (EFormat)this->GetFBXCamera()->GetFormat();
}

void ArcManagedFBX::FBXCamera::Reset()
{
	this->GetFBXCamera()->Reset();
}

void ArcManagedFBX::FBXCamera::SetFarPlane(float64 distance)
{
	this->GetFBXCamera()->SetFarPlane(distance);
}
