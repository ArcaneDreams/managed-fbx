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
	private:
		float64 x,y,z,w;
	};
}