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

		void SetPixelRatio(double ratio);

		const float64 GetPixelRatio();
		void SetNearPlane(double distance);

		// The properties that are to be used for representing the camera class.
		ARC_PROPERTY_PUBLICGET(FBXVector,Position)
		ARC_PROPERTY_PUBLICGET(float64,PixelAspectRatio)
		ARC_PROPERTY_PUBLICGET(float64,AspectWidth)
		ARC_PROPERTY_PUBLICGET(float64,AspectHeight)
		ARC_PROPERTY_PUBLICGET(float64,FieldOfView)
		ARC_PROPERTY_PUBLICGET(float64,FocalLength)
		ARC_PROPERTY_PUBLICGET(Format,CameraFormat)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXCamera,FbxCamera)
	private:
		ARC_CHILD_CAST(NativeObject,FbxCamera,FBXCamera);

	};
}