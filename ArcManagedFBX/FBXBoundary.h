#pragma once
#ifndef FBXBoundary_h__
#define FBXBoundary_h__

using namespace System;
using namespace System::Runtime;

#include "FBXGeometry.h"

namespace ArcManagedFBX
{
	// Represents the boundary class in the fbx sdk
	public ref class FBXBoundary : FBXGeometry
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXBoundary)
		void ClearCurves();
		bool IsValid([Optional] bool mustClosed);

		int32 GetCurveCount();
		bool IsCounterClockwise();
	private:

	internal:
		ARC_CHILD_CAST(NativeObject,FbxBoundary,FBXBoundary)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXBoundary,FbxBoundary)
	};
}
#endif // FBXBoundary_h__