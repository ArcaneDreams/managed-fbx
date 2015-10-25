#pragma once


#include "FBXVector.h"
#include "FBXAttribute.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXCamera : public FBXAttribute
	{
	public:
		FBXCamera();
		~FBXCamera();
		!FBXCamera();

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
	internal:
		FBXCamera(FbxCamera* instance);
	private:
		ARC_CHILD_CAST(NativeObject,FbxCamera,FBXCamera);

	};
}