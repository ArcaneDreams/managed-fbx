#pragma once
#include "FBXVector.h"
#include "FBXNodeAttribute.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXCamera : public FBXNodeAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXCamera)

		void SetPixelRatio(float64 ratio);

		const float64 GetPixelRatio();

		void SetNearPlane(float64 distance);

		void SetFarPlane(float64 distance);

		void Reset();

		EFormat GetFormat();

		float64 GetFarPlane();

		EApertureFormat GetApertureFormat();

		// The properties that are to be used for representing the camera class.
		ARC_PROPERTY_PUBLICGET(FBXVector,Position)

		ARC_PROPERTY_PUBLICGET(float64,PixelAspectRatio)

		ARC_PROPERTY_PUBLICGET(float64,AspectWidth)

		ARC_PROPERTY_PUBLICGET(float64,AspectHeight)

		ARC_PROPERTY_PUBLICGET(float64,FieldOfView)

		ARC_PROPERTY_PUBLICGET(float64,FocalLength)

		ARC_PROPERTY_PUBLICGET(EFormat,CameraFormat)

		ARC_PROPERTY_PUBLICGET(float64,FilmRollPivotX)

		ARC_PROPERTY_PUBLICGET(float64,FilmRollPivotY)

		ARC_PROPERTY_PUBLICGET(float64,FilmRollValue)

		ARC_PROPERTY_PUBLICGET(float64,FilmTranslateX)

		ARC_PROPERTY_PUBLICGET(float64,FilmTranslateY)

		ARC_PROPERTY_PUBLICGET(float64,FilmOffsetY)

		ARC_PROPERTY_PUBLICGET(float64,FilmOffsetX)

		ARC_PROPERTY_PUBLICGET(float64,ViewCameraToLookAt)

		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXCamera,FbxCamera)
	private:
		ARC_CHILD_CAST(NativeObject,FbxCamera,FBXCamera);

	};
}