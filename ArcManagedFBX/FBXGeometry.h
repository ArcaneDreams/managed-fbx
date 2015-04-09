#pragma once

#include "FBXGeometryBase.h"

using namespace System;
using namespace System::Text;
using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// The geometry that represents the mesh that we are working with
	public ref class FBXGeometry : public FBXGeometryBase
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXGeometry)

		virtual AttributeType GetAttributeType() override;
	
	private:
		ARC_CHILD_CAST(NativeObject,FbxGeometry,FBXGeometry)

	internal:
		FBXGeometry(FbxGeometry* instance);
	};
}