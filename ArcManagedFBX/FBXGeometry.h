#pragma once

using namespace System;
using namespace System::Text;

#include "FBXGeometryBase.h"

namespace ArcManagedFBX
{
	public ref class FBXGeometry : public FBXGeometryBase
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXGeometry)
	private:
		ARC_CHILD_CAST(NativeObject,FbxGeometry,FBXGeometry)
		
	internal:
		FBXGeometry(FbxGeometry* instance);
	};
}