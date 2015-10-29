#pragma once

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public value struct FBXVector
	{
	public:
		FBXVector(FBXVector^ other);
		FBXVector(float64 x,float64 y,float64 z,float64 w);
		
		// Utility functions that are to be used for the vector.
		FBXVector^ Cross(FBXVector^ other);
		float64	Dot(FBXVector^ other);

		ARC_STATIC_PROPERTY_PUBLICGET(FBXVector^,Zero)		
		ARC_STATIC_PROPERTY_PUBLICGET(FBXVector^,One)		

		virtual String^ ToString() override;
	private:
		float64 x,y,z,w;

	internal:
		FbxVector4 GenerateVector4();
		FbxVector2 GenerateVector2();

		// Converter methods used for converting the native instances of vectors into their managed counter-parts.
		static FBXVector^ ConvertVector2(FbxVector2* instance);
		static FBXVector^ ConvertVector4(FbxVector4* instance);

		// Convert the vector template instances that also exist in the sdk
		static FBXVector^ ConvertVector2(FbxDouble2* instance);
		static FBXVector^ ConvertVector3(FbxDouble3* instance);
		static FBXVector^ ConvertVector4(FbxDouble4* instance);

		FBXVector(FbxVector4 vector);
	};

}